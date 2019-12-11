// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "SimpleGASCharacter.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemInterface.h"
#include <WarlockPlayerState.h>
#include "GameFramework/SpringArmComponent.h"

//////////////////////////////////////////////////////////////////////////
// ASimpleGASCharacter

ASimpleGASCharacter::ASimpleGASCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// Don't rotate when the controller rotates. Let that just affect the camera.
	//bUseControllerRotationPitch = true;
	//bUseControllerRotationYaw = true;
	//bUseControllerRotationRoll = true;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = false; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	AbilitySystem = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystem"));
	//AttributeSet = CreateDefaultSubobject<UWarlockAttributeSet>(TEXT("AttributeSet"));

	bAlwaysRelevant = true;
}

//////////////////////////////////////////////////////////////////////////
// Input

void ASimpleGASCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);

	AbilitySystem->BindAbilityActivationToInputComponent(PlayerInputComponent, FGameplayAbilityInputBinds("ConfirmInput", "CancelInput", "AbilityInput"));
}

void ASimpleGASCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void ASimpleGASCharacter::GiveStartingAbilities()
{
	if (Role != ROLE_Authority || !AbilitySystem)
	{
		return;
	}
	if (AbilitySystem)
	{
		if (HasAuthority())
		{
			for (int32 i = 0; i < Abilities.Num(); i++)
			{
				//TSubclassOf<UGameplayAbility>& Ability = Abilities[i];
				AbilitySystem->GiveAbility(FGameplayAbilitySpec(Abilities[i].GetDefaultObject(), 1, i));
			}
		}
		//AbilitySystem->InitAbilityActorInfo(GetPlayerState<AWarlockPlayerState>(), this);
	}
}

void ASimpleGASCharacter::GiveStartingEffects()
{
	if (Role != ROLE_Authority || !AbilitySystem)
	{
		return;
	}
	FGameplayEffectContextHandle EffectContext = AbilitySystem->MakeEffectContext();
	EffectContext.AddSourceObject(this);

	for (TSubclassOf<UGameplayEffect> GameplayEffect : StartupEffects)
	{
		FGameplayEffectSpecHandle NewHandle = AbilitySystem->MakeOutgoingSpec(GameplayEffect, 1, EffectContext);
		if (NewHandle.IsValid())
		{
			FActiveGameplayEffectHandle ActiveGEHandle = AbilitySystem->ApplyGameplayEffectSpecToTarget(*NewHandle.Data.Get(), AbilitySystem);
		}
	}
}

void ASimpleGASCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	SetupAbilitySystemAndAttributes();
}

void ASimpleGASCharacter::SetupAbilitySystemAndAttributes()
{
	AWarlockPlayerState* PS = GetPlayerState<AWarlockPlayerState>();
	if (PS)
	{
		// Set the ASC on the Server. Clients do this in OnRep_PlayerState()
		AbilitySystem = Cast<UAbilitySystemComponent>(PS->GetAbilitySystemComponent());

		AttributeSet = PS->AttributeSet;

		// AI won't have PlayerControllers so we can init again here just to be sure. No harm in initing twice for heroes that have PlayerControllers.
		AbilitySystem->InitAbilityActorInfo(PS, this);

		if (!PS->bHasDefaultAbilities)
		{
			GiveStartingAbilities();
			GiveStartingEffects();
			PS->bHasDefaultAbilities = true;
		}
	}
	else //AI characters
	{
		AbilitySystem->InitAbilityActorInfo(this, this);
		GiveStartingAbilities();
	}
}

void ASimpleGASCharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();
	SetupAbilitySystemAndAttributes();
}

void ASimpleGASCharacter::Die()
{
	if (AbilitySystem)
	{
		AbilitySystem->CancelAllAbilities();
	}
}

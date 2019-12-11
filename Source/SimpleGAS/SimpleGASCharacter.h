// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/Character.h"
#include "WarlockAttributeSet.h"
#include "GameplayEffectTypes.h"
#include "SimpleGASCharacter.generated.h"

UENUM(BlueprintType)
enum class AbilityInput : uint8
{
	Attack UMETA(DisplayName = "Attack"),
	Movement UMETA(DisplayName = "Movement"),
	Defense UMETA(DisplayName = "Defense"),
	UseAbility1 UMETA(DisplayName = "Use Spell 1"),
};
UCLASS(config=Game)
class ASimpleGASCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Abilities, meta = (AllowPrivateAccess = "true"))
	class UAbilitySystemComponent* AbilitySystem;

public:
	ASimpleGASCharacter();
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

	UAbilitySystemComponent* GetAbilitySystemComponent() const override
	{
		return AbilitySystem;
	};

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities")
		TArray<TSubclassOf<class UGameplayAbility>> Abilities;

	UPROPERTY(BlueprintReadOnly, Category = "Attribute Set")
		class UWarlockAttributeSet* AttributeSet;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Abilities")
		TArray<TSubclassOf<class UGameplayEffect>> StartupEffects;

protected:
	void OnRep_PlayerState() override;

	void Die();

	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// End of APawn interface

	void BeginPlay() override;

	void GiveStartingAbilities();
	void GiveStartingEffects();

	void PossessedBy(AController* NewController) override;
	void SetupAbilitySystemAndAttributes();
};


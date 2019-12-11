// Fill out your copyright notice in the Description page of Project Settings.


#include "WarlockPlayerState.h"
AWarlockPlayerState::AWarlockPlayerState()
{
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	AttributeSet = CreateDefaultSubobject<UWarlockAttributeSet>(TEXT("AttributeSetBase"));

	NetUpdateFrequency = 100.0f;
}

UAbilitySystemComponent* AWarlockPlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

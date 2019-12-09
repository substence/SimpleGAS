// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystemComponent.h"
#include "WarlockAttributeSet.h"
#include "WarlockPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class SIMPLEGAS_API AWarlockPlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()	
public:
	AWarlockPlayerState();

	// Inherited via IAbilitySystemInterface
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	UPROPERTY(BlueprintReadOnly, Category="Ability System")
	class UAbilitySystemComponent* AbilitySystemComponent;

	UPROPERTY(BlueprintReadOnly, Category = "Attribute Set")
	class UWarlockAttributeSet* AttributeSet;
};

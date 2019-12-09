// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "WarlockAttributeSet.generated.h"

/**
 * 
 */
UCLASS()
class SIMPLEGAS_API UWarlockAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:
	UWarlockAttributeSet();

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_JumpCount, Category = "Attributes | Jump Count") 
	FGameplayAttributeData JumpCount;
	UFUNCTION() 
	void OnRep_JumpCount() { GAMEPLAYATTRIBUTE_REPNOTIFY(UWarlockAttributeSet, JumpCount); }
	static FGameplayAttribute AttributeJumpCount();

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};

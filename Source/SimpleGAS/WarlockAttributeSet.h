// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "WarlockAttributeSet.generated.h"

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)
/**
 * 
 */
UCLASS()
class SIMPLEGAS_API UWarlockAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_JumpCount, Category = "Attributes | Jump Count") 
	FGameplayAttributeData JumpCount;
	ATTRIBUTE_ACCESSORS(UWarlockAttributeSet, JumpCount)

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_MoveSpeed, Category = "Attributes | MoveSpeed")
		FGameplayAttributeData MoveSpeed;
	ATTRIBUTE_ACCESSORS(UWarlockAttributeSet, MoveSpeed)

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Gold, Category = "Attributes | Gold")
		FGameplayAttributeData Gold;
	ATTRIBUTE_ACCESSORS(UWarlockAttributeSet, Gold)

protected:
	UFUNCTION()
		virtual void OnRep_JumpCount();
	UFUNCTION()
		virtual void OnRep_MoveSpeed();
	UFUNCTION()
		virtual void OnRep_Gold();

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};

// Fill out your copyright notice in the Description page of Project Settings.


#include "WarlockAttributeSet.h"
#include <UnrealNetwork.h>

UWarlockAttributeSet::UWarlockAttributeSet()
{
	JumpCount = FGameplayAttributeData(1.f);
}

void UWarlockAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(UWarlockAttributeSet, JumpCount, COND_None, REPNOTIFY_Always);
}

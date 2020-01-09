// Fill out your copyright notice in the Description page of Project Settings.


#include "WarlockAttributeSet.h"
#include <UnrealNetwork.h>

void UWarlockAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(UWarlockAttributeSet, JumpCount, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UWarlockAttributeSet, MoveSpeed, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UWarlockAttributeSet, Gold, COND_None, REPNOTIFY_Always);
}

void UWarlockAttributeSet::OnRep_JumpCount()
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UWarlockAttributeSet, JumpCount);
}

void UWarlockAttributeSet::OnRep_MoveSpeed()
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UWarlockAttributeSet, MoveSpeed);
}

void UWarlockAttributeSet::OnRep_Gold()
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UWarlockAttributeSet, Gold);
}


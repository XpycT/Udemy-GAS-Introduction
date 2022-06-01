// Fill out your copyright notice in the Description page of Project Settings.

#include "AbilityTypes.h"

FGameplayAbilityInfo::FGameplayAbilityInfo()
	:CooldownDuration(0),
	Cost(0),
	CostType(EAbilityCostType::Mana),
	UIMat(nullptr),
	AbilityClass(nullptr)
{

}

FGameplayAbilityInfo::FGameplayAbilityInfo(float InCooldowDuration, float InCost, EAbilityCostType InCostType, UMaterialInstance* InUIMat, TSubclassOf<UGameplayAbilityBase> InAbilityClass)
	:CooldownDuration(InCooldowDuration),
	Cost(InCost),
	CostType(InCostType),
	UIMat(InUIMat),
	AbilityClass(InAbilityClass)
{

}

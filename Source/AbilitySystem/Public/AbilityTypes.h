// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AbilityTypes.generated.h"

class UGameplayAbilityBase;

UENUM(BlueprintType)
enum class EAbilityCostType : uint8
{
	Health,
	Mana,
	Strength
};

USTRUCT(BlueprintType)
struct FGameplayAbilityInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilityInfo")
		float CooldownDuration;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilityInfo")
		float Cost;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilityInfo")
		EAbilityCostType CostType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilityInfo")
		UMaterialInstance* UIMat;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilityInfo")
		TSubclassOf<UGameplayAbilityBase> AbilityClass;

	FGameplayAbilityInfo();
	FGameplayAbilityInfo(float InCooldowDuration, float InCost, EAbilityCostType InCostType, UMaterialInstance* InUIMat, TSubclassOf<UGameplayAbilityBase> InAbilityClass);
};
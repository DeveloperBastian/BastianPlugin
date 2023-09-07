// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Inventory/LyraInventoryItemDefinition.h"
#include "BALyraInventoryItemFragment.generated.h"

/**
 * 
 */
UCLASS(Abstract, Blueprintable, BlueprintType, meta = (Category = "Bastian Dev", DisplayName = "Base class for Inventory Fragments"))
class BASTIANRUNTIME_API UBALyraInventoryItemFragment : public ULyraInventoryItemFragment
{
	GENERATED_BODY()
	
};

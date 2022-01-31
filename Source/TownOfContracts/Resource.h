// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "Resource.generated.h"
UENUM()
enum ResourceType
{
	None UMETA(DisplayName = "None"),
	Wheat UMETA(DisplayName = "Wheat"),
	Stone UMETA(DisplayName = "Stone"),
	Wood UMETA(DisplayName = "Wood"),
	Gold UMETA(DisplayName = "Gold"),
};

USTRUCT(Blueprintable)
struct TOWNOFCONTRACTS_API FResource : public FTableRowBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
	TEnumAsByte<ResourceType> Resource;
	UPROPERTY(EditAnywhere)
	int ResourceLevel;
};

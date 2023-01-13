// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InventoryItemData.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class INVENTORY_PROJECT_API UInventoryItemData : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString DataString = TEXT("Hello");
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor DataColor = FLinearColor::Blue;
	
	UTexture2D* DataImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int ItemID = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int ItemCount = 0;
};

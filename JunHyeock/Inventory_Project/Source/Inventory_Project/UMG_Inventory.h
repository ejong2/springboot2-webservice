// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "MyTileView.h"
#include "UMG_InventoryItem.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "Components/Button.h"
#include "Components/TileView.h"
#include "InventoryItemData.h"
#include "UMG_Inventory.generated.h"

/**
 * 
 */
UCLASS()
class INVENTORY_PROJECT_API UUMG_Inventory : public UUserWidget
{
	GENERATED_BODY()
	
public:

	UUMG_Inventory(const FObjectInitializer &ObjectInitializer);
	~UUMG_Inventory();


	virtual void NativeConstruct() override;

	void OnButtonClickExample();

	UFUNCTION(BlueprintCallable)
	void AddItemtoInventory(UObject* Item);

	UFUNCTION(BlueprintCallable)
	void AddItemToCenter(UObject* Item);

	void PopItemLeftToCenter();
	void PopItemCenterToLeft();

	

	UPROPERTY(meta = (BindWidget))
	UButton* ExampleButton;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* MYTEXT;

	UPROPERTY(meta = (BindWidget), EditAnywhere, BlueprintReadWrite)
	UTileView* MyItemTileView;

	UPROPERTY(meta = (BindWidget), EditAnywhere, BlueprintReadWrite)
	UTileView* MyItemTileViewCenter;


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UInventoryItemData*> ItemDataArray;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UInventoryItemData*> ItemDataArraySecond;

	bool bIsNotFounded = true;
	//struct ItemSlot
	//{
	//	int ItemId;
	//	int ItemCount;
	//	UInventoryItemData* ItemDataptr;
	//};

	
	
};

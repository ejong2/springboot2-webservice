// Fill out your copyright notice in the Description page of Project Settings.

#include "InventoryItemData.h"
#include "UMG_InventoryItem.h"

void UUMG_InventoryItem::NativeConstruct()
{
	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Blue, TEXT("Item Constructor"));
	Super::NativeConstruct();
	//Background = Cast<UBorder>(GetWidgetFromName(TEXT("ItemBackground")));
	//NameText = Cast<UTextBlock>(GetWidgetFromName(TEXT("ItemName")));

}

void UUMG_InventoryItem::NativeOnListItemObjectSet(UObject* ListItemObject)
{
	UInventoryItemData* Item = Cast<UInventoryItemData>(ListItemObject);
	//UInventoryItemData* Item = Cast<UInventoryItemData>(ListItemObject);
	//if (Item)
	//{
	//	ItemName->SetText(FText::FromString(Item->DataString));
	//}
	ItemName->SetText(FText::FromString(Item->DataString));

}

void UUMG_InventoryItem::NativeOnItemSelectionChanged(bool bIsSelected)
{
	/*if (Background != nullptr)
	{
		Background->SetBrushColor(FLinearColor(0.f, 0.3f, 1.f, 0.5f*(float)bIsSelected));

	}*/
}
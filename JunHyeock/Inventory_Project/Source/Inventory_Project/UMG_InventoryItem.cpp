// Fill out your copyright notice in the Description page of Project Settings.

#include "InventoryItemData.h"
#include "UMG_InventoryItem.h"

void UUMG_InventoryItem::NativeConstruct()
{
	Super::NativeConstruct();
	//Background = Cast<UBorder>(GetWidgetFromName(TEXT("ItemBackground")));
	//NameText = Cast<UTextBlock>(GetWidgetFromName(TEXT("ItemName")));

}

void UUMG_InventoryItem::NativeOnListItemObjectSet(UObject* ListItemObject)
{


	SetData(ListItemObject);

}

void UUMG_InventoryItem::NativeOnItemSelectionChanged(bool bIsSelected)
{
	/*if (Background != nullptr)
	{
		Background->SetBrushColor(FLinearColor(0.f, 0.3f, 1.f, 0.5f*(float)bIsSelected));

	}*/
}

void UUMG_InventoryItem::SetData(UObject* ListItemObject)
{
	if (ListItemObject == nullptr)
		return;
		
	UInventoryItemData* Item = Cast<UInventoryItemData>(ListItemObject);

	ItemName->SetText(FText::FromString(Item->DataString));
	ItemBackground->SetBrushColor(Item->DataColor);
	ItemCount->SetText(FText::AsNumber(Item->ItemCount));


}
// Fill out your copyright notice in the Description page of Project Settings.


#include "UMG_InventoryItem.h"

void UUMG_InventoryItem::NativeConstruct()
{
	Super::NativeConstruct();
	Background = Cast<UBorder>(GetWidgetFromName(TEXT("ItemBackground")));
	NameText = Cast<UTextBlock>(GetWidgetFromName(TEXT("ItemName")));

}

void UUMG_InventoryItem::NativeOnListItemObjectSet(UObject* ListItemObject)
{
	if (Background != nullptr && NameText != nullptr)
	{
		UUMG_InventoryItem* ItemData = Cast<UUMG_InventoryItem>(ListItemObject);
		if (ItemData)
		{
			Background->SetBrushColor(FLinearColor(0, 1, 1));
			//NameText->SetText(ItemData->NameText->GetText());
			//or
			//NameText->SetText(ItemData->NameText->Text);
		}


	}
}

void UUMG_InventoryItem::NativeOnItemSelectionChanged(bool bIsSelected)
{
	if (Background != nullptr)
	{
		Background->SetBrushColor(FLinearColor(0.f, 0.3f, 1.f, 0.5f*(float)bIsSelected));

	}
}
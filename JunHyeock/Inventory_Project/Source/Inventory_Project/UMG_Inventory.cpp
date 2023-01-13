// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/Button.h"
#include "Blueprint/WidgetTree.h"
#include "UMG_Inventory.h"


UUMG_Inventory::UUMG_Inventory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	Visibility = ESlateVisibility::Collapsed;
}

UUMG_Inventory::~UUMG_Inventory()
{
}

void UUMG_Inventory::NativeConstruct()
{
	Super::NativeConstruct();
	// Bind delegates here.

	//TArray<UInventoryItemData*> Inventory;
	//MyItems->SetListItems(Inventory);

	//UInventoryItemData* MyItem = CreateDefaultSubobject<UInventoryItemData>(TEXT("Item"));

	//Construct
	//ExampleButton = WidgetTree->ConstructWidget<UButton>(UButton::StaticClass(),TEXT("MyButtonName"));
	
	//Bind
	//ExampleButton->OnClicked.AddDynamic(this, &UUMG_Inventory::OnButtonClickExample);

	//RootWidget->AddChild(ExampleButton);



}

void UUMG_Inventory::OnButtonClickExample()
{
	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Blue, TEXT("Button Clicked"));
}

void UUMG_Inventory::AddItemtoInventory(UObject* Item)
{
	if (MyItemTileView == nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Blue, TEXT("Itemlist is null"));
		return;
	}

	//it must be parameter. testing now
	//UInventoryItemData* MyItem = NewObject<UInventoryItemData>(this);
	UInventoryItemData* MyItem = Cast<UInventoryItemData>(Item);
	//MyItemTileView->AddItem(MyItem);




	//==============================================
	//if (ItemDataArray.Num() == 0)
	//{
	//	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Blue, TEXT("FirstItem"));
	//	MyItem->ItemCount++;
	//	ItemDataArray.Add(MyItem);
	//	bIsNotFounded = false;
	//}
	//else
	bIsNotFounded = true;
	for (UInventoryItemData* DataItr : ItemDataArray)
	{
		if (MyItem->ItemID == DataItr->ItemID)
		{
			GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Blue, TEXT("Found"));
			//found same itemid
			DataItr->ItemCount++;
			bIsNotFounded = false;
			break;
		}

	}

	if (bIsNotFounded)
	{
		//'다른것만있을때'
		GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Blue, TEXT("NotFound"));

		MyItem->ItemCount++;
		ItemDataArray.Add(MyItem);
	}

	//AddItem with TArray<>
	MyItemTileView->SetListItems(ItemDataArray);
	MyItemTileView->RegenerateAllEntries();
	

		

	//MyItems->SetListItems();

	//MyItems->AddItem(Item);

	//UUMG_InventoryItem* CurrentItem = 

	//MyItems->AddItem();

	
}
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

FReply UUMG_Inventory::CustomDetectDrag(const FPointerEvent& InMouseEvent, UWidget* WidgetDetectingDrag, FKey DragKey)
{
	if (InMouseEvent.GetEffectingButton() == DragKey /*|| PointerEvent.IsTouchEvent()*/)
	{
		FEventReply Reply;

		Reply.NativeReply = FReply::Handled();

		if (WidgetDetectingDrag)
		{
			TSharedPtr<SWidget> SlateWidgetDetectingDrag = WidgetDetectingDrag->GetCachedWidget();
			
			if (SlateWidgetDetectingDrag.IsValid())
			{
				Reply.NativeReply = Reply.NativeReply.DetectDrag(SlateWidgetDetectingDrag.ToSharedRef(), DragKey);

				return Reply.NativeReply;
			}
		}
	}

	return FReply::Unhandled();
}

FReply UUMG_Inventory::NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
	Super::NativeOnMouseButtonDown(InGeometry, InMouseEvent);

	//FEventReply ReplyResult =
	//	UWidgetBlueprintLibrary::DetectDragIfPressed(InMouseEvent, this, EKeys::LeftMouseButton);
	//return ReplyResult.NativeReply;

	return CustomDetectDrag(InMouseEvent, this, EKeys::LeftMouseButton);
}

void UUMG_Inventory::NativeOnDragDetected(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent, UDragDropOperation*& OutOperation)
{
	Super::NativeOnDragDetected(InGeometry, InMouseEvent, OutOperation);

	UDragWidget* DragDropOperation = NewObject<UDragWidget>();
	this->SetVisibility(ESlateVisibility::HitTestInvisible);

	DragDropOperation->WidgetReference = this;
	DragDropOperation->DragOffset = InGeometry.AbsoluteToLocal(InMouseEvent.GetScreenSpacePosition());

	DragDropOperation->DefaultDragVisual = this;
	DragDropOperation->Pivot = EDragPivot::MouseDown;

	OutOperation = DragDropOperation;

}

void UUMG_Inventory::NativeOnDragLeave(const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
	RemoveFromParent();
}



void UUMG_Inventory::NativeOnInitialized()
{
}

void UUMG_Inventory::OnButtonClickExample()
{
	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Blue, TEXT("Button Clicked"));
}

void UUMG_Inventory::AddItemtoInventory(UObject* Item)
{
	if (MyItemTileView == nullptr)
		return;

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
			DataItr->ItemCount += MyItem->ItemCount;
			bIsNotFounded = false;
			break;
		}

	}

	if (bIsNotFounded)
	{
		//'다른것만있을때'
		GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Blue, TEXT("NotFound"));

		//MyItem->ItemCount++;
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

void UUMG_Inventory::AddItemToCenter(UObject* Item)
{
	if (MyItemTileViewCenter == nullptr)
		return;


	UInventoryItemData* MyItem = Cast<UInventoryItemData>(Item);




	//==============================================
	
	bIsNotFounded = true;
	for (UInventoryItemData* DataItr : ItemDataArraySecond)
	{
		if (MyItem->ItemID == DataItr->ItemID)
		{
			GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Blue, TEXT("Found Second"));
			//found same itemid 
			DataItr->ItemCount += MyItem->ItemCount;
			bIsNotFounded = false;
			break;
		}

	}

	if (bIsNotFounded)
	{
		//'다른것만있을때'
		GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Blue, TEXT("NotFound Second"));

		//MyItem->ItemCount++;
		ItemDataArraySecond.Add(MyItem);
	}

	MyItemTileViewCenter->SetListItems(ItemDataArraySecond);
	MyItemTileViewCenter->RegenerateAllEntries();





}

void UUMG_Inventory::PopItemLeftToCenter()
{
	if (ItemDataArray.Num() <= 0)
		return;

	AddItemToCenter(ItemDataArray.Pop());


	MyItemTileView->ClearListItems();
	MyItemTileView->RequestRefresh();
}

void UUMG_Inventory::PopItemCenterToLeft()
{
	if (ItemDataArraySecond.Num() <= 0)
		return;

	AddItemtoInventory(ItemDataArraySecond.Pop());

	//Remove Refresh
	MyItemTileViewCenter->ClearListItems();
	MyItemTileViewCenter->RequestRefresh();


}

void UUMG_Inventory::OneItemLeftToCenter()
{
	if (ItemDataArray.Num() <= 0)
		return;

	if (ItemDataArray.Last()->ItemCount > 1)
	{
		UInventoryItemData* OneItem = NewObject<UInventoryItemData>();

		OneItem->ItemCount = 1;
		OneItem->ItemID = (ItemDataArray.Last())->ItemID;
		OneItem->DataColor = ItemDataArray.Last()->DataColor;
		OneItem->DataString = ItemDataArray.Last()->DataString;

		AddItemToCenter(OneItem);


		ItemDataArray.Last()->ItemCount -= 1;


	}
	else if (ItemDataArray.Last()->ItemCount == 1)
	{
		UInventoryItemData* OneItem = NewObject<UInventoryItemData>();

		OneItem->ItemCount = 1;
		OneItem->ItemID = (ItemDataArray.Last())->ItemID;
		OneItem->DataColor = ItemDataArray.Last()->DataColor;
		OneItem->DataString = ItemDataArray.Last()->DataString;
		AddItemToCenter(OneItem);

		ItemDataArray.Pop();

		//
		MyItemTileView->ClearListItems();
		MyItemTileView->RequestRefresh();
		
	}



	
	MyItemTileView->RegenerateAllEntries();





	
	
}

void UUMG_Inventory::OneItemCenterToLeft()
{
	if (ItemDataArraySecond.Num() <= 0)
		return;


	if (ItemDataArraySecond.Last()->ItemCount > 1)
	{
		UInventoryItemData* OneItem = NewObject<UInventoryItemData>();
		OneItem->ItemCount = 1;
		OneItem->ItemID = ItemDataArraySecond.Last()->ItemID;
		OneItem->DataColor = ItemDataArraySecond.Last()->DataColor;
		OneItem->DataString = ItemDataArraySecond.Last()->DataString;

		AddItemtoInventory(OneItem);


		ItemDataArraySecond.Last()->ItemCount -= 1;
	}
	else if (ItemDataArraySecond.Last()->ItemCount == 1)
	{
		UInventoryItemData* OneItem = NewObject<UInventoryItemData>();
		OneItem->ItemCount = 1;
		OneItem->ItemID = ItemDataArraySecond.Last()->ItemID;
		OneItem->DataColor = ItemDataArraySecond.Last()->DataColor;
		OneItem->DataString = ItemDataArraySecond.Last()->DataString;

		AddItemtoInventory(OneItem);

		ItemDataArraySecond.Pop();

		MyItemTileViewCenter->ClearListItems();
		MyItemTileViewCenter->RequestRefresh();
	}




	MyItemTileViewCenter->RegenerateAllEntries();



}

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

	UPanelWidget* RootWidget = Cast<UPanelWidget>(GetRootWidget());

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

void UUMG_Inventory::AddGainItem()
{
	if (MyItems)
		return;

	//UUMG_InventoryItem* CurrentItem = 

	//MyItems->AddItem();
}
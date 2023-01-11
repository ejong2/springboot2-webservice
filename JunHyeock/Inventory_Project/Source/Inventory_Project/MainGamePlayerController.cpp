// Fill out your copyright notice in the Description page of Project Settings.


#include "MainGamePlayerController.h"
#include "UMG_Inventory.h"

AMainGamePlayerController::AMainGamePlayerController()
{
}

AMainGamePlayerController::~AMainGamePlayerController()
{
}

void AMainGamePlayerController::BeginPlay()
{
	Super::BeginPlay();


}

void AMainGamePlayerController::Tick(float DeltaSecond)
{
	Super::Tick(DeltaSecond);
}

void AMainGamePlayerController::CreateMaingameWidget()
{
	UserInterface = CreateWidget<UUMG_Inventory>(this, UUMG_Inventory::StaticClass());
	FInputModeGameAndUI Mode;
	Mode.SetLockMouseToViewportBehavior(EMouseLockMode::LockAlways);
	Mode.SetHideCursorDuringCapture(false);
	SetInputMode(Mode);

	//							Z Order
	UserInterface->AddToViewport(9999);
}
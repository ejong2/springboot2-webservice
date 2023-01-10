// Fill out your copyright notice in the Description page of Project Settings.


#include "PC_SocketPC.h"
#include "MyCubeActor.h"
#include "Kismet/GameplayStatics.h"

void APC_SocketPC::BeginPlay()
{
	Super::BeginPlay();
	MyThreadObject = new SocketThreadClass;
	EnableInput(UGameplayStatics::GetPlayerController(GWorld, 0));

}

void APC_SocketPC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (MyThreadObject)
	{
		switch (MyThreadObject->CurrentOrder)
		{
		case 1: 
			//GEngine->AddOnScreenDebugMessage(-1, 0.1f, FColor::Blue, FString::Printf(TEXT("MoveForward")));
			if (MyActor)
			{
				MyActor->AddActorWorldOffset(FVector(1, 0, 0));
			}
			break;
		case 2:
			//GEngine->AddOnScreenDebugMessage(-1, 0.1f, FColor::Blue, FString::Printf(TEXT("MoveRight")));
			if (MyActor)
			{
				MyActor->AddActorWorldOffset(FVector(0, 1, 0));
			}
			break;
		case 3:
			//GEngine->AddOnScreenDebugMessage(-1, 0.1f, FColor::Blue, FString::Printf(TEXT("MoveBackward")));
			if (MyActor)
			{
				MyActor->AddActorWorldOffset(FVector(-1, 0, 0));
			}
			break;
		case 4:
			//GEngine->AddOnScreenDebugMessage(-1, 0.1f, FColor::Blue, FString::Printf(TEXT("MoveLeft")));
			if (MyActor)
			{
				MyActor->AddActorWorldOffset(FVector(0, -1, 0));
			}
			break;
		case 5:
			GEngine->AddOnScreenDebugMessage(-1, 0.1f, FColor::Blue, FString::Printf(TEXT("Spawn")));
			if (MyActor == nullptr)
			{
				SpawnMyActor();
			}
			break;

		default:
			GEngine->AddOnScreenDebugMessage(-1, 0.1f, FColor::Blue, FString::Printf(TEXT("Nothting")));
			break;
		}
	}
	
}

void APC_SocketPC::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAction(TEXT("Stop"), IE_Pressed, this, &APC_SocketPC::Stop);
	InputComponent->BindAction(TEXT("MoveForward"), IE_Pressed, this, &APC_SocketPC::MoveForward);
	InputComponent->BindAction(TEXT("MoveBackward"), IE_Pressed, this, &APC_SocketPC::MoveBackward);
	InputComponent->BindAction(TEXT("MoveRight"), IE_Pressed, this, &APC_SocketPC::MoveRight);
	InputComponent->BindAction(TEXT("MoveLeft"), IE_Pressed, this, &APC_SocketPC::MoveLeft);
	InputComponent->BindAction(TEXT("Spawn"), IE_Pressed, this, &APC_SocketPC::ClientSpawn);


}
  
void APC_SocketPC::SpawnMyActor()
{
	if (MyThreadObject)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("SpawnMyActor")));
		MyActor = GWorld->SpawnActor<AMyCubeActor>(FVector(0, 0, 0), FRotator(0, 0, 0));
	}
}

void APC_SocketPC::Stop()
{
	ClientOrder = 0;
}

void APC_SocketPC::MoveForward()
{
	ClientOrder = 1;
	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Blue, FString::Printf(TEXT("MoveForward")));
}

void APC_SocketPC::MoveRight()
{
	ClientOrder = 2;
	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Blue, FString::Printf(TEXT("MoveRight")));
}

void APC_SocketPC::MoveBackward()
{
	ClientOrder = 3;
	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Blue, FString::Printf(TEXT("MoveBackward")));
}

void APC_SocketPC::MoveLeft()
{
	ClientOrder = 4;
	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Blue, FString::Printf(TEXT("MoveLeft")));
}



void APC_SocketPC::ClientSpawn()
{
	ClientOrder = 5;
	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Blue, FString::Printf(TEXT("Spawn")));
}




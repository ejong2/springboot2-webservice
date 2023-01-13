// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SocketThreadClass.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PC_SocketPC.generated.h"

/**
 * 
 */
UCLASS()
class TENTH_TCPCONNECT_ONE_API APC_SocketPC : public APlayerController
{
	GENERATED_BODY()
public:
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	void SetupInputComponent() override;


	SocketThreadClass* MyThreadObject;
	
	AActor* MyActor;
	
	void SpawnMyActor();

	UFUNCTION()
	void Stop();
	UFUNCTION()
	void MoveForward();
	UFUNCTION()
	void MoveRight();
	UFUNCTION()
	void MoveLeft();
	UFUNCTION()
	void MoveBackward();
	UFUNCTION()
	void ClientSpawn();

	//Stop = 0, MoveForward = 1 , MoveRight = 2, MoveBackward = 3, MoveLeft = 4, spawn = 5 
	int ClientOrder = 0;



};

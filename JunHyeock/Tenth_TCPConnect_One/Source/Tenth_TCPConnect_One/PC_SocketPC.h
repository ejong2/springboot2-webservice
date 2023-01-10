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


	SocketThreadClass* MyThreadObject;
	
};

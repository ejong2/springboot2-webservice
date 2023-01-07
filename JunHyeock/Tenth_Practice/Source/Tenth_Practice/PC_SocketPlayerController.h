// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "Engine.h"
#include <Networking/Public/Networking.h>
#include "Sockets.h"
#include "SocketSubsystem.h"
#include "GameFramework/PlayerController.h"
#include "PC_SocketPlayerController.generated.h"



/**
 * 
 */
UCLASS()
class TENTH_PRACTICE_API APC_SocketPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:

	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable, Category = Socket)
	void ConnectToServer();


};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <Networking/Public/Networking.h>
#include "CoreMinimal.h"
#include "Engine.h"
#include "Sockets.h"
#include "SocketSubsystem.h"
#include "GameFramework/PlayerController.h"
#include "PC_SocketPlayerController.generated.h"



UENUM(BlueprintType)
enum class EMessagePacket : uint8
{
	//Server To Cleint
	NoneEnum			=	 0,
	S2C_RegisterID		=	 10	UMETA(DisPlayName = "S2C_RegisterID"),
	S2C_Spawn			=	 20	UMETA(DisPlayName = "S2C_Spawn"),
	S2C_Destroy			=	 30	UMETA(DisPlayName = "S2C_Destroy"),
	C2S_Move			=	 40	UMETA(DisPlayName = "C2S_Move"),
	S2C_Move			=	 50	UMETA(DisPlayName = "S2C_Move"),


};


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
	bool ConnectToServer();

	int X = 0;
	int Y = 0;
	int Z = 0;


};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "Windows/AllowWindowsPlatformTypes.h"
#include "Windows/prewindowsapi.h"

#pragma comment(lib, "ws2_32.lib")
#include <WinSock2.h>

#include "Windows/PostWindowsApi.h"
#include "Windows/HideWindowsPlatformTypes.h"

#include "ClientSocketObject.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PC_SocketControllerWinVer.generated.h"

/**
 * 
 */

//class PlayerData
//{
//public:
//
//	SOCKET Socket;
//	int X = 0;
//	int Y = 0;
//	int Z = 0;
//
//};
//
//
//UENUM(BlueprintType)
//enum class EMessagePacket : uint8
//{
//	//Server To Client
//	NoneEnum = 0,
//	S2C_RegisterID = 10	UMETA(DisPlayName = "S2C_RegisterID"),
//	S2C_Spawn = 20	UMETA(DisPlayName = "S2C_Spawn"),
//	S2C_Destroy = 30	UMETA(DisPlayName = "S2C_Destroy"),
//	C2S_Move = 40	UMETA(DisPlayName = "C2S_Move"),
//	S2C_Move = 50	UMETA(DisPlayName = "S2C_Move"),
//
//
//};


UCLASS()
class TENTH_PRACTICE_API APC_SocketControllerWinVer : public APlayerController
{
	GENERATED_BODY()
public:

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	virtual ~APC_SocketControllerWinVer() override;




	//	2			8				4			4			4		
	//Code		SocketID			X			Y			Z
	//[][]	[][][][][][][][]	[][][][]	[][][][]	[][][][]
	char Data[22] = { 0, };

	


};





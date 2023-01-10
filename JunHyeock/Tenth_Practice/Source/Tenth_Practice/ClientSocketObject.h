// Fill out your copyright notice in the Description page of Project Settings.
#define _WINSOCK_DEPRECATED_NO_WARNINGS
#pragma once


#include "Windows/AllowWindowsPlatformTypes.h"
#include "Windows/prewindowsapi.h"

#pragma comment(lib, "ws2_32.lib")
#include <WinSock2.h>
#include <map>

#include "Windows/PostWindowsApi.h"
#include "Windows/HideWindowsPlatformTypes.h"

#include "CoreMinimal.h"



class PlayerData
{
public:

	SOCKET MySocket;
	int X = 0;
	int Y = 0;
	int Z = 0;

};


UENUM(BlueprintType)
enum class EMessagePacket : uint8
{
	//Server To Client
	NoneEnum = 0,
	S2C_RegisterID = 10	UMETA(DisPlayName = "S2C_RegisterID"),
	S2C_Spawn = 20	UMETA(DisPlayName = "S2C_Spawn"),
	S2C_Destroy = 30	UMETA(DisPlayName = "S2C_Destroy"),
	C2S_Move = 40	UMETA(DisPlayName = "C2S_Move"),
	S2C_Move = 50	UMETA(DisPlayName = "S2C_Move"),


};

/**
 * 
 */
class TENTH_PRACTICE_API ClientSocketObject : public FRunnable
{
public:
	ClientSocketObject();
	~ClientSocketObject();

	bool Init() override;
	uint32 Run() override;
	void Exit() override;

	void ConnectToServer();

	void ProcessPacket(char* Data);

	void MoveProcess(int Input);

	



public:
	FRunnableThread* Thread;

	SOCKET ServerSocket;

	SOCKET MySocketID;

	TMap<SOCKET, PlayerData*> PlayerList;

	PlayerData* NewPlayer = nullptr;


	//	2			8				4			4			4		
	//Code		SocketID			X			Y			Z
	//[][]	[][][][][][][][]	[][][][]	[][][][]	[][][][]
	char Buffer[22] = { 0, };
	unsigned short Code = 0;

};

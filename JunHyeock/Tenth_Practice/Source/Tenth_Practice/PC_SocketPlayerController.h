// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <Networking/Public/Networking.h>
#include <Utils.h>
#include "CoreMinimal.h"
#include "Engine.h"
#include "Sockets.h"
#include "SocketSubsystem.h"
#include "GameFramework/PlayerController.h"
#include "PC_SocketPlayerController.generated.h"



class PlayerData
{
public:
	FSocket* Socket = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateSocket(NAME_Stream, TEXT("default"), false);

	int X = 0;
	int Y = 0;
	int Z = 0;

};



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

	virtual void Tick(float DeltaTime) override;
	

	UFUNCTION(BlueprintCallable, Category = Socket)
	bool ConnectToServer();

	void ProcessPacket(char* Pakcet);

	virtual ~APC_SocketPlayerController() override;


	//	2			8				4			4			4		
	//Code		SocketID			X			Y			Z
	//[][]	[][][][][][][][]	[][][][]	[][][][]	[][][][]
	char Data[22] = { 1, };

	TMap<FSocket*, PlayerData*> PlayerList;

	FSocket* MySocketID = 0L;


	FSocket* Socket = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateSocket(NAME_Stream, TEXT("default"), false);


};



//-------------------------------------------------------------------------------------




class PacketTask : public FNonAbandonableTask
{

public:


	PacketTask() {}

	static const TCHAR* GetTaskName()
	{
		return TEXT("PacketTask");
	}

	FORCEINLINE static TStatId GetStatId()
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT(FVictoryTestTask, STATGROUP_TaskGraphTasks)
	}

	static ENamedThreads::Type GetDesiredThread()
	{
		return ENamedThreads::AnyThread;
	}

	static ESubsequentsMode::Type GetSubsequentsMode()
	{
		return ESubsequentsMode::TrackSubsequents;
	}




	void DoTask(ENamedThreads::Type currentThread, const FGraphEventRef& myCompletionGraphEvent)
	{
		UE_LOG(LogTemp, Log, TEXT("Do Task"));


	}


	
	void Excute_Thread()
	{
		MultiThread_CompletionEvents.Add(TGraphTask<PacketTask>::CreateTask(NULL, ENamedThreads::GameThread).ConstructAndDispatchWhenReady());
	}

	~PacketTask() {}



	//Convenience typedef for a an array a graph events
	FGraphEventArray MultiThread_CompletionEvents;

};

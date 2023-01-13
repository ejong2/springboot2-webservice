// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "RecvThreadClass.h"
#include "MyCubeActor.h"
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Tenth_TCPConnect_OneGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class TENTH_TCPCONNECT_ONE_API ATenth_TCPConnect_OneGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	ATenth_TCPConnect_OneGameModeBase();

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	AActor* MyActor;
	class RecvThreadClass* MyThreadObject;

	struct	Packet
	{
		int Header = 0;
		int X = 0;
		int Y = 0;
		int Z = 0;
	};

	Packet GameModePacket;

	void ProcessPacket();
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsActivate = false;

	UFUNCTION(BlueprintCallable)
	void StartThread();
	UFUNCTION(BlueprintCallable)
	void EndThread();

	
};

// Fill out your copyright notice in the Description page of Project Settings.


#include "PC_SocketControllerWinVer.h"

void APC_SocketControllerWinVer::BeginPlay()
{
	Super::BeginPlay();

	ClientSocketObject* SocketObject = new ClientSocketObject;

}

void APC_SocketControllerWinVer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//TMap<SOCKET, PlayerData*>::TIterator MyPlayer = 
	//auto MyPlayer = PlayerList.FindRef(MySocketID);

}



APC_SocketControllerWinVer::~APC_SocketControllerWinVer()
{
}



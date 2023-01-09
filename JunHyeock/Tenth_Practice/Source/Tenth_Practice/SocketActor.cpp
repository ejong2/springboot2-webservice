// Fill out your copyright notice in the Description page of Project Settings.


#include "SocketActor.h"

// Sets default values
ASocketActor::ASocketActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASocketActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASocketActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASocketActor::ConnectServer()
{
	WSADATA wsaData;
	WSAStartup(MAKEWORD(2, 2), &wsaData);

	SOCKET ServerSocket = socket(AF_INET, SOCK_STREAM, 0);

	SOCKADDR_IN ServerSocketAddr;
	memset(&ServerSocketAddr, 0, sizeof(ServerSocketAddr));
	ServerSocketAddr.sin_family = PF_INET;
	ServerSocketAddr.sin_addr.S_un.S_addr = inet_addr("127.0.0.1");
	ServerSocketAddr.sin_port = htons(7476);


	connect(ServerSocket, (SOCKADDR*)&ServerSocketAddr, sizeof(ServerSocketAddr));
}


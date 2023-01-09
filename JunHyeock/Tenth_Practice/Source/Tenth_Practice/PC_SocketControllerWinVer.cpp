// Fill out your copyright notice in the Description page of Project Settings.


#include "PC_SocketControllerWinVer.h"

void APC_SocketControllerWinVer::BeginPlay()
{
	Super::BeginPlay();

	ConnectToServer();
}

void APC_SocketControllerWinVer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void APC_SocketControllerWinVer::ConnectToServer()
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

APC_SocketControllerWinVer::~APC_SocketControllerWinVer()
{
}


//============================================================================================

SocketThread::SocketThread()
{
	Thread = FRunnableThread::Create(this, TEXT("Network Thread"));
}

SocketThread::~SocketThread()
{
	if (Thread)
	{
		//Quit thread
		Thread->WaitForCompletion();
		Thread->Kill();
		delete Thread;
	}
}
#pragma endregion

bool SocketThread::Init()
{
	//Connect Socket
	return false;
}

uint32 SocketThread::Run()
{
	while (true)
	{
		//recv
	}
	return 0;
}

void SocketThread::Exit()
{
	if (Socket)
	{
		//Socket Disconnect
		closesocket(Socket);
		WSACleanup();
	}
}

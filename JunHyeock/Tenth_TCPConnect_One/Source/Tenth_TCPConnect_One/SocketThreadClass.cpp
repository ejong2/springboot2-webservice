// Fill out your copyright notice in the Description page of Project Settings.


#include "SocketThreadClass.h"

SocketThreadClass::SocketThreadClass()
{
	Thread = FRunnableThread::Create(this, TEXT("Network Thread"));
}

SocketThreadClass::~SocketThreadClass()
{
	if (Thread)
	{
		//Shutdown thread
		Thread->WaitForCompletion();
		Thread->Kill();
		delete Thread;
	}
}

bool SocketThreadClass::Init()
{
	ConnectServer();
	return true;
}

uint32 SocketThreadClass::Run()
{
	UE_LOG(LogTemp, Warning, TEXT("Running"));
	while (0)
	{

	}
	return 0;
}

void SocketThreadClass::Exit()
{
	if (ServerSocket)
	{
		//Socket Disconnect
		closesocket(ServerSocket);
		WSACleanup();
	}
}

void SocketThreadClass::ConnectServer()
{
	UE_LOG(LogTemp, Warning, TEXT("Try to Connect"));

	WSADATA wsaData;
	WSAStartup(MAKEWORD(2, 2), &wsaData);

	ServerSocket = socket(AF_INET, SOCK_STREAM, 0);

	SOCKADDR_IN ServerSocketAddr;
	memset(&ServerSocketAddr, 0, sizeof(ServerSocketAddr));
	ServerSocketAddr.sin_family = PF_INET;
	ServerSocketAddr.sin_addr.S_un.S_addr = inet_addr("127.0.0.1");
	ServerSocketAddr.sin_port = htons(7476);

	connect(ServerSocket, (SOCKADDR*)&ServerSocketAddr, sizeof(ServerSocketAddr));

}

// Fill out your copyright notice in the Description page of Project Settings.


#include "ClientSocketObject.h"

ClientSocketObject::ClientSocketObject()
{
    Thread = FRunnableThread::Create(this, TEXT("Network Thread"));
}

ClientSocketObject::~ClientSocketObject()
{
	if (Thread)
	{
		//Quit thread
		Thread->WaitForCompletion();
		Thread->Kill();
		delete Thread;
	}
}

bool ClientSocketObject::Init()
{
	//Connect Socket
	return false;
}

uint32 ClientSocketObject::Run()
{
	while (true)
	{
		//recv
	}
	return 0;
}

void ClientSocketObject::Exit()
{
	if (Socket)
	{
		//Socket Disconnect
		closesocket(Socket);
		WSACleanup();
	}
}

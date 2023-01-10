// Fill out your copyright notice in the Description page of Project Settings.
#define _WINSOCK_DEPRECATED_NO_WARNINGS
#pragma once

#include "Windows/AllowWindowsPlatformTypes.h"
#include "Windows/prewindowsapi.h"

#pragma comment(lib, "ws2_32.lib")
#include <WinSock2.h>

#include "Windows/PostWindowsApi.h"
#include "Windows/HideWindowsPlatformTypes.h"



#include "CoreMinimal.h"


/**
 * 
 */

class TENTH_TCPCONNECT_ONE_API SocketThreadClass : public FRunnable
{

public:
	SocketThreadClass();
	~SocketThreadClass();

	bool Init() override;
	uint32 Run() override;
	void Exit() override;

	void ConnectServer();

public:

	FRunnableThread* Thread;

	SOCKET ServerSocket;
	
};



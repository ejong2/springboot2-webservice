// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <map>
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
class TENTH_PRACTICE_API ClientSocketObject : public FRunnable
{
public:
	ClientSocketObject();
	~ClientSocketObject();

	bool Init() override;
	uint32 Run() override;
	void Exit() override;

	SOCKET Socket;

private:
	FRunnableThread* Thread;

};

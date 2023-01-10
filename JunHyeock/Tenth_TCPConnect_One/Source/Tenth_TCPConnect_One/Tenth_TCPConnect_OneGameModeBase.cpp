// Copyright Epic Games, Inc. All Rights Reserved.


#include "Tenth_TCPConnect_OneGameModeBase.h"
#include "PC_SocketPC.h"

ATenth_TCPConnect_OneGameModeBase::ATenth_TCPConnect_OneGameModeBase()
{
	PlayerControllerClass = APC_SocketPC::StaticClass();
}

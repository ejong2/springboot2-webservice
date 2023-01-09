// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TENTH_PRACTICE_ClientSocketObject_generated_h
#error "ClientSocketObject.generated.h already included, missing '#pragma once' in ClientSocketObject.h"
#endif
#define TENTH_PRACTICE_ClientSocketObject_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tenth_Practice_Source_Tenth_Practice_ClientSocketObject_h


#define FOREACH_ENUM_EMESSAGEPACKET(op) \
	op(EMessagePacket::NoneEnum) \
	op(EMessagePacket::S2C_RegisterID) \
	op(EMessagePacket::S2C_Spawn) \
	op(EMessagePacket::S2C_Destroy) \
	op(EMessagePacket::C2S_Move) \
	op(EMessagePacket::S2C_Move) 

enum class EMessagePacket : uint8;
template<> TENTH_PRACTICE_API UEnum* StaticEnum<EMessagePacket>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

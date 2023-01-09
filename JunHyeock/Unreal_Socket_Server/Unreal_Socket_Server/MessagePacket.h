#pragma once

enum class MessagePacket
{
	//Server To Cleint
	S2C_RegisterID		=	10,
	S2C_Spawn			=	20,
	S2C_Destroy			=	30,
	C2S_Move			=	40,
	S2C_Move			=	50,

};
// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TENTH_PRACTICE_SocketActor_generated_h
#error "SocketActor.generated.h already included, missing '#pragma once' in SocketActor.h"
#endif
#define TENTH_PRACTICE_SocketActor_generated_h

#define Tenth_Practice_Source_Tenth_Practice_SocketActor_h_53_SPARSE_DATA
#define Tenth_Practice_Source_Tenth_Practice_SocketActor_h_53_RPC_WRAPPERS
#define Tenth_Practice_Source_Tenth_Practice_SocketActor_h_53_RPC_WRAPPERS_NO_PURE_DECLS
#define Tenth_Practice_Source_Tenth_Practice_SocketActor_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASocketActor(); \
	friend struct Z_Construct_UClass_ASocketActor_Statics; \
public: \
	DECLARE_CLASS(ASocketActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tenth_Practice"), NO_API) \
	DECLARE_SERIALIZER(ASocketActor)


#define Tenth_Practice_Source_Tenth_Practice_SocketActor_h_53_INCLASS \
private: \
	static void StaticRegisterNativesASocketActor(); \
	friend struct Z_Construct_UClass_ASocketActor_Statics; \
public: \
	DECLARE_CLASS(ASocketActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tenth_Practice"), NO_API) \
	DECLARE_SERIALIZER(ASocketActor)


#define Tenth_Practice_Source_Tenth_Practice_SocketActor_h_53_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASocketActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASocketActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASocketActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASocketActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASocketActor(ASocketActor&&); \
	NO_API ASocketActor(const ASocketActor&); \
public:


#define Tenth_Practice_Source_Tenth_Practice_SocketActor_h_53_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASocketActor(ASocketActor&&); \
	NO_API ASocketActor(const ASocketActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASocketActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASocketActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASocketActor)


#define Tenth_Practice_Source_Tenth_Practice_SocketActor_h_53_PRIVATE_PROPERTY_OFFSET
#define Tenth_Practice_Source_Tenth_Practice_SocketActor_h_50_PROLOG
#define Tenth_Practice_Source_Tenth_Practice_SocketActor_h_53_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tenth_Practice_Source_Tenth_Practice_SocketActor_h_53_PRIVATE_PROPERTY_OFFSET \
	Tenth_Practice_Source_Tenth_Practice_SocketActor_h_53_SPARSE_DATA \
	Tenth_Practice_Source_Tenth_Practice_SocketActor_h_53_RPC_WRAPPERS \
	Tenth_Practice_Source_Tenth_Practice_SocketActor_h_53_INCLASS \
	Tenth_Practice_Source_Tenth_Practice_SocketActor_h_53_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tenth_Practice_Source_Tenth_Practice_SocketActor_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tenth_Practice_Source_Tenth_Practice_SocketActor_h_53_PRIVATE_PROPERTY_OFFSET \
	Tenth_Practice_Source_Tenth_Practice_SocketActor_h_53_SPARSE_DATA \
	Tenth_Practice_Source_Tenth_Practice_SocketActor_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	Tenth_Practice_Source_Tenth_Practice_SocketActor_h_53_INCLASS_NO_PURE_DECLS \
	Tenth_Practice_Source_Tenth_Practice_SocketActor_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TENTH_PRACTICE_API UClass* StaticClass<class ASocketActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tenth_Practice_Source_Tenth_Practice_SocketActor_h


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

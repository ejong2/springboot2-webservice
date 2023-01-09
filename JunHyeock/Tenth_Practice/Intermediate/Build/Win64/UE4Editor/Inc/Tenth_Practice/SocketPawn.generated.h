// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TENTH_PRACTICE_SocketPawn_generated_h
#error "SocketPawn.generated.h already included, missing '#pragma once' in SocketPawn.h"
#endif
#define TENTH_PRACTICE_SocketPawn_generated_h

#define Tenth_Practice_Source_Tenth_Practice_SocketPawn_h_12_SPARSE_DATA
#define Tenth_Practice_Source_Tenth_Practice_SocketPawn_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveForward);


#define Tenth_Practice_Source_Tenth_Practice_SocketPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveForward);


#define Tenth_Practice_Source_Tenth_Practice_SocketPawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASocketPawn(); \
	friend struct Z_Construct_UClass_ASocketPawn_Statics; \
public: \
	DECLARE_CLASS(ASocketPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tenth_Practice"), NO_API) \
	DECLARE_SERIALIZER(ASocketPawn)


#define Tenth_Practice_Source_Tenth_Practice_SocketPawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASocketPawn(); \
	friend struct Z_Construct_UClass_ASocketPawn_Statics; \
public: \
	DECLARE_CLASS(ASocketPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tenth_Practice"), NO_API) \
	DECLARE_SERIALIZER(ASocketPawn)


#define Tenth_Practice_Source_Tenth_Practice_SocketPawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASocketPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASocketPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASocketPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASocketPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASocketPawn(ASocketPawn&&); \
	NO_API ASocketPawn(const ASocketPawn&); \
public:


#define Tenth_Practice_Source_Tenth_Practice_SocketPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASocketPawn(ASocketPawn&&); \
	NO_API ASocketPawn(const ASocketPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASocketPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASocketPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASocketPawn)


#define Tenth_Practice_Source_Tenth_Practice_SocketPawn_h_12_PRIVATE_PROPERTY_OFFSET
#define Tenth_Practice_Source_Tenth_Practice_SocketPawn_h_9_PROLOG
#define Tenth_Practice_Source_Tenth_Practice_SocketPawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tenth_Practice_Source_Tenth_Practice_SocketPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	Tenth_Practice_Source_Tenth_Practice_SocketPawn_h_12_SPARSE_DATA \
	Tenth_Practice_Source_Tenth_Practice_SocketPawn_h_12_RPC_WRAPPERS \
	Tenth_Practice_Source_Tenth_Practice_SocketPawn_h_12_INCLASS \
	Tenth_Practice_Source_Tenth_Practice_SocketPawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tenth_Practice_Source_Tenth_Practice_SocketPawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tenth_Practice_Source_Tenth_Practice_SocketPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	Tenth_Practice_Source_Tenth_Practice_SocketPawn_h_12_SPARSE_DATA \
	Tenth_Practice_Source_Tenth_Practice_SocketPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Tenth_Practice_Source_Tenth_Practice_SocketPawn_h_12_INCLASS_NO_PURE_DECLS \
	Tenth_Practice_Source_Tenth_Practice_SocketPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TENTH_PRACTICE_API UClass* StaticClass<class ASocketPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tenth_Practice_Source_Tenth_Practice_SocketPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

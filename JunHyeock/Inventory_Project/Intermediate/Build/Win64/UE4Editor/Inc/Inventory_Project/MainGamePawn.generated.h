// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INVENTORY_PROJECT_MainGamePawn_generated_h
#error "MainGamePawn.generated.h already included, missing '#pragma once' in MainGamePawn.h"
#endif
#define INVENTORY_PROJECT_MainGamePawn_generated_h

#define Inventory_Project_Source_Inventory_Project_MainGamePawn_h_12_SPARSE_DATA
#define Inventory_Project_Source_Inventory_Project_MainGamePawn_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGoRight); \
	DECLARE_FUNCTION(execGoForward);


#define Inventory_Project_Source_Inventory_Project_MainGamePawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGoRight); \
	DECLARE_FUNCTION(execGoForward);


#define Inventory_Project_Source_Inventory_Project_MainGamePawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainGamePawn(); \
	friend struct Z_Construct_UClass_AMainGamePawn_Statics; \
public: \
	DECLARE_CLASS(AMainGamePawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Inventory_Project"), NO_API) \
	DECLARE_SERIALIZER(AMainGamePawn)


#define Inventory_Project_Source_Inventory_Project_MainGamePawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMainGamePawn(); \
	friend struct Z_Construct_UClass_AMainGamePawn_Statics; \
public: \
	DECLARE_CLASS(AMainGamePawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Inventory_Project"), NO_API) \
	DECLARE_SERIALIZER(AMainGamePawn)


#define Inventory_Project_Source_Inventory_Project_MainGamePawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainGamePawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMainGamePawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainGamePawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainGamePawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainGamePawn(AMainGamePawn&&); \
	NO_API AMainGamePawn(const AMainGamePawn&); \
public:


#define Inventory_Project_Source_Inventory_Project_MainGamePawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainGamePawn(AMainGamePawn&&); \
	NO_API AMainGamePawn(const AMainGamePawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainGamePawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainGamePawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMainGamePawn)


#define Inventory_Project_Source_Inventory_Project_MainGamePawn_h_12_PRIVATE_PROPERTY_OFFSET
#define Inventory_Project_Source_Inventory_Project_MainGamePawn_h_9_PROLOG
#define Inventory_Project_Source_Inventory_Project_MainGamePawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Inventory_Project_Source_Inventory_Project_MainGamePawn_h_12_PRIVATE_PROPERTY_OFFSET \
	Inventory_Project_Source_Inventory_Project_MainGamePawn_h_12_SPARSE_DATA \
	Inventory_Project_Source_Inventory_Project_MainGamePawn_h_12_RPC_WRAPPERS \
	Inventory_Project_Source_Inventory_Project_MainGamePawn_h_12_INCLASS \
	Inventory_Project_Source_Inventory_Project_MainGamePawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Inventory_Project_Source_Inventory_Project_MainGamePawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Inventory_Project_Source_Inventory_Project_MainGamePawn_h_12_PRIVATE_PROPERTY_OFFSET \
	Inventory_Project_Source_Inventory_Project_MainGamePawn_h_12_SPARSE_DATA \
	Inventory_Project_Source_Inventory_Project_MainGamePawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Inventory_Project_Source_Inventory_Project_MainGamePawn_h_12_INCLASS_NO_PURE_DECLS \
	Inventory_Project_Source_Inventory_Project_MainGamePawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORY_PROJECT_API UClass* StaticClass<class AMainGamePawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Inventory_Project_Source_Inventory_Project_MainGamePawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

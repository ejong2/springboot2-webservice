// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef INVENTORY_PROJECT_MainGamePlayerController_generated_h
#error "MainGamePlayerController.generated.h already included, missing '#pragma once' in MainGamePlayerController.h"
#endif
#define INVENTORY_PROJECT_MainGamePlayerController_generated_h

#define Inventory_Project_Source_Inventory_Project_MainGamePlayerController_h_16_SPARSE_DATA
#define Inventory_Project_Source_Inventory_Project_MainGamePlayerController_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddItemToInventory);


#define Inventory_Project_Source_Inventory_Project_MainGamePlayerController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddItemToInventory);


#define Inventory_Project_Source_Inventory_Project_MainGamePlayerController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainGamePlayerController(); \
	friend struct Z_Construct_UClass_AMainGamePlayerController_Statics; \
public: \
	DECLARE_CLASS(AMainGamePlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Inventory_Project"), NO_API) \
	DECLARE_SERIALIZER(AMainGamePlayerController)


#define Inventory_Project_Source_Inventory_Project_MainGamePlayerController_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAMainGamePlayerController(); \
	friend struct Z_Construct_UClass_AMainGamePlayerController_Statics; \
public: \
	DECLARE_CLASS(AMainGamePlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Inventory_Project"), NO_API) \
	DECLARE_SERIALIZER(AMainGamePlayerController)


#define Inventory_Project_Source_Inventory_Project_MainGamePlayerController_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainGamePlayerController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMainGamePlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainGamePlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainGamePlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainGamePlayerController(AMainGamePlayerController&&); \
	NO_API AMainGamePlayerController(const AMainGamePlayerController&); \
public:


#define Inventory_Project_Source_Inventory_Project_MainGamePlayerController_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainGamePlayerController(AMainGamePlayerController&&); \
	NO_API AMainGamePlayerController(const AMainGamePlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainGamePlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainGamePlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMainGamePlayerController)


#define Inventory_Project_Source_Inventory_Project_MainGamePlayerController_h_16_PRIVATE_PROPERTY_OFFSET
#define Inventory_Project_Source_Inventory_Project_MainGamePlayerController_h_13_PROLOG
#define Inventory_Project_Source_Inventory_Project_MainGamePlayerController_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Inventory_Project_Source_Inventory_Project_MainGamePlayerController_h_16_PRIVATE_PROPERTY_OFFSET \
	Inventory_Project_Source_Inventory_Project_MainGamePlayerController_h_16_SPARSE_DATA \
	Inventory_Project_Source_Inventory_Project_MainGamePlayerController_h_16_RPC_WRAPPERS \
	Inventory_Project_Source_Inventory_Project_MainGamePlayerController_h_16_INCLASS \
	Inventory_Project_Source_Inventory_Project_MainGamePlayerController_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Inventory_Project_Source_Inventory_Project_MainGamePlayerController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Inventory_Project_Source_Inventory_Project_MainGamePlayerController_h_16_PRIVATE_PROPERTY_OFFSET \
	Inventory_Project_Source_Inventory_Project_MainGamePlayerController_h_16_SPARSE_DATA \
	Inventory_Project_Source_Inventory_Project_MainGamePlayerController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Inventory_Project_Source_Inventory_Project_MainGamePlayerController_h_16_INCLASS_NO_PURE_DECLS \
	Inventory_Project_Source_Inventory_Project_MainGamePlayerController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORY_PROJECT_API UClass* StaticClass<class AMainGamePlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Inventory_Project_Source_Inventory_Project_MainGamePlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

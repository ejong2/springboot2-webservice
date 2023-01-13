// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inventory_Project/MainGamePlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainGamePlayerController() {}
// Cross Module References
	INVENTORY_PROJECT_API UClass* Z_Construct_UClass_AMainGamePlayerController_NoRegister();
	INVENTORY_PROJECT_API UClass* Z_Construct_UClass_AMainGamePlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Inventory_Project();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	INVENTORY_PROJECT_API UClass* Z_Construct_UClass_UUMG_Inventory_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMainGamePlayerController::execAddItemToInventory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddItemToInventory();
		P_NATIVE_END;
	}
	void AMainGamePlayerController::StaticRegisterNativesAMainGamePlayerController()
	{
		UClass* Class = AMainGamePlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddItemToInventory", &AMainGamePlayerController::execAddItemToInventory },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMainGamePlayerController_AddItemToInventory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainGamePlayerController_AddItemToInventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainGamePlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainGamePlayerController_AddItemToInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainGamePlayerController, nullptr, "AddItemToInventory", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMainGamePlayerController_AddItemToInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGamePlayerController_AddItemToInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMainGamePlayerController_AddItemToInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMainGamePlayerController_AddItemToInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMainGamePlayerController_NoRegister()
	{
		return AMainGamePlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AMainGamePlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvenWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InvenWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMainGamePlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Inventory_Project,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMainGamePlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMainGamePlayerController_AddItemToInventory, "AddItemToInventory" }, // 1146688628
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainGamePlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MainGamePlayerController.h" },
		{ "ModuleRelativePath", "MainGamePlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainGamePlayerController_Statics::NewProp_WidgetClass_MetaData[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "MainGamePlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMainGamePlayerController_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainGamePlayerController, WidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMainGamePlayerController_Statics::NewProp_WidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainGamePlayerController_Statics::NewProp_WidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainGamePlayerController_Statics::NewProp_InvenWidget_MetaData[] = {
		{ "Category", "MainGamePlayerController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainGamePlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainGamePlayerController_Statics::NewProp_InvenWidget = { "InvenWidget", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainGamePlayerController, InvenWidget), Z_Construct_UClass_UUMG_Inventory_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMainGamePlayerController_Statics::NewProp_InvenWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainGamePlayerController_Statics::NewProp_InvenWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainGamePlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainGamePlayerController_Statics::NewProp_WidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainGamePlayerController_Statics::NewProp_InvenWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMainGamePlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainGamePlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMainGamePlayerController_Statics::ClassParams = {
		&AMainGamePlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMainGamePlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMainGamePlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMainGamePlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMainGamePlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMainGamePlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMainGamePlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMainGamePlayerController, 377511959);
	template<> INVENTORY_PROJECT_API UClass* StaticClass<AMainGamePlayerController>()
	{
		return AMainGamePlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMainGamePlayerController(Z_Construct_UClass_AMainGamePlayerController, &AMainGamePlayerController::StaticClass, TEXT("/Script/Inventory_Project"), TEXT("AMainGamePlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainGamePlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

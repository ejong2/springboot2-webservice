// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inventory_Project/MainGamePawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainGamePawn() {}
// Cross Module References
	INVENTORY_PROJECT_API UClass* Z_Construct_UClass_AMainGamePawn_NoRegister();
	INVENTORY_PROJECT_API UClass* Z_Construct_UClass_AMainGamePawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Inventory_Project();
// End Cross Module References
	DEFINE_FUNCTION(AMainGamePawn::execGoRight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Axis);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GoRight(Z_Param_Axis);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMainGamePawn::execGoForward)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Axis);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GoForward(Z_Param_Axis);
		P_NATIVE_END;
	}
	void AMainGamePawn::StaticRegisterNativesAMainGamePawn()
	{
		UClass* Class = AMainGamePawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GoForward", &AMainGamePawn::execGoForward },
			{ "GoRight", &AMainGamePawn::execGoRight },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMainGamePawn_GoForward_Statics
	{
		struct MainGamePawn_eventGoForward_Parms
		{
			float Axis;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Axis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMainGamePawn_GoForward_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MainGamePawn_eventGoForward_Parms, Axis), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainGamePawn_GoForward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainGamePawn_GoForward_Statics::NewProp_Axis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainGamePawn_GoForward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainGamePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainGamePawn_GoForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainGamePawn, nullptr, "GoForward", nullptr, nullptr, sizeof(MainGamePawn_eventGoForward_Parms), Z_Construct_UFunction_AMainGamePawn_GoForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGamePawn_GoForward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMainGamePawn_GoForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGamePawn_GoForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMainGamePawn_GoForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMainGamePawn_GoForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMainGamePawn_GoRight_Statics
	{
		struct MainGamePawn_eventGoRight_Parms
		{
			float Axis;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Axis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMainGamePawn_GoRight_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MainGamePawn_eventGoRight_Parms, Axis), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainGamePawn_GoRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainGamePawn_GoRight_Statics::NewProp_Axis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainGamePawn_GoRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainGamePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainGamePawn_GoRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainGamePawn, nullptr, "GoRight", nullptr, nullptr, sizeof(MainGamePawn_eventGoRight_Parms), Z_Construct_UFunction_AMainGamePawn_GoRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGamePawn_GoRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMainGamePawn_GoRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGamePawn_GoRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMainGamePawn_GoRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMainGamePawn_GoRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMainGamePawn_NoRegister()
	{
		return AMainGamePawn::StaticClass();
	}
	struct Z_Construct_UClass_AMainGamePawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMainGamePawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Inventory_Project,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMainGamePawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMainGamePawn_GoForward, "GoForward" }, // 2406397233
		{ &Z_Construct_UFunction_AMainGamePawn_GoRight, "GoRight" }, // 4236491522
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainGamePawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MainGamePawn.h" },
		{ "ModuleRelativePath", "MainGamePawn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMainGamePawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainGamePawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMainGamePawn_Statics::ClassParams = {
		&AMainGamePawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMainGamePawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMainGamePawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMainGamePawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMainGamePawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMainGamePawn, 2573078966);
	template<> INVENTORY_PROJECT_API UClass* StaticClass<AMainGamePawn>()
	{
		return AMainGamePawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMainGamePawn(Z_Construct_UClass_AMainGamePawn, &AMainGamePawn::StaticClass, TEXT("/Script/Inventory_Project"), TEXT("AMainGamePawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainGamePawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

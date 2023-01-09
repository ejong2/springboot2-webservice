// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tenth_Practice/SocketPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocketPawn() {}
// Cross Module References
	TENTH_PRACTICE_API UClass* Z_Construct_UClass_ASocketPawn_NoRegister();
	TENTH_PRACTICE_API UClass* Z_Construct_UClass_ASocketPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Tenth_Practice();
// End Cross Module References
	DEFINE_FUNCTION(ASocketPawn::execMoveRight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_input);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveRight(Z_Param_input);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASocketPawn::execMoveForward)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_input);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveForward(Z_Param_input);
		P_NATIVE_END;
	}
	void ASocketPawn::StaticRegisterNativesASocketPawn()
	{
		UClass* Class = ASocketPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MoveForward", &ASocketPawn::execMoveForward },
			{ "MoveRight", &ASocketPawn::execMoveRight },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASocketPawn_MoveForward_Statics
	{
		struct SocketPawn_eventMoveForward_Parms
		{
			float input;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_input;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASocketPawn_MoveForward_Statics::NewProp_input = { "input", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SocketPawn_eventMoveForward_Parms, input), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASocketPawn_MoveForward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASocketPawn_MoveForward_Statics::NewProp_input,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASocketPawn_MoveForward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SocketPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASocketPawn_MoveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASocketPawn, nullptr, "MoveForward", nullptr, nullptr, sizeof(SocketPawn_eventMoveForward_Parms), Z_Construct_UFunction_ASocketPawn_MoveForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASocketPawn_MoveForward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASocketPawn_MoveForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASocketPawn_MoveForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASocketPawn_MoveForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASocketPawn_MoveForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASocketPawn_MoveRight_Statics
	{
		struct SocketPawn_eventMoveRight_Parms
		{
			float input;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_input;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASocketPawn_MoveRight_Statics::NewProp_input = { "input", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SocketPawn_eventMoveRight_Parms, input), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASocketPawn_MoveRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASocketPawn_MoveRight_Statics::NewProp_input,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASocketPawn_MoveRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SocketPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASocketPawn_MoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASocketPawn, nullptr, "MoveRight", nullptr, nullptr, sizeof(SocketPawn_eventMoveRight_Parms), Z_Construct_UFunction_ASocketPawn_MoveRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASocketPawn_MoveRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASocketPawn_MoveRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASocketPawn_MoveRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASocketPawn_MoveRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASocketPawn_MoveRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASocketPawn_NoRegister()
	{
		return ASocketPawn::StaticClass();
	}
	struct Z_Construct_UClass_ASocketPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASocketPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Tenth_Practice,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASocketPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASocketPawn_MoveForward, "MoveForward" }, // 1730711801
		{ &Z_Construct_UFunction_ASocketPawn_MoveRight, "MoveRight" }, // 4197326801
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASocketPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SocketPawn.h" },
		{ "ModuleRelativePath", "SocketPawn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASocketPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASocketPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASocketPawn_Statics::ClassParams = {
		&ASocketPawn::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASocketPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASocketPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASocketPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASocketPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASocketPawn, 407716000);
	template<> TENTH_PRACTICE_API UClass* StaticClass<ASocketPawn>()
	{
		return ASocketPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASocketPawn(Z_Construct_UClass_ASocketPawn, &ASocketPawn::StaticClass, TEXT("/Script/Tenth_Practice"), TEXT("ASocketPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASocketPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

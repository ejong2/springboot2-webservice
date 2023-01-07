// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tenth_Practice/PC_SocketPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePC_SocketPlayerController() {}
// Cross Module References
	TENTH_PRACTICE_API UClass* Z_Construct_UClass_APC_SocketPlayerController_NoRegister();
	TENTH_PRACTICE_API UClass* Z_Construct_UClass_APC_SocketPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Tenth_Practice();
// End Cross Module References
	DEFINE_FUNCTION(APC_SocketPlayerController::execConnectToServer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConnectToServer();
		P_NATIVE_END;
	}
	void APC_SocketPlayerController::StaticRegisterNativesAPC_SocketPlayerController()
	{
		UClass* Class = APC_SocketPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConnectToServer", &APC_SocketPlayerController::execConnectToServer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APC_SocketPlayerController_ConnectToServer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APC_SocketPlayerController_ConnectToServer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Socket" },
		{ "ModuleRelativePath", "PC_SocketPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APC_SocketPlayerController_ConnectToServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APC_SocketPlayerController, nullptr, "ConnectToServer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APC_SocketPlayerController_ConnectToServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APC_SocketPlayerController_ConnectToServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APC_SocketPlayerController_ConnectToServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APC_SocketPlayerController_ConnectToServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APC_SocketPlayerController_NoRegister()
	{
		return APC_SocketPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_APC_SocketPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APC_SocketPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Tenth_Practice,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APC_SocketPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APC_SocketPlayerController_ConnectToServer, "ConnectToServer" }, // 1137379505
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APC_SocketPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PC_SocketPlayerController.h" },
		{ "ModuleRelativePath", "PC_SocketPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APC_SocketPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APC_SocketPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APC_SocketPlayerController_Statics::ClassParams = {
		&APC_SocketPlayerController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_APC_SocketPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APC_SocketPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APC_SocketPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APC_SocketPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APC_SocketPlayerController, 808840621);
	template<> TENTH_PRACTICE_API UClass* StaticClass<APC_SocketPlayerController>()
	{
		return APC_SocketPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APC_SocketPlayerController(Z_Construct_UClass_APC_SocketPlayerController, &APC_SocketPlayerController::StaticClass, TEXT("/Script/Tenth_Practice"), TEXT("APC_SocketPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APC_SocketPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

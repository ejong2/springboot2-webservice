// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tenth_TCPConnect_One/PC_SocketPC.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePC_SocketPC() {}
// Cross Module References
	TENTH_TCPCONNECT_ONE_API UClass* Z_Construct_UClass_APC_SocketPC_NoRegister();
	TENTH_TCPCONNECT_ONE_API UClass* Z_Construct_UClass_APC_SocketPC();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Tenth_TCPConnect_One();
// End Cross Module References
	DEFINE_FUNCTION(APC_SocketPC::execClientSpawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientSpawn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APC_SocketPC::execMoveBackward)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveBackward();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APC_SocketPC::execMoveLeft)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveLeft();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APC_SocketPC::execMoveRight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveRight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APC_SocketPC::execMoveForward)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveForward();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APC_SocketPC::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop();
		P_NATIVE_END;
	}
	void APC_SocketPC::StaticRegisterNativesAPC_SocketPC()
	{
		UClass* Class = APC_SocketPC::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientSpawn", &APC_SocketPC::execClientSpawn },
			{ "MoveBackward", &APC_SocketPC::execMoveBackward },
			{ "MoveForward", &APC_SocketPC::execMoveForward },
			{ "MoveLeft", &APC_SocketPC::execMoveLeft },
			{ "MoveRight", &APC_SocketPC::execMoveRight },
			{ "Stop", &APC_SocketPC::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APC_SocketPC_ClientSpawn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APC_SocketPC_ClientSpawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PC_SocketPC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APC_SocketPC_ClientSpawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APC_SocketPC, nullptr, "ClientSpawn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APC_SocketPC_ClientSpawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APC_SocketPC_ClientSpawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APC_SocketPC_ClientSpawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APC_SocketPC_ClientSpawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APC_SocketPC_MoveBackward_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APC_SocketPC_MoveBackward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PC_SocketPC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APC_SocketPC_MoveBackward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APC_SocketPC, nullptr, "MoveBackward", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APC_SocketPC_MoveBackward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APC_SocketPC_MoveBackward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APC_SocketPC_MoveBackward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APC_SocketPC_MoveBackward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APC_SocketPC_MoveForward_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APC_SocketPC_MoveForward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PC_SocketPC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APC_SocketPC_MoveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APC_SocketPC, nullptr, "MoveForward", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APC_SocketPC_MoveForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APC_SocketPC_MoveForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APC_SocketPC_MoveForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APC_SocketPC_MoveForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APC_SocketPC_MoveLeft_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APC_SocketPC_MoveLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PC_SocketPC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APC_SocketPC_MoveLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APC_SocketPC, nullptr, "MoveLeft", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APC_SocketPC_MoveLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APC_SocketPC_MoveLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APC_SocketPC_MoveLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APC_SocketPC_MoveLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APC_SocketPC_MoveRight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APC_SocketPC_MoveRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PC_SocketPC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APC_SocketPC_MoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APC_SocketPC, nullptr, "MoveRight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APC_SocketPC_MoveRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APC_SocketPC_MoveRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APC_SocketPC_MoveRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APC_SocketPC_MoveRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APC_SocketPC_Stop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APC_SocketPC_Stop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PC_SocketPC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APC_SocketPC_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APC_SocketPC, nullptr, "Stop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APC_SocketPC_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APC_SocketPC_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APC_SocketPC_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APC_SocketPC_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APC_SocketPC_NoRegister()
	{
		return APC_SocketPC::StaticClass();
	}
	struct Z_Construct_UClass_APC_SocketPC_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APC_SocketPC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Tenth_TCPConnect_One,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APC_SocketPC_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APC_SocketPC_ClientSpawn, "ClientSpawn" }, // 3552804997
		{ &Z_Construct_UFunction_APC_SocketPC_MoveBackward, "MoveBackward" }, // 3367971578
		{ &Z_Construct_UFunction_APC_SocketPC_MoveForward, "MoveForward" }, // 1646892337
		{ &Z_Construct_UFunction_APC_SocketPC_MoveLeft, "MoveLeft" }, // 2746123590
		{ &Z_Construct_UFunction_APC_SocketPC_MoveRight, "MoveRight" }, // 2759466092
		{ &Z_Construct_UFunction_APC_SocketPC_Stop, "Stop" }, // 4142887545
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APC_SocketPC_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PC_SocketPC.h" },
		{ "ModuleRelativePath", "PC_SocketPC.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APC_SocketPC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APC_SocketPC>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APC_SocketPC_Statics::ClassParams = {
		&APC_SocketPC::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APC_SocketPC_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APC_SocketPC_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APC_SocketPC()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APC_SocketPC_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APC_SocketPC, 2104442592);
	template<> TENTH_TCPCONNECT_ONE_API UClass* StaticClass<APC_SocketPC>()
	{
		return APC_SocketPC::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APC_SocketPC(Z_Construct_UClass_APC_SocketPC, &APC_SocketPC::StaticClass, TEXT("/Script/Tenth_TCPConnect_One"), TEXT("APC_SocketPC"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APC_SocketPC);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

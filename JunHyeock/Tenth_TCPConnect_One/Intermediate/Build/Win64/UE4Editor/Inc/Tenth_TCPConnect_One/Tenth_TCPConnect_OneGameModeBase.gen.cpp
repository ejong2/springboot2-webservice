// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tenth_TCPConnect_One/Tenth_TCPConnect_OneGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTenth_TCPConnect_OneGameModeBase() {}
// Cross Module References
	TENTH_TCPCONNECT_ONE_API UClass* Z_Construct_UClass_ATenth_TCPConnect_OneGameModeBase_NoRegister();
	TENTH_TCPCONNECT_ONE_API UClass* Z_Construct_UClass_ATenth_TCPConnect_OneGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Tenth_TCPConnect_One();
// End Cross Module References
	DEFINE_FUNCTION(ATenth_TCPConnect_OneGameModeBase::execEndThread)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndThread();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATenth_TCPConnect_OneGameModeBase::execStartThread)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartThread();
		P_NATIVE_END;
	}
	void ATenth_TCPConnect_OneGameModeBase::StaticRegisterNativesATenth_TCPConnect_OneGameModeBase()
	{
		UClass* Class = ATenth_TCPConnect_OneGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndThread", &ATenth_TCPConnect_OneGameModeBase::execEndThread },
			{ "StartThread", &ATenth_TCPConnect_OneGameModeBase::execStartThread },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATenth_TCPConnect_OneGameModeBase_EndThread_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATenth_TCPConnect_OneGameModeBase_EndThread_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Tenth_TCPConnect_OneGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATenth_TCPConnect_OneGameModeBase_EndThread_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATenth_TCPConnect_OneGameModeBase, nullptr, "EndThread", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATenth_TCPConnect_OneGameModeBase_EndThread_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATenth_TCPConnect_OneGameModeBase_EndThread_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATenth_TCPConnect_OneGameModeBase_EndThread()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATenth_TCPConnect_OneGameModeBase_EndThread_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATenth_TCPConnect_OneGameModeBase_StartThread_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATenth_TCPConnect_OneGameModeBase_StartThread_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Tenth_TCPConnect_OneGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATenth_TCPConnect_OneGameModeBase_StartThread_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATenth_TCPConnect_OneGameModeBase, nullptr, "StartThread", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATenth_TCPConnect_OneGameModeBase_StartThread_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATenth_TCPConnect_OneGameModeBase_StartThread_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATenth_TCPConnect_OneGameModeBase_StartThread()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATenth_TCPConnect_OneGameModeBase_StartThread_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATenth_TCPConnect_OneGameModeBase_NoRegister()
	{
		return ATenth_TCPConnect_OneGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATenth_TCPConnect_OneGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsActivate_MetaData[];
#endif
		static void NewProp_bIsActivate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsActivate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATenth_TCPConnect_OneGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Tenth_TCPConnect_One,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATenth_TCPConnect_OneGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATenth_TCPConnect_OneGameModeBase_EndThread, "EndThread" }, // 201542629
		{ &Z_Construct_UFunction_ATenth_TCPConnect_OneGameModeBase_StartThread, "StartThread" }, // 3134282739
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATenth_TCPConnect_OneGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Tenth_TCPConnect_OneGameModeBase.h" },
		{ "ModuleRelativePath", "Tenth_TCPConnect_OneGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATenth_TCPConnect_OneGameModeBase_Statics::NewProp_bIsActivate_MetaData[] = {
		{ "Category", "Tenth_TCPConnect_OneGameModeBase" },
		{ "ModuleRelativePath", "Tenth_TCPConnect_OneGameModeBase.h" },
	};
#endif
	void Z_Construct_UClass_ATenth_TCPConnect_OneGameModeBase_Statics::NewProp_bIsActivate_SetBit(void* Obj)
	{
		((ATenth_TCPConnect_OneGameModeBase*)Obj)->bIsActivate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATenth_TCPConnect_OneGameModeBase_Statics::NewProp_bIsActivate = { "bIsActivate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATenth_TCPConnect_OneGameModeBase), &Z_Construct_UClass_ATenth_TCPConnect_OneGameModeBase_Statics::NewProp_bIsActivate_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATenth_TCPConnect_OneGameModeBase_Statics::NewProp_bIsActivate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATenth_TCPConnect_OneGameModeBase_Statics::NewProp_bIsActivate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATenth_TCPConnect_OneGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATenth_TCPConnect_OneGameModeBase_Statics::NewProp_bIsActivate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATenth_TCPConnect_OneGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATenth_TCPConnect_OneGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATenth_TCPConnect_OneGameModeBase_Statics::ClassParams = {
		&ATenth_TCPConnect_OneGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATenth_TCPConnect_OneGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATenth_TCPConnect_OneGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATenth_TCPConnect_OneGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATenth_TCPConnect_OneGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATenth_TCPConnect_OneGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATenth_TCPConnect_OneGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATenth_TCPConnect_OneGameModeBase, 1452797894);
	template<> TENTH_TCPCONNECT_ONE_API UClass* StaticClass<ATenth_TCPConnect_OneGameModeBase>()
	{
		return ATenth_TCPConnect_OneGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATenth_TCPConnect_OneGameModeBase(Z_Construct_UClass_ATenth_TCPConnect_OneGameModeBase, &ATenth_TCPConnect_OneGameModeBase::StaticClass, TEXT("/Script/Tenth_TCPConnect_One"), TEXT("ATenth_TCPConnect_OneGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATenth_TCPConnect_OneGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

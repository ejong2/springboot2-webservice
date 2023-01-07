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
	TENTH_PRACTICE_API UEnum* Z_Construct_UEnum_Tenth_Practice_EMessagePacket();
	UPackage* Z_Construct_UPackage__Script_Tenth_Practice();
	TENTH_PRACTICE_API UClass* Z_Construct_UClass_APC_SocketPlayerController_NoRegister();
	TENTH_PRACTICE_API UClass* Z_Construct_UClass_APC_SocketPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
// End Cross Module References
	static UEnum* EMessagePacket_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Tenth_Practice_EMessagePacket, Z_Construct_UPackage__Script_Tenth_Practice(), TEXT("EMessagePacket"));
		}
		return Singleton;
	}
	template<> TENTH_PRACTICE_API UEnum* StaticEnum<EMessagePacket>()
	{
		return EMessagePacket_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMessagePacket(EMessagePacket_StaticEnum, TEXT("/Script/Tenth_Practice"), TEXT("EMessagePacket"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Tenth_Practice_EMessagePacket_Hash() { return 3333111846U; }
	UEnum* Z_Construct_UEnum_Tenth_Practice_EMessagePacket()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Tenth_Practice();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMessagePacket"), 0, Get_Z_Construct_UEnum_Tenth_Practice_EMessagePacket_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMessagePacket::NoneEnum", (int64)EMessagePacket::NoneEnum },
				{ "EMessagePacket::S2C_RegisterID", (int64)EMessagePacket::S2C_RegisterID },
				{ "EMessagePacket::S2C_Spawn", (int64)EMessagePacket::S2C_Spawn },
				{ "EMessagePacket::S2C_Destroy", (int64)EMessagePacket::S2C_Destroy },
				{ "EMessagePacket::C2S_Move", (int64)EMessagePacket::C2S_Move },
				{ "EMessagePacket::S2C_Move", (int64)EMessagePacket::S2C_Move },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "C2S_Move.DisPlayName", "C2S_Move" },
				{ "C2S_Move.Name", "EMessagePacket::C2S_Move" },
				{ "ModuleRelativePath", "PC_SocketPlayerController.h" },
				{ "NoneEnum.Comment", "//Server To Cleint\n" },
				{ "NoneEnum.Name", "EMessagePacket::NoneEnum" },
				{ "NoneEnum.ToolTip", "Server To Cleint" },
				{ "S2C_Destroy.DisPlayName", "S2C_Destroy" },
				{ "S2C_Destroy.Name", "EMessagePacket::S2C_Destroy" },
				{ "S2C_Move.DisPlayName", "S2C_Move" },
				{ "S2C_Move.Name", "EMessagePacket::S2C_Move" },
				{ "S2C_RegisterID.DisPlayName", "S2C_RegisterID" },
				{ "S2C_RegisterID.Name", "EMessagePacket::S2C_RegisterID" },
				{ "S2C_Spawn.DisPlayName", "S2C_Spawn" },
				{ "S2C_Spawn.Name", "EMessagePacket::S2C_Spawn" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Tenth_Practice,
				nullptr,
				"EMessagePacket",
				"EMessagePacket",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(APC_SocketPlayerController::execConnectToServer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ConnectToServer();
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
		struct PC_SocketPlayerController_eventConnectToServer_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APC_SocketPlayerController_ConnectToServer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PC_SocketPlayerController_eventConnectToServer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APC_SocketPlayerController_ConnectToServer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PC_SocketPlayerController_eventConnectToServer_Parms), &Z_Construct_UFunction_APC_SocketPlayerController_ConnectToServer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APC_SocketPlayerController_ConnectToServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APC_SocketPlayerController_ConnectToServer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APC_SocketPlayerController_ConnectToServer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Socket" },
		{ "ModuleRelativePath", "PC_SocketPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APC_SocketPlayerController_ConnectToServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APC_SocketPlayerController, nullptr, "ConnectToServer", nullptr, nullptr, sizeof(PC_SocketPlayerController_eventConnectToServer_Parms), Z_Construct_UFunction_APC_SocketPlayerController_ConnectToServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APC_SocketPlayerController_ConnectToServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APC_SocketPlayerController_ConnectToServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APC_SocketPlayerController_ConnectToServer_Statics::Function_MetaDataParams)) };
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
		{ &Z_Construct_UFunction_APC_SocketPlayerController_ConnectToServer, "ConnectToServer" }, // 3444302044
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
	IMPLEMENT_CLASS(APC_SocketPlayerController, 2388571450);
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

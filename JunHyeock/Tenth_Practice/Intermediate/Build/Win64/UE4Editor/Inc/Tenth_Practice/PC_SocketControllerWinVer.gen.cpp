// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tenth_Practice/PC_SocketControllerWinVer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePC_SocketControllerWinVer() {}
// Cross Module References
	TENTH_PRACTICE_API UClass* Z_Construct_UClass_APC_SocketControllerWinVer_NoRegister();
	TENTH_PRACTICE_API UClass* Z_Construct_UClass_APC_SocketControllerWinVer();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Tenth_Practice();
// End Cross Module References
	void APC_SocketControllerWinVer::StaticRegisterNativesAPC_SocketControllerWinVer()
	{
	}
	UClass* Z_Construct_UClass_APC_SocketControllerWinVer_NoRegister()
	{
		return APC_SocketControllerWinVer::StaticClass();
	}
	struct Z_Construct_UClass_APC_SocketControllerWinVer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APC_SocketControllerWinVer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Tenth_Practice,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APC_SocketControllerWinVer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n *///class PlayerData\n//{\n//public:\n//\n//\x09SOCKET Socket;\n//\x09int X = 0;\n//\x09int Y = 0;\n//\x09int Z = 0;\n//\n//};\n//\n//\n//UENUM(BlueprintType)\n//enum class EMessagePacket : uint8\n//{\n//\x09//Server To Client\n//\x09NoneEnum = 0,\n//\x09S2C_RegisterID = 10\x09UMETA(DisPlayName = \"S2C_RegisterID\"),\n//\x09S2C_Spawn = 20\x09UMETA(DisPlayName = \"S2C_Spawn\"),\n//\x09S2C_Destroy = 30\x09UMETA(DisPlayName = \"S2C_Destroy\"),\n//\x09""C2S_Move = 40\x09UMETA(DisPlayName = \"C2S_Move\"),\n//\x09S2C_Move = 50\x09UMETA(DisPlayName = \"S2C_Move\"),\n//\n//\n//};\n" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PC_SocketControllerWinVer.h" },
		{ "ModuleRelativePath", "PC_SocketControllerWinVer.h" },
		{ "ToolTip", "//class PlayerData\n//{\n//public:\n//\n//     SOCKET Socket;\n//     int X = 0;\n//     int Y = 0;\n//     int Z = 0;\n//\n//};\n//\n//\n//UENUM(BlueprintType)\n//enum class EMessagePacket : uint8\n//{\n//     //Server To Client\n//     NoneEnum = 0,\n//     S2C_RegisterID = 10     UMETA(DisPlayName = \"S2C_RegisterID\"),\n//     S2C_Spawn = 20  UMETA(DisPlayName = \"S2C_Spawn\"),\n//     S2C_Destroy = 30        UMETA(DisPlayName = \"S2C_Destroy\"),\n//     C2S_Move = 40   UMETA(DisPlayName = \"C2S_Move\"),\n//     S2C_Move = 50   UMETA(DisPlayName = \"S2C_Move\"),\n//\n//\n//};" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APC_SocketControllerWinVer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APC_SocketControllerWinVer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APC_SocketControllerWinVer_Statics::ClassParams = {
		&APC_SocketControllerWinVer::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_APC_SocketControllerWinVer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APC_SocketControllerWinVer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APC_SocketControllerWinVer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APC_SocketControllerWinVer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APC_SocketControllerWinVer, 2840736005);
	template<> TENTH_PRACTICE_API UClass* StaticClass<APC_SocketControllerWinVer>()
	{
		return APC_SocketControllerWinVer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APC_SocketControllerWinVer(Z_Construct_UClass_APC_SocketControllerWinVer, &APC_SocketControllerWinVer::StaticClass, TEXT("/Script/Tenth_Practice"), TEXT("APC_SocketControllerWinVer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APC_SocketControllerWinVer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

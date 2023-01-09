// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tenth_Practice/SocketActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocketActor() {}
// Cross Module References
	TENTH_PRACTICE_API UClass* Z_Construct_UClass_ASocketActor_NoRegister();
	TENTH_PRACTICE_API UClass* Z_Construct_UClass_ASocketActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Tenth_Practice();
// End Cross Module References
	void ASocketActor::StaticRegisterNativesASocketActor()
	{
	}
	UClass* Z_Construct_UClass_ASocketActor_NoRegister()
	{
		return ASocketActor::StaticClass();
	}
	struct Z_Construct_UClass_ASocketActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASocketActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Tenth_Practice,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASocketActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//class PlayerData\n//{\n//public:\n//\n//\x09SOCKET Socket;\n//\x09int X = 0;\n//\x09int Y = 0;\n//\x09int Z = 0;\n//\n//};\n//\n//\n//UENUM(BlueprintType)\n//enum class EMessagePacket : uint8\n//{\n//\x09//Server To Client\n//\x09NoneEnum = 0,\n//\x09S2C_RegisterID = 10\x09UMETA(DisPlayName = \"S2C_RegisterID\"),\n//\x09S2C_Spawn = 20\x09UMETA(DisPlayName = \"S2C_Spawn\"),\n//\x09S2C_Destroy = 30\x09UMETA(DisPlayName = \"S2C_Destroy\"),\n//\x09""C2S_Move = 40\x09UMETA(DisPlayName = \"C2S_Move\"),\n//\x09S2C_Move = 50\x09UMETA(DisPlayName = \"S2C_Move\"),\n//\n//\n//};\n" },
		{ "IncludePath", "SocketActor.h" },
		{ "ModuleRelativePath", "SocketActor.h" },
		{ "ToolTip", "class PlayerData\n{\npublic:\n\n       SOCKET Socket;\n       int X = 0;\n       int Y = 0;\n       int Z = 0;\n\n};\n\n\nUENUM(BlueprintType)\nenum class EMessagePacket : uint8\n{\n       Server To Client\n       NoneEnum = 0,\n       S2C_RegisterID = 10     UMETA(DisPlayName = \"S2C_RegisterID\"),\n       S2C_Spawn = 20  UMETA(DisPlayName = \"S2C_Spawn\"),\n       S2C_Destroy = 30        UMETA(DisPlayName = \"S2C_Destroy\"),\n       C2S_Move = 40   UMETA(DisPlayName = \"C2S_Move\"),\n       S2C_Move = 50   UMETA(DisPlayName = \"S2C_Move\"),\n\n\n};" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASocketActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASocketActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASocketActor_Statics::ClassParams = {
		&ASocketActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASocketActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASocketActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASocketActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASocketActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASocketActor, 1639554960);
	template<> TENTH_PRACTICE_API UClass* StaticClass<ASocketActor>()
	{
		return ASocketActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASocketActor(Z_Construct_UClass_ASocketActor, &ASocketActor::StaticClass, TEXT("/Script/Tenth_Practice"), TEXT("ASocketActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASocketActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

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
	TENTH_PRACTICE_API UEnum* Z_Construct_UEnum_Tenth_Practice_EMessagePacket();
	UPackage* Z_Construct_UPackage__Script_Tenth_Practice();
	TENTH_PRACTICE_API UClass* Z_Construct_UClass_ASocketActor_NoRegister();
	TENTH_PRACTICE_API UClass* Z_Construct_UClass_ASocketActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
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
	uint32 Get_Z_Construct_UEnum_Tenth_Practice_EMessagePacket_Hash() { return 3308867719U; }
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
				{ "ModuleRelativePath", "SocketActor.h" },
				{ "NoneEnum.Comment", "//Server To Client\n" },
				{ "NoneEnum.Name", "EMessagePacket::NoneEnum" },
				{ "NoneEnum.ToolTip", "Server To Client" },
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
		{ "IncludePath", "SocketActor.h" },
		{ "ModuleRelativePath", "SocketActor.h" },
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
	IMPLEMENT_CLASS(ASocketActor, 132906912);
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

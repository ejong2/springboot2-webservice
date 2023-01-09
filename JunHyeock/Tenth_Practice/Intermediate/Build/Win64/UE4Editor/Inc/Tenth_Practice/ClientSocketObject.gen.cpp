// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tenth_Practice/ClientSocketObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientSocketObject() {}
// Cross Module References
	TENTH_PRACTICE_API UEnum* Z_Construct_UEnum_Tenth_Practice_EMessagePacket();
	UPackage* Z_Construct_UPackage__Script_Tenth_Practice();
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
	uint32 Get_Z_Construct_UEnum_Tenth_Practice_EMessagePacket_Hash() { return 2544045391U; }
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
				{ "ModuleRelativePath", "ClientSocketObject.h" },
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

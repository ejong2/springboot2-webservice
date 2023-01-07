// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tenth_Practice/SocketPlayerData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocketPlayerData() {}
// Cross Module References
	TENTH_PRACTICE_API UClass* Z_Construct_UClass_USocketPlayerData_NoRegister();
	TENTH_PRACTICE_API UClass* Z_Construct_UClass_USocketPlayerData();
	GAMEPROJECTGENERATION_API UClass* Z_Construct_UClass_UClassTemplate();
	UPackage* Z_Construct_UPackage__Script_Tenth_Practice();
// End Cross Module References
	void USocketPlayerData::StaticRegisterNativesUSocketPlayerData()
	{
	}
	UClass* Z_Construct_UClass_USocketPlayerData_NoRegister()
	{
		return USocketPlayerData::StaticClass();
	}
	struct Z_Construct_UClass_USocketPlayerData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USocketPlayerData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UClassTemplate,
		(UObject* (*)())Z_Construct_UPackage__Script_Tenth_Practice,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocketPlayerData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SocketPlayerData.h" },
		{ "ModuleRelativePath", "SocketPlayerData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USocketPlayerData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USocketPlayerData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USocketPlayerData_Statics::ClassParams = {
		&USocketPlayerData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USocketPlayerData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USocketPlayerData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USocketPlayerData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USocketPlayerData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USocketPlayerData, 1503832970);
	template<> TENTH_PRACTICE_API UClass* StaticClass<USocketPlayerData>()
	{
		return USocketPlayerData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USocketPlayerData(Z_Construct_UClass_USocketPlayerData, &USocketPlayerData::StaticClass, TEXT("/Script/Tenth_Practice"), TEXT("USocketPlayerData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USocketPlayerData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

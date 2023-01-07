// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tenth_Practice/Tenth_PracticeGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTenth_PracticeGameModeBase() {}
// Cross Module References
	TENTH_PRACTICE_API UClass* Z_Construct_UClass_ATenth_PracticeGameModeBase_NoRegister();
	TENTH_PRACTICE_API UClass* Z_Construct_UClass_ATenth_PracticeGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Tenth_Practice();
// End Cross Module References
	void ATenth_PracticeGameModeBase::StaticRegisterNativesATenth_PracticeGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ATenth_PracticeGameModeBase_NoRegister()
	{
		return ATenth_PracticeGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATenth_PracticeGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATenth_PracticeGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Tenth_Practice,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATenth_PracticeGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Tenth_PracticeGameModeBase.h" },
		{ "ModuleRelativePath", "Tenth_PracticeGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATenth_PracticeGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATenth_PracticeGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATenth_PracticeGameModeBase_Statics::ClassParams = {
		&ATenth_PracticeGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATenth_PracticeGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATenth_PracticeGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATenth_PracticeGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATenth_PracticeGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATenth_PracticeGameModeBase, 412075877);
	template<> TENTH_PRACTICE_API UClass* StaticClass<ATenth_PracticeGameModeBase>()
	{
		return ATenth_PracticeGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATenth_PracticeGameModeBase(Z_Construct_UClass_ATenth_PracticeGameModeBase, &ATenth_PracticeGameModeBase::StaticClass, TEXT("/Script/Tenth_Practice"), TEXT("ATenth_PracticeGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATenth_PracticeGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

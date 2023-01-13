// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inventory_Project/MainGameCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainGameCharacter() {}
// Cross Module References
	INVENTORY_PROJECT_API UClass* Z_Construct_UClass_AMainGameCharacter_NoRegister();
	INVENTORY_PROJECT_API UClass* Z_Construct_UClass_AMainGameCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Inventory_Project();
// End Cross Module References
	void AMainGameCharacter::StaticRegisterNativesAMainGameCharacter()
	{
	}
	UClass* Z_Construct_UClass_AMainGameCharacter_NoRegister()
	{
		return AMainGameCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMainGameCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMainGameCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Inventory_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainGameCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MainGameCharacter.h" },
		{ "ModuleRelativePath", "MainGameCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMainGameCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainGameCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMainGameCharacter_Statics::ClassParams = {
		&AMainGameCharacter::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMainGameCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMainGameCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMainGameCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMainGameCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMainGameCharacter, 1414731888);
	template<> INVENTORY_PROJECT_API UClass* StaticClass<AMainGameCharacter>()
	{
		return AMainGameCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMainGameCharacter(Z_Construct_UClass_AMainGameCharacter, &AMainGameCharacter::StaticClass, TEXT("/Script/Inventory_Project"), TEXT("AMainGameCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainGameCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

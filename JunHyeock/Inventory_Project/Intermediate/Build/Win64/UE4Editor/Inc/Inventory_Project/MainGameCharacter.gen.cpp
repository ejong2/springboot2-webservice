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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MySpawnActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MySpawnActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainGameCharacter_Statics::NewProp_MySpawnActor_MetaData[] = {
		{ "Category", "MainGameCharacter" },
		{ "ModuleRelativePath", "MainGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMainGameCharacter_Statics::NewProp_MySpawnActor = { "MySpawnActor", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainGameCharacter, MySpawnActor), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMainGameCharacter_Statics::NewProp_MySpawnActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainGameCharacter_Statics::NewProp_MySpawnActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainGameCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainGameCharacter_Statics::NewProp_MySpawnActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMainGameCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainGameCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMainGameCharacter_Statics::ClassParams = {
		&AMainGameCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMainGameCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMainGameCharacter_Statics::PropPointers),
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
	IMPLEMENT_CLASS(AMainGameCharacter, 3409313679);
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

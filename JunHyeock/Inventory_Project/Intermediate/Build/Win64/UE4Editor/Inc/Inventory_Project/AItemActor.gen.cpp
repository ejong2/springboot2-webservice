// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inventory_Project/AItemActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAItemActor() {}
// Cross Module References
	INVENTORY_PROJECT_API UClass* Z_Construct_UClass_AAItemActor_NoRegister();
	INVENTORY_PROJECT_API UClass* Z_Construct_UClass_AAItemActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Inventory_Project();
// End Cross Module References
	void AAItemActor::StaticRegisterNativesAAItemActor()
	{
	}
	UClass* Z_Construct_UClass_AAItemActor_NoRegister()
	{
		return AAItemActor::StaticClass();
	}
	struct Z_Construct_UClass_AAItemActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAItemActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Inventory_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAItemActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AItemActor.h" },
		{ "ModuleRelativePath", "AItemActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAItemActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAItemActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAItemActor_Statics::ClassParams = {
		&AAItemActor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AAItemActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAItemActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAItemActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAItemActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAItemActor, 2714224771);
	template<> INVENTORY_PROJECT_API UClass* StaticClass<AAItemActor>()
	{
		return AAItemActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAItemActor(Z_Construct_UClass_AAItemActor, &AAItemActor::StaticClass, TEXT("/Script/Inventory_Project"), TEXT("AAItemActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAItemActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

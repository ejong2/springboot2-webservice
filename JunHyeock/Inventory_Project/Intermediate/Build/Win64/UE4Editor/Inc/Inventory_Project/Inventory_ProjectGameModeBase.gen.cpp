// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inventory_Project/Inventory_ProjectGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventory_ProjectGameModeBase() {}
// Cross Module References
	INVENTORY_PROJECT_API UClass* Z_Construct_UClass_AInventory_ProjectGameModeBase_NoRegister();
	INVENTORY_PROJECT_API UClass* Z_Construct_UClass_AInventory_ProjectGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Inventory_Project();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void AInventory_ProjectGameModeBase::StaticRegisterNativesAInventory_ProjectGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AInventory_ProjectGameModeBase_NoRegister()
	{
		return AInventory_ProjectGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AInventory_ProjectGameModeBase_Statics
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
	UObject* (*const Z_Construct_UClass_AInventory_ProjectGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Inventory_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInventory_ProjectGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Inventory_ProjectGameModeBase.h" },
		{ "ModuleRelativePath", "Inventory_ProjectGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInventory_ProjectGameModeBase_Statics::NewProp_MySpawnActor_MetaData[] = {
		{ "Category", "Inventory_ProjectGameModeBase" },
		{ "ModuleRelativePath", "Inventory_ProjectGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AInventory_ProjectGameModeBase_Statics::NewProp_MySpawnActor = { "MySpawnActor", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInventory_ProjectGameModeBase, MySpawnActor), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AInventory_ProjectGameModeBase_Statics::NewProp_MySpawnActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInventory_ProjectGameModeBase_Statics::NewProp_MySpawnActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInventory_ProjectGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInventory_ProjectGameModeBase_Statics::NewProp_MySpawnActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInventory_ProjectGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInventory_ProjectGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInventory_ProjectGameModeBase_Statics::ClassParams = {
		&AInventory_ProjectGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AInventory_ProjectGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AInventory_ProjectGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AInventory_ProjectGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInventory_ProjectGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInventory_ProjectGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInventory_ProjectGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInventory_ProjectGameModeBase, 3808685086);
	template<> INVENTORY_PROJECT_API UClass* StaticClass<AInventory_ProjectGameModeBase>()
	{
		return AInventory_ProjectGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInventory_ProjectGameModeBase(Z_Construct_UClass_AInventory_ProjectGameModeBase, &AInventory_ProjectGameModeBase::StaticClass, TEXT("/Script/Inventory_Project"), TEXT("AInventory_ProjectGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInventory_ProjectGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

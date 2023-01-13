// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inventory_Project/InventoryItemData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryItemData() {}
// Cross Module References
	INVENTORY_PROJECT_API UClass* Z_Construct_UClass_UInventoryItemData_NoRegister();
	INVENTORY_PROJECT_API UClass* Z_Construct_UClass_UInventoryItemData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Inventory_Project();
// End Cross Module References
	void UInventoryItemData::StaticRegisterNativesUInventoryItemData()
	{
	}
	UClass* Z_Construct_UClass_UInventoryItemData_NoRegister()
	{
		return UInventoryItemData::StaticClass();
	}
	struct Z_Construct_UClass_UInventoryItemData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventoryItemData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Inventory_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryItemData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "InventoryItemData.h" },
		{ "ModuleRelativePath", "InventoryItemData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventoryItemData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryItemData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInventoryItemData_Statics::ClassParams = {
		&UInventoryItemData::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInventoryItemData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItemData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInventoryItemData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInventoryItemData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInventoryItemData, 1533421199);
	template<> INVENTORY_PROJECT_API UClass* StaticClass<UInventoryItemData>()
	{
		return UInventoryItemData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInventoryItemData(Z_Construct_UClass_UInventoryItemData, &UInventoryItemData::StaticClass, TEXT("/Script/Inventory_Project"), TEXT("UInventoryItemData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryItemData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

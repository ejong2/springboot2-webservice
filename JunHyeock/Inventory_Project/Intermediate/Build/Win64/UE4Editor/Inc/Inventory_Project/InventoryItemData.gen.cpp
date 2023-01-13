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
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DataString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DataColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ItemID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ItemCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventoryItemData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Inventory_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryItemData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "InventoryItemData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "InventoryItemData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryItemData_Statics::NewProp_DataString_MetaData[] = {
		{ "Category", "InventoryItemData" },
		{ "ModuleRelativePath", "InventoryItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInventoryItemData_Statics::NewProp_DataString = { "DataString", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryItemData, DataString), METADATA_PARAMS(Z_Construct_UClass_UInventoryItemData_Statics::NewProp_DataString_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItemData_Statics::NewProp_DataString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryItemData_Statics::NewProp_DataColor_MetaData[] = {
		{ "Category", "InventoryItemData" },
		{ "ModuleRelativePath", "InventoryItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventoryItemData_Statics::NewProp_DataColor = { "DataColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryItemData, DataColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UInventoryItemData_Statics::NewProp_DataColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItemData_Statics::NewProp_DataColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryItemData_Statics::NewProp_ItemID_MetaData[] = {
		{ "Category", "InventoryItemData" },
		{ "ModuleRelativePath", "InventoryItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UInventoryItemData_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryItemData, ItemID), METADATA_PARAMS(Z_Construct_UClass_UInventoryItemData_Statics::NewProp_ItemID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItemData_Statics::NewProp_ItemID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryItemData_Statics::NewProp_ItemCount_MetaData[] = {
		{ "Category", "InventoryItemData" },
		{ "ModuleRelativePath", "InventoryItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UInventoryItemData_Statics::NewProp_ItemCount = { "ItemCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryItemData, ItemCount), METADATA_PARAMS(Z_Construct_UClass_UInventoryItemData_Statics::NewProp_ItemCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItemData_Statics::NewProp_ItemCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryItemData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryItemData_Statics::NewProp_DataString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryItemData_Statics::NewProp_DataColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryItemData_Statics::NewProp_ItemID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryItemData_Statics::NewProp_ItemCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventoryItemData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryItemData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInventoryItemData_Statics::ClassParams = {
		&UInventoryItemData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInventoryItemData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItemData_Statics::PropPointers),
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
	IMPLEMENT_CLASS(UInventoryItemData, 3926236650);
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

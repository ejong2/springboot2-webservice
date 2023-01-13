// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inventory_Project/UMG_InventoryItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMG_InventoryItem() {}
// Cross Module References
	INVENTORY_PROJECT_API UClass* Z_Construct_UClass_UUMG_InventoryItem_NoRegister();
	INVENTORY_PROJECT_API UClass* Z_Construct_UClass_UUMG_InventoryItem();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Inventory_Project();
	UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserObjectListEntry_NoRegister();
// End Cross Module References
	void UUMG_InventoryItem::StaticRegisterNativesUUMG_InventoryItem()
	{
	}
	UClass* Z_Construct_UClass_UUMG_InventoryItem_NoRegister()
	{
		return UUMG_InventoryItem::StaticClass();
	}
	struct Z_Construct_UClass_UUMG_InventoryItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Background_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Background;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NameText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NameText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMG_InventoryItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Inventory_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMG_InventoryItem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UMG_InventoryItem.h" },
		{ "ModuleRelativePath", "UMG_InventoryItem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMG_InventoryItem_Statics::NewProp_Background_MetaData[] = {
		{ "Comment", "// UI????????\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UMG_InventoryItem.h" },
		{ "ToolTip", "UI????????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMG_InventoryItem_Statics::NewProp_Background = { "Background", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMG_InventoryItem, Background), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMG_InventoryItem_Statics::NewProp_Background_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMG_InventoryItem_Statics::NewProp_Background_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMG_InventoryItem_Statics::NewProp_NameText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UMG_InventoryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMG_InventoryItem_Statics::NewProp_NameText = { "NameText", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMG_InventoryItem, NameText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMG_InventoryItem_Statics::NewProp_NameText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMG_InventoryItem_Statics::NewProp_NameText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMG_InventoryItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMG_InventoryItem_Statics::NewProp_Background,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMG_InventoryItem_Statics::NewProp_NameText,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UUMG_InventoryItem_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UUserObjectListEntry_NoRegister, (int32)VTABLE_OFFSET(UUMG_InventoryItem, IUserObjectListEntry), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMG_InventoryItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMG_InventoryItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMG_InventoryItem_Statics::ClassParams = {
		&UUMG_InventoryItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUMG_InventoryItem_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMG_InventoryItem_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMG_InventoryItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMG_InventoryItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMG_InventoryItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMG_InventoryItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMG_InventoryItem, 2031701165);
	template<> INVENTORY_PROJECT_API UClass* StaticClass<UUMG_InventoryItem>()
	{
		return UUMG_InventoryItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMG_InventoryItem(Z_Construct_UClass_UUMG_InventoryItem, &UUMG_InventoryItem::StaticClass, TEXT("/Script/Inventory_Project"), TEXT("UUMG_InventoryItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMG_InventoryItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

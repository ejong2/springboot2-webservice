// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inventory_Project/UMG_Inventory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMG_Inventory() {}
// Cross Module References
	INVENTORY_PROJECT_API UClass* Z_Construct_UClass_UUMG_Inventory_NoRegister();
	INVENTORY_PROJECT_API UClass* Z_Construct_UClass_UUMG_Inventory();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Inventory_Project();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTileView_NoRegister();
// End Cross Module References
	void UUMG_Inventory::StaticRegisterNativesUUMG_Inventory()
	{
	}
	UClass* Z_Construct_UClass_UUMG_Inventory_NoRegister()
	{
		return UUMG_Inventory::StaticClass();
	}
	struct Z_Construct_UClass_UUMG_Inventory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExampleButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExampleButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MYTEXT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MYTEXT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyItems;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMG_Inventory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Inventory_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMG_Inventory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UMG_Inventory.h" },
		{ "ModuleRelativePath", "UMG_Inventory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMG_Inventory_Statics::NewProp_ExampleButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UMG_Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMG_Inventory_Statics::NewProp_ExampleButton = { "ExampleButton", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMG_Inventory, ExampleButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMG_Inventory_Statics::NewProp_ExampleButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMG_Inventory_Statics::NewProp_ExampleButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMG_Inventory_Statics::NewProp_MYTEXT_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UMG_Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMG_Inventory_Statics::NewProp_MYTEXT = { "MYTEXT", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMG_Inventory, MYTEXT), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMG_Inventory_Statics::NewProp_MYTEXT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMG_Inventory_Statics::NewProp_MYTEXT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMG_Inventory_Statics::NewProp_MyItems_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UMG_Inventory" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UMG_Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMG_Inventory_Statics::NewProp_MyItems = { "MyItems", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMG_Inventory, MyItems), Z_Construct_UClass_UTileView_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMG_Inventory_Statics::NewProp_MyItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMG_Inventory_Statics::NewProp_MyItems_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMG_Inventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMG_Inventory_Statics::NewProp_ExampleButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMG_Inventory_Statics::NewProp_MYTEXT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMG_Inventory_Statics::NewProp_MyItems,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMG_Inventory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMG_Inventory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMG_Inventory_Statics::ClassParams = {
		&UUMG_Inventory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUMG_Inventory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMG_Inventory_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMG_Inventory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMG_Inventory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMG_Inventory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMG_Inventory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMG_Inventory, 2667255607);
	template<> INVENTORY_PROJECT_API UClass* StaticClass<UUMG_Inventory>()
	{
		return UUMG_Inventory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMG_Inventory(Z_Construct_UClass_UUMG_Inventory, &UUMG_Inventory::StaticClass, TEXT("/Script/Inventory_Project"), TEXT("UUMG_Inventory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMG_Inventory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

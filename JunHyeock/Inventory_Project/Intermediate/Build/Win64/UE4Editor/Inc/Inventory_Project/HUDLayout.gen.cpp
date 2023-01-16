// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inventory_Project/HUDLayout.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHUDLayout() {}
// Cross Module References
	INVENTORY_PROJECT_API UClass* Z_Construct_UClass_UHUDLayout_NoRegister();
	INVENTORY_PROJECT_API UClass* Z_Construct_UClass_UHUDLayout();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Inventory_Project();
// End Cross Module References
	void UHUDLayout::StaticRegisterNativesUHUDLayout()
	{
	}
	UClass* Z_Construct_UClass_UHUDLayout_NoRegister()
	{
		return UHUDLayout::StaticClass();
	}
	struct Z_Construct_UClass_UHUDLayout_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHUDLayout_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Inventory_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHUDLayout_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HUDLayout.h" },
		{ "ModuleRelativePath", "HUDLayout.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHUDLayout_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHUDLayout>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHUDLayout_Statics::ClassParams = {
		&UHUDLayout::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHUDLayout_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHUDLayout_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHUDLayout()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHUDLayout_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHUDLayout, 2752717562);
	template<> INVENTORY_PROJECT_API UClass* StaticClass<UHUDLayout>()
	{
		return UHUDLayout::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHUDLayout(Z_Construct_UClass_UHUDLayout, &UHUDLayout::StaticClass, TEXT("/Script/Inventory_Project"), TEXT("UHUDLayout"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHUDLayout);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inventory_Project/MyTileView.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyTileView() {}
// Cross Module References
	INVENTORY_PROJECT_API UClass* Z_Construct_UClass_UMyTileView_NoRegister();
	INVENTORY_PROJECT_API UClass* Z_Construct_UClass_UMyTileView();
	UMG_API UClass* Z_Construct_UClass_UTileView();
	UPackage* Z_Construct_UPackage__Script_Inventory_Project();
// End Cross Module References
	void UMyTileView::StaticRegisterNativesUMyTileView()
	{
	}
	UClass* Z_Construct_UClass_UMyTileView_NoRegister()
	{
		return UMyTileView::StaticClass();
	}
	struct Z_Construct_UClass_UMyTileView_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyTileView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTileView,
		(UObject* (*)())Z_Construct_UPackage__Script_Inventory_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyTileView_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyTileView.h" },
		{ "ModuleRelativePath", "MyTileView.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyTileView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyTileView>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyTileView_Statics::ClassParams = {
		&UMyTileView::StaticClass,
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
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMyTileView_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyTileView_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyTileView()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyTileView_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyTileView, 2286164700);
	template<> INVENTORY_PROJECT_API UClass* StaticClass<UMyTileView>()
	{
		return UMyTileView::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyTileView(Z_Construct_UClass_UMyTileView, &UMyTileView::StaticClass, TEXT("/Script/Inventory_Project"), TEXT("UMyTileView"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyTileView);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

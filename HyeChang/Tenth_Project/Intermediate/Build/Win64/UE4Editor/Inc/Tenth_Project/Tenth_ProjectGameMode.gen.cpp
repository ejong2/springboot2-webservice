// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tenth_Project/Tenth_ProjectGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTenth_ProjectGameMode() {}
// Cross Module References
	TENTH_PROJECT_API UClass* Z_Construct_UClass_ATenth_ProjectGameMode_NoRegister();
	TENTH_PROJECT_API UClass* Z_Construct_UClass_ATenth_ProjectGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Tenth_Project();
// End Cross Module References
	void ATenth_ProjectGameMode::StaticRegisterNativesATenth_ProjectGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATenth_ProjectGameMode_NoRegister()
	{
		return ATenth_ProjectGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATenth_ProjectGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATenth_ProjectGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Tenth_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATenth_ProjectGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Tenth_ProjectGameMode.h" },
		{ "ModuleRelativePath", "Tenth_ProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATenth_ProjectGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATenth_ProjectGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATenth_ProjectGameMode_Statics::ClassParams = {
		&ATenth_ProjectGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATenth_ProjectGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATenth_ProjectGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATenth_ProjectGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATenth_ProjectGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATenth_ProjectGameMode, 2422719362);
	template<> TENTH_PROJECT_API UClass* StaticClass<ATenth_ProjectGameMode>()
	{
		return ATenth_ProjectGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATenth_ProjectGameMode(Z_Construct_UClass_ATenth_ProjectGameMode, &ATenth_ProjectGameMode::StaticClass, TEXT("/Script/Tenth_Project"), TEXT("ATenth_ProjectGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATenth_ProjectGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

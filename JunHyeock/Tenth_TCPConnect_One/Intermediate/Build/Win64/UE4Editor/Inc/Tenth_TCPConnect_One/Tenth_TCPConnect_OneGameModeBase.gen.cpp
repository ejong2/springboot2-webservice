// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tenth_TCPConnect_One/Tenth_TCPConnect_OneGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTenth_TCPConnect_OneGameModeBase() {}
// Cross Module References
	TENTH_TCPCONNECT_ONE_API UClass* Z_Construct_UClass_ATenth_TCPConnect_OneGameModeBase_NoRegister();
	TENTH_TCPCONNECT_ONE_API UClass* Z_Construct_UClass_ATenth_TCPConnect_OneGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Tenth_TCPConnect_One();
// End Cross Module References
	void ATenth_TCPConnect_OneGameModeBase::StaticRegisterNativesATenth_TCPConnect_OneGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ATenth_TCPConnect_OneGameModeBase_NoRegister()
	{
		return ATenth_TCPConnect_OneGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATenth_TCPConnect_OneGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATenth_TCPConnect_OneGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Tenth_TCPConnect_One,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATenth_TCPConnect_OneGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Tenth_TCPConnect_OneGameModeBase.h" },
		{ "ModuleRelativePath", "Tenth_TCPConnect_OneGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATenth_TCPConnect_OneGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATenth_TCPConnect_OneGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATenth_TCPConnect_OneGameModeBase_Statics::ClassParams = {
		&ATenth_TCPConnect_OneGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATenth_TCPConnect_OneGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATenth_TCPConnect_OneGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATenth_TCPConnect_OneGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATenth_TCPConnect_OneGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATenth_TCPConnect_OneGameModeBase, 201211833);
	template<> TENTH_TCPCONNECT_ONE_API UClass* StaticClass<ATenth_TCPConnect_OneGameModeBase>()
	{
		return ATenth_TCPConnect_OneGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATenth_TCPConnect_OneGameModeBase(Z_Construct_UClass_ATenth_TCPConnect_OneGameModeBase, &ATenth_TCPConnect_OneGameModeBase::StaticClass, TEXT("/Script/Tenth_TCPConnect_One"), TEXT("ATenth_TCPConnect_OneGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATenth_TCPConnect_OneGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tenth_TCPConnect_One/MyCubeActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCubeActor() {}
// Cross Module References
	TENTH_TCPCONNECT_ONE_API UClass* Z_Construct_UClass_AMyCubeActor_NoRegister();
	TENTH_TCPCONNECT_ONE_API UClass* Z_Construct_UClass_AMyCubeActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Tenth_TCPConnect_One();
// End Cross Module References
	void AMyCubeActor::StaticRegisterNativesAMyCubeActor()
	{
	}
	UClass* Z_Construct_UClass_AMyCubeActor_NoRegister()
	{
		return AMyCubeActor::StaticClass();
	}
	struct Z_Construct_UClass_AMyCubeActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyCubeActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Tenth_TCPConnect_One,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCubeActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyCubeActor.h" },
		{ "ModuleRelativePath", "MyCubeActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyCubeActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCubeActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyCubeActor_Statics::ClassParams = {
		&AMyCubeActor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMyCubeActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCubeActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyCubeActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyCubeActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyCubeActor, 4049937323);
	template<> TENTH_TCPCONNECT_ONE_API UClass* StaticClass<AMyCubeActor>()
	{
		return AMyCubeActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyCubeActor(Z_Construct_UClass_AMyCubeActor, &AMyCubeActor::StaticClass, TEXT("/Script/Tenth_TCPConnect_One"), TEXT("AMyCubeActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCubeActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

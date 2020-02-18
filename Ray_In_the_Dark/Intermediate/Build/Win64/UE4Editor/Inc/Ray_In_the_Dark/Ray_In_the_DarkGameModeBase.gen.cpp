// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ray_In_the_Dark/Ray_In_the_DarkGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRay_In_the_DarkGameModeBase() {}
// Cross Module References
	RAY_IN_THE_DARK_API UClass* Z_Construct_UClass_ARay_In_the_DarkGameModeBase_NoRegister();
	RAY_IN_THE_DARK_API UClass* Z_Construct_UClass_ARay_In_the_DarkGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Ray_In_the_Dark();
// End Cross Module References
	void ARay_In_the_DarkGameModeBase::StaticRegisterNativesARay_In_the_DarkGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ARay_In_the_DarkGameModeBase_NoRegister()
	{
		return ARay_In_the_DarkGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ARay_In_the_DarkGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARay_In_the_DarkGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Ray_In_the_Dark,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARay_In_the_DarkGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Ray_In_the_DarkGameModeBase.h" },
		{ "ModuleRelativePath", "Ray_In_the_DarkGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARay_In_the_DarkGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARay_In_the_DarkGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARay_In_the_DarkGameModeBase_Statics::ClassParams = {
		&ARay_In_the_DarkGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ARay_In_the_DarkGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARay_In_the_DarkGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARay_In_the_DarkGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARay_In_the_DarkGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARay_In_the_DarkGameModeBase, 2653032747);
	template<> RAY_IN_THE_DARK_API UClass* StaticClass<ARay_In_the_DarkGameModeBase>()
	{
		return ARay_In_the_DarkGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARay_In_the_DarkGameModeBase(Z_Construct_UClass_ARay_In_the_DarkGameModeBase, &ARay_In_the_DarkGameModeBase::StaticClass, TEXT("/Script/Ray_In_the_Dark"), TEXT("ARay_In_the_DarkGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARay_In_the_DarkGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

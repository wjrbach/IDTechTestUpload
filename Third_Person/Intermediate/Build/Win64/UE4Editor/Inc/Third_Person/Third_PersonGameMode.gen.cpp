// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Third_Person/Third_PersonGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThird_PersonGameMode() {}
// Cross Module References
	THIRD_PERSON_API UClass* Z_Construct_UClass_AThird_PersonGameMode_NoRegister();
	THIRD_PERSON_API UClass* Z_Construct_UClass_AThird_PersonGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Third_Person();
// End Cross Module References
	void AThird_PersonGameMode::StaticRegisterNativesAThird_PersonGameMode()
	{
	}
	UClass* Z_Construct_UClass_AThird_PersonGameMode_NoRegister()
	{
		return AThird_PersonGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AThird_PersonGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AThird_PersonGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Third_Person,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThird_PersonGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Third_PersonGameMode.h" },
		{ "ModuleRelativePath", "Third_PersonGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AThird_PersonGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThird_PersonGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AThird_PersonGameMode_Statics::ClassParams = {
		&AThird_PersonGameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008802A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AThird_PersonGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AThird_PersonGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AThird_PersonGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AThird_PersonGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AThird_PersonGameMode, 3953596825);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AThird_PersonGameMode(Z_Construct_UClass_AThird_PersonGameMode, &AThird_PersonGameMode::StaticClass, TEXT("/Script/Third_Person"), TEXT("AThird_PersonGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AThird_PersonGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

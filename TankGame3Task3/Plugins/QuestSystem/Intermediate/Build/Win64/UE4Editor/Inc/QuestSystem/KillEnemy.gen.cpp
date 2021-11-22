// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestSystem/Public/KillEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKillEnemy() {}
// Cross Module References
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UKillEnemy_NoRegister();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UKillEnemy();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_QuestSystem();
// End Cross Module References
	void UKillEnemy::StaticRegisterNativesUKillEnemy()
	{
	}
	UClass* Z_Construct_UClass_UKillEnemy_NoRegister()
	{
		return UKillEnemy::StaticClass();
	}
	struct Z_Construct_UClass_UKillEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKillEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillEnemy_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KillEnemy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKillEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IKillEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKillEnemy_Statics::ClassParams = {
		&UKillEnemy::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UKillEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKillEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKillEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKillEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKillEnemy, 1744140314);
	template<> QUESTSYSTEM_API UClass* StaticClass<UKillEnemy>()
	{
		return UKillEnemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKillEnemy(Z_Construct_UClass_UKillEnemy, &UKillEnemy::StaticClass, TEXT("/Script/QuestSystem"), TEXT("UKillEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKillEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

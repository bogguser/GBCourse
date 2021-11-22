// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestSystem/Public/KillEnemyActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKillEnemyActor() {}
// Cross Module References
	QUESTSYSTEM_API UClass* Z_Construct_UClass_AKillEnemyActor_NoRegister();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_AKillEnemyActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_QuestSystem();
// End Cross Module References
	void AKillEnemyActor::StaticRegisterNativesAKillEnemyActor()
	{
	}
	UClass* Z_Construct_UClass_AKillEnemyActor_NoRegister()
	{
		return AKillEnemyActor::StaticClass();
	}
	struct Z_Construct_UClass_AKillEnemyActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKillEnemyActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKillEnemyActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "KillEnemyActor.h" },
		{ "ModuleRelativePath", "Public/KillEnemyActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKillEnemyActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKillEnemyActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AKillEnemyActor_Statics::ClassParams = {
		&AKillEnemyActor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AKillEnemyActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AKillEnemyActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKillEnemyActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AKillEnemyActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AKillEnemyActor, 3472668567);
	template<> QUESTSYSTEM_API UClass* StaticClass<AKillEnemyActor>()
	{
		return AKillEnemyActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AKillEnemyActor(Z_Construct_UClass_AKillEnemyActor, &AKillEnemyActor::StaticClass, TEXT("/Script/QuestSystem"), TEXT("AKillEnemyActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKillEnemyActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef QUESTSYSTEM_LocationMarker_generated_h
#error "LocationMarker.generated.h already included, missing '#pragma once' in LocationMarker.h"
#endif
#define QUESTSYSTEM_LocationMarker_generated_h

#define TankGame_Plugins_QuestSystem_Source_QuestSystem_Public_LocationMarker_h_13_SPARSE_DATA
#define TankGame_Plugins_QuestSystem_Source_QuestSystem_Public_LocationMarker_h_13_RPC_WRAPPERS
#define TankGame_Plugins_QuestSystem_Source_QuestSystem_Public_LocationMarker_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define TankGame_Plugins_QuestSystem_Source_QuestSystem_Public_LocationMarker_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	QUESTSYSTEM_API ULocationMarker(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocationMarker) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(QUESTSYSTEM_API, ULocationMarker); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocationMarker); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	QUESTSYSTEM_API ULocationMarker(ULocationMarker&&); \
	QUESTSYSTEM_API ULocationMarker(const ULocationMarker&); \
public:


#define TankGame_Plugins_QuestSystem_Source_QuestSystem_Public_LocationMarker_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	QUESTSYSTEM_API ULocationMarker(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	QUESTSYSTEM_API ULocationMarker(ULocationMarker&&); \
	QUESTSYSTEM_API ULocationMarker(const ULocationMarker&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(QUESTSYSTEM_API, ULocationMarker); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocationMarker); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocationMarker)


#define TankGame_Plugins_QuestSystem_Source_QuestSystem_Public_LocationMarker_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesULocationMarker(); \
	friend struct Z_Construct_UClass_ULocationMarker_Statics; \
public: \
	DECLARE_CLASS(ULocationMarker, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/QuestSystem"), QUESTSYSTEM_API) \
	DECLARE_SERIALIZER(ULocationMarker)


#define TankGame_Plugins_QuestSystem_Source_QuestSystem_Public_LocationMarker_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	TankGame_Plugins_QuestSystem_Source_QuestSystem_Public_LocationMarker_h_13_GENERATED_UINTERFACE_BODY() \
	TankGame_Plugins_QuestSystem_Source_QuestSystem_Public_LocationMarker_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TankGame_Plugins_QuestSystem_Source_QuestSystem_Public_LocationMarker_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	TankGame_Plugins_QuestSystem_Source_QuestSystem_Public_LocationMarker_h_13_GENERATED_UINTERFACE_BODY() \
	TankGame_Plugins_QuestSystem_Source_QuestSystem_Public_LocationMarker_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TankGame_Plugins_QuestSystem_Source_QuestSystem_Public_LocationMarker_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ILocationMarker() {} \
public: \
	typedef ULocationMarker UClassType; \
	typedef ILocationMarker ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define TankGame_Plugins_QuestSystem_Source_QuestSystem_Public_LocationMarker_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~ILocationMarker() {} \
public: \
	typedef ULocationMarker UClassType; \
	typedef ILocationMarker ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define TankGame_Plugins_QuestSystem_Source_QuestSystem_Public_LocationMarker_h_10_PROLOG
#define TankGame_Plugins_QuestSystem_Source_QuestSystem_Public_LocationMarker_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TankGame_Plugins_QuestSystem_Source_QuestSystem_Public_LocationMarker_h_13_SPARSE_DATA \
	TankGame_Plugins_QuestSystem_Source_QuestSystem_Public_LocationMarker_h_13_RPC_WRAPPERS \
	TankGame_Plugins_QuestSystem_Source_QuestSystem_Public_LocationMarker_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TankGame_Plugins_QuestSystem_Source_QuestSystem_Public_LocationMarker_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TankGame_Plugins_QuestSystem_Source_QuestSystem_Public_LocationMarker_h_13_SPARSE_DATA \
	TankGame_Plugins_QuestSystem_Source_QuestSystem_Public_LocationMarker_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	TankGame_Plugins_QuestSystem_Source_QuestSystem_Public_LocationMarker_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUESTSYSTEM_API UClass* StaticClass<class ULocationMarker>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TankGame_Plugins_QuestSystem_Source_QuestSystem_Public_LocationMarker_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

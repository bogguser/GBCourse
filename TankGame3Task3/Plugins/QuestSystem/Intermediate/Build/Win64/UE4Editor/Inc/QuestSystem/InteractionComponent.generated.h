// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef QUESTSYSTEM_InteractionComponent_generated_h
#error "InteractionComponent.generated.h already included, missing '#pragma once' in InteractionComponent.h"
#endif
#define QUESTSYSTEM_InteractionComponent_generated_h

#define TankGame_Plugins_QuestSystem_Source_QuestSystem_Public_InteractionComponent_h_15_SPARSE_DATA
#define TankGame_Plugins_QuestSystem_Source_QuestSystem_Public_InteractionComponent_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnInteractionCompEndOverlap); \
	DECLARE_FUNCTION(execOnInteractionCompBeginOverlap); \
	DECLARE_FUNCTION(execInteract);


#define TankGame_Plugins_QuestSystem_Source_QuestSystem_Public_InteractionComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnInteractionCompEndOverlap); \
	DECLARE_FUNCTION(execOnInteractionCompBeginOverlap); \
	DECLARE_FUNCTION(execInteract);


#define TankGame_Plugins_QuestSystem_Source_QuestSystem_Public_InteractionComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractionComponent(); \
	friend struct Z_Construct_UClass_UInteractionComponent_Statics; \
public: \
	DECLARE_CLASS(UInteractionComponent, UBoxComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuestSystem"), NO_API) \
	DECLARE_SERIALIZER(UInteractionComponent)


#define TankGame_Plugins_QuestSystem_Source_QuestSystem_Public_InteractionComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUInteractionComponent(); \
	friend struct Z_Construct_UClass_UInteractionComponent_Statics; \
public: \
	DECLARE_CLASS(UInteractionComponent, UBoxComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuestSystem"), NO_API) \
	DECLARE_SERIALIZER(UInteractionComponent)


#define TankGame_Plugins_QuestSystem_Source_QuestSystem_Public_InteractionComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractionComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractionComponent(UInteractionComponent&&); \
	NO_API UInteractionComponent(const UInteractionComponent&); \
public:


#define TankGame_Plugins_QuestSystem_Source_QuestSystem_Public_InteractionComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractionComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractionComponent(UInteractionComponent&&); \
	NO_API UInteractionComponent(const UInteractionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionComponent)


#define TankGame_Plugins_QuestSystem_Source_QuestSystem_Public_InteractionComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InteractMessageClass() { return STRUCT_OFFSET(UInteractionComponent, InteractMessageClass); } \
	FORCEINLINE static uint32 __PPO__InteractMessage() { return STRUCT_OFFSET(UInteractionComponent, InteractMessage); } \
	FORCEINLINE static uint32 __PPO__ActorToInteract() { return STRUCT_OFFSET(UInteractionComponent, ActorToInteract); }


#define TankGame_Plugins_QuestSystem_Source_QuestSystem_Public_InteractionComponent_h_12_PROLOG
#define TankGame_Plugins_QuestSystem_Source_QuestSystem_Public_InteractionComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TankGame_Plugins_QuestSystem_Source_QuestSystem_Public_InteractionComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	TankGame_Plugins_QuestSystem_Source_QuestSystem_Public_InteractionComponent_h_15_SPARSE_DATA \
	TankGame_Plugins_QuestSystem_Source_QuestSystem_Public_InteractionComponent_h_15_RPC_WRAPPERS \
	TankGame_Plugins_QuestSystem_Source_QuestSystem_Public_InteractionComponent_h_15_INCLASS \
	TankGame_Plugins_QuestSystem_Source_QuestSystem_Public_InteractionComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TankGame_Plugins_QuestSystem_Source_QuestSystem_Public_InteractionComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TankGame_Plugins_QuestSystem_Source_QuestSystem_Public_InteractionComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	TankGame_Plugins_QuestSystem_Source_QuestSystem_Public_InteractionComponent_h_15_SPARSE_DATA \
	TankGame_Plugins_QuestSystem_Source_QuestSystem_Public_InteractionComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TankGame_Plugins_QuestSystem_Source_QuestSystem_Public_InteractionComponent_h_15_INCLASS_NO_PURE_DECLS \
	TankGame_Plugins_QuestSystem_Source_QuestSystem_Public_InteractionComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUESTSYSTEM_API UClass* StaticClass<class UInteractionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TankGame_Plugins_QuestSystem_Source_QuestSystem_Public_InteractionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

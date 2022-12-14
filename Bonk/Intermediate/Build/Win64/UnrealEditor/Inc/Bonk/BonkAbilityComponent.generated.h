// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UBonkPlayer;
#ifdef BONK_BonkAbilityComponent_generated_h
#error "BonkAbilityComponent.generated.h already included, missing '#pragma once' in BonkAbilityComponent.h"
#endif
#define BONK_BonkAbilityComponent_generated_h

#define FID_Bonk_Source_Bonk_Components_BonkAbilityComponent_h_10_SPARSE_DATA
#define FID_Bonk_Source_Bonk_Components_BonkAbilityComponent_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnDrop); \
	DECLARE_FUNCTION(execOnPickup); \
	DECLARE_FUNCTION(execOnHit); \
	DECLARE_FUNCTION(execOnAttack); \
	DECLARE_FUNCTION(execSetPlayerData);


#define FID_Bonk_Source_Bonk_Components_BonkAbilityComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnDrop); \
	DECLARE_FUNCTION(execOnPickup); \
	DECLARE_FUNCTION(execOnHit); \
	DECLARE_FUNCTION(execOnAttack); \
	DECLARE_FUNCTION(execSetPlayerData);


#define FID_Bonk_Source_Bonk_Components_BonkAbilityComponent_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBonkAbilityComponent(); \
	friend struct Z_Construct_UClass_UBonkAbilityComponent_Statics; \
public: \
	DECLARE_CLASS(UBonkAbilityComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Bonk"), NO_API) \
	DECLARE_SERIALIZER(UBonkAbilityComponent)


#define FID_Bonk_Source_Bonk_Components_BonkAbilityComponent_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUBonkAbilityComponent(); \
	friend struct Z_Construct_UClass_UBonkAbilityComponent_Statics; \
public: \
	DECLARE_CLASS(UBonkAbilityComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Bonk"), NO_API) \
	DECLARE_SERIALIZER(UBonkAbilityComponent)


#define FID_Bonk_Source_Bonk_Components_BonkAbilityComponent_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBonkAbilityComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBonkAbilityComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBonkAbilityComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBonkAbilityComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBonkAbilityComponent(UBonkAbilityComponent&&); \
	NO_API UBonkAbilityComponent(const UBonkAbilityComponent&); \
public:


#define FID_Bonk_Source_Bonk_Components_BonkAbilityComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBonkAbilityComponent(UBonkAbilityComponent&&); \
	NO_API UBonkAbilityComponent(const UBonkAbilityComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBonkAbilityComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBonkAbilityComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBonkAbilityComponent)


#define FID_Bonk_Source_Bonk_Components_BonkAbilityComponent_h_7_PROLOG
#define FID_Bonk_Source_Bonk_Components_BonkAbilityComponent_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Bonk_Source_Bonk_Components_BonkAbilityComponent_h_10_SPARSE_DATA \
	FID_Bonk_Source_Bonk_Components_BonkAbilityComponent_h_10_RPC_WRAPPERS \
	FID_Bonk_Source_Bonk_Components_BonkAbilityComponent_h_10_INCLASS \
	FID_Bonk_Source_Bonk_Components_BonkAbilityComponent_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Bonk_Source_Bonk_Components_BonkAbilityComponent_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Bonk_Source_Bonk_Components_BonkAbilityComponent_h_10_SPARSE_DATA \
	FID_Bonk_Source_Bonk_Components_BonkAbilityComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Bonk_Source_Bonk_Components_BonkAbilityComponent_h_10_INCLASS_NO_PURE_DECLS \
	FID_Bonk_Source_Bonk_Components_BonkAbilityComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BONK_API UClass* StaticClass<class UBonkAbilityComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Bonk_Source_Bonk_Components_BonkAbilityComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

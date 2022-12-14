// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWorld;
class ABonkPlayerPawn;
class UBonkPlayer;
class AActor;
#ifdef BONK_BonkGameplayEffect_generated_h
#error "BonkGameplayEffect.generated.h already included, missing '#pragma once' in BonkGameplayEffect.h"
#endif
#define BONK_BonkGameplayEffect_generated_h

#define FID_Bonk_Source_Bonk_Components_BonkGameplayEffect_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAttributeModifier_Statics; \
	BONK_API static class UScriptStruct* StaticStruct();


template<> BONK_API UScriptStruct* StaticStruct<struct FAttributeModifier>();

#define FID_Bonk_Source_Bonk_Components_BonkGameplayEffect_h_57_SPARSE_DATA
#define FID_Bonk_Source_Bonk_Components_BonkGameplayEffect_h_57_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDeltaSeconds); \
	DECLARE_FUNCTION(execGetWorldContext); \
	DECLARE_FUNCTION(execSuperEffectTick); \
	DECLARE_FUNCTION(execStopTick); \
	DECLARE_FUNCTION(execStartTick); \
	DECLARE_FUNCTION(execReverseModifierEffect); \
	DECLARE_FUNCTION(execModifierEffect); \
	DECLARE_FUNCTION(execUnbind); \
	DECLARE_FUNCTION(execBind);


#define FID_Bonk_Source_Bonk_Components_BonkGameplayEffect_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDeltaSeconds); \
	DECLARE_FUNCTION(execGetWorldContext); \
	DECLARE_FUNCTION(execSuperEffectTick); \
	DECLARE_FUNCTION(execStopTick); \
	DECLARE_FUNCTION(execStartTick); \
	DECLARE_FUNCTION(execReverseModifierEffect); \
	DECLARE_FUNCTION(execModifierEffect); \
	DECLARE_FUNCTION(execUnbind); \
	DECLARE_FUNCTION(execBind);


#define FID_Bonk_Source_Bonk_Components_BonkGameplayEffect_h_57_EVENT_PARMS \
	struct BonkGameplayEffect_eventEffectTick_Parms \
	{ \
		ABonkPlayerPawn* Pawn; \
		float DeltaTime; \
	}; \
	struct BonkGameplayEffect_eventOnAttack_Parms \
	{ \
		ABonkPlayerPawn* Pawn; \
	}; \
	struct BonkGameplayEffect_eventOnDrop_Parms \
	{ \
		ABonkPlayerPawn* Pawn; \
		AActor* Actor; \
	}; \
	struct BonkGameplayEffect_eventOnHit_Parms \
	{ \
		ABonkPlayerPawn* Pawn; \
		AActor* OtherActor; \
	}; \
	struct BonkGameplayEffect_eventOnPickup_Parms \
	{ \
		ABonkPlayerPawn* Pawn; \
		AActor* OtherActor; \
	};


#define FID_Bonk_Source_Bonk_Components_BonkGameplayEffect_h_57_CALLBACK_WRAPPERS
#define FID_Bonk_Source_Bonk_Components_BonkGameplayEffect_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBonkGameplayEffect(); \
	friend struct Z_Construct_UClass_UBonkGameplayEffect_Statics; \
public: \
	DECLARE_CLASS(UBonkGameplayEffect, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Bonk"), NO_API) \
	DECLARE_SERIALIZER(UBonkGameplayEffect)


#define FID_Bonk_Source_Bonk_Components_BonkGameplayEffect_h_57_INCLASS \
private: \
	static void StaticRegisterNativesUBonkGameplayEffect(); \
	friend struct Z_Construct_UClass_UBonkGameplayEffect_Statics; \
public: \
	DECLARE_CLASS(UBonkGameplayEffect, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Bonk"), NO_API) \
	DECLARE_SERIALIZER(UBonkGameplayEffect)


#define FID_Bonk_Source_Bonk_Components_BonkGameplayEffect_h_57_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBonkGameplayEffect(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBonkGameplayEffect) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBonkGameplayEffect); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBonkGameplayEffect); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBonkGameplayEffect(UBonkGameplayEffect&&); \
	NO_API UBonkGameplayEffect(const UBonkGameplayEffect&); \
public:


#define FID_Bonk_Source_Bonk_Components_BonkGameplayEffect_h_57_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBonkGameplayEffect(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBonkGameplayEffect(UBonkGameplayEffect&&); \
	NO_API UBonkGameplayEffect(const UBonkGameplayEffect&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBonkGameplayEffect); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBonkGameplayEffect); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBonkGameplayEffect)


#define FID_Bonk_Source_Bonk_Components_BonkGameplayEffect_h_54_PROLOG \
	FID_Bonk_Source_Bonk_Components_BonkGameplayEffect_h_57_EVENT_PARMS


#define FID_Bonk_Source_Bonk_Components_BonkGameplayEffect_h_57_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Bonk_Source_Bonk_Components_BonkGameplayEffect_h_57_SPARSE_DATA \
	FID_Bonk_Source_Bonk_Components_BonkGameplayEffect_h_57_RPC_WRAPPERS \
	FID_Bonk_Source_Bonk_Components_BonkGameplayEffect_h_57_CALLBACK_WRAPPERS \
	FID_Bonk_Source_Bonk_Components_BonkGameplayEffect_h_57_INCLASS \
	FID_Bonk_Source_Bonk_Components_BonkGameplayEffect_h_57_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Bonk_Source_Bonk_Components_BonkGameplayEffect_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Bonk_Source_Bonk_Components_BonkGameplayEffect_h_57_SPARSE_DATA \
	FID_Bonk_Source_Bonk_Components_BonkGameplayEffect_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Bonk_Source_Bonk_Components_BonkGameplayEffect_h_57_CALLBACK_WRAPPERS \
	FID_Bonk_Source_Bonk_Components_BonkGameplayEffect_h_57_INCLASS_NO_PURE_DECLS \
	FID_Bonk_Source_Bonk_Components_BonkGameplayEffect_h_57_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BONK_API UClass* StaticClass<class UBonkGameplayEffect>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Bonk_Source_Bonk_Components_BonkGameplayEffect_h


#define FOREACH_ENUM_EMODIFIEROPERATION(op) \
	op(Add) \
	op(Subtract) \
	op(Multiply) \
	op(Divide) \
	op(Override) \
	op(OverrideBase) 
#define FOREACH_ENUM_EEFFECTTIER(op) \
	op(Low) \
	op(Mid) \
	op(High) 
#define FOREACH_ENUM_EEFFECTTYPE(op) \
	op(Instant) \
	op(Gameplay) \
	op(Both) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

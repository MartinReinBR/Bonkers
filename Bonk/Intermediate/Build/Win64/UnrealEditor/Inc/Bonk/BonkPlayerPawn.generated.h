// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBonkBonkerComponent;
class ABonkPlayerPawn;
#ifdef BONK_BonkPlayerPawn_generated_h
#error "BonkPlayerPawn.generated.h already included, missing '#pragma once' in BonkPlayerPawn.h"
#endif
#define BONK_BonkPlayerPawn_generated_h

#define FID_Bonk_Source_Bonk_Player_BonkPlayerPawn_h_150_DELEGATE \
struct BonkPlayerPawn_eventOnDamaged_Parms \
{ \
	float NewHealth; \
	float DamagedApplied; \
	UBonkBonkerComponent* Bonker; \
	ABonkPlayerPawn* Player; \
}; \
static inline void FOnDamaged_DelegateWrapper(const FMulticastScriptDelegate& OnDamaged, float NewHealth, float DamagedApplied, UBonkBonkerComponent* Bonker, ABonkPlayerPawn* Player) \
{ \
	BonkPlayerPawn_eventOnDamaged_Parms Parms; \
	Parms.NewHealth=NewHealth; \
	Parms.DamagedApplied=DamagedApplied; \
	Parms.Bonker=Bonker; \
	Parms.Player=Player; \
	OnDamaged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Bonk_Source_Bonk_Player_BonkPlayerPawn_h_154_DELEGATE \
struct BonkPlayerPawn_eventOnHealed_Parms \
{ \
	float NewHealth; \
	float HealthApplied; \
}; \
static inline void FOnHealed_DelegateWrapper(const FMulticastScriptDelegate& OnHealed, float NewHealth, float HealthApplied) \
{ \
	BonkPlayerPawn_eventOnHealed_Parms Parms; \
	Parms.NewHealth=NewHealth; \
	Parms.HealthApplied=HealthApplied; \
	OnHealed.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Bonk_Source_Bonk_Player_BonkPlayerPawn_h_11_SPARSE_DATA
#define FID_Bonk_Source_Bonk_Player_BonkPlayerPawn_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyHeal); \
	DECLARE_FUNCTION(execApplyDamage);


#define FID_Bonk_Source_Bonk_Player_BonkPlayerPawn_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyHeal); \
	DECLARE_FUNCTION(execApplyDamage);


#define FID_Bonk_Source_Bonk_Player_BonkPlayerPawn_h_11_EVENT_PARMS
#define FID_Bonk_Source_Bonk_Player_BonkPlayerPawn_h_11_CALLBACK_WRAPPERS
#define FID_Bonk_Source_Bonk_Player_BonkPlayerPawn_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABonkPlayerPawn(); \
	friend struct Z_Construct_UClass_ABonkPlayerPawn_Statics; \
public: \
	DECLARE_CLASS(ABonkPlayerPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Bonk"), NO_API) \
	DECLARE_SERIALIZER(ABonkPlayerPawn)


#define FID_Bonk_Source_Bonk_Player_BonkPlayerPawn_h_11_INCLASS \
private: \
	static void StaticRegisterNativesABonkPlayerPawn(); \
	friend struct Z_Construct_UClass_ABonkPlayerPawn_Statics; \
public: \
	DECLARE_CLASS(ABonkPlayerPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Bonk"), NO_API) \
	DECLARE_SERIALIZER(ABonkPlayerPawn)


#define FID_Bonk_Source_Bonk_Player_BonkPlayerPawn_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABonkPlayerPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABonkPlayerPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABonkPlayerPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABonkPlayerPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABonkPlayerPawn(ABonkPlayerPawn&&); \
	NO_API ABonkPlayerPawn(const ABonkPlayerPawn&); \
public:


#define FID_Bonk_Source_Bonk_Player_BonkPlayerPawn_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABonkPlayerPawn(ABonkPlayerPawn&&); \
	NO_API ABonkPlayerPawn(const ABonkPlayerPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABonkPlayerPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABonkPlayerPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABonkPlayerPawn)


#define FID_Bonk_Source_Bonk_Player_BonkPlayerPawn_h_8_PROLOG \
	FID_Bonk_Source_Bonk_Player_BonkPlayerPawn_h_11_EVENT_PARMS


#define FID_Bonk_Source_Bonk_Player_BonkPlayerPawn_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Bonk_Source_Bonk_Player_BonkPlayerPawn_h_11_SPARSE_DATA \
	FID_Bonk_Source_Bonk_Player_BonkPlayerPawn_h_11_RPC_WRAPPERS \
	FID_Bonk_Source_Bonk_Player_BonkPlayerPawn_h_11_CALLBACK_WRAPPERS \
	FID_Bonk_Source_Bonk_Player_BonkPlayerPawn_h_11_INCLASS \
	FID_Bonk_Source_Bonk_Player_BonkPlayerPawn_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Bonk_Source_Bonk_Player_BonkPlayerPawn_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Bonk_Source_Bonk_Player_BonkPlayerPawn_h_11_SPARSE_DATA \
	FID_Bonk_Source_Bonk_Player_BonkPlayerPawn_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Bonk_Source_Bonk_Player_BonkPlayerPawn_h_11_CALLBACK_WRAPPERS \
	FID_Bonk_Source_Bonk_Player_BonkPlayerPawn_h_11_INCLASS_NO_PURE_DECLS \
	FID_Bonk_Source_Bonk_Player_BonkPlayerPawn_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BONK_API UClass* StaticClass<class ABonkPlayerPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Bonk_Source_Bonk_Player_BonkPlayerPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

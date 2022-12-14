// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBonkBonkerComponent;
struct FHitResult;
class ABonkPlayerPawn;
class UBonkPlayer;
class UPrimitiveComponent;
#ifdef BONK_BonkBonkableComponent_generated_h
#error "BonkBonkableComponent.generated.h already included, missing '#pragma once' in BonkBonkableComponent.h"
#endif
#define BONK_BonkBonkableComponent_generated_h

#define FID_Bonk_Source_Bonk_Components_BonkBonkableComponent_h_73_DELEGATE \
struct BonkBonkableComponent_eventOnHitResponse_Parms \
{ \
	UBonkBonkerComponent* BonkerComponent; \
	FHitResult Hit; \
}; \
static inline void FOnHitResponse_DelegateWrapper(const FMulticastScriptDelegate& OnHitResponse, UBonkBonkerComponent* BonkerComponent, FHitResult Hit) \
{ \
	BonkBonkableComponent_eventOnHitResponse_Parms Parms; \
	Parms.BonkerComponent=BonkerComponent; \
	Parms.Hit=Hit; \
	OnHitResponse.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Bonk_Source_Bonk_Components_BonkBonkableComponent_h_78_DELEGATE \
struct BonkBonkableComponent_eventOnHitResponsePlayer_Parms \
{ \
	UBonkBonkerComponent* BonkerComponent; \
	ABonkPlayerPawn* Pawn; \
	UBonkPlayer* PlayerInfo; \
	FHitResult Hit; \
}; \
static inline void FOnHitResponsePlayer_DelegateWrapper(const FMulticastScriptDelegate& OnHitResponsePlayer, UBonkBonkerComponent* BonkerComponent, ABonkPlayerPawn* Pawn, UBonkPlayer* PlayerInfo, FHitResult Hit) \
{ \
	BonkBonkableComponent_eventOnHitResponsePlayer_Parms Parms; \
	Parms.BonkerComponent=BonkerComponent; \
	Parms.Pawn=Pawn; \
	Parms.PlayerInfo=PlayerInfo; \
	Parms.Hit=Hit; \
	OnHitResponsePlayer.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Bonk_Source_Bonk_Components_BonkBonkableComponent_h_83_DELEGATE \
struct BonkBonkableComponent_eventOnDamagedHitResponse_Parms \
{ \
	UBonkBonkerComponent* BonkerComponent; \
	FHitResult Hit; \
}; \
static inline void FOnDamagedHitResponse_DelegateWrapper(const FMulticastScriptDelegate& OnDamagedHitResponse, UBonkBonkerComponent* BonkerComponent, FHitResult Hit) \
{ \
	BonkBonkableComponent_eventOnDamagedHitResponse_Parms Parms; \
	Parms.BonkerComponent=BonkerComponent; \
	Parms.Hit=Hit; \
	OnDamagedHitResponse.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Bonk_Source_Bonk_Components_BonkBonkableComponent_h_17_SPARSE_DATA
#define FID_Bonk_Source_Bonk_Components_BonkBonkableComponent_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEnableBonkable); \
	DECLARE_FUNCTION(execHitResponseInternal); \
	DECLARE_FUNCTION(execKnockbackFromDirection); \
	DECLARE_FUNCTION(execKnockbackFromDirectionAndHit); \
	DECLARE_FUNCTION(execKnockbackFromHit); \
	DECLARE_FUNCTION(execSetPrimitiveComponent);


#define FID_Bonk_Source_Bonk_Components_BonkBonkableComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEnableBonkable); \
	DECLARE_FUNCTION(execHitResponseInternal); \
	DECLARE_FUNCTION(execKnockbackFromDirection); \
	DECLARE_FUNCTION(execKnockbackFromDirectionAndHit); \
	DECLARE_FUNCTION(execKnockbackFromHit); \
	DECLARE_FUNCTION(execSetPrimitiveComponent);


#define FID_Bonk_Source_Bonk_Components_BonkBonkableComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBonkBonkableComponent(); \
	friend struct Z_Construct_UClass_UBonkBonkableComponent_Statics; \
public: \
	DECLARE_CLASS(UBonkBonkableComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Bonk"), NO_API) \
	DECLARE_SERIALIZER(UBonkBonkableComponent)


#define FID_Bonk_Source_Bonk_Components_BonkBonkableComponent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUBonkBonkableComponent(); \
	friend struct Z_Construct_UClass_UBonkBonkableComponent_Statics; \
public: \
	DECLARE_CLASS(UBonkBonkableComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Bonk"), NO_API) \
	DECLARE_SERIALIZER(UBonkBonkableComponent)


#define FID_Bonk_Source_Bonk_Components_BonkBonkableComponent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBonkBonkableComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBonkBonkableComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBonkBonkableComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBonkBonkableComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBonkBonkableComponent(UBonkBonkableComponent&&); \
	NO_API UBonkBonkableComponent(const UBonkBonkableComponent&); \
public:


#define FID_Bonk_Source_Bonk_Components_BonkBonkableComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBonkBonkableComponent(UBonkBonkableComponent&&); \
	NO_API UBonkBonkableComponent(const UBonkBonkableComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBonkBonkableComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBonkBonkableComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBonkBonkableComponent)


#define FID_Bonk_Source_Bonk_Components_BonkBonkableComponent_h_14_PROLOG
#define FID_Bonk_Source_Bonk_Components_BonkBonkableComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Bonk_Source_Bonk_Components_BonkBonkableComponent_h_17_SPARSE_DATA \
	FID_Bonk_Source_Bonk_Components_BonkBonkableComponent_h_17_RPC_WRAPPERS \
	FID_Bonk_Source_Bonk_Components_BonkBonkableComponent_h_17_INCLASS \
	FID_Bonk_Source_Bonk_Components_BonkBonkableComponent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Bonk_Source_Bonk_Components_BonkBonkableComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Bonk_Source_Bonk_Components_BonkBonkableComponent_h_17_SPARSE_DATA \
	FID_Bonk_Source_Bonk_Components_BonkBonkableComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Bonk_Source_Bonk_Components_BonkBonkableComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Bonk_Source_Bonk_Components_BonkBonkableComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BONK_API UClass* StaticClass<class UBonkBonkableComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Bonk_Source_Bonk_Components_BonkBonkableComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

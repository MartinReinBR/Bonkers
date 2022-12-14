// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBonkBonkableComponent;
struct FHitResult;
class USceneComponent;
class ABonkPlayerPawn;
#ifdef BONK_BonkBonkerComponent_generated_h
#error "BonkBonkerComponent.generated.h already included, missing '#pragma once' in BonkBonkerComponent.h"
#endif
#define BONK_BonkBonkerComponent_generated_h

#define FID_Bonk_Source_Bonk_Components_BonkBonkerComponent_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHitBonkable_Statics; \
	BONK_API static class UScriptStruct* StaticStruct();


template<> BONK_API UScriptStruct* StaticStruct<struct FHitBonkable>();

#define FID_Bonk_Source_Bonk_Components_BonkBonkerComponent_h_117_DELEGATE \
struct BonkBonkerComponent_eventOnHit_Parms \
{ \
	UBonkBonkableComponent* BonkableComponent; \
	FHitResult FHitResult; \
}; \
static inline void FOnHit_DelegateWrapper(const FMulticastScriptDelegate& OnHit, UBonkBonkableComponent* BonkableComponent, FHitResult FHitResult) \
{ \
	BonkBonkerComponent_eventOnHit_Parms Parms; \
	Parms.BonkableComponent=BonkableComponent; \
	Parms.FHitResult=FHitResult; \
	OnHit.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Bonk_Source_Bonk_Components_BonkBonkerComponent_h_44_SPARSE_DATA
#define FID_Bonk_Source_Bonk_Components_BonkBonkerComponent_h_44_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTickExecuteTracing); \
	DECLARE_FUNCTION(execHitInternal); \
	DECLARE_FUNCTION(execSetTraceLocations); \
	DECLARE_FUNCTION(execSetTraceLocationFromSceneComps); \
	DECLARE_FUNCTION(execGetHoldingPlayer); \
	DECLARE_FUNCTION(execActivateTracing);


#define FID_Bonk_Source_Bonk_Components_BonkBonkerComponent_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTickExecuteTracing); \
	DECLARE_FUNCTION(execHitInternal); \
	DECLARE_FUNCTION(execSetTraceLocations); \
	DECLARE_FUNCTION(execSetTraceLocationFromSceneComps); \
	DECLARE_FUNCTION(execGetHoldingPlayer); \
	DECLARE_FUNCTION(execActivateTracing);


#define FID_Bonk_Source_Bonk_Components_BonkBonkerComponent_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBonkBonkerComponent(); \
	friend struct Z_Construct_UClass_UBonkBonkerComponent_Statics; \
public: \
	DECLARE_CLASS(UBonkBonkerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Bonk"), NO_API) \
	DECLARE_SERIALIZER(UBonkBonkerComponent)


#define FID_Bonk_Source_Bonk_Components_BonkBonkerComponent_h_44_INCLASS \
private: \
	static void StaticRegisterNativesUBonkBonkerComponent(); \
	friend struct Z_Construct_UClass_UBonkBonkerComponent_Statics; \
public: \
	DECLARE_CLASS(UBonkBonkerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Bonk"), NO_API) \
	DECLARE_SERIALIZER(UBonkBonkerComponent)


#define FID_Bonk_Source_Bonk_Components_BonkBonkerComponent_h_44_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBonkBonkerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBonkBonkerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBonkBonkerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBonkBonkerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBonkBonkerComponent(UBonkBonkerComponent&&); \
	NO_API UBonkBonkerComponent(const UBonkBonkerComponent&); \
public:


#define FID_Bonk_Source_Bonk_Components_BonkBonkerComponent_h_44_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBonkBonkerComponent(UBonkBonkerComponent&&); \
	NO_API UBonkBonkerComponent(const UBonkBonkerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBonkBonkerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBonkBonkerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBonkBonkerComponent)


#define FID_Bonk_Source_Bonk_Components_BonkBonkerComponent_h_41_PROLOG
#define FID_Bonk_Source_Bonk_Components_BonkBonkerComponent_h_44_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Bonk_Source_Bonk_Components_BonkBonkerComponent_h_44_SPARSE_DATA \
	FID_Bonk_Source_Bonk_Components_BonkBonkerComponent_h_44_RPC_WRAPPERS \
	FID_Bonk_Source_Bonk_Components_BonkBonkerComponent_h_44_INCLASS \
	FID_Bonk_Source_Bonk_Components_BonkBonkerComponent_h_44_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Bonk_Source_Bonk_Components_BonkBonkerComponent_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Bonk_Source_Bonk_Components_BonkBonkerComponent_h_44_SPARSE_DATA \
	FID_Bonk_Source_Bonk_Components_BonkBonkerComponent_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Bonk_Source_Bonk_Components_BonkBonkerComponent_h_44_INCLASS_NO_PURE_DECLS \
	FID_Bonk_Source_Bonk_Components_BonkBonkerComponent_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BONK_API UClass* StaticClass<class UBonkBonkerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Bonk_Source_Bonk_Components_BonkBonkerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

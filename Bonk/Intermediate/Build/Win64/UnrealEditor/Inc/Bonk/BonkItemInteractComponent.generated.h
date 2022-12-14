// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBonkItemInteractableComponent;
struct FHitResult;
class USceneComponent;
#ifdef BONK_BonkItemInteractComponent_generated_h
#error "BonkItemInteractComponent.generated.h already included, missing '#pragma once' in BonkItemInteractComponent.h"
#endif
#define BONK_BonkItemInteractComponent_generated_h

#define FID_Bonk_Source_Bonk_Components_BonkItemInteractComponent_h_117_DELEGATE \
struct BonkItemInteractComponent_eventOnAction_Parms \
{ \
	UBonkItemInteractableComponent* Interactable; \
}; \
static inline void FOnAction_DelegateWrapper(const FMulticastScriptDelegate& OnAction, UBonkItemInteractableComponent* Interactable) \
{ \
	BonkItemInteractComponent_eventOnAction_Parms Parms; \
	Parms.Interactable=Interactable; \
	OnAction.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Bonk_Source_Bonk_Components_BonkItemInteractComponent_h_121_DELEGATE \
struct BonkItemInteractComponent_eventOnPickup_Parms \
{ \
	UBonkItemInteractableComponent* Interactable; \
}; \
static inline void FOnPickup_DelegateWrapper(const FMulticastScriptDelegate& OnPickup, UBonkItemInteractableComponent* Interactable) \
{ \
	BonkItemInteractComponent_eventOnPickup_Parms Parms; \
	Parms.Interactable=Interactable; \
	OnPickup.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Bonk_Source_Bonk_Components_BonkItemInteractComponent_h_125_DELEGATE \
struct BonkItemInteractComponent_eventOnDrop_Parms \
{ \
	UBonkItemInteractableComponent* Interactable; \
}; \
static inline void FOnDrop_DelegateWrapper(const FMulticastScriptDelegate& OnDrop, UBonkItemInteractableComponent* Interactable) \
{ \
	BonkItemInteractComponent_eventOnDrop_Parms Parms; \
	Parms.Interactable=Interactable; \
	OnDrop.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Bonk_Source_Bonk_Components_BonkItemInteractComponent_h_129_DELEGATE \
static inline void FonStartThrow_DelegateWrapper(const FMulticastScriptDelegate& onStartThrow) \
{ \
	onStartThrow.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_Bonk_Source_Bonk_Components_BonkItemInteractComponent_h_12_SPARSE_DATA
#define FID_Bonk_Source_Bonk_Components_BonkItemInteractComponent_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execThrowTimer); \
	DECLARE_FUNCTION(execResetThrow); \
	DECLARE_FUNCTION(execThrow); \
	DECLARE_FUNCTION(execStartThrow); \
	DECLARE_FUNCTION(execTryDrop); \
	DECLARE_FUNCTION(execTryPickup); \
	DECLARE_FUNCTION(execTryAction); \
	DECLARE_FUNCTION(execIsBlocked); \
	DECLARE_FUNCTION(execMaxScoreValidInteractable); \
	DECLARE_FUNCTION(execSetSkeletalComponent);


#define FID_Bonk_Source_Bonk_Components_BonkItemInteractComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execThrowTimer); \
	DECLARE_FUNCTION(execResetThrow); \
	DECLARE_FUNCTION(execThrow); \
	DECLARE_FUNCTION(execStartThrow); \
	DECLARE_FUNCTION(execTryDrop); \
	DECLARE_FUNCTION(execTryPickup); \
	DECLARE_FUNCTION(execTryAction); \
	DECLARE_FUNCTION(execIsBlocked); \
	DECLARE_FUNCTION(execMaxScoreValidInteractable); \
	DECLARE_FUNCTION(execSetSkeletalComponent);


#define FID_Bonk_Source_Bonk_Components_BonkItemInteractComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBonkItemInteractComponent(); \
	friend struct Z_Construct_UClass_UBonkItemInteractComponent_Statics; \
public: \
	DECLARE_CLASS(UBonkItemInteractComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Bonk"), NO_API) \
	DECLARE_SERIALIZER(UBonkItemInteractComponent)


#define FID_Bonk_Source_Bonk_Components_BonkItemInteractComponent_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUBonkItemInteractComponent(); \
	friend struct Z_Construct_UClass_UBonkItemInteractComponent_Statics; \
public: \
	DECLARE_CLASS(UBonkItemInteractComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Bonk"), NO_API) \
	DECLARE_SERIALIZER(UBonkItemInteractComponent)


#define FID_Bonk_Source_Bonk_Components_BonkItemInteractComponent_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBonkItemInteractComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBonkItemInteractComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBonkItemInteractComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBonkItemInteractComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBonkItemInteractComponent(UBonkItemInteractComponent&&); \
	NO_API UBonkItemInteractComponent(const UBonkItemInteractComponent&); \
public:


#define FID_Bonk_Source_Bonk_Components_BonkItemInteractComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBonkItemInteractComponent(UBonkItemInteractComponent&&); \
	NO_API UBonkItemInteractComponent(const UBonkItemInteractComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBonkItemInteractComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBonkItemInteractComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBonkItemInteractComponent)


#define FID_Bonk_Source_Bonk_Components_BonkItemInteractComponent_h_9_PROLOG
#define FID_Bonk_Source_Bonk_Components_BonkItemInteractComponent_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Bonk_Source_Bonk_Components_BonkItemInteractComponent_h_12_SPARSE_DATA \
	FID_Bonk_Source_Bonk_Components_BonkItemInteractComponent_h_12_RPC_WRAPPERS \
	FID_Bonk_Source_Bonk_Components_BonkItemInteractComponent_h_12_INCLASS \
	FID_Bonk_Source_Bonk_Components_BonkItemInteractComponent_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Bonk_Source_Bonk_Components_BonkItemInteractComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Bonk_Source_Bonk_Components_BonkItemInteractComponent_h_12_SPARSE_DATA \
	FID_Bonk_Source_Bonk_Components_BonkItemInteractComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Bonk_Source_Bonk_Components_BonkItemInteractComponent_h_12_INCLASS_NO_PURE_DECLS \
	FID_Bonk_Source_Bonk_Components_BonkItemInteractComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BONK_API UClass* StaticClass<class UBonkItemInteractComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Bonk_Source_Bonk_Components_BonkItemInteractComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

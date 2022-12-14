// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBonkItemInteractComponent;
class UPrimitiveComponent;
#ifdef BONK_BonkItemInteractableComponent_generated_h
#error "BonkItemInteractableComponent.generated.h already included, missing '#pragma once' in BonkItemInteractableComponent.h"
#endif
#define BONK_BonkItemInteractableComponent_generated_h

#define FID_Bonk_Source_Bonk_Components_BonkItemInteractableComponent_h_81_DELEGATE \
static inline void FOnSelect_DelegateWrapper(const FMulticastScriptDelegate& OnSelect) \
{ \
	OnSelect.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_Bonk_Source_Bonk_Components_BonkItemInteractableComponent_h_85_DELEGATE \
static inline void FOnDeselect_DelegateWrapper(const FMulticastScriptDelegate& OnDeselect) \
{ \
	OnDeselect.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_Bonk_Source_Bonk_Components_BonkItemInteractableComponent_h_89_DELEGATE \
struct BonkItemInteractableComponent_eventOnPickupResponse_Parms \
{ \
	UBonkItemInteractComponent* InteractComp; \
}; \
static inline void FOnPickupResponse_DelegateWrapper(const FMulticastScriptDelegate& OnPickupResponse, UBonkItemInteractComponent* InteractComp) \
{ \
	BonkItemInteractableComponent_eventOnPickupResponse_Parms Parms; \
	Parms.InteractComp=InteractComp; \
	OnPickupResponse.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Bonk_Source_Bonk_Components_BonkItemInteractableComponent_h_93_DELEGATE \
struct BonkItemInteractableComponent_eventOnDropResponse_Parms \
{ \
	UBonkItemInteractComponent* InteractComp; \
}; \
static inline void FOnDropResponse_DelegateWrapper(const FMulticastScriptDelegate& OnDropResponse, UBonkItemInteractComponent* InteractComp) \
{ \
	BonkItemInteractableComponent_eventOnDropResponse_Parms Parms; \
	Parms.InteractComp=InteractComp; \
	OnDropResponse.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Bonk_Source_Bonk_Components_BonkItemInteractableComponent_h_97_DELEGATE \
struct BonkItemInteractableComponent_eventOnActionResponse_Parms \
{ \
	UBonkItemInteractComponent* InteractComp; \
}; \
static inline void FOnActionResponse_DelegateWrapper(const FMulticastScriptDelegate& OnActionResponse, UBonkItemInteractComponent* InteractComp) \
{ \
	BonkItemInteractableComponent_eventOnActionResponse_Parms Parms; \
	Parms.InteractComp=InteractComp; \
	OnActionResponse.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Bonk_Source_Bonk_Components_BonkItemInteractableComponent_h_17_SPARSE_DATA
#define FID_Bonk_Source_Bonk_Components_BonkItemInteractableComponent_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDrop); \
	DECLARE_FUNCTION(execPickup); \
	DECLARE_FUNCTION(execAction); \
	DECLARE_FUNCTION(execTryDeselect); \
	DECLARE_FUNCTION(execTrySelect); \
	DECLARE_FUNCTION(execSetPrimitiveComponent);


#define FID_Bonk_Source_Bonk_Components_BonkItemInteractableComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDrop); \
	DECLARE_FUNCTION(execPickup); \
	DECLARE_FUNCTION(execAction); \
	DECLARE_FUNCTION(execTryDeselect); \
	DECLARE_FUNCTION(execTrySelect); \
	DECLARE_FUNCTION(execSetPrimitiveComponent);


#define FID_Bonk_Source_Bonk_Components_BonkItemInteractableComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBonkItemInteractableComponent(); \
	friend struct Z_Construct_UClass_UBonkItemInteractableComponent_Statics; \
public: \
	DECLARE_CLASS(UBonkItemInteractableComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Bonk"), NO_API) \
	DECLARE_SERIALIZER(UBonkItemInteractableComponent)


#define FID_Bonk_Source_Bonk_Components_BonkItemInteractableComponent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUBonkItemInteractableComponent(); \
	friend struct Z_Construct_UClass_UBonkItemInteractableComponent_Statics; \
public: \
	DECLARE_CLASS(UBonkItemInteractableComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Bonk"), NO_API) \
	DECLARE_SERIALIZER(UBonkItemInteractableComponent)


#define FID_Bonk_Source_Bonk_Components_BonkItemInteractableComponent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBonkItemInteractableComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBonkItemInteractableComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBonkItemInteractableComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBonkItemInteractableComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBonkItemInteractableComponent(UBonkItemInteractableComponent&&); \
	NO_API UBonkItemInteractableComponent(const UBonkItemInteractableComponent&); \
public:


#define FID_Bonk_Source_Bonk_Components_BonkItemInteractableComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBonkItemInteractableComponent(UBonkItemInteractableComponent&&); \
	NO_API UBonkItemInteractableComponent(const UBonkItemInteractableComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBonkItemInteractableComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBonkItemInteractableComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBonkItemInteractableComponent)


#define FID_Bonk_Source_Bonk_Components_BonkItemInteractableComponent_h_14_PROLOG
#define FID_Bonk_Source_Bonk_Components_BonkItemInteractableComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Bonk_Source_Bonk_Components_BonkItemInteractableComponent_h_17_SPARSE_DATA \
	FID_Bonk_Source_Bonk_Components_BonkItemInteractableComponent_h_17_RPC_WRAPPERS \
	FID_Bonk_Source_Bonk_Components_BonkItemInteractableComponent_h_17_INCLASS \
	FID_Bonk_Source_Bonk_Components_BonkItemInteractableComponent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Bonk_Source_Bonk_Components_BonkItemInteractableComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Bonk_Source_Bonk_Components_BonkItemInteractableComponent_h_17_SPARSE_DATA \
	FID_Bonk_Source_Bonk_Components_BonkItemInteractableComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Bonk_Source_Bonk_Components_BonkItemInteractableComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Bonk_Source_Bonk_Components_BonkItemInteractableComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BONK_API UClass* StaticClass<class UBonkItemInteractableComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Bonk_Source_Bonk_Components_BonkItemInteractableComponent_h


#define FOREACH_ENUM_INTERACTABLETYPE(op) \
	op(Static) \
	op(Dynamic) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

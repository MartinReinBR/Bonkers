// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMeshComponent;
class UBonkItemInteractComponent;
#ifdef BONK_BonkBonker_generated_h
#error "BonkBonker.generated.h already included, missing '#pragma once' in BonkBonker.h"
#endif
#define BONK_BonkBonker_generated_h

#define FID_Bonk_Source_Bonk_Actors_BonkBonker_h_18_SPARSE_DATA
#define FID_Bonk_Source_Bonk_Actors_BonkBonker_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMeshComp); \
	DECLARE_FUNCTION(execGetColliderComp); \
	DECLARE_FUNCTION(execDrop_Callback); \
	DECLARE_FUNCTION(execPickup_Callback);


#define FID_Bonk_Source_Bonk_Actors_BonkBonker_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMeshComp); \
	DECLARE_FUNCTION(execGetColliderComp); \
	DECLARE_FUNCTION(execDrop_Callback); \
	DECLARE_FUNCTION(execPickup_Callback);


#define FID_Bonk_Source_Bonk_Actors_BonkBonker_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABonkBonker(); \
	friend struct Z_Construct_UClass_ABonkBonker_Statics; \
public: \
	DECLARE_CLASS(ABonkBonker, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Bonk"), NO_API) \
	DECLARE_SERIALIZER(ABonkBonker)


#define FID_Bonk_Source_Bonk_Actors_BonkBonker_h_18_INCLASS \
private: \
	static void StaticRegisterNativesABonkBonker(); \
	friend struct Z_Construct_UClass_ABonkBonker_Statics; \
public: \
	DECLARE_CLASS(ABonkBonker, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Bonk"), NO_API) \
	DECLARE_SERIALIZER(ABonkBonker)


#define FID_Bonk_Source_Bonk_Actors_BonkBonker_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABonkBonker(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABonkBonker) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABonkBonker); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABonkBonker); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABonkBonker(ABonkBonker&&); \
	NO_API ABonkBonker(const ABonkBonker&); \
public:


#define FID_Bonk_Source_Bonk_Actors_BonkBonker_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABonkBonker(ABonkBonker&&); \
	NO_API ABonkBonker(const ABonkBonker&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABonkBonker); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABonkBonker); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABonkBonker)


#define FID_Bonk_Source_Bonk_Actors_BonkBonker_h_15_PROLOG
#define FID_Bonk_Source_Bonk_Actors_BonkBonker_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Bonk_Source_Bonk_Actors_BonkBonker_h_18_SPARSE_DATA \
	FID_Bonk_Source_Bonk_Actors_BonkBonker_h_18_RPC_WRAPPERS \
	FID_Bonk_Source_Bonk_Actors_BonkBonker_h_18_INCLASS \
	FID_Bonk_Source_Bonk_Actors_BonkBonker_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Bonk_Source_Bonk_Actors_BonkBonker_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Bonk_Source_Bonk_Actors_BonkBonker_h_18_SPARSE_DATA \
	FID_Bonk_Source_Bonk_Actors_BonkBonker_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Bonk_Source_Bonk_Actors_BonkBonker_h_18_INCLASS_NO_PURE_DECLS \
	FID_Bonk_Source_Bonk_Actors_BonkBonker_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BONK_API UClass* StaticClass<class ABonkBonker>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Bonk_Source_Bonk_Actors_BonkBonker_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

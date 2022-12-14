// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BONK_BonkAudience_generated_h
#error "BonkAudience.generated.h already included, missing '#pragma once' in BonkAudience.h"
#endif
#define BONK_BonkAudience_generated_h

#define FID_Bonk_Source_Bonk_Actors_BonkAudience_h_13_DELEGATE \
static inline void FAudienceThrowSignature_DelegateWrapper(const FMulticastScriptDelegate& AudienceThrowSignature) \
{ \
	AudienceThrowSignature.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_Bonk_Source_Bonk_Actors_BonkAudience_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAudienceSpawnPair_Statics; \
	BONK_API static class UScriptStruct* StaticStruct();


template<> BONK_API UScriptStruct* StaticStruct<struct FAudienceSpawnPair>();

#define FID_Bonk_Source_Bonk_Actors_BonkAudience_h_44_SPARSE_DATA
#define FID_Bonk_Source_Bonk_Actors_BonkAudience_h_44_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execThrowItemToPointInBox);


#define FID_Bonk_Source_Bonk_Actors_BonkAudience_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execThrowItemToPointInBox);


#define FID_Bonk_Source_Bonk_Actors_BonkAudience_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABonkAudience(); \
	friend struct Z_Construct_UClass_ABonkAudience_Statics; \
public: \
	DECLARE_CLASS(ABonkAudience, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Bonk"), NO_API) \
	DECLARE_SERIALIZER(ABonkAudience)


#define FID_Bonk_Source_Bonk_Actors_BonkAudience_h_44_INCLASS \
private: \
	static void StaticRegisterNativesABonkAudience(); \
	friend struct Z_Construct_UClass_ABonkAudience_Statics; \
public: \
	DECLARE_CLASS(ABonkAudience, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Bonk"), NO_API) \
	DECLARE_SERIALIZER(ABonkAudience)


#define FID_Bonk_Source_Bonk_Actors_BonkAudience_h_44_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABonkAudience(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABonkAudience) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABonkAudience); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABonkAudience); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABonkAudience(ABonkAudience&&); \
	NO_API ABonkAudience(const ABonkAudience&); \
public:


#define FID_Bonk_Source_Bonk_Actors_BonkAudience_h_44_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABonkAudience(ABonkAudience&&); \
	NO_API ABonkAudience(const ABonkAudience&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABonkAudience); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABonkAudience); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABonkAudience)


#define FID_Bonk_Source_Bonk_Actors_BonkAudience_h_41_PROLOG
#define FID_Bonk_Source_Bonk_Actors_BonkAudience_h_44_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Bonk_Source_Bonk_Actors_BonkAudience_h_44_SPARSE_DATA \
	FID_Bonk_Source_Bonk_Actors_BonkAudience_h_44_RPC_WRAPPERS \
	FID_Bonk_Source_Bonk_Actors_BonkAudience_h_44_INCLASS \
	FID_Bonk_Source_Bonk_Actors_BonkAudience_h_44_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Bonk_Source_Bonk_Actors_BonkAudience_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Bonk_Source_Bonk_Actors_BonkAudience_h_44_SPARSE_DATA \
	FID_Bonk_Source_Bonk_Actors_BonkAudience_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Bonk_Source_Bonk_Actors_BonkAudience_h_44_INCLASS_NO_PURE_DECLS \
	FID_Bonk_Source_Bonk_Actors_BonkAudience_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BONK_API UClass* StaticClass<class ABonkAudience>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Bonk_Source_Bonk_Actors_BonkAudience_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

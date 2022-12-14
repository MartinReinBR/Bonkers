// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef BONK_BonkCameraActor_generated_h
#error "BonkCameraActor.generated.h already included, missing '#pragma once' in BonkCameraActor.h"
#endif
#define BONK_BonkCameraActor_generated_h

#define FID_Bonk_Source_Bonk_Actors_BonkCameraActor_h_25_SPARSE_DATA
#define FID_Bonk_Source_Bonk_Actors_BonkCameraActor_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStartZoomoutSequence); \
	DECLARE_FUNCTION(execClearFollowTargets); \
	DECLARE_FUNCTION(execGetLocationMaxBounds); \
	DECLARE_FUNCTION(execGetLocationMinBounds); \
	DECLARE_FUNCTION(execSetFollowTargets);


#define FID_Bonk_Source_Bonk_Actors_BonkCameraActor_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartZoomoutSequence); \
	DECLARE_FUNCTION(execClearFollowTargets); \
	DECLARE_FUNCTION(execGetLocationMaxBounds); \
	DECLARE_FUNCTION(execGetLocationMinBounds); \
	DECLARE_FUNCTION(execSetFollowTargets);


#define FID_Bonk_Source_Bonk_Actors_BonkCameraActor_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABonkCameraActor(); \
	friend struct Z_Construct_UClass_ABonkCameraActor_Statics; \
public: \
	DECLARE_CLASS(ABonkCameraActor, ACameraActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Bonk"), NO_API) \
	DECLARE_SERIALIZER(ABonkCameraActor)


#define FID_Bonk_Source_Bonk_Actors_BonkCameraActor_h_25_INCLASS \
private: \
	static void StaticRegisterNativesABonkCameraActor(); \
	friend struct Z_Construct_UClass_ABonkCameraActor_Statics; \
public: \
	DECLARE_CLASS(ABonkCameraActor, ACameraActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Bonk"), NO_API) \
	DECLARE_SERIALIZER(ABonkCameraActor)


#define FID_Bonk_Source_Bonk_Actors_BonkCameraActor_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABonkCameraActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABonkCameraActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABonkCameraActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABonkCameraActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABonkCameraActor(ABonkCameraActor&&); \
	NO_API ABonkCameraActor(const ABonkCameraActor&); \
public:


#define FID_Bonk_Source_Bonk_Actors_BonkCameraActor_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABonkCameraActor(ABonkCameraActor&&); \
	NO_API ABonkCameraActor(const ABonkCameraActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABonkCameraActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABonkCameraActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABonkCameraActor)


#define FID_Bonk_Source_Bonk_Actors_BonkCameraActor_h_22_PROLOG
#define FID_Bonk_Source_Bonk_Actors_BonkCameraActor_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Bonk_Source_Bonk_Actors_BonkCameraActor_h_25_SPARSE_DATA \
	FID_Bonk_Source_Bonk_Actors_BonkCameraActor_h_25_RPC_WRAPPERS \
	FID_Bonk_Source_Bonk_Actors_BonkCameraActor_h_25_INCLASS \
	FID_Bonk_Source_Bonk_Actors_BonkCameraActor_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Bonk_Source_Bonk_Actors_BonkCameraActor_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Bonk_Source_Bonk_Actors_BonkCameraActor_h_25_SPARSE_DATA \
	FID_Bonk_Source_Bonk_Actors_BonkCameraActor_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Bonk_Source_Bonk_Actors_BonkCameraActor_h_25_INCLASS_NO_PURE_DECLS \
	FID_Bonk_Source_Bonk_Actors_BonkCameraActor_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BONK_API UClass* StaticClass<class ABonkCameraActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Bonk_Source_Bonk_Actors_BonkCameraActor_h


#define FOREACH_ENUM_CAMERASTATE(op) \
	op(Tracking) \
	op(Stopped) \
	op(ZoomingOut) \
	op(ZoomingIn) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

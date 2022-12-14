// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BONK_BonkAttribute_generated_h
#error "BonkAttribute.generated.h already included, missing '#pragma once' in BonkAttribute.h"
#endif
#define BONK_BonkAttribute_generated_h

#define FID_Bonk_Source_Bonk_Components_BonkAttribute_h_8_SPARSE_DATA
#define FID_Bonk_Source_Bonk_Components_BonkAttribute_h_8_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCurrentValue); \
	DECLARE_FUNCTION(execSetBaseValue); \
	DECLARE_FUNCTION(execInit);


#define FID_Bonk_Source_Bonk_Components_BonkAttribute_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCurrentValue); \
	DECLARE_FUNCTION(execSetBaseValue); \
	DECLARE_FUNCTION(execInit);


#define FID_Bonk_Source_Bonk_Components_BonkAttribute_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBonkAttribute(); \
	friend struct Z_Construct_UClass_UBonkAttribute_Statics; \
public: \
	DECLARE_CLASS(UBonkAttribute, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Bonk"), NO_API) \
	DECLARE_SERIALIZER(UBonkAttribute)


#define FID_Bonk_Source_Bonk_Components_BonkAttribute_h_8_INCLASS \
private: \
	static void StaticRegisterNativesUBonkAttribute(); \
	friend struct Z_Construct_UClass_UBonkAttribute_Statics; \
public: \
	DECLARE_CLASS(UBonkAttribute, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Bonk"), NO_API) \
	DECLARE_SERIALIZER(UBonkAttribute)


#define FID_Bonk_Source_Bonk_Components_BonkAttribute_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBonkAttribute(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBonkAttribute) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBonkAttribute); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBonkAttribute); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBonkAttribute(UBonkAttribute&&); \
	NO_API UBonkAttribute(const UBonkAttribute&); \
public:


#define FID_Bonk_Source_Bonk_Components_BonkAttribute_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBonkAttribute(UBonkAttribute&&); \
	NO_API UBonkAttribute(const UBonkAttribute&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBonkAttribute); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBonkAttribute); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBonkAttribute)


#define FID_Bonk_Source_Bonk_Components_BonkAttribute_h_5_PROLOG
#define FID_Bonk_Source_Bonk_Components_BonkAttribute_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Bonk_Source_Bonk_Components_BonkAttribute_h_8_SPARSE_DATA \
	FID_Bonk_Source_Bonk_Components_BonkAttribute_h_8_RPC_WRAPPERS \
	FID_Bonk_Source_Bonk_Components_BonkAttribute_h_8_INCLASS \
	FID_Bonk_Source_Bonk_Components_BonkAttribute_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Bonk_Source_Bonk_Components_BonkAttribute_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Bonk_Source_Bonk_Components_BonkAttribute_h_8_SPARSE_DATA \
	FID_Bonk_Source_Bonk_Components_BonkAttribute_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Bonk_Source_Bonk_Components_BonkAttribute_h_8_INCLASS_NO_PURE_DECLS \
	FID_Bonk_Source_Bonk_Components_BonkAttribute_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BONK_API UClass* StaticClass<class UBonkAttribute>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Bonk_Source_Bonk_Components_BonkAttribute_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

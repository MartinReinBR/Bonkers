// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBonkPlayer;
class ABonkPlayerPawn;
class UBonkAttribute;
class UBonkGameplayEffect;
#ifdef BONK_BonkPlayer_generated_h
#error "BonkPlayer.generated.h already included, missing '#pragma once' in BonkPlayer.h"
#endif
#define BONK_BonkPlayer_generated_h

#define FID_Bonk_Source_Bonk_Player_BonkPlayer_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMoneySource_Statics; \
	BONK_API static class UScriptStruct* StaticStruct();


template<> BONK_API UScriptStruct* StaticStruct<struct FMoneySource>();

#define FID_Bonk_Source_Bonk_Player_BonkPlayer_h_33_DELEGATE \
struct _Script_Bonk_eventOnMoneyUpdated_Parms \
{ \
	int32 NewAmount; \
}; \
static inline void FOnMoneyUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnMoneyUpdated, int32 NewAmount) \
{ \
	_Script_Bonk_eventOnMoneyUpdated_Parms Parms; \
	Parms.NewAmount=NewAmount; \
	OnMoneyUpdated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Bonk_Source_Bonk_Player_BonkPlayer_h_34_DELEGATE \
struct _Script_Bonk_eventOnHealthUpdated_Parms \
{ \
	int32 NewHealth; \
}; \
static inline void FOnHealthUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnHealthUpdated, int32 NewHealth) \
{ \
	_Script_Bonk_eventOnHealthUpdated_Parms Parms; \
	Parms.NewHealth=NewHealth; \
	OnHealthUpdated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Bonk_Source_Bonk_Player_BonkPlayer_h_137_DELEGATE \
struct BonkPlayer_eventOnAddedKill_Parms \
{ \
	int32 NewKillCount; \
}; \
static inline void FOnAddedKill_DelegateWrapper(const FMulticastScriptDelegate& OnAddedKill, int32 NewKillCount) \
{ \
	BonkPlayer_eventOnAddedKill_Parms Parms; \
	Parms.NewKillCount=NewKillCount; \
	OnAddedKill.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Bonk_Source_Bonk_Player_BonkPlayer_h_42_SPARSE_DATA
#define FID_Bonk_Source_Bonk_Player_BonkPlayer_h_42_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddKill); \
	DECLARE_FUNCTION(execAddMoney); \
	DECLARE_FUNCTION(execRemoveMoney); \
	DECLARE_FUNCTION(execCanAfford); \
	DECLARE_FUNCTION(execGetPlayerPawn); \
	DECLARE_FUNCTION(execGetAttributeBase); \
	DECLARE_FUNCTION(execGetAttributeCurrent); \
	DECLARE_FUNCTION(execGetAttribute); \
	DECLARE_FUNCTION(execAddEffect);


#define FID_Bonk_Source_Bonk_Player_BonkPlayer_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddKill); \
	DECLARE_FUNCTION(execAddMoney); \
	DECLARE_FUNCTION(execRemoveMoney); \
	DECLARE_FUNCTION(execCanAfford); \
	DECLARE_FUNCTION(execGetPlayerPawn); \
	DECLARE_FUNCTION(execGetAttributeBase); \
	DECLARE_FUNCTION(execGetAttributeCurrent); \
	DECLARE_FUNCTION(execGetAttribute); \
	DECLARE_FUNCTION(execAddEffect);


#define FID_Bonk_Source_Bonk_Player_BonkPlayer_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBonkPlayer(); \
	friend struct Z_Construct_UClass_UBonkPlayer_Statics; \
public: \
	DECLARE_CLASS(UBonkPlayer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Bonk"), NO_API) \
	DECLARE_SERIALIZER(UBonkPlayer)


#define FID_Bonk_Source_Bonk_Player_BonkPlayer_h_42_INCLASS \
private: \
	static void StaticRegisterNativesUBonkPlayer(); \
	friend struct Z_Construct_UClass_UBonkPlayer_Statics; \
public: \
	DECLARE_CLASS(UBonkPlayer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Bonk"), NO_API) \
	DECLARE_SERIALIZER(UBonkPlayer)


#define FID_Bonk_Source_Bonk_Player_BonkPlayer_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBonkPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBonkPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBonkPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBonkPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBonkPlayer(UBonkPlayer&&); \
	NO_API UBonkPlayer(const UBonkPlayer&); \
public:


#define FID_Bonk_Source_Bonk_Player_BonkPlayer_h_42_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBonkPlayer(UBonkPlayer&&); \
	NO_API UBonkPlayer(const UBonkPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBonkPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBonkPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBonkPlayer)


#define FID_Bonk_Source_Bonk_Player_BonkPlayer_h_39_PROLOG
#define FID_Bonk_Source_Bonk_Player_BonkPlayer_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Bonk_Source_Bonk_Player_BonkPlayer_h_42_SPARSE_DATA \
	FID_Bonk_Source_Bonk_Player_BonkPlayer_h_42_RPC_WRAPPERS \
	FID_Bonk_Source_Bonk_Player_BonkPlayer_h_42_INCLASS \
	FID_Bonk_Source_Bonk_Player_BonkPlayer_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Bonk_Source_Bonk_Player_BonkPlayer_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Bonk_Source_Bonk_Player_BonkPlayer_h_42_SPARSE_DATA \
	FID_Bonk_Source_Bonk_Player_BonkPlayer_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Bonk_Source_Bonk_Player_BonkPlayer_h_42_INCLASS_NO_PURE_DECLS \
	FID_Bonk_Source_Bonk_Player_BonkPlayer_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BONK_API UClass* StaticClass<class UBonkPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Bonk_Source_Bonk_Player_BonkPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

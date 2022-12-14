// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UBonkHUD;
struct FTeamStructure;
class UBonkPlayer;
class UObject;
class ABonkGameModeBase;
#ifdef BONK_BonkGameModeBase_generated_h
#error "BonkGameModeBase.generated.h already included, missing '#pragma once' in BonkGameModeBase.h"
#endif
#define BONK_BonkGameModeBase_generated_h

#define FID_Bonk_Source_Bonk_BonkGameModeBase_h_15_DELEGATE \
struct _Script_Bonk_eventOnPreRoundStart_Parms \
{ \
	int32 RoundNumber; \
}; \
static inline void FOnPreRoundStart_DelegateWrapper(const FMulticastScriptDelegate& OnPreRoundStart, int32 RoundNumber) \
{ \
	_Script_Bonk_eventOnPreRoundStart_Parms Parms; \
	Parms.RoundNumber=RoundNumber; \
	OnPreRoundStart.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Bonk_Source_Bonk_BonkGameModeBase_h_16_DELEGATE \
struct _Script_Bonk_eventOnRoundStart_Parms \
{ \
	int32 RoundNumber; \
}; \
static inline void FOnRoundStart_DelegateWrapper(const FMulticastScriptDelegate& OnRoundStart, int32 RoundNumber) \
{ \
	_Script_Bonk_eventOnRoundStart_Parms Parms; \
	Parms.RoundNumber=RoundNumber; \
	OnRoundStart.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Bonk_Source_Bonk_BonkGameModeBase_h_17_DELEGATE \
struct _Script_Bonk_eventOnRoundEnd_Parms \
{ \
	int32 RoundNumber; \
}; \
static inline void FOnRoundEnd_DelegateWrapper(const FMulticastScriptDelegate& OnRoundEnd, int32 RoundNumber) \
{ \
	_Script_Bonk_eventOnRoundEnd_Parms Parms; \
	Parms.RoundNumber=RoundNumber; \
	OnRoundEnd.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Bonk_Source_Bonk_BonkGameModeBase_h_19_DELEGATE \
struct _Script_Bonk_eventOnPlayerJoined_Parms \
{ \
	int32 PlayerIndex; \
}; \
static inline void FOnPlayerJoined_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerJoined, int32 PlayerIndex) \
{ \
	_Script_Bonk_eventOnPlayerJoined_Parms Parms; \
	Parms.PlayerIndex=PlayerIndex; \
	OnPlayerJoined.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Bonk_Source_Bonk_BonkGameModeBase_h_20_DELEGATE \
struct _Script_Bonk_eventOnPlayerReady_Parms \
{ \
	int32 PlayerIndex; \
}; \
static inline void FOnPlayerReady_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerReady, int32 PlayerIndex) \
{ \
	_Script_Bonk_eventOnPlayerReady_Parms Parms; \
	Parms.PlayerIndex=PlayerIndex; \
	OnPlayerReady.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Bonk_Source_Bonk_BonkGameModeBase_h_22_DELEGATE \
static inline void FOnShopEntered_DelegateWrapper(const FMulticastScriptDelegate& OnShopEntered) \
{ \
	OnShopEntered.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_Bonk_Source_Bonk_BonkGameModeBase_h_24_DELEGATE \
struct _Script_Bonk_eventOnTeamRoundWin_Parms \
{ \
	FText TeamName; \
}; \
static inline void FOnTeamRoundWin_DelegateWrapper(const FMulticastScriptDelegate& OnTeamRoundWin, FText const& TeamName) \
{ \
	_Script_Bonk_eventOnTeamRoundWin_Parms Parms; \
	Parms.TeamName=TeamName; \
	OnTeamRoundWin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Bonk_Source_Bonk_BonkGameModeBase_h_25_DELEGATE \
struct _Script_Bonk_eventOnTeamMatchWin_Parms \
{ \
	FText TeamName; \
}; \
static inline void FOnTeamMatchWin_DelegateWrapper(const FMulticastScriptDelegate& OnTeamMatchWin, FText const& TeamName) \
{ \
	_Script_Bonk_eventOnTeamMatchWin_Parms Parms; \
	Parms.TeamName=TeamName; \
	OnTeamMatchWin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Bonk_Source_Bonk_BonkGameModeBase_h_27_DELEGATE \
struct _Script_Bonk_eventOnPlayerSwitchedTeam_Parms \
{ \
	int32 PlayerIndex; \
	int32 TeamIndex; \
}; \
static inline void FOnPlayerSwitchedTeam_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerSwitchedTeam, int32 PlayerIndex, int32 TeamIndex) \
{ \
	_Script_Bonk_eventOnPlayerSwitchedTeam_Parms Parms; \
	Parms.PlayerIndex=PlayerIndex; \
	Parms.TeamIndex=TeamIndex; \
	OnPlayerSwitchedTeam.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Bonk_Source_Bonk_BonkGameModeBase_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTeamStructure_Statics; \
	BONK_API static class UScriptStruct* StaticStruct();


template<> BONK_API UScriptStruct* StaticStruct<struct FTeamStructure>();

#define FID_Bonk_Source_Bonk_BonkGameModeBase_h_52_SPARSE_DATA
#define FID_Bonk_Source_Bonk_BonkGameModeBase_h_52_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRescueCamera); \
	DECLARE_FUNCTION(execDisablePlayerInputs); \
	DECLARE_FUNCTION(execEnablePlayerInputs); \
	DECLARE_FUNCTION(execGetHUD); \
	DECLARE_FUNCTION(execGetCurrentRound); \
	DECLARE_FUNCTION(execGetTeams); \
	DECLARE_FUNCTION(execGetTeam); \
	DECLARE_FUNCTION(execGetPlayers); \
	DECLARE_FUNCTION(execGetPlayer); \
	DECLARE_FUNCTION(execPlayerDied); \
	DECLARE_FUNCTION(execCanStartMatch); \
	DECLARE_FUNCTION(execCheckAllPlayersLockedIn); \
	DECLARE_FUNCTION(execLockInPlayer); \
	DECLARE_FUNCTION(execSwitchTeamForPlayer); \
	DECLARE_FUNCTION(execGoToShop); \
	DECLARE_FUNCTION(execEndRound); \
	DECLARE_FUNCTION(execStartRound); \
	DECLARE_FUNCTION(execStartPreRound); \
	DECLARE_FUNCTION(execStartMatch); \
	DECLARE_FUNCTION(execGet);


#define FID_Bonk_Source_Bonk_BonkGameModeBase_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRescueCamera); \
	DECLARE_FUNCTION(execDisablePlayerInputs); \
	DECLARE_FUNCTION(execEnablePlayerInputs); \
	DECLARE_FUNCTION(execGetHUD); \
	DECLARE_FUNCTION(execGetCurrentRound); \
	DECLARE_FUNCTION(execGetTeams); \
	DECLARE_FUNCTION(execGetTeam); \
	DECLARE_FUNCTION(execGetPlayers); \
	DECLARE_FUNCTION(execGetPlayer); \
	DECLARE_FUNCTION(execPlayerDied); \
	DECLARE_FUNCTION(execCanStartMatch); \
	DECLARE_FUNCTION(execCheckAllPlayersLockedIn); \
	DECLARE_FUNCTION(execLockInPlayer); \
	DECLARE_FUNCTION(execSwitchTeamForPlayer); \
	DECLARE_FUNCTION(execGoToShop); \
	DECLARE_FUNCTION(execEndRound); \
	DECLARE_FUNCTION(execStartRound); \
	DECLARE_FUNCTION(execStartPreRound); \
	DECLARE_FUNCTION(execStartMatch); \
	DECLARE_FUNCTION(execGet);


#define FID_Bonk_Source_Bonk_BonkGameModeBase_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABonkGameModeBase(); \
	friend struct Z_Construct_UClass_ABonkGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ABonkGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Bonk"), NO_API) \
	DECLARE_SERIALIZER(ABonkGameModeBase)


#define FID_Bonk_Source_Bonk_BonkGameModeBase_h_52_INCLASS \
private: \
	static void StaticRegisterNativesABonkGameModeBase(); \
	friend struct Z_Construct_UClass_ABonkGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ABonkGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Bonk"), NO_API) \
	DECLARE_SERIALIZER(ABonkGameModeBase)


#define FID_Bonk_Source_Bonk_BonkGameModeBase_h_52_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABonkGameModeBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABonkGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABonkGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABonkGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABonkGameModeBase(ABonkGameModeBase&&); \
	NO_API ABonkGameModeBase(const ABonkGameModeBase&); \
public:


#define FID_Bonk_Source_Bonk_BonkGameModeBase_h_52_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABonkGameModeBase(ABonkGameModeBase&&); \
	NO_API ABonkGameModeBase(const ABonkGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABonkGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABonkGameModeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABonkGameModeBase)


#define FID_Bonk_Source_Bonk_BonkGameModeBase_h_49_PROLOG
#define FID_Bonk_Source_Bonk_BonkGameModeBase_h_52_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Bonk_Source_Bonk_BonkGameModeBase_h_52_SPARSE_DATA \
	FID_Bonk_Source_Bonk_BonkGameModeBase_h_52_RPC_WRAPPERS \
	FID_Bonk_Source_Bonk_BonkGameModeBase_h_52_INCLASS \
	FID_Bonk_Source_Bonk_BonkGameModeBase_h_52_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Bonk_Source_Bonk_BonkGameModeBase_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Bonk_Source_Bonk_BonkGameModeBase_h_52_SPARSE_DATA \
	FID_Bonk_Source_Bonk_BonkGameModeBase_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Bonk_Source_Bonk_BonkGameModeBase_h_52_INCLASS_NO_PURE_DECLS \
	FID_Bonk_Source_Bonk_BonkGameModeBase_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BONK_API UClass* StaticClass<class ABonkGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Bonk_Source_Bonk_BonkGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bonk/Player/BonkPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBonkPlayer() {}
// Cross Module References
	BONK_API UScriptStruct* Z_Construct_UScriptStruct_FMoneySource();
	UPackage* Z_Construct_UPackage__Script_Bonk();
	BONK_API UFunction* Z_Construct_UDelegateFunction_Bonk_OnMoneyUpdated__DelegateSignature();
	BONK_API UFunction* Z_Construct_UDelegateFunction_Bonk_OnHealthUpdated__DelegateSignature();
	BONK_API UFunction* Z_Construct_UDelegateFunction_UBonkPlayer_OnAddedKill__DelegateSignature();
	BONK_API UClass* Z_Construct_UClass_UBonkPlayer();
	BONK_API UClass* Z_Construct_UClass_UBonkPlayer_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	BONK_API UClass* Z_Construct_UClass_UBonkGameplayEffect_NoRegister();
	BONK_API UClass* Z_Construct_UClass_UBonkAttribute_NoRegister();
	BONK_API UClass* Z_Construct_UClass_ABonkPlayerPawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	BONK_API UClass* Z_Construct_UClass_UBonkAttribute_Health_NoRegister();
	BONK_API UClass* Z_Construct_UClass_UBonkAttribute_AttackSpeed_NoRegister();
	BONK_API UClass* Z_Construct_UClass_UBonkAttribute_Damage_NoRegister();
	BONK_API UClass* Z_Construct_UClass_UBonkAttribute_MoveSpeed_NoRegister();
	BONK_API UClass* Z_Construct_UClass_UBonkAttribute_Resilience_NoRegister();
	BONK_API UClass* Z_Construct_UClass_UBonkAttribute_WeaponSize_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MoneySource;
class UScriptStruct* FMoneySource::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MoneySource.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MoneySource.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMoneySource, Z_Construct_UPackage__Script_Bonk(), TEXT("MoneySource"));
	}
	return Z_Registration_Info_UScriptStruct_MoneySource.OuterSingleton;
}
template<> BONK_API UScriptStruct* StaticStruct<FMoneySource>()
{
	return FMoneySource::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMoneySource_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_SourceText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoneySource_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Player/BonkPlayer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMoneySource_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMoneySource>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoneySource_Statics::NewProp_SourceText_MetaData[] = {
		{ "Category", "MoneySource" },
		{ "ModuleRelativePath", "Player/BonkPlayer.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FMoneySource_Statics::NewProp_SourceText = { "SourceText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMoneySource, SourceText), METADATA_PARAMS(Z_Construct_UScriptStruct_FMoneySource_Statics::NewProp_SourceText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoneySource_Statics::NewProp_SourceText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoneySource_Statics::NewProp_Amount_MetaData[] = {
		{ "Category", "MoneySource" },
		{ "ModuleRelativePath", "Player/BonkPlayer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMoneySource_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMoneySource, Amount), METADATA_PARAMS(Z_Construct_UScriptStruct_FMoneySource_Statics::NewProp_Amount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoneySource_Statics::NewProp_Amount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMoneySource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoneySource_Statics::NewProp_SourceText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoneySource_Statics::NewProp_Amount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMoneySource_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Bonk,
		nullptr,
		&NewStructOps,
		"MoneySource",
		sizeof(FMoneySource),
		alignof(FMoneySource),
		Z_Construct_UScriptStruct_FMoneySource_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoneySource_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMoneySource_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoneySource_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMoneySource()
	{
		if (!Z_Registration_Info_UScriptStruct_MoneySource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MoneySource.InnerSingleton, Z_Construct_UScriptStruct_FMoneySource_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MoneySource.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_Bonk_OnMoneyUpdated__DelegateSignature_Statics
	{
		struct _Script_Bonk_eventOnMoneyUpdated_Parms
		{
			int32 NewAmount;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Bonk_OnMoneyUpdated__DelegateSignature_Statics::NewProp_NewAmount = { "NewAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Bonk_eventOnMoneyUpdated_Parms, NewAmount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Bonk_OnMoneyUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Bonk_OnMoneyUpdated__DelegateSignature_Statics::NewProp_NewAmount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Bonk_OnMoneyUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/BonkPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Bonk_OnMoneyUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Bonk, nullptr, "OnMoneyUpdated__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Bonk_OnMoneyUpdated__DelegateSignature_Statics::_Script_Bonk_eventOnMoneyUpdated_Parms), Z_Construct_UDelegateFunction_Bonk_OnMoneyUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Bonk_OnMoneyUpdated__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Bonk_OnMoneyUpdated__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Bonk_OnMoneyUpdated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Bonk_OnMoneyUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Bonk_OnMoneyUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Bonk_OnHealthUpdated__DelegateSignature_Statics
	{
		struct _Script_Bonk_eventOnHealthUpdated_Parms
		{
			int32 NewHealth;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Bonk_OnHealthUpdated__DelegateSignature_Statics::NewProp_NewHealth = { "NewHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Bonk_eventOnHealthUpdated_Parms, NewHealth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Bonk_OnHealthUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Bonk_OnHealthUpdated__DelegateSignature_Statics::NewProp_NewHealth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Bonk_OnHealthUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/BonkPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Bonk_OnHealthUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Bonk, nullptr, "OnHealthUpdated__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Bonk_OnHealthUpdated__DelegateSignature_Statics::_Script_Bonk_eventOnHealthUpdated_Parms), Z_Construct_UDelegateFunction_Bonk_OnHealthUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Bonk_OnHealthUpdated__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Bonk_OnHealthUpdated__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Bonk_OnHealthUpdated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Bonk_OnHealthUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Bonk_OnHealthUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UBonkPlayer_OnAddedKill__DelegateSignature_Statics
	{
		struct BonkPlayer_eventOnAddedKill_Parms
		{
			int32 NewKillCount;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NewKillCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_UBonkPlayer_OnAddedKill__DelegateSignature_Statics::NewProp_NewKillCount = { "NewKillCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkPlayer_eventOnAddedKill_Parms, NewKillCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UBonkPlayer_OnAddedKill__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UBonkPlayer_OnAddedKill__DelegateSignature_Statics::NewProp_NewKillCount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UBonkPlayer_OnAddedKill__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/BonkPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UBonkPlayer_OnAddedKill__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkPlayer, nullptr, "OnAddedKill__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UBonkPlayer_OnAddedKill__DelegateSignature_Statics::BonkPlayer_eventOnAddedKill_Parms), Z_Construct_UDelegateFunction_UBonkPlayer_OnAddedKill__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBonkPlayer_OnAddedKill__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UBonkPlayer_OnAddedKill__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBonkPlayer_OnAddedKill__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UBonkPlayer_OnAddedKill__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UBonkPlayer_OnAddedKill__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UBonkPlayer::execAddKill)
	{
		P_GET_OBJECT(UBonkPlayer,Z_Param_KilledPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddKill(Z_Param_KilledPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBonkPlayer::execAddMoney)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddMoney(Z_Param_Amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBonkPlayer::execRemoveMoney)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveMoney(Z_Param_Amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBonkPlayer::execCanAfford)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Cost);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanAfford(Z_Param_Cost);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBonkPlayer::execGetPlayerPawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ABonkPlayerPawn**)Z_Param__Result=P_THIS->GetPlayerPawn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBonkPlayer::execGetAttributeBase)
	{
		P_GET_OBJECT(UClass,Z_Param_AttributeClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAttributeBase(Z_Param_AttributeClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBonkPlayer::execGetAttributeCurrent)
	{
		P_GET_OBJECT(UClass,Z_Param_AttributeClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAttributeCurrent(Z_Param_AttributeClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBonkPlayer::execGetAttribute)
	{
		P_GET_OBJECT(UClass,Z_Param_AttributeClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBonkAttribute**)Z_Param__Result=P_THIS->GetAttribute(Z_Param_AttributeClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBonkPlayer::execAddEffect)
	{
		P_GET_OBJECT(UClass,Z_Param_EffectClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddEffect(Z_Param_EffectClass);
		P_NATIVE_END;
	}
	void UBonkPlayer::StaticRegisterNativesUBonkPlayer()
	{
		UClass* Class = UBonkPlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddEffect", &UBonkPlayer::execAddEffect },
			{ "AddKill", &UBonkPlayer::execAddKill },
			{ "AddMoney", &UBonkPlayer::execAddMoney },
			{ "CanAfford", &UBonkPlayer::execCanAfford },
			{ "GetAttribute", &UBonkPlayer::execGetAttribute },
			{ "GetAttributeBase", &UBonkPlayer::execGetAttributeBase },
			{ "GetAttributeCurrent", &UBonkPlayer::execGetAttributeCurrent },
			{ "GetPlayerPawn", &UBonkPlayer::execGetPlayerPawn },
			{ "RemoveMoney", &UBonkPlayer::execRemoveMoney },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBonkPlayer_AddEffect_Statics
	{
		struct BonkPlayer_eventAddEffect_Parms
		{
			TSubclassOf<UBonkGameplayEffect>  EffectClass;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_EffectClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UBonkPlayer_AddEffect_Statics::NewProp_EffectClass = { "EffectClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkPlayer_eventAddEffect_Parms, EffectClass), Z_Construct_UClass_UBonkGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBonkPlayer_AddEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkPlayer_AddEffect_Statics::NewProp_EffectClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkPlayer_AddEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/BonkPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBonkPlayer_AddEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkPlayer, nullptr, "AddEffect", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBonkPlayer_AddEffect_Statics::BonkPlayer_eventAddEffect_Parms), Z_Construct_UFunction_UBonkPlayer_AddEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkPlayer_AddEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBonkPlayer_AddEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkPlayer_AddEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBonkPlayer_AddEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBonkPlayer_AddEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBonkPlayer_AddKill_Statics
	{
		struct BonkPlayer_eventAddKill_Parms
		{
			UBonkPlayer* KilledPlayer;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_KilledPlayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBonkPlayer_AddKill_Statics::NewProp_KilledPlayer = { "KilledPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkPlayer_eventAddKill_Parms, KilledPlayer), Z_Construct_UClass_UBonkPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBonkPlayer_AddKill_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkPlayer_AddKill_Statics::NewProp_KilledPlayer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkPlayer_AddKill_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/BonkPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBonkPlayer_AddKill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkPlayer, nullptr, "AddKill", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBonkPlayer_AddKill_Statics::BonkPlayer_eventAddKill_Parms), Z_Construct_UFunction_UBonkPlayer_AddKill_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkPlayer_AddKill_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBonkPlayer_AddKill_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkPlayer_AddKill_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBonkPlayer_AddKill()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBonkPlayer_AddKill_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBonkPlayer_AddMoney_Statics
	{
		struct BonkPlayer_eventAddMoney_Parms
		{
			int32 Amount;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBonkPlayer_AddMoney_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkPlayer_eventAddMoney_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBonkPlayer_AddMoney_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkPlayer_AddMoney_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkPlayer_AddMoney_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/BonkPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBonkPlayer_AddMoney_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkPlayer, nullptr, "AddMoney", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBonkPlayer_AddMoney_Statics::BonkPlayer_eventAddMoney_Parms), Z_Construct_UFunction_UBonkPlayer_AddMoney_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkPlayer_AddMoney_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBonkPlayer_AddMoney_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkPlayer_AddMoney_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBonkPlayer_AddMoney()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBonkPlayer_AddMoney_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBonkPlayer_CanAfford_Statics
	{
		struct BonkPlayer_eventCanAfford_Parms
		{
			int32 Cost;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Cost;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBonkPlayer_CanAfford_Statics::NewProp_Cost = { "Cost", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkPlayer_eventCanAfford_Parms, Cost), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBonkPlayer_CanAfford_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BonkPlayer_eventCanAfford_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBonkPlayer_CanAfford_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BonkPlayer_eventCanAfford_Parms), &Z_Construct_UFunction_UBonkPlayer_CanAfford_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBonkPlayer_CanAfford_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkPlayer_CanAfford_Statics::NewProp_Cost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkPlayer_CanAfford_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkPlayer_CanAfford_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/BonkPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBonkPlayer_CanAfford_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkPlayer, nullptr, "CanAfford", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBonkPlayer_CanAfford_Statics::BonkPlayer_eventCanAfford_Parms), Z_Construct_UFunction_UBonkPlayer_CanAfford_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkPlayer_CanAfford_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBonkPlayer_CanAfford_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkPlayer_CanAfford_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBonkPlayer_CanAfford()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBonkPlayer_CanAfford_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBonkPlayer_GetAttribute_Statics
	{
		struct BonkPlayer_eventGetAttribute_Parms
		{
			TSubclassOf<UBonkAttribute>  AttributeClass;
			UBonkAttribute* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_AttributeClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UBonkPlayer_GetAttribute_Statics::NewProp_AttributeClass = { "AttributeClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkPlayer_eventGetAttribute_Parms, AttributeClass), Z_Construct_UClass_UBonkAttribute_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBonkPlayer_GetAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkPlayer_eventGetAttribute_Parms, ReturnValue), Z_Construct_UClass_UBonkAttribute_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBonkPlayer_GetAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkPlayer_GetAttribute_Statics::NewProp_AttributeClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkPlayer_GetAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkPlayer_GetAttribute_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/BonkPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBonkPlayer_GetAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkPlayer, nullptr, "GetAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBonkPlayer_GetAttribute_Statics::BonkPlayer_eventGetAttribute_Parms), Z_Construct_UFunction_UBonkPlayer_GetAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkPlayer_GetAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBonkPlayer_GetAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkPlayer_GetAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBonkPlayer_GetAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBonkPlayer_GetAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBonkPlayer_GetAttributeBase_Statics
	{
		struct BonkPlayer_eventGetAttributeBase_Parms
		{
			TSubclassOf<UBonkAttribute>  AttributeClass;
			float ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_AttributeClass;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UBonkPlayer_GetAttributeBase_Statics::NewProp_AttributeClass = { "AttributeClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkPlayer_eventGetAttributeBase_Parms, AttributeClass), Z_Construct_UClass_UBonkAttribute_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBonkPlayer_GetAttributeBase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkPlayer_eventGetAttributeBase_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBonkPlayer_GetAttributeBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkPlayer_GetAttributeBase_Statics::NewProp_AttributeClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkPlayer_GetAttributeBase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkPlayer_GetAttributeBase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/BonkPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBonkPlayer_GetAttributeBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkPlayer, nullptr, "GetAttributeBase", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBonkPlayer_GetAttributeBase_Statics::BonkPlayer_eventGetAttributeBase_Parms), Z_Construct_UFunction_UBonkPlayer_GetAttributeBase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkPlayer_GetAttributeBase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBonkPlayer_GetAttributeBase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkPlayer_GetAttributeBase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBonkPlayer_GetAttributeBase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBonkPlayer_GetAttributeBase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBonkPlayer_GetAttributeCurrent_Statics
	{
		struct BonkPlayer_eventGetAttributeCurrent_Parms
		{
			TSubclassOf<UBonkAttribute>  AttributeClass;
			float ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_AttributeClass;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UBonkPlayer_GetAttributeCurrent_Statics::NewProp_AttributeClass = { "AttributeClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkPlayer_eventGetAttributeCurrent_Parms, AttributeClass), Z_Construct_UClass_UBonkAttribute_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBonkPlayer_GetAttributeCurrent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkPlayer_eventGetAttributeCurrent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBonkPlayer_GetAttributeCurrent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkPlayer_GetAttributeCurrent_Statics::NewProp_AttributeClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkPlayer_GetAttributeCurrent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkPlayer_GetAttributeCurrent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/BonkPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBonkPlayer_GetAttributeCurrent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkPlayer, nullptr, "GetAttributeCurrent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBonkPlayer_GetAttributeCurrent_Statics::BonkPlayer_eventGetAttributeCurrent_Parms), Z_Construct_UFunction_UBonkPlayer_GetAttributeCurrent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkPlayer_GetAttributeCurrent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBonkPlayer_GetAttributeCurrent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkPlayer_GetAttributeCurrent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBonkPlayer_GetAttributeCurrent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBonkPlayer_GetAttributeCurrent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBonkPlayer_GetPlayerPawn_Statics
	{
		struct BonkPlayer_eventGetPlayerPawn_Parms
		{
			ABonkPlayerPawn* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBonkPlayer_GetPlayerPawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkPlayer_eventGetPlayerPawn_Parms, ReturnValue), Z_Construct_UClass_ABonkPlayerPawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBonkPlayer_GetPlayerPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkPlayer_GetPlayerPawn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkPlayer_GetPlayerPawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/BonkPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBonkPlayer_GetPlayerPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkPlayer, nullptr, "GetPlayerPawn", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBonkPlayer_GetPlayerPawn_Statics::BonkPlayer_eventGetPlayerPawn_Parms), Z_Construct_UFunction_UBonkPlayer_GetPlayerPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkPlayer_GetPlayerPawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBonkPlayer_GetPlayerPawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkPlayer_GetPlayerPawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBonkPlayer_GetPlayerPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBonkPlayer_GetPlayerPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBonkPlayer_RemoveMoney_Statics
	{
		struct BonkPlayer_eventRemoveMoney_Parms
		{
			int32 Amount;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBonkPlayer_RemoveMoney_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkPlayer_eventRemoveMoney_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBonkPlayer_RemoveMoney_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkPlayer_RemoveMoney_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkPlayer_RemoveMoney_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/BonkPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBonkPlayer_RemoveMoney_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkPlayer, nullptr, "RemoveMoney", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBonkPlayer_RemoveMoney_Statics::BonkPlayer_eventRemoveMoney_Parms), Z_Construct_UFunction_UBonkPlayer_RemoveMoney_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkPlayer_RemoveMoney_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBonkPlayer_RemoveMoney_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkPlayer_RemoveMoney_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBonkPlayer_RemoveMoney()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBonkPlayer_RemoveMoney_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBonkPlayer);
	UClass* Z_Construct_UClass_UBonkPlayer_NoRegister()
	{
		return UBonkPlayer::StaticClass();
	}
	struct Z_Construct_UClass_UBonkPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeamIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TeamIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLockedIn_MetaData[];
#endif
		static void NewProp_bLockedIn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockedIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlive_MetaData[];
#endif
		static void NewProp_bAlive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerMoney_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerMoney;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KillCount_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_KillCount;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_KilledPlayers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KilledPlayers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_KilledPlayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BountyCount_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_BountyCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialRoundMoney_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InitialRoundMoney;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MoneySources_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoneySources_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MoneySources;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Effects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Effects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Effects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerPawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerPawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Resilience_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Resilience;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponSize_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMoneyUpdated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMoneyUpdated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthUpdated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthUpdated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAddedKill_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAddedKill;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBonkPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Bonk,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBonkPlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBonkPlayer_AddEffect, "AddEffect" }, // 2586993983
		{ &Z_Construct_UFunction_UBonkPlayer_AddKill, "AddKill" }, // 1292376000
		{ &Z_Construct_UFunction_UBonkPlayer_AddMoney, "AddMoney" }, // 3038151482
		{ &Z_Construct_UFunction_UBonkPlayer_CanAfford, "CanAfford" }, // 3163854544
		{ &Z_Construct_UFunction_UBonkPlayer_GetAttribute, "GetAttribute" }, // 3024075615
		{ &Z_Construct_UFunction_UBonkPlayer_GetAttributeBase, "GetAttributeBase" }, // 1247677220
		{ &Z_Construct_UFunction_UBonkPlayer_GetAttributeCurrent, "GetAttributeCurrent" }, // 586379954
		{ &Z_Construct_UFunction_UBonkPlayer_GetPlayerPawn, "GetPlayerPawn" }, // 1917645051
		{ &Z_Construct_UDelegateFunction_UBonkPlayer_OnAddedKill__DelegateSignature, "OnAddedKill__DelegateSignature" }, // 1547499149
		{ &Z_Construct_UFunction_UBonkPlayer_RemoveMoney, "RemoveMoney" }, // 1105876565
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkPlayer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The object that holds all the data for each player such as Player Index, Team, bought upgrades e.t.\n */" },
		{ "IncludePath", "Player/BonkPlayer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Player/BonkPlayer.h" },
		{ "ToolTip", "The object that holds all the data for each player such as Player Index, Team, bought upgrades e.t." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkPlayer_Statics::NewProp_TeamIndex_MetaData[] = {
		{ "Category", "BonkPlayer" },
		{ "ModuleRelativePath", "Player/BonkPlayer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBonkPlayer_Statics::NewProp_TeamIndex = { "TeamIndex", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkPlayer, TeamIndex), METADATA_PARAMS(Z_Construct_UClass_UBonkPlayer_Statics::NewProp_TeamIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkPlayer_Statics::NewProp_TeamIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkPlayer_Statics::NewProp_PlayerIndex_MetaData[] = {
		{ "Category", "BonkPlayer" },
		{ "ModuleRelativePath", "Player/BonkPlayer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBonkPlayer_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkPlayer, PlayerIndex), METADATA_PARAMS(Z_Construct_UClass_UBonkPlayer_Statics::NewProp_PlayerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkPlayer_Statics::NewProp_PlayerIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkPlayer_Statics::NewProp_bLockedIn_MetaData[] = {
		{ "Category", "BonkPlayer" },
		{ "ModuleRelativePath", "Player/BonkPlayer.h" },
	};
#endif
	void Z_Construct_UClass_UBonkPlayer_Statics::NewProp_bLockedIn_SetBit(void* Obj)
	{
		((UBonkPlayer*)Obj)->bLockedIn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBonkPlayer_Statics::NewProp_bLockedIn = { "bLockedIn", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBonkPlayer), &Z_Construct_UClass_UBonkPlayer_Statics::NewProp_bLockedIn_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBonkPlayer_Statics::NewProp_bLockedIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkPlayer_Statics::NewProp_bLockedIn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkPlayer_Statics::NewProp_bAlive_MetaData[] = {
		{ "Category", "BonkPlayer" },
		{ "ModuleRelativePath", "Player/BonkPlayer.h" },
	};
#endif
	void Z_Construct_UClass_UBonkPlayer_Statics::NewProp_bAlive_SetBit(void* Obj)
	{
		((UBonkPlayer*)Obj)->bAlive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBonkPlayer_Statics::NewProp_bAlive = { "bAlive", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBonkPlayer), &Z_Construct_UClass_UBonkPlayer_Statics::NewProp_bAlive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBonkPlayer_Statics::NewProp_bAlive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkPlayer_Statics::NewProp_bAlive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkPlayer_Statics::NewProp_PlayerMoney_MetaData[] = {
		{ "Category", "BonkPlayer" },
		{ "ModuleRelativePath", "Player/BonkPlayer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBonkPlayer_Statics::NewProp_PlayerMoney = { "PlayerMoney", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkPlayer, PlayerMoney), METADATA_PARAMS(Z_Construct_UClass_UBonkPlayer_Statics::NewProp_PlayerMoney_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkPlayer_Statics::NewProp_PlayerMoney_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkPlayer_Statics::NewProp_KillCount_MetaData[] = {
		{ "Category", "BonkPlayer" },
		{ "ModuleRelativePath", "Player/BonkPlayer.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UBonkPlayer_Statics::NewProp_KillCount = { "KillCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkPlayer, KillCount), METADATA_PARAMS(Z_Construct_UClass_UBonkPlayer_Statics::NewProp_KillCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkPlayer_Statics::NewProp_KillCount_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBonkPlayer_Statics::NewProp_KilledPlayers_Inner = { "KilledPlayers", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBonkPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkPlayer_Statics::NewProp_KilledPlayers_MetaData[] = {
		{ "Category", "BonkPlayer" },
		{ "ModuleRelativePath", "Player/BonkPlayer.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBonkPlayer_Statics::NewProp_KilledPlayers = { "KilledPlayers", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkPlayer, KilledPlayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBonkPlayer_Statics::NewProp_KilledPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkPlayer_Statics::NewProp_KilledPlayers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkPlayer_Statics::NewProp_BountyCount_MetaData[] = {
		{ "Category", "BonkPlayer" },
		{ "ModuleRelativePath", "Player/BonkPlayer.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UBonkPlayer_Statics::NewProp_BountyCount = { "BountyCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkPlayer, BountyCount), METADATA_PARAMS(Z_Construct_UClass_UBonkPlayer_Statics::NewProp_BountyCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkPlayer_Statics::NewProp_BountyCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkPlayer_Statics::NewProp_InitialRoundMoney_MetaData[] = {
		{ "Category", "BonkPlayer" },
		{ "Comment", "// Used by the shop widget to do a count up animation.\n" },
		{ "ModuleRelativePath", "Player/BonkPlayer.h" },
		{ "ToolTip", "Used by the shop widget to do a count up animation." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBonkPlayer_Statics::NewProp_InitialRoundMoney = { "InitialRoundMoney", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkPlayer, InitialRoundMoney), METADATA_PARAMS(Z_Construct_UClass_UBonkPlayer_Statics::NewProp_InitialRoundMoney_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkPlayer_Statics::NewProp_InitialRoundMoney_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBonkPlayer_Statics::NewProp_MoneySources_Inner = { "MoneySources", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMoneySource, METADATA_PARAMS(nullptr, 0) }; // 3393290514
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkPlayer_Statics::NewProp_MoneySources_MetaData[] = {
		{ "Category", "BonkPlayer" },
		{ "ModuleRelativePath", "Player/BonkPlayer.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBonkPlayer_Statics::NewProp_MoneySources = { "MoneySources", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkPlayer, MoneySources), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBonkPlayer_Statics::NewProp_MoneySources_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkPlayer_Statics::NewProp_MoneySources_MetaData)) }; // 3393290514
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBonkPlayer_Statics::NewProp_Effects_Inner = { "Effects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBonkGameplayEffect_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkPlayer_Statics::NewProp_Effects_MetaData[] = {
		{ "Category", "BonkPlayer" },
		{ "ModuleRelativePath", "Player/BonkPlayer.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBonkPlayer_Statics::NewProp_Effects = { "Effects", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkPlayer, Effects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBonkPlayer_Statics::NewProp_Effects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkPlayer_Statics::NewProp_Effects_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkPlayer_Statics::NewProp_World_MetaData[] = {
		{ "Category", "BonkPlayer" },
		{ "ModuleRelativePath", "Player/BonkPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBonkPlayer_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkPlayer, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBonkPlayer_Statics::NewProp_World_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkPlayer_Statics::NewProp_World_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkPlayer_Statics::NewProp_PlayerPawn_MetaData[] = {
		{ "ModuleRelativePath", "Player/BonkPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBonkPlayer_Statics::NewProp_PlayerPawn = { "PlayerPawn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkPlayer, PlayerPawn), Z_Construct_UClass_ABonkPlayerPawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBonkPlayer_Statics::NewProp_PlayerPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkPlayer_Statics::NewProp_PlayerPawn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkPlayer_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "BonkPlayer" },
		{ "Comment", "// ATTRIBUTES\n" },
		{ "ModuleRelativePath", "Player/BonkPlayer.h" },
		{ "ToolTip", "ATTRIBUTES" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBonkPlayer_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkPlayer, Health), Z_Construct_UClass_UBonkAttribute_Health_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBonkPlayer_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkPlayer_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkPlayer_Statics::NewProp_AttackSpeed_MetaData[] = {
		{ "Category", "BonkPlayer" },
		{ "ModuleRelativePath", "Player/BonkPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBonkPlayer_Statics::NewProp_AttackSpeed = { "AttackSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkPlayer, AttackSpeed), Z_Construct_UClass_UBonkAttribute_AttackSpeed_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBonkPlayer_Statics::NewProp_AttackSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkPlayer_Statics::NewProp_AttackSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkPlayer_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "BonkPlayer" },
		{ "ModuleRelativePath", "Player/BonkPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBonkPlayer_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkPlayer, Damage), Z_Construct_UClass_UBonkAttribute_Damage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBonkPlayer_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkPlayer_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkPlayer_Statics::NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "BonkPlayer" },
		{ "ModuleRelativePath", "Player/BonkPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBonkPlayer_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkPlayer, MoveSpeed), Z_Construct_UClass_UBonkAttribute_MoveSpeed_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBonkPlayer_Statics::NewProp_MoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkPlayer_Statics::NewProp_MoveSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkPlayer_Statics::NewProp_Resilience_MetaData[] = {
		{ "Category", "BonkPlayer" },
		{ "ModuleRelativePath", "Player/BonkPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBonkPlayer_Statics::NewProp_Resilience = { "Resilience", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkPlayer, Resilience), Z_Construct_UClass_UBonkAttribute_Resilience_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBonkPlayer_Statics::NewProp_Resilience_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkPlayer_Statics::NewProp_Resilience_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkPlayer_Statics::NewProp_WeaponSize_MetaData[] = {
		{ "Category", "BonkPlayer" },
		{ "ModuleRelativePath", "Player/BonkPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBonkPlayer_Statics::NewProp_WeaponSize = { "WeaponSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkPlayer, WeaponSize), Z_Construct_UClass_UBonkAttribute_WeaponSize_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBonkPlayer_Statics::NewProp_WeaponSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkPlayer_Statics::NewProp_WeaponSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkPlayer_Statics::NewProp_OnMoneyUpdated_MetaData[] = {
		{ "ModuleRelativePath", "Player/BonkPlayer.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBonkPlayer_Statics::NewProp_OnMoneyUpdated = { "OnMoneyUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkPlayer, OnMoneyUpdated), Z_Construct_UDelegateFunction_Bonk_OnMoneyUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBonkPlayer_Statics::NewProp_OnMoneyUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkPlayer_Statics::NewProp_OnMoneyUpdated_MetaData)) }; // 1133310069
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkPlayer_Statics::NewProp_OnHealthUpdated_MetaData[] = {
		{ "ModuleRelativePath", "Player/BonkPlayer.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBonkPlayer_Statics::NewProp_OnHealthUpdated = { "OnHealthUpdated", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkPlayer, OnHealthUpdated), Z_Construct_UDelegateFunction_Bonk_OnHealthUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBonkPlayer_Statics::NewProp_OnHealthUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkPlayer_Statics::NewProp_OnHealthUpdated_MetaData)) }; // 1525607910
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkPlayer_Statics::NewProp_OnAddedKill_MetaData[] = {
		{ "ModuleRelativePath", "Player/BonkPlayer.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBonkPlayer_Statics::NewProp_OnAddedKill = { "OnAddedKill", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkPlayer, OnAddedKill), Z_Construct_UDelegateFunction_UBonkPlayer_OnAddedKill__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBonkPlayer_Statics::NewProp_OnAddedKill_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkPlayer_Statics::NewProp_OnAddedKill_MetaData)) }; // 1547499149
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBonkPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkPlayer_Statics::NewProp_TeamIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkPlayer_Statics::NewProp_PlayerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkPlayer_Statics::NewProp_bLockedIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkPlayer_Statics::NewProp_bAlive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkPlayer_Statics::NewProp_PlayerMoney,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkPlayer_Statics::NewProp_KillCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkPlayer_Statics::NewProp_KilledPlayers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkPlayer_Statics::NewProp_KilledPlayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkPlayer_Statics::NewProp_BountyCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkPlayer_Statics::NewProp_InitialRoundMoney,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkPlayer_Statics::NewProp_MoneySources_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkPlayer_Statics::NewProp_MoneySources,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkPlayer_Statics::NewProp_Effects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkPlayer_Statics::NewProp_Effects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkPlayer_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkPlayer_Statics::NewProp_PlayerPawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkPlayer_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkPlayer_Statics::NewProp_AttackSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkPlayer_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkPlayer_Statics::NewProp_MoveSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkPlayer_Statics::NewProp_Resilience,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkPlayer_Statics::NewProp_WeaponSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkPlayer_Statics::NewProp_OnMoneyUpdated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkPlayer_Statics::NewProp_OnHealthUpdated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkPlayer_Statics::NewProp_OnAddedKill,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBonkPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBonkPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBonkPlayer_Statics::ClassParams = {
		&UBonkPlayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBonkPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBonkPlayer_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBonkPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBonkPlayer()
	{
		if (!Z_Registration_Info_UClass_UBonkPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBonkPlayer.OuterSingleton, Z_Construct_UClass_UBonkPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBonkPlayer.OuterSingleton;
	}
	template<> BONK_API UClass* StaticClass<UBonkPlayer>()
	{
		return UBonkPlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBonkPlayer);
	struct Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Player_BonkPlayer_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Player_BonkPlayer_h_Statics::ScriptStructInfo[] = {
		{ FMoneySource::StaticStruct, Z_Construct_UScriptStruct_FMoneySource_Statics::NewStructOps, TEXT("MoneySource"), &Z_Registration_Info_UScriptStruct_MoneySource, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMoneySource), 3393290514U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Player_BonkPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBonkPlayer, UBonkPlayer::StaticClass, TEXT("UBonkPlayer"), &Z_Registration_Info_UClass_UBonkPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBonkPlayer), 4012126012U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Player_BonkPlayer_h_259847627(TEXT("/Script/Bonk"),
		Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Player_BonkPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Player_BonkPlayer_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Player_BonkPlayer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Player_BonkPlayer_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

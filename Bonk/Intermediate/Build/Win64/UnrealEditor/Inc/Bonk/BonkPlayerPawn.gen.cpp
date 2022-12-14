// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bonk/Player/BonkPlayerPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBonkPlayerPawn() {}
// Cross Module References
	BONK_API UFunction* Z_Construct_UDelegateFunction_ABonkPlayerPawn_OnDamaged__DelegateSignature();
	BONK_API UClass* Z_Construct_UClass_ABonkPlayerPawn();
	BONK_API UClass* Z_Construct_UClass_UBonkBonkerComponent_NoRegister();
	BONK_API UClass* Z_Construct_UClass_ABonkPlayerPawn_NoRegister();
	BONK_API UFunction* Z_Construct_UDelegateFunction_ABonkPlayerPawn_OnHealed__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Bonk();
	BONK_API UClass* Z_Construct_UClass_UBonkPlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	BONK_API UClass* Z_Construct_UClass_UBonkAbilityComponent_NoRegister();
	BONK_API UClass* Z_Construct_UClass_UBonkBonkableComponent_NoRegister();
	BONK_API UClass* Z_Construct_UClass_UBonkItemInteractComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETraceTypeQuery();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ABonkPlayerPawn_OnDamaged__DelegateSignature_Statics
	{
		struct BonkPlayerPawn_eventOnDamaged_Parms
		{
			float NewHealth;
			float DamagedApplied;
			UBonkBonkerComponent* Bonker;
			ABonkPlayerPawn* Player;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHealth;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamagedApplied;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bonker_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Bonker;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ABonkPlayerPawn_OnDamaged__DelegateSignature_Statics::NewProp_NewHealth = { "NewHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkPlayerPawn_eventOnDamaged_Parms, NewHealth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ABonkPlayerPawn_OnDamaged__DelegateSignature_Statics::NewProp_DamagedApplied = { "DamagedApplied", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkPlayerPawn_eventOnDamaged_Parms, DamagedApplied), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ABonkPlayerPawn_OnDamaged__DelegateSignature_Statics::NewProp_Bonker_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ABonkPlayerPawn_OnDamaged__DelegateSignature_Statics::NewProp_Bonker = { "Bonker", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkPlayerPawn_eventOnDamaged_Parms, Bonker), Z_Construct_UClass_UBonkBonkerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_ABonkPlayerPawn_OnDamaged__DelegateSignature_Statics::NewProp_Bonker_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ABonkPlayerPawn_OnDamaged__DelegateSignature_Statics::NewProp_Bonker_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ABonkPlayerPawn_OnDamaged__DelegateSignature_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkPlayerPawn_eventOnDamaged_Parms, Player), Z_Construct_UClass_ABonkPlayerPawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ABonkPlayerPawn_OnDamaged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ABonkPlayerPawn_OnDamaged__DelegateSignature_Statics::NewProp_NewHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ABonkPlayerPawn_OnDamaged__DelegateSignature_Statics::NewProp_DamagedApplied,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ABonkPlayerPawn_OnDamaged__DelegateSignature_Statics::NewProp_Bonker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ABonkPlayerPawn_OnDamaged__DelegateSignature_Statics::NewProp_Player,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ABonkPlayerPawn_OnDamaged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/BonkPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ABonkPlayerPawn_OnDamaged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABonkPlayerPawn, nullptr, "OnDamaged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ABonkPlayerPawn_OnDamaged__DelegateSignature_Statics::BonkPlayerPawn_eventOnDamaged_Parms), Z_Construct_UDelegateFunction_ABonkPlayerPawn_OnDamaged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ABonkPlayerPawn_OnDamaged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ABonkPlayerPawn_OnDamaged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ABonkPlayerPawn_OnDamaged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ABonkPlayerPawn_OnDamaged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ABonkPlayerPawn_OnDamaged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_ABonkPlayerPawn_OnHealed__DelegateSignature_Statics
	{
		struct BonkPlayerPawn_eventOnHealed_Parms
		{
			float NewHealth;
			float HealthApplied;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHealth;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthApplied;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ABonkPlayerPawn_OnHealed__DelegateSignature_Statics::NewProp_NewHealth = { "NewHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkPlayerPawn_eventOnHealed_Parms, NewHealth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ABonkPlayerPawn_OnHealed__DelegateSignature_Statics::NewProp_HealthApplied = { "HealthApplied", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkPlayerPawn_eventOnHealed_Parms, HealthApplied), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ABonkPlayerPawn_OnHealed__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ABonkPlayerPawn_OnHealed__DelegateSignature_Statics::NewProp_NewHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ABonkPlayerPawn_OnHealed__DelegateSignature_Statics::NewProp_HealthApplied,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ABonkPlayerPawn_OnHealed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/BonkPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ABonkPlayerPawn_OnHealed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABonkPlayerPawn, nullptr, "OnHealed__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ABonkPlayerPawn_OnHealed__DelegateSignature_Statics::BonkPlayerPawn_eventOnHealed_Parms), Z_Construct_UDelegateFunction_ABonkPlayerPawn_OnHealed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ABonkPlayerPawn_OnHealed__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ABonkPlayerPawn_OnHealed__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ABonkPlayerPawn_OnHealed__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ABonkPlayerPawn_OnHealed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ABonkPlayerPawn_OnHealed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ABonkPlayerPawn::execApplyHeal)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Heal);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyHeal(Z_Param_Heal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABonkPlayerPawn::execApplyDamage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
		P_GET_OBJECT(UBonkBonkerComponent,Z_Param_FromBonkerComp);
		P_GET_OBJECT(ABonkPlayerPawn,Z_Param_FromPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyDamage(Z_Param_Damage,Z_Param_FromBonkerComp,Z_Param_FromPlayer);
		P_NATIVE_END;
	}
	static FName NAME_ABonkPlayerPawn_OnAttack = FName(TEXT("OnAttack"));
	void ABonkPlayerPawn::OnAttack()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABonkPlayerPawn_OnAttack),NULL);
	}
	static FName NAME_ABonkPlayerPawn_OnJump = FName(TEXT("OnJump"));
	void ABonkPlayerPawn::OnJump()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABonkPlayerPawn_OnJump),NULL);
	}
	void ABonkPlayerPawn::StaticRegisterNativesABonkPlayerPawn()
	{
		UClass* Class = ABonkPlayerPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyDamage", &ABonkPlayerPawn::execApplyDamage },
			{ "ApplyHeal", &ABonkPlayerPawn::execApplyHeal },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABonkPlayerPawn_ApplyDamage_Statics
	{
		struct BonkPlayerPawn_eventApplyDamage_Parms
		{
			float Damage;
			UBonkBonkerComponent* FromBonkerComp;
			ABonkPlayerPawn* FromPlayer;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FromBonkerComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FromBonkerComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FromPlayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABonkPlayerPawn_ApplyDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkPlayerPawn_eventApplyDamage_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABonkPlayerPawn_ApplyDamage_Statics::NewProp_FromBonkerComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABonkPlayerPawn_ApplyDamage_Statics::NewProp_FromBonkerComp = { "FromBonkerComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkPlayerPawn_eventApplyDamage_Parms, FromBonkerComp), Z_Construct_UClass_UBonkBonkerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABonkPlayerPawn_ApplyDamage_Statics::NewProp_FromBonkerComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABonkPlayerPawn_ApplyDamage_Statics::NewProp_FromBonkerComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABonkPlayerPawn_ApplyDamage_Statics::NewProp_FromPlayer = { "FromPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkPlayerPawn_eventApplyDamage_Parms, FromPlayer), Z_Construct_UClass_ABonkPlayerPawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABonkPlayerPawn_ApplyDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABonkPlayerPawn_ApplyDamage_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABonkPlayerPawn_ApplyDamage_Statics::NewProp_FromBonkerComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABonkPlayerPawn_ApplyDamage_Statics::NewProp_FromPlayer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABonkPlayerPawn_ApplyDamage_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_FromBonkerComp", "None" },
		{ "CPP_Default_FromPlayer", "None" },
		{ "ModuleRelativePath", "Player/BonkPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABonkPlayerPawn_ApplyDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABonkPlayerPawn, nullptr, "ApplyDamage", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABonkPlayerPawn_ApplyDamage_Statics::BonkPlayerPawn_eventApplyDamage_Parms), Z_Construct_UFunction_ABonkPlayerPawn_ApplyDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABonkPlayerPawn_ApplyDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABonkPlayerPawn_ApplyDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABonkPlayerPawn_ApplyDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABonkPlayerPawn_ApplyDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABonkPlayerPawn_ApplyDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABonkPlayerPawn_ApplyHeal_Statics
	{
		struct BonkPlayerPawn_eventApplyHeal_Parms
		{
			float Heal;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Heal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABonkPlayerPawn_ApplyHeal_Statics::NewProp_Heal = { "Heal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkPlayerPawn_eventApplyHeal_Parms, Heal), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABonkPlayerPawn_ApplyHeal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABonkPlayerPawn_ApplyHeal_Statics::NewProp_Heal,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABonkPlayerPawn_ApplyHeal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/BonkPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABonkPlayerPawn_ApplyHeal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABonkPlayerPawn, nullptr, "ApplyHeal", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABonkPlayerPawn_ApplyHeal_Statics::BonkPlayerPawn_eventApplyHeal_Parms), Z_Construct_UFunction_ABonkPlayerPawn_ApplyHeal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABonkPlayerPawn_ApplyHeal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABonkPlayerPawn_ApplyHeal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABonkPlayerPawn_ApplyHeal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABonkPlayerPawn_ApplyHeal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABonkPlayerPawn_ApplyHeal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABonkPlayerPawn_OnAttack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABonkPlayerPawn_OnAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/BonkPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABonkPlayerPawn_OnAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABonkPlayerPawn, nullptr, "OnAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABonkPlayerPawn_OnAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABonkPlayerPawn_OnAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABonkPlayerPawn_OnAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABonkPlayerPawn_OnAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABonkPlayerPawn_OnJump_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABonkPlayerPawn_OnJump_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/BonkPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABonkPlayerPawn_OnJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABonkPlayerPawn, nullptr, "OnJump", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABonkPlayerPawn_OnJump_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABonkPlayerPawn_OnJump_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABonkPlayerPawn_OnJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABonkPlayerPawn_OnJump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABonkPlayerPawn);
	UClass* Z_Construct_UClass_ABonkPlayerPawn_NoRegister()
	{
		return ABonkPlayerPawn::StaticClass();
	}
	struct Z_Construct_UClass_ABonkPlayerPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerInfo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CapsuleComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilityComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BonkableComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BonkableComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseAttackSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseAttackSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Acceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAccelerationForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAccelerationForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AirMoveForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AirMoveForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JustJumped_MetaData[];
#endif
		static void NewProp_JustJumped_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_JustJumped;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanJump_MetaData[];
#endif
		static void NewProp_bCanJump_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanJump;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GravityGroundAccel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GravityGroundAccel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GravityAirAccel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GravityAirAccel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DragAirAccel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DragAirAccel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsGrounded_MetaData[];
#endif
		static void NewProp_bIsGrounded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsGrounded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundStartOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundStartOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundTraceLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundTraceLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundTraceRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundTraceRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundTraceChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_GroundTraceChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundNormal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroundNormal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RideHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RideHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RideSpringStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RideSpringStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RideSpringDamper_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RideSpringDamper;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastDamagedBy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LastDamagedBy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanAttack_MetaData[];
#endif
		static void NewProp_bCanAttack_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanAttack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDamaged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDamaged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnHealed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABonkPlayerPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Bonk,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABonkPlayerPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABonkPlayerPawn_ApplyDamage, "ApplyDamage" }, // 160136722
		{ &Z_Construct_UFunction_ABonkPlayerPawn_ApplyHeal, "ApplyHeal" }, // 1534999454
		{ &Z_Construct_UFunction_ABonkPlayerPawn_OnAttack, "OnAttack" }, // 1919845288
		{ &Z_Construct_UDelegateFunction_ABonkPlayerPawn_OnDamaged__DelegateSignature, "OnDamaged__DelegateSignature" }, // 3634615441
		{ &Z_Construct_UDelegateFunction_ABonkPlayerPawn_OnHealed__DelegateSignature, "OnHealed__DelegateSignature" }, // 25121588
		{ &Z_Construct_UFunction_ABonkPlayerPawn_OnJump, "OnJump" }, // 594781746
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkPlayerPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/BonkPlayerPawn.h" },
		{ "ModuleRelativePath", "Player/BonkPlayerPawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_PlayerInfo_MetaData[] = {
		{ "Category", "BonkPlayerPawn" },
		{ "ModuleRelativePath", "Player/BonkPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_PlayerInfo = { "PlayerInfo", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonkPlayerPawn, PlayerInfo), Z_Construct_UClass_UBonkPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_PlayerInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_PlayerInfo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_SkeletalComp_MetaData[] = {
		{ "Category", "BonkPlayerPawn" },
		{ "Comment", "//\n// COMPONENTS\n//\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/BonkPlayerPawn.h" },
		{ "ToolTip", "COMPONENTS" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_SkeletalComp = { "SkeletalComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonkPlayerPawn, SkeletalComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_SkeletalComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_SkeletalComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_CapsuleComp_MetaData[] = {
		{ "Category", "BonkPlayerPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/BonkPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_CapsuleComp = { "CapsuleComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonkPlayerPawn, CapsuleComp), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_CapsuleComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_CapsuleComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_AbilityComp_MetaData[] = {
		{ "Category", "BonkPlayerPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/BonkPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_AbilityComp = { "AbilityComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonkPlayerPawn, AbilityComp), Z_Construct_UClass_UBonkAbilityComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_AbilityComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_AbilityComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_BonkableComp_MetaData[] = {
		{ "Category", "BonkPlayerPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/BonkPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_BonkableComp = { "BonkableComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonkPlayerPawn, BonkableComp), Z_Construct_UClass_UBonkBonkableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_BonkableComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_BonkableComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_InteractComp_MetaData[] = {
		{ "Category", "BonkPlayerPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/BonkPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_InteractComp = { "InteractComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonkPlayerPawn, InteractComp), Z_Construct_UClass_UBonkItemInteractComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_InteractComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_InteractComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_CameraActor_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Player/BonkPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_CameraActor = { "CameraActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonkPlayerPawn, CameraActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_CameraActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_CameraActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_BaseAttackSpeed_MetaData[] = {
		{ "Category", "BaseAttributes" },
		{ "Comment", "//\n// BASE ATTRIBUTES\n//\n" },
		{ "ModuleRelativePath", "Player/BonkPlayerPawn.h" },
		{ "ToolTip", "BASE ATTRIBUTES" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_BaseAttackSpeed = { "BaseAttackSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonkPlayerPawn, BaseAttackSpeed), METADATA_PARAMS(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_BaseAttackSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_BaseAttackSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_MaxSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "//\n// MOVEMENT\n// \n" },
		{ "ModuleRelativePath", "Player/BonkPlayerPawn.h" },
		{ "ToolTip", "MOVEMENT" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonkPlayerPawn, MaxSpeed), METADATA_PARAMS(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_MaxSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_MaxSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_Acceleration_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Player/BonkPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonkPlayerPawn, Acceleration), METADATA_PARAMS(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_Acceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_Acceleration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_MaxAccelerationForce_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Player/BonkPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_MaxAccelerationForce = { "MaxAccelerationForce", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonkPlayerPawn, MaxAccelerationForce), METADATA_PARAMS(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_MaxAccelerationForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_MaxAccelerationForce_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_AirMoveForce_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Player/BonkPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_AirMoveForce = { "AirMoveForce", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonkPlayerPawn, AirMoveForce), METADATA_PARAMS(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_AirMoveForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_AirMoveForce_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "//Rotation Variables\n" },
		{ "ModuleRelativePath", "Player/BonkPlayerPawn.h" },
		{ "ToolTip", "Rotation Variables" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonkPlayerPawn, RotationSpeed), METADATA_PARAMS(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_RotationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_RotationSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_CurrentRotation_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Player/BonkPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_CurrentRotation = { "CurrentRotation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonkPlayerPawn, CurrentRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_CurrentRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_CurrentRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_JumpForce_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "//JumpVariables \n" },
		{ "ModuleRelativePath", "Player/BonkPlayerPawn.h" },
		{ "ToolTip", "JumpVariables" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_JumpForce = { "JumpForce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonkPlayerPawn, JumpForce), METADATA_PARAMS(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_JumpForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_JumpForce_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_JustJumped_MetaData[] = {
		{ "Category", "BonkPlayerPawn" },
		{ "ModuleRelativePath", "Player/BonkPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_JustJumped_SetBit(void* Obj)
	{
		((ABonkPlayerPawn*)Obj)->JustJumped = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_JustJumped = { "JustJumped", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABonkPlayerPawn), &Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_JustJumped_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_JustJumped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_JustJumped_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_bCanJump_MetaData[] = {
		{ "Category", "BonkPlayerPawn" },
		{ "ModuleRelativePath", "Player/BonkPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_bCanJump_SetBit(void* Obj)
	{
		((ABonkPlayerPawn*)Obj)->bCanJump = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_bCanJump = { "bCanJump", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABonkPlayerPawn), &Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_bCanJump_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_bCanJump_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_bCanJump_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_GravityGroundAccel_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "//Forces\n" },
		{ "ModuleRelativePath", "Player/BonkPlayerPawn.h" },
		{ "ToolTip", "Forces" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_GravityGroundAccel = { "GravityGroundAccel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonkPlayerPawn, GravityGroundAccel), METADATA_PARAMS(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_GravityGroundAccel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_GravityGroundAccel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_GravityAirAccel_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Player/BonkPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_GravityAirAccel = { "GravityAirAccel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonkPlayerPawn, GravityAirAccel), METADATA_PARAMS(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_GravityAirAccel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_GravityAirAccel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_DragAirAccel_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Player/BonkPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_DragAirAccel = { "DragAirAccel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonkPlayerPawn, DragAirAccel), METADATA_PARAMS(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_DragAirAccel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_DragAirAccel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_bIsGrounded_MetaData[] = {
		{ "Category", "BonkPlayerPawn" },
		{ "ModuleRelativePath", "Player/BonkPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_bIsGrounded_SetBit(void* Obj)
	{
		((ABonkPlayerPawn*)Obj)->bIsGrounded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_bIsGrounded = { "bIsGrounded", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABonkPlayerPawn), &Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_bIsGrounded_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_bIsGrounded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_bIsGrounded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_GroundStartOffset_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Player/BonkPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_GroundStartOffset = { "GroundStartOffset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonkPlayerPawn, GroundStartOffset), METADATA_PARAMS(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_GroundStartOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_GroundStartOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_GroundTraceLength_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Player/BonkPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_GroundTraceLength = { "GroundTraceLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonkPlayerPawn, GroundTraceLength), METADATA_PARAMS(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_GroundTraceLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_GroundTraceLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_GroundTraceRadius_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Player/BonkPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_GroundTraceRadius = { "GroundTraceRadius", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonkPlayerPawn, GroundTraceRadius), METADATA_PARAMS(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_GroundTraceRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_GroundTraceRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_GroundTraceChannel_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Player/BonkPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_GroundTraceChannel = { "GroundTraceChannel", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonkPlayerPawn, GroundTraceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_GroundTraceChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_GroundTraceChannel_MetaData)) }; // 2906040657
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_GroundNormal_MetaData[] = {
		{ "Category", "BonkPlayerPawn" },
		{ "ModuleRelativePath", "Player/BonkPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_GroundNormal = { "GroundNormal", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonkPlayerPawn, GroundNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_GroundNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_GroundNormal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_RideHeight_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "//floating\n" },
		{ "ModuleRelativePath", "Player/BonkPlayerPawn.h" },
		{ "ToolTip", "floating" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_RideHeight = { "RideHeight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonkPlayerPawn, RideHeight), METADATA_PARAMS(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_RideHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_RideHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_RideSpringStrength_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Player/BonkPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_RideSpringStrength = { "RideSpringStrength", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonkPlayerPawn, RideSpringStrength), METADATA_PARAMS(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_RideSpringStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_RideSpringStrength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_RideSpringDamper_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Player/BonkPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_RideSpringDamper = { "RideSpringDamper", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonkPlayerPawn, RideSpringDamper), METADATA_PARAMS(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_RideSpringDamper_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_RideSpringDamper_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_LastDamagedBy_MetaData[] = {
		{ "Category", "BonkPlayerPawn" },
		{ "Comment", "//\n// COMBAT\n//\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/BonkPlayerPawn.h" },
		{ "ToolTip", "COMBAT" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_LastDamagedBy = { "LastDamagedBy", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonkPlayerPawn, LastDamagedBy), Z_Construct_UClass_UBonkBonkerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_LastDamagedBy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_LastDamagedBy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_bCanAttack_MetaData[] = {
		{ "Category", "BonkPlayerPawn" },
		{ "ModuleRelativePath", "Player/BonkPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_bCanAttack_SetBit(void* Obj)
	{
		((ABonkPlayerPawn*)Obj)->bCanAttack = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_bCanAttack = { "bCanAttack", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABonkPlayerPawn), &Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_bCanAttack_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_bCanAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_bCanAttack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_OnDamaged_MetaData[] = {
		{ "ModuleRelativePath", "Player/BonkPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_OnDamaged = { "OnDamaged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonkPlayerPawn, OnDamaged), Z_Construct_UDelegateFunction_ABonkPlayerPawn_OnDamaged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_OnDamaged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_OnDamaged_MetaData)) }; // 3634615441
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_OnHealed_MetaData[] = {
		{ "ModuleRelativePath", "Player/BonkPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_OnHealed = { "OnHealed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonkPlayerPawn, OnHealed), Z_Construct_UDelegateFunction_ABonkPlayerPawn_OnHealed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_OnHealed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_OnHealed_MetaData)) }; // 25121588
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABonkPlayerPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_PlayerInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_SkeletalComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_CapsuleComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_AbilityComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_BonkableComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_InteractComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_CameraActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_BaseAttackSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_MaxSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_Acceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_MaxAccelerationForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_AirMoveForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_RotationSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_CurrentRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_JumpForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_JustJumped,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_bCanJump,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_GravityGroundAccel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_GravityAirAccel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_DragAirAccel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_bIsGrounded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_GroundStartOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_GroundTraceLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_GroundTraceRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_GroundTraceChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_GroundNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_RideHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_RideSpringStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_RideSpringDamper,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_LastDamagedBy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_bCanAttack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_OnDamaged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkPlayerPawn_Statics::NewProp_OnHealed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABonkPlayerPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABonkPlayerPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABonkPlayerPawn_Statics::ClassParams = {
		&ABonkPlayerPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABonkPlayerPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABonkPlayerPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABonkPlayerPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkPlayerPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABonkPlayerPawn()
	{
		if (!Z_Registration_Info_UClass_ABonkPlayerPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABonkPlayerPawn.OuterSingleton, Z_Construct_UClass_ABonkPlayerPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABonkPlayerPawn.OuterSingleton;
	}
	template<> BONK_API UClass* StaticClass<ABonkPlayerPawn>()
	{
		return ABonkPlayerPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABonkPlayerPawn);
	struct Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Player_BonkPlayerPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Player_BonkPlayerPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABonkPlayerPawn, ABonkPlayerPawn::StaticClass, TEXT("ABonkPlayerPawn"), &Z_Registration_Info_UClass_ABonkPlayerPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABonkPlayerPawn), 798363758U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Player_BonkPlayerPawn_h_309760554(TEXT("/Script/Bonk"),
		Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Player_BonkPlayerPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Player_BonkPlayerPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bonk/Components/BonkGameplayEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBonkGameplayEffect() {}
// Cross Module References
	BONK_API UEnum* Z_Construct_UEnum_Bonk_EModifierOperation();
	UPackage* Z_Construct_UPackage__Script_Bonk();
	BONK_API UEnum* Z_Construct_UEnum_Bonk_EEffectTier();
	BONK_API UEnum* Z_Construct_UEnum_Bonk_EEffectType();
	BONK_API UScriptStruct* Z_Construct_UScriptStruct_FAttributeModifier();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	BONK_API UClass* Z_Construct_UClass_UBonkAttribute_NoRegister();
	BONK_API UClass* Z_Construct_UClass_UBonkGameplayEffect_NoRegister();
	BONK_API UClass* Z_Construct_UClass_UBonkGameplayEffect();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	BONK_API UClass* Z_Construct_UClass_UBonkPlayer_NoRegister();
	BONK_API UClass* Z_Construct_UClass_ABonkPlayerPawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModifierOperation;
	static UEnum* EModifierOperation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EModifierOperation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EModifierOperation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Bonk_EModifierOperation, Z_Construct_UPackage__Script_Bonk(), TEXT("EModifierOperation"));
		}
		return Z_Registration_Info_UEnum_EModifierOperation.OuterSingleton;
	}
	template<> BONK_API UEnum* StaticEnum<EModifierOperation>()
	{
		return EModifierOperation_StaticEnum();
	}
	struct Z_Construct_UEnum_Bonk_EModifierOperation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Bonk_EModifierOperation_Statics::Enumerators[] = {
		{ "Add", (int64)Add },
		{ "Subtract", (int64)Subtract },
		{ "Multiply", (int64)Multiply },
		{ "Divide", (int64)Divide },
		{ "Override", (int64)Override },
		{ "OverrideBase", (int64)OverrideBase },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Bonk_EModifierOperation_Statics::Enum_MetaDataParams[] = {
		{ "Add.Name", "Add" },
		{ "Divide.Name", "Divide" },
		{ "ModuleRelativePath", "Components/BonkGameplayEffect.h" },
		{ "Multiply.Name", "Multiply" },
		{ "Override.Name", "Override" },
		{ "OverrideBase.Name", "OverrideBase" },
		{ "Subtract.Name", "Subtract" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Bonk_EModifierOperation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Bonk,
		nullptr,
		"EModifierOperation",
		"EModifierOperation",
		Z_Construct_UEnum_Bonk_EModifierOperation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Bonk_EModifierOperation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Bonk_EModifierOperation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Bonk_EModifierOperation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Bonk_EModifierOperation()
	{
		if (!Z_Registration_Info_UEnum_EModifierOperation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModifierOperation.InnerSingleton, Z_Construct_UEnum_Bonk_EModifierOperation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EModifierOperation.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEffectTier;
	static UEnum* EEffectTier_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEffectTier.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEffectTier.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Bonk_EEffectTier, Z_Construct_UPackage__Script_Bonk(), TEXT("EEffectTier"));
		}
		return Z_Registration_Info_UEnum_EEffectTier.OuterSingleton;
	}
	template<> BONK_API UEnum* StaticEnum<EEffectTier>()
	{
		return EEffectTier_StaticEnum();
	}
	struct Z_Construct_UEnum_Bonk_EEffectTier_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Bonk_EEffectTier_Statics::Enumerators[] = {
		{ "Low", (int64)Low },
		{ "Mid", (int64)Mid },
		{ "High", (int64)High },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Bonk_EEffectTier_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "High.Name", "High" },
		{ "Low.Name", "Low" },
		{ "Mid.Name", "Mid" },
		{ "ModuleRelativePath", "Components/BonkGameplayEffect.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Bonk_EEffectTier_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Bonk,
		nullptr,
		"EEffectTier",
		"EEffectTier",
		Z_Construct_UEnum_Bonk_EEffectTier_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Bonk_EEffectTier_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Bonk_EEffectTier_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Bonk_EEffectTier_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Bonk_EEffectTier()
	{
		if (!Z_Registration_Info_UEnum_EEffectTier.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEffectTier.InnerSingleton, Z_Construct_UEnum_Bonk_EEffectTier_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEffectTier.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEffectType;
	static UEnum* EEffectType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEffectType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEffectType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Bonk_EEffectType, Z_Construct_UPackage__Script_Bonk(), TEXT("EEffectType"));
		}
		return Z_Registration_Info_UEnum_EEffectType.OuterSingleton;
	}
	template<> BONK_API UEnum* StaticEnum<EEffectType>()
	{
		return EEffectType_StaticEnum();
	}
	struct Z_Construct_UEnum_Bonk_EEffectType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Bonk_EEffectType_Statics::Enumerators[] = {
		{ "Instant", (int64)Instant },
		{ "Gameplay", (int64)Gameplay },
		{ "Both", (int64)Both },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Bonk_EEffectType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Both.Name", "Both" },
		{ "Comment", "// Instant will effect modifiers on bind\n" },
		{ "Gameplay.Name", "Gameplay" },
		{ "Instant.Name", "Instant" },
		{ "ModuleRelativePath", "Components/BonkGameplayEffect.h" },
		{ "ToolTip", "Instant will effect modifiers on bind" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Bonk_EEffectType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Bonk,
		nullptr,
		"EEffectType",
		"EEffectType",
		Z_Construct_UEnum_Bonk_EEffectType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Bonk_EEffectType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Bonk_EEffectType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Bonk_EEffectType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Bonk_EEffectType()
	{
		if (!Z_Registration_Info_UEnum_EEffectType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEffectType.InnerSingleton, Z_Construct_UEnum_Bonk_EEffectType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEffectType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AttributeModifier;
class UScriptStruct* FAttributeModifier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AttributeModifier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AttributeModifier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttributeModifier, Z_Construct_UPackage__Script_Bonk(), TEXT("AttributeModifier"));
	}
	return Z_Registration_Info_UScriptStruct_AttributeModifier.OuterSingleton;
}
template<> BONK_API UScriptStruct* StaticStruct<FAttributeModifier>()
{
	return FAttributeModifier::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAttributeModifier_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AttributeClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Operation_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Operation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeModifier_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Components/BonkGameplayEffect.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAttributeModifier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttributeModifier>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeModifier_Statics::NewProp_AttributeClass_MetaData[] = {
		{ "Category", "AttributeModifier" },
		{ "ModuleRelativePath", "Components/BonkGameplayEffect.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAttributeModifier_Statics::NewProp_AttributeClass = { "AttributeClass", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttributeModifier, AttributeClass), Z_Construct_UClass_UBonkAttribute_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeModifier_Statics::NewProp_AttributeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeModifier_Statics::NewProp_AttributeClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeModifier_Statics::NewProp_Operation_MetaData[] = {
		{ "Category", "AttributeModifier" },
		{ "ModuleRelativePath", "Components/BonkGameplayEffect.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAttributeModifier_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttributeModifier, Operation), Z_Construct_UEnum_Bonk_EModifierOperation, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeModifier_Statics::NewProp_Operation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeModifier_Statics::NewProp_Operation_MetaData)) }; // 966216695
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeModifier_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "AttributeModifier" },
		{ "ModuleRelativePath", "Components/BonkGameplayEffect.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttributeModifier_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttributeModifier, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeModifier_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeModifier_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttributeModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeModifier_Statics::NewProp_AttributeClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeModifier_Statics::NewProp_Operation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeModifier_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttributeModifier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Bonk,
		nullptr,
		&NewStructOps,
		"AttributeModifier",
		sizeof(FAttributeModifier),
		alignof(FAttributeModifier),
		Z_Construct_UScriptStruct_FAttributeModifier_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeModifier_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeModifier_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeModifier_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAttributeModifier()
	{
		if (!Z_Registration_Info_UScriptStruct_AttributeModifier.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AttributeModifier.InnerSingleton, Z_Construct_UScriptStruct_FAttributeModifier_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AttributeModifier.InnerSingleton;
	}
	DEFINE_FUNCTION(UBonkGameplayEffect::execGetDeltaSeconds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDeltaSeconds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBonkGameplayEffect::execGetWorldContext)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWorld**)Z_Param__Result=P_THIS->GetWorldContext();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBonkGameplayEffect::execSuperEffectTick)
	{
		P_GET_OBJECT(ABonkPlayerPawn,Z_Param_Pawn);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SuperEffectTick(Z_Param_Pawn,Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBonkGameplayEffect::execStopTick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopTick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBonkGameplayEffect::execStartTick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartTick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBonkGameplayEffect::execReverseModifierEffect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReverseModifierEffect();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBonkGameplayEffect::execModifierEffect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ModifierEffect();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBonkGameplayEffect::execUnbind)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Unbind();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBonkGameplayEffect::execBind)
	{
		P_GET_OBJECT(UBonkPlayer,Z_Param_NewPlayerData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Bind(Z_Param_NewPlayerData);
		P_NATIVE_END;
	}
	static FName NAME_UBonkGameplayEffect_EffectTick = FName(TEXT("EffectTick"));
	void UBonkGameplayEffect::EffectTick(ABonkPlayerPawn* Pawn, float DeltaTime)
	{
		BonkGameplayEffect_eventEffectTick_Parms Parms;
		Parms.Pawn=Pawn;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_UBonkGameplayEffect_EffectTick),&Parms);
	}
	static FName NAME_UBonkGameplayEffect_OnAttack = FName(TEXT("OnAttack"));
	void UBonkGameplayEffect::OnAttack(ABonkPlayerPawn* Pawn)
	{
		BonkGameplayEffect_eventOnAttack_Parms Parms;
		Parms.Pawn=Pawn;
		ProcessEvent(FindFunctionChecked(NAME_UBonkGameplayEffect_OnAttack),&Parms);
	}
	static FName NAME_UBonkGameplayEffect_OnDrop = FName(TEXT("OnDrop"));
	void UBonkGameplayEffect::OnDrop(ABonkPlayerPawn* Pawn, AActor* Actor)
	{
		BonkGameplayEffect_eventOnDrop_Parms Parms;
		Parms.Pawn=Pawn;
		Parms.Actor=Actor;
		ProcessEvent(FindFunctionChecked(NAME_UBonkGameplayEffect_OnDrop),&Parms);
	}
	static FName NAME_UBonkGameplayEffect_OnHit = FName(TEXT("OnHit"));
	void UBonkGameplayEffect::OnHit(ABonkPlayerPawn* Pawn, AActor* OtherActor)
	{
		BonkGameplayEffect_eventOnHit_Parms Parms;
		Parms.Pawn=Pawn;
		Parms.OtherActor=OtherActor;
		ProcessEvent(FindFunctionChecked(NAME_UBonkGameplayEffect_OnHit),&Parms);
	}
	static FName NAME_UBonkGameplayEffect_OnPickup = FName(TEXT("OnPickup"));
	void UBonkGameplayEffect::OnPickup(ABonkPlayerPawn* Pawn, AActor* OtherActor)
	{
		BonkGameplayEffect_eventOnPickup_Parms Parms;
		Parms.Pawn=Pawn;
		Parms.OtherActor=OtherActor;
		ProcessEvent(FindFunctionChecked(NAME_UBonkGameplayEffect_OnPickup),&Parms);
	}
	void UBonkGameplayEffect::StaticRegisterNativesUBonkGameplayEffect()
	{
		UClass* Class = UBonkGameplayEffect::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Bind", &UBonkGameplayEffect::execBind },
			{ "GetDeltaSeconds", &UBonkGameplayEffect::execGetDeltaSeconds },
			{ "GetWorldContext", &UBonkGameplayEffect::execGetWorldContext },
			{ "ModifierEffect", &UBonkGameplayEffect::execModifierEffect },
			{ "ReverseModifierEffect", &UBonkGameplayEffect::execReverseModifierEffect },
			{ "StartTick", &UBonkGameplayEffect::execStartTick },
			{ "StopTick", &UBonkGameplayEffect::execStopTick },
			{ "SuperEffectTick", &UBonkGameplayEffect::execSuperEffectTick },
			{ "Unbind", &UBonkGameplayEffect::execUnbind },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBonkGameplayEffect_Bind_Statics
	{
		struct BonkGameplayEffect_eventBind_Parms
		{
			UBonkPlayer* NewPlayerData;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewPlayerData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBonkGameplayEffect_Bind_Statics::NewProp_NewPlayerData = { "NewPlayerData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkGameplayEffect_eventBind_Parms, NewPlayerData), Z_Construct_UClass_UBonkPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBonkGameplayEffect_Bind_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkGameplayEffect_Bind_Statics::NewProp_NewPlayerData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkGameplayEffect_Bind_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BonkGameplayEffect.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBonkGameplayEffect_Bind_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkGameplayEffect, nullptr, "Bind", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBonkGameplayEffect_Bind_Statics::BonkGameplayEffect_eventBind_Parms), Z_Construct_UFunction_UBonkGameplayEffect_Bind_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkGameplayEffect_Bind_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBonkGameplayEffect_Bind_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkGameplayEffect_Bind_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBonkGameplayEffect_Bind()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBonkGameplayEffect_Bind_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBonkGameplayEffect_EffectTick_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBonkGameplayEffect_EffectTick_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkGameplayEffect_eventEffectTick_Parms, Pawn), Z_Construct_UClass_ABonkPlayerPawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBonkGameplayEffect_EffectTick_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkGameplayEffect_eventEffectTick_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBonkGameplayEffect_EffectTick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkGameplayEffect_EffectTick_Statics::NewProp_Pawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkGameplayEffect_EffectTick_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkGameplayEffect_EffectTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BonkGameplayEffect.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBonkGameplayEffect_EffectTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkGameplayEffect, nullptr, "EffectTick", nullptr, nullptr, sizeof(BonkGameplayEffect_eventEffectTick_Parms), Z_Construct_UFunction_UBonkGameplayEffect_EffectTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkGameplayEffect_EffectTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBonkGameplayEffect_EffectTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkGameplayEffect_EffectTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBonkGameplayEffect_EffectTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBonkGameplayEffect_EffectTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBonkGameplayEffect_GetDeltaSeconds_Statics
	{
		struct BonkGameplayEffect_eventGetDeltaSeconds_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBonkGameplayEffect_GetDeltaSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkGameplayEffect_eventGetDeltaSeconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBonkGameplayEffect_GetDeltaSeconds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkGameplayEffect_GetDeltaSeconds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkGameplayEffect_GetDeltaSeconds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BonkGameplayEffect.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBonkGameplayEffect_GetDeltaSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkGameplayEffect, nullptr, "GetDeltaSeconds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBonkGameplayEffect_GetDeltaSeconds_Statics::BonkGameplayEffect_eventGetDeltaSeconds_Parms), Z_Construct_UFunction_UBonkGameplayEffect_GetDeltaSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkGameplayEffect_GetDeltaSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBonkGameplayEffect_GetDeltaSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkGameplayEffect_GetDeltaSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBonkGameplayEffect_GetDeltaSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBonkGameplayEffect_GetDeltaSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBonkGameplayEffect_GetWorldContext_Statics
	{
		struct BonkGameplayEffect_eventGetWorldContext_Parms
		{
			UWorld* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBonkGameplayEffect_GetWorldContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkGameplayEffect_eventGetWorldContext_Parms, ReturnValue), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBonkGameplayEffect_GetWorldContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkGameplayEffect_GetWorldContext_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkGameplayEffect_GetWorldContext_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BonkGameplayEffect.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBonkGameplayEffect_GetWorldContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkGameplayEffect, nullptr, "GetWorldContext", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBonkGameplayEffect_GetWorldContext_Statics::BonkGameplayEffect_eventGetWorldContext_Parms), Z_Construct_UFunction_UBonkGameplayEffect_GetWorldContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkGameplayEffect_GetWorldContext_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBonkGameplayEffect_GetWorldContext_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkGameplayEffect_GetWorldContext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBonkGameplayEffect_GetWorldContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBonkGameplayEffect_GetWorldContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBonkGameplayEffect_ModifierEffect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkGameplayEffect_ModifierEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BonkGameplayEffect.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBonkGameplayEffect_ModifierEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkGameplayEffect, nullptr, "ModifierEffect", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBonkGameplayEffect_ModifierEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkGameplayEffect_ModifierEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBonkGameplayEffect_ModifierEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBonkGameplayEffect_ModifierEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBonkGameplayEffect_OnAttack_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBonkGameplayEffect_OnAttack_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkGameplayEffect_eventOnAttack_Parms, Pawn), Z_Construct_UClass_ABonkPlayerPawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBonkGameplayEffect_OnAttack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkGameplayEffect_OnAttack_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkGameplayEffect_OnAttack_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// To call on player events\n" },
		{ "ModuleRelativePath", "Components/BonkGameplayEffect.h" },
		{ "ToolTip", "To call on player events" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBonkGameplayEffect_OnAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkGameplayEffect, nullptr, "OnAttack", nullptr, nullptr, sizeof(BonkGameplayEffect_eventOnAttack_Parms), Z_Construct_UFunction_UBonkGameplayEffect_OnAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkGameplayEffect_OnAttack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBonkGameplayEffect_OnAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkGameplayEffect_OnAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBonkGameplayEffect_OnAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBonkGameplayEffect_OnAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBonkGameplayEffect_OnDrop_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBonkGameplayEffect_OnDrop_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkGameplayEffect_eventOnDrop_Parms, Pawn), Z_Construct_UClass_ABonkPlayerPawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBonkGameplayEffect_OnDrop_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkGameplayEffect_eventOnDrop_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBonkGameplayEffect_OnDrop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkGameplayEffect_OnDrop_Statics::NewProp_Pawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkGameplayEffect_OnDrop_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkGameplayEffect_OnDrop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BonkGameplayEffect.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBonkGameplayEffect_OnDrop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkGameplayEffect, nullptr, "OnDrop", nullptr, nullptr, sizeof(BonkGameplayEffect_eventOnDrop_Parms), Z_Construct_UFunction_UBonkGameplayEffect_OnDrop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkGameplayEffect_OnDrop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBonkGameplayEffect_OnDrop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkGameplayEffect_OnDrop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBonkGameplayEffect_OnDrop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBonkGameplayEffect_OnDrop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBonkGameplayEffect_OnHit_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBonkGameplayEffect_OnHit_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkGameplayEffect_eventOnHit_Parms, Pawn), Z_Construct_UClass_ABonkPlayerPawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBonkGameplayEffect_OnHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkGameplayEffect_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBonkGameplayEffect_OnHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkGameplayEffect_OnHit_Statics::NewProp_Pawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkGameplayEffect_OnHit_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkGameplayEffect_OnHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BonkGameplayEffect.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBonkGameplayEffect_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkGameplayEffect, nullptr, "OnHit", nullptr, nullptr, sizeof(BonkGameplayEffect_eventOnHit_Parms), Z_Construct_UFunction_UBonkGameplayEffect_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkGameplayEffect_OnHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBonkGameplayEffect_OnHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkGameplayEffect_OnHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBonkGameplayEffect_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBonkGameplayEffect_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBonkGameplayEffect_OnPickup_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBonkGameplayEffect_OnPickup_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkGameplayEffect_eventOnPickup_Parms, Pawn), Z_Construct_UClass_ABonkPlayerPawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBonkGameplayEffect_OnPickup_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkGameplayEffect_eventOnPickup_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBonkGameplayEffect_OnPickup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkGameplayEffect_OnPickup_Statics::NewProp_Pawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkGameplayEffect_OnPickup_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkGameplayEffect_OnPickup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BonkGameplayEffect.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBonkGameplayEffect_OnPickup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkGameplayEffect, nullptr, "OnPickup", nullptr, nullptr, sizeof(BonkGameplayEffect_eventOnPickup_Parms), Z_Construct_UFunction_UBonkGameplayEffect_OnPickup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkGameplayEffect_OnPickup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBonkGameplayEffect_OnPickup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkGameplayEffect_OnPickup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBonkGameplayEffect_OnPickup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBonkGameplayEffect_OnPickup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBonkGameplayEffect_ReverseModifierEffect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkGameplayEffect_ReverseModifierEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BonkGameplayEffect.h" },
		{ "ToolTip", "Only works with Add and Subtract modifiers" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBonkGameplayEffect_ReverseModifierEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkGameplayEffect, nullptr, "ReverseModifierEffect", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBonkGameplayEffect_ReverseModifierEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkGameplayEffect_ReverseModifierEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBonkGameplayEffect_ReverseModifierEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBonkGameplayEffect_ReverseModifierEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBonkGameplayEffect_StartTick_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkGameplayEffect_StartTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BonkGameplayEffect.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBonkGameplayEffect_StartTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkGameplayEffect, nullptr, "StartTick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBonkGameplayEffect_StartTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkGameplayEffect_StartTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBonkGameplayEffect_StartTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBonkGameplayEffect_StartTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBonkGameplayEffect_StopTick_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkGameplayEffect_StopTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BonkGameplayEffect.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBonkGameplayEffect_StopTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkGameplayEffect, nullptr, "StopTick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBonkGameplayEffect_StopTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkGameplayEffect_StopTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBonkGameplayEffect_StopTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBonkGameplayEffect_StopTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBonkGameplayEffect_SuperEffectTick_Statics
	{
		struct BonkGameplayEffect_eventSuperEffectTick_Parms
		{
			ABonkPlayerPawn* Pawn;
			float DeltaTime;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBonkGameplayEffect_SuperEffectTick_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkGameplayEffect_eventSuperEffectTick_Parms, Pawn), Z_Construct_UClass_ABonkPlayerPawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBonkGameplayEffect_SuperEffectTick_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkGameplayEffect_eventSuperEffectTick_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBonkGameplayEffect_SuperEffectTick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkGameplayEffect_SuperEffectTick_Statics::NewProp_Pawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkGameplayEffect_SuperEffectTick_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkGameplayEffect_SuperEffectTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BonkGameplayEffect.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBonkGameplayEffect_SuperEffectTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkGameplayEffect, nullptr, "SuperEffectTick", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBonkGameplayEffect_SuperEffectTick_Statics::BonkGameplayEffect_eventSuperEffectTick_Parms), Z_Construct_UFunction_UBonkGameplayEffect_SuperEffectTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkGameplayEffect_SuperEffectTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBonkGameplayEffect_SuperEffectTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkGameplayEffect_SuperEffectTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBonkGameplayEffect_SuperEffectTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBonkGameplayEffect_SuperEffectTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBonkGameplayEffect_Unbind_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkGameplayEffect_Unbind_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BonkGameplayEffect.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBonkGameplayEffect_Unbind_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkGameplayEffect, nullptr, "Unbind", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBonkGameplayEffect_Unbind_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkGameplayEffect_Unbind_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBonkGameplayEffect_Unbind()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBonkGameplayEffect_Unbind_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBonkGameplayEffect);
	UClass* Z_Construct_UClass_UBonkGameplayEffect_NoRegister()
	{
		return UBonkGameplayEffect::StaticClass();
	}
	struct Z_Construct_UClass_UBonkGameplayEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tier_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Tier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Image;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Modifiers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modifiers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Modifiers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bActiveTick_MetaData[];
#endif
		static void NewProp_bActiveTick_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bActiveTick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBonkGameplayEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Bonk,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBonkGameplayEffect_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBonkGameplayEffect_Bind, "Bind" }, // 1309406012
		{ &Z_Construct_UFunction_UBonkGameplayEffect_EffectTick, "EffectTick" }, // 2481092244
		{ &Z_Construct_UFunction_UBonkGameplayEffect_GetDeltaSeconds, "GetDeltaSeconds" }, // 2625688981
		{ &Z_Construct_UFunction_UBonkGameplayEffect_GetWorldContext, "GetWorldContext" }, // 4201783955
		{ &Z_Construct_UFunction_UBonkGameplayEffect_ModifierEffect, "ModifierEffect" }, // 3006803526
		{ &Z_Construct_UFunction_UBonkGameplayEffect_OnAttack, "OnAttack" }, // 1337575102
		{ &Z_Construct_UFunction_UBonkGameplayEffect_OnDrop, "OnDrop" }, // 737307456
		{ &Z_Construct_UFunction_UBonkGameplayEffect_OnHit, "OnHit" }, // 2525635074
		{ &Z_Construct_UFunction_UBonkGameplayEffect_OnPickup, "OnPickup" }, // 2573299203
		{ &Z_Construct_UFunction_UBonkGameplayEffect_ReverseModifierEffect, "ReverseModifierEffect" }, // 4169073955
		{ &Z_Construct_UFunction_UBonkGameplayEffect_StartTick, "StartTick" }, // 2331158583
		{ &Z_Construct_UFunction_UBonkGameplayEffect_StopTick, "StopTick" }, // 1424421015
		{ &Z_Construct_UFunction_UBonkGameplayEffect_SuperEffectTick, "SuperEffectTick" }, // 2079854033
		{ &Z_Construct_UFunction_UBonkGameplayEffect_Unbind, "Unbind" }, // 366765387
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkGameplayEffect_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Components/BonkGameplayEffect.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Components/BonkGameplayEffect.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkGameplayEffect_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "BonkGameplayEffect" },
		{ "ModuleRelativePath", "Components/BonkGameplayEffect.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBonkGameplayEffect_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkGameplayEffect, Name), METADATA_PARAMS(Z_Construct_UClass_UBonkGameplayEffect_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkGameplayEffect_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkGameplayEffect_Statics::NewProp_Tier_MetaData[] = {
		{ "Category", "BonkGameplayEffect" },
		{ "ModuleRelativePath", "Components/BonkGameplayEffect.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBonkGameplayEffect_Statics::NewProp_Tier = { "Tier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkGameplayEffect, Tier), Z_Construct_UEnum_Bonk_EEffectTier, METADATA_PARAMS(Z_Construct_UClass_UBonkGameplayEffect_Statics::NewProp_Tier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkGameplayEffect_Statics::NewProp_Tier_MetaData)) }; // 53749617
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkGameplayEffect_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "BonkGameplayEffect" },
		{ "ModuleRelativePath", "Components/BonkGameplayEffect.h" },
		{ "ToolTip", "Instant: Called when binded; Gameplay: No data modifiers;" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBonkGameplayEffect_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkGameplayEffect, Type), Z_Construct_UEnum_Bonk_EEffectType, METADATA_PARAMS(Z_Construct_UClass_UBonkGameplayEffect_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkGameplayEffect_Statics::NewProp_Type_MetaData)) }; // 3911663688
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkGameplayEffect_Statics::NewProp_Image_MetaData[] = {
		{ "Category", "BonkGameplayEffect" },
		{ "ModuleRelativePath", "Components/BonkGameplayEffect.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBonkGameplayEffect_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkGameplayEffect, Image), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBonkGameplayEffect_Statics::NewProp_Image_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkGameplayEffect_Statics::NewProp_Image_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBonkGameplayEffect_Statics::NewProp_Modifiers_Inner = { "Modifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAttributeModifier, METADATA_PARAMS(nullptr, 0) }; // 3163641158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkGameplayEffect_Statics::NewProp_Modifiers_MetaData[] = {
		{ "Category", "BonkGameplayEffect" },
		{ "ModuleRelativePath", "Components/BonkGameplayEffect.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBonkGameplayEffect_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkGameplayEffect, Modifiers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBonkGameplayEffect_Statics::NewProp_Modifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkGameplayEffect_Statics::NewProp_Modifiers_MetaData)) }; // 3163641158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkGameplayEffect_Statics::NewProp_DeltaSeconds_MetaData[] = {
		{ "ModuleRelativePath", "Components/BonkGameplayEffect.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBonkGameplayEffect_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkGameplayEffect, DeltaSeconds), METADATA_PARAMS(Z_Construct_UClass_UBonkGameplayEffect_Statics::NewProp_DeltaSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkGameplayEffect_Statics::NewProp_DeltaSeconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkGameplayEffect_Statics::NewProp_bActiveTick_MetaData[] = {
		{ "Category", "BonkGameplayEffect" },
		{ "ModuleRelativePath", "Components/BonkGameplayEffect.h" },
	};
#endif
	void Z_Construct_UClass_UBonkGameplayEffect_Statics::NewProp_bActiveTick_SetBit(void* Obj)
	{
		((UBonkGameplayEffect*)Obj)->bActiveTick = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBonkGameplayEffect_Statics::NewProp_bActiveTick = { "bActiveTick", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBonkGameplayEffect), &Z_Construct_UClass_UBonkGameplayEffect_Statics::NewProp_bActiveTick_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBonkGameplayEffect_Statics::NewProp_bActiveTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkGameplayEffect_Statics::NewProp_bActiveTick_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkGameplayEffect_Statics::NewProp_PlayerData_MetaData[] = {
		{ "Category", "BonkGameplayEffect" },
		{ "ModuleRelativePath", "Components/BonkGameplayEffect.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBonkGameplayEffect_Statics::NewProp_PlayerData = { "PlayerData", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkGameplayEffect, PlayerData), Z_Construct_UClass_UBonkPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBonkGameplayEffect_Statics::NewProp_PlayerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkGameplayEffect_Statics::NewProp_PlayerData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkGameplayEffect_Statics::NewProp_World_MetaData[] = {
		{ "ModuleRelativePath", "Components/BonkGameplayEffect.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBonkGameplayEffect_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkGameplayEffect, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBonkGameplayEffect_Statics::NewProp_World_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkGameplayEffect_Statics::NewProp_World_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBonkGameplayEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkGameplayEffect_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkGameplayEffect_Statics::NewProp_Tier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkGameplayEffect_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkGameplayEffect_Statics::NewProp_Image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkGameplayEffect_Statics::NewProp_Modifiers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkGameplayEffect_Statics::NewProp_Modifiers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkGameplayEffect_Statics::NewProp_DeltaSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkGameplayEffect_Statics::NewProp_bActiveTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkGameplayEffect_Statics::NewProp_PlayerData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkGameplayEffect_Statics::NewProp_World,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBonkGameplayEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBonkGameplayEffect>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBonkGameplayEffect_Statics::ClassParams = {
		&UBonkGameplayEffect::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBonkGameplayEffect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBonkGameplayEffect_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBonkGameplayEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkGameplayEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBonkGameplayEffect()
	{
		if (!Z_Registration_Info_UClass_UBonkGameplayEffect.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBonkGameplayEffect.OuterSingleton, Z_Construct_UClass_UBonkGameplayEffect_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBonkGameplayEffect.OuterSingleton;
	}
	template<> BONK_API UClass* StaticClass<UBonkGameplayEffect>()
	{
		return UBonkGameplayEffect::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBonkGameplayEffect);
	struct Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkGameplayEffect_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkGameplayEffect_h_Statics::EnumInfo[] = {
		{ EModifierOperation_StaticEnum, TEXT("EModifierOperation"), &Z_Registration_Info_UEnum_EModifierOperation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 966216695U) },
		{ EEffectTier_StaticEnum, TEXT("EEffectTier"), &Z_Registration_Info_UEnum_EEffectTier, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 53749617U) },
		{ EEffectType_StaticEnum, TEXT("EEffectType"), &Z_Registration_Info_UEnum_EEffectType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3911663688U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkGameplayEffect_h_Statics::ScriptStructInfo[] = {
		{ FAttributeModifier::StaticStruct, Z_Construct_UScriptStruct_FAttributeModifier_Statics::NewStructOps, TEXT("AttributeModifier"), &Z_Registration_Info_UScriptStruct_AttributeModifier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAttributeModifier), 3163641158U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkGameplayEffect_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBonkGameplayEffect, UBonkGameplayEffect::StaticClass, TEXT("UBonkGameplayEffect"), &Z_Registration_Info_UClass_UBonkGameplayEffect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBonkGameplayEffect), 3662869292U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkGameplayEffect_h_2141370672(TEXT("/Script/Bonk"),
		Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkGameplayEffect_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkGameplayEffect_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkGameplayEffect_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkGameplayEffect_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkGameplayEffect_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkGameplayEffect_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

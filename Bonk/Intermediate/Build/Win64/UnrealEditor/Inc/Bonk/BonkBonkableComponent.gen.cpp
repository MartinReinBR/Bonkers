// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bonk/Components/BonkBonkableComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBonkBonkableComponent() {}
// Cross Module References
	BONK_API UFunction* Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnHitResponse__DelegateSignature();
	BONK_API UClass* Z_Construct_UClass_UBonkBonkableComponent();
	BONK_API UClass* Z_Construct_UClass_UBonkBonkerComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	BONK_API UFunction* Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnHitResponsePlayer__DelegateSignature();
	BONK_API UClass* Z_Construct_UClass_ABonkPlayerPawn_NoRegister();
	BONK_API UClass* Z_Construct_UClass_UBonkPlayer_NoRegister();
	BONK_API UFunction* Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnDamagedHitResponse__DelegateSignature();
	BONK_API UClass* Z_Construct_UClass_UBonkBonkableComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Bonk();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnHitResponse__DelegateSignature_Statics
	{
		struct BonkBonkableComponent_eventOnHitResponse_Parms
		{
			UBonkBonkerComponent* BonkerComponent;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BonkerComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BonkerComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnHitResponse__DelegateSignature_Statics::NewProp_BonkerComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnHitResponse__DelegateSignature_Statics::NewProp_BonkerComponent = { "BonkerComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkBonkableComponent_eventOnHitResponse_Parms, BonkerComponent), Z_Construct_UClass_UBonkBonkerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnHitResponse__DelegateSignature_Statics::NewProp_BonkerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnHitResponse__DelegateSignature_Statics::NewProp_BonkerComponent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnHitResponse__DelegateSignature_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkBonkableComponent_eventOnHitResponse_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnHitResponse__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnHitResponse__DelegateSignature_Statics::NewProp_BonkerComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnHitResponse__DelegateSignature_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnHitResponse__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called on any hit (player and objects)\n" },
		{ "ModuleRelativePath", "Components/BonkBonkableComponent.h" },
		{ "ToolTip", "Called on any hit (player and objects)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnHitResponse__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkBonkableComponent, nullptr, "OnHitResponse__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnHitResponse__DelegateSignature_Statics::BonkBonkableComponent_eventOnHitResponse_Parms), Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnHitResponse__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnHitResponse__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnHitResponse__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnHitResponse__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnHitResponse__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnHitResponse__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnHitResponsePlayer__DelegateSignature_Statics
	{
		struct BonkBonkableComponent_eventOnHitResponsePlayer_Parms
		{
			UBonkBonkerComponent* BonkerComponent;
			ABonkPlayerPawn* Pawn;
			UBonkPlayer* PlayerInfo;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BonkerComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BonkerComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerInfo;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnHitResponsePlayer__DelegateSignature_Statics::NewProp_BonkerComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnHitResponsePlayer__DelegateSignature_Statics::NewProp_BonkerComponent = { "BonkerComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkBonkableComponent_eventOnHitResponsePlayer_Parms, BonkerComponent), Z_Construct_UClass_UBonkBonkerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnHitResponsePlayer__DelegateSignature_Statics::NewProp_BonkerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnHitResponsePlayer__DelegateSignature_Statics::NewProp_BonkerComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnHitResponsePlayer__DelegateSignature_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkBonkableComponent_eventOnHitResponsePlayer_Parms, Pawn), Z_Construct_UClass_ABonkPlayerPawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnHitResponsePlayer__DelegateSignature_Statics::NewProp_PlayerInfo = { "PlayerInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkBonkableComponent_eventOnHitResponsePlayer_Parms, PlayerInfo), Z_Construct_UClass_UBonkPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnHitResponsePlayer__DelegateSignature_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkBonkableComponent_eventOnHitResponsePlayer_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnHitResponsePlayer__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnHitResponsePlayer__DelegateSignature_Statics::NewProp_BonkerComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnHitResponsePlayer__DelegateSignature_Statics::NewProp_Pawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnHitResponsePlayer__DelegateSignature_Statics::NewProp_PlayerInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnHitResponsePlayer__DelegateSignature_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnHitResponsePlayer__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called on player hits\n" },
		{ "ModuleRelativePath", "Components/BonkBonkableComponent.h" },
		{ "ToolTip", "Called on player hits" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnHitResponsePlayer__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkBonkableComponent, nullptr, "OnHitResponsePlayer__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnHitResponsePlayer__DelegateSignature_Statics::BonkBonkableComponent_eventOnHitResponsePlayer_Parms), Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnHitResponsePlayer__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnHitResponsePlayer__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnHitResponsePlayer__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnHitResponsePlayer__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnHitResponsePlayer__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnHitResponsePlayer__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnDamagedHitResponse__DelegateSignature_Statics
	{
		struct BonkBonkableComponent_eventOnDamagedHitResponse_Parms
		{
			UBonkBonkerComponent* BonkerComponent;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BonkerComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BonkerComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnDamagedHitResponse__DelegateSignature_Statics::NewProp_BonkerComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnDamagedHitResponse__DelegateSignature_Statics::NewProp_BonkerComponent = { "BonkerComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkBonkableComponent_eventOnDamagedHitResponse_Parms, BonkerComponent), Z_Construct_UClass_UBonkBonkerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnDamagedHitResponse__DelegateSignature_Statics::NewProp_BonkerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnDamagedHitResponse__DelegateSignature_Statics::NewProp_BonkerComponent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnDamagedHitResponse__DelegateSignature_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkBonkableComponent_eventOnDamagedHitResponse_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnDamagedHitResponse__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnDamagedHitResponse__DelegateSignature_Statics::NewProp_BonkerComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnDamagedHitResponse__DelegateSignature_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnDamagedHitResponse__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called when hit and damaged\n" },
		{ "ModuleRelativePath", "Components/BonkBonkableComponent.h" },
		{ "ToolTip", "Called when hit and damaged" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnDamagedHitResponse__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkBonkableComponent, nullptr, "OnDamagedHitResponse__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnDamagedHitResponse__DelegateSignature_Statics::BonkBonkableComponent_eventOnDamagedHitResponse_Parms), Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnDamagedHitResponse__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnDamagedHitResponse__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnDamagedHitResponse__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnDamagedHitResponse__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnDamagedHitResponse__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnDamagedHitResponse__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UBonkBonkableComponent::execEnableBonkable)
	{
		P_GET_UBOOL(Z_Param_bActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableBonkable(Z_Param_bActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBonkBonkableComponent::execHitResponseInternal)
	{
		P_GET_OBJECT(UBonkBonkerComponent,Z_Param_BonkerComponent);
		P_GET_STRUCT(FHitResult,Z_Param_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HitResponseInternal(Z_Param_BonkerComponent,Z_Param_Hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBonkBonkableComponent::execKnockbackFromDirection)
	{
		P_GET_STRUCT(FVector,Z_Param_HorizontalForce);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Multiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->KnockbackFromDirection(Z_Param_HorizontalForce,Z_Param_Multiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBonkBonkableComponent::execKnockbackFromDirectionAndHit)
	{
		P_GET_STRUCT(FVector,Z_Param_HorizontalForce);
		P_GET_STRUCT(FHitResult,Z_Param_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->KnockbackFromDirectionAndHit(Z_Param_HorizontalForce,Z_Param_Hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBonkBonkableComponent::execKnockbackFromHit)
	{
		P_GET_STRUCT(FHitResult,Z_Param_Hit);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Multiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->KnockbackFromHit(Z_Param_Hit,Z_Param_Multiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBonkBonkableComponent::execSetPrimitiveComponent)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_PrimitiveComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPrimitiveComponent(Z_Param_PrimitiveComponent);
		P_NATIVE_END;
	}
	void UBonkBonkableComponent::StaticRegisterNativesUBonkBonkableComponent()
	{
		UClass* Class = UBonkBonkableComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnableBonkable", &UBonkBonkableComponent::execEnableBonkable },
			{ "HitResponseInternal", &UBonkBonkableComponent::execHitResponseInternal },
			{ "KnockbackFromDirection", &UBonkBonkableComponent::execKnockbackFromDirection },
			{ "KnockbackFromDirectionAndHit", &UBonkBonkableComponent::execKnockbackFromDirectionAndHit },
			{ "KnockbackFromHit", &UBonkBonkableComponent::execKnockbackFromHit },
			{ "SetPrimitiveComponent", &UBonkBonkableComponent::execSetPrimitiveComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBonkBonkableComponent_EnableBonkable_Statics
	{
		struct BonkBonkableComponent_eventEnableBonkable_Parms
		{
			bool bActive;
		};
		static void NewProp_bActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bActive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBonkBonkableComponent_EnableBonkable_Statics::NewProp_bActive_SetBit(void* Obj)
	{
		((BonkBonkableComponent_eventEnableBonkable_Parms*)Obj)->bActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBonkBonkableComponent_EnableBonkable_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BonkBonkableComponent_eventEnableBonkable_Parms), &Z_Construct_UFunction_UBonkBonkableComponent_EnableBonkable_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBonkBonkableComponent_EnableBonkable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkBonkableComponent_EnableBonkable_Statics::NewProp_bActive,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkBonkableComponent_EnableBonkable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BonkBonkableComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBonkBonkableComponent_EnableBonkable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkBonkableComponent, nullptr, "EnableBonkable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBonkBonkableComponent_EnableBonkable_Statics::BonkBonkableComponent_eventEnableBonkable_Parms), Z_Construct_UFunction_UBonkBonkableComponent_EnableBonkable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkBonkableComponent_EnableBonkable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBonkBonkableComponent_EnableBonkable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkBonkableComponent_EnableBonkable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBonkBonkableComponent_EnableBonkable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBonkBonkableComponent_EnableBonkable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBonkBonkableComponent_HitResponseInternal_Statics
	{
		struct BonkBonkableComponent_eventHitResponseInternal_Parms
		{
			UBonkBonkerComponent* BonkerComponent;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BonkerComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BonkerComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkBonkableComponent_HitResponseInternal_Statics::NewProp_BonkerComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBonkBonkableComponent_HitResponseInternal_Statics::NewProp_BonkerComponent = { "BonkerComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkBonkableComponent_eventHitResponseInternal_Parms, BonkerComponent), Z_Construct_UClass_UBonkBonkerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBonkBonkableComponent_HitResponseInternal_Statics::NewProp_BonkerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkBonkableComponent_HitResponseInternal_Statics::NewProp_BonkerComponent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBonkBonkableComponent_HitResponseInternal_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkBonkableComponent_eventHitResponseInternal_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBonkBonkableComponent_HitResponseInternal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkBonkableComponent_HitResponseInternal_Statics::NewProp_BonkerComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkBonkableComponent_HitResponseInternal_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkBonkableComponent_HitResponseInternal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BonkBonkableComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBonkBonkableComponent_HitResponseInternal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkBonkableComponent, nullptr, "HitResponseInternal", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBonkBonkableComponent_HitResponseInternal_Statics::BonkBonkableComponent_eventHitResponseInternal_Parms), Z_Construct_UFunction_UBonkBonkableComponent_HitResponseInternal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkBonkableComponent_HitResponseInternal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBonkBonkableComponent_HitResponseInternal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkBonkableComponent_HitResponseInternal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBonkBonkableComponent_HitResponseInternal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBonkBonkableComponent_HitResponseInternal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBonkBonkableComponent_KnockbackFromDirection_Statics
	{
		struct BonkBonkableComponent_eventKnockbackFromDirection_Parms
		{
			FVector HorizontalForce;
			float Multiplier;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_HorizontalForce;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Multiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBonkBonkableComponent_KnockbackFromDirection_Statics::NewProp_HorizontalForce = { "HorizontalForce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkBonkableComponent_eventKnockbackFromDirection_Parms, HorizontalForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBonkBonkableComponent_KnockbackFromDirection_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkBonkableComponent_eventKnockbackFromDirection_Parms, Multiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBonkBonkableComponent_KnockbackFromDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkBonkableComponent_KnockbackFromDirection_Statics::NewProp_HorizontalForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkBonkableComponent_KnockbackFromDirection_Statics::NewProp_Multiplier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkBonkableComponent_KnockbackFromDirection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BonkBonkableComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBonkBonkableComponent_KnockbackFromDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkBonkableComponent, nullptr, "KnockbackFromDirection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBonkBonkableComponent_KnockbackFromDirection_Statics::BonkBonkableComponent_eventKnockbackFromDirection_Parms), Z_Construct_UFunction_UBonkBonkableComponent_KnockbackFromDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkBonkableComponent_KnockbackFromDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBonkBonkableComponent_KnockbackFromDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkBonkableComponent_KnockbackFromDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBonkBonkableComponent_KnockbackFromDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBonkBonkableComponent_KnockbackFromDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBonkBonkableComponent_KnockbackFromDirectionAndHit_Statics
	{
		struct BonkBonkableComponent_eventKnockbackFromDirectionAndHit_Parms
		{
			FVector HorizontalForce;
			FHitResult Hit;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_HorizontalForce;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBonkBonkableComponent_KnockbackFromDirectionAndHit_Statics::NewProp_HorizontalForce = { "HorizontalForce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkBonkableComponent_eventKnockbackFromDirectionAndHit_Parms, HorizontalForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBonkBonkableComponent_KnockbackFromDirectionAndHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkBonkableComponent_eventKnockbackFromDirectionAndHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBonkBonkableComponent_KnockbackFromDirectionAndHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkBonkableComponent_KnockbackFromDirectionAndHit_Statics::NewProp_HorizontalForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkBonkableComponent_KnockbackFromDirectionAndHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkBonkableComponent_KnockbackFromDirectionAndHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BonkBonkableComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBonkBonkableComponent_KnockbackFromDirectionAndHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkBonkableComponent, nullptr, "KnockbackFromDirectionAndHit", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBonkBonkableComponent_KnockbackFromDirectionAndHit_Statics::BonkBonkableComponent_eventKnockbackFromDirectionAndHit_Parms), Z_Construct_UFunction_UBonkBonkableComponent_KnockbackFromDirectionAndHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkBonkableComponent_KnockbackFromDirectionAndHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBonkBonkableComponent_KnockbackFromDirectionAndHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkBonkableComponent_KnockbackFromDirectionAndHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBonkBonkableComponent_KnockbackFromDirectionAndHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBonkBonkableComponent_KnockbackFromDirectionAndHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBonkBonkableComponent_KnockbackFromHit_Statics
	{
		struct BonkBonkableComponent_eventKnockbackFromHit_Parms
		{
			FHitResult Hit;
			float Multiplier;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Multiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBonkBonkableComponent_KnockbackFromHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkBonkableComponent_eventKnockbackFromHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1416937132
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBonkBonkableComponent_KnockbackFromHit_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkBonkableComponent_eventKnockbackFromHit_Parms, Multiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBonkBonkableComponent_KnockbackFromHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkBonkableComponent_KnockbackFromHit_Statics::NewProp_Hit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkBonkableComponent_KnockbackFromHit_Statics::NewProp_Multiplier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkBonkableComponent_KnockbackFromHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BonkBonkableComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBonkBonkableComponent_KnockbackFromHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkBonkableComponent, nullptr, "KnockbackFromHit", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBonkBonkableComponent_KnockbackFromHit_Statics::BonkBonkableComponent_eventKnockbackFromHit_Parms), Z_Construct_UFunction_UBonkBonkableComponent_KnockbackFromHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkBonkableComponent_KnockbackFromHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBonkBonkableComponent_KnockbackFromHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkBonkableComponent_KnockbackFromHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBonkBonkableComponent_KnockbackFromHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBonkBonkableComponent_KnockbackFromHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBonkBonkableComponent_SetPrimitiveComponent_Statics
	{
		struct BonkBonkableComponent_eventSetPrimitiveComponent_Parms
		{
			UPrimitiveComponent* PrimitiveComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimitiveComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PrimitiveComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkBonkableComponent_SetPrimitiveComponent_Statics::NewProp_PrimitiveComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBonkBonkableComponent_SetPrimitiveComponent_Statics::NewProp_PrimitiveComponent = { "PrimitiveComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkBonkableComponent_eventSetPrimitiveComponent_Parms, PrimitiveComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBonkBonkableComponent_SetPrimitiveComponent_Statics::NewProp_PrimitiveComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkBonkableComponent_SetPrimitiveComponent_Statics::NewProp_PrimitiveComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBonkBonkableComponent_SetPrimitiveComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkBonkableComponent_SetPrimitiveComponent_Statics::NewProp_PrimitiveComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkBonkableComponent_SetPrimitiveComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BonkBonkableComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBonkBonkableComponent_SetPrimitiveComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkBonkableComponent, nullptr, "SetPrimitiveComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBonkBonkableComponent_SetPrimitiveComponent_Statics::BonkBonkableComponent_eventSetPrimitiveComponent_Parms), Z_Construct_UFunction_UBonkBonkableComponent_SetPrimitiveComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkBonkableComponent_SetPrimitiveComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBonkBonkableComponent_SetPrimitiveComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkBonkableComponent_SetPrimitiveComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBonkBonkableComponent_SetPrimitiveComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBonkBonkableComponent_SetPrimitiveComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBonkBonkableComponent);
	UClass* Z_Construct_UClass_UBonkBonkableComponent_NoRegister()
	{
		return UBonkBonkableComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBonkBonkableComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimitiveComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PrimitiveComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseHealthKnockback_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseHealthKnockback;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KnockbackHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_KnockbackHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KnockbackMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_KnockbackMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerForwardWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayerForwardWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastBonkerHit_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LastBonkerHit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastPlayerHit_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LastPlayerHit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[];
#endif
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnHitResponse_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHitResponse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnHitResponsePlayer_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHitResponsePlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDamagedHitResponse_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDamagedHitResponse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBonkBonkableComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Bonk,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBonkBonkableComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBonkBonkableComponent_EnableBonkable, "EnableBonkable" }, // 436702624
		{ &Z_Construct_UFunction_UBonkBonkableComponent_HitResponseInternal, "HitResponseInternal" }, // 3908514754
		{ &Z_Construct_UFunction_UBonkBonkableComponent_KnockbackFromDirection, "KnockbackFromDirection" }, // 4007541419
		{ &Z_Construct_UFunction_UBonkBonkableComponent_KnockbackFromDirectionAndHit, "KnockbackFromDirectionAndHit" }, // 1996317460
		{ &Z_Construct_UFunction_UBonkBonkableComponent_KnockbackFromHit, "KnockbackFromHit" }, // 4181841298
		{ &Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnDamagedHitResponse__DelegateSignature, "OnDamagedHitResponse__DelegateSignature" }, // 817715223
		{ &Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnHitResponse__DelegateSignature, "OnHitResponse__DelegateSignature" }, // 1014485757
		{ &Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnHitResponsePlayer__DelegateSignature, "OnHitResponsePlayer__DelegateSignature" }, // 1324694117
		{ &Z_Construct_UFunction_UBonkBonkableComponent_SetPrimitiveComponent, "SetPrimitiveComponent" }, // 127427527
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkBonkableComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Bonking" },
		{ "Comment", "/**\n * Component response triggered by bonkers\n */" },
		{ "IncludePath", "Components/BonkBonkableComponent.h" },
		{ "ModuleRelativePath", "Components/BonkBonkableComponent.h" },
		{ "ToolTip", "Component response triggered by bonkers" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkBonkableComponent_Statics::NewProp_PrimitiveComp_MetaData[] = {
		{ "Category", "BonkBonkableComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Components/BonkBonkableComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBonkBonkableComponent_Statics::NewProp_PrimitiveComp = { "PrimitiveComp", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkBonkableComponent, PrimitiveComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBonkBonkableComponent_Statics::NewProp_PrimitiveComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkBonkableComponent_Statics::NewProp_PrimitiveComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkBonkableComponent_Statics::NewProp_BaseHealthKnockback_MetaData[] = {
		{ "Category", "BonkBonkableComponent" },
		{ "ModuleRelativePath", "Components/BonkBonkableComponent.h" },
		{ "ToolTip", "Similar to damage values, only affects player" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBonkBonkableComponent_Statics::NewProp_BaseHealthKnockback = { "BaseHealthKnockback", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkBonkableComponent, BaseHealthKnockback), METADATA_PARAMS(Z_Construct_UClass_UBonkBonkableComponent_Statics::NewProp_BaseHealthKnockback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkBonkableComponent_Statics::NewProp_BaseHealthKnockback_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkBonkableComponent_Statics::NewProp_KnockbackHeight_MetaData[] = {
		{ "Category", "BonkBonkableComponent" },
		{ "ModuleRelativePath", "Components/BonkBonkableComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBonkBonkableComponent_Statics::NewProp_KnockbackHeight = { "KnockbackHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkBonkableComponent, KnockbackHeight), METADATA_PARAMS(Z_Construct_UClass_UBonkBonkableComponent_Statics::NewProp_KnockbackHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkBonkableComponent_Statics::NewProp_KnockbackHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkBonkableComponent_Statics::NewProp_KnockbackMultiplier_MetaData[] = {
		{ "Category", "BonkBonkableComponent" },
		{ "ModuleRelativePath", "Components/BonkBonkableComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBonkBonkableComponent_Statics::NewProp_KnockbackMultiplier = { "KnockbackMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkBonkableComponent, KnockbackMultiplier), METADATA_PARAMS(Z_Construct_UClass_UBonkBonkableComponent_Statics::NewProp_KnockbackMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkBonkableComponent_Statics::NewProp_KnockbackMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkBonkableComponent_Statics::NewProp_PlayerForwardWeight_MetaData[] = {
		{ "Category", "BonkBonkableComponent" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Components/BonkBonkableComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBonkBonkableComponent_Statics::NewProp_PlayerForwardWeight = { "PlayerForwardWeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkBonkableComponent, PlayerForwardWeight), METADATA_PARAMS(Z_Construct_UClass_UBonkBonkableComponent_Statics::NewProp_PlayerForwardWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkBonkableComponent_Statics::NewProp_PlayerForwardWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkBonkableComponent_Statics::NewProp_LastBonkerHit_MetaData[] = {
		{ "Category", "BonkBonkableComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Components/BonkBonkableComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBonkBonkableComponent_Statics::NewProp_LastBonkerHit = { "LastBonkerHit", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkBonkableComponent, LastBonkerHit), Z_Construct_UClass_UBonkBonkerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBonkBonkableComponent_Statics::NewProp_LastBonkerHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkBonkableComponent_Statics::NewProp_LastBonkerHit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkBonkableComponent_Statics::NewProp_LastPlayerHit_MetaData[] = {
		{ "Category", "BonkBonkableComponent" },
		{ "ModuleRelativePath", "Components/BonkBonkableComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBonkBonkableComponent_Statics::NewProp_LastPlayerHit = { "LastPlayerHit", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkBonkableComponent, LastPlayerHit), Z_Construct_UClass_ABonkPlayerPawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBonkBonkableComponent_Statics::NewProp_LastPlayerHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkBonkableComponent_Statics::NewProp_LastPlayerHit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkBonkableComponent_Statics::NewProp_bIsEnabled_MetaData[] = {
		{ "Category", "BonkBonkableComponent" },
		{ "ModuleRelativePath", "Components/BonkBonkableComponent.h" },
	};
#endif
	void Z_Construct_UClass_UBonkBonkableComponent_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((UBonkBonkableComponent*)Obj)->bIsEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBonkBonkableComponent_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBonkBonkableComponent), &Z_Construct_UClass_UBonkBonkableComponent_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBonkBonkableComponent_Statics::NewProp_bIsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkBonkableComponent_Statics::NewProp_bIsEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkBonkableComponent_Statics::NewProp_OnHitResponse_MetaData[] = {
		{ "ModuleRelativePath", "Components/BonkBonkableComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBonkBonkableComponent_Statics::NewProp_OnHitResponse = { "OnHitResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkBonkableComponent, OnHitResponse), Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnHitResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBonkBonkableComponent_Statics::NewProp_OnHitResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkBonkableComponent_Statics::NewProp_OnHitResponse_MetaData)) }; // 1014485757
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkBonkableComponent_Statics::NewProp_OnHitResponsePlayer_MetaData[] = {
		{ "ModuleRelativePath", "Components/BonkBonkableComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBonkBonkableComponent_Statics::NewProp_OnHitResponsePlayer = { "OnHitResponsePlayer", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkBonkableComponent, OnHitResponsePlayer), Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnHitResponsePlayer__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBonkBonkableComponent_Statics::NewProp_OnHitResponsePlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkBonkableComponent_Statics::NewProp_OnHitResponsePlayer_MetaData)) }; // 1324694117
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkBonkableComponent_Statics::NewProp_OnDamagedHitResponse_MetaData[] = {
		{ "ModuleRelativePath", "Components/BonkBonkableComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBonkBonkableComponent_Statics::NewProp_OnDamagedHitResponse = { "OnDamagedHitResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkBonkableComponent, OnDamagedHitResponse), Z_Construct_UDelegateFunction_UBonkBonkableComponent_OnDamagedHitResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBonkBonkableComponent_Statics::NewProp_OnDamagedHitResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkBonkableComponent_Statics::NewProp_OnDamagedHitResponse_MetaData)) }; // 817715223
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBonkBonkableComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkBonkableComponent_Statics::NewProp_PrimitiveComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkBonkableComponent_Statics::NewProp_BaseHealthKnockback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkBonkableComponent_Statics::NewProp_KnockbackHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkBonkableComponent_Statics::NewProp_KnockbackMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkBonkableComponent_Statics::NewProp_PlayerForwardWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkBonkableComponent_Statics::NewProp_LastBonkerHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkBonkableComponent_Statics::NewProp_LastPlayerHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkBonkableComponent_Statics::NewProp_bIsEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkBonkableComponent_Statics::NewProp_OnHitResponse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkBonkableComponent_Statics::NewProp_OnHitResponsePlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkBonkableComponent_Statics::NewProp_OnDamagedHitResponse,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBonkBonkableComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBonkBonkableComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBonkBonkableComponent_Statics::ClassParams = {
		&UBonkBonkableComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBonkBonkableComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBonkBonkableComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBonkBonkableComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkBonkableComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBonkBonkableComponent()
	{
		if (!Z_Registration_Info_UClass_UBonkBonkableComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBonkBonkableComponent.OuterSingleton, Z_Construct_UClass_UBonkBonkableComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBonkBonkableComponent.OuterSingleton;
	}
	template<> BONK_API UClass* StaticClass<UBonkBonkableComponent>()
	{
		return UBonkBonkableComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBonkBonkableComponent);
	struct Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkBonkableComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkBonkableComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBonkBonkableComponent, UBonkBonkableComponent::StaticClass, TEXT("UBonkBonkableComponent"), &Z_Registration_Info_UClass_UBonkBonkableComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBonkBonkableComponent), 2213128386U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkBonkableComponent_h_2666541337(TEXT("/Script/Bonk"),
		Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkBonkableComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkBonkableComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

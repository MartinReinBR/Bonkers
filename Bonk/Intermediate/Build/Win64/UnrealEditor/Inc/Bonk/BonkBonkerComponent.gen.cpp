// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bonk/Components/BonkBonkerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBonkBonkerComponent() {}
// Cross Module References
	BONK_API UScriptStruct* Z_Construct_UScriptStruct_FHitBonkable();
	UPackage* Z_Construct_UPackage__Script_Bonk();
	BONK_API UClass* Z_Construct_UClass_UBonkBonkableComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	BONK_API UFunction* Z_Construct_UDelegateFunction_UBonkBonkerComponent_OnHit__DelegateSignature();
	BONK_API UClass* Z_Construct_UClass_UBonkBonkerComponent();
	BONK_API UClass* Z_Construct_UClass_UBonkBonkerComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	BONK_API UClass* Z_Construct_UClass_ABonkPlayerPawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETraceTypeQuery();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HitBonkable;
class UScriptStruct* FHitBonkable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HitBonkable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HitBonkable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHitBonkable, Z_Construct_UPackage__Script_Bonk(), TEXT("HitBonkable"));
	}
	return Z_Registration_Info_UScriptStruct_HitBonkable.OuterSingleton;
}
template<> BONK_API UScriptStruct* StaticStruct<FHitBonkable>()
{
	return FHitBonkable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHitBonkable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Comp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Comp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Timer_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Timer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitBonkable_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BonkBonkerComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHitBonkable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHitBonkable>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitBonkable_Statics::NewProp_Comp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Components/BonkBonkerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHitBonkable_Statics::NewProp_Comp = { "Comp", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHitBonkable, Comp), Z_Construct_UClass_UBonkBonkableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitBonkable_Statics::NewProp_Comp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitBonkable_Statics::NewProp_Comp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitBonkable_Statics::NewProp_HitResult_MetaData[] = {
		{ "ModuleRelativePath", "Components/BonkBonkerComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHitBonkable_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHitBonkable, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitBonkable_Statics::NewProp_HitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitBonkable_Statics::NewProp_HitResult_MetaData)) }; // 1416937132
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitBonkable_Statics::NewProp_Timer_MetaData[] = {
		{ "ModuleRelativePath", "Components/BonkBonkerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHitBonkable_Statics::NewProp_Timer = { "Timer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHitBonkable, Timer), METADATA_PARAMS(Z_Construct_UScriptStruct_FHitBonkable_Statics::NewProp_Timer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitBonkable_Statics::NewProp_Timer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHitBonkable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitBonkable_Statics::NewProp_Comp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitBonkable_Statics::NewProp_HitResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitBonkable_Statics::NewProp_Timer,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHitBonkable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Bonk,
		nullptr,
		&NewStructOps,
		"HitBonkable",
		sizeof(FHitBonkable),
		alignof(FHitBonkable),
		Z_Construct_UScriptStruct_FHitBonkable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitBonkable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHitBonkable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitBonkable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHitBonkable()
	{
		if (!Z_Registration_Info_UScriptStruct_HitBonkable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HitBonkable.InnerSingleton, Z_Construct_UScriptStruct_FHitBonkable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HitBonkable.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_UBonkBonkerComponent_OnHit__DelegateSignature_Statics
	{
		struct BonkBonkerComponent_eventOnHit_Parms
		{
			UBonkBonkableComponent* BonkableComponent;
			FHitResult FHitResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BonkableComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BonkableComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FHitResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UBonkBonkerComponent_OnHit__DelegateSignature_Statics::NewProp_BonkableComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UBonkBonkerComponent_OnHit__DelegateSignature_Statics::NewProp_BonkableComponent = { "BonkableComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkBonkerComponent_eventOnHit_Parms, BonkableComponent), Z_Construct_UClass_UBonkBonkableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UBonkBonkerComponent_OnHit__DelegateSignature_Statics::NewProp_BonkableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBonkBonkerComponent_OnHit__DelegateSignature_Statics::NewProp_BonkableComponent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UBonkBonkerComponent_OnHit__DelegateSignature_Statics::NewProp_FHitResult = { "FHitResult", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkBonkerComponent_eventOnHit_Parms, FHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UBonkBonkerComponent_OnHit__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UBonkBonkerComponent_OnHit__DelegateSignature_Statics::NewProp_BonkableComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UBonkBonkerComponent_OnHit__DelegateSignature_Statics::NewProp_FHitResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UBonkBonkerComponent_OnHit__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BonkBonkerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UBonkBonkerComponent_OnHit__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkBonkerComponent, nullptr, "OnHit__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UBonkBonkerComponent_OnHit__DelegateSignature_Statics::BonkBonkerComponent_eventOnHit_Parms), Z_Construct_UDelegateFunction_UBonkBonkerComponent_OnHit__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBonkBonkerComponent_OnHit__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UBonkBonkerComponent_OnHit__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBonkBonkerComponent_OnHit__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UBonkBonkerComponent_OnHit__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UBonkBonkerComponent_OnHit__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UBonkBonkerComponent::execTickExecuteTracing)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TickExecuteTracing(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBonkBonkerComponent::execHitInternal)
	{
		P_GET_OBJECT(UBonkBonkableComponent,Z_Param_BonkableComponent);
		P_GET_STRUCT(FHitResult,Z_Param_HitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HitInternal(Z_Param_BonkableComponent,Z_Param_HitResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBonkBonkerComponent::execSetTraceLocations)
	{
		P_GET_STRUCT(FVector,Z_Param_NewTraceStart);
		P_GET_STRUCT(FVector,Z_Param_NewTraceEnd);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTraceLocations(Z_Param_NewTraceStart,Z_Param_NewTraceEnd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBonkBonkerComponent::execSetTraceLocationFromSceneComps)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_TraceStartScene);
		P_GET_OBJECT(USceneComponent,Z_Param_TraceEndScene);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTraceLocationFromSceneComps(Z_Param_TraceStartScene,Z_Param_TraceEndScene);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBonkBonkerComponent::execGetHoldingPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ABonkPlayerPawn**)Z_Param__Result=P_THIS->GetHoldingPlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBonkBonkerComponent::execActivateTracing)
	{
		P_GET_UBOOL(Z_Param_bActivate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateTracing(Z_Param_bActivate);
		P_NATIVE_END;
	}
	void UBonkBonkerComponent::StaticRegisterNativesUBonkBonkerComponent()
	{
		UClass* Class = UBonkBonkerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateTracing", &UBonkBonkerComponent::execActivateTracing },
			{ "GetHoldingPlayer", &UBonkBonkerComponent::execGetHoldingPlayer },
			{ "HitInternal", &UBonkBonkerComponent::execHitInternal },
			{ "SetTraceLocationFromSceneComps", &UBonkBonkerComponent::execSetTraceLocationFromSceneComps },
			{ "SetTraceLocations", &UBonkBonkerComponent::execSetTraceLocations },
			{ "TickExecuteTracing", &UBonkBonkerComponent::execTickExecuteTracing },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBonkBonkerComponent_ActivateTracing_Statics
	{
		struct BonkBonkerComponent_eventActivateTracing_Parms
		{
			bool bActivate;
		};
		static void NewProp_bActivate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bActivate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBonkBonkerComponent_ActivateTracing_Statics::NewProp_bActivate_SetBit(void* Obj)
	{
		((BonkBonkerComponent_eventActivateTracing_Parms*)Obj)->bActivate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBonkBonkerComponent_ActivateTracing_Statics::NewProp_bActivate = { "bActivate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BonkBonkerComponent_eventActivateTracing_Parms), &Z_Construct_UFunction_UBonkBonkerComponent_ActivateTracing_Statics::NewProp_bActivate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBonkBonkerComponent_ActivateTracing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkBonkerComponent_ActivateTracing_Statics::NewProp_bActivate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkBonkerComponent_ActivateTracing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BonkBonkerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBonkBonkerComponent_ActivateTracing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkBonkerComponent, nullptr, "ActivateTracing", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBonkBonkerComponent_ActivateTracing_Statics::BonkBonkerComponent_eventActivateTracing_Parms), Z_Construct_UFunction_UBonkBonkerComponent_ActivateTracing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkBonkerComponent_ActivateTracing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBonkBonkerComponent_ActivateTracing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkBonkerComponent_ActivateTracing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBonkBonkerComponent_ActivateTracing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBonkBonkerComponent_ActivateTracing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBonkBonkerComponent_GetHoldingPlayer_Statics
	{
		struct BonkBonkerComponent_eventGetHoldingPlayer_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBonkBonkerComponent_GetHoldingPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkBonkerComponent_eventGetHoldingPlayer_Parms, ReturnValue), Z_Construct_UClass_ABonkPlayerPawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBonkBonkerComponent_GetHoldingPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkBonkerComponent_GetHoldingPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkBonkerComponent_GetHoldingPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BonkBonkerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBonkBonkerComponent_GetHoldingPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkBonkerComponent, nullptr, "GetHoldingPlayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBonkBonkerComponent_GetHoldingPlayer_Statics::BonkBonkerComponent_eventGetHoldingPlayer_Parms), Z_Construct_UFunction_UBonkBonkerComponent_GetHoldingPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkBonkerComponent_GetHoldingPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBonkBonkerComponent_GetHoldingPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkBonkerComponent_GetHoldingPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBonkBonkerComponent_GetHoldingPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBonkBonkerComponent_GetHoldingPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBonkBonkerComponent_HitInternal_Statics
	{
		struct BonkBonkerComponent_eventHitInternal_Parms
		{
			UBonkBonkableComponent* BonkableComponent;
			FHitResult HitResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BonkableComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BonkableComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkBonkerComponent_HitInternal_Statics::NewProp_BonkableComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBonkBonkerComponent_HitInternal_Statics::NewProp_BonkableComponent = { "BonkableComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkBonkerComponent_eventHitInternal_Parms, BonkableComponent), Z_Construct_UClass_UBonkBonkableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBonkBonkerComponent_HitInternal_Statics::NewProp_BonkableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkBonkerComponent_HitInternal_Statics::NewProp_BonkableComponent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBonkBonkerComponent_HitInternal_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkBonkerComponent_eventHitInternal_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBonkBonkerComponent_HitInternal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkBonkerComponent_HitInternal_Statics::NewProp_BonkableComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkBonkerComponent_HitInternal_Statics::NewProp_HitResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkBonkerComponent_HitInternal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BonkBonkerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBonkBonkerComponent_HitInternal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkBonkerComponent, nullptr, "HitInternal", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBonkBonkerComponent_HitInternal_Statics::BonkBonkerComponent_eventHitInternal_Parms), Z_Construct_UFunction_UBonkBonkerComponent_HitInternal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkBonkerComponent_HitInternal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBonkBonkerComponent_HitInternal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkBonkerComponent_HitInternal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBonkBonkerComponent_HitInternal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBonkBonkerComponent_HitInternal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBonkBonkerComponent_SetTraceLocationFromSceneComps_Statics
	{
		struct BonkBonkerComponent_eventSetTraceLocationFromSceneComps_Parms
		{
			USceneComponent* TraceStartScene;
			USceneComponent* TraceEndScene;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceStartScene_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TraceStartScene;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceEndScene_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TraceEndScene;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkBonkerComponent_SetTraceLocationFromSceneComps_Statics::NewProp_TraceStartScene_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBonkBonkerComponent_SetTraceLocationFromSceneComps_Statics::NewProp_TraceStartScene = { "TraceStartScene", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkBonkerComponent_eventSetTraceLocationFromSceneComps_Parms, TraceStartScene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBonkBonkerComponent_SetTraceLocationFromSceneComps_Statics::NewProp_TraceStartScene_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkBonkerComponent_SetTraceLocationFromSceneComps_Statics::NewProp_TraceStartScene_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkBonkerComponent_SetTraceLocationFromSceneComps_Statics::NewProp_TraceEndScene_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBonkBonkerComponent_SetTraceLocationFromSceneComps_Statics::NewProp_TraceEndScene = { "TraceEndScene", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkBonkerComponent_eventSetTraceLocationFromSceneComps_Parms, TraceEndScene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBonkBonkerComponent_SetTraceLocationFromSceneComps_Statics::NewProp_TraceEndScene_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkBonkerComponent_SetTraceLocationFromSceneComps_Statics::NewProp_TraceEndScene_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBonkBonkerComponent_SetTraceLocationFromSceneComps_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkBonkerComponent_SetTraceLocationFromSceneComps_Statics::NewProp_TraceStartScene,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkBonkerComponent_SetTraceLocationFromSceneComps_Statics::NewProp_TraceEndScene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkBonkerComponent_SetTraceLocationFromSceneComps_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BonkBonkerComponent.h" },
		{ "ToolTip", "Can be called in begin play" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBonkBonkerComponent_SetTraceLocationFromSceneComps_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkBonkerComponent, nullptr, "SetTraceLocationFromSceneComps", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBonkBonkerComponent_SetTraceLocationFromSceneComps_Statics::BonkBonkerComponent_eventSetTraceLocationFromSceneComps_Parms), Z_Construct_UFunction_UBonkBonkerComponent_SetTraceLocationFromSceneComps_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkBonkerComponent_SetTraceLocationFromSceneComps_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBonkBonkerComponent_SetTraceLocationFromSceneComps_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkBonkerComponent_SetTraceLocationFromSceneComps_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBonkBonkerComponent_SetTraceLocationFromSceneComps()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBonkBonkerComponent_SetTraceLocationFromSceneComps_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBonkBonkerComponent_SetTraceLocations_Statics
	{
		struct BonkBonkerComponent_eventSetTraceLocations_Parms
		{
			FVector NewTraceStart;
			FVector NewTraceEnd;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewTraceStart;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewTraceEnd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBonkBonkerComponent_SetTraceLocations_Statics::NewProp_NewTraceStart = { "NewTraceStart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkBonkerComponent_eventSetTraceLocations_Parms, NewTraceStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBonkBonkerComponent_SetTraceLocations_Statics::NewProp_NewTraceEnd = { "NewTraceEnd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkBonkerComponent_eventSetTraceLocations_Parms, NewTraceEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBonkBonkerComponent_SetTraceLocations_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkBonkerComponent_SetTraceLocations_Statics::NewProp_NewTraceStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkBonkerComponent_SetTraceLocations_Statics::NewProp_NewTraceEnd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkBonkerComponent_SetTraceLocations_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BonkBonkerComponent.h" },
		{ "ToolTip", "Has to be called on tick" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBonkBonkerComponent_SetTraceLocations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkBonkerComponent, nullptr, "SetTraceLocations", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBonkBonkerComponent_SetTraceLocations_Statics::BonkBonkerComponent_eventSetTraceLocations_Parms), Z_Construct_UFunction_UBonkBonkerComponent_SetTraceLocations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkBonkerComponent_SetTraceLocations_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBonkBonkerComponent_SetTraceLocations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkBonkerComponent_SetTraceLocations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBonkBonkerComponent_SetTraceLocations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBonkBonkerComponent_SetTraceLocations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBonkBonkerComponent_TickExecuteTracing_Statics
	{
		struct BonkBonkerComponent_eventTickExecuteTracing_Parms
		{
			float DeltaTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBonkBonkerComponent_TickExecuteTracing_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkBonkerComponent_eventTickExecuteTracing_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBonkBonkerComponent_TickExecuteTracing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkBonkerComponent_TickExecuteTracing_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkBonkerComponent_TickExecuteTracing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BonkBonkerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBonkBonkerComponent_TickExecuteTracing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkBonkerComponent, nullptr, "TickExecuteTracing", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBonkBonkerComponent_TickExecuteTracing_Statics::BonkBonkerComponent_eventTickExecuteTracing_Parms), Z_Construct_UFunction_UBonkBonkerComponent_TickExecuteTracing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkBonkerComponent_TickExecuteTracing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBonkBonkerComponent_TickExecuteTracing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkBonkerComponent_TickExecuteTracing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBonkBonkerComponent_TickExecuteTracing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBonkBonkerComponent_TickExecuteTracing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBonkBonkerComponent);
	UClass* Z_Construct_UClass_UBonkBonkerComponent_NoRegister()
	{
		return UBonkBonkerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBonkBonkerComponent_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceStart_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceEnd_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceStartComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TraceStartComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceEndComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TraceEndComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTracingIsActive_MetaData[];
#endif
		static void NewProp_bTracingIsActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTracingIsActive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanBonk_MetaData[];
#endif
		static void NewProp_bCanBonk_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBonk;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResetTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ResetTime;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoldingPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HoldingPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnHit_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBonkBonkerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Bonk,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBonkBonkerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBonkBonkerComponent_ActivateTracing, "ActivateTracing" }, // 1057464323
		{ &Z_Construct_UFunction_UBonkBonkerComponent_GetHoldingPlayer, "GetHoldingPlayer" }, // 2404495369
		{ &Z_Construct_UFunction_UBonkBonkerComponent_HitInternal, "HitInternal" }, // 176758339
		{ &Z_Construct_UDelegateFunction_UBonkBonkerComponent_OnHit__DelegateSignature, "OnHit__DelegateSignature" }, // 1651654604
		{ &Z_Construct_UFunction_UBonkBonkerComponent_SetTraceLocationFromSceneComps, "SetTraceLocationFromSceneComps" }, // 3736600621
		{ &Z_Construct_UFunction_UBonkBonkerComponent_SetTraceLocations, "SetTraceLocations" }, // 5397162
		{ &Z_Construct_UFunction_UBonkBonkerComponent_TickExecuteTracing, "TickExecuteTracing" }, // 1385654626
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkBonkerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Bonking" },
		{ "Comment", "/**\n * Component agent mostly in weapons that triggers bonkables\n */" },
		{ "IncludePath", "Components/BonkBonkerComponent.h" },
		{ "ModuleRelativePath", "Components/BonkBonkerComponent.h" },
		{ "ToolTip", "Component agent mostly in weapons that triggers bonkables" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Stats" },
		{ "Comment", "//\n// Stats\n//\n" },
		{ "ModuleRelativePath", "Components/BonkBonkerComponent.h" },
		{ "ToolTip", "Stats" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkBonkerComponent, Name), METADATA_PARAMS(Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Components/BonkBonkerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkBonkerComponent, Damage), METADATA_PARAMS(Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_AttackSpeed_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Components/BonkBonkerComponent.h" },
		{ "ToolTip", "1 is default for sword" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_AttackSpeed = { "AttackSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkBonkerComponent, AttackSpeed), METADATA_PARAMS(Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_AttackSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_AttackSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_TraceChannel_MetaData[] = {
		{ "Category", "BonkBonkerComponent" },
		{ "Comment", "//\n// Collisions\n//\n" },
		{ "ModuleRelativePath", "Components/BonkBonkerComponent.h" },
		{ "ToolTip", "Collisions" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkBonkerComponent, TraceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_TraceChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_TraceChannel_MetaData)) }; // 2906040657
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_TraceStart_MetaData[] = {
		{ "Category", "BonkBonkerComponent" },
		{ "ModuleRelativePath", "Components/BonkBonkerComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_TraceStart = { "TraceStart", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkBonkerComponent, TraceStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_TraceStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_TraceStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_TraceEnd_MetaData[] = {
		{ "Category", "BonkBonkerComponent" },
		{ "ModuleRelativePath", "Components/BonkBonkerComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_TraceEnd = { "TraceEnd", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkBonkerComponent, TraceEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_TraceEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_TraceEnd_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_TraceStartComp_MetaData[] = {
		{ "Category", "BonkBonkerComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Components/BonkBonkerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_TraceStartComp = { "TraceStartComp", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkBonkerComponent, TraceStartComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_TraceStartComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_TraceStartComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_TraceEndComp_MetaData[] = {
		{ "Category", "BonkBonkerComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Components/BonkBonkerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_TraceEndComp = { "TraceEndComp", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkBonkerComponent, TraceEndComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_TraceEndComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_TraceEndComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_bTracingIsActive_MetaData[] = {
		{ "Category", "BonkBonkerComponent" },
		{ "ModuleRelativePath", "Components/BonkBonkerComponent.h" },
	};
#endif
	void Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_bTracingIsActive_SetBit(void* Obj)
	{
		((UBonkBonkerComponent*)Obj)->bTracingIsActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_bTracingIsActive = { "bTracingIsActive", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBonkBonkerComponent), &Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_bTracingIsActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_bTracingIsActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_bTracingIsActive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_bCanBonk_MetaData[] = {
		{ "Category", "BonkBonkerComponent" },
		{ "ModuleRelativePath", "Components/BonkBonkerComponent.h" },
	};
#endif
	void Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_bCanBonk_SetBit(void* Obj)
	{
		((UBonkBonkerComponent*)Obj)->bCanBonk = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_bCanBonk = { "bCanBonk", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBonkBonkerComponent), &Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_bCanBonk_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_bCanBonk_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_bCanBonk_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_ResetTime_MetaData[] = {
		{ "Category", "BonkBonkerComponent" },
		{ "ModuleRelativePath", "Components/BonkBonkerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_ResetTime = { "ResetTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkBonkerComponent, ResetTime), METADATA_PARAMS(Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_ResetTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_ResetTime_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "Category", "BonkBonkerComponent" },
		{ "ModuleRelativePath", "Components/BonkBonkerComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkBonkerComponent, ActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_ActorsToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_ActorsToIgnore_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_HoldingPlayer_MetaData[] = {
		{ "Category", "BonkBonkerComponent" },
		{ "ModuleRelativePath", "Components/BonkBonkerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_HoldingPlayer = { "HoldingPlayer", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkBonkerComponent, HoldingPlayer), Z_Construct_UClass_ABonkPlayerPawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_HoldingPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_HoldingPlayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_OnHit_MetaData[] = {
		{ "ModuleRelativePath", "Components/BonkBonkerComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_OnHit = { "OnHit", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkBonkerComponent, OnHit), Z_Construct_UDelegateFunction_UBonkBonkerComponent_OnHit__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_OnHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_OnHit_MetaData)) }; // 1651654604
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBonkBonkerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_AttackSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_TraceChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_TraceStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_TraceEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_TraceStartComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_TraceEndComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_bTracingIsActive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_bCanBonk,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_ResetTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_ActorsToIgnore_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_ActorsToIgnore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_HoldingPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkBonkerComponent_Statics::NewProp_OnHit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBonkBonkerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBonkBonkerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBonkBonkerComponent_Statics::ClassParams = {
		&UBonkBonkerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBonkBonkerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBonkBonkerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBonkBonkerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkBonkerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBonkBonkerComponent()
	{
		if (!Z_Registration_Info_UClass_UBonkBonkerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBonkBonkerComponent.OuterSingleton, Z_Construct_UClass_UBonkBonkerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBonkBonkerComponent.OuterSingleton;
	}
	template<> BONK_API UClass* StaticClass<UBonkBonkerComponent>()
	{
		return UBonkBonkerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBonkBonkerComponent);
	struct Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkBonkerComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkBonkerComponent_h_Statics::ScriptStructInfo[] = {
		{ FHitBonkable::StaticStruct, Z_Construct_UScriptStruct_FHitBonkable_Statics::NewStructOps, TEXT("HitBonkable"), &Z_Registration_Info_UScriptStruct_HitBonkable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHitBonkable), 3051145127U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkBonkerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBonkBonkerComponent, UBonkBonkerComponent::StaticClass, TEXT("UBonkBonkerComponent"), &Z_Registration_Info_UClass_UBonkBonkerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBonkBonkerComponent), 1185641166U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkBonkerComponent_h_34824206(TEXT("/Script/Bonk"),
		Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkBonkerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkBonkerComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkBonkerComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkBonkerComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

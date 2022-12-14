// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bonk/Components/BonkItemInteractComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBonkItemInteractComponent() {}
// Cross Module References
	BONK_API UFunction* Z_Construct_UDelegateFunction_UBonkItemInteractComponent_OnAction__DelegateSignature();
	BONK_API UClass* Z_Construct_UClass_UBonkItemInteractComponent();
	BONK_API UClass* Z_Construct_UClass_UBonkItemInteractableComponent_NoRegister();
	BONK_API UFunction* Z_Construct_UDelegateFunction_UBonkItemInteractComponent_OnPickup__DelegateSignature();
	BONK_API UFunction* Z_Construct_UDelegateFunction_UBonkItemInteractComponent_OnDrop__DelegateSignature();
	BONK_API UFunction* Z_Construct_UDelegateFunction_UBonkItemInteractComponent_onStartThrow__DelegateSignature();
	BONK_API UClass* Z_Construct_UClass_UBonkItemInteractComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Bonk();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETraceTypeQuery();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UBonkItemInteractComponent_OnAction__DelegateSignature_Statics
	{
		struct BonkItemInteractComponent_eventOnAction_Parms
		{
			UBonkItemInteractableComponent* Interactable;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Interactable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UBonkItemInteractComponent_OnAction__DelegateSignature_Statics::NewProp_Interactable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UBonkItemInteractComponent_OnAction__DelegateSignature_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkItemInteractComponent_eventOnAction_Parms, Interactable), Z_Construct_UClass_UBonkItemInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UBonkItemInteractComponent_OnAction__DelegateSignature_Statics::NewProp_Interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBonkItemInteractComponent_OnAction__DelegateSignature_Statics::NewProp_Interactable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UBonkItemInteractComponent_OnAction__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UBonkItemInteractComponent_OnAction__DelegateSignature_Statics::NewProp_Interactable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UBonkItemInteractComponent_OnAction__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// EVENTS\n" },
		{ "ModuleRelativePath", "Components/BonkItemInteractComponent.h" },
		{ "ToolTip", "EVENTS" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UBonkItemInteractComponent_OnAction__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkItemInteractComponent, nullptr, "OnAction__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UBonkItemInteractComponent_OnAction__DelegateSignature_Statics::BonkItemInteractComponent_eventOnAction_Parms), Z_Construct_UDelegateFunction_UBonkItemInteractComponent_OnAction__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBonkItemInteractComponent_OnAction__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UBonkItemInteractComponent_OnAction__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBonkItemInteractComponent_OnAction__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UBonkItemInteractComponent_OnAction__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UBonkItemInteractComponent_OnAction__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UBonkItemInteractComponent_OnPickup__DelegateSignature_Statics
	{
		struct BonkItemInteractComponent_eventOnPickup_Parms
		{
			UBonkItemInteractableComponent* Interactable;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Interactable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UBonkItemInteractComponent_OnPickup__DelegateSignature_Statics::NewProp_Interactable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UBonkItemInteractComponent_OnPickup__DelegateSignature_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkItemInteractComponent_eventOnPickup_Parms, Interactable), Z_Construct_UClass_UBonkItemInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UBonkItemInteractComponent_OnPickup__DelegateSignature_Statics::NewProp_Interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBonkItemInteractComponent_OnPickup__DelegateSignature_Statics::NewProp_Interactable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UBonkItemInteractComponent_OnPickup__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UBonkItemInteractComponent_OnPickup__DelegateSignature_Statics::NewProp_Interactable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UBonkItemInteractComponent_OnPickup__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BonkItemInteractComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UBonkItemInteractComponent_OnPickup__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkItemInteractComponent, nullptr, "OnPickup__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UBonkItemInteractComponent_OnPickup__DelegateSignature_Statics::BonkItemInteractComponent_eventOnPickup_Parms), Z_Construct_UDelegateFunction_UBonkItemInteractComponent_OnPickup__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBonkItemInteractComponent_OnPickup__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UBonkItemInteractComponent_OnPickup__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBonkItemInteractComponent_OnPickup__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UBonkItemInteractComponent_OnPickup__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UBonkItemInteractComponent_OnPickup__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UBonkItemInteractComponent_OnDrop__DelegateSignature_Statics
	{
		struct BonkItemInteractComponent_eventOnDrop_Parms
		{
			UBonkItemInteractableComponent* Interactable;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Interactable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UBonkItemInteractComponent_OnDrop__DelegateSignature_Statics::NewProp_Interactable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UBonkItemInteractComponent_OnDrop__DelegateSignature_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkItemInteractComponent_eventOnDrop_Parms, Interactable), Z_Construct_UClass_UBonkItemInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UBonkItemInteractComponent_OnDrop__DelegateSignature_Statics::NewProp_Interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBonkItemInteractComponent_OnDrop__DelegateSignature_Statics::NewProp_Interactable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UBonkItemInteractComponent_OnDrop__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UBonkItemInteractComponent_OnDrop__DelegateSignature_Statics::NewProp_Interactable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UBonkItemInteractComponent_OnDrop__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BonkItemInteractComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UBonkItemInteractComponent_OnDrop__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkItemInteractComponent, nullptr, "OnDrop__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UBonkItemInteractComponent_OnDrop__DelegateSignature_Statics::BonkItemInteractComponent_eventOnDrop_Parms), Z_Construct_UDelegateFunction_UBonkItemInteractComponent_OnDrop__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBonkItemInteractComponent_OnDrop__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UBonkItemInteractComponent_OnDrop__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBonkItemInteractComponent_OnDrop__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UBonkItemInteractComponent_OnDrop__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UBonkItemInteractComponent_OnDrop__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UBonkItemInteractComponent_onStartThrow__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UBonkItemInteractComponent_onStartThrow__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BonkItemInteractComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UBonkItemInteractComponent_onStartThrow__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkItemInteractComponent, nullptr, "onStartThrow__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UBonkItemInteractComponent_onStartThrow__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBonkItemInteractComponent_onStartThrow__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UBonkItemInteractComponent_onStartThrow__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UBonkItemInteractComponent_onStartThrow__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UBonkItemInteractComponent::execThrowTimer)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ThrowTimer(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBonkItemInteractComponent::execResetThrow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetThrow();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBonkItemInteractComponent::execThrow)
	{
		P_GET_STRUCT(FVector,Z_Param_Direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Throw(Z_Param_Direction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBonkItemInteractComponent::execStartThrow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartThrow();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBonkItemInteractComponent::execTryDrop)
	{
		P_GET_STRUCT(FVector,Z_Param_Force);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryDrop(Z_Param_Force);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBonkItemInteractComponent::execTryPickup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryPickup();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBonkItemInteractComponent::execTryAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBonkItemInteractComponent::execIsBlocked)
	{
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsBlocked(Z_Param_Location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBonkItemInteractComponent::execMaxScoreValidInteractable)
	{
		P_GET_TARRAY(FHitResult,Z_Param_HitResults);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBonkItemInteractableComponent**)Z_Param__Result=P_THIS->MaxScoreValidInteractable(Z_Param_HitResults);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBonkItemInteractComponent::execSetSkeletalComponent)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_SkeletalMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSkeletalComponent(Z_Param_SkeletalMesh);
		P_NATIVE_END;
	}
	void UBonkItemInteractComponent::StaticRegisterNativesUBonkItemInteractComponent()
	{
		UClass* Class = UBonkItemInteractComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsBlocked", &UBonkItemInteractComponent::execIsBlocked },
			{ "MaxScoreValidInteractable", &UBonkItemInteractComponent::execMaxScoreValidInteractable },
			{ "ResetThrow", &UBonkItemInteractComponent::execResetThrow },
			{ "SetSkeletalComponent", &UBonkItemInteractComponent::execSetSkeletalComponent },
			{ "StartThrow", &UBonkItemInteractComponent::execStartThrow },
			{ "Throw", &UBonkItemInteractComponent::execThrow },
			{ "ThrowTimer", &UBonkItemInteractComponent::execThrowTimer },
			{ "TryAction", &UBonkItemInteractComponent::execTryAction },
			{ "TryDrop", &UBonkItemInteractComponent::execTryDrop },
			{ "TryPickup", &UBonkItemInteractComponent::execTryPickup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBonkItemInteractComponent_IsBlocked_Statics
	{
		struct BonkItemInteractComponent_eventIsBlocked_Parms
		{
			FVector Location;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkItemInteractComponent_IsBlocked_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBonkItemInteractComponent_IsBlocked_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkItemInteractComponent_eventIsBlocked_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UBonkItemInteractComponent_IsBlocked_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkItemInteractComponent_IsBlocked_Statics::NewProp_Location_MetaData)) };
	void Z_Construct_UFunction_UBonkItemInteractComponent_IsBlocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BonkItemInteractComponent_eventIsBlocked_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBonkItemInteractComponent_IsBlocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BonkItemInteractComponent_eventIsBlocked_Parms), &Z_Construct_UFunction_UBonkItemInteractComponent_IsBlocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBonkItemInteractComponent_IsBlocked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkItemInteractComponent_IsBlocked_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkItemInteractComponent_IsBlocked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkItemInteractComponent_IsBlocked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BonkItemInteractComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBonkItemInteractComponent_IsBlocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkItemInteractComponent, nullptr, "IsBlocked", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBonkItemInteractComponent_IsBlocked_Statics::BonkItemInteractComponent_eventIsBlocked_Parms), Z_Construct_UFunction_UBonkItemInteractComponent_IsBlocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkItemInteractComponent_IsBlocked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBonkItemInteractComponent_IsBlocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkItemInteractComponent_IsBlocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBonkItemInteractComponent_IsBlocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBonkItemInteractComponent_IsBlocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBonkItemInteractComponent_MaxScoreValidInteractable_Statics
	{
		struct BonkItemInteractComponent_eventMaxScoreValidInteractable_Parms
		{
			TArray<FHitResult> HitResults;
			UBonkItemInteractableComponent* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitResults_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HitResults;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBonkItemInteractComponent_MaxScoreValidInteractable_Statics::NewProp_HitResults_Inner = { "HitResults", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1416937132
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBonkItemInteractComponent_MaxScoreValidInteractable_Statics::NewProp_HitResults = { "HitResults", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkItemInteractComponent_eventMaxScoreValidInteractable_Parms, HitResults), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1416937132
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkItemInteractComponent_MaxScoreValidInteractable_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBonkItemInteractComponent_MaxScoreValidInteractable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkItemInteractComponent_eventMaxScoreValidInteractable_Parms, ReturnValue), Z_Construct_UClass_UBonkItemInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBonkItemInteractComponent_MaxScoreValidInteractable_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkItemInteractComponent_MaxScoreValidInteractable_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBonkItemInteractComponent_MaxScoreValidInteractable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkItemInteractComponent_MaxScoreValidInteractable_Statics::NewProp_HitResults_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkItemInteractComponent_MaxScoreValidInteractable_Statics::NewProp_HitResults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkItemInteractComponent_MaxScoreValidInteractable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkItemInteractComponent_MaxScoreValidInteractable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BonkItemInteractComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBonkItemInteractComponent_MaxScoreValidInteractable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkItemInteractComponent, nullptr, "MaxScoreValidInteractable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBonkItemInteractComponent_MaxScoreValidInteractable_Statics::BonkItemInteractComponent_eventMaxScoreValidInteractable_Parms), Z_Construct_UFunction_UBonkItemInteractComponent_MaxScoreValidInteractable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkItemInteractComponent_MaxScoreValidInteractable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBonkItemInteractComponent_MaxScoreValidInteractable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkItemInteractComponent_MaxScoreValidInteractable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBonkItemInteractComponent_MaxScoreValidInteractable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBonkItemInteractComponent_MaxScoreValidInteractable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBonkItemInteractComponent_ResetThrow_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkItemInteractComponent_ResetThrow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BonkItemInteractComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBonkItemInteractComponent_ResetThrow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkItemInteractComponent, nullptr, "ResetThrow", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBonkItemInteractComponent_ResetThrow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkItemInteractComponent_ResetThrow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBonkItemInteractComponent_ResetThrow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBonkItemInteractComponent_ResetThrow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBonkItemInteractComponent_SetSkeletalComponent_Statics
	{
		struct BonkItemInteractComponent_eventSetSkeletalComponent_Parms
		{
			USceneComponent* SkeletalMesh;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkItemInteractComponent_SetSkeletalComponent_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBonkItemInteractComponent_SetSkeletalComponent_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkItemInteractComponent_eventSetSkeletalComponent_Parms, SkeletalMesh), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBonkItemInteractComponent_SetSkeletalComponent_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkItemInteractComponent_SetSkeletalComponent_Statics::NewProp_SkeletalMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBonkItemInteractComponent_SetSkeletalComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkItemInteractComponent_SetSkeletalComponent_Statics::NewProp_SkeletalMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkItemInteractComponent_SetSkeletalComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BonkItemInteractComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBonkItemInteractComponent_SetSkeletalComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkItemInteractComponent, nullptr, "SetSkeletalComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBonkItemInteractComponent_SetSkeletalComponent_Statics::BonkItemInteractComponent_eventSetSkeletalComponent_Parms), Z_Construct_UFunction_UBonkItemInteractComponent_SetSkeletalComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkItemInteractComponent_SetSkeletalComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBonkItemInteractComponent_SetSkeletalComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkItemInteractComponent_SetSkeletalComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBonkItemInteractComponent_SetSkeletalComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBonkItemInteractComponent_SetSkeletalComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBonkItemInteractComponent_StartThrow_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkItemInteractComponent_StartThrow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BonkItemInteractComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBonkItemInteractComponent_StartThrow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkItemInteractComponent, nullptr, "StartThrow", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBonkItemInteractComponent_StartThrow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkItemInteractComponent_StartThrow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBonkItemInteractComponent_StartThrow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBonkItemInteractComponent_StartThrow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBonkItemInteractComponent_Throw_Statics
	{
		struct BonkItemInteractComponent_eventThrow_Parms
		{
			FVector Direction;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBonkItemInteractComponent_Throw_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkItemInteractComponent_eventThrow_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBonkItemInteractComponent_Throw_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkItemInteractComponent_Throw_Statics::NewProp_Direction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkItemInteractComponent_Throw_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BonkItemInteractComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBonkItemInteractComponent_Throw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkItemInteractComponent, nullptr, "Throw", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBonkItemInteractComponent_Throw_Statics::BonkItemInteractComponent_eventThrow_Parms), Z_Construct_UFunction_UBonkItemInteractComponent_Throw_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkItemInteractComponent_Throw_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBonkItemInteractComponent_Throw_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkItemInteractComponent_Throw_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBonkItemInteractComponent_Throw()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBonkItemInteractComponent_Throw_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBonkItemInteractComponent_ThrowTimer_Statics
	{
		struct BonkItemInteractComponent_eventThrowTimer_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBonkItemInteractComponent_ThrowTimer_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkItemInteractComponent_eventThrowTimer_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBonkItemInteractComponent_ThrowTimer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkItemInteractComponent_ThrowTimer_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkItemInteractComponent_ThrowTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BonkItemInteractComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBonkItemInteractComponent_ThrowTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkItemInteractComponent, nullptr, "ThrowTimer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBonkItemInteractComponent_ThrowTimer_Statics::BonkItemInteractComponent_eventThrowTimer_Parms), Z_Construct_UFunction_UBonkItemInteractComponent_ThrowTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkItemInteractComponent_ThrowTimer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBonkItemInteractComponent_ThrowTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkItemInteractComponent_ThrowTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBonkItemInteractComponent_ThrowTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBonkItemInteractComponent_ThrowTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBonkItemInteractComponent_TryAction_Statics
	{
		struct BonkItemInteractComponent_eventTryAction_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBonkItemInteractComponent_TryAction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BonkItemInteractComponent_eventTryAction_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBonkItemInteractComponent_TryAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BonkItemInteractComponent_eventTryAction_Parms), &Z_Construct_UFunction_UBonkItemInteractComponent_TryAction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBonkItemInteractComponent_TryAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkItemInteractComponent_TryAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkItemInteractComponent_TryAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BonkItemInteractComponent.h" },
		{ "ToolTip", "TryPickup will also be called if interactable is dynamic" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBonkItemInteractComponent_TryAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkItemInteractComponent, nullptr, "TryAction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBonkItemInteractComponent_TryAction_Statics::BonkItemInteractComponent_eventTryAction_Parms), Z_Construct_UFunction_UBonkItemInteractComponent_TryAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkItemInteractComponent_TryAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBonkItemInteractComponent_TryAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkItemInteractComponent_TryAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBonkItemInteractComponent_TryAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBonkItemInteractComponent_TryAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBonkItemInteractComponent_TryDrop_Statics
	{
		struct BonkItemInteractComponent_eventTryDrop_Parms
		{
			FVector Force;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Force;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBonkItemInteractComponent_TryDrop_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkItemInteractComponent_eventTryDrop_Parms, Force), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBonkItemInteractComponent_TryDrop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BonkItemInteractComponent_eventTryDrop_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBonkItemInteractComponent_TryDrop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BonkItemInteractComponent_eventTryDrop_Parms), &Z_Construct_UFunction_UBonkItemInteractComponent_TryDrop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBonkItemInteractComponent_TryDrop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkItemInteractComponent_TryDrop_Statics::NewProp_Force,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkItemInteractComponent_TryDrop_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkItemInteractComponent_TryDrop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BonkItemInteractComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBonkItemInteractComponent_TryDrop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkItemInteractComponent, nullptr, "TryDrop", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBonkItemInteractComponent_TryDrop_Statics::BonkItemInteractComponent_eventTryDrop_Parms), Z_Construct_UFunction_UBonkItemInteractComponent_TryDrop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkItemInteractComponent_TryDrop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBonkItemInteractComponent_TryDrop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkItemInteractComponent_TryDrop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBonkItemInteractComponent_TryDrop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBonkItemInteractComponent_TryDrop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBonkItemInteractComponent_TryPickup_Statics
	{
		struct BonkItemInteractComponent_eventTryPickup_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBonkItemInteractComponent_TryPickup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BonkItemInteractComponent_eventTryPickup_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBonkItemInteractComponent_TryPickup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BonkItemInteractComponent_eventTryPickup_Parms), &Z_Construct_UFunction_UBonkItemInteractComponent_TryPickup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBonkItemInteractComponent_TryPickup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkItemInteractComponent_TryPickup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkItemInteractComponent_TryPickup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BonkItemInteractComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBonkItemInteractComponent_TryPickup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkItemInteractComponent, nullptr, "TryPickup", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBonkItemInteractComponent_TryPickup_Statics::BonkItemInteractComponent_eventTryPickup_Parms), Z_Construct_UFunction_UBonkItemInteractComponent_TryPickup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkItemInteractComponent_TryPickup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBonkItemInteractComponent_TryPickup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkItemInteractComponent_TryPickup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBonkItemInteractComponent_TryPickup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBonkItemInteractComponent_TryPickup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBonkItemInteractComponent);
	UClass* Z_Construct_UClass_UBonkItemInteractComponent_NoRegister()
	{
		return UBonkItemInteractComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBonkItemInteractComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebug_MetaData[];
#endif
		static void NewProp_bDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalComponentAttach_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalComponentAttach;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedInteractable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedInteractable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentInteractable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentInteractable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DotWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DotWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DotProductLimits_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DotProductLimits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClosenessThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClosenessThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxInteractSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxInteractSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TwoHandedGrabOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TwoHandedGrabOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TwoHandedGrabAttachLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TwoHandedGrabAttachLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractableChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_InteractableChannel;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlockObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BlockObjects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Range;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThrowBaseStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ThrowBaseStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsThrowing_MetaData[];
#endif
		static void NewProp_bIsThrowing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsThrowing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThrowMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ThrowMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThrowMultiplierIncrementSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ThrowMultiplierIncrementSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThrowHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ThrowHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereCollider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereCollider;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsHolding_MetaData[];
#endif
		static void NewProp_bIsHolding_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHolding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAction_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPickup_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPickup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDrop_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDrop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnStartThrow_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStartThrow;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBonkItemInteractComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Bonk,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBonkItemInteractComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBonkItemInteractComponent_IsBlocked, "IsBlocked" }, // 687668284
		{ &Z_Construct_UFunction_UBonkItemInteractComponent_MaxScoreValidInteractable, "MaxScoreValidInteractable" }, // 3082551976
		{ &Z_Construct_UDelegateFunction_UBonkItemInteractComponent_OnAction__DelegateSignature, "OnAction__DelegateSignature" }, // 1113148872
		{ &Z_Construct_UDelegateFunction_UBonkItemInteractComponent_OnDrop__DelegateSignature, "OnDrop__DelegateSignature" }, // 2990155002
		{ &Z_Construct_UDelegateFunction_UBonkItemInteractComponent_OnPickup__DelegateSignature, "OnPickup__DelegateSignature" }, // 2240452206
		{ &Z_Construct_UDelegateFunction_UBonkItemInteractComponent_onStartThrow__DelegateSignature, "onStartThrow__DelegateSignature" }, // 2920023627
		{ &Z_Construct_UFunction_UBonkItemInteractComponent_ResetThrow, "ResetThrow" }, // 1602626962
		{ &Z_Construct_UFunction_UBonkItemInteractComponent_SetSkeletalComponent, "SetSkeletalComponent" }, // 3310703029
		{ &Z_Construct_UFunction_UBonkItemInteractComponent_StartThrow, "StartThrow" }, // 595153604
		{ &Z_Construct_UFunction_UBonkItemInteractComponent_Throw, "Throw" }, // 228473783
		{ &Z_Construct_UFunction_UBonkItemInteractComponent_ThrowTimer, "ThrowTimer" }, // 2840361903
		{ &Z_Construct_UFunction_UBonkItemInteractComponent_TryAction, "TryAction" }, // 1866157976
		{ &Z_Construct_UFunction_UBonkItemInteractComponent_TryDrop, "TryDrop" }, // 2923677817
		{ &Z_Construct_UFunction_UBonkItemInteractComponent_TryPickup, "TryPickup" }, // 1058717951
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkItemInteractComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Interaction" },
		{ "IncludePath", "Components/BonkItemInteractComponent.h" },
		{ "ModuleRelativePath", "Components/BonkItemInteractComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_bDebug_MetaData[] = {
		{ "Category", "BonkItemInteractComponent" },
		{ "ModuleRelativePath", "Components/BonkItemInteractComponent.h" },
	};
#endif
	void Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_bDebug_SetBit(void* Obj)
	{
		((UBonkItemInteractComponent*)Obj)->bDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_bDebug = { "bDebug", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBonkItemInteractComponent), &Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_bDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_bDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_bDebug_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_SkeletalComponentAttach_MetaData[] = {
		{ "Category", "BonkItemInteractComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Components/BonkItemInteractComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_SkeletalComponentAttach = { "SkeletalComponentAttach", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkItemInteractComponent, SkeletalComponentAttach), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_SkeletalComponentAttach_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_SkeletalComponentAttach_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_SelectedInteractable_MetaData[] = {
		{ "Category", "BonkItemInteractComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Components/BonkItemInteractComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_SelectedInteractable = { "SelectedInteractable", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkItemInteractComponent, SelectedInteractable), Z_Construct_UClass_UBonkItemInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_SelectedInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_SelectedInteractable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_CurrentInteractable_MetaData[] = {
		{ "Category", "BonkItemInteractComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Components/BonkItemInteractComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_CurrentInteractable = { "CurrentInteractable", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkItemInteractComponent, CurrentInteractable), Z_Construct_UClass_UBonkItemInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_CurrentInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_CurrentInteractable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_DotWeight_MetaData[] = {
		{ "Category", "BonkItemInteractComponent" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Components/BonkItemInteractComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_DotWeight = { "DotWeight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkItemInteractComponent, DotWeight), METADATA_PARAMS(Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_DotWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_DotWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_DotProductLimits_MetaData[] = {
		{ "Category", "BonkItemInteractComponent" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Components/BonkItemInteractComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_DotProductLimits = { "DotProductLimits", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkItemInteractComponent, DotProductLimits), METADATA_PARAMS(Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_DotProductLimits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_DotProductLimits_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_ClosenessThreshold_MetaData[] = {
		{ "Category", "BonkItemInteractComponent" },
		{ "ModuleRelativePath", "Components/BonkItemInteractComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_ClosenessThreshold = { "ClosenessThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkItemInteractComponent, ClosenessThreshold), METADATA_PARAMS(Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_ClosenessThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_ClosenessThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_MaxInteractSpeed_MetaData[] = {
		{ "Category", "BonkItemInteractComponent" },
		{ "ModuleRelativePath", "Components/BonkItemInteractComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_MaxInteractSpeed = { "MaxInteractSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkItemInteractComponent, MaxInteractSpeed), METADATA_PARAMS(Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_MaxInteractSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_MaxInteractSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_TwoHandedGrabOffset_MetaData[] = {
		{ "Category", "BonkItemInteractComponent" },
		{ "ModuleRelativePath", "Components/BonkItemInteractComponent.h" },
		{ "ToolTip", "Location offset from player when grabbing non swingable object" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_TwoHandedGrabOffset = { "TwoHandedGrabOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkItemInteractComponent, TwoHandedGrabOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_TwoHandedGrabOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_TwoHandedGrabOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_TwoHandedGrabAttachLocation_MetaData[] = {
		{ "Category", "BonkItemInteractComponent" },
		{ "ModuleRelativePath", "Components/BonkItemInteractComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_TwoHandedGrabAttachLocation = { "TwoHandedGrabAttachLocation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkItemInteractComponent, TwoHandedGrabAttachLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_TwoHandedGrabAttachLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_TwoHandedGrabAttachLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_InteractableChannel_MetaData[] = {
		{ "Category", "BonkItemInteractComponent" },
		{ "ModuleRelativePath", "Components/BonkItemInteractComponent.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_InteractableChannel = { "InteractableChannel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkItemInteractComponent, InteractableChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_InteractableChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_InteractableChannel_MetaData)) }; // 2906040657
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_BlockObjects_Inner = { "BlockObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) }; // 3629342158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_BlockObjects_MetaData[] = {
		{ "Category", "BonkItemInteractComponent" },
		{ "ModuleRelativePath", "Components/BonkItemInteractComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_BlockObjects = { "BlockObjects", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkItemInteractComponent, BlockObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_BlockObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_BlockObjects_MetaData)) }; // 3629342158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_Range_MetaData[] = {
		{ "Category", "BonkItemInteractComponent" },
		{ "ModuleRelativePath", "Components/BonkItemInteractComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkItemInteractComponent, Range), METADATA_PARAMS(Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_Range_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_Range_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_ThrowBaseStrength_MetaData[] = {
		{ "Category", "BonkItemInteractComponent" },
		{ "ModuleRelativePath", "Components/BonkItemInteractComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_ThrowBaseStrength = { "ThrowBaseStrength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkItemInteractComponent, ThrowBaseStrength), METADATA_PARAMS(Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_ThrowBaseStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_ThrowBaseStrength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_bIsThrowing_MetaData[] = {
		{ "Category", "BonkItemInteractComponent" },
		{ "ModuleRelativePath", "Components/BonkItemInteractComponent.h" },
	};
#endif
	void Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_bIsThrowing_SetBit(void* Obj)
	{
		((UBonkItemInteractComponent*)Obj)->bIsThrowing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_bIsThrowing = { "bIsThrowing", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBonkItemInteractComponent), &Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_bIsThrowing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_bIsThrowing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_bIsThrowing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_ThrowMultiplier_MetaData[] = {
		{ "Category", "BonkItemInteractComponent" },
		{ "ModuleRelativePath", "Components/BonkItemInteractComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_ThrowMultiplier = { "ThrowMultiplier", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkItemInteractComponent, ThrowMultiplier), METADATA_PARAMS(Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_ThrowMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_ThrowMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_ThrowMultiplierIncrementSpeed_MetaData[] = {
		{ "Category", "BonkItemInteractComponent" },
		{ "ModuleRelativePath", "Components/BonkItemInteractComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_ThrowMultiplierIncrementSpeed = { "ThrowMultiplierIncrementSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkItemInteractComponent, ThrowMultiplierIncrementSpeed), METADATA_PARAMS(Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_ThrowMultiplierIncrementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_ThrowMultiplierIncrementSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_ThrowHeight_MetaData[] = {
		{ "Category", "BonkItemInteractComponent" },
		{ "ModuleRelativePath", "Components/BonkItemInteractComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_ThrowHeight = { "ThrowHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkItemInteractComponent, ThrowHeight), METADATA_PARAMS(Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_ThrowHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_ThrowHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_SphereCollider_MetaData[] = {
		{ "Category", "BonkItemInteractComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Components/BonkItemInteractComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_SphereCollider = { "SphereCollider", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkItemInteractComponent, SphereCollider), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_SphereCollider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_SphereCollider_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_bIsHolding_MetaData[] = {
		{ "Category", "BonkItemInteractComponent" },
		{ "ModuleRelativePath", "Components/BonkItemInteractComponent.h" },
	};
#endif
	void Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_bIsHolding_SetBit(void* Obj)
	{
		((UBonkItemInteractComponent*)Obj)->bIsHolding = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_bIsHolding = { "bIsHolding", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBonkItemInteractComponent), &Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_bIsHolding_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_bIsHolding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_bIsHolding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_OnAction_MetaData[] = {
		{ "ModuleRelativePath", "Components/BonkItemInteractComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_OnAction = { "OnAction", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkItemInteractComponent, OnAction), Z_Construct_UDelegateFunction_UBonkItemInteractComponent_OnAction__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_OnAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_OnAction_MetaData)) }; // 1113148872
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_OnPickup_MetaData[] = {
		{ "ModuleRelativePath", "Components/BonkItemInteractComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_OnPickup = { "OnPickup", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkItemInteractComponent, OnPickup), Z_Construct_UDelegateFunction_UBonkItemInteractComponent_OnPickup__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_OnPickup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_OnPickup_MetaData)) }; // 2240452206
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_OnDrop_MetaData[] = {
		{ "ModuleRelativePath", "Components/BonkItemInteractComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_OnDrop = { "OnDrop", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkItemInteractComponent, OnDrop), Z_Construct_UDelegateFunction_UBonkItemInteractComponent_OnPickup__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_OnDrop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_OnDrop_MetaData)) }; // 2240452206
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_OnStartThrow_MetaData[] = {
		{ "ModuleRelativePath", "Components/BonkItemInteractComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_OnStartThrow = { "OnStartThrow", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkItemInteractComponent, OnStartThrow), Z_Construct_UDelegateFunction_UBonkItemInteractComponent_onStartThrow__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_OnStartThrow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_OnStartThrow_MetaData)) }; // 2920023627
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBonkItemInteractComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_bDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_SkeletalComponentAttach,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_SelectedInteractable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_CurrentInteractable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_DotWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_DotProductLimits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_ClosenessThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_MaxInteractSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_TwoHandedGrabOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_TwoHandedGrabAttachLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_InteractableChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_BlockObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_BlockObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_Range,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_ThrowBaseStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_bIsThrowing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_ThrowMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_ThrowMultiplierIncrementSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_ThrowHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_SphereCollider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_bIsHolding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_OnAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_OnPickup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_OnDrop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkItemInteractComponent_Statics::NewProp_OnStartThrow,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBonkItemInteractComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBonkItemInteractComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBonkItemInteractComponent_Statics::ClassParams = {
		&UBonkItemInteractComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBonkItemInteractComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBonkItemInteractComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBonkItemInteractComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkItemInteractComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBonkItemInteractComponent()
	{
		if (!Z_Registration_Info_UClass_UBonkItemInteractComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBonkItemInteractComponent.OuterSingleton, Z_Construct_UClass_UBonkItemInteractComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBonkItemInteractComponent.OuterSingleton;
	}
	template<> BONK_API UClass* StaticClass<UBonkItemInteractComponent>()
	{
		return UBonkItemInteractComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBonkItemInteractComponent);
	struct Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkItemInteractComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkItemInteractComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBonkItemInteractComponent, UBonkItemInteractComponent::StaticClass, TEXT("UBonkItemInteractComponent"), &Z_Registration_Info_UClass_UBonkItemInteractComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBonkItemInteractComponent), 1694722224U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkItemInteractComponent_h_3802914407(TEXT("/Script/Bonk"),
		Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkItemInteractComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkItemInteractComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

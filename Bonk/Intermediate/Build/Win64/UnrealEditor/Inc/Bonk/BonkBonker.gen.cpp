// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bonk/Actors/BonkBonker.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBonkBonker() {}
// Cross Module References
	BONK_API UClass* Z_Construct_UClass_ABonkBonker_NoRegister();
	BONK_API UClass* Z_Construct_UClass_ABonkBonker();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Bonk();
	BONK_API UClass* Z_Construct_UClass_UBonkItemInteractComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	BONK_API UClass* Z_Construct_UClass_UBonkBonkerComponent_NoRegister();
	BONK_API UClass* Z_Construct_UClass_UBonkItemInteractableComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	BONK_API UClass* Z_Construct_UClass_ABonkPlayerPawn_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABonkBonker::execGetMeshComp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const UStaticMeshComponent**)Z_Param__Result=P_THIS->GetMeshComp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABonkBonker::execGetColliderComp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStaticMeshComponent**)Z_Param__Result=P_THIS->GetColliderComp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABonkBonker::execDrop_Callback)
	{
		P_GET_OBJECT(UBonkItemInteractComponent,Z_Param_InteractComp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Drop_Callback(Z_Param_InteractComp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABonkBonker::execPickup_Callback)
	{
		P_GET_OBJECT(UBonkItemInteractComponent,Z_Param_InteractComp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Pickup_Callback(Z_Param_InteractComp);
		P_NATIVE_END;
	}
	void ABonkBonker::StaticRegisterNativesABonkBonker()
	{
		UClass* Class = ABonkBonker::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Drop_Callback", &ABonkBonker::execDrop_Callback },
			{ "GetColliderComp", &ABonkBonker::execGetColliderComp },
			{ "GetMeshComp", &ABonkBonker::execGetMeshComp },
			{ "Pickup_Callback", &ABonkBonker::execPickup_Callback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABonkBonker_Drop_Callback_Statics
	{
		struct BonkBonker_eventDrop_Callback_Parms
		{
			UBonkItemInteractComponent* InteractComp;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABonkBonker_Drop_Callback_Statics::NewProp_InteractComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABonkBonker_Drop_Callback_Statics::NewProp_InteractComp = { "InteractComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkBonker_eventDrop_Callback_Parms, InteractComp), Z_Construct_UClass_UBonkItemInteractComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABonkBonker_Drop_Callback_Statics::NewProp_InteractComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABonkBonker_Drop_Callback_Statics::NewProp_InteractComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABonkBonker_Drop_Callback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABonkBonker_Drop_Callback_Statics::NewProp_InteractComp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABonkBonker_Drop_Callback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/BonkBonker.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABonkBonker_Drop_Callback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABonkBonker, nullptr, "Drop_Callback", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABonkBonker_Drop_Callback_Statics::BonkBonker_eventDrop_Callback_Parms), Z_Construct_UFunction_ABonkBonker_Drop_Callback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABonkBonker_Drop_Callback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABonkBonker_Drop_Callback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABonkBonker_Drop_Callback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABonkBonker_Drop_Callback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABonkBonker_Drop_Callback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABonkBonker_GetColliderComp_Statics
	{
		struct BonkBonker_eventGetColliderComp_Parms
		{
			UStaticMeshComponent* ReturnValue;
		};
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABonkBonker_GetColliderComp_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABonkBonker_GetColliderComp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkBonker_eventGetColliderComp_Parms, ReturnValue), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABonkBonker_GetColliderComp_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABonkBonker_GetColliderComp_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABonkBonker_GetColliderComp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABonkBonker_GetColliderComp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABonkBonker_GetColliderComp_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Getters\n" },
		{ "ModuleRelativePath", "Actors/BonkBonker.h" },
		{ "ToolTip", "Getters" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABonkBonker_GetColliderComp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABonkBonker, nullptr, "GetColliderComp", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABonkBonker_GetColliderComp_Statics::BonkBonker_eventGetColliderComp_Parms), Z_Construct_UFunction_ABonkBonker_GetColliderComp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABonkBonker_GetColliderComp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABonkBonker_GetColliderComp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABonkBonker_GetColliderComp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABonkBonker_GetColliderComp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABonkBonker_GetColliderComp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABonkBonker_GetMeshComp_Statics
	{
		struct BonkBonker_eventGetMeshComp_Parms
		{
			const UStaticMeshComponent* ReturnValue;
		};
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABonkBonker_GetMeshComp_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABonkBonker_GetMeshComp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x001000000008058a, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkBonker_eventGetMeshComp_Parms, ReturnValue), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABonkBonker_GetMeshComp_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABonkBonker_GetMeshComp_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABonkBonker_GetMeshComp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABonkBonker_GetMeshComp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABonkBonker_GetMeshComp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/BonkBonker.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABonkBonker_GetMeshComp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABonkBonker, nullptr, "GetMeshComp", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABonkBonker_GetMeshComp_Statics::BonkBonker_eventGetMeshComp_Parms), Z_Construct_UFunction_ABonkBonker_GetMeshComp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABonkBonker_GetMeshComp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABonkBonker_GetMeshComp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABonkBonker_GetMeshComp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABonkBonker_GetMeshComp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABonkBonker_GetMeshComp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABonkBonker_Pickup_Callback_Statics
	{
		struct BonkBonker_eventPickup_Callback_Parms
		{
			UBonkItemInteractComponent* InteractComp;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABonkBonker_Pickup_Callback_Statics::NewProp_InteractComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABonkBonker_Pickup_Callback_Statics::NewProp_InteractComp = { "InteractComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkBonker_eventPickup_Callback_Parms, InteractComp), Z_Construct_UClass_UBonkItemInteractComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABonkBonker_Pickup_Callback_Statics::NewProp_InteractComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABonkBonker_Pickup_Callback_Statics::NewProp_InteractComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABonkBonker_Pickup_Callback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABonkBonker_Pickup_Callback_Statics::NewProp_InteractComp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABonkBonker_Pickup_Callback_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Callbacks\n" },
		{ "ModuleRelativePath", "Actors/BonkBonker.h" },
		{ "ToolTip", "Callbacks" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABonkBonker_Pickup_Callback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABonkBonker, nullptr, "Pickup_Callback", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABonkBonker_Pickup_Callback_Statics::BonkBonker_eventPickup_Callback_Parms), Z_Construct_UFunction_ABonkBonker_Pickup_Callback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABonkBonker_Pickup_Callback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABonkBonker_Pickup_Callback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABonkBonker_Pickup_Callback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABonkBonker_Pickup_Callback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABonkBonker_Pickup_Callback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABonkBonker);
	UClass* Z_Construct_UClass_ABonkBonker_NoRegister()
	{
		return ABonkBonker::StaticClass();
	}
	struct Z_Construct_UClass_ABonkBonker_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BonkerComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BonkerComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractableComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractableComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshColliderComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshColliderComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceStart_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TraceStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceEnd_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TraceEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KnockbackMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_KnockbackMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedTraceThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedTraceThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SizeInterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseTraceRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseTraceRadius;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialInstances_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialInstances_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialInstances;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseColors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseColors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BaseColors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MatParameter_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MatParameter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoldingPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HoldingPlayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABonkBonker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Bonk,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABonkBonker_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABonkBonker_Drop_Callback, "Drop_Callback" }, // 857541530
		{ &Z_Construct_UFunction_ABonkBonker_GetColliderComp, "GetColliderComp" }, // 2890128451
		{ &Z_Construct_UFunction_ABonkBonker_GetMeshComp, "GetMeshComp" }, // 722119835
		{ &Z_Construct_UFunction_ABonkBonker_Pickup_Callback, "Pickup_Callback" }, // 3712468871
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkBonker_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base actor for all dynamic weapons in the game i.e can be picked up and used to attack\n */" },
		{ "IncludePath", "Actors/BonkBonker.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Actors/BonkBonker.h" },
		{ "ToolTip", "Base actor for all dynamic weapons in the game i.e can be picked up and used to attack" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkBonker_Statics::NewProp_BonkerComponent_MetaData[] = {
		{ "Category", "BonkBonker" },
		{ "Comment", "//\n// COMPONENTS\n//\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/BonkBonker.h" },
		{ "ToolTip", "COMPONENTS" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABonkBonker_Statics::NewProp_BonkerComponent = { "BonkerComponent", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonkBonker, BonkerComponent), Z_Construct_UClass_UBonkBonkerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABonkBonker_Statics::NewProp_BonkerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkBonker_Statics::NewProp_BonkerComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkBonker_Statics::NewProp_InteractableComponent_MetaData[] = {
		{ "Category", "BonkBonker" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/BonkBonker.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABonkBonker_Statics::NewProp_InteractableComponent = { "InteractableComponent", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonkBonker, InteractableComponent), Z_Construct_UClass_UBonkItemInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABonkBonker_Statics::NewProp_InteractableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkBonker_Statics::NewProp_InteractableComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkBonker_Statics::NewProp_MeshColliderComp_MetaData[] = {
		{ "Category", "BonkBonker" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/BonkBonker.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABonkBonker_Statics::NewProp_MeshColliderComp = { "MeshColliderComp", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonkBonker, MeshColliderComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABonkBonker_Statics::NewProp_MeshColliderComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkBonker_Statics::NewProp_MeshColliderComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkBonker_Statics::NewProp_MeshComp_MetaData[] = {
		{ "Category", "BonkBonker" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/BonkBonker.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABonkBonker_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonkBonker, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABonkBonker_Statics::NewProp_MeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkBonker_Statics::NewProp_MeshComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkBonker_Statics::NewProp_TraceStart_MetaData[] = {
		{ "Category", "BonkBonker" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/BonkBonker.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABonkBonker_Statics::NewProp_TraceStart = { "TraceStart", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonkBonker, TraceStart), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABonkBonker_Statics::NewProp_TraceStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkBonker_Statics::NewProp_TraceStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkBonker_Statics::NewProp_TraceEnd_MetaData[] = {
		{ "Category", "BonkBonker" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/BonkBonker.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABonkBonker_Statics::NewProp_TraceEnd = { "TraceEnd", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonkBonker, TraceEnd), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABonkBonker_Statics::NewProp_TraceEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkBonker_Statics::NewProp_TraceEnd_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkBonker_Statics::NewProp_KnockbackMultiplier_MetaData[] = {
		{ "Category", "BonkBonker" },
		{ "ModuleRelativePath", "Actors/BonkBonker.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABonkBonker_Statics::NewProp_KnockbackMultiplier = { "KnockbackMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonkBonker, KnockbackMultiplier), METADATA_PARAMS(Z_Construct_UClass_ABonkBonker_Statics::NewProp_KnockbackMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkBonker_Statics::NewProp_KnockbackMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkBonker_Statics::NewProp_SpeedTraceThreshold_MetaData[] = {
		{ "Category", "BonkBonker" },
		{ "ModuleRelativePath", "Actors/BonkBonker.h" },
		{ "ToolTip", "Speed to start tracing at" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABonkBonker_Statics::NewProp_SpeedTraceThreshold = { "SpeedTraceThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonkBonker, SpeedTraceThreshold), METADATA_PARAMS(Z_Construct_UClass_ABonkBonker_Statics::NewProp_SpeedTraceThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkBonker_Statics::NewProp_SpeedTraceThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkBonker_Statics::NewProp_BaseSize_MetaData[] = {
		{ "Category", "BonkBonker" },
		{ "Comment", "//\n// Weapon size\n//\n" },
		{ "ModuleRelativePath", "Actors/BonkBonker.h" },
		{ "ToolTip", "Weapon size" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABonkBonker_Statics::NewProp_BaseSize = { "BaseSize", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonkBonker, BaseSize), METADATA_PARAMS(Z_Construct_UClass_ABonkBonker_Statics::NewProp_BaseSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkBonker_Statics::NewProp_BaseSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkBonker_Statics::NewProp_TargetSize_MetaData[] = {
		{ "Category", "BonkBonker" },
		{ "ModuleRelativePath", "Actors/BonkBonker.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABonkBonker_Statics::NewProp_TargetSize = { "TargetSize", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonkBonker, TargetSize), METADATA_PARAMS(Z_Construct_UClass_ABonkBonker_Statics::NewProp_TargetSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkBonker_Statics::NewProp_TargetSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkBonker_Statics::NewProp_CurrentSize_MetaData[] = {
		{ "Category", "BonkBonker" },
		{ "ModuleRelativePath", "Actors/BonkBonker.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABonkBonker_Statics::NewProp_CurrentSize = { "CurrentSize", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonkBonker, CurrentSize), METADATA_PARAMS(Z_Construct_UClass_ABonkBonker_Statics::NewProp_CurrentSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkBonker_Statics::NewProp_CurrentSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkBonker_Statics::NewProp_SizeInterpSpeed_MetaData[] = {
		{ "Category", "BonkBonker" },
		{ "ModuleRelativePath", "Actors/BonkBonker.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABonkBonker_Statics::NewProp_SizeInterpSpeed = { "SizeInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonkBonker, SizeInterpSpeed), METADATA_PARAMS(Z_Construct_UClass_ABonkBonker_Statics::NewProp_SizeInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkBonker_Statics::NewProp_SizeInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkBonker_Statics::NewProp_BaseTraceRadius_MetaData[] = {
		{ "Category", "BonkBonker" },
		{ "ModuleRelativePath", "Actors/BonkBonker.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABonkBonker_Statics::NewProp_BaseTraceRadius = { "BaseTraceRadius", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonkBonker, BaseTraceRadius), METADATA_PARAMS(Z_Construct_UClass_ABonkBonker_Statics::NewProp_BaseTraceRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkBonker_Statics::NewProp_BaseTraceRadius_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABonkBonker_Statics::NewProp_MaterialInstances_Inner = { "MaterialInstances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkBonker_Statics::NewProp_MaterialInstances_MetaData[] = {
		{ "Category", "BonkBonker" },
		{ "Comment", "//\n// Materials\n//\n" },
		{ "ModuleRelativePath", "Actors/BonkBonker.h" },
		{ "ToolTip", "Materials" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABonkBonker_Statics::NewProp_MaterialInstances = { "MaterialInstances", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonkBonker, MaterialInstances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABonkBonker_Statics::NewProp_MaterialInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkBonker_Statics::NewProp_MaterialInstances_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABonkBonker_Statics::NewProp_BaseColors_Inner = { "BaseColors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkBonker_Statics::NewProp_BaseColors_MetaData[] = {
		{ "Category", "BonkBonker" },
		{ "ModuleRelativePath", "Actors/BonkBonker.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABonkBonker_Statics::NewProp_BaseColors = { "BaseColors", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonkBonker, BaseColors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABonkBonker_Statics::NewProp_BaseColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkBonker_Statics::NewProp_BaseColors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkBonker_Statics::NewProp_MatParameter_MetaData[] = {
		{ "Category", "BonkBonker" },
		{ "ModuleRelativePath", "Actors/BonkBonker.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ABonkBonker_Statics::NewProp_MatParameter = { "MatParameter", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonkBonker, MatParameter), METADATA_PARAMS(Z_Construct_UClass_ABonkBonker_Statics::NewProp_MatParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkBonker_Statics::NewProp_MatParameter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkBonker_Statics::NewProp_HoldingPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Actors/BonkBonker.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABonkBonker_Statics::NewProp_HoldingPlayer = { "HoldingPlayer", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonkBonker, HoldingPlayer), Z_Construct_UClass_ABonkPlayerPawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABonkBonker_Statics::NewProp_HoldingPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkBonker_Statics::NewProp_HoldingPlayer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABonkBonker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkBonker_Statics::NewProp_BonkerComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkBonker_Statics::NewProp_InteractableComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkBonker_Statics::NewProp_MeshColliderComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkBonker_Statics::NewProp_MeshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkBonker_Statics::NewProp_TraceStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkBonker_Statics::NewProp_TraceEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkBonker_Statics::NewProp_KnockbackMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkBonker_Statics::NewProp_SpeedTraceThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkBonker_Statics::NewProp_BaseSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkBonker_Statics::NewProp_TargetSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkBonker_Statics::NewProp_CurrentSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkBonker_Statics::NewProp_SizeInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkBonker_Statics::NewProp_BaseTraceRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkBonker_Statics::NewProp_MaterialInstances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkBonker_Statics::NewProp_MaterialInstances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkBonker_Statics::NewProp_BaseColors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkBonker_Statics::NewProp_BaseColors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkBonker_Statics::NewProp_MatParameter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkBonker_Statics::NewProp_HoldingPlayer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABonkBonker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABonkBonker>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABonkBonker_Statics::ClassParams = {
		&ABonkBonker::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABonkBonker_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABonkBonker_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABonkBonker_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkBonker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABonkBonker()
	{
		if (!Z_Registration_Info_UClass_ABonkBonker.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABonkBonker.OuterSingleton, Z_Construct_UClass_ABonkBonker_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABonkBonker.OuterSingleton;
	}
	template<> BONK_API UClass* StaticClass<ABonkBonker>()
	{
		return ABonkBonker::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABonkBonker);
	struct Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Actors_BonkBonker_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Actors_BonkBonker_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABonkBonker, ABonkBonker::StaticClass, TEXT("ABonkBonker"), &Z_Registration_Info_UClass_ABonkBonker, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABonkBonker), 1052296832U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Actors_BonkBonker_h_2349004154(TEXT("/Script/Bonk"),
		Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Actors_BonkBonker_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Actors_BonkBonker_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bonk/Actors/BonkCameraActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBonkCameraActor() {}
// Cross Module References
	BONK_API UEnum* Z_Construct_UEnum_Bonk_CameraState();
	UPackage* Z_Construct_UPackage__Script_Bonk();
	BONK_API UClass* Z_Construct_UClass_ABonkCameraActor_NoRegister();
	BONK_API UClass* Z_Construct_UClass_ABonkCameraActor();
	ENGINE_API UClass* Z_Construct_UClass_ACameraActor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_CameraState;
	static UEnum* CameraState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_CameraState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_CameraState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Bonk_CameraState, Z_Construct_UPackage__Script_Bonk(), TEXT("CameraState"));
		}
		return Z_Registration_Info_UEnum_CameraState.OuterSingleton;
	}
	template<> BONK_API UEnum* StaticEnum<CameraState>()
	{
		return CameraState_StaticEnum();
	}
	struct Z_Construct_UEnum_Bonk_CameraState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Bonk_CameraState_Statics::Enumerators[] = {
		{ "Tracking", (int64)Tracking },
		{ "Stopped", (int64)Stopped },
		{ "ZoomingOut", (int64)ZoomingOut },
		{ "ZoomingIn", (int64)ZoomingIn },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Bonk_CameraState_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Actors/BonkCameraActor.h" },
		{ "Stopped.Comment", "/**\n * \n */" },
		{ "Stopped.DisplayName", "Stopped" },
		{ "Stopped.Name", "Stopped" },
		{ "Tracking.Comment", "/**\n * \n */" },
		{ "Tracking.DisplayName", "Tracking" },
		{ "Tracking.Name", "Tracking" },
		{ "ZoomingIn.Comment", "/**\n * \n */" },
		{ "ZoomingIn.DisplayName", "ZoomingIn" },
		{ "ZoomingIn.Name", "ZoomingIn" },
		{ "ZoomingOut.Comment", "/**\n * \n */" },
		{ "ZoomingOut.DisplayName", "ZoomingOut" },
		{ "ZoomingOut.Name", "ZoomingOut" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Bonk_CameraState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Bonk,
		nullptr,
		"CameraState",
		"CameraState",
		Z_Construct_UEnum_Bonk_CameraState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Bonk_CameraState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Bonk_CameraState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Bonk_CameraState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Bonk_CameraState()
	{
		if (!Z_Registration_Info_UEnum_CameraState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_CameraState.InnerSingleton, Z_Construct_UEnum_Bonk_CameraState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_CameraState.InnerSingleton;
	}
	DEFINE_FUNCTION(ABonkCameraActor::execStartZoomoutSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartZoomoutSequence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABonkCameraActor::execClearFollowTargets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearFollowTargets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABonkCameraActor::execGetLocationMaxBounds)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetLocationMaxBounds(Z_Param_Out_Location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABonkCameraActor::execGetLocationMinBounds)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetLocationMinBounds(Z_Param_Out_Location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABonkCameraActor::execSetFollowTargets)
	{
		P_GET_TARRAY(AActor*,Z_Param_Actors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFollowTargets(Z_Param_Actors);
		P_NATIVE_END;
	}
	void ABonkCameraActor::StaticRegisterNativesABonkCameraActor()
	{
		UClass* Class = ABonkCameraActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearFollowTargets", &ABonkCameraActor::execClearFollowTargets },
			{ "GetLocationMaxBounds", &ABonkCameraActor::execGetLocationMaxBounds },
			{ "GetLocationMinBounds", &ABonkCameraActor::execGetLocationMinBounds },
			{ "SetFollowTargets", &ABonkCameraActor::execSetFollowTargets },
			{ "StartZoomoutSequence", &ABonkCameraActor::execStartZoomoutSequence },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABonkCameraActor_ClearFollowTargets_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABonkCameraActor_ClearFollowTargets_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/BonkCameraActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABonkCameraActor_ClearFollowTargets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABonkCameraActor, nullptr, "ClearFollowTargets", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABonkCameraActor_ClearFollowTargets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABonkCameraActor_ClearFollowTargets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABonkCameraActor_ClearFollowTargets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABonkCameraActor_ClearFollowTargets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABonkCameraActor_GetLocationMaxBounds_Statics
	{
		struct BonkCameraActor_eventGetLocationMaxBounds_Parms
		{
			FVector Location;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABonkCameraActor_GetLocationMaxBounds_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABonkCameraActor_GetLocationMaxBounds_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkCameraActor_eventGetLocationMaxBounds_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ABonkCameraActor_GetLocationMaxBounds_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABonkCameraActor_GetLocationMaxBounds_Statics::NewProp_Location_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABonkCameraActor_GetLocationMaxBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkCameraActor_eventGetLocationMaxBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABonkCameraActor_GetLocationMaxBounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABonkCameraActor_GetLocationMaxBounds_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABonkCameraActor_GetLocationMaxBounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABonkCameraActor_GetLocationMaxBounds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/BonkCameraActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABonkCameraActor_GetLocationMaxBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABonkCameraActor, nullptr, "GetLocationMaxBounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABonkCameraActor_GetLocationMaxBounds_Statics::BonkCameraActor_eventGetLocationMaxBounds_Parms), Z_Construct_UFunction_ABonkCameraActor_GetLocationMaxBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABonkCameraActor_GetLocationMaxBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABonkCameraActor_GetLocationMaxBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABonkCameraActor_GetLocationMaxBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABonkCameraActor_GetLocationMaxBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABonkCameraActor_GetLocationMaxBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABonkCameraActor_GetLocationMinBounds_Statics
	{
		struct BonkCameraActor_eventGetLocationMinBounds_Parms
		{
			FVector Location;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABonkCameraActor_GetLocationMinBounds_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABonkCameraActor_GetLocationMinBounds_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkCameraActor_eventGetLocationMinBounds_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ABonkCameraActor_GetLocationMinBounds_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABonkCameraActor_GetLocationMinBounds_Statics::NewProp_Location_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABonkCameraActor_GetLocationMinBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkCameraActor_eventGetLocationMinBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABonkCameraActor_GetLocationMinBounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABonkCameraActor_GetLocationMinBounds_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABonkCameraActor_GetLocationMinBounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABonkCameraActor_GetLocationMinBounds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/BonkCameraActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABonkCameraActor_GetLocationMinBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABonkCameraActor, nullptr, "GetLocationMinBounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABonkCameraActor_GetLocationMinBounds_Statics::BonkCameraActor_eventGetLocationMinBounds_Parms), Z_Construct_UFunction_ABonkCameraActor_GetLocationMinBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABonkCameraActor_GetLocationMinBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABonkCameraActor_GetLocationMinBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABonkCameraActor_GetLocationMinBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABonkCameraActor_GetLocationMinBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABonkCameraActor_GetLocationMinBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABonkCameraActor_SetFollowTargets_Statics
	{
		struct BonkCameraActor_eventSetFollowTargets_Parms
		{
			TArray<AActor*> Actors;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABonkCameraActor_SetFollowTargets_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABonkCameraActor_SetFollowTargets_Statics::NewProp_Actors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ABonkCameraActor_SetFollowTargets_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkCameraActor_eventSetFollowTargets_Parms, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ABonkCameraActor_SetFollowTargets_Statics::NewProp_Actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABonkCameraActor_SetFollowTargets_Statics::NewProp_Actors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABonkCameraActor_SetFollowTargets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABonkCameraActor_SetFollowTargets_Statics::NewProp_Actors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABonkCameraActor_SetFollowTargets_Statics::NewProp_Actors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABonkCameraActor_SetFollowTargets_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/BonkCameraActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABonkCameraActor_SetFollowTargets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABonkCameraActor, nullptr, "SetFollowTargets", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABonkCameraActor_SetFollowTargets_Statics::BonkCameraActor_eventSetFollowTargets_Parms), Z_Construct_UFunction_ABonkCameraActor_SetFollowTargets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABonkCameraActor_SetFollowTargets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABonkCameraActor_SetFollowTargets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABonkCameraActor_SetFollowTargets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABonkCameraActor_SetFollowTargets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABonkCameraActor_SetFollowTargets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABonkCameraActor_StartZoomoutSequence_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABonkCameraActor_StartZoomoutSequence_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Bonk Camera Options" },
		{ "ModuleRelativePath", "Actors/BonkCameraActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABonkCameraActor_StartZoomoutSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABonkCameraActor, nullptr, "StartZoomoutSequence", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABonkCameraActor_StartZoomoutSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABonkCameraActor_StartZoomoutSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABonkCameraActor_StartZoomoutSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABonkCameraActor_StartZoomoutSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABonkCameraActor);
	UClass* Z_Construct_UClass_ABonkCameraActor_NoRegister()
	{
		return ABonkCameraActor::StaticClass();
	}
	struct Z_Construct_UClass_ABonkCameraActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToFollow_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToFollow_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToFollow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraMinBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraMinBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraMaxBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraMaxBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoomInDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomInDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoomOutDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomOutDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackingDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TrackingDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanZoomIn_MetaData[];
#endif
		static void NewProp_bCanZoomIn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanZoomIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmoothSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SmoothSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoomInOutDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomInOutDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StopDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StopDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitialLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABonkCameraActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACameraActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Bonk,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABonkCameraActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABonkCameraActor_ClearFollowTargets, "ClearFollowTargets" }, // 2643875117
		{ &Z_Construct_UFunction_ABonkCameraActor_GetLocationMaxBounds, "GetLocationMaxBounds" }, // 3459733894
		{ &Z_Construct_UFunction_ABonkCameraActor_GetLocationMinBounds, "GetLocationMinBounds" }, // 3351950739
		{ &Z_Construct_UFunction_ABonkCameraActor_SetFollowTargets, "SetFollowTargets" }, // 94488424
		{ &Z_Construct_UFunction_ABonkCameraActor_StartZoomoutSequence, "StartZoomoutSequence" }, // 2818059604
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkCameraActor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Rendering" },
		{ "IncludePath", "Actors/BonkCameraActor.h" },
		{ "ModuleRelativePath", "Actors/BonkCameraActor.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABonkCameraActor_Statics::NewProp_ActorsToFollow_Inner = { "ActorsToFollow", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkCameraActor_Statics::NewProp_ActorsToFollow_MetaData[] = {
		{ "ModuleRelativePath", "Actors/BonkCameraActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABonkCameraActor_Statics::NewProp_ActorsToFollow = { "ActorsToFollow", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonkCameraActor, ActorsToFollow), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABonkCameraActor_Statics::NewProp_ActorsToFollow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkCameraActor_Statics::NewProp_ActorsToFollow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkCameraActor_Statics::NewProp_CameraMinBounds_MetaData[] = {
		{ "Category", "Bonk Camera|Tracking Options" },
		{ "ModuleRelativePath", "Actors/BonkCameraActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABonkCameraActor_Statics::NewProp_CameraMinBounds = { "CameraMinBounds", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonkCameraActor, CameraMinBounds), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABonkCameraActor_Statics::NewProp_CameraMinBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkCameraActor_Statics::NewProp_CameraMinBounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkCameraActor_Statics::NewProp_CameraMaxBounds_MetaData[] = {
		{ "Category", "Bonk Camera|Tracking Options" },
		{ "ModuleRelativePath", "Actors/BonkCameraActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABonkCameraActor_Statics::NewProp_CameraMaxBounds = { "CameraMaxBounds", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonkCameraActor, CameraMaxBounds), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABonkCameraActor_Statics::NewProp_CameraMaxBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkCameraActor_Statics::NewProp_CameraMaxBounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkCameraActor_Statics::NewProp_ZoomInDistance_MetaData[] = {
		{ "Category", "Bonk Camera|Tracking Options" },
		{ "Comment", "/*The distance away (from average player location) when zoomed in*/" },
		{ "ModuleRelativePath", "Actors/BonkCameraActor.h" },
		{ "ToolTip", "The distance away (from average player location) when zoomed in" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABonkCameraActor_Statics::NewProp_ZoomInDistance = { "ZoomInDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonkCameraActor, ZoomInDistance), METADATA_PARAMS(Z_Construct_UClass_ABonkCameraActor_Statics::NewProp_ZoomInDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkCameraActor_Statics::NewProp_ZoomInDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkCameraActor_Statics::NewProp_ZoomOutDistance_MetaData[] = {
		{ "Category", "Bonk Camera|Tracking Options" },
		{ "Comment", "/*The distance away (from average player location) when zoomed out*/" },
		{ "ModuleRelativePath", "Actors/BonkCameraActor.h" },
		{ "ToolTip", "The distance away (from average player location) when zoomed out" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABonkCameraActor_Statics::NewProp_ZoomOutDistance = { "ZoomOutDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonkCameraActor, ZoomOutDistance), METADATA_PARAMS(Z_Construct_UClass_ABonkCameraActor_Statics::NewProp_ZoomOutDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkCameraActor_Statics::NewProp_ZoomOutDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkCameraActor_Statics::NewProp_TrackingDistance_MetaData[] = {
		{ "Category", "Bonk Camera|Tracking Options" },
		{ "Comment", "/*The distance over which the zooming happens (based on player position away from average)*/" },
		{ "ModuleRelativePath", "Actors/BonkCameraActor.h" },
		{ "ToolTip", "The distance over which the zooming happens (based on player position away from average)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABonkCameraActor_Statics::NewProp_TrackingDistance = { "TrackingDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonkCameraActor, TrackingDistance), METADATA_PARAMS(Z_Construct_UClass_ABonkCameraActor_Statics::NewProp_TrackingDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkCameraActor_Statics::NewProp_TrackingDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkCameraActor_Statics::NewProp_bCanZoomIn_MetaData[] = {
		{ "Category", "Bonk Camera|Tracking Options" },
		{ "ModuleRelativePath", "Actors/BonkCameraActor.h" },
	};
#endif
	void Z_Construct_UClass_ABonkCameraActor_Statics::NewProp_bCanZoomIn_SetBit(void* Obj)
	{
		((ABonkCameraActor*)Obj)->bCanZoomIn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABonkCameraActor_Statics::NewProp_bCanZoomIn = { "bCanZoomIn", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABonkCameraActor), &Z_Construct_UClass_ABonkCameraActor_Statics::NewProp_bCanZoomIn_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABonkCameraActor_Statics::NewProp_bCanZoomIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkCameraActor_Statics::NewProp_bCanZoomIn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkCameraActor_Statics::NewProp_SmoothSpeed_MetaData[] = {
		{ "Category", "Bonk Camera|Tracking Options" },
		{ "ModuleRelativePath", "Actors/BonkCameraActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABonkCameraActor_Statics::NewProp_SmoothSpeed = { "SmoothSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonkCameraActor, SmoothSpeed), METADATA_PARAMS(Z_Construct_UClass_ABonkCameraActor_Statics::NewProp_SmoothSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkCameraActor_Statics::NewProp_SmoothSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkCameraActor_Statics::NewProp_ZoomInOutDuration_MetaData[] = {
		{ "Category", "Bonk Camera|Weapon Event Options" },
		{ "ModuleRelativePath", "Actors/BonkCameraActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABonkCameraActor_Statics::NewProp_ZoomInOutDuration = { "ZoomInOutDuration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonkCameraActor, ZoomInOutDuration), METADATA_PARAMS(Z_Construct_UClass_ABonkCameraActor_Statics::NewProp_ZoomInOutDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkCameraActor_Statics::NewProp_ZoomInOutDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkCameraActor_Statics::NewProp_StopDuration_MetaData[] = {
		{ "Category", "Bonk Camera|Weapon Event Options" },
		{ "ModuleRelativePath", "Actors/BonkCameraActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABonkCameraActor_Statics::NewProp_StopDuration = { "StopDuration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonkCameraActor, StopDuration), METADATA_PARAMS(Z_Construct_UClass_ABonkCameraActor_Statics::NewProp_StopDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkCameraActor_Statics::NewProp_StopDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkCameraActor_Statics::NewProp_InitialLocation_MetaData[] = {
		{ "Category", "BonkCameraActor" },
		{ "ModuleRelativePath", "Actors/BonkCameraActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABonkCameraActor_Statics::NewProp_InitialLocation = { "InitialLocation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonkCameraActor, InitialLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABonkCameraActor_Statics::NewProp_InitialLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkCameraActor_Statics::NewProp_InitialLocation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABonkCameraActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkCameraActor_Statics::NewProp_ActorsToFollow_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkCameraActor_Statics::NewProp_ActorsToFollow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkCameraActor_Statics::NewProp_CameraMinBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkCameraActor_Statics::NewProp_CameraMaxBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkCameraActor_Statics::NewProp_ZoomInDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkCameraActor_Statics::NewProp_ZoomOutDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkCameraActor_Statics::NewProp_TrackingDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkCameraActor_Statics::NewProp_bCanZoomIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkCameraActor_Statics::NewProp_SmoothSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkCameraActor_Statics::NewProp_ZoomInOutDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkCameraActor_Statics::NewProp_StopDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkCameraActor_Statics::NewProp_InitialLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABonkCameraActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABonkCameraActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABonkCameraActor_Statics::ClassParams = {
		&ABonkCameraActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABonkCameraActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABonkCameraActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABonkCameraActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkCameraActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABonkCameraActor()
	{
		if (!Z_Registration_Info_UClass_ABonkCameraActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABonkCameraActor.OuterSingleton, Z_Construct_UClass_ABonkCameraActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABonkCameraActor.OuterSingleton;
	}
	template<> BONK_API UClass* StaticClass<ABonkCameraActor>()
	{
		return ABonkCameraActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABonkCameraActor);
	struct Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Actors_BonkCameraActor_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Actors_BonkCameraActor_h_Statics::EnumInfo[] = {
		{ CameraState_StaticEnum, TEXT("CameraState"), &Z_Registration_Info_UEnum_CameraState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2636061544U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Actors_BonkCameraActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABonkCameraActor, ABonkCameraActor::StaticClass, TEXT("ABonkCameraActor"), &Z_Registration_Info_UClass_ABonkCameraActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABonkCameraActor), 57689913U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Actors_BonkCameraActor_h_86322004(TEXT("/Script/Bonk"),
		Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Actors_BonkCameraActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Actors_BonkCameraActor_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Actors_BonkCameraActor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Actors_BonkCameraActor_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

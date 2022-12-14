// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bonk/Components/BonkItemInteractableComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBonkItemInteractableComponent() {}
// Cross Module References
	BONK_API UEnum* Z_Construct_UEnum_Bonk_InteractableType();
	UPackage* Z_Construct_UPackage__Script_Bonk();
	BONK_API UFunction* Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnSelect__DelegateSignature();
	BONK_API UClass* Z_Construct_UClass_UBonkItemInteractableComponent();
	BONK_API UFunction* Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnDeselect__DelegateSignature();
	BONK_API UFunction* Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnPickupResponse__DelegateSignature();
	BONK_API UClass* Z_Construct_UClass_UBonkItemInteractComponent_NoRegister();
	BONK_API UFunction* Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnDropResponse__DelegateSignature();
	BONK_API UFunction* Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnActionResponse__DelegateSignature();
	BONK_API UClass* Z_Construct_UClass_UBonkItemInteractableComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_InteractableType;
	static UEnum* InteractableType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_InteractableType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_InteractableType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Bonk_InteractableType, Z_Construct_UPackage__Script_Bonk(), TEXT("InteractableType"));
		}
		return Z_Registration_Info_UEnum_InteractableType.OuterSingleton;
	}
	template<> BONK_API UEnum* StaticEnum<InteractableType>()
	{
		return InteractableType_StaticEnum();
	}
	struct Z_Construct_UEnum_Bonk_InteractableType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Bonk_InteractableType_Statics::Enumerators[] = {
		{ "Static", (int64)Static },
		{ "Dynamic", (int64)Dynamic },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Bonk_InteractableType_Statics::Enum_MetaDataParams[] = {
		{ "Dynamic.Name", "Dynamic" },
		{ "ModuleRelativePath", "Components/BonkItemInteractableComponent.h" },
		{ "Static.Name", "Static" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Bonk_InteractableType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Bonk,
		nullptr,
		"InteractableType",
		"InteractableType",
		Z_Construct_UEnum_Bonk_InteractableType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Bonk_InteractableType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Bonk_InteractableType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Bonk_InteractableType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Bonk_InteractableType()
	{
		if (!Z_Registration_Info_UEnum_InteractableType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_InteractableType.InnerSingleton, Z_Construct_UEnum_Bonk_InteractableType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_InteractableType.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnSelect__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnSelect__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BonkItemInteractableComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnSelect__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkItemInteractableComponent, nullptr, "OnSelect__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnSelect__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnSelect__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnSelect__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnSelect__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnDeselect__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnDeselect__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BonkItemInteractableComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnDeselect__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkItemInteractableComponent, nullptr, "OnDeselect__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnDeselect__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnDeselect__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnDeselect__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnDeselect__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnPickupResponse__DelegateSignature_Statics
	{
		struct BonkItemInteractableComponent_eventOnPickupResponse_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnPickupResponse__DelegateSignature_Statics::NewProp_InteractComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnPickupResponse__DelegateSignature_Statics::NewProp_InteractComp = { "InteractComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkItemInteractableComponent_eventOnPickupResponse_Parms, InteractComp), Z_Construct_UClass_UBonkItemInteractComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnPickupResponse__DelegateSignature_Statics::NewProp_InteractComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnPickupResponse__DelegateSignature_Statics::NewProp_InteractComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnPickupResponse__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnPickupResponse__DelegateSignature_Statics::NewProp_InteractComp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnPickupResponse__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BonkItemInteractableComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnPickupResponse__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkItemInteractableComponent, nullptr, "OnPickupResponse__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnPickupResponse__DelegateSignature_Statics::BonkItemInteractableComponent_eventOnPickupResponse_Parms), Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnPickupResponse__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnPickupResponse__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnPickupResponse__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnPickupResponse__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnPickupResponse__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnPickupResponse__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnDropResponse__DelegateSignature_Statics
	{
		struct BonkItemInteractableComponent_eventOnDropResponse_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnDropResponse__DelegateSignature_Statics::NewProp_InteractComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnDropResponse__DelegateSignature_Statics::NewProp_InteractComp = { "InteractComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkItemInteractableComponent_eventOnDropResponse_Parms, InteractComp), Z_Construct_UClass_UBonkItemInteractComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnDropResponse__DelegateSignature_Statics::NewProp_InteractComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnDropResponse__DelegateSignature_Statics::NewProp_InteractComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnDropResponse__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnDropResponse__DelegateSignature_Statics::NewProp_InteractComp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnDropResponse__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BonkItemInteractableComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnDropResponse__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkItemInteractableComponent, nullptr, "OnDropResponse__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnDropResponse__DelegateSignature_Statics::BonkItemInteractableComponent_eventOnDropResponse_Parms), Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnDropResponse__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnDropResponse__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnDropResponse__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnDropResponse__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnDropResponse__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnDropResponse__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnActionResponse__DelegateSignature_Statics
	{
		struct BonkItemInteractableComponent_eventOnActionResponse_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnActionResponse__DelegateSignature_Statics::NewProp_InteractComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnActionResponse__DelegateSignature_Statics::NewProp_InteractComp = { "InteractComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkItemInteractableComponent_eventOnActionResponse_Parms, InteractComp), Z_Construct_UClass_UBonkItemInteractComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnActionResponse__DelegateSignature_Statics::NewProp_InteractComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnActionResponse__DelegateSignature_Statics::NewProp_InteractComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnActionResponse__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnActionResponse__DelegateSignature_Statics::NewProp_InteractComp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnActionResponse__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BonkItemInteractableComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnActionResponse__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkItemInteractableComponent, nullptr, "OnActionResponse__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnActionResponse__DelegateSignature_Statics::BonkItemInteractableComponent_eventOnActionResponse_Parms), Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnActionResponse__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnActionResponse__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnActionResponse__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnActionResponse__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnActionResponse__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnActionResponse__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UBonkItemInteractableComponent::execDrop)
	{
		P_GET_OBJECT(UBonkItemInteractComponent,Z_Param_InteractComp);
		P_GET_STRUCT(FVector,Z_Param_Force);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Drop(Z_Param_InteractComp,Z_Param_Force);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBonkItemInteractableComponent::execPickup)
	{
		P_GET_OBJECT(UBonkItemInteractComponent,Z_Param_InteractComp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Pickup(Z_Param_InteractComp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBonkItemInteractableComponent::execAction)
	{
		P_GET_OBJECT(UBonkItemInteractComponent,Z_Param_InteractComp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Action(Z_Param_InteractComp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBonkItemInteractableComponent::execTryDeselect)
	{
		P_GET_OBJECT(UBonkItemInteractComponent,Z_Param_InteractComp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TryDeselect(Z_Param_InteractComp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBonkItemInteractableComponent::execTrySelect)
	{
		P_GET_OBJECT(UBonkItemInteractComponent,Z_Param_InteractComp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TrySelect(Z_Param_InteractComp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBonkItemInteractableComponent::execSetPrimitiveComponent)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_PrimitiveComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPrimitiveComponent(Z_Param_PrimitiveComponent);
		P_NATIVE_END;
	}
	void UBonkItemInteractableComponent::StaticRegisterNativesUBonkItemInteractableComponent()
	{
		UClass* Class = UBonkItemInteractableComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Action", &UBonkItemInteractableComponent::execAction },
			{ "Drop", &UBonkItemInteractableComponent::execDrop },
			{ "Pickup", &UBonkItemInteractableComponent::execPickup },
			{ "SetPrimitiveComponent", &UBonkItemInteractableComponent::execSetPrimitiveComponent },
			{ "TryDeselect", &UBonkItemInteractableComponent::execTryDeselect },
			{ "TrySelect", &UBonkItemInteractableComponent::execTrySelect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBonkItemInteractableComponent_Action_Statics
	{
		struct BonkItemInteractableComponent_eventAction_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkItemInteractableComponent_Action_Statics::NewProp_InteractComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBonkItemInteractableComponent_Action_Statics::NewProp_InteractComp = { "InteractComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkItemInteractableComponent_eventAction_Parms, InteractComp), Z_Construct_UClass_UBonkItemInteractComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBonkItemInteractableComponent_Action_Statics::NewProp_InteractComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkItemInteractableComponent_Action_Statics::NewProp_InteractComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBonkItemInteractableComponent_Action_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkItemInteractableComponent_Action_Statics::NewProp_InteractComp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkItemInteractableComponent_Action_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Can be called by both static and dynamic interactables\n" },
		{ "ModuleRelativePath", "Components/BonkItemInteractableComponent.h" },
		{ "ToolTip", "Can be called by both static and dynamic interactables" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBonkItemInteractableComponent_Action_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkItemInteractableComponent, nullptr, "Action", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBonkItemInteractableComponent_Action_Statics::BonkItemInteractableComponent_eventAction_Parms), Z_Construct_UFunction_UBonkItemInteractableComponent_Action_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkItemInteractableComponent_Action_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBonkItemInteractableComponent_Action_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkItemInteractableComponent_Action_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBonkItemInteractableComponent_Action()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBonkItemInteractableComponent_Action_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBonkItemInteractableComponent_Drop_Statics
	{
		struct BonkItemInteractableComponent_eventDrop_Parms
		{
			UBonkItemInteractComponent* InteractComp;
			FVector Force;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractComp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Force;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkItemInteractableComponent_Drop_Statics::NewProp_InteractComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBonkItemInteractableComponent_Drop_Statics::NewProp_InteractComp = { "InteractComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkItemInteractableComponent_eventDrop_Parms, InteractComp), Z_Construct_UClass_UBonkItemInteractComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBonkItemInteractableComponent_Drop_Statics::NewProp_InteractComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkItemInteractableComponent_Drop_Statics::NewProp_InteractComp_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBonkItemInteractableComponent_Drop_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkItemInteractableComponent_eventDrop_Parms, Force), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBonkItemInteractableComponent_Drop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkItemInteractableComponent_Drop_Statics::NewProp_InteractComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkItemInteractableComponent_Drop_Statics::NewProp_Force,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkItemInteractableComponent_Drop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BonkItemInteractableComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBonkItemInteractableComponent_Drop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkItemInteractableComponent, nullptr, "Drop", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBonkItemInteractableComponent_Drop_Statics::BonkItemInteractableComponent_eventDrop_Parms), Z_Construct_UFunction_UBonkItemInteractableComponent_Drop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkItemInteractableComponent_Drop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBonkItemInteractableComponent_Drop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkItemInteractableComponent_Drop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBonkItemInteractableComponent_Drop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBonkItemInteractableComponent_Drop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBonkItemInteractableComponent_Pickup_Statics
	{
		struct BonkItemInteractableComponent_eventPickup_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkItemInteractableComponent_Pickup_Statics::NewProp_InteractComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBonkItemInteractableComponent_Pickup_Statics::NewProp_InteractComp = { "InteractComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkItemInteractableComponent_eventPickup_Parms, InteractComp), Z_Construct_UClass_UBonkItemInteractComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBonkItemInteractableComponent_Pickup_Statics::NewProp_InteractComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkItemInteractableComponent_Pickup_Statics::NewProp_InteractComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBonkItemInteractableComponent_Pickup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkItemInteractableComponent_Pickup_Statics::NewProp_InteractComp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkItemInteractableComponent_Pickup_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Only called by dynamic interactables\n" },
		{ "ModuleRelativePath", "Components/BonkItemInteractableComponent.h" },
		{ "ToolTip", "Only called by dynamic interactables" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBonkItemInteractableComponent_Pickup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkItemInteractableComponent, nullptr, "Pickup", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBonkItemInteractableComponent_Pickup_Statics::BonkItemInteractableComponent_eventPickup_Parms), Z_Construct_UFunction_UBonkItemInteractableComponent_Pickup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkItemInteractableComponent_Pickup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBonkItemInteractableComponent_Pickup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkItemInteractableComponent_Pickup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBonkItemInteractableComponent_Pickup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBonkItemInteractableComponent_Pickup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBonkItemInteractableComponent_SetPrimitiveComponent_Statics
	{
		struct BonkItemInteractableComponent_eventSetPrimitiveComponent_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkItemInteractableComponent_SetPrimitiveComponent_Statics::NewProp_PrimitiveComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBonkItemInteractableComponent_SetPrimitiveComponent_Statics::NewProp_PrimitiveComponent = { "PrimitiveComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkItemInteractableComponent_eventSetPrimitiveComponent_Parms, PrimitiveComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBonkItemInteractableComponent_SetPrimitiveComponent_Statics::NewProp_PrimitiveComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkItemInteractableComponent_SetPrimitiveComponent_Statics::NewProp_PrimitiveComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBonkItemInteractableComponent_SetPrimitiveComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkItemInteractableComponent_SetPrimitiveComponent_Statics::NewProp_PrimitiveComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkItemInteractableComponent_SetPrimitiveComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BonkItemInteractableComponent.h" },
		{ "ToolTip", "Only needed for dynamic interactables" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBonkItemInteractableComponent_SetPrimitiveComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkItemInteractableComponent, nullptr, "SetPrimitiveComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBonkItemInteractableComponent_SetPrimitiveComponent_Statics::BonkItemInteractableComponent_eventSetPrimitiveComponent_Parms), Z_Construct_UFunction_UBonkItemInteractableComponent_SetPrimitiveComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkItemInteractableComponent_SetPrimitiveComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBonkItemInteractableComponent_SetPrimitiveComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkItemInteractableComponent_SetPrimitiveComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBonkItemInteractableComponent_SetPrimitiveComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBonkItemInteractableComponent_SetPrimitiveComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBonkItemInteractableComponent_TryDeselect_Statics
	{
		struct BonkItemInteractableComponent_eventTryDeselect_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkItemInteractableComponent_TryDeselect_Statics::NewProp_InteractComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBonkItemInteractableComponent_TryDeselect_Statics::NewProp_InteractComp = { "InteractComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkItemInteractableComponent_eventTryDeselect_Parms, InteractComp), Z_Construct_UClass_UBonkItemInteractComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBonkItemInteractableComponent_TryDeselect_Statics::NewProp_InteractComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkItemInteractableComponent_TryDeselect_Statics::NewProp_InteractComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBonkItemInteractableComponent_TryDeselect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkItemInteractableComponent_TryDeselect_Statics::NewProp_InteractComp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkItemInteractableComponent_TryDeselect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BonkItemInteractableComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBonkItemInteractableComponent_TryDeselect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkItemInteractableComponent, nullptr, "TryDeselect", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBonkItemInteractableComponent_TryDeselect_Statics::BonkItemInteractableComponent_eventTryDeselect_Parms), Z_Construct_UFunction_UBonkItemInteractableComponent_TryDeselect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkItemInteractableComponent_TryDeselect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBonkItemInteractableComponent_TryDeselect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkItemInteractableComponent_TryDeselect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBonkItemInteractableComponent_TryDeselect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBonkItemInteractableComponent_TryDeselect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBonkItemInteractableComponent_TrySelect_Statics
	{
		struct BonkItemInteractableComponent_eventTrySelect_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkItemInteractableComponent_TrySelect_Statics::NewProp_InteractComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBonkItemInteractableComponent_TrySelect_Statics::NewProp_InteractComp = { "InteractComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkItemInteractableComponent_eventTrySelect_Parms, InteractComp), Z_Construct_UClass_UBonkItemInteractComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBonkItemInteractableComponent_TrySelect_Statics::NewProp_InteractComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkItemInteractableComponent_TrySelect_Statics::NewProp_InteractComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBonkItemInteractableComponent_TrySelect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkItemInteractableComponent_TrySelect_Statics::NewProp_InteractComp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkItemInteractableComponent_TrySelect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BonkItemInteractableComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBonkItemInteractableComponent_TrySelect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkItemInteractableComponent, nullptr, "TrySelect", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBonkItemInteractableComponent_TrySelect_Statics::BonkItemInteractableComponent_eventTrySelect_Parms), Z_Construct_UFunction_UBonkItemInteractableComponent_TrySelect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkItemInteractableComponent_TrySelect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBonkItemInteractableComponent_TrySelect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkItemInteractableComponent_TrySelect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBonkItemInteractableComponent_TrySelect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBonkItemInteractableComponent_TrySelect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBonkItemInteractableComponent);
	UClass* Z_Construct_UClass_UBonkItemInteractableComponent_NoRegister()
	{
		return UBonkItemInteractableComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBonkItemInteractableComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanSwing_MetaData[];
#endif
		static void NewProp_bCanSwing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanSwing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwingSpeedMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SwingSpeedMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TorqueOnDrop_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TorqueOnDrop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimitiveComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PrimitiveComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsHeld_MetaData[];
#endif
		static void NewProp_bIsHeld_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHeld;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeldByInteract_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HeldByInteract;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastHeldByInteract_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LastHeldByInteract;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSelect_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSelect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDeselect_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeselect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPickupResponse_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPickupResponse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDropResponse_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDropResponse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnActionResponse_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActionResponse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBonkItemInteractableComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Bonk,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBonkItemInteractableComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBonkItemInteractableComponent_Action, "Action" }, // 1917823436
		{ &Z_Construct_UFunction_UBonkItemInteractableComponent_Drop, "Drop" }, // 2663371728
		{ &Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnActionResponse__DelegateSignature, "OnActionResponse__DelegateSignature" }, // 765277324
		{ &Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnDeselect__DelegateSignature, "OnDeselect__DelegateSignature" }, // 233540536
		{ &Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnDropResponse__DelegateSignature, "OnDropResponse__DelegateSignature" }, // 1075762708
		{ &Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnPickupResponse__DelegateSignature, "OnPickupResponse__DelegateSignature" }, // 1064670976
		{ &Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnSelect__DelegateSignature, "OnSelect__DelegateSignature" }, // 377367272
		{ &Z_Construct_UFunction_UBonkItemInteractableComponent_Pickup, "Pickup" }, // 3580155496
		{ &Z_Construct_UFunction_UBonkItemInteractableComponent_SetPrimitiveComponent, "SetPrimitiveComponent" }, // 2277443440
		{ &Z_Construct_UFunction_UBonkItemInteractableComponent_TryDeselect, "TryDeselect" }, // 2508860495
		{ &Z_Construct_UFunction_UBonkItemInteractableComponent_TrySelect, "TrySelect" }, // 133543394
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkItemInteractableComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Interaction" },
		{ "IncludePath", "Components/BonkItemInteractableComponent.h" },
		{ "ModuleRelativePath", "Components/BonkItemInteractableComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "BonkItemInteractableComponent" },
		{ "Comment", "// Dynamic interactables can be picked up\n" },
		{ "ModuleRelativePath", "Components/BonkItemInteractableComponent.h" },
		{ "ToolTip", "Dynamic interactables can be picked up" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkItemInteractableComponent, Type), Z_Construct_UEnum_Bonk_InteractableType, METADATA_PARAMS(Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_Type_MetaData)) }; // 2667493079
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_bCanSwing_MetaData[] = {
		{ "Category", "BonkItemInteractableComponent" },
		{ "ModuleRelativePath", "Components/BonkItemInteractableComponent.h" },
	};
#endif
	void Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_bCanSwing_SetBit(void* Obj)
	{
		((UBonkItemInteractableComponent*)Obj)->bCanSwing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_bCanSwing = { "bCanSwing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBonkItemInteractableComponent), &Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_bCanSwing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_bCanSwing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_bCanSwing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_SwingSpeedMultiplier_MetaData[] = {
		{ "Category", "BonkItemInteractableComponent" },
		{ "ModuleRelativePath", "Components/BonkItemInteractableComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_SwingSpeedMultiplier = { "SwingSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkItemInteractableComponent, SwingSpeedMultiplier), METADATA_PARAMS(Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_SwingSpeedMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_SwingSpeedMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_TorqueOnDrop_MetaData[] = {
		{ "Category", "BonkItemInteractableComponent" },
		{ "ModuleRelativePath", "Components/BonkItemInteractableComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_TorqueOnDrop = { "TorqueOnDrop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkItemInteractableComponent, TorqueOnDrop), METADATA_PARAMS(Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_TorqueOnDrop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_TorqueOnDrop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_SocketName_MetaData[] = {
		{ "Category", "BonkItemInteractableComponent" },
		{ "ModuleRelativePath", "Components/BonkItemInteractableComponent.h" },
		{ "ToolTip", "Socket to attach to" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkItemInteractableComponent, SocketName), METADATA_PARAMS(Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_SocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_SocketName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_PrimitiveComp_MetaData[] = {
		{ "Category", "BonkItemInteractableComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Components/BonkItemInteractableComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_PrimitiveComp = { "PrimitiveComp", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkItemInteractableComponent, PrimitiveComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_PrimitiveComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_PrimitiveComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_bIsHeld_MetaData[] = {
		{ "Category", "BonkItemInteractableComponent" },
		{ "Comment", "// UPROPERTY(BlueprintReadOnly)\n// int SelectedCount = 0;\n" },
		{ "ModuleRelativePath", "Components/BonkItemInteractableComponent.h" },
		{ "ToolTip", "UPROPERTY(BlueprintReadOnly)\nint SelectedCount = 0;" },
	};
#endif
	void Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_bIsHeld_SetBit(void* Obj)
	{
		((UBonkItemInteractableComponent*)Obj)->bIsHeld = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_bIsHeld = { "bIsHeld", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBonkItemInteractableComponent), &Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_bIsHeld_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_bIsHeld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_bIsHeld_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_HeldByInteract_MetaData[] = {
		{ "Category", "BonkItemInteractableComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Components/BonkItemInteractableComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_HeldByInteract = { "HeldByInteract", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkItemInteractableComponent, HeldByInteract), Z_Construct_UClass_UBonkItemInteractComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_HeldByInteract_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_HeldByInteract_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_LastHeldByInteract_MetaData[] = {
		{ "Category", "BonkItemInteractableComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Components/BonkItemInteractableComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_LastHeldByInteract = { "LastHeldByInteract", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkItemInteractableComponent, LastHeldByInteract), Z_Construct_UClass_UBonkItemInteractComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_LastHeldByInteract_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_LastHeldByInteract_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_OnSelect_MetaData[] = {
		{ "ModuleRelativePath", "Components/BonkItemInteractableComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_OnSelect = { "OnSelect", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkItemInteractableComponent, OnSelect), Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnSelect__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_OnSelect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_OnSelect_MetaData)) }; // 377367272
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_OnDeselect_MetaData[] = {
		{ "ModuleRelativePath", "Components/BonkItemInteractableComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_OnDeselect = { "OnDeselect", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkItemInteractableComponent, OnDeselect), Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnDeselect__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_OnDeselect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_OnDeselect_MetaData)) }; // 233540536
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_OnPickupResponse_MetaData[] = {
		{ "ModuleRelativePath", "Components/BonkItemInteractableComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_OnPickupResponse = { "OnPickupResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkItemInteractableComponent, OnPickupResponse), Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnPickupResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_OnPickupResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_OnPickupResponse_MetaData)) }; // 1064670976
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_OnDropResponse_MetaData[] = {
		{ "ModuleRelativePath", "Components/BonkItemInteractableComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_OnDropResponse = { "OnDropResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkItemInteractableComponent, OnDropResponse), Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnDropResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_OnDropResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_OnDropResponse_MetaData)) }; // 1075762708
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_OnActionResponse_MetaData[] = {
		{ "ModuleRelativePath", "Components/BonkItemInteractableComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_OnActionResponse = { "OnActionResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkItemInteractableComponent, OnActionResponse), Z_Construct_UDelegateFunction_UBonkItemInteractableComponent_OnActionResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_OnActionResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_OnActionResponse_MetaData)) }; // 765277324
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBonkItemInteractableComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_bCanSwing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_SwingSpeedMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_TorqueOnDrop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_SocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_PrimitiveComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_bIsHeld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_HeldByInteract,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_LastHeldByInteract,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_OnSelect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_OnDeselect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_OnPickupResponse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_OnDropResponse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkItemInteractableComponent_Statics::NewProp_OnActionResponse,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBonkItemInteractableComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBonkItemInteractableComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBonkItemInteractableComponent_Statics::ClassParams = {
		&UBonkItemInteractableComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBonkItemInteractableComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBonkItemInteractableComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBonkItemInteractableComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkItemInteractableComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBonkItemInteractableComponent()
	{
		if (!Z_Registration_Info_UClass_UBonkItemInteractableComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBonkItemInteractableComponent.OuterSingleton, Z_Construct_UClass_UBonkItemInteractableComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBonkItemInteractableComponent.OuterSingleton;
	}
	template<> BONK_API UClass* StaticClass<UBonkItemInteractableComponent>()
	{
		return UBonkItemInteractableComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBonkItemInteractableComponent);
	struct Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkItemInteractableComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkItemInteractableComponent_h_Statics::EnumInfo[] = {
		{ InteractableType_StaticEnum, TEXT("InteractableType"), &Z_Registration_Info_UEnum_InteractableType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2667493079U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkItemInteractableComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBonkItemInteractableComponent, UBonkItemInteractableComponent::StaticClass, TEXT("UBonkItemInteractableComponent"), &Z_Registration_Info_UClass_UBonkItemInteractableComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBonkItemInteractableComponent), 988724262U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkItemInteractableComponent_h_2180927775(TEXT("/Script/Bonk"),
		Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkItemInteractableComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkItemInteractableComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkItemInteractableComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkItemInteractableComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

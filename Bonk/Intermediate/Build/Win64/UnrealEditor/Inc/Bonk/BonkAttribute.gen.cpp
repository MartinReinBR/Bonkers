// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bonk/Components/BonkAttribute.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBonkAttribute() {}
// Cross Module References
	BONK_API UClass* Z_Construct_UClass_UBonkAttribute_NoRegister();
	BONK_API UClass* Z_Construct_UClass_UBonkAttribute();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Bonk();
// End Cross Module References
	DEFINE_FUNCTION(UBonkAttribute::execSetCurrentValue)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentValue(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBonkAttribute::execSetBaseValue)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBaseValue(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBonkAttribute::execInit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init();
		P_NATIVE_END;
	}
	void UBonkAttribute::StaticRegisterNativesUBonkAttribute()
	{
		UClass* Class = UBonkAttribute::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Init", &UBonkAttribute::execInit },
			{ "SetBaseValue", &UBonkAttribute::execSetBaseValue },
			{ "SetCurrentValue", &UBonkAttribute::execSetCurrentValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBonkAttribute_Init_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkAttribute_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BonkAttribute.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBonkAttribute_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkAttribute, nullptr, "Init", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBonkAttribute_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkAttribute_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBonkAttribute_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBonkAttribute_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBonkAttribute_SetBaseValue_Statics
	{
		struct BonkAttribute_eventSetBaseValue_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBonkAttribute_SetBaseValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkAttribute_eventSetBaseValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBonkAttribute_SetBaseValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkAttribute_SetBaseValue_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkAttribute_SetBaseValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BonkAttribute.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBonkAttribute_SetBaseValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkAttribute, nullptr, "SetBaseValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBonkAttribute_SetBaseValue_Statics::BonkAttribute_eventSetBaseValue_Parms), Z_Construct_UFunction_UBonkAttribute_SetBaseValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkAttribute_SetBaseValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBonkAttribute_SetBaseValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkAttribute_SetBaseValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBonkAttribute_SetBaseValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBonkAttribute_SetBaseValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBonkAttribute_SetCurrentValue_Statics
	{
		struct BonkAttribute_eventSetCurrentValue_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBonkAttribute_SetCurrentValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkAttribute_eventSetCurrentValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBonkAttribute_SetCurrentValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkAttribute_SetCurrentValue_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkAttribute_SetCurrentValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BonkAttribute.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBonkAttribute_SetCurrentValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkAttribute, nullptr, "SetCurrentValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBonkAttribute_SetCurrentValue_Statics::BonkAttribute_eventSetCurrentValue_Parms), Z_Construct_UFunction_UBonkAttribute_SetCurrentValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkAttribute_SetCurrentValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBonkAttribute_SetCurrentValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkAttribute_SetCurrentValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBonkAttribute_SetCurrentValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBonkAttribute_SetCurrentValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBonkAttribute);
	UClass* Z_Construct_UClass_UBonkAttribute_NoRegister()
	{
		return UBonkAttribute::StaticClass();
	}
	struct Z_Construct_UClass_UBonkAttribute_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBonkAttribute_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Bonk,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBonkAttribute_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBonkAttribute_Init, "Init" }, // 3432379064
		{ &Z_Construct_UFunction_UBonkAttribute_SetBaseValue, "SetBaseValue" }, // 2922207664
		{ &Z_Construct_UFunction_UBonkAttribute_SetCurrentValue, "SetCurrentValue" }, // 5656266
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkAttribute_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Components/BonkAttribute.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Components/BonkAttribute.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkAttribute_Statics::NewProp_BaseValue_MetaData[] = {
		{ "Category", "BonkAttribute" },
		{ "ModuleRelativePath", "Components/BonkAttribute.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBonkAttribute_Statics::NewProp_BaseValue = { "BaseValue", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkAttribute, BaseValue), METADATA_PARAMS(Z_Construct_UClass_UBonkAttribute_Statics::NewProp_BaseValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkAttribute_Statics::NewProp_BaseValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkAttribute_Statics::NewProp_CurrentValue_MetaData[] = {
		{ "Category", "BonkAttribute" },
		{ "ModuleRelativePath", "Components/BonkAttribute.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBonkAttribute_Statics::NewProp_CurrentValue = { "CurrentValue", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkAttribute, CurrentValue), METADATA_PARAMS(Z_Construct_UClass_UBonkAttribute_Statics::NewProp_CurrentValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkAttribute_Statics::NewProp_CurrentValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBonkAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkAttribute_Statics::NewProp_BaseValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkAttribute_Statics::NewProp_CurrentValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBonkAttribute_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBonkAttribute>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBonkAttribute_Statics::ClassParams = {
		&UBonkAttribute::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBonkAttribute_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBonkAttribute_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBonkAttribute_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkAttribute_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBonkAttribute()
	{
		if (!Z_Registration_Info_UClass_UBonkAttribute.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBonkAttribute.OuterSingleton, Z_Construct_UClass_UBonkAttribute_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBonkAttribute.OuterSingleton;
	}
	template<> BONK_API UClass* StaticClass<UBonkAttribute>()
	{
		return UBonkAttribute::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBonkAttribute);
	struct Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkAttribute_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkAttribute_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBonkAttribute, UBonkAttribute::StaticClass, TEXT("UBonkAttribute"), &Z_Registration_Info_UClass_UBonkAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBonkAttribute), 2327702085U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkAttribute_h_1970558068(TEXT("/Script/Bonk"),
		Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkAttribute_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkAttribute_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bonk/Actors/BonkAudience.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBonkAudience() {}
// Cross Module References
	BONK_API UFunction* Z_Construct_UDelegateFunction_Bonk_AudienceThrowSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Bonk();
	BONK_API UScriptStruct* Z_Construct_UScriptStruct_FAudienceSpawnPair();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	BONK_API UClass* Z_Construct_UClass_ABonkAudience_NoRegister();
	BONK_API UClass* Z_Construct_UClass_ABonkAudience();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Bonk_AudienceThrowSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Bonk_AudienceThrowSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/BonkAudience.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Bonk_AudienceThrowSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Bonk, nullptr, "AudienceThrowSignature__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Bonk_AudienceThrowSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Bonk_AudienceThrowSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Bonk_AudienceThrowSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Bonk_AudienceThrowSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AudienceSpawnPair;
class UScriptStruct* FAudienceSpawnPair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AudienceSpawnPair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AudienceSpawnPair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudienceSpawnPair, Z_Construct_UPackage__Script_Bonk(), TEXT("AudienceSpawnPair"));
	}
	return Z_Registration_Info_UScriptStruct_AudienceSpawnPair.OuterSingleton;
}
template<> BONK_API UScriptStruct* StaticStruct<FAudienceSpawnPair>()
{
	return FAudienceSpawnPair::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAudienceSpawnPair_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorSubClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorSubClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudienceSpawnPair_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/BonkAudience.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAudienceSpawnPair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudienceSpawnPair>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudienceSpawnPair_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "AudienceSpawnPair" },
		{ "ModuleRelativePath", "Actors/BonkAudience.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudienceSpawnPair_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudienceSpawnPair, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudienceSpawnPair_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudienceSpawnPair_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudienceSpawnPair_Statics::NewProp_ActorSubClass_MetaData[] = {
		{ "Category", "AudienceSpawnPair" },
		{ "ModuleRelativePath", "Actors/BonkAudience.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAudienceSpawnPair_Statics::NewProp_ActorSubClass = { "ActorSubClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudienceSpawnPair, ActorSubClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudienceSpawnPair_Statics::NewProp_ActorSubClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudienceSpawnPair_Statics::NewProp_ActorSubClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAudienceSpawnPair_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudienceSpawnPair_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudienceSpawnPair_Statics::NewProp_ActorSubClass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudienceSpawnPair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Bonk,
		nullptr,
		&NewStructOps,
		"AudienceSpawnPair",
		sizeof(FAudienceSpawnPair),
		alignof(FAudienceSpawnPair),
		Z_Construct_UScriptStruct_FAudienceSpawnPair_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudienceSpawnPair_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAudienceSpawnPair_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudienceSpawnPair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAudienceSpawnPair()
	{
		if (!Z_Registration_Info_UScriptStruct_AudienceSpawnPair.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AudienceSpawnPair.InnerSingleton, Z_Construct_UScriptStruct_FAudienceSpawnPair_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AudienceSpawnPair.InnerSingleton;
	}
	DEFINE_FUNCTION(ABonkAudience::execThrowItemToPointInBox)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ThrowItemToPointInBox();
		P_NATIVE_END;
	}
	void ABonkAudience::StaticRegisterNativesABonkAudience()
	{
		UClass* Class = ABonkAudience::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ThrowItemToPointInBox", &ABonkAudience::execThrowItemToPointInBox },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABonkAudience_ThrowItemToPointInBox_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABonkAudience_ThrowItemToPointInBox_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/BonkAudience.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABonkAudience_ThrowItemToPointInBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABonkAudience, nullptr, "ThrowItemToPointInBox", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABonkAudience_ThrowItemToPointInBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABonkAudience_ThrowItemToPointInBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABonkAudience_ThrowItemToPointInBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABonkAudience_ThrowItemToPointInBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABonkAudience);
	UClass* Z_Construct_UClass_ABonkAudience_NoRegister()
	{
		return ABonkAudience::StaticClass();
	}
	struct Z_Construct_UClass_ABonkAudience_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowDebugOutlines_MetaData[];
#endif
		static void NewProp_ShowDebugOutlines_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowDebugOutlines;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnableActorClasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnableActorClasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnableActorClasses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetsClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TargetsClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourcePointsClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SourcePointsClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnWeaponSpawned_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWeaponSpawned;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurvePoints_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CurvePoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABonkAudience_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Bonk,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABonkAudience_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABonkAudience_ThrowItemToPointInBox, "ThrowItemToPointInBox" }, // 537652964
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkAudience_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/BonkAudience.h" },
		{ "ModuleRelativePath", "Actors/BonkAudience.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkAudience_Statics::NewProp_ShowDebugOutlines_MetaData[] = {
		{ "Category", "BonkAudience" },
		{ "ModuleRelativePath", "Actors/BonkAudience.h" },
	};
#endif
	void Z_Construct_UClass_ABonkAudience_Statics::NewProp_ShowDebugOutlines_SetBit(void* Obj)
	{
		((ABonkAudience*)Obj)->ShowDebugOutlines = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABonkAudience_Statics::NewProp_ShowDebugOutlines = { "ShowDebugOutlines", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABonkAudience), &Z_Construct_UClass_ABonkAudience_Statics::NewProp_ShowDebugOutlines_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABonkAudience_Statics::NewProp_ShowDebugOutlines_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkAudience_Statics::NewProp_ShowDebugOutlines_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABonkAudience_Statics::NewProp_SpawnableActorClasses_Inner = { "SpawnableActorClasses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAudienceSpawnPair, METADATA_PARAMS(nullptr, 0) }; // 823124396
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkAudience_Statics::NewProp_SpawnableActorClasses_MetaData[] = {
		{ "Category", "BonkAudience" },
		{ "ModuleRelativePath", "Actors/BonkAudience.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABonkAudience_Statics::NewProp_SpawnableActorClasses = { "SpawnableActorClasses", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonkAudience, SpawnableActorClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABonkAudience_Statics::NewProp_SpawnableActorClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkAudience_Statics::NewProp_SpawnableActorClasses_MetaData)) }; // 823124396
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkAudience_Statics::NewProp_TargetsClass_MetaData[] = {
		{ "Category", "BonkAudience" },
		{ "ModuleRelativePath", "Actors/BonkAudience.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABonkAudience_Statics::NewProp_TargetsClass = { "TargetsClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonkAudience, TargetsClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABonkAudience_Statics::NewProp_TargetsClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkAudience_Statics::NewProp_TargetsClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkAudience_Statics::NewProp_SourcePointsClass_MetaData[] = {
		{ "Category", "BonkAudience" },
		{ "ModuleRelativePath", "Actors/BonkAudience.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABonkAudience_Statics::NewProp_SourcePointsClass = { "SourcePointsClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonkAudience, SourcePointsClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABonkAudience_Statics::NewProp_SourcePointsClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkAudience_Statics::NewProp_SourcePointsClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkAudience_Statics::NewProp_OnWeaponSpawned_MetaData[] = {
		{ "ModuleRelativePath", "Actors/BonkAudience.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABonkAudience_Statics::NewProp_OnWeaponSpawned = { "OnWeaponSpawned", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonkAudience, OnWeaponSpawned), Z_Construct_UDelegateFunction_Bonk_AudienceThrowSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ABonkAudience_Statics::NewProp_OnWeaponSpawned_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkAudience_Statics::NewProp_OnWeaponSpawned_MetaData)) }; // 56486937
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkAudience_Statics::NewProp_CurvePoints_MetaData[] = {
		{ "Category", "BonkAudience" },
		{ "ClampMax", "20" },
		{ "ClampMin", "2" },
		{ "ModuleRelativePath", "Actors/BonkAudience.h" },
		{ "UIMax", "20" },
		{ "UIMin", "2" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABonkAudience_Statics::NewProp_CurvePoints = { "CurvePoints", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonkAudience, CurvePoints), METADATA_PARAMS(Z_Construct_UClass_ABonkAudience_Statics::NewProp_CurvePoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkAudience_Statics::NewProp_CurvePoints_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABonkAudience_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkAudience_Statics::NewProp_ShowDebugOutlines,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkAudience_Statics::NewProp_SpawnableActorClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkAudience_Statics::NewProp_SpawnableActorClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkAudience_Statics::NewProp_TargetsClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkAudience_Statics::NewProp_SourcePointsClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkAudience_Statics::NewProp_OnWeaponSpawned,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkAudience_Statics::NewProp_CurvePoints,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABonkAudience_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABonkAudience>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABonkAudience_Statics::ClassParams = {
		&ABonkAudience::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABonkAudience_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABonkAudience_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABonkAudience_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkAudience_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABonkAudience()
	{
		if (!Z_Registration_Info_UClass_ABonkAudience.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABonkAudience.OuterSingleton, Z_Construct_UClass_ABonkAudience_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABonkAudience.OuterSingleton;
	}
	template<> BONK_API UClass* StaticClass<ABonkAudience>()
	{
		return ABonkAudience::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABonkAudience);
	struct Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Actors_BonkAudience_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Actors_BonkAudience_h_Statics::ScriptStructInfo[] = {
		{ FAudienceSpawnPair::StaticStruct, Z_Construct_UScriptStruct_FAudienceSpawnPair_Statics::NewStructOps, TEXT("AudienceSpawnPair"), &Z_Registration_Info_UScriptStruct_AudienceSpawnPair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAudienceSpawnPair), 823124396U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Actors_BonkAudience_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABonkAudience, ABonkAudience::StaticClass, TEXT("ABonkAudience"), &Z_Registration_Info_UClass_ABonkAudience, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABonkAudience), 3924272735U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Actors_BonkAudience_h_489093630(TEXT("/Script/Bonk"),
		Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Actors_BonkAudience_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Actors_BonkAudience_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Actors_BonkAudience_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Actors_BonkAudience_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

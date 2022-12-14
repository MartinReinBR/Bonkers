// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bonk/Components/BonkAbilityComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBonkAbilityComponent() {}
// Cross Module References
	BONK_API UClass* Z_Construct_UClass_UBonkAbilityComponent_NoRegister();
	BONK_API UClass* Z_Construct_UClass_UBonkAbilityComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Bonk();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	BONK_API UClass* Z_Construct_UClass_UBonkPlayer_NoRegister();
	BONK_API UClass* Z_Construct_UClass_ABonkPlayerPawn_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBonkAbilityComponent::execOnDrop)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDrop(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBonkAbilityComponent::execOnPickup)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPickup(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBonkAbilityComponent::execOnHit)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHit(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBonkAbilityComponent::execOnAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAttack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBonkAbilityComponent::execSetPlayerData)
	{
		P_GET_OBJECT(UBonkPlayer,Z_Param_NewPlayerData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerData(Z_Param_NewPlayerData);
		P_NATIVE_END;
	}
	void UBonkAbilityComponent::StaticRegisterNativesUBonkAbilityComponent()
	{
		UClass* Class = UBonkAbilityComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAttack", &UBonkAbilityComponent::execOnAttack },
			{ "OnDrop", &UBonkAbilityComponent::execOnDrop },
			{ "OnHit", &UBonkAbilityComponent::execOnHit },
			{ "OnPickup", &UBonkAbilityComponent::execOnPickup },
			{ "SetPlayerData", &UBonkAbilityComponent::execSetPlayerData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBonkAbilityComponent_OnAttack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkAbilityComponent_OnAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BonkAbilityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBonkAbilityComponent_OnAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkAbilityComponent, nullptr, "OnAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBonkAbilityComponent_OnAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkAbilityComponent_OnAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBonkAbilityComponent_OnAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBonkAbilityComponent_OnAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBonkAbilityComponent_OnDrop_Statics
	{
		struct BonkAbilityComponent_eventOnDrop_Parms
		{
			AActor* Actor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBonkAbilityComponent_OnDrop_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkAbilityComponent_eventOnDrop_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBonkAbilityComponent_OnDrop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkAbilityComponent_OnDrop_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkAbilityComponent_OnDrop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BonkAbilityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBonkAbilityComponent_OnDrop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkAbilityComponent, nullptr, "OnDrop", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBonkAbilityComponent_OnDrop_Statics::BonkAbilityComponent_eventOnDrop_Parms), Z_Construct_UFunction_UBonkAbilityComponent_OnDrop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkAbilityComponent_OnDrop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBonkAbilityComponent_OnDrop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkAbilityComponent_OnDrop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBonkAbilityComponent_OnDrop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBonkAbilityComponent_OnDrop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBonkAbilityComponent_OnHit_Statics
	{
		struct BonkAbilityComponent_eventOnHit_Parms
		{
			AActor* Actor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBonkAbilityComponent_OnHit_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkAbilityComponent_eventOnHit_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBonkAbilityComponent_OnHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkAbilityComponent_OnHit_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkAbilityComponent_OnHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BonkAbilityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBonkAbilityComponent_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkAbilityComponent, nullptr, "OnHit", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBonkAbilityComponent_OnHit_Statics::BonkAbilityComponent_eventOnHit_Parms), Z_Construct_UFunction_UBonkAbilityComponent_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkAbilityComponent_OnHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBonkAbilityComponent_OnHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkAbilityComponent_OnHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBonkAbilityComponent_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBonkAbilityComponent_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBonkAbilityComponent_OnPickup_Statics
	{
		struct BonkAbilityComponent_eventOnPickup_Parms
		{
			AActor* Actor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBonkAbilityComponent_OnPickup_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkAbilityComponent_eventOnPickup_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBonkAbilityComponent_OnPickup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkAbilityComponent_OnPickup_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkAbilityComponent_OnPickup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BonkAbilityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBonkAbilityComponent_OnPickup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkAbilityComponent, nullptr, "OnPickup", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBonkAbilityComponent_OnPickup_Statics::BonkAbilityComponent_eventOnPickup_Parms), Z_Construct_UFunction_UBonkAbilityComponent_OnPickup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkAbilityComponent_OnPickup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBonkAbilityComponent_OnPickup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkAbilityComponent_OnPickup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBonkAbilityComponent_OnPickup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBonkAbilityComponent_OnPickup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBonkAbilityComponent_SetPlayerData_Statics
	{
		struct BonkAbilityComponent_eventSetPlayerData_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBonkAbilityComponent_SetPlayerData_Statics::NewProp_NewPlayerData = { "NewPlayerData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BonkAbilityComponent_eventSetPlayerData_Parms, NewPlayerData), Z_Construct_UClass_UBonkPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBonkAbilityComponent_SetPlayerData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBonkAbilityComponent_SetPlayerData_Statics::NewProp_NewPlayerData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonkAbilityComponent_SetPlayerData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BonkAbilityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBonkAbilityComponent_SetPlayerData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonkAbilityComponent, nullptr, "SetPlayerData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBonkAbilityComponent_SetPlayerData_Statics::BonkAbilityComponent_eventSetPlayerData_Parms), Z_Construct_UFunction_UBonkAbilityComponent_SetPlayerData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkAbilityComponent_SetPlayerData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBonkAbilityComponent_SetPlayerData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBonkAbilityComponent_SetPlayerData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBonkAbilityComponent_SetPlayerData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBonkAbilityComponent_SetPlayerData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBonkAbilityComponent);
	UClass* Z_Construct_UClass_UBonkAbilityComponent_NoRegister()
	{
		return UBonkAbilityComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBonkAbilityComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerPawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerPawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBonkAbilityComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Bonk,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBonkAbilityComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBonkAbilityComponent_OnAttack, "OnAttack" }, // 1902935445
		{ &Z_Construct_UFunction_UBonkAbilityComponent_OnDrop, "OnDrop" }, // 2031139201
		{ &Z_Construct_UFunction_UBonkAbilityComponent_OnHit, "OnHit" }, // 1244211542
		{ &Z_Construct_UFunction_UBonkAbilityComponent_OnPickup, "OnPickup" }, // 4098346900
		{ &Z_Construct_UFunction_UBonkAbilityComponent_SetPlayerData, "SetPlayerData" }, // 1020726160
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkAbilityComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/BonkAbilityComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Components/BonkAbilityComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkAbilityComponent_Statics::NewProp_PlayerData_MetaData[] = {
		{ "Category", "BonkAbilityComponent" },
		{ "ModuleRelativePath", "Components/BonkAbilityComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBonkAbilityComponent_Statics::NewProp_PlayerData = { "PlayerData", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkAbilityComponent, PlayerData), Z_Construct_UClass_UBonkPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBonkAbilityComponent_Statics::NewProp_PlayerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkAbilityComponent_Statics::NewProp_PlayerData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkAbilityComponent_Statics::NewProp_PlayerPawn_MetaData[] = {
		{ "Category", "BonkAbilityComponent" },
		{ "ModuleRelativePath", "Components/BonkAbilityComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBonkAbilityComponent_Statics::NewProp_PlayerPawn = { "PlayerPawn", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkAbilityComponent, PlayerPawn), Z_Construct_UClass_ABonkPlayerPawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBonkAbilityComponent_Statics::NewProp_PlayerPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkAbilityComponent_Statics::NewProp_PlayerPawn_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBonkAbilityComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkAbilityComponent_Statics::NewProp_PlayerData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkAbilityComponent_Statics::NewProp_PlayerPawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBonkAbilityComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBonkAbilityComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBonkAbilityComponent_Statics::ClassParams = {
		&UBonkAbilityComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBonkAbilityComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBonkAbilityComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBonkAbilityComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkAbilityComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBonkAbilityComponent()
	{
		if (!Z_Registration_Info_UClass_UBonkAbilityComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBonkAbilityComponent.OuterSingleton, Z_Construct_UClass_UBonkAbilityComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBonkAbilityComponent.OuterSingleton;
	}
	template<> BONK_API UClass* StaticClass<UBonkAbilityComponent>()
	{
		return UBonkAbilityComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBonkAbilityComponent);
	struct Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkAbilityComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkAbilityComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBonkAbilityComponent, UBonkAbilityComponent::StaticClass, TEXT("UBonkAbilityComponent"), &Z_Registration_Info_UClass_UBonkAbilityComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBonkAbilityComponent), 4063528751U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkAbilityComponent_h_3859553932(TEXT("/Script/Bonk"),
		Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkAbilityComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkAbilityComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

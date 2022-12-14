// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bonk/Player/BonkLobbyPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBonkLobbyPawn() {}
// Cross Module References
	BONK_API UClass* Z_Construct_UClass_ABonkLobbyPawn_NoRegister();
	BONK_API UClass* Z_Construct_UClass_ABonkLobbyPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Bonk();
// End Cross Module References
	void ABonkLobbyPawn::StaticRegisterNativesABonkLobbyPawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABonkLobbyPawn);
	UClass* Z_Construct_UClass_ABonkLobbyPawn_NoRegister()
	{
		return ABonkLobbyPawn::StaticClass();
	}
	struct Z_Construct_UClass_ABonkLobbyPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABonkLobbyPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Bonk,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkLobbyPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/BonkLobbyPawn.h" },
		{ "ModuleRelativePath", "Player/BonkLobbyPawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonkLobbyPawn_Statics::NewProp_PlayerIndex_MetaData[] = {
		{ "Category", "BonkLobbyPawn" },
		{ "ModuleRelativePath", "Player/BonkLobbyPawn.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABonkLobbyPawn_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonkLobbyPawn, PlayerIndex), METADATA_PARAMS(Z_Construct_UClass_ABonkLobbyPawn_Statics::NewProp_PlayerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkLobbyPawn_Statics::NewProp_PlayerIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABonkLobbyPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonkLobbyPawn_Statics::NewProp_PlayerIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABonkLobbyPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABonkLobbyPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABonkLobbyPawn_Statics::ClassParams = {
		&ABonkLobbyPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABonkLobbyPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABonkLobbyPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABonkLobbyPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABonkLobbyPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABonkLobbyPawn()
	{
		if (!Z_Registration_Info_UClass_ABonkLobbyPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABonkLobbyPawn.OuterSingleton, Z_Construct_UClass_ABonkLobbyPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABonkLobbyPawn.OuterSingleton;
	}
	template<> BONK_API UClass* StaticClass<ABonkLobbyPawn>()
	{
		return ABonkLobbyPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABonkLobbyPawn);
	struct Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Player_BonkLobbyPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Player_BonkLobbyPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABonkLobbyPawn, ABonkLobbyPawn::StaticClass, TEXT("ABonkLobbyPawn"), &Z_Registration_Info_UClass_ABonkLobbyPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABonkLobbyPawn), 2350261247U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Player_BonkLobbyPawn_h_1903082940(TEXT("/Script/Bonk"),
		Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Player_BonkLobbyPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Player_BonkLobbyPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

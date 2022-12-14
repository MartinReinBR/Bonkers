// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bonk/Widgets/BonkHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBonkHUD() {}
// Cross Module References
	BONK_API UClass* Z_Construct_UClass_UBonkHUD_NoRegister();
	BONK_API UClass* Z_Construct_UClass_UBonkHUD();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Bonk();
// End Cross Module References
	void UBonkHUD::StaticRegisterNativesUBonkHUD()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBonkHUD);
	UClass* Z_Construct_UClass_UBonkHUD_NoRegister()
	{
		return UBonkHUD::StaticClass();
	}
	struct Z_Construct_UClass_UBonkHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBonkHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Bonk,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widgets/BonkHUD.h" },
		{ "ModuleRelativePath", "Widgets/BonkHUD.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBonkHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBonkHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBonkHUD_Statics::ClassParams = {
		&UBonkHUD::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBonkHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBonkHUD()
	{
		if (!Z_Registration_Info_UClass_UBonkHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBonkHUD.OuterSingleton, Z_Construct_UClass_UBonkHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBonkHUD.OuterSingleton;
	}
	template<> BONK_API UClass* StaticClass<UBonkHUD>()
	{
		return UBonkHUD::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBonkHUD);
	struct Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Widgets_BonkHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Widgets_BonkHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBonkHUD, UBonkHUD::StaticClass, TEXT("UBonkHUD"), &Z_Registration_Info_UClass_UBonkHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBonkHUD), 614139335U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Widgets_BonkHUD_h_3802773269(TEXT("/Script/Bonk"),
		Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Widgets_BonkHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Widgets_BonkHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

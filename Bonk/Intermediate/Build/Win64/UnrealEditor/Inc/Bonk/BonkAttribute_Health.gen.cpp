// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bonk/Components/BonkAttribute_Health.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBonkAttribute_Health() {}
// Cross Module References
	BONK_API UClass* Z_Construct_UClass_UBonkAttribute_Health_NoRegister();
	BONK_API UClass* Z_Construct_UClass_UBonkAttribute_Health();
	BONK_API UClass* Z_Construct_UClass_UBonkAttribute();
	UPackage* Z_Construct_UPackage__Script_Bonk();
// End Cross Module References
	void UBonkAttribute_Health::StaticRegisterNativesUBonkAttribute_Health()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBonkAttribute_Health);
	UClass* Z_Construct_UClass_UBonkAttribute_Health_NoRegister()
	{
		return UBonkAttribute_Health::StaticClass();
	}
	struct Z_Construct_UClass_UBonkAttribute_Health_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBonkAttribute_Health_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBonkAttribute,
		(UObject* (*)())Z_Construct_UPackage__Script_Bonk,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkAttribute_Health_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/BonkAttribute_Health.h" },
		{ "ModuleRelativePath", "Components/BonkAttribute_Health.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBonkAttribute_Health_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBonkAttribute_Health>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBonkAttribute_Health_Statics::ClassParams = {
		&UBonkAttribute_Health::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBonkAttribute_Health_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkAttribute_Health_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBonkAttribute_Health()
	{
		if (!Z_Registration_Info_UClass_UBonkAttribute_Health.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBonkAttribute_Health.OuterSingleton, Z_Construct_UClass_UBonkAttribute_Health_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBonkAttribute_Health.OuterSingleton;
	}
	template<> BONK_API UClass* StaticClass<UBonkAttribute_Health>()
	{
		return UBonkAttribute_Health::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBonkAttribute_Health);
	struct Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkAttribute_Health_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkAttribute_Health_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBonkAttribute_Health, UBonkAttribute_Health::StaticClass, TEXT("UBonkAttribute_Health"), &Z_Registration_Info_UClass_UBonkAttribute_Health, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBonkAttribute_Health), 533010421U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkAttribute_Health_h_2633907067(TEXT("/Script/Bonk"),
		Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkAttribute_Health_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkAttribute_Health_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bonk/Components/BonkAttribute_AttackSpeed.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBonkAttribute_AttackSpeed() {}
// Cross Module References
	BONK_API UClass* Z_Construct_UClass_UBonkAttribute_AttackSpeed_NoRegister();
	BONK_API UClass* Z_Construct_UClass_UBonkAttribute_AttackSpeed();
	BONK_API UClass* Z_Construct_UClass_UBonkAttribute();
	UPackage* Z_Construct_UPackage__Script_Bonk();
// End Cross Module References
	void UBonkAttribute_AttackSpeed::StaticRegisterNativesUBonkAttribute_AttackSpeed()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBonkAttribute_AttackSpeed);
	UClass* Z_Construct_UClass_UBonkAttribute_AttackSpeed_NoRegister()
	{
		return UBonkAttribute_AttackSpeed::StaticClass();
	}
	struct Z_Construct_UClass_UBonkAttribute_AttackSpeed_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBonkAttribute_AttackSpeed_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBonkAttribute,
		(UObject* (*)())Z_Construct_UPackage__Script_Bonk,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkAttribute_AttackSpeed_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/BonkAttribute_AttackSpeed.h" },
		{ "ModuleRelativePath", "Components/BonkAttribute_AttackSpeed.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBonkAttribute_AttackSpeed_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBonkAttribute_AttackSpeed>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBonkAttribute_AttackSpeed_Statics::ClassParams = {
		&UBonkAttribute_AttackSpeed::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBonkAttribute_AttackSpeed_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkAttribute_AttackSpeed_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBonkAttribute_AttackSpeed()
	{
		if (!Z_Registration_Info_UClass_UBonkAttribute_AttackSpeed.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBonkAttribute_AttackSpeed.OuterSingleton, Z_Construct_UClass_UBonkAttribute_AttackSpeed_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBonkAttribute_AttackSpeed.OuterSingleton;
	}
	template<> BONK_API UClass* StaticClass<UBonkAttribute_AttackSpeed>()
	{
		return UBonkAttribute_AttackSpeed::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBonkAttribute_AttackSpeed);
	struct Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkAttribute_AttackSpeed_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkAttribute_AttackSpeed_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBonkAttribute_AttackSpeed, UBonkAttribute_AttackSpeed::StaticClass, TEXT("UBonkAttribute_AttackSpeed"), &Z_Registration_Info_UClass_UBonkAttribute_AttackSpeed, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBonkAttribute_AttackSpeed), 1733309415U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkAttribute_AttackSpeed_h_2269952365(TEXT("/Script/Bonk"),
		Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkAttribute_AttackSpeed_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkAttribute_AttackSpeed_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

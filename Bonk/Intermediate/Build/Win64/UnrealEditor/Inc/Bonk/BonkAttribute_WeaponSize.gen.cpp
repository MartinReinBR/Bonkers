// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bonk/Components/BonkAttribute_WeaponSize.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBonkAttribute_WeaponSize() {}
// Cross Module References
	BONK_API UClass* Z_Construct_UClass_UBonkAttribute_WeaponSize_NoRegister();
	BONK_API UClass* Z_Construct_UClass_UBonkAttribute_WeaponSize();
	BONK_API UClass* Z_Construct_UClass_UBonkAttribute();
	UPackage* Z_Construct_UPackage__Script_Bonk();
// End Cross Module References
	void UBonkAttribute_WeaponSize::StaticRegisterNativesUBonkAttribute_WeaponSize()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBonkAttribute_WeaponSize);
	UClass* Z_Construct_UClass_UBonkAttribute_WeaponSize_NoRegister()
	{
		return UBonkAttribute_WeaponSize::StaticClass();
	}
	struct Z_Construct_UClass_UBonkAttribute_WeaponSize_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBonkAttribute_WeaponSize_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBonkAttribute,
		(UObject* (*)())Z_Construct_UPackage__Script_Bonk,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkAttribute_WeaponSize_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/BonkAttribute_WeaponSize.h" },
		{ "ModuleRelativePath", "Components/BonkAttribute_WeaponSize.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBonkAttribute_WeaponSize_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBonkAttribute_WeaponSize>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBonkAttribute_WeaponSize_Statics::ClassParams = {
		&UBonkAttribute_WeaponSize::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBonkAttribute_WeaponSize_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkAttribute_WeaponSize_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBonkAttribute_WeaponSize()
	{
		if (!Z_Registration_Info_UClass_UBonkAttribute_WeaponSize.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBonkAttribute_WeaponSize.OuterSingleton, Z_Construct_UClass_UBonkAttribute_WeaponSize_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBonkAttribute_WeaponSize.OuterSingleton;
	}
	template<> BONK_API UClass* StaticClass<UBonkAttribute_WeaponSize>()
	{
		return UBonkAttribute_WeaponSize::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBonkAttribute_WeaponSize);
	struct Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkAttribute_WeaponSize_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkAttribute_WeaponSize_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBonkAttribute_WeaponSize, UBonkAttribute_WeaponSize::StaticClass, TEXT("UBonkAttribute_WeaponSize"), &Z_Registration_Info_UClass_UBonkAttribute_WeaponSize, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBonkAttribute_WeaponSize), 1238457706U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkAttribute_WeaponSize_h_965689884(TEXT("/Script/Bonk"),
		Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkAttribute_WeaponSize_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkAttribute_WeaponSize_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

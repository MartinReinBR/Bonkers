// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bonk/Core/BonkGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBonkGameInstance() {}
// Cross Module References
	BONK_API UClass* Z_Construct_UClass_UBonkGameInstance_NoRegister();
	BONK_API UClass* Z_Construct_UClass_UBonkGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_Bonk();
// End Cross Module References
	void UBonkGameInstance::StaticRegisterNativesUBonkGameInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBonkGameInstance);
	UClass* Z_Construct_UClass_UBonkGameInstance_NoRegister()
	{
		return UBonkGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UBonkGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBonkGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Bonk,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Core/BonkGameInstance.h" },
		{ "ModuleRelativePath", "Core/BonkGameInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBonkGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBonkGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBonkGameInstance_Statics::ClassParams = {
		&UBonkGameInstance::StaticClass,
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
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBonkGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBonkGameInstance()
	{
		if (!Z_Registration_Info_UClass_UBonkGameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBonkGameInstance.OuterSingleton, Z_Construct_UClass_UBonkGameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBonkGameInstance.OuterSingleton;
	}
	template<> BONK_API UClass* StaticClass<UBonkGameInstance>()
	{
		return UBonkGameInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBonkGameInstance);
	struct Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Core_BonkGameInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Core_BonkGameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBonkGameInstance, UBonkGameInstance::StaticClass, TEXT("UBonkGameInstance"), &Z_Registration_Info_UClass_UBonkGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBonkGameInstance), 2738012371U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Core_BonkGameInstance_h_2135408727(TEXT("/Script/Bonk"),
		Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Core_BonkGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Core_BonkGameInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

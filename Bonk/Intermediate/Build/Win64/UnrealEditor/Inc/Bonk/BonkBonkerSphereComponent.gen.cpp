// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bonk/Components/BonkBonkerSphereComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBonkBonkerSphereComponent() {}
// Cross Module References
	BONK_API UClass* Z_Construct_UClass_UBonkBonkerSphereComponent_NoRegister();
	BONK_API UClass* Z_Construct_UClass_UBonkBonkerSphereComponent();
	BONK_API UClass* Z_Construct_UClass_UBonkBonkerComponent();
	UPackage* Z_Construct_UPackage__Script_Bonk();
// End Cross Module References
	void UBonkBonkerSphereComponent::StaticRegisterNativesUBonkBonkerSphereComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBonkBonkerSphereComponent);
	UClass* Z_Construct_UClass_UBonkBonkerSphereComponent_NoRegister()
	{
		return UBonkBonkerSphereComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBonkBonkerSphereComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBonkBonkerSphereComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBonkBonkerComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Bonk,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkBonkerSphereComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Bonking" },
		{ "IncludePath", "Components/BonkBonkerSphereComponent.h" },
		{ "ModuleRelativePath", "Components/BonkBonkerSphereComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonkBonkerSphereComponent_Statics::NewProp_TraceRadius_MetaData[] = {
		{ "Category", "BonkBonkerSphereComponent" },
		{ "ModuleRelativePath", "Components/BonkBonkerSphereComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBonkBonkerSphereComponent_Statics::NewProp_TraceRadius = { "TraceRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBonkBonkerSphereComponent, TraceRadius), METADATA_PARAMS(Z_Construct_UClass_UBonkBonkerSphereComponent_Statics::NewProp_TraceRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkBonkerSphereComponent_Statics::NewProp_TraceRadius_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBonkBonkerSphereComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonkBonkerSphereComponent_Statics::NewProp_TraceRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBonkBonkerSphereComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBonkBonkerSphereComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBonkBonkerSphereComponent_Statics::ClassParams = {
		&UBonkBonkerSphereComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBonkBonkerSphereComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBonkBonkerSphereComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBonkBonkerSphereComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBonkBonkerSphereComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBonkBonkerSphereComponent()
	{
		if (!Z_Registration_Info_UClass_UBonkBonkerSphereComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBonkBonkerSphereComponent.OuterSingleton, Z_Construct_UClass_UBonkBonkerSphereComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBonkBonkerSphereComponent.OuterSingleton;
	}
	template<> BONK_API UClass* StaticClass<UBonkBonkerSphereComponent>()
	{
		return UBonkBonkerSphereComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBonkBonkerSphereComponent);
	struct Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkBonkerSphereComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkBonkerSphereComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBonkBonkerSphereComponent, UBonkBonkerSphereComponent::StaticClass, TEXT("UBonkBonkerSphereComponent"), &Z_Registration_Info_UClass_UBonkBonkerSphereComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBonkBonkerSphereComponent), 3835828009U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkBonkerSphereComponent_h_123916089(TEXT("/Script/Bonk"),
		Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkBonkerSphereComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Bonk_Source_Bonk_Components_BonkBonkerSphereComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

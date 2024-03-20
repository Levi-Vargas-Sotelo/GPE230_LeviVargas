// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GPE230_LeviVargas/Public/SpeedPickup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpeedPickup() {}
// Cross Module References
	GPE230_LEVIVARGAS_API UClass* Z_Construct_UClass_APickup();
	GPE230_LEVIVARGAS_API UClass* Z_Construct_UClass_ASpeedPickup();
	GPE230_LEVIVARGAS_API UClass* Z_Construct_UClass_ASpeedPickup_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GPE230_LeviVargas();
// End Cross Module References
	void ASpeedPickup::StaticRegisterNativesASpeedPickup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpeedPickup);
	UClass* Z_Construct_UClass_ASpeedPickup_NoRegister()
	{
		return ASpeedPickup::StaticClass();
	}
	struct Z_Construct_UClass_ASpeedPickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_speedMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_speedMultiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpeedPickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APickup,
		(UObject* (*)())Z_Construct_UPackage__Script_GPE230_LeviVargas,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpeedPickup_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpeedPickup_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SpeedPickup.h" },
		{ "ModuleRelativePath", "Public/SpeedPickup.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpeedPickup_Statics::NewProp_speedMultiplier_MetaData[] = {
		{ "Category", "SpeedPickup" },
		{ "ModuleRelativePath", "Public/SpeedPickup.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpeedPickup_Statics::NewProp_speedMultiplier = { "speedMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpeedPickup, speedMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpeedPickup_Statics::NewProp_speedMultiplier_MetaData), Z_Construct_UClass_ASpeedPickup_Statics::NewProp_speedMultiplier_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpeedPickup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpeedPickup_Statics::NewProp_speedMultiplier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpeedPickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpeedPickup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpeedPickup_Statics::ClassParams = {
		&ASpeedPickup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASpeedPickup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpeedPickup_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpeedPickup_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpeedPickup_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpeedPickup_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ASpeedPickup()
	{
		if (!Z_Registration_Info_UClass_ASpeedPickup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpeedPickup.OuterSingleton, Z_Construct_UClass_ASpeedPickup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASpeedPickup.OuterSingleton;
	}
	template<> GPE230_LEVIVARGAS_API UClass* StaticClass<ASpeedPickup>()
	{
		return ASpeedPickup::StaticClass();
	}
	ASpeedPickup::ASpeedPickup() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpeedPickup);
	ASpeedPickup::~ASpeedPickup() {}
	struct Z_CompiledInDeferFile_FID_GPE230_LeviVargas_Source_GPE230_LeviVargas_Public_SpeedPickup_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GPE230_LeviVargas_Source_GPE230_LeviVargas_Public_SpeedPickup_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASpeedPickup, ASpeedPickup::StaticClass, TEXT("ASpeedPickup"), &Z_Registration_Info_UClass_ASpeedPickup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpeedPickup), 4231669792U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GPE230_LeviVargas_Source_GPE230_LeviVargas_Public_SpeedPickup_h_1819046434(TEXT("/Script/GPE230_LeviVargas"),
		Z_CompiledInDeferFile_FID_GPE230_LeviVargas_Source_GPE230_LeviVargas_Public_SpeedPickup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GPE230_LeviVargas_Source_GPE230_LeviVargas_Public_SpeedPickup_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

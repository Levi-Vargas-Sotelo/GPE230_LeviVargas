// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GPE230_LeviVargas/Public/MazeGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMazeGameMode() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	GPE230_LEVIVARGAS_API UClass* Z_Construct_UClass_AMazeCharacter_NoRegister();
	GPE230_LEVIVARGAS_API UClass* Z_Construct_UClass_AMazeGameMode();
	GPE230_LEVIVARGAS_API UClass* Z_Construct_UClass_AMazeGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GPE230_LeviVargas();
// End Cross Module References
	void AMazeGameMode::StaticRegisterNativesAMazeGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMazeGameMode);
	UClass* Z_Construct_UClass_AMazeGameMode_NoRegister()
	{
		return AMazeGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMazeGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPlayerCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultPlayerCharacter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMazeGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GPE230_LeviVargas,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMazeGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeGameMode_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MazeGameMode.h" },
		{ "ModuleRelativePath", "Public/MazeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeGameMode_Statics::NewProp_DefaultPlayerCharacter_MetaData[] = {
		{ "Category", "MazeGameMode" },
		{ "ModuleRelativePath", "Public/MazeGameMode.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMazeGameMode_Statics::NewProp_DefaultPlayerCharacter = { "DefaultPlayerCharacter", nullptr, (EPropertyFlags)0x0044000002000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMazeGameMode, DefaultPlayerCharacter), Z_Construct_UClass_UClass, Z_Construct_UClass_AMazeCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMazeGameMode_Statics::NewProp_DefaultPlayerCharacter_MetaData), Z_Construct_UClass_AMazeGameMode_Statics::NewProp_DefaultPlayerCharacter_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMazeGameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeGameMode_Statics::NewProp_DefaultPlayerCharacter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMazeGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMazeGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMazeGameMode_Statics::ClassParams = {
		&AMazeGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMazeGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMazeGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMazeGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMazeGameMode_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMazeGameMode_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMazeGameMode()
	{
		if (!Z_Registration_Info_UClass_AMazeGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMazeGameMode.OuterSingleton, Z_Construct_UClass_AMazeGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMazeGameMode.OuterSingleton;
	}
	template<> GPE230_LEVIVARGAS_API UClass* StaticClass<AMazeGameMode>()
	{
		return AMazeGameMode::StaticClass();
	}
	AMazeGameMode::AMazeGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMazeGameMode);
	AMazeGameMode::~AMazeGameMode() {}
	struct Z_CompiledInDeferFile_FID_GPE230_LeviVargas_Source_GPE230_LeviVargas_Public_MazeGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GPE230_LeviVargas_Source_GPE230_LeviVargas_Public_MazeGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMazeGameMode, AMazeGameMode::StaticClass, TEXT("AMazeGameMode"), &Z_Registration_Info_UClass_AMazeGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMazeGameMode), 3899725615U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GPE230_LeviVargas_Source_GPE230_LeviVargas_Public_MazeGameMode_h_159072648(TEXT("/Script/GPE230_LeviVargas"),
		Z_CompiledInDeferFile_FID_GPE230_LeviVargas_Source_GPE230_LeviVargas_Public_MazeGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GPE230_LeviVargas_Source_GPE230_LeviVargas_Public_MazeGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

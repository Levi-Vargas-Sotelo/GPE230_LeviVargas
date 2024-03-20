// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GPE230_LeviVargas/Public/MazeSaveGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMazeSaveGame() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	GPE230_LEVIVARGAS_API UClass* Z_Construct_UClass_UMazeSaveGame();
	GPE230_LEVIVARGAS_API UClass* Z_Construct_UClass_UMazeSaveGame_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GPE230_LeviVargas();
// End Cross Module References
	void UMazeSaveGame::StaticRegisterNativesUMazeSaveGame()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMazeSaveGame);
	UClass* Z_Construct_UClass_UMazeSaveGame_NoRegister()
	{
		return UMazeSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UMazeSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_furthestCompletedLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_furthestCompletedLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_masterVolumeSetting_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_masterVolumeSetting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_musicVolumeSetting_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_musicVolumeSetting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sfxVolumeSetting_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_sfxVolumeSetting;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMazeSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_GPE230_LeviVargas,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMazeSaveGame_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMazeSaveGame_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MazeSaveGame.h" },
		{ "ModuleRelativePath", "Public/MazeSaveGame.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMazeSaveGame_Statics::NewProp_furthestCompletedLevel_MetaData[] = {
		{ "Category", "MazeSaveGame" },
		{ "ModuleRelativePath", "Public/MazeSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMazeSaveGame_Statics::NewProp_furthestCompletedLevel = { "furthestCompletedLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMazeSaveGame, furthestCompletedLevel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMazeSaveGame_Statics::NewProp_furthestCompletedLevel_MetaData), Z_Construct_UClass_UMazeSaveGame_Statics::NewProp_furthestCompletedLevel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMazeSaveGame_Statics::NewProp_masterVolumeSetting_MetaData[] = {
		{ "Category", "MazeSaveGame" },
		{ "ModuleRelativePath", "Public/MazeSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMazeSaveGame_Statics::NewProp_masterVolumeSetting = { "masterVolumeSetting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMazeSaveGame, masterVolumeSetting), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMazeSaveGame_Statics::NewProp_masterVolumeSetting_MetaData), Z_Construct_UClass_UMazeSaveGame_Statics::NewProp_masterVolumeSetting_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMazeSaveGame_Statics::NewProp_musicVolumeSetting_MetaData[] = {
		{ "Category", "MazeSaveGame" },
		{ "ModuleRelativePath", "Public/MazeSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMazeSaveGame_Statics::NewProp_musicVolumeSetting = { "musicVolumeSetting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMazeSaveGame, musicVolumeSetting), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMazeSaveGame_Statics::NewProp_musicVolumeSetting_MetaData), Z_Construct_UClass_UMazeSaveGame_Statics::NewProp_musicVolumeSetting_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMazeSaveGame_Statics::NewProp_sfxVolumeSetting_MetaData[] = {
		{ "Category", "MazeSaveGame" },
		{ "ModuleRelativePath", "Public/MazeSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMazeSaveGame_Statics::NewProp_sfxVolumeSetting = { "sfxVolumeSetting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMazeSaveGame, sfxVolumeSetting), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMazeSaveGame_Statics::NewProp_sfxVolumeSetting_MetaData), Z_Construct_UClass_UMazeSaveGame_Statics::NewProp_sfxVolumeSetting_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMazeSaveGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMazeSaveGame_Statics::NewProp_furthestCompletedLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMazeSaveGame_Statics::NewProp_masterVolumeSetting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMazeSaveGame_Statics::NewProp_musicVolumeSetting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMazeSaveGame_Statics::NewProp_sfxVolumeSetting,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMazeSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMazeSaveGame>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMazeSaveGame_Statics::ClassParams = {
		&UMazeSaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMazeSaveGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMazeSaveGame_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMazeSaveGame_Statics::Class_MetaDataParams), Z_Construct_UClass_UMazeSaveGame_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMazeSaveGame_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMazeSaveGame()
	{
		if (!Z_Registration_Info_UClass_UMazeSaveGame.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMazeSaveGame.OuterSingleton, Z_Construct_UClass_UMazeSaveGame_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMazeSaveGame.OuterSingleton;
	}
	template<> GPE230_LEVIVARGAS_API UClass* StaticClass<UMazeSaveGame>()
	{
		return UMazeSaveGame::StaticClass();
	}
	UMazeSaveGame::UMazeSaveGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMazeSaveGame);
	UMazeSaveGame::~UMazeSaveGame() {}
	struct Z_CompiledInDeferFile_FID_GPE230_LeviVargas_Source_GPE230_LeviVargas_Public_MazeSaveGame_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GPE230_LeviVargas_Source_GPE230_LeviVargas_Public_MazeSaveGame_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMazeSaveGame, UMazeSaveGame::StaticClass, TEXT("UMazeSaveGame"), &Z_Registration_Info_UClass_UMazeSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMazeSaveGame), 2441033059U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GPE230_LeviVargas_Source_GPE230_LeviVargas_Public_MazeSaveGame_h_1190352884(TEXT("/Script/GPE230_LeviVargas"),
		Z_CompiledInDeferFile_FID_GPE230_LeviVargas_Source_GPE230_LeviVargas_Public_MazeSaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GPE230_LeviVargas_Source_GPE230_LeviVargas_Public_MazeSaveGame_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GPE230_LeviVargas/Public/VictoryTriggerVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVictoryTriggerVolume() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBox();
	GPE230_LEVIVARGAS_API UClass* Z_Construct_UClass_AMazeCharacter_NoRegister();
	GPE230_LEVIVARGAS_API UClass* Z_Construct_UClass_AVictoryTriggerVolume();
	GPE230_LEVIVARGAS_API UClass* Z_Construct_UClass_AVictoryTriggerVolume_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GPE230_LeviVargas();
// End Cross Module References
	DEFINE_FUNCTION(AVictoryTriggerVolume::execOpenVictoryScreen)
	{
		P_GET_OBJECT(AMazeCharacter,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenVictoryScreen(Z_Param_player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVictoryTriggerVolume::execCheckActorType)
	{
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckActorType(Z_Param_OverlappedActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	void AVictoryTriggerVolume::StaticRegisterNativesAVictoryTriggerVolume()
	{
		UClass* Class = AVictoryTriggerVolume::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckActorType", &AVictoryTriggerVolume::execCheckActorType },
			{ "OpenVictoryScreen", &AVictoryTriggerVolume::execOpenVictoryScreen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVictoryTriggerVolume_CheckActorType_Statics
	{
		struct VictoryTriggerVolume_eventCheckActorType_Parms
		{
			AActor* OverlappedActor;
			AActor* OtherActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVictoryTriggerVolume_CheckActorType_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VictoryTriggerVolume_eventCheckActorType_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVictoryTriggerVolume_CheckActorType_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VictoryTriggerVolume_eventCheckActorType_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVictoryTriggerVolume_CheckActorType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVictoryTriggerVolume_CheckActorType_Statics::NewProp_OverlappedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVictoryTriggerVolume_CheckActorType_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVictoryTriggerVolume_CheckActorType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VictoryTriggerVolume.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVictoryTriggerVolume_CheckActorType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVictoryTriggerVolume, nullptr, "CheckActorType", nullptr, nullptr, Z_Construct_UFunction_AVictoryTriggerVolume_CheckActorType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVictoryTriggerVolume_CheckActorType_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVictoryTriggerVolume_CheckActorType_Statics::VictoryTriggerVolume_eventCheckActorType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVictoryTriggerVolume_CheckActorType_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVictoryTriggerVolume_CheckActorType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVictoryTriggerVolume_CheckActorType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AVictoryTriggerVolume_CheckActorType_Statics::VictoryTriggerVolume_eventCheckActorType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AVictoryTriggerVolume_CheckActorType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVictoryTriggerVolume_CheckActorType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVictoryTriggerVolume_OpenVictoryScreen_Statics
	{
		struct VictoryTriggerVolume_eventOpenVictoryScreen_Parms
		{
			AMazeCharacter* player;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVictoryTriggerVolume_OpenVictoryScreen_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VictoryTriggerVolume_eventOpenVictoryScreen_Parms, player), Z_Construct_UClass_AMazeCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVictoryTriggerVolume_OpenVictoryScreen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVictoryTriggerVolume_OpenVictoryScreen_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVictoryTriggerVolume_OpenVictoryScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VictoryTriggerVolume.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVictoryTriggerVolume_OpenVictoryScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVictoryTriggerVolume, nullptr, "OpenVictoryScreen", nullptr, nullptr, Z_Construct_UFunction_AVictoryTriggerVolume_OpenVictoryScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVictoryTriggerVolume_OpenVictoryScreen_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVictoryTriggerVolume_OpenVictoryScreen_Statics::VictoryTriggerVolume_eventOpenVictoryScreen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVictoryTriggerVolume_OpenVictoryScreen_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVictoryTriggerVolume_OpenVictoryScreen_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVictoryTriggerVolume_OpenVictoryScreen_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AVictoryTriggerVolume_OpenVictoryScreen_Statics::VictoryTriggerVolume_eventOpenVictoryScreen_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AVictoryTriggerVolume_OpenVictoryScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVictoryTriggerVolume_OpenVictoryScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVictoryTriggerVolume);
	UClass* Z_Construct_UClass_AVictoryTriggerVolume_NoRegister()
	{
		return AVictoryTriggerVolume::StaticClass();
	}
	struct Z_Construct_UClass_AVictoryTriggerVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVictoryTriggerVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerBox,
		(UObject* (*)())Z_Construct_UPackage__Script_GPE230_LeviVargas,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVictoryTriggerVolume_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AVictoryTriggerVolume_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVictoryTriggerVolume_CheckActorType, "CheckActorType" }, // 2311916140
		{ &Z_Construct_UFunction_AVictoryTriggerVolume_OpenVictoryScreen, "OpenVictoryScreen" }, // 1084416724
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVictoryTriggerVolume_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVictoryTriggerVolume_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "VictoryTriggerVolume.h" },
		{ "ModuleRelativePath", "Public/VictoryTriggerVolume.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVictoryTriggerVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVictoryTriggerVolume>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVictoryTriggerVolume_Statics::ClassParams = {
		&AVictoryTriggerVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVictoryTriggerVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_AVictoryTriggerVolume_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AVictoryTriggerVolume()
	{
		if (!Z_Registration_Info_UClass_AVictoryTriggerVolume.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVictoryTriggerVolume.OuterSingleton, Z_Construct_UClass_AVictoryTriggerVolume_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVictoryTriggerVolume.OuterSingleton;
	}
	template<> GPE230_LEVIVARGAS_API UClass* StaticClass<AVictoryTriggerVolume>()
	{
		return AVictoryTriggerVolume::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVictoryTriggerVolume);
	AVictoryTriggerVolume::~AVictoryTriggerVolume() {}
	struct Z_CompiledInDeferFile_FID_GPE230_LeviVargas_Source_GPE230_LeviVargas_Public_VictoryTriggerVolume_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GPE230_LeviVargas_Source_GPE230_LeviVargas_Public_VictoryTriggerVolume_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVictoryTriggerVolume, AVictoryTriggerVolume::StaticClass, TEXT("AVictoryTriggerVolume"), &Z_Registration_Info_UClass_AVictoryTriggerVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVictoryTriggerVolume), 2723559409U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GPE230_LeviVargas_Source_GPE230_LeviVargas_Public_VictoryTriggerVolume_h_2811648375(TEXT("/Script/GPE230_LeviVargas"),
		Z_CompiledInDeferFile_FID_GPE230_LeviVargas_Source_GPE230_LeviVargas_Public_VictoryTriggerVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GPE230_LeviVargas_Source_GPE230_LeviVargas_Public_VictoryTriggerVolume_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

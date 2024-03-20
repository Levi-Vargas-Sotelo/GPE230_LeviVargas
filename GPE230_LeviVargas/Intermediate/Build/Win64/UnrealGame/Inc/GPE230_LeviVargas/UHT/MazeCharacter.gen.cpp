// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GPE230_LeviVargas/Public/MazeCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMazeCharacter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	GPE230_LEVIVARGAS_API UClass* Z_Construct_UClass_AMazeCharacter();
	GPE230_LEVIVARGAS_API UClass* Z_Construct_UClass_AMazeCharacter_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GPE230_LeviVargas();
// End Cross Module References
	DEFINE_FUNCTION(AMazeCharacter::execGetCurrentHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentHealth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMazeCharacter::execActivateStunParticleSystem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateStunParticleSystem();
		P_NATIVE_END;
	}
	void AMazeCharacter::StaticRegisterNativesAMazeCharacter()
	{
		UClass* Class = AMazeCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateStunParticleSystem", &AMazeCharacter::execActivateStunParticleSystem },
			{ "GetCurrentHealth", &AMazeCharacter::execGetCurrentHealth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMazeCharacter_ActivateStunParticleSystem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMazeCharacter_ActivateStunParticleSystem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MazeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMazeCharacter_ActivateStunParticleSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMazeCharacter, nullptr, "ActivateStunParticleSystem", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeCharacter_ActivateStunParticleSystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMazeCharacter_ActivateStunParticleSystem_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMazeCharacter_ActivateStunParticleSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMazeCharacter_ActivateStunParticleSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMazeCharacter_GetCurrentHealth_Statics
	{
		struct MazeCharacter_eventGetCurrentHealth_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMazeCharacter_GetCurrentHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MazeCharacter_eventGetCurrentHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMazeCharacter_GetCurrentHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMazeCharacter_GetCurrentHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMazeCharacter_GetCurrentHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MazeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMazeCharacter_GetCurrentHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMazeCharacter, nullptr, "GetCurrentHealth", nullptr, nullptr, Z_Construct_UFunction_AMazeCharacter_GetCurrentHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeCharacter_GetCurrentHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMazeCharacter_GetCurrentHealth_Statics::MazeCharacter_eventGetCurrentHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeCharacter_GetCurrentHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMazeCharacter_GetCurrentHealth_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeCharacter_GetCurrentHealth_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMazeCharacter_GetCurrentHealth_Statics::MazeCharacter_eventGetCurrentHealth_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMazeCharacter_GetCurrentHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMazeCharacter_GetCurrentHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMazeCharacter);
	UClass* Z_Construct_UClass_AMazeCharacter_NoRegister()
	{
		return AMazeCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMazeCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_moveSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_moveSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rotationSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_rotationSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_jumping_MetaData[];
#endif
		static void NewProp_jumping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_jumping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__deathAnim_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__deathAnim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__stunSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__stunSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__gameOverScreenTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp__gameOverScreenTemplate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__gameOverScreenInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__gameOverScreenInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__victoryScreenTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp__victoryScreenTemplate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__victoryScreenInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__victoryScreenInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__HUDTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp__HUDTemplate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__HUDInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__HUDInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_defaultMoveSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_defaultMoveSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMazeCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_GPE230_LeviVargas,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMazeCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMazeCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMazeCharacter_ActivateStunParticleSystem, "ActivateStunParticleSystem" }, // 3823966861
		{ &Z_Construct_UFunction_AMazeCharacter_GetCurrentHealth, "GetCurrentHealth" }, // 1016177962
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMazeCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MazeCharacter.h" },
		{ "ModuleRelativePath", "Public/MazeCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeCharacter_Statics::NewProp_moveSpeed_MetaData[] = {
		{ "Category", "MazeCharacter" },
		{ "ModuleRelativePath", "Public/MazeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMazeCharacter_Statics::NewProp_moveSpeed = { "moveSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMazeCharacter, moveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMazeCharacter_Statics::NewProp_moveSpeed_MetaData), Z_Construct_UClass_AMazeCharacter_Statics::NewProp_moveSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeCharacter_Statics::NewProp_rotationSpeed_MetaData[] = {
		{ "Category", "MazeCharacter" },
		{ "ModuleRelativePath", "Public/MazeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMazeCharacter_Statics::NewProp_rotationSpeed = { "rotationSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMazeCharacter, rotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMazeCharacter_Statics::NewProp_rotationSpeed_MetaData), Z_Construct_UClass_AMazeCharacter_Statics::NewProp_rotationSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeCharacter_Statics::NewProp_jumping_MetaData[] = {
		{ "ModuleRelativePath", "Public/MazeCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AMazeCharacter_Statics::NewProp_jumping_SetBit(void* Obj)
	{
		((AMazeCharacter*)Obj)->jumping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMazeCharacter_Statics::NewProp_jumping = { "jumping", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMazeCharacter), &Z_Construct_UClass_AMazeCharacter_Statics::NewProp_jumping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMazeCharacter_Statics::NewProp_jumping_MetaData), Z_Construct_UClass_AMazeCharacter_Statics::NewProp_jumping_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeCharacter_Statics::NewProp__deathAnim_MetaData[] = {
		{ "Category", "MazeCharacter" },
		{ "ModuleRelativePath", "Public/MazeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMazeCharacter_Statics::NewProp__deathAnim = { "_deathAnim", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMazeCharacter, _deathAnim), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMazeCharacter_Statics::NewProp__deathAnim_MetaData), Z_Construct_UClass_AMazeCharacter_Statics::NewProp__deathAnim_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeCharacter_Statics::NewProp__stunSystem_MetaData[] = {
		{ "Category", "MazeCharacter" },
		{ "ModuleRelativePath", "Public/MazeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMazeCharacter_Statics::NewProp__stunSystem = { "_stunSystem", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMazeCharacter, _stunSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMazeCharacter_Statics::NewProp__stunSystem_MetaData), Z_Construct_UClass_AMazeCharacter_Statics::NewProp__stunSystem_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeCharacter_Statics::NewProp__gameOverScreenTemplate_MetaData[] = {
		{ "Category", "MazeCharacter" },
		{ "ModuleRelativePath", "Public/MazeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMazeCharacter_Statics::NewProp__gameOverScreenTemplate = { "_gameOverScreenTemplate", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMazeCharacter, _gameOverScreenTemplate), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMazeCharacter_Statics::NewProp__gameOverScreenTemplate_MetaData), Z_Construct_UClass_AMazeCharacter_Statics::NewProp__gameOverScreenTemplate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeCharacter_Statics::NewProp__gameOverScreenInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MazeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMazeCharacter_Statics::NewProp__gameOverScreenInstance = { "_gameOverScreenInstance", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMazeCharacter, _gameOverScreenInstance), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMazeCharacter_Statics::NewProp__gameOverScreenInstance_MetaData), Z_Construct_UClass_AMazeCharacter_Statics::NewProp__gameOverScreenInstance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeCharacter_Statics::NewProp__victoryScreenTemplate_MetaData[] = {
		{ "Category", "MazeCharacter" },
		{ "ModuleRelativePath", "Public/MazeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMazeCharacter_Statics::NewProp__victoryScreenTemplate = { "_victoryScreenTemplate", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMazeCharacter, _victoryScreenTemplate), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMazeCharacter_Statics::NewProp__victoryScreenTemplate_MetaData), Z_Construct_UClass_AMazeCharacter_Statics::NewProp__victoryScreenTemplate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeCharacter_Statics::NewProp__victoryScreenInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MazeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMazeCharacter_Statics::NewProp__victoryScreenInstance = { "_victoryScreenInstance", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMazeCharacter, _victoryScreenInstance), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMazeCharacter_Statics::NewProp__victoryScreenInstance_MetaData), Z_Construct_UClass_AMazeCharacter_Statics::NewProp__victoryScreenInstance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeCharacter_Statics::NewProp__HUDTemplate_MetaData[] = {
		{ "Category", "MazeCharacter" },
		{ "ModuleRelativePath", "Public/MazeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMazeCharacter_Statics::NewProp__HUDTemplate = { "_HUDTemplate", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMazeCharacter, _HUDTemplate), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMazeCharacter_Statics::NewProp__HUDTemplate_MetaData), Z_Construct_UClass_AMazeCharacter_Statics::NewProp__HUDTemplate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeCharacter_Statics::NewProp__HUDInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MazeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMazeCharacter_Statics::NewProp__HUDInstance = { "_HUDInstance", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMazeCharacter, _HUDInstance), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMazeCharacter_Statics::NewProp__HUDInstance_MetaData), Z_Construct_UClass_AMazeCharacter_Statics::NewProp__HUDInstance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeCharacter_Statics::NewProp_maxHealth_MetaData[] = {
		{ "Category", "MazeCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//value for the max health \n" },
#endif
		{ "ModuleRelativePath", "Public/MazeCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "value for the max health" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMazeCharacter_Statics::NewProp_maxHealth = { "maxHealth", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMazeCharacter, maxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMazeCharacter_Statics::NewProp_maxHealth_MetaData), Z_Construct_UClass_AMazeCharacter_Statics::NewProp_maxHealth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeCharacter_Statics::NewProp_defaultMoveSpeed_MetaData[] = {
		{ "Category", "MazeCharacter" },
		{ "ModuleRelativePath", "Public/MazeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMazeCharacter_Statics::NewProp_defaultMoveSpeed = { "defaultMoveSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMazeCharacter, defaultMoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMazeCharacter_Statics::NewProp_defaultMoveSpeed_MetaData), Z_Construct_UClass_AMazeCharacter_Statics::NewProp_defaultMoveSpeed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMazeCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeCharacter_Statics::NewProp_moveSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeCharacter_Statics::NewProp_rotationSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeCharacter_Statics::NewProp_jumping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeCharacter_Statics::NewProp__deathAnim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeCharacter_Statics::NewProp__stunSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeCharacter_Statics::NewProp__gameOverScreenTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeCharacter_Statics::NewProp__gameOverScreenInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeCharacter_Statics::NewProp__victoryScreenTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeCharacter_Statics::NewProp__victoryScreenInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeCharacter_Statics::NewProp__HUDTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeCharacter_Statics::NewProp__HUDInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeCharacter_Statics::NewProp_maxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeCharacter_Statics::NewProp_defaultMoveSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMazeCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMazeCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMazeCharacter_Statics::ClassParams = {
		&AMazeCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMazeCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMazeCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMazeCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMazeCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMazeCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMazeCharacter()
	{
		if (!Z_Registration_Info_UClass_AMazeCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMazeCharacter.OuterSingleton, Z_Construct_UClass_AMazeCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMazeCharacter.OuterSingleton;
	}
	template<> GPE230_LEVIVARGAS_API UClass* StaticClass<AMazeCharacter>()
	{
		return AMazeCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMazeCharacter);
	AMazeCharacter::~AMazeCharacter() {}
	struct Z_CompiledInDeferFile_FID_GPE230_LeviVargas_Source_GPE230_LeviVargas_Public_MazeCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GPE230_LeviVargas_Source_GPE230_LeviVargas_Public_MazeCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMazeCharacter, AMazeCharacter::StaticClass, TEXT("AMazeCharacter"), &Z_Registration_Info_UClass_AMazeCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMazeCharacter), 3455714350U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GPE230_LeviVargas_Source_GPE230_LeviVargas_Public_MazeCharacter_h_1755232552(TEXT("/Script/GPE230_LeviVargas"),
		Z_CompiledInDeferFile_FID_GPE230_LeviVargas_Source_GPE230_LeviVargas_Public_MazeCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GPE230_LeviVargas_Source_GPE230_LeviVargas_Public_MazeCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

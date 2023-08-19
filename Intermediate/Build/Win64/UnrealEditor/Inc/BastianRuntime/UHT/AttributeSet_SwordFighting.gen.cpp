// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BastianRuntime/Public/AttributeSet_SwordFighting.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttributeSet_SwordFighting() {}
// Cross Module References
	BASTIANRUNTIME_API UClass* Z_Construct_UClass_UAttributeSet_SwordFighting();
	BASTIANRUNTIME_API UClass* Z_Construct_UClass_UAttributeSet_SwordFighting_NoRegister();
	BASTIANRUNTIME_API UClass* Z_Construct_UClass_UGameAttributeSet();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_BastianRuntime();
// End Cross Module References
	DEFINE_FUNCTION(UAttributeSet_SwordFighting::execOnRep_SwordTechnique)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_SwordTechnique(Z_Param_Out_OldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeSet_SwordFighting::execOnRep_Swiftness)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Swiftness(Z_Param_Out_OldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeSet_SwordFighting::execGetGameplayTag_SwordTechnique)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=P_THIS->GetGameplayTag_SwordTechnique();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeSet_SwordFighting::execSetBaseSwordTechnique)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBaseSwordTechnique(Z_Param_NewVal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeSet_SwordFighting::execGetRelativeSwordTechnique)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRelativeSwordTechnique();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeSet_SwordFighting::execGetCurrentSwordTechnique)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentSwordTechnique();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeSet_SwordFighting::execGetBaseSwordTechnique)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetBaseSwordTechnique();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeSet_SwordFighting::execGetSwordTechniqueAttribute)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayAttribute*)Z_Param__Result=UAttributeSet_SwordFighting::GetSwordTechniqueAttribute();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeSet_SwordFighting::execGetGameplayTag_Swiftness)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=P_THIS->GetGameplayTag_Swiftness();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeSet_SwordFighting::execSetBaseSwiftness)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBaseSwiftness(Z_Param_NewVal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeSet_SwordFighting::execGetRelativeSwiftness)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRelativeSwiftness();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeSet_SwordFighting::execGetCurrentSwiftness)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentSwiftness();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeSet_SwordFighting::execGetBaseSwiftness)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetBaseSwiftness();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeSet_SwordFighting::execGetSwiftnessAttribute)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayAttribute*)Z_Param__Result=UAttributeSet_SwordFighting::GetSwiftnessAttribute();
		P_NATIVE_END;
	}
	void UAttributeSet_SwordFighting::StaticRegisterNativesUAttributeSet_SwordFighting()
	{
		UClass* Class = UAttributeSet_SwordFighting::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBaseSwiftness", &UAttributeSet_SwordFighting::execGetBaseSwiftness },
			{ "GetBaseSwordTechnique", &UAttributeSet_SwordFighting::execGetBaseSwordTechnique },
			{ "GetCurrentSwiftness", &UAttributeSet_SwordFighting::execGetCurrentSwiftness },
			{ "GetCurrentSwordTechnique", &UAttributeSet_SwordFighting::execGetCurrentSwordTechnique },
			{ "GetGameplayTag_Swiftness", &UAttributeSet_SwordFighting::execGetGameplayTag_Swiftness },
			{ "GetGameplayTag_SwordTechnique", &UAttributeSet_SwordFighting::execGetGameplayTag_SwordTechnique },
			{ "GetRelativeSwiftness", &UAttributeSet_SwordFighting::execGetRelativeSwiftness },
			{ "GetRelativeSwordTechnique", &UAttributeSet_SwordFighting::execGetRelativeSwordTechnique },
			{ "GetSwiftnessAttribute", &UAttributeSet_SwordFighting::execGetSwiftnessAttribute },
			{ "GetSwordTechniqueAttribute", &UAttributeSet_SwordFighting::execGetSwordTechniqueAttribute },
			{ "OnRep_Swiftness", &UAttributeSet_SwordFighting::execOnRep_Swiftness },
			{ "OnRep_SwordTechnique", &UAttributeSet_SwordFighting::execOnRep_SwordTechnique },
			{ "SetBaseSwiftness", &UAttributeSet_SwordFighting::execSetBaseSwiftness },
			{ "SetBaseSwordTechnique", &UAttributeSet_SwordFighting::execSetBaseSwordTechnique },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAttributeSet_SwordFighting_GetBaseSwiftness_Statics
	{
		struct AttributeSet_SwordFighting_eventGetBaseSwiftness_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttributeSet_SwordFighting_GetBaseSwiftness_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AttributeSet_SwordFighting_eventGetBaseSwiftness_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSet_SwordFighting_GetBaseSwiftness_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSet_SwordFighting_GetBaseSwiftness_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSet_SwordFighting_GetBaseSwiftness_Statics::Function_MetaDataParams[] = {
		{ "Category", "AttributeSet_SwordFighting|Swiftness" },
		{ "Comment", "/** Gets current Swiftness base value (without any currently ongoing modifications */" },
		{ "ModuleRelativePath", "Public/AttributeSet_SwordFighting.h" },
		{ "ToolTip", "Gets current Swiftness base value (without any currently ongoing modifications" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSet_SwordFighting_GetBaseSwiftness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSet_SwordFighting, nullptr, "GetBaseSwiftness", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeSet_SwordFighting_GetBaseSwiftness_Statics::AttributeSet_SwordFighting_eventGetBaseSwiftness_Parms), Z_Construct_UFunction_UAttributeSet_SwordFighting_GetBaseSwiftness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_SwordFighting_GetBaseSwiftness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeSet_SwordFighting_GetBaseSwiftness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_SwordFighting_GetBaseSwiftness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeSet_SwordFighting_GetBaseSwiftness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSet_SwordFighting_GetBaseSwiftness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeSet_SwordFighting_GetBaseSwordTechnique_Statics
	{
		struct AttributeSet_SwordFighting_eventGetBaseSwordTechnique_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttributeSet_SwordFighting_GetBaseSwordTechnique_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AttributeSet_SwordFighting_eventGetBaseSwordTechnique_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSet_SwordFighting_GetBaseSwordTechnique_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSet_SwordFighting_GetBaseSwordTechnique_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSet_SwordFighting_GetBaseSwordTechnique_Statics::Function_MetaDataParams[] = {
		{ "Category", "AttributeSet_SwordFighting|SwordTechnique" },
		{ "Comment", "/** Gets current SwordTechnique base value (without any currently ongoing modifications */" },
		{ "ModuleRelativePath", "Public/AttributeSet_SwordFighting.h" },
		{ "ToolTip", "Gets current SwordTechnique base value (without any currently ongoing modifications" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSet_SwordFighting_GetBaseSwordTechnique_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSet_SwordFighting, nullptr, "GetBaseSwordTechnique", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeSet_SwordFighting_GetBaseSwordTechnique_Statics::AttributeSet_SwordFighting_eventGetBaseSwordTechnique_Parms), Z_Construct_UFunction_UAttributeSet_SwordFighting_GetBaseSwordTechnique_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_SwordFighting_GetBaseSwordTechnique_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeSet_SwordFighting_GetBaseSwordTechnique_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_SwordFighting_GetBaseSwordTechnique_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeSet_SwordFighting_GetBaseSwordTechnique()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSet_SwordFighting_GetBaseSwordTechnique_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeSet_SwordFighting_GetCurrentSwiftness_Statics
	{
		struct AttributeSet_SwordFighting_eventGetCurrentSwiftness_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttributeSet_SwordFighting_GetCurrentSwiftness_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AttributeSet_SwordFighting_eventGetCurrentSwiftness_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSet_SwordFighting_GetCurrentSwiftness_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSet_SwordFighting_GetCurrentSwiftness_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSet_SwordFighting_GetCurrentSwiftness_Statics::Function_MetaDataParams[] = {
		{ "Category", "AttributeSet_SwordFighting|Swiftness" },
		{ "Comment", "/** Gets current Swiftness value. Current value is base value plus/minus all modifiers */" },
		{ "ModuleRelativePath", "Public/AttributeSet_SwordFighting.h" },
		{ "ToolTip", "Gets current Swiftness value. Current value is base value plus/minus all modifiers" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSet_SwordFighting_GetCurrentSwiftness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSet_SwordFighting, nullptr, "GetCurrentSwiftness", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeSet_SwordFighting_GetCurrentSwiftness_Statics::AttributeSet_SwordFighting_eventGetCurrentSwiftness_Parms), Z_Construct_UFunction_UAttributeSet_SwordFighting_GetCurrentSwiftness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_SwordFighting_GetCurrentSwiftness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeSet_SwordFighting_GetCurrentSwiftness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_SwordFighting_GetCurrentSwiftness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeSet_SwordFighting_GetCurrentSwiftness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSet_SwordFighting_GetCurrentSwiftness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeSet_SwordFighting_GetCurrentSwordTechnique_Statics
	{
		struct AttributeSet_SwordFighting_eventGetCurrentSwordTechnique_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttributeSet_SwordFighting_GetCurrentSwordTechnique_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AttributeSet_SwordFighting_eventGetCurrentSwordTechnique_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSet_SwordFighting_GetCurrentSwordTechnique_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSet_SwordFighting_GetCurrentSwordTechnique_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSet_SwordFighting_GetCurrentSwordTechnique_Statics::Function_MetaDataParams[] = {
		{ "Category", "AttributeSet_SwordFighting|SwordTechnique" },
		{ "Comment", "/** Gets current SwordTechnique value. Current value is base value plus/minus all modifiers */" },
		{ "ModuleRelativePath", "Public/AttributeSet_SwordFighting.h" },
		{ "ToolTip", "Gets current SwordTechnique value. Current value is base value plus/minus all modifiers" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSet_SwordFighting_GetCurrentSwordTechnique_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSet_SwordFighting, nullptr, "GetCurrentSwordTechnique", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeSet_SwordFighting_GetCurrentSwordTechnique_Statics::AttributeSet_SwordFighting_eventGetCurrentSwordTechnique_Parms), Z_Construct_UFunction_UAttributeSet_SwordFighting_GetCurrentSwordTechnique_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_SwordFighting_GetCurrentSwordTechnique_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeSet_SwordFighting_GetCurrentSwordTechnique_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_SwordFighting_GetCurrentSwordTechnique_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeSet_SwordFighting_GetCurrentSwordTechnique()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSet_SwordFighting_GetCurrentSwordTechnique_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeSet_SwordFighting_GetGameplayTag_Swiftness_Statics
	{
		struct AttributeSet_SwordFighting_eventGetGameplayTag_Swiftness_Parms
		{
			FGameplayTag ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeSet_SwordFighting_GetGameplayTag_Swiftness_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AttributeSet_SwordFighting_eventGetGameplayTag_Swiftness_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSet_SwordFighting_GetGameplayTag_Swiftness_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSet_SwordFighting_GetGameplayTag_Swiftness_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSet_SwordFighting_GetGameplayTag_Swiftness_Statics::Function_MetaDataParams[] = {
		{ "Category", "AttributeSet_SwordFighting|Swiftness" },
		{ "Comment", "/** Each attribute corresponds to a gameplay tag with the format AttributeSets.YourAttributeSetName.AttributeName */" },
		{ "ModuleRelativePath", "Public/AttributeSet_SwordFighting.h" },
		{ "ToolTip", "Each attribute corresponds to a gameplay tag with the format AttributeSets.YourAttributeSetName.AttributeName" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSet_SwordFighting_GetGameplayTag_Swiftness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSet_SwordFighting, nullptr, "GetGameplayTag_Swiftness", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeSet_SwordFighting_GetGameplayTag_Swiftness_Statics::AttributeSet_SwordFighting_eventGetGameplayTag_Swiftness_Parms), Z_Construct_UFunction_UAttributeSet_SwordFighting_GetGameplayTag_Swiftness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_SwordFighting_GetGameplayTag_Swiftness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeSet_SwordFighting_GetGameplayTag_Swiftness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_SwordFighting_GetGameplayTag_Swiftness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeSet_SwordFighting_GetGameplayTag_Swiftness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSet_SwordFighting_GetGameplayTag_Swiftness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeSet_SwordFighting_GetGameplayTag_SwordTechnique_Statics
	{
		struct AttributeSet_SwordFighting_eventGetGameplayTag_SwordTechnique_Parms
		{
			FGameplayTag ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeSet_SwordFighting_GetGameplayTag_SwordTechnique_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AttributeSet_SwordFighting_eventGetGameplayTag_SwordTechnique_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSet_SwordFighting_GetGameplayTag_SwordTechnique_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSet_SwordFighting_GetGameplayTag_SwordTechnique_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSet_SwordFighting_GetGameplayTag_SwordTechnique_Statics::Function_MetaDataParams[] = {
		{ "Category", "AttributeSet_SwordFighting|SwordTechnique" },
		{ "Comment", "/** Each attribute corresponds to a gameplay tag with the format AttributeSets.YourAttributeSetName.AttributeName */" },
		{ "ModuleRelativePath", "Public/AttributeSet_SwordFighting.h" },
		{ "ToolTip", "Each attribute corresponds to a gameplay tag with the format AttributeSets.YourAttributeSetName.AttributeName" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSet_SwordFighting_GetGameplayTag_SwordTechnique_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSet_SwordFighting, nullptr, "GetGameplayTag_SwordTechnique", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeSet_SwordFighting_GetGameplayTag_SwordTechnique_Statics::AttributeSet_SwordFighting_eventGetGameplayTag_SwordTechnique_Parms), Z_Construct_UFunction_UAttributeSet_SwordFighting_GetGameplayTag_SwordTechnique_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_SwordFighting_GetGameplayTag_SwordTechnique_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeSet_SwordFighting_GetGameplayTag_SwordTechnique_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_SwordFighting_GetGameplayTag_SwordTechnique_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeSet_SwordFighting_GetGameplayTag_SwordTechnique()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSet_SwordFighting_GetGameplayTag_SwordTechnique_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeSet_SwordFighting_GetRelativeSwiftness_Statics
	{
		struct AttributeSet_SwordFighting_eventGetRelativeSwiftness_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttributeSet_SwordFighting_GetRelativeSwiftness_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AttributeSet_SwordFighting_eventGetRelativeSwiftness_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSet_SwordFighting_GetRelativeSwiftness_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSet_SwordFighting_GetRelativeSwiftness_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSet_SwordFighting_GetRelativeSwiftness_Statics::Function_MetaDataParams[] = {
		{ "Category", "AttributeSet_SwordFighting|Swiftness" },
		{ "Comment", "/** Gets relative Swiftness value between 0 and 1. Current value is base value plus/minus all modifiers */" },
		{ "ModuleRelativePath", "Public/AttributeSet_SwordFighting.h" },
		{ "ToolTip", "Gets relative Swiftness value between 0 and 1. Current value is base value plus/minus all modifiers" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSet_SwordFighting_GetRelativeSwiftness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSet_SwordFighting, nullptr, "GetRelativeSwiftness", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeSet_SwordFighting_GetRelativeSwiftness_Statics::AttributeSet_SwordFighting_eventGetRelativeSwiftness_Parms), Z_Construct_UFunction_UAttributeSet_SwordFighting_GetRelativeSwiftness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_SwordFighting_GetRelativeSwiftness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeSet_SwordFighting_GetRelativeSwiftness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_SwordFighting_GetRelativeSwiftness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeSet_SwordFighting_GetRelativeSwiftness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSet_SwordFighting_GetRelativeSwiftness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeSet_SwordFighting_GetRelativeSwordTechnique_Statics
	{
		struct AttributeSet_SwordFighting_eventGetRelativeSwordTechnique_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttributeSet_SwordFighting_GetRelativeSwordTechnique_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AttributeSet_SwordFighting_eventGetRelativeSwordTechnique_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSet_SwordFighting_GetRelativeSwordTechnique_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSet_SwordFighting_GetRelativeSwordTechnique_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSet_SwordFighting_GetRelativeSwordTechnique_Statics::Function_MetaDataParams[] = {
		{ "Category", "AttributeSet_SwordFighting|SwordTechnique" },
		{ "Comment", "/** Gets relative SwordTechnique value between 0 and 1. Current value is base value plus/minus all modifiers */" },
		{ "ModuleRelativePath", "Public/AttributeSet_SwordFighting.h" },
		{ "ToolTip", "Gets relative SwordTechnique value between 0 and 1. Current value is base value plus/minus all modifiers" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSet_SwordFighting_GetRelativeSwordTechnique_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSet_SwordFighting, nullptr, "GetRelativeSwordTechnique", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeSet_SwordFighting_GetRelativeSwordTechnique_Statics::AttributeSet_SwordFighting_eventGetRelativeSwordTechnique_Parms), Z_Construct_UFunction_UAttributeSet_SwordFighting_GetRelativeSwordTechnique_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_SwordFighting_GetRelativeSwordTechnique_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeSet_SwordFighting_GetRelativeSwordTechnique_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_SwordFighting_GetRelativeSwordTechnique_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeSet_SwordFighting_GetRelativeSwordTechnique()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSet_SwordFighting_GetRelativeSwordTechnique_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeSet_SwordFighting_GetSwiftnessAttribute_Statics
	{
		struct AttributeSet_SwordFighting_eventGetSwiftnessAttribute_Parms
		{
			FGameplayAttribute ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeSet_SwordFighting_GetSwiftnessAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AttributeSet_SwordFighting_eventGetSwiftnessAttribute_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(nullptr, 0) }; // 2095245243
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSet_SwordFighting_GetSwiftnessAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSet_SwordFighting_GetSwiftnessAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSet_SwordFighting_GetSwiftnessAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "AttributeSet_SwordFighting|Swiftness" },
		{ "Comment", "/** Gets current Swiftness's FGameplayAttribute */" },
		{ "ModuleRelativePath", "Public/AttributeSet_SwordFighting.h" },
		{ "ToolTip", "Gets current Swiftness's FGameplayAttribute" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSet_SwordFighting_GetSwiftnessAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSet_SwordFighting, nullptr, "GetSwiftnessAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeSet_SwordFighting_GetSwiftnessAttribute_Statics::AttributeSet_SwordFighting_eventGetSwiftnessAttribute_Parms), Z_Construct_UFunction_UAttributeSet_SwordFighting_GetSwiftnessAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_SwordFighting_GetSwiftnessAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeSet_SwordFighting_GetSwiftnessAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_SwordFighting_GetSwiftnessAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeSet_SwordFighting_GetSwiftnessAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSet_SwordFighting_GetSwiftnessAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeSet_SwordFighting_GetSwordTechniqueAttribute_Statics
	{
		struct AttributeSet_SwordFighting_eventGetSwordTechniqueAttribute_Parms
		{
			FGameplayAttribute ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeSet_SwordFighting_GetSwordTechniqueAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AttributeSet_SwordFighting_eventGetSwordTechniqueAttribute_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(nullptr, 0) }; // 2095245243
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSet_SwordFighting_GetSwordTechniqueAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSet_SwordFighting_GetSwordTechniqueAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSet_SwordFighting_GetSwordTechniqueAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "AttributeSet_SwordFighting|SwordTechnique" },
		{ "Comment", "/** Gets current SwordTechnique's FGameplayAttribute */" },
		{ "ModuleRelativePath", "Public/AttributeSet_SwordFighting.h" },
		{ "ToolTip", "Gets current SwordTechnique's FGameplayAttribute" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSet_SwordFighting_GetSwordTechniqueAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSet_SwordFighting, nullptr, "GetSwordTechniqueAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeSet_SwordFighting_GetSwordTechniqueAttribute_Statics::AttributeSet_SwordFighting_eventGetSwordTechniqueAttribute_Parms), Z_Construct_UFunction_UAttributeSet_SwordFighting_GetSwordTechniqueAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_SwordFighting_GetSwordTechniqueAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeSet_SwordFighting_GetSwordTechniqueAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_SwordFighting_GetSwordTechniqueAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeSet_SwordFighting_GetSwordTechniqueAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSet_SwordFighting_GetSwordTechniqueAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeSet_SwordFighting_OnRep_Swiftness_Statics
	{
		struct AttributeSet_SwordFighting_eventOnRep_Swiftness_Parms
		{
			FGameplayAttributeData OldValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSet_SwordFighting_OnRep_Swiftness_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeSet_SwordFighting_OnRep_Swiftness_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AttributeSet_SwordFighting_eventOnRep_Swiftness_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UAttributeSet_SwordFighting_OnRep_Swiftness_Statics::NewProp_OldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_SwordFighting_OnRep_Swiftness_Statics::NewProp_OldValue_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSet_SwordFighting_OnRep_Swiftness_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSet_SwordFighting_OnRep_Swiftness_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSet_SwordFighting_OnRep_Swiftness_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AttributeSet_SwordFighting.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSet_SwordFighting_OnRep_Swiftness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSet_SwordFighting, nullptr, "OnRep_Swiftness", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeSet_SwordFighting_OnRep_Swiftness_Statics::AttributeSet_SwordFighting_eventOnRep_Swiftness_Parms), Z_Construct_UFunction_UAttributeSet_SwordFighting_OnRep_Swiftness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_SwordFighting_OnRep_Swiftness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeSet_SwordFighting_OnRep_Swiftness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_SwordFighting_OnRep_Swiftness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeSet_SwordFighting_OnRep_Swiftness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSet_SwordFighting_OnRep_Swiftness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeSet_SwordFighting_OnRep_SwordTechnique_Statics
	{
		struct AttributeSet_SwordFighting_eventOnRep_SwordTechnique_Parms
		{
			FGameplayAttributeData OldValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSet_SwordFighting_OnRep_SwordTechnique_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeSet_SwordFighting_OnRep_SwordTechnique_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AttributeSet_SwordFighting_eventOnRep_SwordTechnique_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UAttributeSet_SwordFighting_OnRep_SwordTechnique_Statics::NewProp_OldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_SwordFighting_OnRep_SwordTechnique_Statics::NewProp_OldValue_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSet_SwordFighting_OnRep_SwordTechnique_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSet_SwordFighting_OnRep_SwordTechnique_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSet_SwordFighting_OnRep_SwordTechnique_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AttributeSet_SwordFighting.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSet_SwordFighting_OnRep_SwordTechnique_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSet_SwordFighting, nullptr, "OnRep_SwordTechnique", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeSet_SwordFighting_OnRep_SwordTechnique_Statics::AttributeSet_SwordFighting_eventOnRep_SwordTechnique_Parms), Z_Construct_UFunction_UAttributeSet_SwordFighting_OnRep_SwordTechnique_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_SwordFighting_OnRep_SwordTechnique_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeSet_SwordFighting_OnRep_SwordTechnique_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_SwordFighting_OnRep_SwordTechnique_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeSet_SwordFighting_OnRep_SwordTechnique()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSet_SwordFighting_OnRep_SwordTechnique_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeSet_SwordFighting_SetBaseSwiftness_Statics
	{
		struct AttributeSet_SwordFighting_eventSetBaseSwiftness_Parms
		{
			float NewVal;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttributeSet_SwordFighting_SetBaseSwiftness_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AttributeSet_SwordFighting_eventSetBaseSwiftness_Parms, NewVal), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSet_SwordFighting_SetBaseSwiftness_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSet_SwordFighting_SetBaseSwiftness_Statics::NewProp_NewVal,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSet_SwordFighting_SetBaseSwiftness_Statics::Function_MetaDataParams[] = {
		{ "Category", "AttributeSet_SwordFighting|Swiftness" },
		{ "Comment", "/** Sets Swiftness base (and current) value. Base value is the permanent base, current value is after all modifiers. Should only be called on initialization */" },
		{ "ModuleRelativePath", "Public/AttributeSet_SwordFighting.h" },
		{ "ToolTip", "Sets Swiftness base (and current) value. Base value is the permanent base, current value is after all modifiers. Should only be called on initialization" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSet_SwordFighting_SetBaseSwiftness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSet_SwordFighting, nullptr, "SetBaseSwiftness", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeSet_SwordFighting_SetBaseSwiftness_Statics::AttributeSet_SwordFighting_eventSetBaseSwiftness_Parms), Z_Construct_UFunction_UAttributeSet_SwordFighting_SetBaseSwiftness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_SwordFighting_SetBaseSwiftness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeSet_SwordFighting_SetBaseSwiftness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_SwordFighting_SetBaseSwiftness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeSet_SwordFighting_SetBaseSwiftness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSet_SwordFighting_SetBaseSwiftness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeSet_SwordFighting_SetBaseSwordTechnique_Statics
	{
		struct AttributeSet_SwordFighting_eventSetBaseSwordTechnique_Parms
		{
			float NewVal;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttributeSet_SwordFighting_SetBaseSwordTechnique_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AttributeSet_SwordFighting_eventSetBaseSwordTechnique_Parms, NewVal), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSet_SwordFighting_SetBaseSwordTechnique_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSet_SwordFighting_SetBaseSwordTechnique_Statics::NewProp_NewVal,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSet_SwordFighting_SetBaseSwordTechnique_Statics::Function_MetaDataParams[] = {
		{ "Category", "AttributeSet_SwordFighting|SwordTechnique" },
		{ "Comment", "/** Sets SwordTechnique base (and current) value. Base value is the permanent base, current value is after all modifiers. Should only be called on initialization */" },
		{ "ModuleRelativePath", "Public/AttributeSet_SwordFighting.h" },
		{ "ToolTip", "Sets SwordTechnique base (and current) value. Base value is the permanent base, current value is after all modifiers. Should only be called on initialization" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSet_SwordFighting_SetBaseSwordTechnique_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSet_SwordFighting, nullptr, "SetBaseSwordTechnique", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeSet_SwordFighting_SetBaseSwordTechnique_Statics::AttributeSet_SwordFighting_eventSetBaseSwordTechnique_Parms), Z_Construct_UFunction_UAttributeSet_SwordFighting_SetBaseSwordTechnique_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_SwordFighting_SetBaseSwordTechnique_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeSet_SwordFighting_SetBaseSwordTechnique_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_SwordFighting_SetBaseSwordTechnique_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeSet_SwordFighting_SetBaseSwordTechnique()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSet_SwordFighting_SetBaseSwordTechnique_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAttributeSet_SwordFighting);
	UClass* Z_Construct_UClass_UAttributeSet_SwordFighting_NoRegister()
	{
		return UAttributeSet_SwordFighting::StaticClass();
	}
	struct Z_Construct_UClass_UAttributeSet_SwordFighting_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Swiftness_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Swiftness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwordTechnique_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SwordTechnique;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttributeSet_SwordFighting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_BastianRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAttributeSet_SwordFighting_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAttributeSet_SwordFighting_GetBaseSwiftness, "GetBaseSwiftness" }, // 1279309712
		{ &Z_Construct_UFunction_UAttributeSet_SwordFighting_GetBaseSwordTechnique, "GetBaseSwordTechnique" }, // 2802235986
		{ &Z_Construct_UFunction_UAttributeSet_SwordFighting_GetCurrentSwiftness, "GetCurrentSwiftness" }, // 2883745918
		{ &Z_Construct_UFunction_UAttributeSet_SwordFighting_GetCurrentSwordTechnique, "GetCurrentSwordTechnique" }, // 468264058
		{ &Z_Construct_UFunction_UAttributeSet_SwordFighting_GetGameplayTag_Swiftness, "GetGameplayTag_Swiftness" }, // 2506252626
		{ &Z_Construct_UFunction_UAttributeSet_SwordFighting_GetGameplayTag_SwordTechnique, "GetGameplayTag_SwordTechnique" }, // 1443591015
		{ &Z_Construct_UFunction_UAttributeSet_SwordFighting_GetRelativeSwiftness, "GetRelativeSwiftness" }, // 2551799210
		{ &Z_Construct_UFunction_UAttributeSet_SwordFighting_GetRelativeSwordTechnique, "GetRelativeSwordTechnique" }, // 3959071727
		{ &Z_Construct_UFunction_UAttributeSet_SwordFighting_GetSwiftnessAttribute, "GetSwiftnessAttribute" }, // 816320243
		{ &Z_Construct_UFunction_UAttributeSet_SwordFighting_GetSwordTechniqueAttribute, "GetSwordTechniqueAttribute" }, // 3908001954
		{ &Z_Construct_UFunction_UAttributeSet_SwordFighting_OnRep_Swiftness, "OnRep_Swiftness" }, // 1024214635
		{ &Z_Construct_UFunction_UAttributeSet_SwordFighting_OnRep_SwordTechnique, "OnRep_SwordTechnique" }, // 3085538374
		{ &Z_Construct_UFunction_UAttributeSet_SwordFighting_SetBaseSwiftness, "SetBaseSwiftness" }, // 397440617
		{ &Z_Construct_UFunction_UAttributeSet_SwordFighting_SetBaseSwordTechnique, "SetBaseSwordTechnique" }, // 356402072
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeSet_SwordFighting_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * AttributeSet_SwordFighting\n * Sword fight attributes\n */" },
		{ "IncludePath", "AttributeSet_SwordFighting.h" },
		{ "ModuleRelativePath", "Public/AttributeSet_SwordFighting.h" },
		{ "ToolTip", "AttributeSet_SwordFighting\nSword fight attributes" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeSet_SwordFighting_Statics::NewProp_Swiftness_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AttributeSet_SwordFighting" },
		{ "Comment", "// one property per attribute\n" },
		{ "ModuleRelativePath", "Public/AttributeSet_SwordFighting.h" },
		{ "ToolTip", "one property per attribute" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttributeSet_SwordFighting_Statics::NewProp_Swiftness = { "Swiftness", "OnRep_Swiftness", (EPropertyFlags)0x0040000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAttributeSet_SwordFighting, Swiftness), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UAttributeSet_SwordFighting_Statics::NewProp_Swiftness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeSet_SwordFighting_Statics::NewProp_Swiftness_MetaData)) }; // 1256614452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeSet_SwordFighting_Statics::NewProp_SwordTechnique_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AttributeSet_SwordFighting" },
		{ "ModuleRelativePath", "Public/AttributeSet_SwordFighting.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttributeSet_SwordFighting_Statics::NewProp_SwordTechnique = { "SwordTechnique", "OnRep_SwordTechnique", (EPropertyFlags)0x0040000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAttributeSet_SwordFighting, SwordTechnique), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UAttributeSet_SwordFighting_Statics::NewProp_SwordTechnique_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeSet_SwordFighting_Statics::NewProp_SwordTechnique_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttributeSet_SwordFighting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeSet_SwordFighting_Statics::NewProp_Swiftness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeSet_SwordFighting_Statics::NewProp_SwordTechnique,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttributeSet_SwordFighting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttributeSet_SwordFighting>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttributeSet_SwordFighting_Statics::ClassParams = {
		&UAttributeSet_SwordFighting::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAttributeSet_SwordFighting_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeSet_SwordFighting_Statics::PropPointers),
		0,
		0x002000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAttributeSet_SwordFighting_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeSet_SwordFighting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAttributeSet_SwordFighting()
	{
		if (!Z_Registration_Info_UClass_UAttributeSet_SwordFighting.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttributeSet_SwordFighting.OuterSingleton, Z_Construct_UClass_UAttributeSet_SwordFighting_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAttributeSet_SwordFighting.OuterSingleton;
	}
	template<> BASTIANRUNTIME_API UClass* StaticClass<UAttributeSet_SwordFighting>()
	{
		return UAttributeSet_SwordFighting::StaticClass();
	}

	void UAttributeSet_SwordFighting::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Swiftness(TEXT("Swiftness"));
		static const FName Name_SwordTechnique(TEXT("SwordTechnique"));

		const bool bIsValid = true
			&& Name_Swiftness == ClassReps[(int32)ENetFields_Private::Swiftness].Property->GetFName()
			&& Name_SwordTechnique == ClassReps[(int32)ENetFields_Private::SwordTechnique].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UAttributeSet_SwordFighting"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttributeSet_SwordFighting);
	UAttributeSet_SwordFighting::~UAttributeSet_SwordFighting() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_AttributeSet_SwordFighting_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_AttributeSet_SwordFighting_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAttributeSet_SwordFighting, UAttributeSet_SwordFighting::StaticClass, TEXT("UAttributeSet_SwordFighting"), &Z_Registration_Info_UClass_UAttributeSet_SwordFighting, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttributeSet_SwordFighting), 3441359568U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_AttributeSet_SwordFighting_h_263658318(TEXT("/Script/BastianRuntime"),
		Z_CompiledInDeferFile_FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_AttributeSet_SwordFighting_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_AttributeSet_SwordFighting_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

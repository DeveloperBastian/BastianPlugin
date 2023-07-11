// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BastianRuntime/Public/AttributeSet_BA_CharBaseStats.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttributeSet_BA_CharBaseStats() {}
// Cross Module References
	BASTIANRUNTIME_API UClass* Z_Construct_UClass_UAttributeSet_BA_CharBaseStats();
	BASTIANRUNTIME_API UClass* Z_Construct_UClass_UAttributeSet_BA_CharBaseStats_NoRegister();
	BASTIANRUNTIME_API UClass* Z_Construct_UClass_UGameAttributeSet();
	BASTIANRUNTIME_API UClass* Z_Construct_UClass_UGameAttributeSet_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilitySystemComponent_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraAttributeSet();
	UPackage* Z_Construct_UPackage__Script_BastianRuntime();
// End Cross Module References
	DEFINE_FUNCTION(UGameAttributeSet::execGetAttributesForAttributeSetClass)
	{
		P_GET_OBJECT(ULyraAbilitySystemComponent,Z_Param_AbilitySystemComponent);
		P_GET_OBJECT(UClass,Z_Param_AttributSetClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FGameplayAttribute>*)Z_Param__Result=P_THIS->GetAttributesForAttributeSetClass(Z_Param_AbilitySystemComponent,Z_Param_AttributSetClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameAttributeSet::execRemoveFromASC)
	{
		P_GET_OBJECT(ULyraAbilitySystemComponent,Z_Param_AbilitySystemComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveFromASC(Z_Param_AbilitySystemComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameAttributeSet::execAttachToASC)
	{
		P_GET_OBJECT(ULyraAbilitySystemComponent,Z_Param_AbilitySystemComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttachToASC(Z_Param_AbilitySystemComponent);
		P_NATIVE_END;
	}
	void UGameAttributeSet::StaticRegisterNativesUGameAttributeSet()
	{
		UClass* Class = UGameAttributeSet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttachToASC", &UGameAttributeSet::execAttachToASC },
			{ "GetAttributesForAttributeSetClass", &UGameAttributeSet::execGetAttributesForAttributeSetClass },
			{ "RemoveFromASC", &UGameAttributeSet::execRemoveFromASC },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameAttributeSet_AttachToASC_Statics
	{
		struct GameAttributeSet_eventAttachToASC_Parms
		{
			ULyraAbilitySystemComponent* AbilitySystemComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAttributeSet_AttachToASC_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameAttributeSet_AttachToASC_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameAttributeSet_eventAttachToASC_Parms, AbilitySystemComponent), Z_Construct_UClass_ULyraAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameAttributeSet_AttachToASC_Statics::NewProp_AbilitySystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_AttachToASC_Statics::NewProp_AbilitySystemComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAttributeSet_AttachToASC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAttributeSet_AttachToASC_Statics::NewProp_AbilitySystemComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAttributeSet_AttachToASC_Statics::Function_MetaDataParams[] = {
		{ "Category", "UGameAttributeSet" },
		{ "Comment", "/** Attaches this AttributeSet to a given ASC */" },
		{ "ModuleRelativePath", "Public/AttributeSet_BA_CharBaseStats.h" },
		{ "ToolTip", "Attaches this AttributeSet to a given ASC" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAttributeSet_AttachToASC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAttributeSet, nullptr, "AttachToASC", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameAttributeSet_AttachToASC_Statics::GameAttributeSet_eventAttachToASC_Parms), Z_Construct_UFunction_UGameAttributeSet_AttachToASC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_AttachToASC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAttributeSet_AttachToASC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_AttachToASC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAttributeSet_AttachToASC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameAttributeSet_AttachToASC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAttributeSet_GetAttributesForAttributeSetClass_Statics
	{
		struct GameAttributeSet_eventGetAttributesForAttributeSetClass_Parms
		{
			ULyraAbilitySystemComponent* AbilitySystemComponent;
			TSubclassOf<UAttributeSet>  AttributSetClass;
			TArray<FGameplayAttribute> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
		static const UECodeGen_Private::FClassPropertyParams NewProp_AttributSetClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAttributeSet_GetAttributesForAttributeSetClass_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameAttributeSet_GetAttributesForAttributeSetClass_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameAttributeSet_eventGetAttributesForAttributeSetClass_Parms, AbilitySystemComponent), Z_Construct_UClass_ULyraAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameAttributeSet_GetAttributesForAttributeSetClass_Statics::NewProp_AbilitySystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_GetAttributesForAttributeSetClass_Statics::NewProp_AbilitySystemComponent_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGameAttributeSet_GetAttributesForAttributeSetClass_Statics::NewProp_AttributSetClass = { "AttributSetClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameAttributeSet_eventGetAttributesForAttributeSetClass_Parms, AttributSetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameAttributeSet_GetAttributesForAttributeSetClass_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(nullptr, 0) }; // 2095245243
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGameAttributeSet_GetAttributesForAttributeSetClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameAttributeSet_eventGetAttributesForAttributeSetClass_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2095245243
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAttributeSet_GetAttributesForAttributeSetClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAttributeSet_GetAttributesForAttributeSetClass_Statics::NewProp_AbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAttributeSet_GetAttributesForAttributeSetClass_Statics::NewProp_AttributSetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAttributeSet_GetAttributesForAttributeSetClass_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAttributeSet_GetAttributesForAttributeSetClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAttributeSet_GetAttributesForAttributeSetClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "UGameAttributeSet" },
		{ "Comment", "/** Looks for an instance of the given AttribueSet class in the given AbilitySetComponent and returns all Attributes found in that instance with their current values */" },
		{ "ModuleRelativePath", "Public/AttributeSet_BA_CharBaseStats.h" },
		{ "ToolTip", "Looks for an instance of the given AttribueSet class in the given AbilitySetComponent and returns all Attributes found in that instance with their current values" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAttributeSet_GetAttributesForAttributeSetClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAttributeSet, nullptr, "GetAttributesForAttributeSetClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameAttributeSet_GetAttributesForAttributeSetClass_Statics::GameAttributeSet_eventGetAttributesForAttributeSetClass_Parms), Z_Construct_UFunction_UGameAttributeSet_GetAttributesForAttributeSetClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_GetAttributesForAttributeSetClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAttributeSet_GetAttributesForAttributeSetClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_GetAttributesForAttributeSetClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAttributeSet_GetAttributesForAttributeSetClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameAttributeSet_GetAttributesForAttributeSetClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAttributeSet_RemoveFromASC_Statics
	{
		struct GameAttributeSet_eventRemoveFromASC_Parms
		{
			ULyraAbilitySystemComponent* AbilitySystemComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAttributeSet_RemoveFromASC_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameAttributeSet_RemoveFromASC_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameAttributeSet_eventRemoveFromASC_Parms, AbilitySystemComponent), Z_Construct_UClass_ULyraAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameAttributeSet_RemoveFromASC_Statics::NewProp_AbilitySystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_RemoveFromASC_Statics::NewProp_AbilitySystemComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAttributeSet_RemoveFromASC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAttributeSet_RemoveFromASC_Statics::NewProp_AbilitySystemComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAttributeSet_RemoveFromASC_Statics::Function_MetaDataParams[] = {
		{ "Category", "UGameAttributeSet" },
		{ "Comment", "/** Removes this AttributeSet from a given ASC. This can be dangerous if a value has not been already replicated and cannot find its corresponding AttributSet - this will crash the game!!! */" },
		{ "ModuleRelativePath", "Public/AttributeSet_BA_CharBaseStats.h" },
		{ "ToolTip", "Removes this AttributeSet from a given ASC. This can be dangerous if a value has not been already replicated and cannot find its corresponding AttributSet - this will crash the game!!!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAttributeSet_RemoveFromASC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAttributeSet, nullptr, "RemoveFromASC", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameAttributeSet_RemoveFromASC_Statics::GameAttributeSet_eventRemoveFromASC_Parms), Z_Construct_UFunction_UGameAttributeSet_RemoveFromASC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_RemoveFromASC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAttributeSet_RemoveFromASC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_RemoveFromASC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAttributeSet_RemoveFromASC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameAttributeSet_RemoveFromASC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameAttributeSet);
	UClass* Z_Construct_UClass_UGameAttributeSet_NoRegister()
	{
		return UGameAttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_UGameAttributeSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameAttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULyraAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_BastianRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameAttributeSet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameAttributeSet_AttachToASC, "AttachToASC" }, // 1984240681
		{ &Z_Construct_UFunction_UGameAttributeSet_GetAttributesForAttributeSetClass, "GetAttributesForAttributeSetClass" }, // 4025591883
		{ &Z_Construct_UFunction_UGameAttributeSet_RemoveFromASC, "RemoveFromASC" }, // 2680538224
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameAttributeSet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base Class for classes generated by the AttributeSet Generator (https://bit.ly/AttributeGenerator)\n */" },
		{ "IncludePath", "AttributeSet_BA_CharBaseStats.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AttributeSet_BA_CharBaseStats.h" },
		{ "ToolTip", "Base Class for classes generated by the AttributeSet Generator (https://bit.ly/AttributeGenerator)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameAttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameAttributeSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameAttributeSet_Statics::ClassParams = {
		&UGameAttributeSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x002000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameAttributeSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameAttributeSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameAttributeSet()
	{
		if (!Z_Registration_Info_UClass_UGameAttributeSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameAttributeSet.OuterSingleton, Z_Construct_UClass_UGameAttributeSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameAttributeSet.OuterSingleton;
	}
	template<> BASTIANRUNTIME_API UClass* StaticClass<UGameAttributeSet>()
	{
		return UGameAttributeSet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameAttributeSet);
	UGameAttributeSet::~UGameAttributeSet() {}
	DEFINE_FUNCTION(UAttributeSet_BA_CharBaseStats::execOnRep_Dexterity)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Dexterity(Z_Param_Out_OldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeSet_BA_CharBaseStats::execOnRep_Intelligence)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Intelligence(Z_Param_Out_OldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeSet_BA_CharBaseStats::execOnRep_Endurance)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Endurance(Z_Param_Out_OldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeSet_BA_CharBaseStats::execOnRep_Strength)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Strength(Z_Param_Out_OldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeSet_BA_CharBaseStats::execGetGameplayTag_Dexterity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=P_THIS->GetGameplayTag_Dexterity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeSet_BA_CharBaseStats::execSetBaseDexterity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBaseDexterity(Z_Param_NewVal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeSet_BA_CharBaseStats::execGetRelativeDexterity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRelativeDexterity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeSet_BA_CharBaseStats::execGetCurrentDexterity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentDexterity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeSet_BA_CharBaseStats::execGetBaseDexterity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetBaseDexterity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeSet_BA_CharBaseStats::execGetDexterityAttribute)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayAttribute*)Z_Param__Result=UAttributeSet_BA_CharBaseStats::GetDexterityAttribute();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeSet_BA_CharBaseStats::execGetGameplayTag_Intelligence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=P_THIS->GetGameplayTag_Intelligence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeSet_BA_CharBaseStats::execSetBaseIntelligence)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBaseIntelligence(Z_Param_NewVal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeSet_BA_CharBaseStats::execGetRelativeIntelligence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRelativeIntelligence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeSet_BA_CharBaseStats::execGetCurrentIntelligence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentIntelligence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeSet_BA_CharBaseStats::execGetBaseIntelligence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetBaseIntelligence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeSet_BA_CharBaseStats::execGetIntelligenceAttribute)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayAttribute*)Z_Param__Result=UAttributeSet_BA_CharBaseStats::GetIntelligenceAttribute();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeSet_BA_CharBaseStats::execGetGameplayTag_Endurance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=P_THIS->GetGameplayTag_Endurance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeSet_BA_CharBaseStats::execSetBaseEndurance)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBaseEndurance(Z_Param_NewVal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeSet_BA_CharBaseStats::execGetRelativeEndurance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRelativeEndurance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeSet_BA_CharBaseStats::execGetCurrentEndurance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentEndurance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeSet_BA_CharBaseStats::execGetBaseEndurance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetBaseEndurance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeSet_BA_CharBaseStats::execGetEnduranceAttribute)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayAttribute*)Z_Param__Result=UAttributeSet_BA_CharBaseStats::GetEnduranceAttribute();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeSet_BA_CharBaseStats::execGetGameplayTag_Strength)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=P_THIS->GetGameplayTag_Strength();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeSet_BA_CharBaseStats::execSetBaseStrength)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBaseStrength(Z_Param_NewVal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeSet_BA_CharBaseStats::execGetRelativeStrength)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRelativeStrength();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeSet_BA_CharBaseStats::execGetCurrentStrength)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentStrength();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeSet_BA_CharBaseStats::execGetBaseStrength)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetBaseStrength();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeSet_BA_CharBaseStats::execGetStrengthAttribute)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayAttribute*)Z_Param__Result=UAttributeSet_BA_CharBaseStats::GetStrengthAttribute();
		P_NATIVE_END;
	}
	void UAttributeSet_BA_CharBaseStats::StaticRegisterNativesUAttributeSet_BA_CharBaseStats()
	{
		UClass* Class = UAttributeSet_BA_CharBaseStats::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBaseDexterity", &UAttributeSet_BA_CharBaseStats::execGetBaseDexterity },
			{ "GetBaseEndurance", &UAttributeSet_BA_CharBaseStats::execGetBaseEndurance },
			{ "GetBaseIntelligence", &UAttributeSet_BA_CharBaseStats::execGetBaseIntelligence },
			{ "GetBaseStrength", &UAttributeSet_BA_CharBaseStats::execGetBaseStrength },
			{ "GetCurrentDexterity", &UAttributeSet_BA_CharBaseStats::execGetCurrentDexterity },
			{ "GetCurrentEndurance", &UAttributeSet_BA_CharBaseStats::execGetCurrentEndurance },
			{ "GetCurrentIntelligence", &UAttributeSet_BA_CharBaseStats::execGetCurrentIntelligence },
			{ "GetCurrentStrength", &UAttributeSet_BA_CharBaseStats::execGetCurrentStrength },
			{ "GetDexterityAttribute", &UAttributeSet_BA_CharBaseStats::execGetDexterityAttribute },
			{ "GetEnduranceAttribute", &UAttributeSet_BA_CharBaseStats::execGetEnduranceAttribute },
			{ "GetGameplayTag_Dexterity", &UAttributeSet_BA_CharBaseStats::execGetGameplayTag_Dexterity },
			{ "GetGameplayTag_Endurance", &UAttributeSet_BA_CharBaseStats::execGetGameplayTag_Endurance },
			{ "GetGameplayTag_Intelligence", &UAttributeSet_BA_CharBaseStats::execGetGameplayTag_Intelligence },
			{ "GetGameplayTag_Strength", &UAttributeSet_BA_CharBaseStats::execGetGameplayTag_Strength },
			{ "GetIntelligenceAttribute", &UAttributeSet_BA_CharBaseStats::execGetIntelligenceAttribute },
			{ "GetRelativeDexterity", &UAttributeSet_BA_CharBaseStats::execGetRelativeDexterity },
			{ "GetRelativeEndurance", &UAttributeSet_BA_CharBaseStats::execGetRelativeEndurance },
			{ "GetRelativeIntelligence", &UAttributeSet_BA_CharBaseStats::execGetRelativeIntelligence },
			{ "GetRelativeStrength", &UAttributeSet_BA_CharBaseStats::execGetRelativeStrength },
			{ "GetStrengthAttribute", &UAttributeSet_BA_CharBaseStats::execGetStrengthAttribute },
			{ "OnRep_Dexterity", &UAttributeSet_BA_CharBaseStats::execOnRep_Dexterity },
			{ "OnRep_Endurance", &UAttributeSet_BA_CharBaseStats::execOnRep_Endurance },
			{ "OnRep_Intelligence", &UAttributeSet_BA_CharBaseStats::execOnRep_Intelligence },
			{ "OnRep_Strength", &UAttributeSet_BA_CharBaseStats::execOnRep_Strength },
			{ "SetBaseDexterity", &UAttributeSet_BA_CharBaseStats::execSetBaseDexterity },
			{ "SetBaseEndurance", &UAttributeSet_BA_CharBaseStats::execSetBaseEndurance },
			{ "SetBaseIntelligence", &UAttributeSet_BA_CharBaseStats::execSetBaseIntelligence },
			{ "SetBaseStrength", &UAttributeSet_BA_CharBaseStats::execSetBaseStrength },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetBaseDexterity_Statics
	{
		struct AttributeSet_BA_CharBaseStats_eventGetBaseDexterity_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetBaseDexterity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AttributeSet_BA_CharBaseStats_eventGetBaseDexterity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetBaseDexterity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetBaseDexterity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetBaseDexterity_Statics::Function_MetaDataParams[] = {
		{ "Category", "AttributeSet_BA_CharBaseStats|Dexterity" },
		{ "Comment", "/** Gets current Dexterity base value (without any currently ongoing modifications */" },
		{ "ModuleRelativePath", "Public/AttributeSet_BA_CharBaseStats.h" },
		{ "ToolTip", "Gets current Dexterity base value (without any currently ongoing modifications" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetBaseDexterity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSet_BA_CharBaseStats, nullptr, "GetBaseDexterity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetBaseDexterity_Statics::AttributeSet_BA_CharBaseStats_eventGetBaseDexterity_Parms), Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetBaseDexterity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetBaseDexterity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetBaseDexterity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetBaseDexterity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetBaseDexterity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetBaseDexterity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetBaseEndurance_Statics
	{
		struct AttributeSet_BA_CharBaseStats_eventGetBaseEndurance_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetBaseEndurance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AttributeSet_BA_CharBaseStats_eventGetBaseEndurance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetBaseEndurance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetBaseEndurance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetBaseEndurance_Statics::Function_MetaDataParams[] = {
		{ "Category", "AttributeSet_BA_CharBaseStats|Endurance" },
		{ "Comment", "/** Gets current Endurance base value (without any currently ongoing modifications */" },
		{ "ModuleRelativePath", "Public/AttributeSet_BA_CharBaseStats.h" },
		{ "ToolTip", "Gets current Endurance base value (without any currently ongoing modifications" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetBaseEndurance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSet_BA_CharBaseStats, nullptr, "GetBaseEndurance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetBaseEndurance_Statics::AttributeSet_BA_CharBaseStats_eventGetBaseEndurance_Parms), Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetBaseEndurance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetBaseEndurance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetBaseEndurance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetBaseEndurance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetBaseEndurance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetBaseEndurance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetBaseIntelligence_Statics
	{
		struct AttributeSet_BA_CharBaseStats_eventGetBaseIntelligence_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetBaseIntelligence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AttributeSet_BA_CharBaseStats_eventGetBaseIntelligence_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetBaseIntelligence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetBaseIntelligence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetBaseIntelligence_Statics::Function_MetaDataParams[] = {
		{ "Category", "AttributeSet_BA_CharBaseStats|Intelligence" },
		{ "Comment", "/** Gets current Intelligence base value (without any currently ongoing modifications */" },
		{ "ModuleRelativePath", "Public/AttributeSet_BA_CharBaseStats.h" },
		{ "ToolTip", "Gets current Intelligence base value (without any currently ongoing modifications" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetBaseIntelligence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSet_BA_CharBaseStats, nullptr, "GetBaseIntelligence", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetBaseIntelligence_Statics::AttributeSet_BA_CharBaseStats_eventGetBaseIntelligence_Parms), Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetBaseIntelligence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetBaseIntelligence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetBaseIntelligence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetBaseIntelligence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetBaseIntelligence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetBaseIntelligence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetBaseStrength_Statics
	{
		struct AttributeSet_BA_CharBaseStats_eventGetBaseStrength_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetBaseStrength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AttributeSet_BA_CharBaseStats_eventGetBaseStrength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetBaseStrength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetBaseStrength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetBaseStrength_Statics::Function_MetaDataParams[] = {
		{ "Category", "AttributeSet_BA_CharBaseStats|Strength" },
		{ "Comment", "/** Gets current Strength base value (without any currently ongoing modifications */" },
		{ "ModuleRelativePath", "Public/AttributeSet_BA_CharBaseStats.h" },
		{ "ToolTip", "Gets current Strength base value (without any currently ongoing modifications" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetBaseStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSet_BA_CharBaseStats, nullptr, "GetBaseStrength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetBaseStrength_Statics::AttributeSet_BA_CharBaseStats_eventGetBaseStrength_Parms), Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetBaseStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetBaseStrength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetBaseStrength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetBaseStrength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetBaseStrength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetBaseStrength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetCurrentDexterity_Statics
	{
		struct AttributeSet_BA_CharBaseStats_eventGetCurrentDexterity_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetCurrentDexterity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AttributeSet_BA_CharBaseStats_eventGetCurrentDexterity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetCurrentDexterity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetCurrentDexterity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetCurrentDexterity_Statics::Function_MetaDataParams[] = {
		{ "Category", "AttributeSet_BA_CharBaseStats|Dexterity" },
		{ "Comment", "/** Gets current Dexterity value. Current value is base value plus/minus all modifiers */" },
		{ "ModuleRelativePath", "Public/AttributeSet_BA_CharBaseStats.h" },
		{ "ToolTip", "Gets current Dexterity value. Current value is base value plus/minus all modifiers" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetCurrentDexterity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSet_BA_CharBaseStats, nullptr, "GetCurrentDexterity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetCurrentDexterity_Statics::AttributeSet_BA_CharBaseStats_eventGetCurrentDexterity_Parms), Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetCurrentDexterity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetCurrentDexterity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetCurrentDexterity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetCurrentDexterity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetCurrentDexterity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetCurrentDexterity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetCurrentEndurance_Statics
	{
		struct AttributeSet_BA_CharBaseStats_eventGetCurrentEndurance_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetCurrentEndurance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AttributeSet_BA_CharBaseStats_eventGetCurrentEndurance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetCurrentEndurance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetCurrentEndurance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetCurrentEndurance_Statics::Function_MetaDataParams[] = {
		{ "Category", "AttributeSet_BA_CharBaseStats|Endurance" },
		{ "Comment", "/** Gets current Endurance value. Current value is base value plus/minus all modifiers */" },
		{ "ModuleRelativePath", "Public/AttributeSet_BA_CharBaseStats.h" },
		{ "ToolTip", "Gets current Endurance value. Current value is base value plus/minus all modifiers" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetCurrentEndurance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSet_BA_CharBaseStats, nullptr, "GetCurrentEndurance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetCurrentEndurance_Statics::AttributeSet_BA_CharBaseStats_eventGetCurrentEndurance_Parms), Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetCurrentEndurance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetCurrentEndurance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetCurrentEndurance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetCurrentEndurance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetCurrentEndurance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetCurrentEndurance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetCurrentIntelligence_Statics
	{
		struct AttributeSet_BA_CharBaseStats_eventGetCurrentIntelligence_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetCurrentIntelligence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AttributeSet_BA_CharBaseStats_eventGetCurrentIntelligence_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetCurrentIntelligence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetCurrentIntelligence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetCurrentIntelligence_Statics::Function_MetaDataParams[] = {
		{ "Category", "AttributeSet_BA_CharBaseStats|Intelligence" },
		{ "Comment", "/** Gets current Intelligence value. Current value is base value plus/minus all modifiers */" },
		{ "ModuleRelativePath", "Public/AttributeSet_BA_CharBaseStats.h" },
		{ "ToolTip", "Gets current Intelligence value. Current value is base value plus/minus all modifiers" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetCurrentIntelligence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSet_BA_CharBaseStats, nullptr, "GetCurrentIntelligence", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetCurrentIntelligence_Statics::AttributeSet_BA_CharBaseStats_eventGetCurrentIntelligence_Parms), Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetCurrentIntelligence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetCurrentIntelligence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetCurrentIntelligence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetCurrentIntelligence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetCurrentIntelligence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetCurrentIntelligence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetCurrentStrength_Statics
	{
		struct AttributeSet_BA_CharBaseStats_eventGetCurrentStrength_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetCurrentStrength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AttributeSet_BA_CharBaseStats_eventGetCurrentStrength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetCurrentStrength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetCurrentStrength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetCurrentStrength_Statics::Function_MetaDataParams[] = {
		{ "Category", "AttributeSet_BA_CharBaseStats|Strength" },
		{ "Comment", "/** Gets current Strength value. Current value is base value plus/minus all modifiers */" },
		{ "ModuleRelativePath", "Public/AttributeSet_BA_CharBaseStats.h" },
		{ "ToolTip", "Gets current Strength value. Current value is base value plus/minus all modifiers" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetCurrentStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSet_BA_CharBaseStats, nullptr, "GetCurrentStrength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetCurrentStrength_Statics::AttributeSet_BA_CharBaseStats_eventGetCurrentStrength_Parms), Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetCurrentStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetCurrentStrength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetCurrentStrength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetCurrentStrength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetCurrentStrength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetCurrentStrength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetDexterityAttribute_Statics
	{
		struct AttributeSet_BA_CharBaseStats_eventGetDexterityAttribute_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetDexterityAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AttributeSet_BA_CharBaseStats_eventGetDexterityAttribute_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(nullptr, 0) }; // 2095245243
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetDexterityAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetDexterityAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetDexterityAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "AttributeSet_BA_CharBaseStats|Dexterity" },
		{ "Comment", "/** Gets current Dexterity's FGameplayAttribute */" },
		{ "ModuleRelativePath", "Public/AttributeSet_BA_CharBaseStats.h" },
		{ "ToolTip", "Gets current Dexterity's FGameplayAttribute" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetDexterityAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSet_BA_CharBaseStats, nullptr, "GetDexterityAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetDexterityAttribute_Statics::AttributeSet_BA_CharBaseStats_eventGetDexterityAttribute_Parms), Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetDexterityAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetDexterityAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetDexterityAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetDexterityAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetDexterityAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetDexterityAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetEnduranceAttribute_Statics
	{
		struct AttributeSet_BA_CharBaseStats_eventGetEnduranceAttribute_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetEnduranceAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AttributeSet_BA_CharBaseStats_eventGetEnduranceAttribute_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(nullptr, 0) }; // 2095245243
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetEnduranceAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetEnduranceAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetEnduranceAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "AttributeSet_BA_CharBaseStats|Endurance" },
		{ "Comment", "/** Gets current Endurance's FGameplayAttribute */" },
		{ "ModuleRelativePath", "Public/AttributeSet_BA_CharBaseStats.h" },
		{ "ToolTip", "Gets current Endurance's FGameplayAttribute" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetEnduranceAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSet_BA_CharBaseStats, nullptr, "GetEnduranceAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetEnduranceAttribute_Statics::AttributeSet_BA_CharBaseStats_eventGetEnduranceAttribute_Parms), Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetEnduranceAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetEnduranceAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetEnduranceAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetEnduranceAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetEnduranceAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetEnduranceAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetGameplayTag_Dexterity_Statics
	{
		struct AttributeSet_BA_CharBaseStats_eventGetGameplayTag_Dexterity_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetGameplayTag_Dexterity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AttributeSet_BA_CharBaseStats_eventGetGameplayTag_Dexterity_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetGameplayTag_Dexterity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetGameplayTag_Dexterity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetGameplayTag_Dexterity_Statics::Function_MetaDataParams[] = {
		{ "Category", "AttributeSet_BA_CharBaseStats|Dexterity" },
		{ "Comment", "/** Each attribute corresponds to a gameplay tag with the format AttributeSets.YourAttributeSetName.AttributeName */" },
		{ "ModuleRelativePath", "Public/AttributeSet_BA_CharBaseStats.h" },
		{ "ToolTip", "Each attribute corresponds to a gameplay tag with the format AttributeSets.YourAttributeSetName.AttributeName" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetGameplayTag_Dexterity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSet_BA_CharBaseStats, nullptr, "GetGameplayTag_Dexterity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetGameplayTag_Dexterity_Statics::AttributeSet_BA_CharBaseStats_eventGetGameplayTag_Dexterity_Parms), Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetGameplayTag_Dexterity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetGameplayTag_Dexterity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetGameplayTag_Dexterity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetGameplayTag_Dexterity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetGameplayTag_Dexterity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetGameplayTag_Dexterity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetGameplayTag_Endurance_Statics
	{
		struct AttributeSet_BA_CharBaseStats_eventGetGameplayTag_Endurance_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetGameplayTag_Endurance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AttributeSet_BA_CharBaseStats_eventGetGameplayTag_Endurance_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetGameplayTag_Endurance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetGameplayTag_Endurance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetGameplayTag_Endurance_Statics::Function_MetaDataParams[] = {
		{ "Category", "AttributeSet_BA_CharBaseStats|Endurance" },
		{ "Comment", "/** Each attribute corresponds to a gameplay tag with the format AttributeSets.YourAttributeSetName.AttributeName */" },
		{ "ModuleRelativePath", "Public/AttributeSet_BA_CharBaseStats.h" },
		{ "ToolTip", "Each attribute corresponds to a gameplay tag with the format AttributeSets.YourAttributeSetName.AttributeName" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetGameplayTag_Endurance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSet_BA_CharBaseStats, nullptr, "GetGameplayTag_Endurance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetGameplayTag_Endurance_Statics::AttributeSet_BA_CharBaseStats_eventGetGameplayTag_Endurance_Parms), Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetGameplayTag_Endurance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetGameplayTag_Endurance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetGameplayTag_Endurance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetGameplayTag_Endurance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetGameplayTag_Endurance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetGameplayTag_Endurance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetGameplayTag_Intelligence_Statics
	{
		struct AttributeSet_BA_CharBaseStats_eventGetGameplayTag_Intelligence_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetGameplayTag_Intelligence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AttributeSet_BA_CharBaseStats_eventGetGameplayTag_Intelligence_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetGameplayTag_Intelligence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetGameplayTag_Intelligence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetGameplayTag_Intelligence_Statics::Function_MetaDataParams[] = {
		{ "Category", "AttributeSet_BA_CharBaseStats|Intelligence" },
		{ "Comment", "/** Each attribute corresponds to a gameplay tag with the format AttributeSets.YourAttributeSetName.AttributeName */" },
		{ "ModuleRelativePath", "Public/AttributeSet_BA_CharBaseStats.h" },
		{ "ToolTip", "Each attribute corresponds to a gameplay tag with the format AttributeSets.YourAttributeSetName.AttributeName" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetGameplayTag_Intelligence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSet_BA_CharBaseStats, nullptr, "GetGameplayTag_Intelligence", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetGameplayTag_Intelligence_Statics::AttributeSet_BA_CharBaseStats_eventGetGameplayTag_Intelligence_Parms), Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetGameplayTag_Intelligence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetGameplayTag_Intelligence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetGameplayTag_Intelligence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetGameplayTag_Intelligence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetGameplayTag_Intelligence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetGameplayTag_Intelligence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetGameplayTag_Strength_Statics
	{
		struct AttributeSet_BA_CharBaseStats_eventGetGameplayTag_Strength_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetGameplayTag_Strength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AttributeSet_BA_CharBaseStats_eventGetGameplayTag_Strength_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetGameplayTag_Strength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetGameplayTag_Strength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetGameplayTag_Strength_Statics::Function_MetaDataParams[] = {
		{ "Category", "AttributeSet_BA_CharBaseStats|Strength" },
		{ "Comment", "/** Each attribute corresponds to a gameplay tag with the format AttributeSets.YourAttributeSetName.AttributeName */" },
		{ "ModuleRelativePath", "Public/AttributeSet_BA_CharBaseStats.h" },
		{ "ToolTip", "Each attribute corresponds to a gameplay tag with the format AttributeSets.YourAttributeSetName.AttributeName" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetGameplayTag_Strength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSet_BA_CharBaseStats, nullptr, "GetGameplayTag_Strength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetGameplayTag_Strength_Statics::AttributeSet_BA_CharBaseStats_eventGetGameplayTag_Strength_Parms), Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetGameplayTag_Strength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetGameplayTag_Strength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetGameplayTag_Strength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetGameplayTag_Strength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetGameplayTag_Strength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetGameplayTag_Strength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetIntelligenceAttribute_Statics
	{
		struct AttributeSet_BA_CharBaseStats_eventGetIntelligenceAttribute_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetIntelligenceAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AttributeSet_BA_CharBaseStats_eventGetIntelligenceAttribute_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(nullptr, 0) }; // 2095245243
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetIntelligenceAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetIntelligenceAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetIntelligenceAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "AttributeSet_BA_CharBaseStats|Intelligence" },
		{ "Comment", "/** Gets current Intelligence's FGameplayAttribute */" },
		{ "ModuleRelativePath", "Public/AttributeSet_BA_CharBaseStats.h" },
		{ "ToolTip", "Gets current Intelligence's FGameplayAttribute" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetIntelligenceAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSet_BA_CharBaseStats, nullptr, "GetIntelligenceAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetIntelligenceAttribute_Statics::AttributeSet_BA_CharBaseStats_eventGetIntelligenceAttribute_Parms), Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetIntelligenceAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetIntelligenceAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetIntelligenceAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetIntelligenceAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetIntelligenceAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetIntelligenceAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetRelativeDexterity_Statics
	{
		struct AttributeSet_BA_CharBaseStats_eventGetRelativeDexterity_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetRelativeDexterity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AttributeSet_BA_CharBaseStats_eventGetRelativeDexterity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetRelativeDexterity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetRelativeDexterity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetRelativeDexterity_Statics::Function_MetaDataParams[] = {
		{ "Category", "AttributeSet_BA_CharBaseStats|Dexterity" },
		{ "Comment", "/** Gets relative Dexterity value between 0 and 1. Current value is base value plus/minus all modifiers */" },
		{ "ModuleRelativePath", "Public/AttributeSet_BA_CharBaseStats.h" },
		{ "ToolTip", "Gets relative Dexterity value between 0 and 1. Current value is base value plus/minus all modifiers" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetRelativeDexterity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSet_BA_CharBaseStats, nullptr, "GetRelativeDexterity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetRelativeDexterity_Statics::AttributeSet_BA_CharBaseStats_eventGetRelativeDexterity_Parms), Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetRelativeDexterity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetRelativeDexterity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetRelativeDexterity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetRelativeDexterity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetRelativeDexterity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetRelativeDexterity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetRelativeEndurance_Statics
	{
		struct AttributeSet_BA_CharBaseStats_eventGetRelativeEndurance_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetRelativeEndurance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AttributeSet_BA_CharBaseStats_eventGetRelativeEndurance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetRelativeEndurance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetRelativeEndurance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetRelativeEndurance_Statics::Function_MetaDataParams[] = {
		{ "Category", "AttributeSet_BA_CharBaseStats|Endurance" },
		{ "Comment", "/** Gets relative Endurance value between 0 and 1. Current value is base value plus/minus all modifiers */" },
		{ "ModuleRelativePath", "Public/AttributeSet_BA_CharBaseStats.h" },
		{ "ToolTip", "Gets relative Endurance value between 0 and 1. Current value is base value plus/minus all modifiers" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetRelativeEndurance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSet_BA_CharBaseStats, nullptr, "GetRelativeEndurance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetRelativeEndurance_Statics::AttributeSet_BA_CharBaseStats_eventGetRelativeEndurance_Parms), Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetRelativeEndurance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetRelativeEndurance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetRelativeEndurance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetRelativeEndurance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetRelativeEndurance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetRelativeEndurance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetRelativeIntelligence_Statics
	{
		struct AttributeSet_BA_CharBaseStats_eventGetRelativeIntelligence_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetRelativeIntelligence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AttributeSet_BA_CharBaseStats_eventGetRelativeIntelligence_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetRelativeIntelligence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetRelativeIntelligence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetRelativeIntelligence_Statics::Function_MetaDataParams[] = {
		{ "Category", "AttributeSet_BA_CharBaseStats|Intelligence" },
		{ "Comment", "/** Gets relative Intelligence value between 0 and 1. Current value is base value plus/minus all modifiers */" },
		{ "ModuleRelativePath", "Public/AttributeSet_BA_CharBaseStats.h" },
		{ "ToolTip", "Gets relative Intelligence value between 0 and 1. Current value is base value plus/minus all modifiers" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetRelativeIntelligence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSet_BA_CharBaseStats, nullptr, "GetRelativeIntelligence", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetRelativeIntelligence_Statics::AttributeSet_BA_CharBaseStats_eventGetRelativeIntelligence_Parms), Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetRelativeIntelligence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetRelativeIntelligence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetRelativeIntelligence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetRelativeIntelligence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetRelativeIntelligence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetRelativeIntelligence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetRelativeStrength_Statics
	{
		struct AttributeSet_BA_CharBaseStats_eventGetRelativeStrength_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetRelativeStrength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AttributeSet_BA_CharBaseStats_eventGetRelativeStrength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetRelativeStrength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetRelativeStrength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetRelativeStrength_Statics::Function_MetaDataParams[] = {
		{ "Category", "AttributeSet_BA_CharBaseStats|Strength" },
		{ "Comment", "/** Gets relative Strength value between 0 and 1. Current value is base value plus/minus all modifiers */" },
		{ "ModuleRelativePath", "Public/AttributeSet_BA_CharBaseStats.h" },
		{ "ToolTip", "Gets relative Strength value between 0 and 1. Current value is base value plus/minus all modifiers" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetRelativeStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSet_BA_CharBaseStats, nullptr, "GetRelativeStrength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetRelativeStrength_Statics::AttributeSet_BA_CharBaseStats_eventGetRelativeStrength_Parms), Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetRelativeStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetRelativeStrength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetRelativeStrength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetRelativeStrength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetRelativeStrength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetRelativeStrength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetStrengthAttribute_Statics
	{
		struct AttributeSet_BA_CharBaseStats_eventGetStrengthAttribute_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetStrengthAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AttributeSet_BA_CharBaseStats_eventGetStrengthAttribute_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(nullptr, 0) }; // 2095245243
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetStrengthAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetStrengthAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetStrengthAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "AttributeSet_BA_CharBaseStats|Strength" },
		{ "Comment", "/** Gets current Strength's FGameplayAttribute */" },
		{ "ModuleRelativePath", "Public/AttributeSet_BA_CharBaseStats.h" },
		{ "ToolTip", "Gets current Strength's FGameplayAttribute" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetStrengthAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSet_BA_CharBaseStats, nullptr, "GetStrengthAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetStrengthAttribute_Statics::AttributeSet_BA_CharBaseStats_eventGetStrengthAttribute_Parms), Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetStrengthAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetStrengthAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetStrengthAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetStrengthAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetStrengthAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetStrengthAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Dexterity_Statics
	{
		struct AttributeSet_BA_CharBaseStats_eventOnRep_Dexterity_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Dexterity_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Dexterity_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AttributeSet_BA_CharBaseStats_eventOnRep_Dexterity_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Dexterity_Statics::NewProp_OldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Dexterity_Statics::NewProp_OldValue_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Dexterity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Dexterity_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Dexterity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AttributeSet_BA_CharBaseStats.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Dexterity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSet_BA_CharBaseStats, nullptr, "OnRep_Dexterity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Dexterity_Statics::AttributeSet_BA_CharBaseStats_eventOnRep_Dexterity_Parms), Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Dexterity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Dexterity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Dexterity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Dexterity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Dexterity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Dexterity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Endurance_Statics
	{
		struct AttributeSet_BA_CharBaseStats_eventOnRep_Endurance_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Endurance_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Endurance_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AttributeSet_BA_CharBaseStats_eventOnRep_Endurance_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Endurance_Statics::NewProp_OldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Endurance_Statics::NewProp_OldValue_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Endurance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Endurance_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Endurance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AttributeSet_BA_CharBaseStats.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Endurance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSet_BA_CharBaseStats, nullptr, "OnRep_Endurance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Endurance_Statics::AttributeSet_BA_CharBaseStats_eventOnRep_Endurance_Parms), Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Endurance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Endurance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Endurance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Endurance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Endurance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Endurance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Intelligence_Statics
	{
		struct AttributeSet_BA_CharBaseStats_eventOnRep_Intelligence_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Intelligence_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Intelligence_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AttributeSet_BA_CharBaseStats_eventOnRep_Intelligence_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Intelligence_Statics::NewProp_OldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Intelligence_Statics::NewProp_OldValue_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Intelligence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Intelligence_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Intelligence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AttributeSet_BA_CharBaseStats.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Intelligence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSet_BA_CharBaseStats, nullptr, "OnRep_Intelligence", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Intelligence_Statics::AttributeSet_BA_CharBaseStats_eventOnRep_Intelligence_Parms), Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Intelligence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Intelligence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Intelligence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Intelligence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Intelligence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Intelligence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Strength_Statics
	{
		struct AttributeSet_BA_CharBaseStats_eventOnRep_Strength_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Strength_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Strength_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AttributeSet_BA_CharBaseStats_eventOnRep_Strength_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Strength_Statics::NewProp_OldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Strength_Statics::NewProp_OldValue_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Strength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Strength_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Strength_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AttributeSet_BA_CharBaseStats.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Strength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSet_BA_CharBaseStats, nullptr, "OnRep_Strength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Strength_Statics::AttributeSet_BA_CharBaseStats_eventOnRep_Strength_Parms), Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Strength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Strength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Strength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Strength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Strength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Strength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_SetBaseDexterity_Statics
	{
		struct AttributeSet_BA_CharBaseStats_eventSetBaseDexterity_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_SetBaseDexterity_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AttributeSet_BA_CharBaseStats_eventSetBaseDexterity_Parms, NewVal), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_SetBaseDexterity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_SetBaseDexterity_Statics::NewProp_NewVal,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_SetBaseDexterity_Statics::Function_MetaDataParams[] = {
		{ "Category", "AttributeSet_BA_CharBaseStats|Dexterity" },
		{ "Comment", "/** Sets Dexterity base (and current) value. Base value is the permanent base, current value is after all modifiers. Should only be called on initialization */" },
		{ "ModuleRelativePath", "Public/AttributeSet_BA_CharBaseStats.h" },
		{ "ToolTip", "Sets Dexterity base (and current) value. Base value is the permanent base, current value is after all modifiers. Should only be called on initialization" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_SetBaseDexterity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSet_BA_CharBaseStats, nullptr, "SetBaseDexterity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_SetBaseDexterity_Statics::AttributeSet_BA_CharBaseStats_eventSetBaseDexterity_Parms), Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_SetBaseDexterity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_SetBaseDexterity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_SetBaseDexterity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_SetBaseDexterity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_SetBaseDexterity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_SetBaseDexterity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_SetBaseEndurance_Statics
	{
		struct AttributeSet_BA_CharBaseStats_eventSetBaseEndurance_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_SetBaseEndurance_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AttributeSet_BA_CharBaseStats_eventSetBaseEndurance_Parms, NewVal), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_SetBaseEndurance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_SetBaseEndurance_Statics::NewProp_NewVal,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_SetBaseEndurance_Statics::Function_MetaDataParams[] = {
		{ "Category", "AttributeSet_BA_CharBaseStats|Endurance" },
		{ "Comment", "/** Sets Endurance base (and current) value. Base value is the permanent base, current value is after all modifiers. Should only be called on initialization */" },
		{ "ModuleRelativePath", "Public/AttributeSet_BA_CharBaseStats.h" },
		{ "ToolTip", "Sets Endurance base (and current) value. Base value is the permanent base, current value is after all modifiers. Should only be called on initialization" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_SetBaseEndurance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSet_BA_CharBaseStats, nullptr, "SetBaseEndurance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_SetBaseEndurance_Statics::AttributeSet_BA_CharBaseStats_eventSetBaseEndurance_Parms), Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_SetBaseEndurance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_SetBaseEndurance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_SetBaseEndurance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_SetBaseEndurance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_SetBaseEndurance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_SetBaseEndurance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_SetBaseIntelligence_Statics
	{
		struct AttributeSet_BA_CharBaseStats_eventSetBaseIntelligence_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_SetBaseIntelligence_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AttributeSet_BA_CharBaseStats_eventSetBaseIntelligence_Parms, NewVal), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_SetBaseIntelligence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_SetBaseIntelligence_Statics::NewProp_NewVal,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_SetBaseIntelligence_Statics::Function_MetaDataParams[] = {
		{ "Category", "AttributeSet_BA_CharBaseStats|Intelligence" },
		{ "Comment", "/** Sets Intelligence base (and current) value. Base value is the permanent base, current value is after all modifiers. Should only be called on initialization */" },
		{ "ModuleRelativePath", "Public/AttributeSet_BA_CharBaseStats.h" },
		{ "ToolTip", "Sets Intelligence base (and current) value. Base value is the permanent base, current value is after all modifiers. Should only be called on initialization" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_SetBaseIntelligence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSet_BA_CharBaseStats, nullptr, "SetBaseIntelligence", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_SetBaseIntelligence_Statics::AttributeSet_BA_CharBaseStats_eventSetBaseIntelligence_Parms), Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_SetBaseIntelligence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_SetBaseIntelligence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_SetBaseIntelligence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_SetBaseIntelligence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_SetBaseIntelligence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_SetBaseIntelligence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_SetBaseStrength_Statics
	{
		struct AttributeSet_BA_CharBaseStats_eventSetBaseStrength_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_SetBaseStrength_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AttributeSet_BA_CharBaseStats_eventSetBaseStrength_Parms, NewVal), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_SetBaseStrength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_SetBaseStrength_Statics::NewProp_NewVal,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_SetBaseStrength_Statics::Function_MetaDataParams[] = {
		{ "Category", "AttributeSet_BA_CharBaseStats|Strength" },
		{ "Comment", "/** Sets Strength base (and current) value. Base value is the permanent base, current value is after all modifiers. Should only be called on initialization */" },
		{ "ModuleRelativePath", "Public/AttributeSet_BA_CharBaseStats.h" },
		{ "ToolTip", "Sets Strength base (and current) value. Base value is the permanent base, current value is after all modifiers. Should only be called on initialization" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_SetBaseStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSet_BA_CharBaseStats, nullptr, "SetBaseStrength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_SetBaseStrength_Statics::AttributeSet_BA_CharBaseStats_eventSetBaseStrength_Parms), Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_SetBaseStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_SetBaseStrength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_SetBaseStrength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_SetBaseStrength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_SetBaseStrength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_SetBaseStrength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAttributeSet_BA_CharBaseStats);
	UClass* Z_Construct_UClass_UAttributeSet_BA_CharBaseStats_NoRegister()
	{
		return UAttributeSet_BA_CharBaseStats::StaticClass();
	}
	struct Z_Construct_UClass_UAttributeSet_BA_CharBaseStats_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Strength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Endurance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Endurance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Intelligence_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Intelligence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Dexterity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Dexterity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttributeSet_BA_CharBaseStats_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_BastianRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAttributeSet_BA_CharBaseStats_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetBaseDexterity, "GetBaseDexterity" }, // 1523296212
		{ &Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetBaseEndurance, "GetBaseEndurance" }, // 4276680656
		{ &Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetBaseIntelligence, "GetBaseIntelligence" }, // 2729263002
		{ &Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetBaseStrength, "GetBaseStrength" }, // 992687622
		{ &Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetCurrentDexterity, "GetCurrentDexterity" }, // 1472360768
		{ &Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetCurrentEndurance, "GetCurrentEndurance" }, // 2174964982
		{ &Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetCurrentIntelligence, "GetCurrentIntelligence" }, // 3274890171
		{ &Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetCurrentStrength, "GetCurrentStrength" }, // 326823913
		{ &Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetDexterityAttribute, "GetDexterityAttribute" }, // 1832665045
		{ &Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetEnduranceAttribute, "GetEnduranceAttribute" }, // 3362238440
		{ &Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetGameplayTag_Dexterity, "GetGameplayTag_Dexterity" }, // 4149769440
		{ &Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetGameplayTag_Endurance, "GetGameplayTag_Endurance" }, // 3694157374
		{ &Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetGameplayTag_Intelligence, "GetGameplayTag_Intelligence" }, // 1552944352
		{ &Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetGameplayTag_Strength, "GetGameplayTag_Strength" }, // 2263952792
		{ &Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetIntelligenceAttribute, "GetIntelligenceAttribute" }, // 61952517
		{ &Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetRelativeDexterity, "GetRelativeDexterity" }, // 1732510008
		{ &Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetRelativeEndurance, "GetRelativeEndurance" }, // 1687629378
		{ &Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetRelativeIntelligence, "GetRelativeIntelligence" }, // 1061866577
		{ &Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetRelativeStrength, "GetRelativeStrength" }, // 143991942
		{ &Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_GetStrengthAttribute, "GetStrengthAttribute" }, // 1674322212
		{ &Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Dexterity, "OnRep_Dexterity" }, // 3212881102
		{ &Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Endurance, "OnRep_Endurance" }, // 174435565
		{ &Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Intelligence, "OnRep_Intelligence" }, // 2807848907
		{ &Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_OnRep_Strength, "OnRep_Strength" }, // 932495069
		{ &Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_SetBaseDexterity, "SetBaseDexterity" }, // 2193546411
		{ &Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_SetBaseEndurance, "SetBaseEndurance" }, // 1878465048
		{ &Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_SetBaseIntelligence, "SetBaseIntelligence" }, // 54897005
		{ &Z_Construct_UFunction_UAttributeSet_BA_CharBaseStats_SetBaseStrength, "SetBaseStrength" }, // 1724796673
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeSet_BA_CharBaseStats_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * AttributeSet_BA_CharBaseStats\n * Default hero attribute set for BA plugin\n */" },
		{ "IncludePath", "AttributeSet_BA_CharBaseStats.h" },
		{ "ModuleRelativePath", "Public/AttributeSet_BA_CharBaseStats.h" },
		{ "ToolTip", "AttributeSet_BA_CharBaseStats\nDefault hero attribute set for BA plugin" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeSet_BA_CharBaseStats_Statics::NewProp_Strength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AttributeSet_BA_CharBaseStats" },
		{ "Comment", "// one property per attribute\n" },
		{ "ModuleRelativePath", "Public/AttributeSet_BA_CharBaseStats.h" },
		{ "ToolTip", "one property per attribute" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttributeSet_BA_CharBaseStats_Statics::NewProp_Strength = { "Strength", "OnRep_Strength", (EPropertyFlags)0x0040000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAttributeSet_BA_CharBaseStats, Strength), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UAttributeSet_BA_CharBaseStats_Statics::NewProp_Strength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeSet_BA_CharBaseStats_Statics::NewProp_Strength_MetaData)) }; // 1256614452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeSet_BA_CharBaseStats_Statics::NewProp_Endurance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AttributeSet_BA_CharBaseStats" },
		{ "ModuleRelativePath", "Public/AttributeSet_BA_CharBaseStats.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttributeSet_BA_CharBaseStats_Statics::NewProp_Endurance = { "Endurance", "OnRep_Endurance", (EPropertyFlags)0x0040000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAttributeSet_BA_CharBaseStats, Endurance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UAttributeSet_BA_CharBaseStats_Statics::NewProp_Endurance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeSet_BA_CharBaseStats_Statics::NewProp_Endurance_MetaData)) }; // 1256614452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeSet_BA_CharBaseStats_Statics::NewProp_Intelligence_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AttributeSet_BA_CharBaseStats" },
		{ "ModuleRelativePath", "Public/AttributeSet_BA_CharBaseStats.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttributeSet_BA_CharBaseStats_Statics::NewProp_Intelligence = { "Intelligence", "OnRep_Intelligence", (EPropertyFlags)0x0040000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAttributeSet_BA_CharBaseStats, Intelligence), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UAttributeSet_BA_CharBaseStats_Statics::NewProp_Intelligence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeSet_BA_CharBaseStats_Statics::NewProp_Intelligence_MetaData)) }; // 1256614452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeSet_BA_CharBaseStats_Statics::NewProp_Dexterity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AttributeSet_BA_CharBaseStats" },
		{ "ModuleRelativePath", "Public/AttributeSet_BA_CharBaseStats.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttributeSet_BA_CharBaseStats_Statics::NewProp_Dexterity = { "Dexterity", "OnRep_Dexterity", (EPropertyFlags)0x0040000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAttributeSet_BA_CharBaseStats, Dexterity), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UAttributeSet_BA_CharBaseStats_Statics::NewProp_Dexterity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeSet_BA_CharBaseStats_Statics::NewProp_Dexterity_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttributeSet_BA_CharBaseStats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeSet_BA_CharBaseStats_Statics::NewProp_Strength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeSet_BA_CharBaseStats_Statics::NewProp_Endurance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeSet_BA_CharBaseStats_Statics::NewProp_Intelligence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeSet_BA_CharBaseStats_Statics::NewProp_Dexterity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttributeSet_BA_CharBaseStats_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttributeSet_BA_CharBaseStats>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttributeSet_BA_CharBaseStats_Statics::ClassParams = {
		&UAttributeSet_BA_CharBaseStats::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAttributeSet_BA_CharBaseStats_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeSet_BA_CharBaseStats_Statics::PropPointers),
		0,
		0x002000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAttributeSet_BA_CharBaseStats_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeSet_BA_CharBaseStats_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAttributeSet_BA_CharBaseStats()
	{
		if (!Z_Registration_Info_UClass_UAttributeSet_BA_CharBaseStats.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttributeSet_BA_CharBaseStats.OuterSingleton, Z_Construct_UClass_UAttributeSet_BA_CharBaseStats_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAttributeSet_BA_CharBaseStats.OuterSingleton;
	}
	template<> BASTIANRUNTIME_API UClass* StaticClass<UAttributeSet_BA_CharBaseStats>()
	{
		return UAttributeSet_BA_CharBaseStats::StaticClass();
	}

	void UAttributeSet_BA_CharBaseStats::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Strength(TEXT("Strength"));
		static const FName Name_Endurance(TEXT("Endurance"));
		static const FName Name_Intelligence(TEXT("Intelligence"));
		static const FName Name_Dexterity(TEXT("Dexterity"));

		const bool bIsValid = true
			&& Name_Strength == ClassReps[(int32)ENetFields_Private::Strength].Property->GetFName()
			&& Name_Endurance == ClassReps[(int32)ENetFields_Private::Endurance].Property->GetFName()
			&& Name_Intelligence == ClassReps[(int32)ENetFields_Private::Intelligence].Property->GetFName()
			&& Name_Dexterity == ClassReps[(int32)ENetFields_Private::Dexterity].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UAttributeSet_BA_CharBaseStats"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttributeSet_BA_CharBaseStats);
	UAttributeSet_BA_CharBaseStats::~UAttributeSet_BA_CharBaseStats() {}
	struct Z_CompiledInDeferFile_FID_Users_rober_OneDrive_Dokumente_Unreal_Projects_LyraStarterGame_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_AttributeSet_BA_CharBaseStats_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rober_OneDrive_Dokumente_Unreal_Projects_LyraStarterGame_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_AttributeSet_BA_CharBaseStats_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameAttributeSet, UGameAttributeSet::StaticClass, TEXT("UGameAttributeSet"), &Z_Registration_Info_UClass_UGameAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameAttributeSet), 4167702260U) },
		{ Z_Construct_UClass_UAttributeSet_BA_CharBaseStats, UAttributeSet_BA_CharBaseStats::StaticClass, TEXT("UAttributeSet_BA_CharBaseStats"), &Z_Registration_Info_UClass_UAttributeSet_BA_CharBaseStats, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttributeSet_BA_CharBaseStats), 441011909U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rober_OneDrive_Dokumente_Unreal_Projects_LyraStarterGame_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_AttributeSet_BA_CharBaseStats_h_2701277898(TEXT("/Script/BastianRuntime"),
		Z_CompiledInDeferFile_FID_Users_rober_OneDrive_Dokumente_Unreal_Projects_LyraStarterGame_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_AttributeSet_BA_CharBaseStats_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rober_OneDrive_Dokumente_Unreal_Projects_LyraStarterGame_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_AttributeSet_BA_CharBaseStats_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

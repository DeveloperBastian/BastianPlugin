// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AttributeSetBADefault.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef BASTIANRUNTIME_AttributeSetBADefault_generated_h
#error "AttributeSetBADefault.generated.h already included, missing '#pragma once' in AttributeSetBADefault.h"
#endif
#define BASTIANRUNTIME_AttributeSetBADefault_generated_h

#define FID_LyraStarterGame52_Plugins_GameFeatures_Bastian_Source_BastianRuntime_Public_AttributeSetBADefault_h_17_SPARSE_DATA
#define FID_LyraStarterGame52_Plugins_GameFeatures_Bastian_Source_BastianRuntime_Public_AttributeSetBADefault_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_Rage); \
	DECLARE_FUNCTION(execOnRep_Cold); \
	DECLARE_FUNCTION(execOnRep_Heat); \
	DECLARE_FUNCTION(execOnRep_SightRange); \
	DECLARE_FUNCTION(execOnRep_BlockRangeAttack); \
	DECLARE_FUNCTION(execOnRep_BlockMeleeAttack); \
	DECLARE_FUNCTION(execOnRep_BlockMagicAttack); \
	DECLARE_FUNCTION(execOnRep_Thirst); \
	DECLARE_FUNCTION(execOnRep_Hunger); \
	DECLARE_FUNCTION(execOnRep_Endurance); \
	DECLARE_FUNCTION(execOnRep_Sprit); \
	DECLARE_FUNCTION(execOnRep_Mana); \
	DECLARE_FUNCTION(execOnRep_Health); \
	DECLARE_FUNCTION(execOnRep_Perception); \
	DECLARE_FUNCTION(execOnRep_Luck); \
	DECLARE_FUNCTION(execOnRep_Charisma); \
	DECLARE_FUNCTION(execOnRep_Wisdom); \
	DECLARE_FUNCTION(execOnRep_Intelligence); \
	DECLARE_FUNCTION(execOnRep_Dexterity); \
	DECLARE_FUNCTION(execOnRep_Constitution); \
	DECLARE_FUNCTION(execOnRep_Strength);


#define FID_LyraStarterGame52_Plugins_GameFeatures_Bastian_Source_BastianRuntime_Public_AttributeSetBADefault_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_Rage); \
	DECLARE_FUNCTION(execOnRep_Cold); \
	DECLARE_FUNCTION(execOnRep_Heat); \
	DECLARE_FUNCTION(execOnRep_SightRange); \
	DECLARE_FUNCTION(execOnRep_BlockRangeAttack); \
	DECLARE_FUNCTION(execOnRep_BlockMeleeAttack); \
	DECLARE_FUNCTION(execOnRep_BlockMagicAttack); \
	DECLARE_FUNCTION(execOnRep_Thirst); \
	DECLARE_FUNCTION(execOnRep_Hunger); \
	DECLARE_FUNCTION(execOnRep_Endurance); \
	DECLARE_FUNCTION(execOnRep_Sprit); \
	DECLARE_FUNCTION(execOnRep_Mana); \
	DECLARE_FUNCTION(execOnRep_Health); \
	DECLARE_FUNCTION(execOnRep_Perception); \
	DECLARE_FUNCTION(execOnRep_Luck); \
	DECLARE_FUNCTION(execOnRep_Charisma); \
	DECLARE_FUNCTION(execOnRep_Wisdom); \
	DECLARE_FUNCTION(execOnRep_Intelligence); \
	DECLARE_FUNCTION(execOnRep_Dexterity); \
	DECLARE_FUNCTION(execOnRep_Constitution); \
	DECLARE_FUNCTION(execOnRep_Strength);


#define FID_LyraStarterGame52_Plugins_GameFeatures_Bastian_Source_BastianRuntime_Public_AttributeSetBADefault_h_17_ACCESSORS
#define FID_LyraStarterGame52_Plugins_GameFeatures_Bastian_Source_BastianRuntime_Public_AttributeSetBADefault_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAttributeSetBADefault(); \
	friend struct Z_Construct_UClass_UAttributeSetBADefault_Statics; \
public: \
	DECLARE_CLASS(UAttributeSetBADefault, ULyraAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BastianRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAttributeSetBADefault) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Strength=NETFIELD_REP_START, \
		Constitution, \
		Dexterity, \
		Intelligence, \
		Wisdom, \
		Charisma, \
		Luck, \
		Perception, \
		Health, \
		Mana, \
		Sprit, \
		Endurance, \
		Hunger, \
		Thirst, \
		BlockMagicAttack, \
		BlockMeleeAttack, \
		BlockRangeAttack, \
		SightRange, \
		Heat, \
		Cold, \
		Rage, \
		NETFIELD_REP_END=Rage	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UAttributeSetBADefault) \
public:


#define FID_LyraStarterGame52_Plugins_GameFeatures_Bastian_Source_BastianRuntime_Public_AttributeSetBADefault_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUAttributeSetBADefault(); \
	friend struct Z_Construct_UClass_UAttributeSetBADefault_Statics; \
public: \
	DECLARE_CLASS(UAttributeSetBADefault, ULyraAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BastianRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAttributeSetBADefault) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Strength=NETFIELD_REP_START, \
		Constitution, \
		Dexterity, \
		Intelligence, \
		Wisdom, \
		Charisma, \
		Luck, \
		Perception, \
		Health, \
		Mana, \
		Sprit, \
		Endurance, \
		Hunger, \
		Thirst, \
		BlockMagicAttack, \
		BlockMeleeAttack, \
		BlockRangeAttack, \
		SightRange, \
		Heat, \
		Cold, \
		Rage, \
		NETFIELD_REP_END=Rage	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UAttributeSetBADefault) \
public:


#define FID_LyraStarterGame52_Plugins_GameFeatures_Bastian_Source_BastianRuntime_Public_AttributeSetBADefault_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAttributeSetBADefault(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAttributeSetBADefault) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAttributeSetBADefault); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttributeSetBADefault); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAttributeSetBADefault(UAttributeSetBADefault&&); \
	NO_API UAttributeSetBADefault(const UAttributeSetBADefault&); \
public: \
	NO_API virtual ~UAttributeSetBADefault();


#define FID_LyraStarterGame52_Plugins_GameFeatures_Bastian_Source_BastianRuntime_Public_AttributeSetBADefault_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAttributeSetBADefault(UAttributeSetBADefault&&); \
	NO_API UAttributeSetBADefault(const UAttributeSetBADefault&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAttributeSetBADefault); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttributeSetBADefault); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAttributeSetBADefault) \
	NO_API virtual ~UAttributeSetBADefault();


#define FID_LyraStarterGame52_Plugins_GameFeatures_Bastian_Source_BastianRuntime_Public_AttributeSetBADefault_h_14_PROLOG
#define FID_LyraStarterGame52_Plugins_GameFeatures_Bastian_Source_BastianRuntime_Public_AttributeSetBADefault_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGame52_Plugins_GameFeatures_Bastian_Source_BastianRuntime_Public_AttributeSetBADefault_h_17_SPARSE_DATA \
	FID_LyraStarterGame52_Plugins_GameFeatures_Bastian_Source_BastianRuntime_Public_AttributeSetBADefault_h_17_RPC_WRAPPERS \
	FID_LyraStarterGame52_Plugins_GameFeatures_Bastian_Source_BastianRuntime_Public_AttributeSetBADefault_h_17_ACCESSORS \
	FID_LyraStarterGame52_Plugins_GameFeatures_Bastian_Source_BastianRuntime_Public_AttributeSetBADefault_h_17_INCLASS \
	FID_LyraStarterGame52_Plugins_GameFeatures_Bastian_Source_BastianRuntime_Public_AttributeSetBADefault_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_LyraStarterGame52_Plugins_GameFeatures_Bastian_Source_BastianRuntime_Public_AttributeSetBADefault_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGame52_Plugins_GameFeatures_Bastian_Source_BastianRuntime_Public_AttributeSetBADefault_h_17_SPARSE_DATA \
	FID_LyraStarterGame52_Plugins_GameFeatures_Bastian_Source_BastianRuntime_Public_AttributeSetBADefault_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LyraStarterGame52_Plugins_GameFeatures_Bastian_Source_BastianRuntime_Public_AttributeSetBADefault_h_17_ACCESSORS \
	FID_LyraStarterGame52_Plugins_GameFeatures_Bastian_Source_BastianRuntime_Public_AttributeSetBADefault_h_17_INCLASS_NO_PURE_DECLS \
	FID_LyraStarterGame52_Plugins_GameFeatures_Bastian_Source_BastianRuntime_Public_AttributeSetBADefault_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASTIANRUNTIME_API UClass* StaticClass<class UAttributeSetBADefault>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LyraStarterGame52_Plugins_GameFeatures_Bastian_Source_BastianRuntime_Public_AttributeSetBADefault_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

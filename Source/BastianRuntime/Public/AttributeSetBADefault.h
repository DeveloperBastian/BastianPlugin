#pragma once

#include "AbilitySystemComponent.h"
#include "AbilitySystem/Attributes/LyraAttributeSet.h"
#include "AttributeSetBADefault.generated.h"

class UObject;
struct FFrame;

/**
 * AttributeSetBADefault
 * Default hero attribute set for BA plugin
 */
UCLASS(BlueprintType)
class UAttributeSetBADefault : public ULyraAttributeSet
{
	GENERATED_BODY()

public:
	UAttributeSetBADefault();

	// one line for each attribute accessor macro
	ATTRIBUTE_ACCESSORS(UAttributeSetBADefault, Strength);
	ATTRIBUTE_ACCESSORS(UAttributeSetBADefault, Constitution);
	ATTRIBUTE_ACCESSORS(UAttributeSetBADefault, Dexterity);
	ATTRIBUTE_ACCESSORS(UAttributeSetBADefault, Intelligence);
	ATTRIBUTE_ACCESSORS(UAttributeSetBADefault, Wisdom);
	ATTRIBUTE_ACCESSORS(UAttributeSetBADefault, Charisma);
	ATTRIBUTE_ACCESSORS(UAttributeSetBADefault, Luck);
	ATTRIBUTE_ACCESSORS(UAttributeSetBADefault, Perception);
	ATTRIBUTE_ACCESSORS(UAttributeSetBADefault, Health);
	ATTRIBUTE_ACCESSORS(UAttributeSetBADefault, Mana);
	ATTRIBUTE_ACCESSORS(UAttributeSetBADefault, Sprit);
	ATTRIBUTE_ACCESSORS(UAttributeSetBADefault, Endurance);
	ATTRIBUTE_ACCESSORS(UAttributeSetBADefault, Hunger);
	ATTRIBUTE_ACCESSORS(UAttributeSetBADefault, Thirst);
	ATTRIBUTE_ACCESSORS(UAttributeSetBADefault, BlockMagicAttack);
	ATTRIBUTE_ACCESSORS(UAttributeSetBADefault, BlockMeleeAttack);
	ATTRIBUTE_ACCESSORS(UAttributeSetBADefault, BlockRangeAttack);
	ATTRIBUTE_ACCESSORS(UAttributeSetBADefault, SightRange);
	ATTRIBUTE_ACCESSORS(UAttributeSetBADefault, Heat);
	ATTRIBUTE_ACCESSORS(UAttributeSetBADefault, Cold);
	ATTRIBUTE_ACCESSORS(UAttributeSetBADefault, Rage);


protected:
	// one function on Replication
	UFUNCTION()
		void OnRep_Strength(const FGameplayAttributeData& OldValue);

	UFUNCTION()
		void OnRep_Constitution(const FGameplayAttributeData& OldValue);

	UFUNCTION()
		void OnRep_Dexterity(const FGameplayAttributeData& OldValue);

	UFUNCTION()
		void OnRep_Intelligence(const FGameplayAttributeData& OldValue);

	UFUNCTION()
		void OnRep_Wisdom(const FGameplayAttributeData& OldValue);

	UFUNCTION()
		void OnRep_Charisma(const FGameplayAttributeData& OldValue);

	UFUNCTION()
		void OnRep_Luck(const FGameplayAttributeData& OldValue);

	UFUNCTION()
		void OnRep_Perception(const FGameplayAttributeData& OldValue);

	UFUNCTION()
		void OnRep_Health(const FGameplayAttributeData& OldValue);

	UFUNCTION()
		void OnRep_Mana(const FGameplayAttributeData& OldValue);

	UFUNCTION()
		void OnRep_Sprit(const FGameplayAttributeData& OldValue);

	UFUNCTION()
		void OnRep_Endurance(const FGameplayAttributeData& OldValue);

	UFUNCTION()
		void OnRep_Hunger(const FGameplayAttributeData& OldValue);

	UFUNCTION()
		void OnRep_Thirst(const FGameplayAttributeData& OldValue);

	UFUNCTION()
		void OnRep_BlockMagicAttack(const FGameplayAttributeData& OldValue);

	UFUNCTION()
		void OnRep_BlockMeleeAttack(const FGameplayAttributeData& OldValue);

	UFUNCTION()
		void OnRep_BlockRangeAttack(const FGameplayAttributeData& OldValue);

	UFUNCTION()
		void OnRep_SightRange(const FGameplayAttributeData& OldValue);

	UFUNCTION()
		void OnRep_Heat(const FGameplayAttributeData& OldValue);

	UFUNCTION()
		void OnRep_Cold(const FGameplayAttributeData& OldValue);

	UFUNCTION()
		void OnRep_Rage(const FGameplayAttributeData& OldValue);


private:

	// one property per attribute
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Strength, Category = "AttributeSetBADefault", Meta = (AllowPrivateAccess = true))
		FGameplayAttributeData Strength;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Constitution, Category = "AttributeSetBADefault", Meta = (AllowPrivateAccess = true))
		FGameplayAttributeData Constitution;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Dexterity, Category = "AttributeSetBADefault", Meta = (AllowPrivateAccess = true))
		FGameplayAttributeData Dexterity;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Intelligence, Category = "AttributeSetBADefault", Meta = (AllowPrivateAccess = true))
		FGameplayAttributeData Intelligence;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Wisdom, Category = "AttributeSetBADefault", Meta = (AllowPrivateAccess = true))
		FGameplayAttributeData Wisdom;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Charisma, Category = "AttributeSetBADefault", Meta = (AllowPrivateAccess = true))
		FGameplayAttributeData Charisma;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Luck, Category = "AttributeSetBADefault", Meta = (AllowPrivateAccess = true))
		FGameplayAttributeData Luck;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Perception, Category = "AttributeSetBADefault", Meta = (AllowPrivateAccess = true))
		FGameplayAttributeData Perception;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Health, Category = "AttributeSetBADefault", Meta = (AllowPrivateAccess = true))
		FGameplayAttributeData Health;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Mana, Category = "AttributeSetBADefault", Meta = (AllowPrivateAccess = true))
		FGameplayAttributeData Mana;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Sprit, Category = "AttributeSetBADefault", Meta = (AllowPrivateAccess = true))
		FGameplayAttributeData Sprit;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Endurance, Category = "AttributeSetBADefault", Meta = (AllowPrivateAccess = true))
		FGameplayAttributeData Endurance;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Hunger, Category = "AttributeSetBADefault", Meta = (AllowPrivateAccess = true))
		FGameplayAttributeData Hunger;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Thirst, Category = "AttributeSetBADefault", Meta = (AllowPrivateAccess = true))
		FGameplayAttributeData Thirst;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_BlockMagicAttack, Category = "AttributeSetBADefault", Meta = (AllowPrivateAccess = true))
		FGameplayAttributeData BlockMagicAttack;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_BlockMeleeAttack, Category = "AttributeSetBADefault", Meta = (AllowPrivateAccess = true))
		FGameplayAttributeData BlockMeleeAttack;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_BlockRangeAttack, Category = "AttributeSetBADefault", Meta = (AllowPrivateAccess = true))
		FGameplayAttributeData BlockRangeAttack;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_SightRange, Category = "AttributeSetBADefault", Meta = (AllowPrivateAccess = true))
		FGameplayAttributeData SightRange;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Heat, Category = "AttributeSetBADefault", Meta = (AllowPrivateAccess = true))
		FGameplayAttributeData Heat;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Cold, Category = "AttributeSetBADefault", Meta = (AllowPrivateAccess = true))
		FGameplayAttributeData Cold;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Rage, Category = "AttributeSetBADefault", Meta = (AllowPrivateAccess = true))
		FGameplayAttributeData Rage;


};
#include "AttributeSetBADefault.h"
#include "AbilitySystem/Attributes/LyraAttributeSet.h"
#include "Net/UnrealNetwork.h"
#include UE_INLINE_GENERATED_CPP_BY_NAME(AttributeSetBADefault)

class FLifetimeProperty;

UAttributeSetBADefault::UAttributeSetBADefault()
	: Strength(0.0f), Constitution(0.0f), Dexterity(0.0f), Intelligence(0.0f), Wisdom(0.0f), Charisma(0.0f), Luck(0.0f), Perception(0.0f), Health(0.0f), Mana(0.0f), Sprit(0.0f), Endurance(0.0f), Hunger(0.0f), Thirst(0.0f), BlockMagicAttack(0.0f), BlockMeleeAttack(0.0f), BlockRangeAttack(0.0f), SightRange(0.0f), Heat(0.0f), Cold(0.0f), Rage(0.0f)
{
}

void UAttributeSetBADefault::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	// one macro call per attribute
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBADefault, Strength, COND_OwnerOnly, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBADefault, Constitution, COND_OwnerOnly, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBADefault, Dexterity, COND_OwnerOnly, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBADefault, Intelligence, COND_OwnerOnly, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBADefault, Wisdom, COND_OwnerOnly, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBADefault, Charisma, COND_OwnerOnly, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBADefault, Luck, COND_OwnerOnly, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBADefault, Perception, COND_OwnerOnly, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBADefault, Health, COND_OwnerOnly, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBADefault, Mana, COND_OwnerOnly, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBADefault, Sprit, COND_OwnerOnly, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBADefault, Endurance, COND_OwnerOnly, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBADefault, Hunger, COND_OwnerOnly, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBADefault, Thirst, COND_OwnerOnly, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBADefault, BlockMagicAttack, COND_OwnerOnly, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBADefault, BlockMeleeAttack, COND_OwnerOnly, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBADefault, BlockRangeAttack, COND_OwnerOnly, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBADefault, SightRange, COND_OwnerOnly, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBADefault, Heat, COND_OwnerOnly, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBADefault, Cold, COND_OwnerOnly, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBADefault, Rage, COND_OwnerOnly, REPNOTIFY_Always);

}

//One function per attribute
void UAttributeSetBADefault::OnRep_Strength(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBADefault, Strength, OldValue);
}
void UAttributeSetBADefault::OnRep_Constitution(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBADefault, Constitution, OldValue);
}
void UAttributeSetBADefault::OnRep_Dexterity(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBADefault, Dexterity, OldValue);
}
void UAttributeSetBADefault::OnRep_Intelligence(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBADefault, Intelligence, OldValue);
}
void UAttributeSetBADefault::OnRep_Wisdom(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBADefault, Wisdom, OldValue);
}
void UAttributeSetBADefault::OnRep_Charisma(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBADefault, Charisma, OldValue);
}
void UAttributeSetBADefault::OnRep_Luck(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBADefault, Luck, OldValue);
}
void UAttributeSetBADefault::OnRep_Perception(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBADefault, Perception, OldValue);
}
void UAttributeSetBADefault::OnRep_Health(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBADefault, Health, OldValue);
}
void UAttributeSetBADefault::OnRep_Mana(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBADefault, Mana, OldValue);
}
void UAttributeSetBADefault::OnRep_Sprit(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBADefault, Sprit, OldValue);
}
void UAttributeSetBADefault::OnRep_Endurance(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBADefault, Endurance, OldValue);
}
void UAttributeSetBADefault::OnRep_Hunger(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBADefault, Hunger, OldValue);
}
void UAttributeSetBADefault::OnRep_Thirst(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBADefault, Thirst, OldValue);
}
void UAttributeSetBADefault::OnRep_BlockMagicAttack(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBADefault, BlockMagicAttack, OldValue);
}
void UAttributeSetBADefault::OnRep_BlockMeleeAttack(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBADefault, BlockMeleeAttack, OldValue);
}
void UAttributeSetBADefault::OnRep_BlockRangeAttack(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBADefault, BlockRangeAttack, OldValue);
}
void UAttributeSetBADefault::OnRep_SightRange(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBADefault, SightRange, OldValue);
}
void UAttributeSetBADefault::OnRep_Heat(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBADefault, Heat, OldValue);
}
void UAttributeSetBADefault::OnRep_Cold(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBADefault, Cold, OldValue);
}
void UAttributeSetBADefault::OnRep_Rage(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBADefault, Rage, OldValue);
}

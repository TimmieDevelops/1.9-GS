#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_Melee_GenericCombo

#include "Basic.hpp"

#include "GAB_Melee_GenericCombo_classes.hpp"
#include "GAB_Melee_GenericCombo_parameters.hpp"


namespace SDK
{

// Function GAB_Melee_GenericCombo.GAB_Melee_GenericCombo_C.ExecuteUbergraph_GAB_Melee_GenericCombo
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_Melee_GenericCombo_C::ExecuteUbergraph_GAB_Melee_GenericCombo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Melee_GenericCombo_C", "ExecuteUbergraph_GAB_Melee_GenericCombo");

	Params::GAB_Melee_GenericCombo_C_ExecuteUbergraph_GAB_Melee_GenericCombo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_Melee_GenericCombo.GAB_Melee_GenericCombo_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)

void UGAB_Melee_GenericCombo_C::K2_OnEndAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Melee_GenericCombo_C", "K2_OnEndAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GAB_Melee_GenericCombo.GAB_Melee_GenericCombo_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGAB_Melee_GenericCombo_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Melee_GenericCombo_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GAB_Melee_GenericCombo.GAB_Melee_GenericCombo_C.Triggered_C69ED31E4DA3D5C32C2E1EABFD10F38B
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                                             (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                     ApplicationTag                                         (Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_Melee_GenericCombo_C::Triggered_C69ED31E4DA3D5C32C2E1EABFD10F38B(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Melee_GenericCombo_C", "Triggered_C69ED31E4DA3D5C32C2E1EABFD10F38B");

	Params::GAB_Melee_GenericCombo_C_Triggered_C69ED31E4DA3D5C32C2E1EABFD10F38B Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_Melee_GenericCombo.GAB_Melee_GenericCombo_C.Cancelled_C69ED31E4DA3D5C32C2E1EABFD10F38B
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                                             (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                     ApplicationTag                                         (Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_Melee_GenericCombo_C::Cancelled_C69ED31E4DA3D5C32C2E1EABFD10F38B(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Melee_GenericCombo_C", "Cancelled_C69ED31E4DA3D5C32C2E1EABFD10F38B");

	Params::GAB_Melee_GenericCombo_C_Cancelled_C69ED31E4DA3D5C32C2E1EABFD10F38B Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_Melee_GenericCombo.GAB_Melee_GenericCombo_C.Completed_C69ED31E4DA3D5C32C2E1EABFD10F38B
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                                             (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                     ApplicationTag                                         (Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_Melee_GenericCombo_C::Completed_C69ED31E4DA3D5C32C2E1EABFD10F38B(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Melee_GenericCombo_C", "Completed_C69ED31E4DA3D5C32C2E1EABFD10F38B");

	Params::GAB_Melee_GenericCombo_C_Completed_C69ED31E4DA3D5C32C2E1EABFD10F38B Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}

}

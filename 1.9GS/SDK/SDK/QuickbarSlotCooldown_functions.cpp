#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: QuickbarSlotCooldown

#include "Basic.hpp"

#include "QuickbarSlotCooldown_classes.hpp"
#include "QuickbarSlotCooldown_parameters.hpp"


namespace SDK
{

// Function QuickbarSlotCooldown.QuickbarSlotCooldown_C.ExecuteUbergraph_QuickbarSlotCooldown
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuickbarSlotCooldown_C::ExecuteUbergraph_QuickbarSlotCooldown(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuickbarSlotCooldown_C", "ExecuteUbergraph_QuickbarSlotCooldown");

	Params::QuickbarSlotCooldown_C_ExecuteUbergraph_QuickbarSlotCooldown Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuickbarSlotCooldown.QuickbarSlotCooldown_C.OnCooldownStopped
// (Event, Public, BlueprintEvent)
// Parameters:
// EFortItemCooldownType                   CooldownType                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuickbarSlotCooldown_C::OnCooldownStopped(EFortItemCooldownType CooldownType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuickbarSlotCooldown_C", "OnCooldownStopped");

	Params::QuickbarSlotCooldown_C_OnCooldownStopped Parms{};

	Parms.CooldownType = CooldownType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuickbarSlotCooldown.QuickbarSlotCooldown_C.OnCooldownStarted
// (Event, Public, BlueprintEvent)
// Parameters:
// EFortItemCooldownType                   CooldownType                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuickbarSlotCooldown_C::OnCooldownStarted(EFortItemCooldownType CooldownType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuickbarSlotCooldown_C", "OnCooldownStarted");

	Params::QuickbarSlotCooldown_C_OnCooldownStarted Parms{};

	Parms.CooldownType = CooldownType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuickbarSlotCooldown.QuickbarSlotCooldown_C.Show Countdown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Show                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuickbarSlotCooldown_C::Show_Countdown(bool Show)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuickbarSlotCooldown_C", "Show Countdown");

	Params::QuickbarSlotCooldown_C_Show_Countdown Parms{};

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuickbarSlotCooldown.QuickbarSlotCooldown_C.Initialize
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EItemDisplayStyle                       QuickbarItemDisplayStyle                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<EFortItemCooldownType>           DesiredCooldownTypesSupported                          (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UQuickbarSlotCooldown_C::Initialize(EItemDisplayStyle QuickbarItemDisplayStyle, TArray<EFortItemCooldownType>& DesiredCooldownTypesSupported)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuickbarSlotCooldown_C", "Initialize");

	Params::QuickbarSlotCooldown_C_Initialize Parms{};

	Parms.QuickbarItemDisplayStyle = QuickbarItemDisplayStyle;
	Parms.DesiredCooldownTypesSupported = std::move(DesiredCooldownTypesSupported);

	UObject::ProcessEvent(Func, &Parms);

	DesiredCooldownTypesSupported = std::move(Parms.DesiredCooldownTypesSupported);
}

}

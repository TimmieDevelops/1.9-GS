#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: XpBonusToolTip

#include "Basic.hpp"

#include "XpBonusToolTip_classes.hpp"
#include "XpBonusToolTip_parameters.hpp"


namespace SDK
{

// Function XpBonusToolTip.XpBonusToolTip_C.ExecuteUbergraph_XpBonusToolTip
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UXpBonusToolTip_C::ExecuteUbergraph_XpBonusToolTip(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpBonusToolTip_C", "ExecuteUbergraph_XpBonusToolTip");

	Params::XpBonusToolTip_C_ExecuteUbergraph_XpBonusToolTip Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function XpBonusToolTip.XpBonusToolTip_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UXpBonusToolTip_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpBonusToolTip_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

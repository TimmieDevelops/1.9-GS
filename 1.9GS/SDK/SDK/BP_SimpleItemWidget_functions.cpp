#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SimpleItemWidget

#include "Basic.hpp"

#include "BP_SimpleItemWidget_classes.hpp"
#include "BP_SimpleItemWidget_parameters.hpp"


namespace SDK
{

// Function BP_SimpleItemWidget.BP_SimpleItemWidget_C.ExecuteUbergraph_BP_SimpleItemWidget
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SimpleItemWidget_C::ExecuteUbergraph_BP_SimpleItemWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SimpleItemWidget_C", "ExecuteUbergraph_BP_SimpleItemWidget");

	Params::BP_SimpleItemWidget_C_ExecuteUbergraph_BP_SimpleItemWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SimpleItemWidget.BP_SimpleItemWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_SimpleItemWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SimpleItemWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

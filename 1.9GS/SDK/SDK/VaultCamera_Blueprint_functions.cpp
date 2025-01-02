#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VaultCamera_Blueprint

#include "Basic.hpp"

#include "VaultCamera_Blueprint_classes.hpp"
#include "VaultCamera_Blueprint_parameters.hpp"


namespace SDK
{

// Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.ExecuteUbergraph_VaultCamera_Blueprint
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVaultCamera_Blueprint_C::ExecuteUbergraph_VaultCamera_Blueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VaultCamera_Blueprint_C", "ExecuteUbergraph_VaultCamera_Blueprint");

	Params::VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.OnDeactivated
// (Event, Public, BlueprintEvent)

void AVaultCamera_Blueprint_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VaultCamera_Blueprint_C", "OnDeactivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.OnActivated
// (Event, Public, BlueprintEvent)

void AVaultCamera_Blueprint_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VaultCamera_Blueprint_C", "OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVaultCamera_Blueprint_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VaultCamera_Blueprint_C", "ReceiveTick");

	Params::VaultCamera_Blueprint_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (Parm, HasGetValueTypeHash)

void AVaultCamera_Blueprint_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_4(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VaultCamera_Blueprint_C", "InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_4");

	Params::VaultCamera_Blueprint_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_4 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (Parm, HasGetValueTypeHash)

void AVaultCamera_Blueprint_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_5(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VaultCamera_Blueprint_C", "InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_5");

	Params::VaultCamera_Blueprint_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_5 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (Parm, HasGetValueTypeHash)

void AVaultCamera_Blueprint_C::InpActEvt_RightMouseButton_K2Node_InputKeyEvent_6(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VaultCamera_Blueprint_C", "InpActEvt_RightMouseButton_K2Node_InputKeyEvent_6");

	Params::VaultCamera_Blueprint_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_6 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (Parm, HasGetValueTypeHash)

void AVaultCamera_Blueprint_C::InpActEvt_RightMouseButton_K2Node_InputKeyEvent_7(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VaultCamera_Blueprint_C", "InpActEvt_RightMouseButton_K2Node_InputKeyEvent_7");

	Params::VaultCamera_Blueprint_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_7 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AVaultCamera_Blueprint_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VaultCamera_Blueprint_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

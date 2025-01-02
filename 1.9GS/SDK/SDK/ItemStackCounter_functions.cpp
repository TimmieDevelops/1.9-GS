#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemStackCounter

#include "Basic.hpp"

#include "ItemStackCounter_classes.hpp"
#include "ItemStackCounter_parameters.hpp"


namespace SDK
{

// Function ItemStackCounter.ItemStackCounter_C.ExecuteUbergraph_ItemStackCounter
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemStackCounter_C::ExecuteUbergraph_ItemStackCounter(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemStackCounter_C", "ExecuteUbergraph_ItemStackCounter");

	Params::ItemStackCounter_C_ExecuteUbergraph_ItemStackCounter Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemStackCounter.ItemStackCounter_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemStackCounter_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemStackCounter_C", "PreConstruct");

	Params::ItemStackCounter_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemStackCounter.ItemStackCounter_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortBrushSize                          Brush_Size_0                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Count_0                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemStackCounter_C::Update(EFortBrushSize Brush_Size_0, int32 Count_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemStackCounter_C", "Update");

	Params::ItemStackCounter_C_Update Parms{};

	Parms.Brush_Size_0 = Brush_Size_0;
	Parms.Count_0 = Count_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemStackCounter.ItemStackCounter_C.Set Stack Count
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Count_0                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemStackCounter_C::Set_Stack_Count(int32 Count_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemStackCounter_C", "Set Stack Count");

	Params::ItemStackCounter_C_Set_Stack_Count Parms{};

	Parms.Count_0 = Count_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemStackCounter.ItemStackCounter_C.Refresh Visibility
// (Public, BlueprintCallable, BlueprintEvent)

void UItemStackCounter_C::Refresh_Visibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemStackCounter_C", "Refresh Visibility");

	UObject::ProcessEvent(Func, nullptr);
}

}

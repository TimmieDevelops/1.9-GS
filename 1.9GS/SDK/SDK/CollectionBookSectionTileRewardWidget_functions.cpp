#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CollectionBookSectionTileRewardWidget

#include "Basic.hpp"

#include "CollectionBookSectionTileRewardWidget_classes.hpp"
#include "CollectionBookSectionTileRewardWidget_parameters.hpp"


namespace SDK
{

// Function CollectionBookSectionTileRewardWidget.CollectionBookSectionTileRewardWidget_C.ExecuteUbergraph_CollectionBookSectionTileRewardWidget
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookSectionTileRewardWidget_C::ExecuteUbergraph_CollectionBookSectionTileRewardWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CollectionBookSectionTileRewardWidget_C", "ExecuteUbergraph_CollectionBookSectionTileRewardWidget");

	Params::CollectionBookSectionTileRewardWidget_C_ExecuteUbergraph_CollectionBookSectionTileRewardWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CollectionBookSectionTileRewardWidget.CollectionBookSectionTileRewardWidget_C.OnRewardStatusChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// ECollectionBookRewardStatus             NewStatus                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCollectionBookSectionTileRewardWidget_C::OnRewardStatusChanged(ECollectionBookRewardStatus NewStatus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CollectionBookSectionTileRewardWidget_C", "OnRewardStatusChanged");

	Params::CollectionBookSectionTileRewardWidget_C_OnRewardStatusChanged Parms{};

	Parms.NewStatus = NewStatus;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CollectionBookSectionTileRewardWidget.CollectionBookSectionTileRewardWidget_C.SetSlotCompletionRatio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NumSlotted                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NumSlots                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookSectionTileRewardWidget_C::SetSlotCompletionRatio(int32 NumSlotted, int32 NumSlots)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CollectionBookSectionTileRewardWidget_C", "SetSlotCompletionRatio");

	Params::CollectionBookSectionTileRewardWidget_C_SetSlotCompletionRatio Parms{};

	Parms.NumSlotted = NumSlotted;
	Parms.NumSlots = NumSlots;

	UObject::ProcessEvent(Func, &Parms);
}

}

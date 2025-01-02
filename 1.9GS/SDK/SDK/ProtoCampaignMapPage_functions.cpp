#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ProtoCampaignMapPage

#include "Basic.hpp"

#include "ProtoCampaignMapPage_classes.hpp"
#include "ProtoCampaignMapPage_parameters.hpp"


namespace SDK
{

// Function ProtoCampaignMapPage.ProtoCampaignMapPage_C.ExecuteUbergraph_ProtoCampaignMapPage
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProtoCampaignMapPage_C::ExecuteUbergraph_ProtoCampaignMapPage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProtoCampaignMapPage_C", "ExecuteUbergraph_ProtoCampaignMapPage");

	Params::ProtoCampaignMapPage_C_ExecuteUbergraph_ProtoCampaignMapPage Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProtoCampaignMapPage.ProtoCampaignMapPage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UProtoCampaignMapPage_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProtoCampaignMapPage_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProtoCampaignMapPage.ProtoCampaignMapPage_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UProtoCampaignMapPage_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProtoCampaignMapPage_C", "PreConstruct");

	Params::ProtoCampaignMapPage_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProtoCampaignMapPage.ProtoCampaignMapPage_C.GetMainQuest
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*                   outCurentMainQuest                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProtoCampaignMapPage_C::GetMainQuest(class UFortQuestItem** outCurentMainQuest)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProtoCampaignMapPage_C", "GetMainQuest");

	Params::ProtoCampaignMapPage_C_GetMainQuest Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (outCurentMainQuest != nullptr)
		*outCurentMainQuest = Parms.outCurentMainQuest;
}


// Function ProtoCampaignMapPage.ProtoCampaignMapPage_C.CheckForMainQuest
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    TargetQuestFound                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   TargetQuestPageIndex                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProtoCampaignMapPage_C::CheckForMainQuest(bool* TargetQuestFound, int32* TargetQuestPageIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProtoCampaignMapPage_C", "CheckForMainQuest");

	Params::ProtoCampaignMapPage_C_CheckForMainQuest Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (TargetQuestFound != nullptr)
		*TargetQuestFound = Parms.TargetQuestFound;

	if (TargetQuestPageIndex != nullptr)
		*TargetQuestPageIndex = Parms.TargetQuestPageIndex;
}


// Function ProtoCampaignMapPage.ProtoCampaignMapPage_C.SetBackgroundImage
// (Public, BlueprintCallable, BlueprintEvent)

void UProtoCampaignMapPage_C::SetBackgroundImage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProtoCampaignMapPage_C", "SetBackgroundImage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProtoCampaignMapPage.ProtoCampaignMapPage_C.CheckForIncompleteQuest-Halloween Event
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    TargetQuestFound                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   TargetQuestPageIndex                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProtoCampaignMapPage_C::CheckForIncompleteQuest_Halloween_Event(bool* TargetQuestFound, int32* TargetQuestPageIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProtoCampaignMapPage_C", "CheckForIncompleteQuest-Halloween Event");

	Params::ProtoCampaignMapPage_C_CheckForIncompleteQuest_Halloween_Event Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (TargetQuestFound != nullptr)
		*TargetQuestFound = Parms.TargetQuestFound;

	if (TargetQuestPageIndex != nullptr)
		*TargetQuestPageIndex = Parms.TargetQuestPageIndex;
}

}

#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CampaignMapPage_Stonewood_08

#include "Basic.hpp"

#include "CampaignMapPage_Stonewood_08_classes.hpp"
#include "CampaignMapPage_Stonewood_08_parameters.hpp"


namespace SDK
{

// Function CampaignMapPage_Stonewood_08.CampaignMapPage_Stonewood_08_C.ExecuteUbergraph_CampaignMapPage_Stonewood_08
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCampaignMapPage_Stonewood_08_C::ExecuteUbergraph_CampaignMapPage_Stonewood_08(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CampaignMapPage_Stonewood_08_C", "ExecuteUbergraph_CampaignMapPage_Stonewood_08");

	Params::CampaignMapPage_Stonewood_08_C_ExecuteUbergraph_CampaignMapPage_Stonewood_08 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CampaignMapPage_Stonewood_08.CampaignMapPage_Stonewood_08_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCampaignMapPage_Stonewood_08_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CampaignMapPage_Stonewood_08_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaTeamInfo

#include "Basic.hpp"

#include "AthenaTeamInfo_classes.hpp"
#include "AthenaTeamInfo_parameters.hpp"


namespace SDK
{

// Function AthenaTeamInfo.AthenaTeamInfo_C.ExecuteUbergraph_AthenaTeamInfo
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaTeamInfo_C::ExecuteUbergraph_AthenaTeamInfo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamInfo_C", "ExecuteUbergraph_AthenaTeamInfo");

	Params::AthenaTeamInfo_C_ExecuteUbergraph_AthenaTeamInfo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaTeamInfo.AthenaTeamInfo_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamInfo_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamInfo_C", "PreConstruct");

	Params::AthenaTeamInfo_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaTeamInfo.AthenaTeamInfo_C.HandlePartyLeft
// (BlueprintCallable, BlueprintEvent)

void UAthenaTeamInfo_C::HandlePartyLeft()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamInfo_C", "HandlePartyLeft");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaTeamInfo.AthenaTeamInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaTeamInfo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamInfo_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaTeamInfo.AthenaTeamInfo_C.AppendTeamMember
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerStateAthena*           PlayerState                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   PlayerIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaTeamInfo_C::AppendTeamMember(class AFortPlayerStateAthena* PlayerState, int32 PlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamInfo_C", "AppendTeamMember");

	Params::AthenaTeamInfo_C_AppendTeamMember Parms{};

	Parms.PlayerState = PlayerState;
	Parms.PlayerIndex = PlayerIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaTeamInfo.AthenaTeamInfo_C.ClearContents
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaTeamInfo_C::ClearContents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamInfo_C", "ClearContents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleTeamHitInfoChanged
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<float>                           HealthFractions                                        (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                           ShieldFractions                                        (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAthenaTeamInfo_C::HandleTeamHitInfoChanged(TArray<float>& HealthFractions, TArray<float>& ShieldFractions)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamInfo_C", "HandleTeamHitInfoChanged");

	Params::AthenaTeamInfo_C_HandleTeamHitInfoChanged Parms{};

	Parms.HealthFractions = std::move(HealthFractions);
	Parms.ShieldFractions = std::move(ShieldFractions);

	UObject::ProcessEvent(Func, &Parms);

	HealthFractions = std::move(Parms.HealthFractions);
	ShieldFractions = std::move(Parms.ShieldFractions);
}


// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleTeamMemberAdded
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaTeamInfo_C::HandleTeamMemberAdded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamInfo_C", "HandleTeamMemberAdded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleTeamDBNOChanged
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<bool>                            TeamDBNO                                               (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAthenaTeamInfo_C::HandleTeamDBNOChanged(TArray<bool>& TeamDBNO)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamInfo_C", "HandleTeamDBNOChanged");

	Params::AthenaTeamInfo_C_HandleTeamDBNOChanged Parms{};

	Parms.TeamDBNO = std::move(TeamDBNO);

	UObject::ProcessEvent(Func, &Parms);

	TeamDBNO = std::move(Parms.TeamDBNO);
}


// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleTeamDeadChanged
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<bool>                            TeamDead                                               (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAthenaTeamInfo_C::HandleTeamDeadChanged(TArray<bool>& TeamDead)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamInfo_C", "HandleTeamDeadChanged");

	Params::AthenaTeamInfo_C_HandleTeamDeadChanged Parms{};

	Parms.TeamDead = std::move(TeamDead);

	UObject::ProcessEvent(Func, &Parms);

	TeamDead = std::move(Parms.TeamDead);
}


// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleTeamMemberPlayerNamesChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaTeamInfo_C::HandleTeamMemberPlayerNamesChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamInfo_C", "HandleTeamMemberPlayerNamesChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleTeamRevivingChanged
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<bool>                            TeamReviving                                           (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAthenaTeamInfo_C::HandleTeamRevivingChanged(TArray<bool>& TeamReviving)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamInfo_C", "HandleTeamRevivingChanged");

	Params::AthenaTeamInfo_C_HandleTeamRevivingChanged Parms{};

	Parms.TeamReviving = std::move(TeamReviving);

	UObject::ProcessEvent(Func, &Parms);

	TeamReviving = std::move(Parms.TeamReviving);
}


// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleTeamMemberRemoved
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaTeamInfo_C::HandleTeamMemberRemoved()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamInfo_C", "HandleTeamMemberRemoved");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleTeamTalkingChanged
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<bool>                            TeamTalking                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAthenaTeamInfo_C::HandleTeamTalkingChanged(TArray<bool>& TeamTalking)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamInfo_C", "HandleTeamTalkingChanged");

	Params::AthenaTeamInfo_C_HandleTeamTalkingChanged Parms{};

	Parms.TeamTalking = std::move(TeamTalking);

	UObject::ProcessEvent(Func, &Parms);

	TeamTalking = std::move(Parms.TeamTalking);
}


// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleTeamMutedChanged
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<bool>                            TeamMuted                                              (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAthenaTeamInfo_C::HandleTeamMutedChanged(TArray<bool>& TeamMuted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamInfo_C", "HandleTeamMutedChanged");

	Params::AthenaTeamInfo_C_HandleTeamMutedChanged Parms{};

	Parms.TeamMuted = std::move(TeamMuted);

	UObject::ProcessEvent(Func, &Parms);

	TeamMuted = std::move(Parms.TeamMuted);
}

}

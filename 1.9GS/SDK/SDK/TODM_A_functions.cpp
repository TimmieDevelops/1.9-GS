#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TODM_A

#include "Basic.hpp"

#include "TODM_A_classes.hpp"
#include "TODM_A_parameters.hpp"


namespace SDK
{

// Function TODM_A.TODM_A_C.ExecuteUbergraph_TODM_A
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATODM_A_C::ExecuteUbergraph_TODM_A(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TODM_A_C", "ExecuteUbergraph_TODM_A");

	Params::TODM_A_C_ExecuteUbergraph_TODM_A Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TODM_A.TODM_A_C.EnableHDRRendering
// (BlueprintCallable, BlueprintEvent)

void ATODM_A_C::EnableHDRRendering()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TODM_A_C", "EnableHDRRendering");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TODM_A.TODM_A_C.DisableLightAndFog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATODM_A_C::DisableLightAndFog(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TODM_A_C", "DisableLightAndFog");

	Params::TODM_A_C_DisableLightAndFog Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TODM_A.TODM_A_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATODM_A_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TODM_A_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TODM_A.TODM_A_C.LightningStrike
// (BlueprintCallable, BlueprintEvent)

void ATODM_A_C::LightningStrike()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TODM_A_C", "LightningStrike");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TODM_A.TODM_A_C.OnStormEnd
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ATODM_A_C::OnStormEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TODM_A_C", "OnStormEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TODM_A.TODM_A_C.OnStormStart
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ATODM_A_C::OnStormStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TODM_A_C", "OnStormStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TODM_A.TODM_A_C.StartStorm
// (BlueprintCallable, BlueprintEvent)

void ATODM_A_C::StartStorm()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TODM_A_C", "StartStorm");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TODM_A.TODM_A_C.New Storm Timeline__FireOffRain__EventFunc
// (BlueprintEvent)

void ATODM_A_C::New_Storm_Timeline__FireOffRain__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TODM_A_C", "New Storm Timeline__FireOffRain__EventFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TODM_A.TODM_A_C.New Storm Timeline__UpdateFunc
// (BlueprintEvent)

void ATODM_A_C::New_Storm_Timeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TODM_A_C", "New Storm Timeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TODM_A.TODM_A_C.New Storm Timeline__FinishedFunc
// (BlueprintEvent)

void ATODM_A_C::New_Storm_Timeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TODM_A_C", "New Storm Timeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TODM_A.TODM_A_C.FlashLightning__UpdateFunc
// (BlueprintEvent)

void ATODM_A_C::FlashLightning__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TODM_A_C", "FlashLightning__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TODM_A.TODM_A_C.FlashLightning__FinishedFunc
// (BlueprintEvent)

void ATODM_A_C::FlashLightning__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TODM_A_C", "FlashLightning__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TODM_A.TODM_A_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ATODM_A_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TODM_A_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NearestPlayerContext

#include "Basic.hpp"

#include "NearestPlayerContext_classes.hpp"
#include "NearestPlayerContext_parameters.hpp"


namespace SDK
{

// Function NearestPlayerContext.NearestPlayerContext_C.ProvideSingleLocation
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          QuerierObject                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           QuerierActor                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          ResultingLocation                                      (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNearestPlayerContext_C::ProvideSingleLocation(class UObject* QuerierObject, class AActor* QuerierActor, struct FVector* ResultingLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NearestPlayerContext_C", "ProvideSingleLocation");

	Params::NearestPlayerContext_C_ProvideSingleLocation Parms{};

	Parms.QuerierObject = QuerierObject;
	Parms.QuerierActor = QuerierActor;

	UObject::ProcessEvent(Func, &Parms);

	if (ResultingLocation != nullptr)
		*ResultingLocation = std::move(Parms.ResultingLocation);
}

}

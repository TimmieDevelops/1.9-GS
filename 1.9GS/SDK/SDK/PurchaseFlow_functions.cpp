#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PurchaseFlow

#include "Basic.hpp"

#include "PurchaseFlow_classes.hpp"
#include "PurchaseFlow_parameters.hpp"


namespace SDK
{

// Function PurchaseFlow.PurchaseFlowJSBridge.RECEIPT
// (Final, Native, Public)
// Parameters:
// struct FPurchaseFlowReceiptParam        RECEIPT_0                                              (Parm, NativeAccessSpecifierPublic)

void UPurchaseFlowJSBridge::RECEIPT(const struct FPurchaseFlowReceiptParam& RECEIPT_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PurchaseFlowJSBridge", "RECEIPT");

	Params::PurchaseFlowJSBridge_RECEIPT Parms{};

	Parms.RECEIPT_0 = std::move(RECEIPT_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function PurchaseFlow.PurchaseFlowJSBridge.RequestClose
// (Final, Native, Public)
// Parameters:
// class FString                           CloseInfo                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPurchaseFlowJSBridge::RequestClose(const class FString& CloseInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PurchaseFlowJSBridge", "RequestClose");

	Params::PurchaseFlowJSBridge_RequestClose Parms{};

	Parms.CloseInfo = std::move(CloseInfo);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

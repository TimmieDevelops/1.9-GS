#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HelpWidget

#include "Basic.hpp"

#include "HelpWidget_classes.hpp"
#include "HelpWidget_parameters.hpp"


namespace SDK
{

// Function HelpWidget.HelpWidget_C.ExecuteUbergraph_HelpWidget
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHelpWidget_C::ExecuteUbergraph_HelpWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HelpWidget_C", "ExecuteUbergraph_HelpWidget");

	Params::HelpWidget_C_ExecuteUbergraph_HelpWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HelpWidget.HelpWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHelpWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HelpWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HelpWidget.HelpWidget_C.BndEvt__ButtonClose_K2Node_ComponentBoundEvent_28_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHelpWidget_C::BndEvt__ButtonClose_K2Node_ComponentBoundEvent_28_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HelpWidget_C", "BndEvt__ButtonClose_K2Node_ComponentBoundEvent_28_CommonButtonClicked__DelegateSignature");

	Params::HelpWidget_C_BndEvt__ButtonClose_K2Node_ComponentBoundEvent_28_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HelpWidget.HelpWidget_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             inTitle                                                (Parm)
// class FText                             inDescription                                          (Parm)
// class FText                             inStep1_Text                                           (Parm)
// class FText                             inStep2_Text                                           (Parm)
// class FText                             inStep3_Text                                           (Parm)
// class UTexture2D*                       inStep1_Picture                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                       inStep2_Picture                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                       inStep3_Picture                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   inNumOfSteps                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHelpWidget_C::Init(const class FText& inTitle, const class FText& inDescription, const class FText& inStep1_Text, const class FText& inStep2_Text, const class FText& inStep3_Text, class UTexture2D* inStep1_Picture, class UTexture2D* inStep2_Picture, class UTexture2D* inStep3_Picture, int32 inNumOfSteps)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HelpWidget_C", "Init");

	Params::HelpWidget_C_Init Parms{};

	Parms.inTitle = std::move(inTitle);
	Parms.inDescription = std::move(inDescription);
	Parms.inStep1_Text = std::move(inStep1_Text);
	Parms.inStep2_Text = std::move(inStep2_Text);
	Parms.inStep3_Text = std::move(inStep3_Text);
	Parms.inStep1_Picture = inStep1_Picture;
	Parms.inStep2_Picture = inStep2_Picture;
	Parms.inStep3_Picture = inStep3_Picture;
	Parms.inNumOfSteps = inNumOfSteps;

	UObject::ProcessEvent(Func, &Parms);
}

}

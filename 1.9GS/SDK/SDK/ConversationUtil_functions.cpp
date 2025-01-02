#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ConversationUtil

#include "Basic.hpp"

#include "ConversationUtil_classes.hpp"
#include "ConversationUtil_parameters.hpp"


namespace SDK
{

// Function ConversationUtil.ConversationUtil_C.StartConversation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortConversation*                Conversation_0                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UConversationUtil_C::StartConversation(class UFortConversation* Conversation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConversationUtil_C", "StartConversation");

	Params::ConversationUtil_C_StartConversation Parms{};

	Parms.Conversation_0 = Conversation_0;

	UObject::ProcessEvent(Func, &Parms);
}

}

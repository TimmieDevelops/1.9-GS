#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ConversationUtil

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ConversationUtil.ConversationUtil_C.StartConversation
// 0x0070 (0x0070 - 0x0000)
struct ConversationUtil_C_StartConversation final
{
public:
	class UFortConversation*                      Conversation_0;                                    // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientAnnouncementData_Conversation K2Node_MakeStruct_FortClientAnnouncementData_Conversation; // 0x0008(0x0010)(NoDestructor)
	TArray<class AFortPlayerController*>          CallFunc_GetLocalFortPlayerControllers_ReturnValue; // 0x0018(0x0010)(ZeroConstructor, ReferenceParm)
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0030(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAnnounce_Gen_Quest_Conversation_C*     CallFunc_FinishSpawningActor_ReturnValue;          // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ConversationUtil_C_StartConversation) == 0x000010, "Wrong alignment on ConversationUtil_C_StartConversation");
static_assert(sizeof(ConversationUtil_C_StartConversation) == 0x000070, "Wrong size on ConversationUtil_C_StartConversation");
static_assert(offsetof(ConversationUtil_C_StartConversation, Conversation_0) == 0x000000, "Member 'ConversationUtil_C_StartConversation::Conversation_0' has a wrong offset!");
static_assert(offsetof(ConversationUtil_C_StartConversation, K2Node_MakeStruct_FortClientAnnouncementData_Conversation) == 0x000008, "Member 'ConversationUtil_C_StartConversation::K2Node_MakeStruct_FortClientAnnouncementData_Conversation' has a wrong offset!");
static_assert(offsetof(ConversationUtil_C_StartConversation, CallFunc_GetLocalFortPlayerControllers_ReturnValue) == 0x000018, "Member 'ConversationUtil_C_StartConversation::CallFunc_GetLocalFortPlayerControllers_ReturnValue' has a wrong offset!");
static_assert(offsetof(ConversationUtil_C_StartConversation, CallFunc_MakeTransform_ReturnValue) == 0x000030, "Member 'ConversationUtil_C_StartConversation::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(ConversationUtil_C_StartConversation, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000060, "Member 'ConversationUtil_C_StartConversation::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(ConversationUtil_C_StartConversation, CallFunc_FinishSpawningActor_ReturnValue) == 0x000068, "Member 'ConversationUtil_C_StartConversation::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

}

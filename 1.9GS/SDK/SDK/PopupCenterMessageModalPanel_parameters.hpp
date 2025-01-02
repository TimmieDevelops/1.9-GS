#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PopupCenterMessageModalPanel

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function PopupCenterMessageModalPanel.PopupCenterMessageModalPanel_C.ExecuteUbergraph_PopupCenterMessageModalPanel
// 0x0030 (0x0030 - 0x0000)
struct PopupCenterMessageModalPanel_C_ExecuteUbergraph_PopupCenterMessageModalPanel final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_UpdateMatchTimerText_StopTimer;           // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0020(0x0008)(NoDestructor)
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue;       // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PopupCenterMessageModalPanel_C_ExecuteUbergraph_PopupCenterMessageModalPanel) == 0x000008, "Wrong alignment on PopupCenterMessageModalPanel_C_ExecuteUbergraph_PopupCenterMessageModalPanel");
static_assert(sizeof(PopupCenterMessageModalPanel_C_ExecuteUbergraph_PopupCenterMessageModalPanel) == 0x000030, "Wrong size on PopupCenterMessageModalPanel_C_ExecuteUbergraph_PopupCenterMessageModalPanel");
static_assert(offsetof(PopupCenterMessageModalPanel_C_ExecuteUbergraph_PopupCenterMessageModalPanel, EntryPoint) == 0x000000, "Member 'PopupCenterMessageModalPanel_C_ExecuteUbergraph_PopupCenterMessageModalPanel::EntryPoint' has a wrong offset!");
static_assert(offsetof(PopupCenterMessageModalPanel_C_ExecuteUbergraph_PopupCenterMessageModalPanel, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'PopupCenterMessageModalPanel_C_ExecuteUbergraph_PopupCenterMessageModalPanel::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(PopupCenterMessageModalPanel_C_ExecuteUbergraph_PopupCenterMessageModalPanel, CallFunc_UpdateMatchTimerText_StopTimer) == 0x000018, "Member 'PopupCenterMessageModalPanel_C_ExecuteUbergraph_PopupCenterMessageModalPanel::CallFunc_UpdateMatchTimerText_StopTimer' has a wrong offset!");
static_assert(offsetof(PopupCenterMessageModalPanel_C_ExecuteUbergraph_PopupCenterMessageModalPanel, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000020, "Member 'PopupCenterMessageModalPanel_C_ExecuteUbergraph_PopupCenterMessageModalPanel::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(PopupCenterMessageModalPanel_C_ExecuteUbergraph_PopupCenterMessageModalPanel, CallFunc_GetUINavigationManager_ReturnValue) == 0x000028, "Member 'PopupCenterMessageModalPanel_C_ExecuteUbergraph_PopupCenterMessageModalPanel::CallFunc_GetUINavigationManager_ReturnValue' has a wrong offset!");

// Function PopupCenterMessageModalPanel.PopupCenterMessageModalPanel_C.UpdateState
// 0x0028 (0x0028 - 0x0000)
struct PopupCenterMessageModalPanel_C_UpdateState final
{
public:
	ECenterPopupMessageStateEnum                  NewState;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CurrentMessage;                                    // 0x0008(0x0018)(Edit)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_UpdateMatchTimerText_StopTimer;           // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PopupCenterMessageModalPanel_C_UpdateState) == 0x000008, "Wrong alignment on PopupCenterMessageModalPanel_C_UpdateState");
static_assert(sizeof(PopupCenterMessageModalPanel_C_UpdateState) == 0x000028, "Wrong size on PopupCenterMessageModalPanel_C_UpdateState");
static_assert(offsetof(PopupCenterMessageModalPanel_C_UpdateState, NewState) == 0x000000, "Member 'PopupCenterMessageModalPanel_C_UpdateState::NewState' has a wrong offset!");
static_assert(offsetof(PopupCenterMessageModalPanel_C_UpdateState, CurrentMessage) == 0x000008, "Member 'PopupCenterMessageModalPanel_C_UpdateState::CurrentMessage' has a wrong offset!");
static_assert(offsetof(PopupCenterMessageModalPanel_C_UpdateState, K2Node_SwitchEnum_CmpSuccess) == 0x000020, "Member 'PopupCenterMessageModalPanel_C_UpdateState::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(PopupCenterMessageModalPanel_C_UpdateState, CallFunc_UpdateMatchTimerText_StopTimer) == 0x000021, "Member 'PopupCenterMessageModalPanel_C_UpdateState::CallFunc_UpdateMatchTimerText_StopTimer' has a wrong offset!");
static_assert(offsetof(PopupCenterMessageModalPanel_C_UpdateState, CallFunc_Not_PreBool_ReturnValue) == 0x000022, "Member 'PopupCenterMessageModalPanel_C_UpdateState::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function PopupCenterMessageModalPanel.PopupCenterMessageModalPanel_C.UpdateMatchTimerText
// 0x0090 (0x0090 - 0x0000)
struct PopupCenterMessageModalPanel_C_UpdateMatchTimerText final
{
public:
	bool                                          StopTimer;                                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CurrentCount;                                      // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0010(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0050(0x0010)(ZeroConstructor, ReferenceParm)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0068(0x0018)()
	class AFortGameStatePvP*                      K2Node_DynamicCast_AsFort_Game_State_Pv_P;         // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89[0x3];                                       // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetStartMatchDelayTimer_ReturnValue;      // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PopupCenterMessageModalPanel_C_UpdateMatchTimerText) == 0x000008, "Wrong alignment on PopupCenterMessageModalPanel_C_UpdateMatchTimerText");
static_assert(sizeof(PopupCenterMessageModalPanel_C_UpdateMatchTimerText) == 0x000090, "Wrong size on PopupCenterMessageModalPanel_C_UpdateMatchTimerText");
static_assert(offsetof(PopupCenterMessageModalPanel_C_UpdateMatchTimerText, StopTimer) == 0x000000, "Member 'PopupCenterMessageModalPanel_C_UpdateMatchTimerText::StopTimer' has a wrong offset!");
static_assert(offsetof(PopupCenterMessageModalPanel_C_UpdateMatchTimerText, CurrentCount) == 0x000004, "Member 'PopupCenterMessageModalPanel_C_UpdateMatchTimerText::CurrentCount' has a wrong offset!");
static_assert(offsetof(PopupCenterMessageModalPanel_C_UpdateMatchTimerText, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000008, "Member 'PopupCenterMessageModalPanel_C_UpdateMatchTimerText::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PopupCenterMessageModalPanel_C_UpdateMatchTimerText, K2Node_MakeStruct_FormatArgumentData) == 0x000010, "Member 'PopupCenterMessageModalPanel_C_UpdateMatchTimerText::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(PopupCenterMessageModalPanel_C_UpdateMatchTimerText, K2Node_MakeArray_Array) == 0x000050, "Member 'PopupCenterMessageModalPanel_C_UpdateMatchTimerText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(PopupCenterMessageModalPanel_C_UpdateMatchTimerText, CallFunc_GetGameState_ReturnValue) == 0x000060, "Member 'PopupCenterMessageModalPanel_C_UpdateMatchTimerText::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(PopupCenterMessageModalPanel_C_UpdateMatchTimerText, CallFunc_Format_ReturnValue) == 0x000068, "Member 'PopupCenterMessageModalPanel_C_UpdateMatchTimerText::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(PopupCenterMessageModalPanel_C_UpdateMatchTimerText, K2Node_DynamicCast_AsFort_Game_State_Pv_P) == 0x000080, "Member 'PopupCenterMessageModalPanel_C_UpdateMatchTimerText::K2Node_DynamicCast_AsFort_Game_State_Pv_P' has a wrong offset!");
static_assert(offsetof(PopupCenterMessageModalPanel_C_UpdateMatchTimerText, K2Node_DynamicCast_bSuccess) == 0x000088, "Member 'PopupCenterMessageModalPanel_C_UpdateMatchTimerText::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PopupCenterMessageModalPanel_C_UpdateMatchTimerText, CallFunc_GetStartMatchDelayTimer_ReturnValue) == 0x00008C, "Member 'PopupCenterMessageModalPanel_C_UpdateMatchTimerText::CallFunc_GetStartMatchDelayTimer_ReturnValue' has a wrong offset!");

// Function PopupCenterMessageModalPanel.PopupCenterMessageModalPanel_C.LeaveZone
// 0x0010 (0x0010 - 0x0000)
struct PopupCenterMessageModalPanel_C_LeaveZone final
{
public:
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortPartyContext*                      CallFunc_GetContext_ReturnValue2;                  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PopupCenterMessageModalPanel_C_LeaveZone) == 0x000008, "Wrong alignment on PopupCenterMessageModalPanel_C_LeaveZone");
static_assert(sizeof(PopupCenterMessageModalPanel_C_LeaveZone) == 0x000010, "Wrong size on PopupCenterMessageModalPanel_C_LeaveZone");
static_assert(offsetof(PopupCenterMessageModalPanel_C_LeaveZone, CallFunc_GetContext_ReturnValue) == 0x000000, "Member 'PopupCenterMessageModalPanel_C_LeaveZone::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(PopupCenterMessageModalPanel_C_LeaveZone, CallFunc_GetContext_ReturnValue2) == 0x000008, "Member 'PopupCenterMessageModalPanel_C_LeaveZone::CallFunc_GetContext_ReturnValue2' has a wrong offset!");

}

#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FriendCodePC

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function FriendCodePC.FriendCodePC_C.ExecuteUbergraph_FriendCodePC
// 0x0258 (0x0258 - 0x0000)
struct FriendCodePC_C_ExecuteUbergraph_FriendCodePC final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetFriendCodeUrl_Result;                  // 0x0008(0x0018)()
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue;                   // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue2;                  // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetFriendCodeUrl_Result2;                 // 0x0040(0x0018)()
	class FText                                   CallFunc_GetFriendCodeDescription_ReturnValue;     // 0x0058(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0070(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_GetFriendCodeDisplayName_ReturnValue;     // 0x00B0(0x0018)()
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x00C8(0x0034)(IsPlainOldData, NoDestructor)
	uint8                                         Pad_FC[0x4];                                       // 0x00FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerEvent                          K2Node_Event_MouseEvent2;                          // 0x0100(0x0078)(ConstParm)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData2;             // 0x0178(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x01B8(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x01C8(0x0018)()
	struct FPointerEvent                          K2Node_Event_MouseEvent;                           // 0x01E0(0x0078)(ConstParm)
};
static_assert(alignof(FriendCodePC_C_ExecuteUbergraph_FriendCodePC) == 0x000008, "Wrong alignment on FriendCodePC_C_ExecuteUbergraph_FriendCodePC");
static_assert(sizeof(FriendCodePC_C_ExecuteUbergraph_FriendCodePC) == 0x000258, "Wrong size on FriendCodePC_C_ExecuteUbergraph_FriendCodePC");
static_assert(offsetof(FriendCodePC_C_ExecuteUbergraph_FriendCodePC, EntryPoint) == 0x000000, "Member 'FriendCodePC_C_ExecuteUbergraph_FriendCodePC::EntryPoint' has a wrong offset!");
static_assert(offsetof(FriendCodePC_C_ExecuteUbergraph_FriendCodePC, CallFunc_GetFriendCodeUrl_Result) == 0x000008, "Member 'FriendCodePC_C_ExecuteUbergraph_FriendCodePC::CallFunc_GetFriendCodeUrl_Result' has a wrong offset!");
static_assert(offsetof(FriendCodePC_C_ExecuteUbergraph_FriendCodePC, CallFunc_GetContext_ReturnValue) == 0x000020, "Member 'FriendCodePC_C_ExecuteUbergraph_FriendCodePC::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(FriendCodePC_C_ExecuteUbergraph_FriendCodePC, CallFunc_Conv_TextToString_ReturnValue) == 0x000028, "Member 'FriendCodePC_C_ExecuteUbergraph_FriendCodePC::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(FriendCodePC_C_ExecuteUbergraph_FriendCodePC, CallFunc_GetContext_ReturnValue2) == 0x000038, "Member 'FriendCodePC_C_ExecuteUbergraph_FriendCodePC::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(FriendCodePC_C_ExecuteUbergraph_FriendCodePC, CallFunc_GetFriendCodeUrl_Result2) == 0x000040, "Member 'FriendCodePC_C_ExecuteUbergraph_FriendCodePC::CallFunc_GetFriendCodeUrl_Result2' has a wrong offset!");
static_assert(offsetof(FriendCodePC_C_ExecuteUbergraph_FriendCodePC, CallFunc_GetFriendCodeDescription_ReturnValue) == 0x000058, "Member 'FriendCodePC_C_ExecuteUbergraph_FriendCodePC::CallFunc_GetFriendCodeDescription_ReturnValue' has a wrong offset!");
static_assert(offsetof(FriendCodePC_C_ExecuteUbergraph_FriendCodePC, K2Node_MakeStruct_FormatArgumentData) == 0x000070, "Member 'FriendCodePC_C_ExecuteUbergraph_FriendCodePC::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(FriendCodePC_C_ExecuteUbergraph_FriendCodePC, CallFunc_GetFriendCodeDisplayName_ReturnValue) == 0x0000B0, "Member 'FriendCodePC_C_ExecuteUbergraph_FriendCodePC::CallFunc_GetFriendCodeDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(FriendCodePC_C_ExecuteUbergraph_FriendCodePC, K2Node_Event_MyGeometry) == 0x0000C8, "Member 'FriendCodePC_C_ExecuteUbergraph_FriendCodePC::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(FriendCodePC_C_ExecuteUbergraph_FriendCodePC, K2Node_Event_MouseEvent2) == 0x000100, "Member 'FriendCodePC_C_ExecuteUbergraph_FriendCodePC::K2Node_Event_MouseEvent2' has a wrong offset!");
static_assert(offsetof(FriendCodePC_C_ExecuteUbergraph_FriendCodePC, K2Node_MakeStruct_FormatArgumentData2) == 0x000178, "Member 'FriendCodePC_C_ExecuteUbergraph_FriendCodePC::K2Node_MakeStruct_FormatArgumentData2' has a wrong offset!");
static_assert(offsetof(FriendCodePC_C_ExecuteUbergraph_FriendCodePC, K2Node_MakeArray_Array) == 0x0001B8, "Member 'FriendCodePC_C_ExecuteUbergraph_FriendCodePC::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(FriendCodePC_C_ExecuteUbergraph_FriendCodePC, CallFunc_Format_ReturnValue) == 0x0001C8, "Member 'FriendCodePC_C_ExecuteUbergraph_FriendCodePC::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(FriendCodePC_C_ExecuteUbergraph_FriendCodePC, K2Node_Event_MouseEvent) == 0x0001E0, "Member 'FriendCodePC_C_ExecuteUbergraph_FriendCodePC::K2Node_Event_MouseEvent' has a wrong offset!");

// Function FriendCodePC.FriendCodePC_C.OnMouseLeave
// 0x0078 (0x0078 - 0x0000)
struct FriendCodePC_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;                                        // 0x0000(0x0078)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(FriendCodePC_C_OnMouseLeave) == 0x000008, "Wrong alignment on FriendCodePC_C_OnMouseLeave");
static_assert(sizeof(FriendCodePC_C_OnMouseLeave) == 0x000078, "Wrong size on FriendCodePC_C_OnMouseLeave");
static_assert(offsetof(FriendCodePC_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'FriendCodePC_C_OnMouseLeave::MouseEvent' has a wrong offset!");

// Function FriendCodePC.FriendCodePC_C.OnMouseEnter
// 0x00B0 (0x00B0 - 0x0000)
struct FriendCodePC_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0034)(Parm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0078)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(FriendCodePC_C_OnMouseEnter) == 0x000008, "Wrong alignment on FriendCodePC_C_OnMouseEnter");
static_assert(sizeof(FriendCodePC_C_OnMouseEnter) == 0x0000B0, "Wrong size on FriendCodePC_C_OnMouseEnter");
static_assert(offsetof(FriendCodePC_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'FriendCodePC_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(FriendCodePC_C_OnMouseEnter, MouseEvent) == 0x000038, "Member 'FriendCodePC_C_OnMouseEnter::MouseEvent' has a wrong offset!");

// Function FriendCodePC.FriendCodePC_C.GetFriendCodeUrl
// 0x0098 (0x0098 - 0x0000)
struct FriendCodePC_C_GetFriendCodeUrl final
{
public:
	class FText                                   Result;                                            // 0x0000(0x0018)(Parm, OutParm)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0030(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0070(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0080(0x0018)()
};
static_assert(alignof(FriendCodePC_C_GetFriendCodeUrl) == 0x000008, "Wrong alignment on FriendCodePC_C_GetFriendCodeUrl");
static_assert(sizeof(FriendCodePC_C_GetFriendCodeUrl) == 0x000098, "Wrong size on FriendCodePC_C_GetFriendCodeUrl");
static_assert(offsetof(FriendCodePC_C_GetFriendCodeUrl, Result) == 0x000000, "Member 'FriendCodePC_C_GetFriendCodeUrl::Result' has a wrong offset!");
static_assert(offsetof(FriendCodePC_C_GetFriendCodeUrl, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'FriendCodePC_C_GetFriendCodeUrl::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(FriendCodePC_C_GetFriendCodeUrl, K2Node_MakeStruct_FormatArgumentData) == 0x000030, "Member 'FriendCodePC_C_GetFriendCodeUrl::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(FriendCodePC_C_GetFriendCodeUrl, K2Node_MakeArray_Array) == 0x000070, "Member 'FriendCodePC_C_GetFriendCodeUrl::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(FriendCodePC_C_GetFriendCodeUrl, CallFunc_Format_ReturnValue) == 0x000080, "Member 'FriendCodePC_C_GetFriendCodeUrl::CallFunc_Format_ReturnValue' has a wrong offset!");

}

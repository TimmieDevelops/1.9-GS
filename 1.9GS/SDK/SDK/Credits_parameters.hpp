#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Credits

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Credits.Credits_C.ExecuteUbergraph_Credits
// 0x0028 (0x0028 - 0x0000)
struct alignas(0x08) Credits_C_ExecuteUbergraph_Credits final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool* bPassThrough)>           K2Node_CreateDelegate_OutputDelegate2;             // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(Credits_C_ExecuteUbergraph_Credits) == 0x000008, "Wrong alignment on Credits_C_ExecuteUbergraph_Credits");
static_assert(sizeof(Credits_C_ExecuteUbergraph_Credits) == 0x000028, "Wrong size on Credits_C_ExecuteUbergraph_Credits");
static_assert(offsetof(Credits_C_ExecuteUbergraph_Credits, EntryPoint) == 0x000000, "Member 'Credits_C_ExecuteUbergraph_Credits::EntryPoint' has a wrong offset!");
static_assert(offsetof(Credits_C_ExecuteUbergraph_Credits, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'Credits_C_ExecuteUbergraph_Credits::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Credits_C_ExecuteUbergraph_Credits, K2Node_CreateDelegate_OutputDelegate2) == 0x000018, "Member 'Credits_C_ExecuteUbergraph_Credits::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");

// Function Credits.Credits_C.HandleBack
// 0x0010 (0x0010 - 0x0000)
struct Credits_C_HandleBack final
{
public:
	bool                                          PassThrough;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortUIManagerWidget_NUI*               CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Credits_C_HandleBack) == 0x000008, "Wrong alignment on Credits_C_HandleBack");
static_assert(sizeof(Credits_C_HandleBack) == 0x000010, "Wrong size on Credits_C_HandleBack");
static_assert(offsetof(Credits_C_HandleBack, PassThrough) == 0x000000, "Member 'Credits_C_HandleBack::PassThrough' has a wrong offset!");
static_assert(offsetof(Credits_C_HandleBack, CallFunc_GetUIManagerWidget_ReturnValue) == 0x000008, "Member 'Credits_C_HandleBack::CallFunc_GetUIManagerWidget_ReturnValue' has a wrong offset!");

// Function Credits.Credits_C.ToggleScrollTimer
// 0x0020 (0x0020 - 0x0000)
struct Credits_C_ToggleScrollTimer final
{
public:
	bool                                          EnableTimer;                                       // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0018(0x0008)(NoDestructor)
};
static_assert(alignof(Credits_C_ToggleScrollTimer) == 0x000008, "Wrong alignment on Credits_C_ToggleScrollTimer");
static_assert(sizeof(Credits_C_ToggleScrollTimer) == 0x000020, "Wrong size on Credits_C_ToggleScrollTimer");
static_assert(offsetof(Credits_C_ToggleScrollTimer, EnableTimer) == 0x000000, "Member 'Credits_C_ToggleScrollTimer::EnableTimer' has a wrong offset!");
static_assert(offsetof(Credits_C_ToggleScrollTimer, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'Credits_C_ToggleScrollTimer::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Credits_C_ToggleScrollTimer, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'Credits_C_ToggleScrollTimer::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");

// Function Credits.Credits_C.ScrollCredits
// 0x0010 (0x0010 - 0x0000)
struct Credits_C_ScrollCredits final
{
public:
	float                                         CurrentPosition;                                   // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetScrollOffset_ReturnValue;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Credits_C_ScrollCredits) == 0x000004, "Wrong alignment on Credits_C_ScrollCredits");
static_assert(sizeof(Credits_C_ScrollCredits) == 0x000010, "Wrong size on Credits_C_ScrollCredits");
static_assert(offsetof(Credits_C_ScrollCredits, CurrentPosition) == 0x000000, "Member 'Credits_C_ScrollCredits::CurrentPosition' has a wrong offset!");
static_assert(offsetof(Credits_C_ScrollCredits, CallFunc_Add_FloatFloat_ReturnValue) == 0x000004, "Member 'Credits_C_ScrollCredits::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Credits_C_ScrollCredits, CallFunc_GetScrollOffset_ReturnValue) == 0x000008, "Member 'Credits_C_ScrollCredits::CallFunc_GetScrollOffset_ReturnValue' has a wrong offset!");
static_assert(offsetof(Credits_C_ScrollCredits, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x00000C, "Member 'Credits_C_ScrollCredits::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");

// Function Credits.Credits_C.CaptureEndPoint
// 0x0004 (0x0004 - 0x0000)
struct Credits_C_CaptureEndPoint final
{
public:
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Credits_C_CaptureEndPoint) == 0x000004, "Wrong alignment on Credits_C_CaptureEndPoint");
static_assert(sizeof(Credits_C_CaptureEndPoint) == 0x000004, "Wrong size on Credits_C_CaptureEndPoint");
static_assert(offsetof(Credits_C_CaptureEndPoint, CallFunc_Add_FloatFloat_ReturnValue) == 0x000000, "Member 'Credits_C_CaptureEndPoint::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");

}

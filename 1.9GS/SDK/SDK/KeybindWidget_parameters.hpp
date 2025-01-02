#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KeybindWidget

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function KeybindWidget.KeybindWidget_C.ExecuteUbergraph_KeybindWidget
// 0x0260 (0x0260 - 0x0000)
struct KeybindWidget_C_ExecuteUbergraph_KeybindWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortBrushSize                                Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable2;                              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable3;                              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable4;                              // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable5;                              // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable6;                              // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable3;                               // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_23[0x5];                                       // 0x0023(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue2;                  // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetKeyTextForAction_ButtonActionType;     // 0x0050(0x0018)()
	class FText                                   CallFunc_GetKeyTextForAction_ReturnValue;          // 0x0068(0x0018)()
	int32                                         Temp_int_Variable;                                 // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default;                             // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x008C(0x0010)(NoDestructor)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue2;         // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable2;                                // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue3;         // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Round_ReturnValue;                        // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateFontInfo                         K2Node_MakeStruct_SlateFontInfo;                   // 0x00B0(0x0068)(HasGetValueTypeHash)
	struct FSlateBrush                            CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue; // 0x0118(0x0090)(ConstParm)
	struct FSlateBrush                            CallFunc_GetBrushForKey_Brush;                     // 0x01A8(0x0090)()
	bool                                          CallFunc_GetBrushForKey_ReturnValue;               // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable2;                               // 0x0239(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_23A[0x6];                                      // 0x023A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0240(0x0018)()
	int32                                         K2Node_Select2_Default;                            // 0x0258(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x025C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select3_Default;                            // 0x025D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeybindWidget_C_ExecuteUbergraph_KeybindWidget) == 0x000008, "Wrong alignment on KeybindWidget_C_ExecuteUbergraph_KeybindWidget");
static_assert(sizeof(KeybindWidget_C_ExecuteUbergraph_KeybindWidget) == 0x000260, "Wrong size on KeybindWidget_C_ExecuteUbergraph_KeybindWidget");
static_assert(offsetof(KeybindWidget_C_ExecuteUbergraph_KeybindWidget, EntryPoint) == 0x000000, "Member 'KeybindWidget_C_ExecuteUbergraph_KeybindWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(KeybindWidget_C_ExecuteUbergraph_KeybindWidget, Temp_byte_Variable) == 0x000004, "Member 'KeybindWidget_C_ExecuteUbergraph_KeybindWidget::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(KeybindWidget_C_ExecuteUbergraph_KeybindWidget, Temp_float_Variable) == 0x000008, "Member 'KeybindWidget_C_ExecuteUbergraph_KeybindWidget::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(KeybindWidget_C_ExecuteUbergraph_KeybindWidget, Temp_float_Variable2) == 0x00000C, "Member 'KeybindWidget_C_ExecuteUbergraph_KeybindWidget::Temp_float_Variable2' has a wrong offset!");
static_assert(offsetof(KeybindWidget_C_ExecuteUbergraph_KeybindWidget, Temp_float_Variable3) == 0x000010, "Member 'KeybindWidget_C_ExecuteUbergraph_KeybindWidget::Temp_float_Variable3' has a wrong offset!");
static_assert(offsetof(KeybindWidget_C_ExecuteUbergraph_KeybindWidget, Temp_float_Variable4) == 0x000014, "Member 'KeybindWidget_C_ExecuteUbergraph_KeybindWidget::Temp_float_Variable4' has a wrong offset!");
static_assert(offsetof(KeybindWidget_C_ExecuteUbergraph_KeybindWidget, Temp_float_Variable5) == 0x000018, "Member 'KeybindWidget_C_ExecuteUbergraph_KeybindWidget::Temp_float_Variable5' has a wrong offset!");
static_assert(offsetof(KeybindWidget_C_ExecuteUbergraph_KeybindWidget, Temp_float_Variable6) == 0x00001C, "Member 'KeybindWidget_C_ExecuteUbergraph_KeybindWidget::Temp_float_Variable6' has a wrong offset!");
static_assert(offsetof(KeybindWidget_C_ExecuteUbergraph_KeybindWidget, Temp_bool_Variable) == 0x000020, "Member 'KeybindWidget_C_ExecuteUbergraph_KeybindWidget::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(KeybindWidget_C_ExecuteUbergraph_KeybindWidget, Temp_byte_Variable2) == 0x000021, "Member 'KeybindWidget_C_ExecuteUbergraph_KeybindWidget::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(KeybindWidget_C_ExecuteUbergraph_KeybindWidget, Temp_byte_Variable3) == 0x000022, "Member 'KeybindWidget_C_ExecuteUbergraph_KeybindWidget::Temp_byte_Variable3' has a wrong offset!");
static_assert(offsetof(KeybindWidget_C_ExecuteUbergraph_KeybindWidget, K2Node_CreateDelegate_OutputDelegate) == 0x000028, "Member 'KeybindWidget_C_ExecuteUbergraph_KeybindWidget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(KeybindWidget_C_ExecuteUbergraph_KeybindWidget, K2Node_Event_IsDesignTime) == 0x000038, "Member 'KeybindWidget_C_ExecuteUbergraph_KeybindWidget::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(KeybindWidget_C_ExecuteUbergraph_KeybindWidget, CallFunc_GetContext_ReturnValue) == 0x000040, "Member 'KeybindWidget_C_ExecuteUbergraph_KeybindWidget::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeybindWidget_C_ExecuteUbergraph_KeybindWidget, CallFunc_GetContext_ReturnValue2) == 0x000048, "Member 'KeybindWidget_C_ExecuteUbergraph_KeybindWidget::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(KeybindWidget_C_ExecuteUbergraph_KeybindWidget, CallFunc_GetKeyTextForAction_ButtonActionType) == 0x000050, "Member 'KeybindWidget_C_ExecuteUbergraph_KeybindWidget::CallFunc_GetKeyTextForAction_ButtonActionType' has a wrong offset!");
static_assert(offsetof(KeybindWidget_C_ExecuteUbergraph_KeybindWidget, CallFunc_GetKeyTextForAction_ReturnValue) == 0x000068, "Member 'KeybindWidget_C_ExecuteUbergraph_KeybindWidget::CallFunc_GetKeyTextForAction_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeybindWidget_C_ExecuteUbergraph_KeybindWidget, Temp_int_Variable) == 0x000080, "Member 'KeybindWidget_C_ExecuteUbergraph_KeybindWidget::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(KeybindWidget_C_ExecuteUbergraph_KeybindWidget, K2Node_Select_Default) == 0x000084, "Member 'KeybindWidget_C_ExecuteUbergraph_KeybindWidget::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(KeybindWidget_C_ExecuteUbergraph_KeybindWidget, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000088, "Member 'KeybindWidget_C_ExecuteUbergraph_KeybindWidget::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeybindWidget_C_ExecuteUbergraph_KeybindWidget, K2Node_MakeStruct_Margin) == 0x00008C, "Member 'KeybindWidget_C_ExecuteUbergraph_KeybindWidget::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(KeybindWidget_C_ExecuteUbergraph_KeybindWidget, CallFunc_Multiply_FloatFloat_ReturnValue2) == 0x00009C, "Member 'KeybindWidget_C_ExecuteUbergraph_KeybindWidget::CallFunc_Multiply_FloatFloat_ReturnValue2' has a wrong offset!");
static_assert(offsetof(KeybindWidget_C_ExecuteUbergraph_KeybindWidget, Temp_int_Variable2) == 0x0000A0, "Member 'KeybindWidget_C_ExecuteUbergraph_KeybindWidget::Temp_int_Variable2' has a wrong offset!");
static_assert(offsetof(KeybindWidget_C_ExecuteUbergraph_KeybindWidget, CallFunc_Multiply_FloatFloat_ReturnValue3) == 0x0000A4, "Member 'KeybindWidget_C_ExecuteUbergraph_KeybindWidget::CallFunc_Multiply_FloatFloat_ReturnValue3' has a wrong offset!");
static_assert(offsetof(KeybindWidget_C_ExecuteUbergraph_KeybindWidget, CallFunc_Divide_FloatFloat_ReturnValue) == 0x0000A8, "Member 'KeybindWidget_C_ExecuteUbergraph_KeybindWidget::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeybindWidget_C_ExecuteUbergraph_KeybindWidget, CallFunc_Round_ReturnValue) == 0x0000AC, "Member 'KeybindWidget_C_ExecuteUbergraph_KeybindWidget::CallFunc_Round_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeybindWidget_C_ExecuteUbergraph_KeybindWidget, K2Node_MakeStruct_SlateFontInfo) == 0x0000B0, "Member 'KeybindWidget_C_ExecuteUbergraph_KeybindWidget::K2Node_MakeStruct_SlateFontInfo' has a wrong offset!");
static_assert(offsetof(KeybindWidget_C_ExecuteUbergraph_KeybindWidget, CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue) == 0x000118, "Member 'KeybindWidget_C_ExecuteUbergraph_KeybindWidget::CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeybindWidget_C_ExecuteUbergraph_KeybindWidget, CallFunc_GetBrushForKey_Brush) == 0x0001A8, "Member 'KeybindWidget_C_ExecuteUbergraph_KeybindWidget::CallFunc_GetBrushForKey_Brush' has a wrong offset!");
static_assert(offsetof(KeybindWidget_C_ExecuteUbergraph_KeybindWidget, CallFunc_GetBrushForKey_ReturnValue) == 0x000238, "Member 'KeybindWidget_C_ExecuteUbergraph_KeybindWidget::CallFunc_GetBrushForKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeybindWidget_C_ExecuteUbergraph_KeybindWidget, Temp_bool_Variable2) == 0x000239, "Member 'KeybindWidget_C_ExecuteUbergraph_KeybindWidget::Temp_bool_Variable2' has a wrong offset!");
static_assert(offsetof(KeybindWidget_C_ExecuteUbergraph_KeybindWidget, CallFunc_GetText_ReturnValue) == 0x000240, "Member 'KeybindWidget_C_ExecuteUbergraph_KeybindWidget::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeybindWidget_C_ExecuteUbergraph_KeybindWidget, K2Node_Select2_Default) == 0x000258, "Member 'KeybindWidget_C_ExecuteUbergraph_KeybindWidget::K2Node_Select2_Default' has a wrong offset!");
static_assert(offsetof(KeybindWidget_C_ExecuteUbergraph_KeybindWidget, CallFunc_TextIsEmpty_ReturnValue) == 0x00025C, "Member 'KeybindWidget_C_ExecuteUbergraph_KeybindWidget::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeybindWidget_C_ExecuteUbergraph_KeybindWidget, K2Node_Select3_Default) == 0x00025D, "Member 'KeybindWidget_C_ExecuteUbergraph_KeybindWidget::K2Node_Select3_Default' has a wrong offset!");

// Function KeybindWidget.KeybindWidget_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct KeybindWidget_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeybindWidget_C_PreConstruct) == 0x000001, "Wrong alignment on KeybindWidget_C_PreConstruct");
static_assert(sizeof(KeybindWidget_C_PreConstruct) == 0x000001, "Wrong size on KeybindWidget_C_PreConstruct");
static_assert(offsetof(KeybindWidget_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'KeybindWidget_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function KeybindWidget.KeybindWidget_C.Get Brush Size
// 0x0001 (0x0001 - 0x0000)
struct KeybindWidget_C_Get_Brush_Size final
{
public:
	EFortBrushSize                                Brush_Size_0;                                      // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeybindWidget_C_Get_Brush_Size) == 0x000001, "Wrong alignment on KeybindWidget_C_Get_Brush_Size");
static_assert(sizeof(KeybindWidget_C_Get_Brush_Size) == 0x000001, "Wrong size on KeybindWidget_C_Get_Brush_Size");
static_assert(offsetof(KeybindWidget_C_Get_Brush_Size, Brush_Size_0) == 0x000000, "Member 'KeybindWidget_C_Get_Brush_Size::Brush_Size_0' has a wrong offset!");

// Function KeybindWidget.KeybindWidget_C.Set Brush Size
// 0x0001 (0x0001 - 0x0000)
struct KeybindWidget_C_Set_Brush_Size final
{
public:
	EFortBrushSize                                Brush_Size_0;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeybindWidget_C_Set_Brush_Size) == 0x000001, "Wrong alignment on KeybindWidget_C_Set_Brush_Size");
static_assert(sizeof(KeybindWidget_C_Set_Brush_Size) == 0x000001, "Wrong size on KeybindWidget_C_Set_Brush_Size");
static_assert(offsetof(KeybindWidget_C_Set_Brush_Size, Brush_Size_0) == 0x000000, "Member 'KeybindWidget_C_Set_Brush_Size::Brush_Size_0' has a wrong offset!");

// Function KeybindWidget.KeybindWidget_C.Get Bound Action
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x08) KeybindWidget_C_Get_Bound_Action final
{
public:
	class FName                                   Action;                                            // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeybindWidget_C_Get_Bound_Action) == 0x000008, "Wrong alignment on KeybindWidget_C_Get_Bound_Action");
static_assert(sizeof(KeybindWidget_C_Get_Bound_Action) == 0x000008, "Wrong size on KeybindWidget_C_Get_Bound_Action");
static_assert(offsetof(KeybindWidget_C_Get_Bound_Action, Action) == 0x000000, "Member 'KeybindWidget_C_Get_Bound_Action::Action' has a wrong offset!");

// Function KeybindWidget.KeybindWidget_C.SetOpacity
// 0x0004 (0x0004 - 0x0000)
struct KeybindWidget_C_SetOpacity final
{
public:
	float                                         InOpacity;                                         // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeybindWidget_C_SetOpacity) == 0x000004, "Wrong alignment on KeybindWidget_C_SetOpacity");
static_assert(sizeof(KeybindWidget_C_SetOpacity) == 0x000004, "Wrong size on KeybindWidget_C_SetOpacity");
static_assert(offsetof(KeybindWidget_C_SetOpacity, InOpacity) == 0x000000, "Member 'KeybindWidget_C_SetOpacity::InOpacity' has a wrong offset!");

// Function KeybindWidget.KeybindWidget_C.ShowHoldBackPlate
// 0x0044 (0x0044 - 0x0000)
struct KeybindWidget_C_ShowHoldBackPlate final
{
public:
	EFortBrushSize                                Temp_byte_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable2;                              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable3;                              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable4;                              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable5;                              // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable6;                              // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable7;                              // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable8;                              // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsHoldKeybind_ReturnValue;                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default;                             // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select2_Default;                            // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue2;              // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeybindWidget_C_ShowHoldBackPlate) == 0x000004, "Wrong alignment on KeybindWidget_C_ShowHoldBackPlate");
static_assert(sizeof(KeybindWidget_C_ShowHoldBackPlate) == 0x000044, "Wrong size on KeybindWidget_C_ShowHoldBackPlate");
static_assert(offsetof(KeybindWidget_C_ShowHoldBackPlate, Temp_byte_Variable) == 0x000000, "Member 'KeybindWidget_C_ShowHoldBackPlate::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(KeybindWidget_C_ShowHoldBackPlate, Temp_float_Variable) == 0x000004, "Member 'KeybindWidget_C_ShowHoldBackPlate::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(KeybindWidget_C_ShowHoldBackPlate, Temp_float_Variable2) == 0x000008, "Member 'KeybindWidget_C_ShowHoldBackPlate::Temp_float_Variable2' has a wrong offset!");
static_assert(offsetof(KeybindWidget_C_ShowHoldBackPlate, Temp_float_Variable3) == 0x00000C, "Member 'KeybindWidget_C_ShowHoldBackPlate::Temp_float_Variable3' has a wrong offset!");
static_assert(offsetof(KeybindWidget_C_ShowHoldBackPlate, Temp_float_Variable4) == 0x000010, "Member 'KeybindWidget_C_ShowHoldBackPlate::Temp_float_Variable4' has a wrong offset!");
static_assert(offsetof(KeybindWidget_C_ShowHoldBackPlate, Temp_float_Variable5) == 0x000014, "Member 'KeybindWidget_C_ShowHoldBackPlate::Temp_float_Variable5' has a wrong offset!");
static_assert(offsetof(KeybindWidget_C_ShowHoldBackPlate, Temp_float_Variable6) == 0x000018, "Member 'KeybindWidget_C_ShowHoldBackPlate::Temp_float_Variable6' has a wrong offset!");
static_assert(offsetof(KeybindWidget_C_ShowHoldBackPlate, Temp_bool_Variable) == 0x00001C, "Member 'KeybindWidget_C_ShowHoldBackPlate::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(KeybindWidget_C_ShowHoldBackPlate, Temp_float_Variable7) == 0x000020, "Member 'KeybindWidget_C_ShowHoldBackPlate::Temp_float_Variable7' has a wrong offset!");
static_assert(offsetof(KeybindWidget_C_ShowHoldBackPlate, Temp_float_Variable8) == 0x000024, "Member 'KeybindWidget_C_ShowHoldBackPlate::Temp_float_Variable8' has a wrong offset!");
static_assert(offsetof(KeybindWidget_C_ShowHoldBackPlate, CallFunc_IsHoldKeybind_ReturnValue) == 0x000028, "Member 'KeybindWidget_C_ShowHoldBackPlate::CallFunc_IsHoldKeybind_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeybindWidget_C_ShowHoldBackPlate, CallFunc_GetActiveWidgetIndex_ReturnValue) == 0x00002C, "Member 'KeybindWidget_C_ShowHoldBackPlate::CallFunc_GetActiveWidgetIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeybindWidget_C_ShowHoldBackPlate, K2Node_Select_Default) == 0x000030, "Member 'KeybindWidget_C_ShowHoldBackPlate::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(KeybindWidget_C_ShowHoldBackPlate, CallFunc_Greater_IntInt_ReturnValue) == 0x000034, "Member 'KeybindWidget_C_ShowHoldBackPlate::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeybindWidget_C_ShowHoldBackPlate, CallFunc_Add_FloatFloat_ReturnValue) == 0x000038, "Member 'KeybindWidget_C_ShowHoldBackPlate::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeybindWidget_C_ShowHoldBackPlate, K2Node_Select2_Default) == 0x00003C, "Member 'KeybindWidget_C_ShowHoldBackPlate::K2Node_Select2_Default' has a wrong offset!");
static_assert(offsetof(KeybindWidget_C_ShowHoldBackPlate, CallFunc_Add_FloatFloat_ReturnValue2) == 0x000040, "Member 'KeybindWidget_C_ShowHoldBackPlate::CallFunc_Add_FloatFloat_ReturnValue2' has a wrong offset!");

}

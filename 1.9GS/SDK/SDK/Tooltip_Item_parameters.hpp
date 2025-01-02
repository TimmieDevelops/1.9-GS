#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Tooltip_Item

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function Tooltip-Item.Tooltip-Item_C.ExecuteUbergraph_Tooltip-Item
// 0x0004 (0x0004 - 0x0000)
struct Tooltip_Item_C_ExecuteUbergraph_Tooltip_Item final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Tooltip_Item_C_ExecuteUbergraph_Tooltip_Item) == 0x000004, "Wrong alignment on Tooltip_Item_C_ExecuteUbergraph_Tooltip_Item");
static_assert(sizeof(Tooltip_Item_C_ExecuteUbergraph_Tooltip_Item) == 0x000004, "Wrong size on Tooltip_Item_C_ExecuteUbergraph_Tooltip_Item");
static_assert(offsetof(Tooltip_Item_C_ExecuteUbergraph_Tooltip_Item, EntryPoint) == 0x000000, "Member 'Tooltip_Item_C_ExecuteUbergraph_Tooltip_Item::EntryPoint' has a wrong offset!");

// Function Tooltip-Item.Tooltip-Item_C.Get Icon Brush
// 0x0120 (0x0120 - 0x0000)
struct Tooltip_Item_C_Get_Icon_Brush final
{
public:
	struct FSlateBrush                            ReturnValue;                                       // 0x0000(0x0090)(Parm, OutParm, ReturnParm)
	struct FSlateBrush                            CallFunc_MakeBrushFromAsset_ReturnValue;           // 0x0090(0x0090)()
};
static_assert(alignof(Tooltip_Item_C_Get_Icon_Brush) == 0x000008, "Wrong alignment on Tooltip_Item_C_Get_Icon_Brush");
static_assert(sizeof(Tooltip_Item_C_Get_Icon_Brush) == 0x000120, "Wrong size on Tooltip_Item_C_Get_Icon_Brush");
static_assert(offsetof(Tooltip_Item_C_Get_Icon_Brush, ReturnValue) == 0x000000, "Member 'Tooltip_Item_C_Get_Icon_Brush::ReturnValue' has a wrong offset!");
static_assert(offsetof(Tooltip_Item_C_Get_Icon_Brush, CallFunc_MakeBrushFromAsset_ReturnValue) == 0x000090, "Member 'Tooltip_Item_C_Get_Icon_Brush::CallFunc_MakeBrushFromAsset_ReturnValue' has a wrong offset!");

// Function Tooltip-Item.Tooltip-Item_C.Get Theme Color [Normal]
// 0x0020 (0x0020 - 0x0000)
struct Tooltip_Item_C_Get_Theme_Color__Normal_ final
{
public:
	struct FLinearColor                           ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Get_Theme_Color_Theme_Color;              // 0x0010(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Tooltip_Item_C_Get_Theme_Color__Normal_) == 0x000004, "Wrong alignment on Tooltip_Item_C_Get_Theme_Color__Normal_");
static_assert(sizeof(Tooltip_Item_C_Get_Theme_Color__Normal_) == 0x000020, "Wrong size on Tooltip_Item_C_Get_Theme_Color__Normal_");
static_assert(offsetof(Tooltip_Item_C_Get_Theme_Color__Normal_, ReturnValue) == 0x000000, "Member 'Tooltip_Item_C_Get_Theme_Color__Normal_::ReturnValue' has a wrong offset!");
static_assert(offsetof(Tooltip_Item_C_Get_Theme_Color__Normal_, CallFunc_Get_Theme_Color_Theme_Color) == 0x000010, "Member 'Tooltip_Item_C_Get_Theme_Color__Normal_::CallFunc_Get_Theme_Color_Theme_Color' has a wrong offset!");

// Function Tooltip-Item.Tooltip-Item_C.Get Tooltip Header Visibility
// 0x000A (0x000A - 0x0000)
struct Tooltip_Item_C_Get_Tooltip_Header_Visibility final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_Get_Tooltip_Header_Text_Visibility_ReturnValue; // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_Get_Tooltip_Header_Icon_Visibility_ReturnValue; // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue2;         // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Tooltip_Item_C_Get_Tooltip_Header_Visibility) == 0x000001, "Wrong alignment on Tooltip_Item_C_Get_Tooltip_Header_Visibility");
static_assert(sizeof(Tooltip_Item_C_Get_Tooltip_Header_Visibility) == 0x00000A, "Wrong size on Tooltip_Item_C_Get_Tooltip_Header_Visibility");
static_assert(offsetof(Tooltip_Item_C_Get_Tooltip_Header_Visibility, ReturnValue) == 0x000000, "Member 'Tooltip_Item_C_Get_Tooltip_Header_Visibility::ReturnValue' has a wrong offset!");
static_assert(offsetof(Tooltip_Item_C_Get_Tooltip_Header_Visibility, Temp_byte_Variable) == 0x000001, "Member 'Tooltip_Item_C_Get_Tooltip_Header_Visibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Tooltip_Item_C_Get_Tooltip_Header_Visibility, Temp_byte_Variable2) == 0x000002, "Member 'Tooltip_Item_C_Get_Tooltip_Header_Visibility::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(Tooltip_Item_C_Get_Tooltip_Header_Visibility, Temp_bool_Variable) == 0x000003, "Member 'Tooltip_Item_C_Get_Tooltip_Header_Visibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Tooltip_Item_C_Get_Tooltip_Header_Visibility, CallFunc_Get_Tooltip_Header_Text_Visibility_ReturnValue) == 0x000004, "Member 'Tooltip_Item_C_Get_Tooltip_Header_Visibility::CallFunc_Get_Tooltip_Header_Text_Visibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(Tooltip_Item_C_Get_Tooltip_Header_Visibility, CallFunc_Get_Tooltip_Header_Icon_Visibility_ReturnValue) == 0x000005, "Member 'Tooltip_Item_C_Get_Tooltip_Header_Visibility::CallFunc_Get_Tooltip_Header_Icon_Visibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(Tooltip_Item_C_Get_Tooltip_Header_Visibility, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000006, "Member 'Tooltip_Item_C_Get_Tooltip_Header_Visibility::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Tooltip_Item_C_Get_Tooltip_Header_Visibility, CallFunc_EqualEqual_ByteByte_ReturnValue2) == 0x000007, "Member 'Tooltip_Item_C_Get_Tooltip_Header_Visibility::CallFunc_EqualEqual_ByteByte_ReturnValue2' has a wrong offset!");
static_assert(offsetof(Tooltip_Item_C_Get_Tooltip_Header_Visibility, CallFunc_BooleanAND_ReturnValue) == 0x000008, "Member 'Tooltip_Item_C_Get_Tooltip_Header_Visibility::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(Tooltip_Item_C_Get_Tooltip_Header_Visibility, K2Node_Select_Default) == 0x000009, "Member 'Tooltip_Item_C_Get_Tooltip_Header_Visibility::K2Node_Select_Default' has a wrong offset!");

// Function Tooltip-Item.Tooltip-Item_C.Get Tooltip Header Icon Visibility
// 0x0006 (0x0006 - 0x0000)
struct Tooltip_Item_C_Get_Tooltip_Header_Icon_Visibility final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Tooltip_Item_C_Get_Tooltip_Header_Icon_Visibility) == 0x000001, "Wrong alignment on Tooltip_Item_C_Get_Tooltip_Header_Icon_Visibility");
static_assert(sizeof(Tooltip_Item_C_Get_Tooltip_Header_Icon_Visibility) == 0x000006, "Wrong size on Tooltip_Item_C_Get_Tooltip_Header_Icon_Visibility");
static_assert(offsetof(Tooltip_Item_C_Get_Tooltip_Header_Icon_Visibility, ReturnValue) == 0x000000, "Member 'Tooltip_Item_C_Get_Tooltip_Header_Icon_Visibility::ReturnValue' has a wrong offset!");
static_assert(offsetof(Tooltip_Item_C_Get_Tooltip_Header_Icon_Visibility, Temp_bool_Variable) == 0x000001, "Member 'Tooltip_Item_C_Get_Tooltip_Header_Icon_Visibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Tooltip_Item_C_Get_Tooltip_Header_Icon_Visibility, Temp_byte_Variable) == 0x000002, "Member 'Tooltip_Item_C_Get_Tooltip_Header_Icon_Visibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Tooltip_Item_C_Get_Tooltip_Header_Icon_Visibility, Temp_byte_Variable2) == 0x000003, "Member 'Tooltip_Item_C_Get_Tooltip_Header_Icon_Visibility::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(Tooltip_Item_C_Get_Tooltip_Header_Icon_Visibility, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'Tooltip_Item_C_Get_Tooltip_Header_Icon_Visibility::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Tooltip_Item_C_Get_Tooltip_Header_Icon_Visibility, K2Node_Select_Default) == 0x000005, "Member 'Tooltip_Item_C_Get_Tooltip_Header_Icon_Visibility::K2Node_Select_Default' has a wrong offset!");

// Function Tooltip-Item.Tooltip-Item_C.Get Tooltip Header Text Visibility
// 0x0006 (0x0006 - 0x0000)
struct Tooltip_Item_C_Get_Tooltip_Header_Text_Visibility final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Tooltip_Item_C_Get_Tooltip_Header_Text_Visibility) == 0x000001, "Wrong alignment on Tooltip_Item_C_Get_Tooltip_Header_Text_Visibility");
static_assert(sizeof(Tooltip_Item_C_Get_Tooltip_Header_Text_Visibility) == 0x000006, "Wrong size on Tooltip_Item_C_Get_Tooltip_Header_Text_Visibility");
static_assert(offsetof(Tooltip_Item_C_Get_Tooltip_Header_Text_Visibility, ReturnValue) == 0x000000, "Member 'Tooltip_Item_C_Get_Tooltip_Header_Text_Visibility::ReturnValue' has a wrong offset!");
static_assert(offsetof(Tooltip_Item_C_Get_Tooltip_Header_Text_Visibility, Temp_bool_Variable) == 0x000001, "Member 'Tooltip_Item_C_Get_Tooltip_Header_Text_Visibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Tooltip_Item_C_Get_Tooltip_Header_Text_Visibility, Temp_byte_Variable) == 0x000002, "Member 'Tooltip_Item_C_Get_Tooltip_Header_Text_Visibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Tooltip_Item_C_Get_Tooltip_Header_Text_Visibility, Temp_byte_Variable2) == 0x000003, "Member 'Tooltip_Item_C_Get_Tooltip_Header_Text_Visibility::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(Tooltip_Item_C_Get_Tooltip_Header_Text_Visibility, CallFunc_TextIsEmpty_ReturnValue) == 0x000004, "Member 'Tooltip_Item_C_Get_Tooltip_Header_Text_Visibility::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(Tooltip_Item_C_Get_Tooltip_Header_Text_Visibility, K2Node_Select_Default) == 0x000005, "Member 'Tooltip_Item_C_Get_Tooltip_Header_Text_Visibility::K2Node_Select_Default' has a wrong offset!");

}

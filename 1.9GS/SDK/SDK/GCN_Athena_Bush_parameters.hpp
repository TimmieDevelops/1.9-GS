#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Athena_Bush

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function GCN_Athena_Bush.GCN_Athena_Bush_C.ExecuteUbergraph_GCN_Athena_Bush
// 0x0060 (0x0060 - 0x0000)
struct GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Temp_object_Variable2;                             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E[0x2];                                       // 0x001E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetVelocity_ReturnValue;                  // 0x0020(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VSize_ReturnValue;                        // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue2;          // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A[0x2];                                       // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x003C(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawnAthena*                  K2Node_DynamicCast_AsFort_Player_Pawn_Athena;      // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52[0x6];                                       // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             K2Node_Select_Default;                             // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush) == 0x000008, "Wrong alignment on GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush");
static_assert(sizeof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush) == 0x000060, "Wrong size on GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, EntryPoint) == 0x000000, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, Temp_bool_Variable) == 0x000004, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, Temp_object_Variable) == 0x000008, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, Temp_object_Variable2) == 0x000010, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::Temp_object_Variable2' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, K2Node_Event_DeltaSeconds) == 0x000018, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_IsValid_ReturnValue) == 0x00001C, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_BooleanAND_ReturnValue) == 0x00001D, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_GetVelocity_ReturnValue) == 0x000020, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_VSize_ReturnValue) == 0x00002C, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000030, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_FClamp_ReturnValue) == 0x000034, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000038, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_Greater_FloatFloat_ReturnValue2) == 0x000039, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_Greater_FloatFloat_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_K2_GetActorLocation_ReturnValue) == 0x00003C, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, K2Node_DynamicCast_AsFort_Player_Pawn_Athena) == 0x000048, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::K2Node_DynamicCast_AsFort_Player_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_IsLocallyControlled_ReturnValue) == 0x000051, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, K2Node_Select_Default) == 0x000058, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::K2Node_Select_Default' has a wrong offset!");

// Function GCN_Athena_Bush.GCN_Athena_Bush_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct GCN_Athena_Bush_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCN_Athena_Bush_C_ReceiveTick) == 0x000004, "Wrong alignment on GCN_Athena_Bush_C_ReceiveTick");
static_assert(sizeof(GCN_Athena_Bush_C_ReceiveTick) == 0x000004, "Wrong size on GCN_Athena_Bush_C_ReceiveTick");
static_assert(offsetof(GCN_Athena_Bush_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'GCN_Athena_Bush_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function GCN_Athena_Bush.GCN_Athena_Bush_C.OnRemove
// 0x00E8 (0x00E8 - 0x0000)
struct GCN_Athena_Bush_C_OnRemove final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C2[0x6];                                       // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawnAthena*                  K2Node_DynamicCast_AsFort_Player_Pawn_Athena;      // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x00D8(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(GCN_Athena_Bush_C_OnRemove) == 0x000008, "Wrong alignment on GCN_Athena_Bush_C_OnRemove");
static_assert(sizeof(GCN_Athena_Bush_C_OnRemove) == 0x0000E8, "Wrong size on GCN_Athena_Bush_C_OnRemove");
static_assert(offsetof(GCN_Athena_Bush_C_OnRemove, MyTarget) == 0x000000, "Member 'GCN_Athena_Bush_C_OnRemove::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_OnRemove, Parameters) == 0x000008, "Member 'GCN_Athena_Bush_C_OnRemove::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_OnRemove, ReturnValue) == 0x0000C0, "Member 'GCN_Athena_Bush_C_OnRemove::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_OnRemove, CallFunc_IsValid_ReturnValue) == 0x0000C1, "Member 'GCN_Athena_Bush_C_OnRemove::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_OnRemove, K2Node_DynamicCast_AsFort_Player_Pawn_Athena) == 0x0000C8, "Member 'GCN_Athena_Bush_C_OnRemove::K2Node_DynamicCast_AsFort_Player_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_OnRemove, K2Node_DynamicCast_bSuccess) == 0x0000D0, "Member 'GCN_Athena_Bush_C_OnRemove::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_OnRemove, K2Node_CreateDelegate_OutputDelegate) == 0x0000D8, "Member 'GCN_Athena_Bush_C_OnRemove::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function GCN_Athena_Bush.GCN_Athena_Bush_C.WhileActive
// 0x00C8 (0x00C8 - 0x0000)
struct GCN_Athena_Bush_C_WhileActive final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GCN_Athena_Bush_C_WhileActive) == 0x000008, "Wrong alignment on GCN_Athena_Bush_C_WhileActive");
static_assert(sizeof(GCN_Athena_Bush_C_WhileActive) == 0x0000C8, "Wrong size on GCN_Athena_Bush_C_WhileActive");
static_assert(offsetof(GCN_Athena_Bush_C_WhileActive, MyTarget) == 0x000000, "Member 'GCN_Athena_Bush_C_WhileActive::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_WhileActive, Parameters) == 0x000008, "Member 'GCN_Athena_Bush_C_WhileActive::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_WhileActive, ReturnValue) == 0x0000C0, "Member 'GCN_Athena_Bush_C_WhileActive::ReturnValue' has a wrong offset!");

// Function GCN_Athena_Bush.GCN_Athena_Bush_C.Activated
// 0x00B8 (0x00B8 - 0x0000)
struct GCN_Athena_Bush_C_Activated final
{
public:
	class AActor*                                 PlayerPawn_0;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x0008(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AFortPlayerPawnAthena*                  K2Node_DynamicCast_AsFort_Player_Pawn_Athena;      // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x00A0(0x0010)(ZeroConstructor, NoDestructor)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCN_Athena_Bush_C_Activated) == 0x000008, "Wrong alignment on GCN_Athena_Bush_C_Activated");
static_assert(sizeof(GCN_Athena_Bush_C_Activated) == 0x0000B8, "Wrong size on GCN_Athena_Bush_C_Activated");
static_assert(offsetof(GCN_Athena_Bush_C_Activated, PlayerPawn_0) == 0x000000, "Member 'GCN_Athena_Bush_C_Activated::PlayerPawn_0' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_Activated, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x000008, "Member 'GCN_Athena_Bush_C_Activated::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_Activated, K2Node_DynamicCast_AsFort_Player_Pawn_Athena) == 0x000090, "Member 'GCN_Athena_Bush_C_Activated::K2Node_DynamicCast_AsFort_Player_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_Activated, K2Node_DynamicCast_bSuccess) == 0x000098, "Member 'GCN_Athena_Bush_C_Activated::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_Activated, K2Node_CreateDelegate_OutputDelegate) == 0x0000A0, "Member 'GCN_Athena_Bush_C_Activated::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_Activated, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x0000B0, "Member 'GCN_Athena_Bush_C_Activated::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");

}

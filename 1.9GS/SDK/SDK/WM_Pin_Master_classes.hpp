#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WM_Pin_Master

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass WM_Pin_Master.WM_Pin_Master_C
// 0x0118 (0x04B8 - 0x03A0)
class AWM_Pin_Master_C : public AWorldMapPin
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03A0(0x0008)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                   PinDiffGlow;                                       // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   PinPing;                                           // 0x03B0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight_B_Lock;                                 // 0x03B8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight_A_Lock;                                 // 0x03C0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   PinLocked;                                         // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight_B_Pin;                                  // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight_A_Pin;                                  // 0x03D8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_PinPings;                                        // 0x03E0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      clickZone;                                         // 0x03E8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Pin;                                               // 0x03F0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Base;                                              // 0x03F8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            PinMesh;                                           // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FLinearColor>                   DefaultColor;                                      // 0x0408(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FLinearColor                           IdleHover1;                                        // 0x0418(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           IdleHover2;                                        // 0x0428(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           GlowColor;                                         // 0x0438(0x0010)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           DifficultyColor;                                   // 0x0448(0x0010)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            LockedPin;                                         // 0x0458(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   LastVisibleText;                                   // 0x0460(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          LastVisibleValue;                                  // 0x0478(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_479[0x7];                                      // 0x0479(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 PreviewedTheaterId;                                // 0x0480(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          bHasMouseOver;                                     // 0x0490(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_491[0x7];                                      // 0x0491(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               MID_Ping;                                          // 0x0498(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MID_DiffGlow;                                      // 0x04A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MID_Pin;                                           // 0x04A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MID_Locked;                                        // 0x04B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WM_Pin_Master(int32 EntryPoint);
	void OnTheaterIdSet();
	void HandleOnEndCursorOver(class AActor* TouchedActor);
	void HandleOnBeginCursorOver(class AActor* TouchedActor);
	void HandleOnClicked(class AActor* TouchedActor, const struct FKey& ButtonPressed);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void IsLeader(bool* Enabled);
	void CanAccessPin(bool* Accessible);
	void GetRequiredText(class FText* RequirementText);
	void UpdateVisuals();
	void InitializeContextEvents();
	void OnSetPreviewedSceneTheater(const class FString& PreviewedTheaterId_0);
	void OnTheaterSelected(const class FString& TheaterId_0);
	void OnQuestsCompleted(TArray<class UFortQuestItem*>& QuestItems);
	void UpdateSelectionState();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WM_Pin_Master_C">();
	}
	static class AWM_Pin_Master_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWM_Pin_Master_C>();
	}
};
static_assert(alignof(AWM_Pin_Master_C) == 0x000008, "Wrong alignment on AWM_Pin_Master_C");
static_assert(sizeof(AWM_Pin_Master_C) == 0x0004B8, "Wrong size on AWM_Pin_Master_C");
static_assert(offsetof(AWM_Pin_Master_C, UberGraphFrame) == 0x0003A0, "Member 'AWM_Pin_Master_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AWM_Pin_Master_C, PinDiffGlow) == 0x0003A8, "Member 'AWM_Pin_Master_C::PinDiffGlow' has a wrong offset!");
static_assert(offsetof(AWM_Pin_Master_C, PinPing) == 0x0003B0, "Member 'AWM_Pin_Master_C::PinPing' has a wrong offset!");
static_assert(offsetof(AWM_Pin_Master_C, PointLight_B_Lock) == 0x0003B8, "Member 'AWM_Pin_Master_C::PointLight_B_Lock' has a wrong offset!");
static_assert(offsetof(AWM_Pin_Master_C, PointLight_A_Lock) == 0x0003C0, "Member 'AWM_Pin_Master_C::PointLight_A_Lock' has a wrong offset!");
static_assert(offsetof(AWM_Pin_Master_C, PinLocked) == 0x0003C8, "Member 'AWM_Pin_Master_C::PinLocked' has a wrong offset!");
static_assert(offsetof(AWM_Pin_Master_C, PointLight_B_Pin) == 0x0003D0, "Member 'AWM_Pin_Master_C::PointLight_B_Pin' has a wrong offset!");
static_assert(offsetof(AWM_Pin_Master_C, PointLight_A_Pin) == 0x0003D8, "Member 'AWM_Pin_Master_C::PointLight_A_Pin' has a wrong offset!");
static_assert(offsetof(AWM_Pin_Master_C, P_PinPings) == 0x0003E0, "Member 'AWM_Pin_Master_C::P_PinPings' has a wrong offset!");
static_assert(offsetof(AWM_Pin_Master_C, clickZone) == 0x0003E8, "Member 'AWM_Pin_Master_C::clickZone' has a wrong offset!");
static_assert(offsetof(AWM_Pin_Master_C, Pin) == 0x0003F0, "Member 'AWM_Pin_Master_C::Pin' has a wrong offset!");
static_assert(offsetof(AWM_Pin_Master_C, Base) == 0x0003F8, "Member 'AWM_Pin_Master_C::Base' has a wrong offset!");
static_assert(offsetof(AWM_Pin_Master_C, PinMesh) == 0x000400, "Member 'AWM_Pin_Master_C::PinMesh' has a wrong offset!");
static_assert(offsetof(AWM_Pin_Master_C, DefaultColor) == 0x000408, "Member 'AWM_Pin_Master_C::DefaultColor' has a wrong offset!");
static_assert(offsetof(AWM_Pin_Master_C, IdleHover1) == 0x000418, "Member 'AWM_Pin_Master_C::IdleHover1' has a wrong offset!");
static_assert(offsetof(AWM_Pin_Master_C, IdleHover2) == 0x000428, "Member 'AWM_Pin_Master_C::IdleHover2' has a wrong offset!");
static_assert(offsetof(AWM_Pin_Master_C, GlowColor) == 0x000438, "Member 'AWM_Pin_Master_C::GlowColor' has a wrong offset!");
static_assert(offsetof(AWM_Pin_Master_C, DifficultyColor) == 0x000448, "Member 'AWM_Pin_Master_C::DifficultyColor' has a wrong offset!");
static_assert(offsetof(AWM_Pin_Master_C, LockedPin) == 0x000458, "Member 'AWM_Pin_Master_C::LockedPin' has a wrong offset!");
static_assert(offsetof(AWM_Pin_Master_C, LastVisibleText) == 0x000460, "Member 'AWM_Pin_Master_C::LastVisibleText' has a wrong offset!");
static_assert(offsetof(AWM_Pin_Master_C, LastVisibleValue) == 0x000478, "Member 'AWM_Pin_Master_C::LastVisibleValue' has a wrong offset!");
static_assert(offsetof(AWM_Pin_Master_C, PreviewedTheaterId) == 0x000480, "Member 'AWM_Pin_Master_C::PreviewedTheaterId' has a wrong offset!");
static_assert(offsetof(AWM_Pin_Master_C, bHasMouseOver) == 0x000490, "Member 'AWM_Pin_Master_C::bHasMouseOver' has a wrong offset!");
static_assert(offsetof(AWM_Pin_Master_C, MID_Ping) == 0x000498, "Member 'AWM_Pin_Master_C::MID_Ping' has a wrong offset!");
static_assert(offsetof(AWM_Pin_Master_C, MID_DiffGlow) == 0x0004A0, "Member 'AWM_Pin_Master_C::MID_DiffGlow' has a wrong offset!");
static_assert(offsetof(AWM_Pin_Master_C, MID_Pin) == 0x0004A8, "Member 'AWM_Pin_Master_C::MID_Pin' has a wrong offset!");
static_assert(offsetof(AWM_Pin_Master_C, MID_Locked) == 0x0004B0, "Member 'AWM_Pin_Master_C::MID_Locked' has a wrong offset!");

}

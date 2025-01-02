#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MissionFocusWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MissionFocusWidget.MissionFocusWidget_C
// 0x0038 (0x0270 - 0x0238)
class UMissionFocusWidget_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(Transient, DuplicateTransient)
	class UCommonTextBlock*                       HeaderText;                                        // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           KillPointsBar;                                     // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TimerText;                                         // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMissionTimerComponent*             SavedTimerComponent;                               // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortMission*                           CurrentFocusedMission;                             // 0x0260(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         KillBarPercentage;                                 // 0x0268(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MissionFocusWidget(int32 EntryPoint);
	void Construct();
	void UpdateTimer();
	void HandleTimerComponentChanged(class UFortMissionTimerComponent* TimerComponent);
	void HandleFocusedMission(class AFortMission* FocusedMission);
	void UpdateVisibility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MissionFocusWidget_C">();
	}
	static class UMissionFocusWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMissionFocusWidget_C>();
	}
};
static_assert(alignof(UMissionFocusWidget_C) == 0x000008, "Wrong alignment on UMissionFocusWidget_C");
static_assert(sizeof(UMissionFocusWidget_C) == 0x000270, "Wrong size on UMissionFocusWidget_C");
static_assert(offsetof(UMissionFocusWidget_C, UberGraphFrame) == 0x000238, "Member 'UMissionFocusWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMissionFocusWidget_C, HeaderText) == 0x000240, "Member 'UMissionFocusWidget_C::HeaderText' has a wrong offset!");
static_assert(offsetof(UMissionFocusWidget_C, KillPointsBar) == 0x000248, "Member 'UMissionFocusWidget_C::KillPointsBar' has a wrong offset!");
static_assert(offsetof(UMissionFocusWidget_C, TimerText) == 0x000250, "Member 'UMissionFocusWidget_C::TimerText' has a wrong offset!");
static_assert(offsetof(UMissionFocusWidget_C, SavedTimerComponent) == 0x000258, "Member 'UMissionFocusWidget_C::SavedTimerComponent' has a wrong offset!");
static_assert(offsetof(UMissionFocusWidget_C, CurrentFocusedMission) == 0x000260, "Member 'UMissionFocusWidget_C::CurrentFocusedMission' has a wrong offset!");
static_assert(offsetof(UMissionFocusWidget_C, KillBarPercentage) == 0x000268, "Member 'UMissionFocusWidget_C::KillBarPercentage' has a wrong offset!");

}

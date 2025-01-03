#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CompendiumPage

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CompendiumPage.CompendiumPage_C
// 0x0050 (0x0458 - 0x0408)
class UCompendiumPage_C final : public UFortActivatablePanel
{
public:
	uint8                                         Pad_408[0x8];                                      // 0x0408(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0410(0x0008)(Transient, DuplicateTransient)
	class UIconTextButton_C*                      ClaimRewardsButton;                                // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCompendiumProgressWidget_C*            CompendiumProgressWidget;                          // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerEmblemAndXp_C*                   PlayerEmblemAndXp_C_0;                             // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       QuestListTitle;                                    // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           QuestPanel;                                        // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortCompendiumItem*                    Compendium;                                        // 0x0450(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CompendiumPage(int32 EntryPoint);
	void Construct();
	void SetCompendium(class UFortCompendiumItem* Compendium_0);
	void UpdateQuests();
	void ClaimNextQuestReward();
	void RegisterEventListeners();
	void CreateQuestWidget(class UFortQuestItem* Quest);
	void CreateDisabledQuestWidget(class UFortQuestItemDefinition* QuestDefinition);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CompendiumPage_C">();
	}
	static class UCompendiumPage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCompendiumPage_C>();
	}
};
static_assert(alignof(UCompendiumPage_C) == 0x000008, "Wrong alignment on UCompendiumPage_C");
static_assert(sizeof(UCompendiumPage_C) == 0x000458, "Wrong size on UCompendiumPage_C");
static_assert(offsetof(UCompendiumPage_C, UberGraphFrame) == 0x000410, "Member 'UCompendiumPage_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCompendiumPage_C, ClaimRewardsButton) == 0x000418, "Member 'UCompendiumPage_C::ClaimRewardsButton' has a wrong offset!");
static_assert(offsetof(UCompendiumPage_C, CompendiumProgressWidget) == 0x000420, "Member 'UCompendiumPage_C::CompendiumProgressWidget' has a wrong offset!");
static_assert(offsetof(UCompendiumPage_C, Image_0) == 0x000428, "Member 'UCompendiumPage_C::Image_0' has a wrong offset!");
static_assert(offsetof(UCompendiumPage_C, Image_1) == 0x000430, "Member 'UCompendiumPage_C::Image_1' has a wrong offset!");
static_assert(offsetof(UCompendiumPage_C, PlayerEmblemAndXp_C_0) == 0x000438, "Member 'UCompendiumPage_C::PlayerEmblemAndXp_C_0' has a wrong offset!");
static_assert(offsetof(UCompendiumPage_C, QuestListTitle) == 0x000440, "Member 'UCompendiumPage_C::QuestListTitle' has a wrong offset!");
static_assert(offsetof(UCompendiumPage_C, QuestPanel) == 0x000448, "Member 'UCompendiumPage_C::QuestPanel' has a wrong offset!");
static_assert(offsetof(UCompendiumPage_C, Compendium) == 0x000450, "Member 'UCompendiumPage_C::Compendium' has a wrong offset!");

}


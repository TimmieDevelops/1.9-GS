#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PowerWidget

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PowerWidget.PowerWidget_C
// 0x0098 (0x02F8 - 0x0260)
class UPowerWidget_C final : public UFortPlayerTrackerBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 BarBG;                                             // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHomebaseRatingBar_C*                   HomebaseRatingBar;                                 // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Power;                                       // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                NumericText_RatingValue;                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 OuterGlow;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_1;                                         // 0x0290(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PowerIconGlow;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         RatingValue;                                       // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         InterpDuration;                                    // 0x02A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          ShowProgress;                                      // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A9[0x3];                                      // 0x02A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CurrentRating;                                     // 0x02AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           cParty;                                            // 0x02B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           cSolo;                                             // 0x02C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_LocalPlayerProfileModal_C*          LocalPlayerWidget;                                 // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   Power_Increased;                                   // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          Previously_Had_Teammates;                          // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E9[0x7];                                      // 0x02E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             Power_Increased_Sound;                             // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_PowerWidget(int32 EntryPoint);
	void OnPlayerInfoChanged(const struct FFortTeamMemberInfo& NewInfo);
	void Construct();
	void Update_Rating_Value(int32 New_Rating_Value);
	void Update_Rating();
	void SetState(bool* PassThrough);
	void Debug();
	bool PlayerHasTeammates();
	class UWidget* GetPowerRatingTooltipWidget();
	void Check_For_Power_Change();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PowerWidget_C">();
	}
	static class UPowerWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPowerWidget_C>();
	}
};
static_assert(alignof(UPowerWidget_C) == 0x000008, "Wrong alignment on UPowerWidget_C");
static_assert(sizeof(UPowerWidget_C) == 0x0002F8, "Wrong size on UPowerWidget_C");
static_assert(offsetof(UPowerWidget_C, UberGraphFrame) == 0x000260, "Member 'UPowerWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPowerWidget_C, BarBG) == 0x000268, "Member 'UPowerWidget_C::BarBG' has a wrong offset!");
static_assert(offsetof(UPowerWidget_C, HomebaseRatingBar) == 0x000270, "Member 'UPowerWidget_C::HomebaseRatingBar' has a wrong offset!");
static_assert(offsetof(UPowerWidget_C, Image_Power) == 0x000278, "Member 'UPowerWidget_C::Image_Power' has a wrong offset!");
static_assert(offsetof(UPowerWidget_C, NumericText_RatingValue) == 0x000280, "Member 'UPowerWidget_C::NumericText_RatingValue' has a wrong offset!");
static_assert(offsetof(UPowerWidget_C, OuterGlow) == 0x000288, "Member 'UPowerWidget_C::OuterGlow' has a wrong offset!");
static_assert(offsetof(UPowerWidget_C, Overlay_1) == 0x000290, "Member 'UPowerWidget_C::Overlay_1' has a wrong offset!");
static_assert(offsetof(UPowerWidget_C, PowerIconGlow) == 0x000298, "Member 'UPowerWidget_C::PowerIconGlow' has a wrong offset!");
static_assert(offsetof(UPowerWidget_C, RatingValue) == 0x0002A0, "Member 'UPowerWidget_C::RatingValue' has a wrong offset!");
static_assert(offsetof(UPowerWidget_C, InterpDuration) == 0x0002A4, "Member 'UPowerWidget_C::InterpDuration' has a wrong offset!");
static_assert(offsetof(UPowerWidget_C, ShowProgress) == 0x0002A8, "Member 'UPowerWidget_C::ShowProgress' has a wrong offset!");
static_assert(offsetof(UPowerWidget_C, CurrentRating) == 0x0002AC, "Member 'UPowerWidget_C::CurrentRating' has a wrong offset!");
static_assert(offsetof(UPowerWidget_C, cParty) == 0x0002B0, "Member 'UPowerWidget_C::cParty' has a wrong offset!");
static_assert(offsetof(UPowerWidget_C, cSolo) == 0x0002C0, "Member 'UPowerWidget_C::cSolo' has a wrong offset!");
static_assert(offsetof(UPowerWidget_C, LocalPlayerWidget) == 0x0002D0, "Member 'UPowerWidget_C::LocalPlayerWidget' has a wrong offset!");
static_assert(offsetof(UPowerWidget_C, Power_Increased) == 0x0002D8, "Member 'UPowerWidget_C::Power_Increased' has a wrong offset!");
static_assert(offsetof(UPowerWidget_C, Previously_Had_Teammates) == 0x0002E8, "Member 'UPowerWidget_C::Previously_Had_Teammates' has a wrong offset!");
static_assert(offsetof(UPowerWidget_C, Power_Increased_Sound) == 0x0002F0, "Member 'UPowerWidget_C::Power_Increased_Sound' has a wrong offset!");

}

#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaSpectatorHUD

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaSpectatorHUD.AthenaSpectatorHUD_C
// 0x0180 (0x0580 - 0x0400)
class UAthenaSpectatorHUD_C final : public UAthenaHUDBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0400(0x0008)(Transient, DuplicateTransient)
	class UFortActorCanvas*                       _Actor_Canvas__Indicators;                         // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         _Horizontal_Box__Top_Right_Content;                // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               _Overlay__Camera_Mode_Content;                     // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               _Overlay__Cursor_Mode_Content;                     // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               _Overlay__Persistent_HUD_Content;                  // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        _Switcher__CursorModeContent;                      // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        _Switcher__Mode_Content;                           // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           _Vertical_Box__Top_Left_Content;                   // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           _Vertical_Box__Top_Right_Content;                  // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCompass_C*                       AthenaCompass;                                     // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaGamePhaseWidget_C*               AthenaGamePhaseWidget;                             // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaKillFeedWidget_C*                AthenaKillFeedWidget;                              // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBottomBarWidget_C*                     BottomBarWidget;                                   // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_FortLiveStreamGrantWindowExpires_C* BP_FortLiveStreamGrantWindowExpires;               // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               CursorModeContent;                                 // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaGameOverScreen_C*                GameOverScreen;                                    // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaGamePhaseChangeWidget_C*         GamePhaseAlert;                                    // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                       InvalidationBoxBottomLeft;                         // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                       InvalidationBoxCameraMode;                         // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                       InvalidationBoxCenterPopup;                        // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaLocalPlayerHitPointInfo_C*       LocalPlayerHitPointInfo;                           // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetStack*                     MainContentStack;                                  // 0x04B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaMinimapContainer_C*              MinimapContainer;                                  // 0x04B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OverlayIndicatorContent;                           // 0x04C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPopupCenterMessageWidget_C*            PopupCenterMessageWidget;                          // 0x04C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URadialPicker_C*                        RadialPicker;                                      // 0x04D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UReticle_C*                             Reticle;                                           // 0x04D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USubtitles_C*                           Subtitles;                                         // 0x04E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortActorCanvas*                       TeamMembersActorCanvas;                            // 0x04E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTopBar_C*                              TopBar;                                            // 0x04F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBoxMissionWidgets;                         // 0x04F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBuildWatermark_C*                      Widget_BuildWatermark;                             // 0x0500(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EFortQuickBars                                FocusedQuickbar;                                   // 0x0508(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_509[0x3];                                      // 0x0509(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              UnfocusedQuickbarScale;                            // 0x050C(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CursorModeEnabled;                                 // 0x0514(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ZoneCompleted;                                     // 0x0515(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_516[0x2];                                      // 0x0516(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UInterestIndicatorWidget_C*>     AvailableInterestIndicators;                       // 0x0518(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UInterestIndicatorWidget_C*>     ActiveInterestIndicators;                          // 0x0528(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FText                                   PlayerLeft;                                        // 0x0538(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   KillsPrefix;                                       // 0x0550(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UAthenaTeamMemberIndicator_C*>   TeamMemberIndicators;                              // 0x0568(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UWidgetSwitcher*                        _Switcher__CursorModeContent_0;                    // 0x0578(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AthenaSpectatorHUD(int32 EntryPoint);
	void GamePhaseChanged(EAthenaGamePhase GamePhase);
	void ShowGameOverLayer();
	void On_Team_Won();
	void OnUnableToPerformAction(const struct FGameplayTagContainer& FailedReason, const class FText& FailureText);
	void HandleRevived();
	void OnRevived();
	void On_Player_Won();
	void PrepareToShowEndGameUI();
	void On_Player_Died(const struct FFortPlayerDeathReport& DeathReport);
	void Prepare_Game_Over();
	void BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_13_StreamTimerStarted__DelegateSignature();
	void BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_8_StreamTimerExpired__DelegateSignature();
	void HandleInputMethodChanged(bool UsingGamepad);
	void Destruct();
	void PushContentWidgetInternal(class UWidget* Widget, const struct FContentPushState& State);
	void Construct();
	void OnEnterState(EFortUIState PreviousUIState);
	void QuestsCompleted(const TArray<class UFortQuestItem*>& Quests);
	void OnConfirmed_96D6B69B40224C661B08D9B34525EE86();
	void OnDeclined_96D6B69B40224C661B08D9B34525EE86();
	void HandleCursorModeChanged(bool IsEnabled, class FName ActionName, class UUserWidget* CursorModeContentCustomWidget);
	void OnHandleAction(struct FEventReply* Result, bool* bPassThrough);
	void HandleKeybindsChanged();
	void OnPlayerTargetingChanged(bool IsTargeting);
	void SetCursorModeContent(class UUserWidget* CustomWidget, class FName& ActionName);
	void HandleIndicatorModeChanged(bool InidicatorsEnabled);
	void SetPersistentHUDContentVisibility(bool Visible);
	void ToggleChat(bool Show);
	void ToggleTopLevelMenu(bool Show);
	void HandleFocusChat();
	void ShowPicker(EFortPickerMode Mode, int32 InitialOption, bool IgnoreFirstAccept);
	void HandleOnPointOfInterestAdded(class AActor* PointOfInterest, const class FText& DisplayText, class UTexture2D* DisplayImage);
	void HandleOnPointOfInterestRemoved(class AActor* PointOfInterest);
	void CreateInterestIndicatorWidget();
	class UWidget* PopContentWidgetInternal(const struct FContentPushState& State);
	void OnHUDElementVisibilityChanged(struct FGameplayTagContainer& HiddenHUDElementTags);
	void CheckHUDElementVisibility(struct FGameplayTagContainer& HiddenHUDElementTags, const struct FGameplayTag& HUDElementTagToCheck, class UWidget*& HUDElement);
	void AddTeamMemberIndicator(class AFortPlayerStateAthena* Player_State, int32 Team_Member_Index);
	void SetupCameraMode();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaSpectatorHUD_C">();
	}
	static class UAthenaSpectatorHUD_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaSpectatorHUD_C>();
	}
};
static_assert(alignof(UAthenaSpectatorHUD_C) == 0x000008, "Wrong alignment on UAthenaSpectatorHUD_C");
static_assert(sizeof(UAthenaSpectatorHUD_C) == 0x000580, "Wrong size on UAthenaSpectatorHUD_C");
static_assert(offsetof(UAthenaSpectatorHUD_C, UberGraphFrame) == 0x000400, "Member 'UAthenaSpectatorHUD_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, _Actor_Canvas__Indicators) == 0x000408, "Member 'UAthenaSpectatorHUD_C::_Actor_Canvas__Indicators' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, _Horizontal_Box__Top_Right_Content) == 0x000410, "Member 'UAthenaSpectatorHUD_C::_Horizontal_Box__Top_Right_Content' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, _Overlay__Camera_Mode_Content) == 0x000418, "Member 'UAthenaSpectatorHUD_C::_Overlay__Camera_Mode_Content' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, _Overlay__Cursor_Mode_Content) == 0x000420, "Member 'UAthenaSpectatorHUD_C::_Overlay__Cursor_Mode_Content' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, _Overlay__Persistent_HUD_Content) == 0x000428, "Member 'UAthenaSpectatorHUD_C::_Overlay__Persistent_HUD_Content' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, _Switcher__CursorModeContent) == 0x000430, "Member 'UAthenaSpectatorHUD_C::_Switcher__CursorModeContent' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, _Switcher__Mode_Content) == 0x000438, "Member 'UAthenaSpectatorHUD_C::_Switcher__Mode_Content' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, _Vertical_Box__Top_Left_Content) == 0x000440, "Member 'UAthenaSpectatorHUD_C::_Vertical_Box__Top_Left_Content' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, _Vertical_Box__Top_Right_Content) == 0x000448, "Member 'UAthenaSpectatorHUD_C::_Vertical_Box__Top_Right_Content' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, AthenaCompass) == 0x000450, "Member 'UAthenaSpectatorHUD_C::AthenaCompass' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, AthenaGamePhaseWidget) == 0x000458, "Member 'UAthenaSpectatorHUD_C::AthenaGamePhaseWidget' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, AthenaKillFeedWidget) == 0x000460, "Member 'UAthenaSpectatorHUD_C::AthenaKillFeedWidget' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, BottomBarWidget) == 0x000468, "Member 'UAthenaSpectatorHUD_C::BottomBarWidget' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, BP_FortLiveStreamGrantWindowExpires) == 0x000470, "Member 'UAthenaSpectatorHUD_C::BP_FortLiveStreamGrantWindowExpires' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, CursorModeContent) == 0x000478, "Member 'UAthenaSpectatorHUD_C::CursorModeContent' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, GameOverScreen) == 0x000480, "Member 'UAthenaSpectatorHUD_C::GameOverScreen' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, GamePhaseAlert) == 0x000488, "Member 'UAthenaSpectatorHUD_C::GamePhaseAlert' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, InvalidationBoxBottomLeft) == 0x000490, "Member 'UAthenaSpectatorHUD_C::InvalidationBoxBottomLeft' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, InvalidationBoxCameraMode) == 0x000498, "Member 'UAthenaSpectatorHUD_C::InvalidationBoxCameraMode' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, InvalidationBoxCenterPopup) == 0x0004A0, "Member 'UAthenaSpectatorHUD_C::InvalidationBoxCenterPopup' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, LocalPlayerHitPointInfo) == 0x0004A8, "Member 'UAthenaSpectatorHUD_C::LocalPlayerHitPointInfo' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, MainContentStack) == 0x0004B0, "Member 'UAthenaSpectatorHUD_C::MainContentStack' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, MinimapContainer) == 0x0004B8, "Member 'UAthenaSpectatorHUD_C::MinimapContainer' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, OverlayIndicatorContent) == 0x0004C0, "Member 'UAthenaSpectatorHUD_C::OverlayIndicatorContent' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, PopupCenterMessageWidget) == 0x0004C8, "Member 'UAthenaSpectatorHUD_C::PopupCenterMessageWidget' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, RadialPicker) == 0x0004D0, "Member 'UAthenaSpectatorHUD_C::RadialPicker' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, Reticle) == 0x0004D8, "Member 'UAthenaSpectatorHUD_C::Reticle' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, Subtitles) == 0x0004E0, "Member 'UAthenaSpectatorHUD_C::Subtitles' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, TeamMembersActorCanvas) == 0x0004E8, "Member 'UAthenaSpectatorHUD_C::TeamMembersActorCanvas' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, TopBar) == 0x0004F0, "Member 'UAthenaSpectatorHUD_C::TopBar' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, VerticalBoxMissionWidgets) == 0x0004F8, "Member 'UAthenaSpectatorHUD_C::VerticalBoxMissionWidgets' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, Widget_BuildWatermark) == 0x000500, "Member 'UAthenaSpectatorHUD_C::Widget_BuildWatermark' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, FocusedQuickbar) == 0x000508, "Member 'UAthenaSpectatorHUD_C::FocusedQuickbar' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, UnfocusedQuickbarScale) == 0x00050C, "Member 'UAthenaSpectatorHUD_C::UnfocusedQuickbarScale' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, CursorModeEnabled) == 0x000514, "Member 'UAthenaSpectatorHUD_C::CursorModeEnabled' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, ZoneCompleted) == 0x000515, "Member 'UAthenaSpectatorHUD_C::ZoneCompleted' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, AvailableInterestIndicators) == 0x000518, "Member 'UAthenaSpectatorHUD_C::AvailableInterestIndicators' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, ActiveInterestIndicators) == 0x000528, "Member 'UAthenaSpectatorHUD_C::ActiveInterestIndicators' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, PlayerLeft) == 0x000538, "Member 'UAthenaSpectatorHUD_C::PlayerLeft' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, KillsPrefix) == 0x000550, "Member 'UAthenaSpectatorHUD_C::KillsPrefix' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, TeamMemberIndicators) == 0x000568, "Member 'UAthenaSpectatorHUD_C::TeamMemberIndicators' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, _Switcher__CursorModeContent_0) == 0x000578, "Member 'UAthenaSpectatorHUD_C::_Switcher__CursorModeContent_0' has a wrong offset!");

}


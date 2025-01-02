#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LoginResultWIdget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LoginResultWIdget.LoginResultWIdget_C
// 0x0038 (0x0418 - 0x03E0)
class ULoginResultWIdget_C final : public UCommonActivatablePanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03E0(0x0008)(Transient, DuplicateTransient)
	class UCommonLazyImage*                       CommonLazyImage_0;                                 // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      ContinueButton;                                    // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       DescriptionText;                                   // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TitleText;                                         // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   OnResultConfirmed;                                 // 0x0408(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_LoginResultWIdget(int32 EntryPoint);
	void Construct();
	void BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void SetTitle(const class FText& Title, bool bShowError);
	void SetDescription(const class FText& Description);
	void SetResultsData(const class FText& Title, bool bShowError, const class FText& Description);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LoginResultWIdget_C">();
	}
	static class ULoginResultWIdget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULoginResultWIdget_C>();
	}
};
static_assert(alignof(ULoginResultWIdget_C) == 0x000008, "Wrong alignment on ULoginResultWIdget_C");
static_assert(sizeof(ULoginResultWIdget_C) == 0x000418, "Wrong size on ULoginResultWIdget_C");
static_assert(offsetof(ULoginResultWIdget_C, UberGraphFrame) == 0x0003E0, "Member 'ULoginResultWIdget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULoginResultWIdget_C, CommonLazyImage_0) == 0x0003E8, "Member 'ULoginResultWIdget_C::CommonLazyImage_0' has a wrong offset!");
static_assert(offsetof(ULoginResultWIdget_C, ContinueButton) == 0x0003F0, "Member 'ULoginResultWIdget_C::ContinueButton' has a wrong offset!");
static_assert(offsetof(ULoginResultWIdget_C, DescriptionText) == 0x0003F8, "Member 'ULoginResultWIdget_C::DescriptionText' has a wrong offset!");
static_assert(offsetof(ULoginResultWIdget_C, TitleText) == 0x000400, "Member 'ULoginResultWIdget_C::TitleText' has a wrong offset!");
static_assert(offsetof(ULoginResultWIdget_C, OnResultConfirmed) == 0x000408, "Member 'ULoginResultWIdget_C::OnResultConfirmed' has a wrong offset!");

}

#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaDirectAcquisitionOfferPurchasedWidget

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaDirectAcquisitionOfferPurchasedWidget.AthenaDirectAcquisitionOfferPurchasedWidget_C
// 0x0030 (0x0440 - 0x0410)
class UAthenaDirectAcquisitionOfferPurchasedWidget_C final : public UFortDirectAcquisitionOfferDetailsWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0410(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 ImageRarityFlare;                                  // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                 ItemCard;                                          // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RarityGlow;                                        // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextName;                                          // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          CanPurchase;                                       // 0x0438(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedWidget(int32 EntryPoint);
	void Construct();
	void OnActivated();
	void OnOfferSet();
	void UpdateFromOffer();
	void HandleBack(bool* PassThrough);
	void PopScreen();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaDirectAcquisitionOfferPurchasedWidget_C">();
	}
	static class UAthenaDirectAcquisitionOfferPurchasedWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaDirectAcquisitionOfferPurchasedWidget_C>();
	}
};
static_assert(alignof(UAthenaDirectAcquisitionOfferPurchasedWidget_C) == 0x000008, "Wrong alignment on UAthenaDirectAcquisitionOfferPurchasedWidget_C");
static_assert(sizeof(UAthenaDirectAcquisitionOfferPurchasedWidget_C) == 0x000440, "Wrong size on UAthenaDirectAcquisitionOfferPurchasedWidget_C");
static_assert(offsetof(UAthenaDirectAcquisitionOfferPurchasedWidget_C, UberGraphFrame) == 0x000410, "Member 'UAthenaDirectAcquisitionOfferPurchasedWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferPurchasedWidget_C, ImageRarityFlare) == 0x000418, "Member 'UAthenaDirectAcquisitionOfferPurchasedWidget_C::ImageRarityFlare' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferPurchasedWidget_C, ItemCard) == 0x000420, "Member 'UAthenaDirectAcquisitionOfferPurchasedWidget_C::ItemCard' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferPurchasedWidget_C, RarityGlow) == 0x000428, "Member 'UAthenaDirectAcquisitionOfferPurchasedWidget_C::RarityGlow' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferPurchasedWidget_C, TextName) == 0x000430, "Member 'UAthenaDirectAcquisitionOfferPurchasedWidget_C::TextName' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferPurchasedWidget_C, CanPurchase) == 0x000438, "Member 'UAthenaDirectAcquisitionOfferPurchasedWidget_C::CanPurchase' has a wrong offset!");

}

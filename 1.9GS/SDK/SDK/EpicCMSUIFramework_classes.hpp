#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EpicCMSUIFramework

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "CommonUI_classes.hpp"
#include "EpicCMSUIFramework_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// Class EpicCMSUIFramework.EpicCMSScreenBase
// 0x0078 (0x0458 - 0x03E0)
#pragma pack(push, 0x1)
class alignas(0x08) UEpicCMSScreenBase : public UCommonActivatablePanel
{
public:
	class FString                                 TileSetFieldName;                                  // 0x03E0(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UDataTable>              TileTypeToTileClassDataTable;                      // 0x03F0(0x0020)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftClassPtr<class UClass>                   LayoutErrorClass;                                  // 0x0410(0x0020)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UDataTable>              LayoutTypeToLayoutClassDataTable;                  // 0x0430(0x0020)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_450[0x8];                                      // 0x0450(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EpicCMSScreenBase">();
	}
	static class UEpicCMSScreenBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEpicCMSScreenBase>();
	}
};
#pragma pack(pop)
static_assert(alignof(UEpicCMSScreenBase) == 0x000008, "Wrong alignment on UEpicCMSScreenBase");
static_assert(sizeof(UEpicCMSScreenBase) == 0x000458, "Wrong size on UEpicCMSScreenBase");
static_assert(offsetof(UEpicCMSScreenBase, TileSetFieldName) == 0x0003E0, "Member 'UEpicCMSScreenBase::TileSetFieldName' has a wrong offset!");
static_assert(offsetof(UEpicCMSScreenBase, TileTypeToTileClassDataTable) == 0x0003F0, "Member 'UEpicCMSScreenBase::TileTypeToTileClassDataTable' has a wrong offset!");
static_assert(offsetof(UEpicCMSScreenBase, LayoutErrorClass) == 0x000410, "Member 'UEpicCMSScreenBase::LayoutErrorClass' has a wrong offset!");
static_assert(offsetof(UEpicCMSScreenBase, LayoutTypeToLayoutClassDataTable) == 0x000430, "Member 'UEpicCMSScreenBase::LayoutTypeToLayoutClassDataTable' has a wrong offset!");

// Class EpicCMSUIFramework.EpicCMSImage
// 0x0018 (0x0258 - 0x0240)
class UEpicCMSImage final : public UCommonLazyImage
{
public:
	uint8                                         Pad_240[0x10];                                     // 0x0240(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bDownloadingExternalMedia;                         // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_251[0x7];                                      // 0x0251(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EpicCMSImage">();
	}
	static class UEpicCMSImage* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEpicCMSImage>();
	}
};
static_assert(alignof(UEpicCMSImage) == 0x000008, "Wrong alignment on UEpicCMSImage");
static_assert(sizeof(UEpicCMSImage) == 0x000258, "Wrong size on UEpicCMSImage");
static_assert(offsetof(UEpicCMSImage, bDownloadingExternalMedia) == 0x000250, "Member 'UEpicCMSImage::bDownloadingExternalMedia' has a wrong offset!");

// Class EpicCMSUIFramework.EpicCMSTileBase
// 0x0118 (0x09B8 - 0x08A0)
class UEpicCMSTileBase final : public UCommonButton
{
public:
	uint8                                         Pad_8A0[0x8];                                      // 0x08A0(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UCommonTextStyle>           DefaultTitleTextStyle;                             // 0x08A8(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UCommonTextStyle>           FeaturedTitleTextStyle;                            // 0x08B0(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                   Title;                                             // 0x08B8(0x0018)(BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FString                                 Link;                                              // 0x08D0(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bDownloadingExternalMedia;                         // 0x08E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bRefreshingMcpCatalog;                             // 0x08E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_8E2[0xB6];                                     // 0x08E2(0x00B6)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonLazyImage*                       LazyImage_Icon;                                    // 0x0998(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                       TitleTextBlock;                                    // 0x09A0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                       SubtitleTextBlock;                                 // 0x09A8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                       EyebrowTextBlock;                                  // 0x09B0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	void DynamicHandleIconLoadingStateChanged(bool bIsLoading);
	void Launch();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EpicCMSTileBase">();
	}
	static class UEpicCMSTileBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEpicCMSTileBase>();
	}
};
static_assert(alignof(UEpicCMSTileBase) == 0x000008, "Wrong alignment on UEpicCMSTileBase");
static_assert(sizeof(UEpicCMSTileBase) == 0x0009B8, "Wrong size on UEpicCMSTileBase");
static_assert(offsetof(UEpicCMSTileBase, DefaultTitleTextStyle) == 0x0008A8, "Member 'UEpicCMSTileBase::DefaultTitleTextStyle' has a wrong offset!");
static_assert(offsetof(UEpicCMSTileBase, FeaturedTitleTextStyle) == 0x0008B0, "Member 'UEpicCMSTileBase::FeaturedTitleTextStyle' has a wrong offset!");
static_assert(offsetof(UEpicCMSTileBase, Title) == 0x0008B8, "Member 'UEpicCMSTileBase::Title' has a wrong offset!");
static_assert(offsetof(UEpicCMSTileBase, Link) == 0x0008D0, "Member 'UEpicCMSTileBase::Link' has a wrong offset!");
static_assert(offsetof(UEpicCMSTileBase, bDownloadingExternalMedia) == 0x0008E0, "Member 'UEpicCMSTileBase::bDownloadingExternalMedia' has a wrong offset!");
static_assert(offsetof(UEpicCMSTileBase, bRefreshingMcpCatalog) == 0x0008E1, "Member 'UEpicCMSTileBase::bRefreshingMcpCatalog' has a wrong offset!");
static_assert(offsetof(UEpicCMSTileBase, LazyImage_Icon) == 0x000998, "Member 'UEpicCMSTileBase::LazyImage_Icon' has a wrong offset!");
static_assert(offsetof(UEpicCMSTileBase, TitleTextBlock) == 0x0009A0, "Member 'UEpicCMSTileBase::TitleTextBlock' has a wrong offset!");
static_assert(offsetof(UEpicCMSTileBase, SubtitleTextBlock) == 0x0009A8, "Member 'UEpicCMSTileBase::SubtitleTextBlock' has a wrong offset!");
static_assert(offsetof(UEpicCMSTileBase, EyebrowTextBlock) == 0x0009B0, "Member 'UEpicCMSTileBase::EyebrowTextBlock' has a wrong offset!");

// Class EpicCMSUIFramework.EpicCMSLayoutBase
// 0x0068 (0x0298 - 0x0230)
class UEpicCMSLayoutBase final : public UUserWidget
{
public:
	TArray<struct FSlotDescription>               CarouselSlotDescriptions;                          // 0x0230(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TSubclassOf<class UEpicCMSTileCarousel>       CarouselClass;                                     // 0x0240(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_248[0x50];                                     // 0x0248(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EpicCMSLayoutBase">();
	}
	static class UEpicCMSLayoutBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEpicCMSLayoutBase>();
	}
};
static_assert(alignof(UEpicCMSLayoutBase) == 0x000008, "Wrong alignment on UEpicCMSLayoutBase");
static_assert(sizeof(UEpicCMSLayoutBase) == 0x000298, "Wrong size on UEpicCMSLayoutBase");
static_assert(offsetof(UEpicCMSLayoutBase, CarouselSlotDescriptions) == 0x000230, "Member 'UEpicCMSLayoutBase::CarouselSlotDescriptions' has a wrong offset!");
static_assert(offsetof(UEpicCMSLayoutBase, CarouselClass) == 0x000240, "Member 'UEpicCMSLayoutBase::CarouselClass' has a wrong offset!");

// Class EpicCMSUIFramework.EpicCMSManager
// 0x00B8 (0x00E0 - 0x0028)
class UEpicCMSManager final : public UObject
{
public:
	uint8                                         Pad_28[0x78];                                      // 0x0028(0x0078)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CmsEndpointOverride;                               // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bRefreshing;                                       // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_B1[0x2F];                                      // 0x00B1(0x002F)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EpicCMSManager">();
	}
	static class UEpicCMSManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEpicCMSManager>();
	}
};
static_assert(alignof(UEpicCMSManager) == 0x000008, "Wrong alignment on UEpicCMSManager");
static_assert(sizeof(UEpicCMSManager) == 0x0000E0, "Wrong size on UEpicCMSManager");
static_assert(offsetof(UEpicCMSManager, CmsEndpointOverride) == 0x0000A0, "Member 'UEpicCMSManager::CmsEndpointOverride' has a wrong offset!");
static_assert(offsetof(UEpicCMSManager, bRefreshing) == 0x0000B0, "Member 'UEpicCMSManager::bRefreshing' has a wrong offset!");

// Class EpicCMSUIFramework.EpicCMSTileCarousel
// 0x0050 (0x0280 - 0x0230)
class UEpicCMSTileCarousel final : public UUserWidget
{
public:
	struct FSlateSound                            PreviousButtonSound;                               // 0x0230(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FSlateSound                            NextButtonSound;                                   // 0x0248(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UCommonWidgetCarousel*                  Carousel;                                          // 0x0260(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                                NextPageButton;                                    // 0x0268(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                                PreviousPageButton;                                // 0x0270(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bShouldShowNavigationOnlyOnHover;                  // 0x0278(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bIsShowingNavigation;                              // 0x0279(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_27A[0x6];                                      // 0x027A(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void HandleTilePageAdded(class UWidget* TileWidget);
	void NavigationVisibilityChanged(bool bShowNavigation);
	void NextPage();
	void PreviousPage();
	void SetCurrentPageByIndex(const int32 PageIndex);

	int32 GetCurrentPageIndex() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EpicCMSTileCarousel">();
	}
	static class UEpicCMSTileCarousel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEpicCMSTileCarousel>();
	}
};
static_assert(alignof(UEpicCMSTileCarousel) == 0x000008, "Wrong alignment on UEpicCMSTileCarousel");
static_assert(sizeof(UEpicCMSTileCarousel) == 0x000280, "Wrong size on UEpicCMSTileCarousel");
static_assert(offsetof(UEpicCMSTileCarousel, PreviousButtonSound) == 0x000230, "Member 'UEpicCMSTileCarousel::PreviousButtonSound' has a wrong offset!");
static_assert(offsetof(UEpicCMSTileCarousel, NextButtonSound) == 0x000248, "Member 'UEpicCMSTileCarousel::NextButtonSound' has a wrong offset!");
static_assert(offsetof(UEpicCMSTileCarousel, Carousel) == 0x000260, "Member 'UEpicCMSTileCarousel::Carousel' has a wrong offset!");
static_assert(offsetof(UEpicCMSTileCarousel, NextPageButton) == 0x000268, "Member 'UEpicCMSTileCarousel::NextPageButton' has a wrong offset!");
static_assert(offsetof(UEpicCMSTileCarousel, PreviousPageButton) == 0x000270, "Member 'UEpicCMSTileCarousel::PreviousPageButton' has a wrong offset!");
static_assert(offsetof(UEpicCMSTileCarousel, bShouldShowNavigationOnlyOnHover) == 0x000278, "Member 'UEpicCMSTileCarousel::bShouldShowNavigationOnlyOnHover' has a wrong offset!");
static_assert(offsetof(UEpicCMSTileCarousel, bIsShowingNavigation) == 0x000279, "Member 'UEpicCMSTileCarousel::bIsShowingNavigation' has a wrong offset!");

}

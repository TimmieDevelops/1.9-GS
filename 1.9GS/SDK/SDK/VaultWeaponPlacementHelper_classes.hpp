#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VaultWeaponPlacementHelper

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C
// 0x0060 (0x03E8 - 0x0388)
class AVaultWeaponPlacementHelper_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0388(0x0008)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Cube;                                              // 0x0390(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               PS_NoPlayer_Sparkle;                               // 0x0398(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               PS_NoPlayer_Swirl02;                               // 0x03A0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               PS_NoPlayer_Swirl01;                               // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   CharacterPlacement;                                // 0x03B0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x03B8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         PlayerID;                                          // 0x03C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C4[0x4];                                      // 0x03C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMesh*                            Mesh;                                              // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsPlayerSelected;                                 // 0x03D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D1[0x7];                                      // 0x03D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	UMulticastDelegateProperty_                   NewEventDispatcher_0;                              // 0x03D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_VaultWeaponPlacementHelper(int32 EntryPoint);
	void ItemRez();
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void OnLobbyPlayerHovered(int32 PlayerIndex);
	void OnLobbyPlayerSelected(int32 PlayerIndex);
	void InitializeContextEvents();
	void Initialize();
	void OnLobbyStarted();
	void OnFrontEndCameraChanged(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera);
	void OnTeamMemberAdded(const struct FFortTeamMemberInfo& TeamMemberInfo);
	void OnTeamMemberRemoved(int32 TeamMemberInfo);
	void OnTeamMemberStateChanged(const struct FFortTeamMemberInfo& TeamMemberInfo);
	void GetFrontendAnimInstance();
	void OnLobbyPlayerUnhovered(int32 PlayerIndex);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VaultWeaponPlacementHelper_C">();
	}
	static class AVaultWeaponPlacementHelper_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AVaultWeaponPlacementHelper_C>();
	}
};
static_assert(alignof(AVaultWeaponPlacementHelper_C) == 0x000008, "Wrong alignment on AVaultWeaponPlacementHelper_C");
static_assert(sizeof(AVaultWeaponPlacementHelper_C) == 0x0003E8, "Wrong size on AVaultWeaponPlacementHelper_C");
static_assert(offsetof(AVaultWeaponPlacementHelper_C, UberGraphFrame) == 0x000388, "Member 'AVaultWeaponPlacementHelper_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AVaultWeaponPlacementHelper_C, Cube) == 0x000390, "Member 'AVaultWeaponPlacementHelper_C::Cube' has a wrong offset!");
static_assert(offsetof(AVaultWeaponPlacementHelper_C, PS_NoPlayer_Sparkle) == 0x000398, "Member 'AVaultWeaponPlacementHelper_C::PS_NoPlayer_Sparkle' has a wrong offset!");
static_assert(offsetof(AVaultWeaponPlacementHelper_C, PS_NoPlayer_Swirl02) == 0x0003A0, "Member 'AVaultWeaponPlacementHelper_C::PS_NoPlayer_Swirl02' has a wrong offset!");
static_assert(offsetof(AVaultWeaponPlacementHelper_C, PS_NoPlayer_Swirl01) == 0x0003A8, "Member 'AVaultWeaponPlacementHelper_C::PS_NoPlayer_Swirl01' has a wrong offset!");
static_assert(offsetof(AVaultWeaponPlacementHelper_C, CharacterPlacement) == 0x0003B0, "Member 'AVaultWeaponPlacementHelper_C::CharacterPlacement' has a wrong offset!");
static_assert(offsetof(AVaultWeaponPlacementHelper_C, Root) == 0x0003B8, "Member 'AVaultWeaponPlacementHelper_C::Root' has a wrong offset!");
static_assert(offsetof(AVaultWeaponPlacementHelper_C, PlayerID) == 0x0003C0, "Member 'AVaultWeaponPlacementHelper_C::PlayerID' has a wrong offset!");
static_assert(offsetof(AVaultWeaponPlacementHelper_C, Mesh) == 0x0003C8, "Member 'AVaultWeaponPlacementHelper_C::Mesh' has a wrong offset!");
static_assert(offsetof(AVaultWeaponPlacementHelper_C, bIsPlayerSelected) == 0x0003D0, "Member 'AVaultWeaponPlacementHelper_C::bIsPlayerSelected' has a wrong offset!");
static_assert(offsetof(AVaultWeaponPlacementHelper_C, NewEventDispatcher_0) == 0x0003D8, "Member 'AVaultWeaponPlacementHelper_C::NewEventDispatcher_0' has a wrong offset!");

}

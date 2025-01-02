#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BluGlo_Node

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BluGlo_Node.BluGlo_Node_C
// 0x00E0 (0x10B0 - 0x0FD0)
class ABluGlo_Node_C final : public ABuildingProp
{
public:
	uint8                                         Pad_FC8[0x8];                                      // 0x0FC8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0FD0(0x0008)(Transient, DuplicateTransient)
	class UPointLightComponent*                   bluLight;                                          // 0x0FD8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               IdleParticles;                                     // 0x0FE0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   bluglomesh;                                        // 0x0FE8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Fort_BluGlo_loop_AudioComponent;                   // 0x0FF0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortMiniMapComponent*                  FortMiniMap;                                       // 0x0FF8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               BluGloSpawnparticle;                               // 0x1000(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Trail_HorizontalMovement_EEEFB2FD467DE31D5FDEDEA006F5C10F; // 0x1008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Trail_VerticalMovement_EEEFB2FD467DE31D5FDEDEA006F5C10F; // 0x100C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Trail__Direction_EEEFB2FD467DE31D5FDEDEA006F5C10F; // 0x1010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1011[0x7];                                     // 0x1011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Trail;                                             // 0x1018(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ActivateEffects;                                   // 0x1020(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                          DeActivateEffects;                                 // 0x1021(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                          CanInteract;                                       // 0x1022(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                         Pad_1023[0x5];                                     // 0x1023(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   BluGloQuantity;                                    // 0x1028(0x0018)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	class AFortPawn*                              NewVar;                                            // 0x1040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                StartLocation;                                     // 0x1048(0x000C)(Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1054[0x4];                                     // 0x1054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               TrailEffect;                                       // 0x1058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Sound_BluGloLoop;                                  // 0x1060(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               RandomSpawnRotation;                               // 0x1068(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1074[0x4];                                     // 0x1074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABluGlow_MorphAnimation_C*              BlugloRef;                                         // 0x1078(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackEffect*                   PickupForceFeedback;                               // 0x1080(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortWorldItemDefinition*               BlugloItemDef;                                     // 0x1088(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CollectText;                                       // 0x1090(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BluGlo_Node(int32 EntryPoint);
	void ShowSpawnTrail(const struct FVector& StartLocation_0, float AnimDelay);
	void HandleMissionEvent_LocateBluGlo(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params_0, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, const class UDataAsset* EventContent, class AActor* EventInstigator, int32 GenericInt, float GenericFloat, const class FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void BlueprintOnInteract(const class AFortPawn* InteractingPawn);
	void ReceiveBeginPlay();
	void Trail__UpdateFunc();
	void Trail__FinishedFunc();
	void UserConstructionScript();
	void OnRep_ActivateEffects();
	void OnRep_DeActivateEffects();
	void OnRep_CanInteract();

	bool BlueprintCanInteract(const class AFortPawn* InteractingPawn) const;
	class FText BlueprintGetInteractionString(const class AFortPawn* InteractingPawn) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BluGlo_Node_C">();
	}
	static class ABluGlo_Node_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABluGlo_Node_C>();
	}
};
static_assert(alignof(ABluGlo_Node_C) == 0x000010, "Wrong alignment on ABluGlo_Node_C");
static_assert(sizeof(ABluGlo_Node_C) == 0x0010B0, "Wrong size on ABluGlo_Node_C");
static_assert(offsetof(ABluGlo_Node_C, UberGraphFrame) == 0x000FD0, "Member 'ABluGlo_Node_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABluGlo_Node_C, bluLight) == 0x000FD8, "Member 'ABluGlo_Node_C::bluLight' has a wrong offset!");
static_assert(offsetof(ABluGlo_Node_C, IdleParticles) == 0x000FE0, "Member 'ABluGlo_Node_C::IdleParticles' has a wrong offset!");
static_assert(offsetof(ABluGlo_Node_C, bluglomesh) == 0x000FE8, "Member 'ABluGlo_Node_C::bluglomesh' has a wrong offset!");
static_assert(offsetof(ABluGlo_Node_C, Fort_BluGlo_loop_AudioComponent) == 0x000FF0, "Member 'ABluGlo_Node_C::Fort_BluGlo_loop_AudioComponent' has a wrong offset!");
static_assert(offsetof(ABluGlo_Node_C, FortMiniMap) == 0x000FF8, "Member 'ABluGlo_Node_C::FortMiniMap' has a wrong offset!");
static_assert(offsetof(ABluGlo_Node_C, BluGloSpawnparticle) == 0x001000, "Member 'ABluGlo_Node_C::BluGloSpawnparticle' has a wrong offset!");
static_assert(offsetof(ABluGlo_Node_C, Trail_HorizontalMovement_EEEFB2FD467DE31D5FDEDEA006F5C10F) == 0x001008, "Member 'ABluGlo_Node_C::Trail_HorizontalMovement_EEEFB2FD467DE31D5FDEDEA006F5C10F' has a wrong offset!");
static_assert(offsetof(ABluGlo_Node_C, Trail_VerticalMovement_EEEFB2FD467DE31D5FDEDEA006F5C10F) == 0x00100C, "Member 'ABluGlo_Node_C::Trail_VerticalMovement_EEEFB2FD467DE31D5FDEDEA006F5C10F' has a wrong offset!");
static_assert(offsetof(ABluGlo_Node_C, Trail__Direction_EEEFB2FD467DE31D5FDEDEA006F5C10F) == 0x001010, "Member 'ABluGlo_Node_C::Trail__Direction_EEEFB2FD467DE31D5FDEDEA006F5C10F' has a wrong offset!");
static_assert(offsetof(ABluGlo_Node_C, Trail) == 0x001018, "Member 'ABluGlo_Node_C::Trail' has a wrong offset!");
static_assert(offsetof(ABluGlo_Node_C, ActivateEffects) == 0x001020, "Member 'ABluGlo_Node_C::ActivateEffects' has a wrong offset!");
static_assert(offsetof(ABluGlo_Node_C, DeActivateEffects) == 0x001021, "Member 'ABluGlo_Node_C::DeActivateEffects' has a wrong offset!");
static_assert(offsetof(ABluGlo_Node_C, CanInteract) == 0x001022, "Member 'ABluGlo_Node_C::CanInteract' has a wrong offset!");
static_assert(offsetof(ABluGlo_Node_C, BluGloQuantity) == 0x001028, "Member 'ABluGlo_Node_C::BluGloQuantity' has a wrong offset!");
static_assert(offsetof(ABluGlo_Node_C, NewVar) == 0x001040, "Member 'ABluGlo_Node_C::NewVar' has a wrong offset!");
static_assert(offsetof(ABluGlo_Node_C, StartLocation) == 0x001048, "Member 'ABluGlo_Node_C::StartLocation' has a wrong offset!");
static_assert(offsetof(ABluGlo_Node_C, TrailEffect) == 0x001058, "Member 'ABluGlo_Node_C::TrailEffect' has a wrong offset!");
static_assert(offsetof(ABluGlo_Node_C, Sound_BluGloLoop) == 0x001060, "Member 'ABluGlo_Node_C::Sound_BluGloLoop' has a wrong offset!");
static_assert(offsetof(ABluGlo_Node_C, RandomSpawnRotation) == 0x001068, "Member 'ABluGlo_Node_C::RandomSpawnRotation' has a wrong offset!");
static_assert(offsetof(ABluGlo_Node_C, BlugloRef) == 0x001078, "Member 'ABluGlo_Node_C::BlugloRef' has a wrong offset!");
static_assert(offsetof(ABluGlo_Node_C, PickupForceFeedback) == 0x001080, "Member 'ABluGlo_Node_C::PickupForceFeedback' has a wrong offset!");
static_assert(offsetof(ABluGlo_Node_C, BlugloItemDef) == 0x001088, "Member 'ABluGlo_Node_C::BlugloItemDef' has a wrong offset!");
static_assert(offsetof(ABluGlo_Node_C, CollectText) == 0x001090, "Member 'ABluGlo_Node_C::CollectText' has a wrong offset!");

}

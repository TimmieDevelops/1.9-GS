#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: _WaterMeshBlueprintMaster

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "ListOfWaterComponentsThatTheCharactersInteractingWithByIndex_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C
// 0x00C8 (0x0450 - 0x0388)
#pragma pack(push, 0x1)
class alignas(0x08) A_WaterMeshBlueprintMaster_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0388(0x0008)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                   CollisionMesh1;                                    // 0x0390(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   CollisionMesh2;                                    // 0x0398(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   CollisionMesh4;                                    // 0x03A0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   CollisionMesh3;                                    // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh1;                                       // 0x03B0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         Number_of_Collision_Meshes;                        // 0x03B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3BC[0x4];                                      // 0x03BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        EnterExitWaterSplash_Ripple_Texture_Particle;      // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        EnterExitWaterSplash_Visual_Particle;              // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FlipFlow;                                          // 0x03D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          NoFlow;                                            // 0x03D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D2[0x6];                                      // 0x03D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     FlippedMaterial;                                   // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 Internal_volume_penetration_Counter;               // 0x03E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class APlayerPawn_Generic_C*>          PlayerGenericArray;                                // 0x03F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class UParticleSystemComponent*>       WaterRingArray;                                    // 0x0400(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                         Current_Characters_Personal_Water_Counter;         // 0x0410(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_414[0x4];                                      // 0x0414(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FListOfWaterComponentsThatTheCharactersInteractingWithByIndex> ArrayOfCollisionComponentsPerActor;                // 0x0418(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                          Water_Interactions;                                // 0x0428(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Entering_True_Exiting_False;                       // 0x0429(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_42A[0x6];                                      // 0x042A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerPawn_Generic_C*                  ExternalActor;                                     // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Internal_Mesh;                                     // 0x0438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Continue;                                          // 0x0440(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_441[0x3];                                      // 0x0441(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Minimum_time_between_splashes;                     // 0x0444(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowTestMesh;                                      // 0x0448(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          HasExecutedConstuctionScript;                      // 0x0449(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Is_Deep_Water_Asset_;                              // 0x044A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph__WaterMeshBlueprintMaster(int32 EntryPoint);
	void ReceiveBeginPlay();
	void Construct();
	void BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_69_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_185_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_190_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_196_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_203_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_66_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_211_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_220_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void UserConstructionScript();
	void SetupMeshCollisionVolumes(class UStaticMeshComponent* StaticMeshComponent, int32 Target_Int);
	void Find_Placement_on_water_mesh_surfaces(struct FTransform* Traced_Transform, struct FVector* VelocityVector, bool* Trace_Hit);
	void Handle_Water_Penetration_Components_And_Arrays(bool In_T_Out_F, class AActor* Touching_Actor, class UStaticMeshComponent* Touching_Volume);
	void Construction();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"_WaterMeshBlueprintMaster_C">();
	}
	static class A_WaterMeshBlueprintMaster_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<A_WaterMeshBlueprintMaster_C>();
	}
};
#pragma pack(pop)
static_assert(alignof(A_WaterMeshBlueprintMaster_C) == 0x000008, "Wrong alignment on A_WaterMeshBlueprintMaster_C");
static_assert(sizeof(A_WaterMeshBlueprintMaster_C) == 0x000450, "Wrong size on A_WaterMeshBlueprintMaster_C");
static_assert(offsetof(A_WaterMeshBlueprintMaster_C, UberGraphFrame) == 0x000388, "Member 'A_WaterMeshBlueprintMaster_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(A_WaterMeshBlueprintMaster_C, CollisionMesh1) == 0x000390, "Member 'A_WaterMeshBlueprintMaster_C::CollisionMesh1' has a wrong offset!");
static_assert(offsetof(A_WaterMeshBlueprintMaster_C, CollisionMesh2) == 0x000398, "Member 'A_WaterMeshBlueprintMaster_C::CollisionMesh2' has a wrong offset!");
static_assert(offsetof(A_WaterMeshBlueprintMaster_C, CollisionMesh4) == 0x0003A0, "Member 'A_WaterMeshBlueprintMaster_C::CollisionMesh4' has a wrong offset!");
static_assert(offsetof(A_WaterMeshBlueprintMaster_C, CollisionMesh3) == 0x0003A8, "Member 'A_WaterMeshBlueprintMaster_C::CollisionMesh3' has a wrong offset!");
static_assert(offsetof(A_WaterMeshBlueprintMaster_C, StaticMesh1) == 0x0003B0, "Member 'A_WaterMeshBlueprintMaster_C::StaticMesh1' has a wrong offset!");
static_assert(offsetof(A_WaterMeshBlueprintMaster_C, Number_of_Collision_Meshes) == 0x0003B8, "Member 'A_WaterMeshBlueprintMaster_C::Number_of_Collision_Meshes' has a wrong offset!");
static_assert(offsetof(A_WaterMeshBlueprintMaster_C, EnterExitWaterSplash_Ripple_Texture_Particle) == 0x0003C0, "Member 'A_WaterMeshBlueprintMaster_C::EnterExitWaterSplash_Ripple_Texture_Particle' has a wrong offset!");
static_assert(offsetof(A_WaterMeshBlueprintMaster_C, EnterExitWaterSplash_Visual_Particle) == 0x0003C8, "Member 'A_WaterMeshBlueprintMaster_C::EnterExitWaterSplash_Visual_Particle' has a wrong offset!");
static_assert(offsetof(A_WaterMeshBlueprintMaster_C, FlipFlow) == 0x0003D0, "Member 'A_WaterMeshBlueprintMaster_C::FlipFlow' has a wrong offset!");
static_assert(offsetof(A_WaterMeshBlueprintMaster_C, NoFlow) == 0x0003D1, "Member 'A_WaterMeshBlueprintMaster_C::NoFlow' has a wrong offset!");
static_assert(offsetof(A_WaterMeshBlueprintMaster_C, FlippedMaterial) == 0x0003D8, "Member 'A_WaterMeshBlueprintMaster_C::FlippedMaterial' has a wrong offset!");
static_assert(offsetof(A_WaterMeshBlueprintMaster_C, Internal_volume_penetration_Counter) == 0x0003E0, "Member 'A_WaterMeshBlueprintMaster_C::Internal_volume_penetration_Counter' has a wrong offset!");
static_assert(offsetof(A_WaterMeshBlueprintMaster_C, PlayerGenericArray) == 0x0003F0, "Member 'A_WaterMeshBlueprintMaster_C::PlayerGenericArray' has a wrong offset!");
static_assert(offsetof(A_WaterMeshBlueprintMaster_C, WaterRingArray) == 0x000400, "Member 'A_WaterMeshBlueprintMaster_C::WaterRingArray' has a wrong offset!");
static_assert(offsetof(A_WaterMeshBlueprintMaster_C, Current_Characters_Personal_Water_Counter) == 0x000410, "Member 'A_WaterMeshBlueprintMaster_C::Current_Characters_Personal_Water_Counter' has a wrong offset!");
static_assert(offsetof(A_WaterMeshBlueprintMaster_C, ArrayOfCollisionComponentsPerActor) == 0x000418, "Member 'A_WaterMeshBlueprintMaster_C::ArrayOfCollisionComponentsPerActor' has a wrong offset!");
static_assert(offsetof(A_WaterMeshBlueprintMaster_C, Water_Interactions) == 0x000428, "Member 'A_WaterMeshBlueprintMaster_C::Water_Interactions' has a wrong offset!");
static_assert(offsetof(A_WaterMeshBlueprintMaster_C, Entering_True_Exiting_False) == 0x000429, "Member 'A_WaterMeshBlueprintMaster_C::Entering_True_Exiting_False' has a wrong offset!");
static_assert(offsetof(A_WaterMeshBlueprintMaster_C, ExternalActor) == 0x000430, "Member 'A_WaterMeshBlueprintMaster_C::ExternalActor' has a wrong offset!");
static_assert(offsetof(A_WaterMeshBlueprintMaster_C, Internal_Mesh) == 0x000438, "Member 'A_WaterMeshBlueprintMaster_C::Internal_Mesh' has a wrong offset!");
static_assert(offsetof(A_WaterMeshBlueprintMaster_C, Continue) == 0x000440, "Member 'A_WaterMeshBlueprintMaster_C::Continue' has a wrong offset!");
static_assert(offsetof(A_WaterMeshBlueprintMaster_C, Minimum_time_between_splashes) == 0x000444, "Member 'A_WaterMeshBlueprintMaster_C::Minimum_time_between_splashes' has a wrong offset!");
static_assert(offsetof(A_WaterMeshBlueprintMaster_C, ShowTestMesh) == 0x000448, "Member 'A_WaterMeshBlueprintMaster_C::ShowTestMesh' has a wrong offset!");
static_assert(offsetof(A_WaterMeshBlueprintMaster_C, HasExecutedConstuctionScript) == 0x000449, "Member 'A_WaterMeshBlueprintMaster_C::HasExecutedConstuctionScript' has a wrong offset!");
static_assert(offsetof(A_WaterMeshBlueprintMaster_C, Is_Deep_Water_Asset_) == 0x00044A, "Member 'A_WaterMeshBlueprintMaster_C::Is_Deep_Water_Asset_' has a wrong offset!");

}

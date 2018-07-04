// Unreal Engine 3 (3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE3_UDKBase_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UDKBase.SimpleGame.SetGameType
// (Defined, Event, Static, Public)
// Parameters:
// struct FString                 MapName                        (Parm, NeedCtorLink)
// struct FString                 Options                        (Parm, NeedCtorLink)
// struct FString                 Portal                         (Parm, NeedCtorLink)
// class UClass*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class UClass* ASimpleGame::STATIC_SetGameType(const struct FString& MapName, const struct FString& Options, const struct FString& Portal)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.SimpleGame.SetGameType");

	ASimpleGame_SetGameType_Params params;
	params.MapName = MapName;
	params.Options = Options;
	params.Portal = Portal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.SimpleGame.StripPlayOnPrefix
// (Defined, Static, Public)
// Parameters:
// struct FString                 MapName                        (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString ASimpleGame::STATIC_StripPlayOnPrefix(const struct FString& MapName)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.SimpleGame.StripPlayOnPrefix");

	ASimpleGame_StripPlayOnPrefix_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKBot.DelayedLeaveVehicle
// (Event, Public)

void AUDKBot::DelayedLeaveVehicle()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKBot.DelayedLeaveVehicle");

	AUDKBot_DelayedLeaveVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKBot.DelayedWarning
// (Event, Public)

void AUDKBot::DelayedWarning()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKBot.DelayedWarning");

	AUDKBot_DelayedWarning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKBot.MissedDodge
// (Event, Public)

void AUDKBot::MissedDodge()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKBot.MissedDodge");

	AUDKBot_MissedDodge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKBot.AdjustAimError
// (Event, Public)
// Parameters:
// float                          TargetDist                     (Parm)
// bool                           bInstantProj                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AUDKBot::AdjustAimError(float TargetDist, bool bInstantProj)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKBot.AdjustAimError");

	AUDKBot_AdjustAimError_Params params;
	params.TargetDist = TargetDist;
	params.bInstantProj = bInstantProj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKBot.SuperDesireability
// (Event, Public)
// Parameters:
// class APickupFactory*          P                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AUDKBot::SuperDesireability(class APickupFactory* P)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKBot.SuperDesireability");

	AUDKBot_SuperDesireability_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKBot.SpecialJumpCost
// (Event, Public, HasOutParms)
// Parameters:
// float                          RequiredJumpZ                  (Parm)
// float                          Cost                           (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKBot::SpecialJumpCost(float RequiredJumpZ, float* Cost)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKBot.SpecialJumpCost");

	AUDKBot_SpecialJumpCost_Params params;
	params.RequiredJumpZ = RequiredJumpZ;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cost != nullptr)
		*Cost = params.Cost;

	return params.ReturnValue;
}


// Function UDKBase.UDKBot.MayDodgeToMoveTarget
// (Event, Public)

void AUDKBot::MayDodgeToMoveTarget()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKBot.MayDodgeToMoveTarget");

	AUDKBot_MayDodgeToMoveTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKBot.TimeDJReset
// (Event, Public)

void AUDKBot::TimeDJReset()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKBot.TimeDJReset");

	AUDKBot_TimeDJReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKBot.MonitoredPawnAlert
// (Event, Public)

void AUDKBot::MonitoredPawnAlert()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKBot.MonitoredPawnAlert");

	AUDKBot_MonitoredPawnAlert_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKBot.WhatToDoNext
// (Event, Public)

void AUDKBot::WhatToDoNext()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKBot.WhatToDoNext");

	AUDKBot_WhatToDoNext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKBot.FindBestSuperPickup
// (Native, Public)
// Parameters:
// float                          MaxDist                        (Parm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* AUDKBot::FindBestSuperPickup(float MaxDist)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKBot.FindBestSuperPickup");

	AUDKBot_FindBestSuperPickup_Params params;
	params.MaxDist = MaxDist;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKBot.BuildSquadRoute
// (Final, Native, Public)

void AUDKBot::BuildSquadRoute()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKBot.BuildSquadRoute");

	AUDKBot_BuildSquadRoute_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKBot.FindPathToSquadRoute
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// bool                           bWeightDetours                 (OptionalParm, Parm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* AUDKBot::FindPathToSquadRoute(bool bWeightDetours)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKBot.FindPathToSquadRoute");

	AUDKBot_FindPathToSquadRoute_Params params;
	params.bWeightDetours = bWeightDetours;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKBot.FindBestInventoryPath
// (Final, Native, Public, HasOutParms)
// Parameters:
// float                          MinWeight                      (Parm, OutParm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* AUDKBot::FindBestInventoryPath(float* MinWeight)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKBot.FindBestInventoryPath");

	AUDKBot_FindBestInventoryPath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MinWeight != nullptr)
		*MinWeight = params.MinWeight;

	return params.ReturnValue;
}


// Function UDKBase.UDKBot.CanMakePathTo
// (Final, Native, Public)
// Parameters:
// class AActor*                  A                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKBot::CanMakePathTo(class AActor* A)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKBot.CanMakePathTo");

	AUDKBot_CanMakePathTo_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKBot.LatentWhatToDoNext
// (Final, Latent, Native, Public)

void AUDKBot::LatentWhatToDoNext()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKBot.LatentWhatToDoNext");

	AUDKBot_LatentWhatToDoNext_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKBot.WaitToSeeEnemy
// (Final, Latent, Native, Public)

void AUDKBot::WaitToSeeEnemy()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKBot.WaitToSeeEnemy");

	AUDKBot_WaitToSeeEnemy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKBot.ReceiveRunOverWarning
// (Event, Public)
// Parameters:
// class AUDKVehicle*             V                              (Parm)
// float                          projSpeed                      (Parm)
// struct FVector                 VehicleDir                     (Parm)

void AUDKBot::ReceiveRunOverWarning(class AUDKVehicle* V, float projSpeed, const struct FVector& VehicleDir)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKBot.ReceiveRunOverWarning");

	AUDKBot_ReceiveRunOverWarning_Params params;
	params.V = V;
	params.projSpeed = projSpeed;
	params.VehicleDir = VehicleDir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKBot.ExecuteWhatToDoNext
// (Event, Protected)

void AUDKBot::ExecuteWhatToDoNext()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKBot.ExecuteWhatToDoNext");

	AUDKBot_ExecuteWhatToDoNext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKBot.FaceActor
// (Public)
// Parameters:
// float                          StrafingModifier               (Parm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* AUDKBot::FaceActor(float StrafingModifier)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKBot.FaceActor");

	AUDKBot_FaceActor_Params params;
	params.StrafingModifier = StrafingModifier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKCarriedObject.GetTeamNum
// (Simulated, Native, Public)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char AUDKCarriedObject::GetTeamNum()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKCarriedObject.GetTeamNum");

	AUDKCarriedObject_GetTeamNum_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKCarriedObject.OnBaseChainChanged
// (Simulated, Event, Public)

void AUDKCarriedObject::OnBaseChainChanged()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKCarriedObject.OnBaseChainChanged");

	AUDKCarriedObject_OnBaseChainChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKCarriedObject.NotReachableBy
// (Event, Public)
// Parameters:
// class APawn*                   P                              (Parm)

void AUDKCarriedObject::NotReachableBy(class APawn* P)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKCarriedObject.NotReachableBy");

	AUDKCarriedObject_NotReachableBy_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKCarriedObject.SetHUDLocation
// (Simulated, Native, Public)
// Parameters:
// struct FVector                 NewHUDLocation                 (Parm)

void AUDKCarriedObject::SetHUDLocation(const struct FVector& NewHUDLocation)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKCarriedObject.SetHUDLocation");

	AUDKCarriedObject_SetHUDLocation_Params params;
	params.NewHUDLocation = NewHUDLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKDataStore_GameSearchBase.HasExistingSearchResults
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUDKDataStore_GameSearchBase::HasExistingSearchResults()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKDataStore_GameSearchBase.HasExistingSearchResults");

	UUDKDataStore_GameSearchBase_HasExistingSearchResults_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKDataStore_GameSearchBase.HasOutstandingQueries
// (Defined, HasOptionalParms, Public)
// Parameters:
// bool                           bRestrictCheckToSelf           (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUDKDataStore_GameSearchBase::HasOutstandingQueries(bool bRestrictCheckToSelf)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKDataStore_GameSearchBase.HasOutstandingQueries");

	UUDKDataStore_GameSearchBase_HasOutstandingQueries_Params params;
	params.bRestrictCheckToSelf = bRestrictCheckToSelf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKDataStore_GameSearchBase.OnSearchComplete
// (Defined, Public)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UUDKDataStore_GameSearchBase::OnSearchComplete(bool bWasSuccessful)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKDataStore_GameSearchBase.OnSearchComplete");

	UUDKDataStore_GameSearchBase_OnSearchComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKDataStore_GameSearchBase.SubmitGameSearch
// (Defined, Event, HasOptionalParms, Public)
// Parameters:
// unsigned char                  ControllerIndex                (Parm)
// bool                           bInvalidateExistingSearchResults (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUDKDataStore_GameSearchBase::SubmitGameSearch(unsigned char ControllerIndex, bool bInvalidateExistingSearchResults)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKDataStore_GameSearchBase.SubmitGameSearch");

	UUDKDataStore_GameSearchBase_SubmitGameSearch_Params params;
	params.ControllerIndex = ControllerIndex;
	params.bInvalidateExistingSearchResults = bInvalidateExistingSearchResults;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKDataStore_GameSearchBase.Init
// (Defined, Event, Public)

void UUDKDataStore_GameSearchBase::Init()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKDataStore_GameSearchBase.Init");

	UUDKDataStore_GameSearchBase_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKEmitCameraEffect.UpdateLocation
// (Native, Public, HasOutParms)
// Parameters:
// struct FVector                 CamLoc                         (Const, Parm, OutParm)
// struct FRotator                CamRot                         (Const, Parm, OutParm)
// float                          CamFOVDeg                      (Parm)

void AUDKEmitCameraEffect::UpdateLocation(float CamFOVDeg, struct FVector* CamLoc, struct FRotator* CamRot)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKEmitCameraEffect.UpdateLocation");

	AUDKEmitCameraEffect_UpdateLocation_Params params;
	params.CamFOVDeg = CamFOVDeg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CamLoc != nullptr)
		*CamLoc = params.CamLoc;
	if (CamRot != nullptr)
		*CamRot = params.CamRot;
}


// Function UDKBase.UDKEmitCameraEffect.RegisterCamera
// (Defined, Public)
// Parameters:
// class AUDKPlayerController*    inCam                          (Parm)

void AUDKEmitCameraEffect::RegisterCamera(class AUDKPlayerController* inCam)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKEmitCameraEffect.RegisterCamera");

	AUDKEmitCameraEffect_RegisterCamera_Params params;
	params.inCam = inCam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKEmitCameraEffect.Destroyed
// (Defined, Public)

void AUDKEmitCameraEffect::Destroyed()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKEmitCameraEffect.Destroyed");

	AUDKEmitCameraEffect_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKEmitCameraEffect.PostBeginPlay
// (Defined, Simulated, Event, Public)

void AUDKEmitCameraEffect::PostBeginPlay()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKEmitCameraEffect.PostBeginPlay");

	AUDKEmitCameraEffect_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKEmitterPool.SpawnExplosionLight
// (Defined, HasOptionalParms, Public)
// Parameters:
// class UClass*                  LightClass                     (Parm)
// struct FVector                 SpawnLocation                  (Parm)
// class AActor*                  AttachToActor                  (OptionalParm, Parm)
// class UUDKExplosionLight*      ReturnValue                    (Parm, OutParm, ReturnParm, EditInline)

class UUDKExplosionLight* AUDKEmitterPool::SpawnExplosionLight(class UClass* LightClass, const struct FVector& SpawnLocation, class AActor* AttachToActor)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKEmitterPool.SpawnExplosionLight");

	AUDKEmitterPool_SpawnExplosionLight_Params params;
	params.LightClass = LightClass;
	params.SpawnLocation = SpawnLocation;
	params.AttachToActor = AttachToActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKEmitterPool.OnExplosionLightFinished
// (Defined, Public)
// Parameters:
// class UUDKExplosionLight*      Light                          (Parm, EditInline)

void AUDKEmitterPool::OnExplosionLightFinished(class UUDKExplosionLight* Light)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKEmitterPool.OnExplosionLightFinished");

	AUDKEmitterPool_OnExplosionLightFinished_Params params;
	params.Light = Light;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKEmitterPool.SpawnEmitter
// (Defined, HasOptionalParms, Public)
// Parameters:
// class UParticleSystem*         EmitterTemplate                (Parm)
// struct FVector                 SpawnLocation                  (Parm)
// struct FRotator                SpawnRotation                  (OptionalParm, Parm)
// class AActor*                  AttachToActor                  (OptionalParm, Parm)
// class AActor*                  InInstigator                   (OptionalParm, Parm)
// int                            MaxDLEPooledReuses             (OptionalParm, Parm)
// bool                           bInheritScaleFromBase          (OptionalParm, Parm)
// class UParticleSystemComponent* ReturnValue                    (Parm, OutParm, ReturnParm, EditInline)

class UParticleSystemComponent* AUDKEmitterPool::SpawnEmitter(class UParticleSystem* EmitterTemplate, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, class AActor* AttachToActor, class AActor* InInstigator, int MaxDLEPooledReuses, bool bInheritScaleFromBase)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKEmitterPool.SpawnEmitter");

	AUDKEmitterPool_SpawnEmitter_Params params;
	params.EmitterTemplate = EmitterTemplate;
	params.SpawnLocation = SpawnLocation;
	params.SpawnRotation = SpawnRotation;
	params.AttachToActor = AttachToActor;
	params.InInstigator = InInstigator;
	params.MaxDLEPooledReuses = MaxDLEPooledReuses;
	params.bInheritScaleFromBase = bInheritScaleFromBase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKExplosionLight.OnLightFinished
// (Public, Delegate)
// Parameters:
// class UUDKExplosionLight*      Light                          (Parm, EditInline)

void UUDKExplosionLight::OnLightFinished(class UUDKExplosionLight* Light)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKExplosionLight.OnLightFinished");

	UUDKExplosionLight_OnLightFinished_Params params;
	params.Light = Light;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKExplosionLight.ResetLight
// (Final, Native, Public)

void UUDKExplosionLight::ResetLight()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKExplosionLight.ResetLight");

	UUDKExplosionLight_ResetLight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKForcedDirectionVolume.StopsProjectile
// (Defined, Simulated, Public)
// Parameters:
// class AProjectile*             P                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKForcedDirectionVolume::StopsProjectile(class AProjectile* P)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKForcedDirectionVolume.StopsProjectile");

	AUDKForcedDirectionVolume_StopsProjectile_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKForcedDirectionVolume.UnTouch
// (Defined, Simulated, Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)

void AUDKForcedDirectionVolume::UnTouch(class AActor* Other)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKForcedDirectionVolume.UnTouch");

	AUDKForcedDirectionVolume_UnTouch_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKForcedDirectionVolume.Touch
// (Defined, Simulated, Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)
// class UPrimitiveComponent*     OtherComp                      (Parm, EditInline)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void AUDKForcedDirectionVolume::Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKForcedDirectionVolume.Touch");

	AUDKForcedDirectionVolume_Touch_Params params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKForcedDirectionVolume.ActorEnteredVolume
// (Defined, Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)

void AUDKForcedDirectionVolume::ActorEnteredVolume(class AActor* Other)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKForcedDirectionVolume.ActorEnteredVolume");

	AUDKForcedDirectionVolume_ActorEnteredVolume_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKForcedDirectionVolume.PostBeginPlay
// (Defined, Simulated, Public)

void AUDKForcedDirectionVolume::PostBeginPlay()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKForcedDirectionVolume.PostBeginPlay");

	AUDKForcedDirectionVolume_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKGameInteraction.NotifyGameSessionEnded
// (Defined, Public)

void UUDKGameInteraction::NotifyGameSessionEnded()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKGameInteraction.NotifyGameSessionEnded");

	UUDKGameInteraction_NotifyGameSessionEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKGameInteraction.BlockUIInput
// (Defined, Event, Public)
// Parameters:
// bool                           bBlock                         (Parm)

void UUDKGameInteraction::BlockUIInput(bool bBlock)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKGameInteraction.BlockUIInput");

	UUDKGameInteraction_BlockUIInput_Params params;
	params.bBlock = bBlock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKGameInteraction.ClearUIInputBlocks
// (Defined, Event, Public)

void UUDKGameInteraction::ClearUIInputBlocks()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKGameInteraction.ClearUIInputBlocks");

	UUDKGameInteraction_ClearUIInputBlocks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKGameInteraction.ShouldProcessUIInput
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUDKGameInteraction::ShouldProcessUIInput()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKGameInteraction.ShouldProcessUIInput");

	UUDKGameInteraction_ShouldProcessUIInput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKGameObjective.GetTeamNum
// (Simulated, Native, Public)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char AUDKGameObjective::GetTeamNum()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKGameObjective.GetTeamNum");

	AUDKGameObjective_GetTeamNum_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKGameObjective.DrawIcon
// (Simulated, Native, Public)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)
// struct FVector                 IconLocation                   (Parm)
// float                          IconWidth                      (Parm)
// float                          IconAlpha                      (Parm)
// class AUDKPlayerController*    PlayerOwner                    (Parm)
// struct FLinearColor            DrawColor                      (Parm)

void AUDKGameObjective::DrawIcon(class UCanvas* Canvas, const struct FVector& IconLocation, float IconWidth, float IconAlpha, class AUDKPlayerController* PlayerOwner, const struct FLinearColor& DrawColor)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKGameObjective.DrawIcon");

	AUDKGameObjective_DrawIcon_Params params;
	params.Canvas = Canvas;
	params.IconLocation = IconLocation;
	params.IconWidth = IconWidth;
	params.IconAlpha = IconAlpha;
	params.PlayerOwner = PlayerOwner;
	params.DrawColor = DrawColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKGameObjective.SetHUDLocation
// (Simulated, Native, Public)
// Parameters:
// struct FVector                 NewHUDLocation                 (Parm)

void AUDKGameObjective::SetHUDLocation(const struct FVector& NewHUDLocation)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKGameObjective.SetHUDLocation");

	AUDKGameObjective_SetHUDLocation_Params params;
	params.NewHUDLocation = NewHUDLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKGameObjective.TriggerFlagEvent
// (Public)
// Parameters:
// struct FName                   EventType                      (Parm)
// class AController*             EventInstigator                (Parm)

void AUDKGameObjective::TriggerFlagEvent(const struct FName& EventType, class AController* EventInstigator)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKGameObjective.TriggerFlagEvent");

	AUDKGameObjective_TriggerFlagEvent_Params params;
	params.EventType = EventType;
	params.EventInstigator = EventInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKGameObjective.BotNearObjective
// (Public)
// Parameters:
// class AAIController*           C                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKGameObjective::BotNearObjective(class AAIController* C)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKGameObjective.BotNearObjective");

	AUDKGameObjective_BotNearObjective_Params params;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKGameObjective.GetBestViewTarget
// (Defined, Event, Public)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* AUDKGameObjective::GetBestViewTarget()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKGameObjective.GetBestViewTarget");

	AUDKGameObjective_GetBestViewTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKGameObjective.ObjectiveChanged
// (Public)

void AUDKGameObjective::ObjectiveChanged()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKGameObjective.ObjectiveChanged");

	AUDKGameObjective_ObjectiveChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKGameSettingsCommon.BlobToString
// (Native, Static, Public, HasOutParms)
// Parameters:
// struct FString                 InBlob                         (Const, Parm, OutParm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUDKGameSettingsCommon::STATIC_BlobToString(struct FString* InBlob)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKGameSettingsCommon.BlobToString");

	UUDKGameSettingsCommon_BlobToString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InBlob != nullptr)
		*InBlob = params.InBlob;

	return params.ReturnValue;
}


// Function UDKBase.UDKGameSettingsCommon.StringToBlob
// (Native, Static, Public, HasOutParms)
// Parameters:
// struct FString                 InString                       (Const, Parm, OutParm, NeedCtorLink)
// struct FString                 OutBlob                        (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUDKGameSettingsCommon::STATIC_StringToBlob(struct FString* InString, struct FString* OutBlob)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKGameSettingsCommon.StringToBlob");

	UUDKGameSettingsCommon_StringToBlob_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InString != nullptr)
		*InString = params.InString;
	if (OutBlob != nullptr)
		*OutBlob = params.OutBlob;

	return params.ReturnValue;
}


// Function UDKBase.UDKGameViewportClient.LoadRandomLocalizedHintMessage
// (Final, Native, Public)
// Parameters:
// struct FString                 Category1Name                  (Parm, NeedCtorLink)
// struct FString                 Category2Name                  (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUDKGameViewportClient::LoadRandomLocalizedHintMessage(const struct FString& Category1Name, const struct FString& Category2Name)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKGameViewportClient.LoadRandomLocalizedHintMessage");

	UUDKGameViewportClient_LoadRandomLocalizedHintMessage_Params params;
	params.Category1Name = Category1Name;
	params.Category2Name = Category2Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKHUD.TranslateBindToFont
// (Native, Static, Public, HasOutParms)
// Parameters:
// struct FString                 InBindStr                      (Parm, NeedCtorLink)
// class UFont*                   DrawFont                       (Parm, OutParm)
// struct FString                 OutBindStr                     (Parm, OutParm, NeedCtorLink)

void AUDKHUD::STATIC_TranslateBindToFont(const struct FString& InBindStr, class UFont** DrawFont, struct FString* OutBindStr)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKHUD.TranslateBindToFont");

	AUDKHUD_TranslateBindToFont_Params params;
	params.InBindStr = InBindStr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DrawFont != nullptr)
		*DrawFont = params.DrawFont;
	if (OutBindStr != nullptr)
		*OutBindStr = params.OutBindStr;
}


// Function UDKBase.UDKHUD.DrawGlowText
// (Native, HasOptionalParms, Public)
// Parameters:
// struct FString                 Text                           (Parm, NeedCtorLink)
// float                          X                              (Parm)
// float                          Y                              (Parm)
// float                          MaxHeightInPixels              (OptionalParm, Parm)
// float                          PulseTime                      (OptionalParm, Parm)
// bool                           bRightJustified                (OptionalParm, Parm)

void AUDKHUD::DrawGlowText(const struct FString& Text, float X, float Y, float MaxHeightInPixels, float PulseTime, bool bRightJustified)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKHUD.DrawGlowText");

	AUDKHUD_DrawGlowText_Params params;
	params.Text = Text;
	params.X = X;
	params.Y = Y;
	params.MaxHeightInPixels = MaxHeightInPixels;
	params.PulseTime = PulseTime;
	params.bRightJustified = bRightJustified;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKJumpPad.SuggestMovePreparation
// (Defined, Event, Public)
// Parameters:
// class APawn*                   Other                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKJumpPad::SuggestMovePreparation(class APawn* Other)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKJumpPad.SuggestMovePreparation");

	AUDKJumpPad_SuggestMovePreparation_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKJumpPad.PostTouch
// (Defined, Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)

void AUDKJumpPad::PostTouch(class AActor* Other)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKJumpPad.PostTouch");

	AUDKJumpPad_PostTouch_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKJumpPad.Touch
// (Defined, Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)
// class UPrimitiveComponent*     OtherComp                      (Parm, EditInline)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void AUDKJumpPad::Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKJumpPad.Touch");

	AUDKJumpPad_Touch_Params params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKKActorBreakable.ReplicatedEvent
// (Defined, Simulated, Event, Public)
// Parameters:
// struct FName                   VarName                        (Parm)

void AUDKKActorBreakable::ReplicatedEvent(const struct FName& VarName)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKKActorBreakable.ReplicatedEvent");

	AUDKKActorBreakable_ReplicatedEvent_Params params;
	params.VarName = VarName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKKActorBreakable.BreakApart
// (Defined, Public)

void AUDKKActorBreakable::BreakApart()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKKActorBreakable.BreakApart");

	AUDKKActorBreakable_BreakApart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKKActorBreakable.EncroachingOn
// (Defined, Public)
// Parameters:
// class AActor*                  Other                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKKActorBreakable::EncroachingOn(class AActor* Other)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKKActorBreakable.EncroachingOn");

	AUDKKActorBreakable_EncroachingOn_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKKActorBreakable.TakeDamage
// (Defined, Event, HasOptionalParms, Public)
// Parameters:
// int                            Damage                         (Parm)
// class AController*             EventInstigator                (Parm)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 Momentum                       (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FTraceHitInfo           HitInfo                        (OptionalParm, Parm)
// class AActor*                  DamageCauser                   (OptionalParm, Parm)

void AUDKKActorBreakable::TakeDamage(int Damage, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKKActorBreakable.TakeDamage");

	AUDKKActorBreakable_TakeDamage_Params params;
	params.Damage = Damage;
	params.EventInstigator = EventInstigator;
	params.HitLocation = HitLocation;
	params.Momentum = Momentum;
	params.DamageType = DamageType;
	params.HitInfo = HitInfo;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKKActorBreakable.OnEncroach
// (Public, Delegate)
// Parameters:
// class AActor*                  Other                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKKActorBreakable::OnEncroach(class AActor* Other)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKKActorBreakable.OnEncroach");

	AUDKKActorBreakable_OnEncroach_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKKActorBreakable.OnBreakApart
// (Public, Delegate)

void AUDKKActorBreakable::OnBreakApart()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKKActorBreakable.OnBreakApart");

	AUDKKActorBreakable_OnBreakApart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKParticleSystemComponent.SetFOV
// (Final, Native, Public)
// Parameters:
// float                          NewFOV                         (Parm)

void UUDKParticleSystemComponent::SetFOV(float NewFOV)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKParticleSystemComponent.SetFOV");

	UUDKParticleSystemComponent_SetFOV_Params params;
	params.NewFOV = NewFOV;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPawn.StuckFalling
// (Event, Public)

void AUDKPawn::StuckFalling()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPawn.StuckFalling");

	AUDKPawn_StuckFalling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPawn.UpdateEyeHeight
// (Event, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void AUDKPawn::UpdateEyeHeight(float DeltaTime)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPawn.UpdateEyeHeight");

	AUDKPawn_UpdateEyeHeight_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPawn.TakeHitBlendedOut
// (Simulated, Event, Public)

void AUDKPawn::TakeHitBlendedOut()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPawn.TakeHitBlendedOut");

	AUDKPawn_TakeHitBlendedOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPawn.StartFeignDeathRecoveryAnim
// (Simulated, Event, Public)

void AUDKPawn::StartFeignDeathRecoveryAnim()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPawn.StartFeignDeathRecoveryAnim");

	AUDKPawn_StartFeignDeathRecoveryAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPawn.SetHandIKEnabled
// (Simulated, Public)
// Parameters:
// bool                           bEnabled                       (Parm)

void AUDKPawn::SetHandIKEnabled(bool bEnabled)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPawn.SetHandIKEnabled");

	AUDKPawn_SetHandIKEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPawn.SetWeaponAttachmentVisibility
// (Simulated, Public)
// Parameters:
// bool                           bAttachmentVisible             (Parm)

void AUDKPawn::SetWeaponAttachmentVisibility(bool bAttachmentVisible)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPawn.SetWeaponAttachmentVisibility");

	AUDKPawn_SetWeaponAttachmentVisibility_Params params;
	params.bAttachmentVisible = bAttachmentVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPawn.NativePostRenderFor
// (Simulated, Native, Public)
// Parameters:
// class APlayerController*       PC                             (Parm)
// class UCanvas*                 Canvas                         (Parm)
// struct FVector                 CameraPosition                 (Parm)
// struct FVector                 CameraDir                      (Parm)

void AUDKPawn::NativePostRenderFor(class APlayerController* PC, class UCanvas* Canvas, const struct FVector& CameraPosition, const struct FVector& CameraDir)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPawn.NativePostRenderFor");

	AUDKPawn_NativePostRenderFor_Params params;
	params.PC = PC;
	params.Canvas = Canvas;
	params.CameraPosition = CameraPosition;
	params.CameraDir = CameraDir;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPawn.SetHUDLocation
// (Simulated, Native, Public)
// Parameters:
// struct FVector                 NewHUDLocation                 (Parm)

void AUDKPawn::SetHUDLocation(const struct FVector& NewHUDLocation)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPawn.SetHUDLocation");

	AUDKPawn_SetHUDLocation_Params params;
	params.NewHUDLocation = NewHUDLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPawn.SuggestJumpVelocity
// (Native, HasOptionalParms, Public, HasOutParms)
// Parameters:
// struct FVector                 JumpVelocity                   (Parm, OutParm)
// struct FVector                 Destination                    (Parm)
// struct FVector                 Start                          (Parm)
// bool                           bRequireFallLanding            (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKPawn::SuggestJumpVelocity(const struct FVector& Destination, const struct FVector& Start, bool bRequireFallLanding, struct FVector* JumpVelocity)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPawn.SuggestJumpVelocity");

	AUDKPawn_SuggestJumpVelocity_Params params;
	params.Destination = Destination;
	params.Start = Start;
	params.bRequireFallLanding = bRequireFallLanding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (JumpVelocity != nullptr)
		*JumpVelocity = params.JumpVelocity;

	return params.ReturnValue;
}


// Function UDKBase.UDKPawn.StartCrouch
// (Defined, Simulated, Event, Public)
// Parameters:
// float                          HeightAdjust                   (Parm)

void AUDKPawn::StartCrouch(float HeightAdjust)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPawn.StartCrouch");

	AUDKPawn_StartCrouch_Params params;
	params.HeightAdjust = HeightAdjust;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPawn.EndCrouch
// (Defined, Simulated, Event, Public)
// Parameters:
// float                          HeightAdjust                   (Parm)

void AUDKPawn::EndCrouch(float HeightAdjust)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPawn.EndCrouch");

	AUDKPawn_EndCrouch_Params params;
	params.HeightAdjust = HeightAdjust;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPawn.StoppedFalling
// (Defined, Event, Public)

void AUDKPawn::StoppedFalling()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPawn.StoppedFalling");

	AUDKPawn_StoppedFalling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPawn.HoldGameObject
// (Simulated, Event, Public)
// Parameters:
// class AUDKCarriedObject*       UDKGameObj                     (Parm)

void AUDKPawn::HoldGameObject(class AUDKCarriedObject* UDKGameObj)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPawn.HoldGameObject");

	AUDKPawn_HoldGameObject_Params params;
	params.UDKGameObj = UDKGameObj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPawn.IsInvisible
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKPawn::IsInvisible()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPawn.IsInvisible");

	AUDKPawn_IsInvisible_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKPawn.GetTargetLocation
// (Simulated, Native, HasOptionalParms, Public)
// Parameters:
// class AActor*                  RequestedBy                    (OptionalParm, Parm)
// bool                           bRequestAlternateLoc           (OptionalParm, Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AUDKPawn::GetTargetLocation(class AActor* RequestedBy, bool bRequestAlternateLoc)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPawn.GetTargetLocation");

	AUDKPawn_GetTargetLocation_Params params;
	params.RequestedBy = RequestedBy;
	params.bRequestAlternateLoc = bRequestAlternateLoc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKPawn.EnsureOverlayComponentLast
// (Native, Public)

void AUDKPawn::EnsureOverlayComponentLast()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPawn.EnsureOverlayComponentLast");

	AUDKPawn_EnsureOverlayComponentLast_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPawn.RestorePreRagdollCollisionComponent
// (Native, Public)

void AUDKPawn::RestorePreRagdollCollisionComponent()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPawn.RestorePreRagdollCollisionComponent");

	AUDKPawn_RestorePreRagdollCollisionComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPawn.GetBoundingCylinder
// (Native, Public, HasOutParms)
// Parameters:
// float                          CollisionRadius                (Parm, OutParm)
// float                          CollisionHeight                (Parm, OutParm)

void AUDKPawn::GetBoundingCylinder(float* CollisionRadius, float* CollisionHeight)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPawn.GetBoundingCylinder");

	AUDKPawn_GetBoundingCylinder_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CollisionRadius != nullptr)
		*CollisionRadius = params.CollisionRadius;
	if (CollisionHeight != nullptr)
		*CollisionHeight = params.CollisionHeight;
}


// Function UDKBase.UDKPickupFactory.SetPickupHidden
// (Defined, Simulated, Public)

void AUDKPickupFactory::SetPickupHidden()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPickupFactory.SetPickupHidden");

	AUDKPickupFactory_SetPickupHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPickupFactory.SetPickupVisible
// (Defined, Simulated, Public)

void AUDKPickupFactory::SetPickupVisible()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPickupFactory.SetPickupVisible");

	AUDKPickupFactory_SetPickupVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPlayerController.GetTargetAdhesionFrictionTarget
// (Native, Public, HasOutParms)
// Parameters:
// float                          MaxDistance                    (Parm)
// struct FVector                 CamLoc                         (Const, Parm, OutParm)
// struct FRotator                CamRot                         (Const, Parm, OutParm)
// class APawn*                   ReturnValue                    (Parm, OutParm, ReturnParm)

class APawn* AUDKPlayerController::GetTargetAdhesionFrictionTarget(float MaxDistance, struct FVector* CamLoc, struct FRotator* CamRot)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPlayerController.GetTargetAdhesionFrictionTarget");

	AUDKPlayerController_GetTargetAdhesionFrictionTarget_Params params;
	params.MaxDistance = MaxDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CamLoc != nullptr)
		*CamLoc = params.CamLoc;
	if (CamRot != nullptr)
		*CamRot = params.CamRot;

	return params.ReturnValue;
}


// Function UDKBase.UDKPlayerController.ClearCameraEffect
// (Defined, Public)

void AUDKPlayerController::ClearCameraEffect()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPlayerController.ClearCameraEffect");

	AUDKPlayerController_ClearCameraEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPlayerController.ClientSpawnCameraEffect
// (Defined, Net, Simulated, Public, HasDefaults, NetClient)
// Parameters:
// class UClass*                  CameraEffectClass              (Parm)

void AUDKPlayerController::ClientSpawnCameraEffect(class UClass* CameraEffectClass)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPlayerController.ClientSpawnCameraEffect");

	AUDKPlayerController_ClientSpawnCameraEffect_Params params;
	params.CameraEffectClass = CameraEffectClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPlayerController.RemoveCameraEffect
// (Defined, Public)
// Parameters:
// class AUDKEmitCameraEffect*    CamEmitter                     (Parm)

void AUDKPlayerController::RemoveCameraEffect(class AUDKEmitCameraEffect* CamEmitter)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPlayerController.RemoveCameraEffect");

	AUDKPlayerController_RemoveCameraEffect_Params params;
	params.CamEmitter = CamEmitter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPlayerController.IsMouseAvailable
// (Simulated, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKPlayerController::IsMouseAvailable()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPlayerController.IsMouseAvailable");

	AUDKPlayerController_IsMouseAvailable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKPlayerController.IsKeyboardAvailable
// (Simulated, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKPlayerController::IsKeyboardAvailable()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPlayerController.IsKeyboardAvailable");

	AUDKPlayerController_IsKeyboardAvailable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKPlayerController.SetHardwarePhysicsEnabled
// (Native, Public)
// Parameters:
// bool                           bEnabled                       (Parm)

void AUDKPlayerController::SetHardwarePhysicsEnabled(bool bEnabled)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPlayerController.SetHardwarePhysicsEnabled");

	AUDKPlayerController_SetHardwarePhysicsEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPlayerController.SetGamma
// (Native, Public)
// Parameters:
// float                          GammaValue                     (Parm)

void AUDKPlayerController::SetGamma(float GammaValue)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPlayerController.SetGamma");

	AUDKPlayerController_SetGamma_Params params;
	params.GammaValue = GammaValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPlayerInput.GetUDKBindNameFromCommand
// (Native, Public)
// Parameters:
// struct FString                 BindCommand                    (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUDKPlayerInput::GetUDKBindNameFromCommand(const struct FString& BindCommand)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPlayerInput.GetUDKBindNameFromCommand");

	UUDKPlayerInput_GetUDKBindNameFromCommand_Params params;
	params.BindCommand = BindCommand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKProfileSettings.ResetKeysToDefault
// (Native, Static, HasOptionalParms, Public)
// Parameters:
// class ULocalPlayer*            InPlayerOwner                  (OptionalParm, Parm)

void UUDKProfileSettings::STATIC_ResetKeysToDefault(class ULocalPlayer* InPlayerOwner)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKProfileSettings.ResetKeysToDefault");

	UUDKProfileSettings_ResetKeysToDefault_Params params;
	params.InPlayerOwner = InPlayerOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKProfileSettings.ResetToDefault
// (Native, Public)
// Parameters:
// int                            ProfileId                      (Parm)

void UUDKProfileSettings::ResetToDefault(int ProfileId)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKProfileSettings.ResetToDefault");

	UUDKProfileSettings_ResetToDefault_Params params;
	params.ProfileId = ProfileId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKProjectile.CreateProjectileLight
// (Simulated, Event, Public)

void AUDKProjectile::CreateProjectileLight()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKProjectile.CreateProjectileLight");

	AUDKProjectile_CreateProjectileLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKProjectile.GetTerminalVelocity
// (Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AUDKProjectile::GetTerminalVelocity()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKProjectile.GetTerminalVelocity");

	AUDKProjectile_GetTerminalVelocity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKScout.SuggestJumpVelocity
// (Native, HasOptionalParms, Public, HasOutParms)
// Parameters:
// struct FVector                 JumpVelocity                   (Parm, OutParm)
// struct FVector                 Destination                    (Parm)
// struct FVector                 Start                          (Parm)
// bool                           bRequireFallLanding            (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKScout::SuggestJumpVelocity(const struct FVector& Destination, const struct FVector& Start, bool bRequireFallLanding, struct FVector* JumpVelocity)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKScout.SuggestJumpVelocity");

	AUDKScout_SuggestJumpVelocity_Params params;
	params.Destination = Destination;
	params.Start = Start;
	params.bRequireFallLanding = bRequireFallLanding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (JumpVelocity != nullptr)
		*JumpVelocity = params.JumpVelocity;

	return params.ReturnValue;
}


// Function UDKBase.UDKScriptedNavigationPoint.NotifyAnchorFindingResult
// (Event, Public)
// Parameters:
// class ANavigationPoint*        EndAnchor                      (Parm)
// class APawn*                   RouteFinder                    (Parm)

void AUDKScriptedNavigationPoint::NotifyAnchorFindingResult(class ANavigationPoint* EndAnchor, class APawn* RouteFinder)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKScriptedNavigationPoint.NotifyAnchorFindingResult");

	AUDKScriptedNavigationPoint_NotifyAnchorFindingResult_Params params;
	params.EndAnchor = EndAnchor;
	params.RouteFinder = RouteFinder;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKScriptedNavigationPoint.SpecifyEndAnchor
// (Event, Public)
// Parameters:
// class APawn*                   RouteFinder                    (Parm)
// class ANavigationPoint*        ReturnValue                    (Parm, OutParm, ReturnParm)

class ANavigationPoint* AUDKScriptedNavigationPoint::SpecifyEndAnchor(class APawn* RouteFinder)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKScriptedNavigationPoint.SpecifyEndAnchor");

	AUDKScriptedNavigationPoint_SpecifyEndAnchor_Params params;
	params.RouteFinder = RouteFinder;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKSkeletalMeshComponent.SetFOV
// (Final, Native, Public)
// Parameters:
// float                          NewFOV                         (Parm)

void UUDKSkeletalMeshComponent::SetFOV(float NewFOV)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKSkeletalMeshComponent.SetFOV");

	UUDKSkeletalMeshComponent_SetFOV_Params params;
	params.NewFOV = NewFOV;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKSkeletalMeshComponent.PreloadTextures
// (Defined, Simulated, Event, Public)
// Parameters:
// bool                           bForcePreload                  (Parm)
// float                          ClearTime                      (Parm)

void UUDKSkeletalMeshComponent::PreloadTextures(bool bForcePreload, float ClearTime)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKSkeletalMeshComponent.PreloadTextures");

	UUDKSkeletalMeshComponent_PreloadTextures_Params params;
	params.bForcePreload = bForcePreload;
	params.ClearTime = ClearTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKTeamOwnedInfo.GetTeamNum
// (Simulated, Native, Public)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char AUDKTeamOwnedInfo::GetTeamNum()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKTeamOwnedInfo.GetTeamNum");

	AUDKTeamOwnedInfo_GetTeamNum_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKTeleporterBase.Accept
// (Defined, Simulated, Event, Public)
// Parameters:
// class AActor*                  Incoming                       (Parm)
// class AActor*                  Source                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKTeleporterBase::Accept(class AActor* Incoming, class AActor* Source)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKTeleporterBase.Accept");

	AUDKTeleporterBase_Accept_Params params;
	params.Incoming = Incoming;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKTeleporterBase.InitializePortalEffect
// (Defined, Simulated, Public)
// Parameters:
// class AActor*                  Dest                           (Parm)

void AUDKTeleporterBase::InitializePortalEffect(class AActor* Dest)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKTeleporterBase.InitializePortalEffect");

	AUDKTeleporterBase_InitializePortalEffect_Params params;
	params.Dest = Dest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKTeleporterBase.PostBeginPlay
// (Defined, Simulated, Event, Public)

void AUDKTeleporterBase::PostBeginPlay()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKTeleporterBase.PostBeginPlay");

	AUDKTeleporterBase_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKUIDataProvider_SearchResult.IsPrivateServer
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUDKUIDataProvider_SearchResult::IsPrivateServer()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataProvider_SearchResult.IsPrivateServer");

	UUDKUIDataProvider_SearchResult_IsPrivateServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKUIDataStore_MenuItems.AddListElementProvidersKey
// (Native, Public)
// Parameters:
// struct FName                   KeyName                        (Parm)
// class UUDKUIResourceDataProvider* Provider                       (Parm)

void UUDKUIDataStore_MenuItems::AddListElementProvidersKey(const struct FName& KeyName, class UUDKUIResourceDataProvider* Provider)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_MenuItems.AddListElementProvidersKey");

	UUDKUIDataStore_MenuItems_AddListElementProvidersKey_Params params;
	params.KeyName = KeyName;
	params.Provider = Provider;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKUIDataStore_MenuItems.RemoveListElementProvidersKey
// (Native, Public)
// Parameters:
// struct FName                   KeyName                        (Parm)

void UUDKUIDataStore_MenuItems::RemoveListElementProvidersKey(const struct FName& KeyName)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_MenuItems.RemoveListElementProvidersKey");

	UUDKUIDataStore_MenuItems_RemoveListElementProvidersKey_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKUIDataStore_MenuItems.InitializeListElementProviders
// (Defined, Event, Public)

void UUDKUIDataStore_MenuItems::InitializeListElementProviders()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_MenuItems.InitializeListElementProviders");

	UUDKUIDataStore_MenuItems_InitializeListElementProviders_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKUIDataStore_MenuItems.GetProviderSet
// (Native, Public, HasOutParms)
// Parameters:
// struct FName                   ProviderFieldName              (Parm)
// TArray<class UUDKUIResourceDataProvider*> OutProviders                   (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUDKUIDataStore_MenuItems::GetProviderSet(const struct FName& ProviderFieldName, TArray<class UUDKUIResourceDataProvider*>* OutProviders)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_MenuItems.GetProviderSet");

	UUDKUIDataStore_MenuItems_GetProviderSet_Params params;
	params.ProviderFieldName = ProviderFieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutProviders != nullptr)
		*OutProviders = params.OutProviders;

	return params.ReturnValue;
}


// Function UDKBase.UDKUIDataStore_MenuItems.GetAllResourceDataProviders
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UClass*                  ProviderClass                  (Parm)
// TArray<class UUDKUIResourceDataProvider*> Providers                      (Parm, OutParm, NeedCtorLink)

void UUDKUIDataStore_MenuItems::STATIC_GetAllResourceDataProviders(class UClass* ProviderClass, TArray<class UUDKUIResourceDataProvider*>* Providers)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_MenuItems.GetAllResourceDataProviders");

	UUDKUIDataStore_MenuItems_GetAllResourceDataProviders_Params params;
	params.ProviderClass = ProviderClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Providers != nullptr)
		*Providers = params.Providers;
}


// Function UDKBase.UDKUIDataStore_StringAliasBindingMap.ClearBoundKeyCache
// (Final, Native, Public)

void UUDKUIDataStore_StringAliasBindingMap::ClearBoundKeyCache()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_StringAliasBindingMap.ClearBoundKeyCache");

	UUDKUIDataStore_StringAliasBindingMap_ClearBoundKeyCache_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKUIDataStore_StringAliasBindingMap.AddMappingToBoundKeyCache
// (Final, Native, Protected)
// Parameters:
// struct FString                 Command                        (Parm, NeedCtorLink)
// struct FString                 MappingStr                     (Parm, NeedCtorLink)
// int                            FieldIndex                     (Parm)

void UUDKUIDataStore_StringAliasBindingMap::AddMappingToBoundKeyCache(const struct FString& Command, const struct FString& MappingStr, int FieldIndex)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_StringAliasBindingMap.AddMappingToBoundKeyCache");

	UUDKUIDataStore_StringAliasBindingMap_AddMappingToBoundKeyCache_Params params;
	params.Command = Command;
	params.MappingStr = MappingStr;
	params.FieldIndex = FieldIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKUIDataStore_StringAliasBindingMap.FindMappingInBoundKeyCache
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FString                 Command                        (Parm, NeedCtorLink)
// struct FString                 MappingStr                     (Parm, OutParm, NeedCtorLink)
// int                            FieldIndex                     (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUDKUIDataStore_StringAliasBindingMap::FindMappingInBoundKeyCache(const struct FString& Command, struct FString* MappingStr, int* FieldIndex)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_StringAliasBindingMap.FindMappingInBoundKeyCache");

	UUDKUIDataStore_StringAliasBindingMap_FindMappingInBoundKeyCache_Params params;
	params.Command = Command;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MappingStr != nullptr)
		*MappingStr = params.MappingStr;
	if (FieldIndex != nullptr)
		*FieldIndex = params.FieldIndex;

	return params.ReturnValue;
}


// Function UDKBase.UDKUIDataStore_StringAliasBindingMap.GetBoundStringWithFieldName
// (Native, HasOptionalParms, Public, HasOutParms)
// Parameters:
// struct FString                 FieldName                      (Parm, NeedCtorLink)
// struct FString                 MappedString                   (Parm, OutParm, NeedCtorLink)
// int                            StartIndex                     (OptionalParm, Parm, OutParm)
// struct FString                 BindString                     (OptionalParm, Parm, OutParm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUDKUIDataStore_StringAliasBindingMap::GetBoundStringWithFieldName(const struct FString& FieldName, struct FString* MappedString, int* StartIndex, struct FString* BindString)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_StringAliasBindingMap.GetBoundStringWithFieldName");

	UUDKUIDataStore_StringAliasBindingMap_GetBoundStringWithFieldName_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MappedString != nullptr)
		*MappedString = params.MappedString;
	if (StartIndex != nullptr)
		*StartIndex = params.StartIndex;
	if (BindString != nullptr)
		*BindString = params.BindString;

	return params.ReturnValue;
}


// Function UDKBase.UDKUIDataStore_StringAliasBindingMap.GetStringWithFieldName
// (Native, Public, HasOutParms)
// Parameters:
// struct FString                 FieldName                      (Parm, NeedCtorLink)
// struct FString                 MappedString                   (Parm, OutParm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUDKUIDataStore_StringAliasBindingMap::GetStringWithFieldName(const struct FString& FieldName, struct FString* MappedString)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_StringAliasBindingMap.GetStringWithFieldName");

	UUDKUIDataStore_StringAliasBindingMap_GetStringWithFieldName_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MappedString != nullptr)
		*MappedString = params.MappedString;

	return params.ReturnValue;
}


// Function UDKBase.UDKUIDataStore_StringAliasMap.GetStringWithFieldName
// (Native, Public, HasOutParms)
// Parameters:
// struct FString                 FieldName                      (Parm, NeedCtorLink)
// struct FString                 MappedString                   (Parm, OutParm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUDKUIDataStore_StringAliasMap::GetStringWithFieldName(const struct FString& FieldName, struct FString* MappedString)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_StringAliasMap.GetStringWithFieldName");

	UUDKUIDataStore_StringAliasMap_GetStringWithFieldName_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MappedString != nullptr)
		*MappedString = params.MappedString;

	return params.ReturnValue;
}


// Function UDKBase.UDKUIDataStore_StringList.Num
// (Defined, Event, Public)
// Parameters:
// struct FName                   FieldName                      (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUDKUIDataStore_StringList::Num(const struct FName& FieldName)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_StringList.Num");

	UUDKUIDataStore_StringList_Num_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKUIDataStore_StringList.SetCurrentValueIndex
// (Defined, Event, Public)
// Parameters:
// struct FName                   FieldName                      (Parm)
// int                            NewValueIndex                  (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUDKUIDataStore_StringList::SetCurrentValueIndex(const struct FName& FieldName, int NewValueIndex)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_StringList.SetCurrentValueIndex");

	UUDKUIDataStore_StringList_SetCurrentValueIndex_Params params;
	params.FieldName = FieldName;
	params.NewValueIndex = NewValueIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKUIDataStore_StringList.GetCurrentValueIndex
// (Defined, Event, Public)
// Parameters:
// struct FName                   FieldName                      (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUDKUIDataStore_StringList::GetCurrentValueIndex(const struct FName& FieldName)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_StringList.GetCurrentValueIndex");

	UUDKUIDataStore_StringList_GetCurrentValueIndex_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKUIDataStore_StringList.GetCurrentValue
// (Defined, Event, Public, HasOutParms)
// Parameters:
// struct FName                   FieldName                      (Parm)
// struct FString                 out_Value                      (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUDKUIDataStore_StringList::GetCurrentValue(const struct FName& FieldName, struct FString* out_Value)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_StringList.GetCurrentValue");

	UUDKUIDataStore_StringList_GetCurrentValue_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_Value != nullptr)
		*out_Value = params.out_Value;

	return params.ReturnValue;
}


// Function UDKBase.UDKUIDataStore_StringList.GetStr
// (Native, Public)
// Parameters:
// struct FName                   FieldName                      (Parm)
// int                            StrIndex                       (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUDKUIDataStore_StringList::GetStr(const struct FName& FieldName, int StrIndex)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_StringList.GetStr");

	UUDKUIDataStore_StringList_GetStr_Params params;
	params.FieldName = FieldName;
	params.StrIndex = StrIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKUIDataStore_StringList.FindStr
// (Native, Public)
// Parameters:
// struct FName                   FieldName                      (Parm)
// struct FString                 SearchString                   (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUDKUIDataStore_StringList::FindStr(const struct FName& FieldName, const struct FString& SearchString)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_StringList.FindStr");

	UUDKUIDataStore_StringList_FindStr_Params params;
	params.FieldName = FieldName;
	params.SearchString = SearchString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKUIDataStore_StringList.Empty
// (Native, HasOptionalParms, Public)
// Parameters:
// struct FName                   FieldName                      (Parm)
// bool                           bBatchOp                       (OptionalParm, Parm)

void UUDKUIDataStore_StringList::Empty(const struct FName& FieldName, bool bBatchOp)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_StringList.Empty");

	UUDKUIDataStore_StringList_Empty_Params params;
	params.FieldName = FieldName;
	params.bBatchOp = bBatchOp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKUIDataStore_StringList.RemoveStrByIndex
// (Native, HasOptionalParms, Public)
// Parameters:
// struct FName                   FieldName                      (Parm)
// int                            Index                          (Parm)
// int                            COUNT                          (OptionalParm, Parm)
// bool                           bBatchOp                       (OptionalParm, Parm)

void UUDKUIDataStore_StringList::RemoveStrByIndex(const struct FName& FieldName, int Index, int COUNT, bool bBatchOp)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_StringList.RemoveStrByIndex");

	UUDKUIDataStore_StringList_RemoveStrByIndex_Params params;
	params.FieldName = FieldName;
	params.Index = Index;
	params.COUNT = COUNT;
	params.bBatchOp = bBatchOp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKUIDataStore_StringList.RemoveStr
// (Native, HasOptionalParms, Public)
// Parameters:
// struct FName                   FieldName                      (Parm)
// struct FString                 StringToRemove                 (Parm, NeedCtorLink)
// bool                           bBatchOp                       (OptionalParm, Parm)

void UUDKUIDataStore_StringList::RemoveStr(const struct FName& FieldName, const struct FString& StringToRemove, bool bBatchOp)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_StringList.RemoveStr");

	UUDKUIDataStore_StringList_RemoveStr_Params params;
	params.FieldName = FieldName;
	params.StringToRemove = StringToRemove;
	params.bBatchOp = bBatchOp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKUIDataStore_StringList.GetFieldIndex
// (Native, Public)
// Parameters:
// struct FName                   FieldName                      (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUDKUIDataStore_StringList::GetFieldIndex(const struct FName& FieldName)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_StringList.GetFieldIndex");

	UUDKUIDataStore_StringList_GetFieldIndex_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKUIDataStore_StringList.Registered
// (Defined, Event, Public)
// Parameters:
// class ULocalPlayer*            PlayerOwner                    (Parm)

void UUDKUIDataStore_StringList::Registered(class ULocalPlayer* PlayerOwner)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_StringList.Registered");

	UUDKUIDataStore_StringList_Registered_Params params;
	params.PlayerOwner = PlayerOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKUIResourceDataProvider.ShouldBeFiltered
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUDKUIResourceDataProvider::ShouldBeFiltered()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIResourceDataProvider.ShouldBeFiltered");

	UUDKUIResourceDataProvider_ShouldBeFiltered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicleBase.HandleDeadVehicleDriver
// (Defined, Public)

void AUDKVehicleBase::HandleDeadVehicleDriver()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleBase.HandleDeadVehicleDriver");

	AUDKVehicleBase_HandleDeadVehicleDriver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicleBase.DriverLeft
// (Defined, Public)

void AUDKVehicleBase::DriverLeft()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleBase.DriverLeft");

	AUDKVehicleBase_DriverLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicleBase.StopFiringWeapon
// (Defined, Simulated, Public)

void AUDKVehicleBase::StopFiringWeapon()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleBase.StopFiringWeapon");

	AUDKVehicleBase_StopFiringWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicleBase.BotFire
// (Defined, Public)
// Parameters:
// bool                           bFinished                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKVehicleBase::BotFire(bool bFinished)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleBase.BotFire");

	AUDKVehicleBase_BotFire_Params params;
	params.bFinished = bFinished;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicleBase.ChooseFireMode
// (Defined, Public)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char AUDKVehicleBase::ChooseFireMode()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleBase.ChooseFireMode");

	AUDKVehicleBase_ChooseFireMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicleBase.DetachDriver
// (Defined, Simulated, Public)
// Parameters:
// class APawn*                   P                              (Parm)

void AUDKVehicleBase::DetachDriver(class APawn* P)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleBase.DetachDriver");

	AUDKVehicleBase_DetachDriver_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicleBase.EjectDriver
// (Defined, Public, HasDefaults)

void AUDKVehicleBase::EjectDriver()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleBase.EjectDriver");

	AUDKVehicleBase_EjectDriver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicleBase.GetVehicleDrivingStatName
// (Defined, Public)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName AUDKVehicleBase::GetVehicleDrivingStatName()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleBase.GetVehicleDrivingStatName");

	AUDKVehicleBase_GetVehicleDrivingStatName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicleBase.ApplyWeaponEffects
// (Simulated, HasOptionalParms, Public)
// Parameters:
// int                            OverlayFlags                   (Parm)
// int                            SeatIndex                      (OptionalParm, Parm)

void AUDKVehicleBase::ApplyWeaponEffects(int OverlayFlags, int SeatIndex)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleBase.ApplyWeaponEffects");

	AUDKVehicleBase_ApplyWeaponEffects_Params params;
	params.OverlayFlags = OverlayFlags;
	params.SeatIndex = SeatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicleBase.DriverEnter
// (Defined, Public)
// Parameters:
// class APawn*                   P                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKVehicleBase::DriverEnter(class APawn* P)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleBase.DriverEnter");

	AUDKVehicleBase_DriverEnter_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicleBase.DrivingStatusChanged
// (Defined, Simulated, Public)

void AUDKVehicleBase::DrivingStatusChanged()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleBase.DrivingStatusChanged");

	AUDKVehicleBase_DrivingStatusChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicleBase.NeedToTurn
// (Defined, Public)
// Parameters:
// struct FVector                 targ                           (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKVehicleBase::NeedToTurn(const struct FVector& targ)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleBase.NeedToTurn");

	AUDKVehicleBase_NeedToTurn_Params params;
	params.targ = targ;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicleBase.GetDamageScaling
// (Defined, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AUDKVehicleBase::GetDamageScaling()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleBase.GetDamageScaling");

	AUDKVehicleBase_GetDamageScaling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicleBase.ServerChangeSeat
// (Net, NetReliable, Public, NetServer)
// Parameters:
// int                            RequestedSeat                  (Parm)

void AUDKVehicleBase::ServerChangeSeat(int RequestedSeat)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleBase.ServerChangeSeat");

	AUDKVehicleBase_ServerChangeSeat_Params params;
	params.RequestedSeat = RequestedSeat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicleBase.ServerAdjacentSeat
// (Net, NetReliable, Public, NetServer)
// Parameters:
// int                            Direction                      (Parm)
// class AController*             C                              (Parm)

void AUDKVehicleBase::ServerAdjacentSeat(int Direction, class AController* C)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleBase.ServerAdjacentSeat");

	AUDKVehicleBase_ServerAdjacentSeat_Params params;
	params.Direction = Direction;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicleBase.AdjacentSeat
// (Defined, Simulated, Public)
// Parameters:
// int                            Direction                      (Parm)
// class AController*             C                              (Parm)

void AUDKVehicleBase::AdjacentSeat(int Direction, class AController* C)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleBase.AdjacentSeat");

	AUDKVehicleBase_AdjacentSeat_Params params;
	params.Direction = Direction;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicleBase.SwitchWeapon
// (Defined, Simulated, Public)
// Parameters:
// unsigned char                  NewGroup                       (Parm)

void AUDKVehicleBase::SwitchWeapon(unsigned char NewGroup)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleBase.SwitchWeapon");

	AUDKVehicleBase_SwitchWeapon_Params params;
	params.NewGroup = NewGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicleBase.HoldGameObject
// (Simulated, Event, Public)
// Parameters:
// class AUDKCarriedObject*       GameObj                        (Parm)

void AUDKVehicleBase::HoldGameObject(class AUDKCarriedObject* GameObj)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleBase.HoldGameObject");

	AUDKVehicleBase_HoldGameObject_Params params;
	params.GameObj = GameObj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicle.UpdateHoverboardDustEffect
// (Event, Public)
// Parameters:
// float                          DustHeight                     (Parm)

void AUDKVehicle::UpdateHoverboardDustEffect(float DustHeight)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.UpdateHoverboardDustEffect");

	AUDKVehicle_UpdateHoverboardDustEffect_Params params;
	params.DustHeight = DustHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicle.PostInitRigidBody
// (Event, Public)
// Parameters:
// class UPrimitiveComponent*     PrimComp                       (Parm, EditInline)

void AUDKVehicle::PostInitRigidBody(class UPrimitiveComponent* PrimComp)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.PostInitRigidBody");

	AUDKVehicle_PostInitRigidBody_Params params;
	params.PrimComp = PrimComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicle.TakeFireDamage
// (Event, Public)

void AUDKVehicle::TakeFireDamage()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.TakeFireDamage");

	AUDKVehicle_TakeFireDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicle.CheckReset
// (Defined, Event, Public)

void AUDKVehicle::CheckReset()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.CheckReset");

	AUDKVehicle_CheckReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicle.TakeWaterDamage
// (Event, Public)

void AUDKVehicle::TakeWaterDamage()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.TakeWaterDamage");

	AUDKVehicle_TakeWaterDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicle.RBPenetrationDestroy
// (Defined, Event, Public)

void AUDKVehicle::RBPenetrationDestroy()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.RBPenetrationDestroy");

	AUDKVehicle_RBPenetrationDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicle.MorphTargetDestroyed
// (Simulated, Event, Public)
// Parameters:
// int                            MorphNodeIndex                 (Parm)

void AUDKVehicle::MorphTargetDestroyed(int MorphNodeIndex)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.MorphTargetDestroyed");

	AUDKVehicle_MorphTargetDestroyed_Params params;
	params.MorphNodeIndex = MorphNodeIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicle.ApplyMorphDamage
// (Native, Public)
// Parameters:
// struct FVector                 HitLocation                    (Parm)
// int                            Damage                         (Parm)
// struct FVector                 Momentum                       (Parm)

void AUDKVehicle::ApplyMorphDamage(const struct FVector& HitLocation, int Damage, const struct FVector& Momentum)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.ApplyMorphDamage");

	AUDKVehicle_ApplyMorphDamage_Params params;
	params.HitLocation = HitLocation;
	params.Damage = Damage;
	params.Momentum = Momentum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicle.UpdateDamageMaterial
// (Simulated, Native, Public)

void AUDKVehicle::UpdateDamageMaterial()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.UpdateDamageMaterial");

	AUDKVehicle_UpdateDamageMaterial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicle.InitDamageSkel
// (Simulated, Native, Public)

void AUDKVehicle::InitDamageSkel()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.InitDamageSkel");

	AUDKVehicle_InitDamageSkel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicle.SetHUDLocation
// (Simulated, Native, Public)
// Parameters:
// struct FVector                 NewHUDLocation                 (Parm)

void AUDKVehicle::SetHUDLocation(const struct FVector& NewHUDLocation)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.SetHUDLocation");

	AUDKVehicle_SetHUDLocation_Params params;
	params.NewHUDLocation = NewHUDLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicle.InUseableRange
// (Simulated, Native, Public)
// Parameters:
// class AUDKPlayerController*    PC                             (Parm)
// float                          Dist                           (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKVehicle::InUseableRange(class AUDKPlayerController* PC, float Dist)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.InUseableRange");

	AUDKVehicle_InUseableRange_Params params;
	params.PC = PC;
	params.Dist = Dist;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicle.NativePostRenderFor
// (Simulated, Native, Public)
// Parameters:
// class APlayerController*       PC                             (Parm)
// class UCanvas*                 Canvas                         (Parm)
// struct FVector                 CameraPosition                 (Parm)
// struct FVector                 CameraDir                      (Parm)

void AUDKVehicle::NativePostRenderFor(class APlayerController* PC, class UCanvas* Canvas, const struct FVector& CameraPosition, const struct FVector& CameraDir)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.NativePostRenderFor");

	AUDKVehicle_NativePostRenderFor_Params params;
	params.PC = PC;
	params.Canvas = Canvas;
	params.CameraPosition = CameraPosition;
	params.CameraDir = CameraDir;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicle.GetTeamNum
// (Simulated, Native, Public)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char AUDKVehicle::GetTeamNum()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.GetTeamNum");

	AUDKVehicle_GetTeamNum_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicle.SelfDestruct
// (Event, Public)
// Parameters:
// class AActor*                  ImpactedActor                  (Parm)

void AUDKVehicle::SelfDestruct(class AActor* ImpactedActor)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.SelfDestruct");

	AUDKVehicle_SelfDestruct_Params params;
	params.ImpactedActor = ImpactedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicle.CheckAutoDestruct
// (Simulated, Native, Public)
// Parameters:
// class ATeamInfo*               InstigatorTeam                 (Parm)
// float                          CheckRadius                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKVehicle::CheckAutoDestruct(class ATeamInfo* InstigatorTeam, float CheckRadius)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.CheckAutoDestruct");

	AUDKVehicle_CheckAutoDestruct_Params params;
	params.InstigatorTeam = InstigatorTeam;
	params.CheckRadius = CheckRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicle.GetMaxRiseForce
// (Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AUDKVehicle::GetMaxRiseForce()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.GetMaxRiseForce");

	AUDKVehicle_GetMaxRiseForce_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicle.JumpOutCheck
// (Event, Public)

void AUDKVehicle::JumpOutCheck()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.JumpOutCheck");

	AUDKVehicle_JumpOutCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicle.ReceivedHealthChange
// (Simulated, Event, Public)

void AUDKVehicle::ReceivedHealthChange()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.ReceivedHealthChange");

	AUDKVehicle_ReceivedHealthChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicle.PlayTakeHitEffects
// (Simulated, Event, Public)

void AUDKVehicle::PlayTakeHitEffects()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.PlayTakeHitEffects");

	AUDKVehicle_PlayTakeHitEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicle.OnTouchForcedDirVolume
// (Defined, Public)
// Parameters:
// class AUDKForcedDirectionVolume* Vol                            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKVehicle::OnTouchForcedDirVolume(class AUDKForcedDirectionVolume* Vol)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.OnTouchForcedDirVolume");

	AUDKVehicle_OnTouchForcedDirVolume_Params params;
	params.Vol = Vol;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicle.GetGravityZ
// (Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AUDKVehicle::GetGravityZ()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.GetGravityZ");

	AUDKVehicle_GetGravityZ_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicle.OnPropertyChange
// (Event, Public)
// Parameters:
// struct FName                   PropName                       (Parm)

void AUDKVehicle::OnPropertyChange(const struct FName& PropName)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.OnPropertyChange");

	AUDKVehicle_OnPropertyChange_Params params;
	params.PropName = PropName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicle.LockOnWarning
// (Simulated, Event, Public)
// Parameters:
// class AUDKProjectile*          IncomingMissile                (Parm)

void AUDKVehicle::LockOnWarning(class AUDKProjectile* IncomingMissile)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.LockOnWarning");

	AUDKVehicle_LockOnWarning_Params params;
	params.IncomingMissile = IncomingMissile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicle.GetRanOverDamageType
// (Defined, Public)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class UClass* AUDKVehicle::GetRanOverDamageType()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.GetRanOverDamageType");

	AUDKVehicle_GetRanOverDamageType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicle.IsSeatControllerReplicationViewer
// (Final, Native, Public)
// Parameters:
// int                            SeatIndex                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKVehicle::IsSeatControllerReplicationViewer(int SeatIndex)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.IsSeatControllerReplicationViewer");

	AUDKVehicle_IsSeatControllerReplicationViewer_Params params;
	params.SeatIndex = SeatIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicle.GetBarrelIndex
// (Simulated, Native, Public)
// Parameters:
// int                            SeatIndex                      (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AUDKVehicle::GetBarrelIndex(int SeatIndex)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.GetBarrelIndex");

	AUDKVehicle_GetBarrelIndex_Params params;
	params.SeatIndex = SeatIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicle.GetSeatPivotPoint
// (Simulated, Native, Public)
// Parameters:
// int                            SeatIndex                      (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AUDKVehicle::GetSeatPivotPoint(int SeatIndex)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.GetSeatPivotPoint");

	AUDKVehicle_GetSeatPivotPoint_Params params;
	params.SeatIndex = SeatIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicle.ForceWeaponRotation
// (Simulated, Native, Public)
// Parameters:
// int                            SeatIndex                      (Parm)
// struct FRotator                NewRotation                    (Parm)

void AUDKVehicle::ForceWeaponRotation(int SeatIndex, const struct FRotator& NewRotation)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.ForceWeaponRotation");

	AUDKVehicle_ForceWeaponRotation_Params params;
	params.SeatIndex = SeatIndex;
	params.NewRotation = NewRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicle.SeatFiringMode
// (Simulated, Native, HasOptionalParms, Public)
// Parameters:
// int                            SeatIndex                      (Parm)
// unsigned char                  NewFireMode                    (OptionalParm, Parm)
// bool                           bReadValue                     (OptionalParm, Parm)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char AUDKVehicle::SeatFiringMode(int SeatIndex, unsigned char NewFireMode, bool bReadValue)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.SeatFiringMode");

	AUDKVehicle_SeatFiringMode_Params params;
	params.SeatIndex = SeatIndex;
	params.NewFireMode = NewFireMode;
	params.bReadValue = bReadValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicle.SeatFlashCount
// (Simulated, Native, HasOptionalParms, Public)
// Parameters:
// int                            SeatIndex                      (Parm)
// unsigned char                  NewCount                       (OptionalParm, Parm)
// bool                           bReadValue                     (OptionalParm, Parm)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char AUDKVehicle::SeatFlashCount(int SeatIndex, unsigned char NewCount, bool bReadValue)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.SeatFlashCount");

	AUDKVehicle_SeatFlashCount_Params params;
	params.SeatIndex = SeatIndex;
	params.NewCount = NewCount;
	params.bReadValue = bReadValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicle.SeatFlashLocation
// (Simulated, Native, HasOptionalParms, Public)
// Parameters:
// int                            SeatIndex                      (Parm)
// struct FVector                 NewLoc                         (OptionalParm, Parm)
// bool                           bReadValue                     (OptionalParm, Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AUDKVehicle::SeatFlashLocation(int SeatIndex, const struct FVector& NewLoc, bool bReadValue)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.SeatFlashLocation");

	AUDKVehicle_SeatFlashLocation_Params params;
	params.SeatIndex = SeatIndex;
	params.NewLoc = NewLoc;
	params.bReadValue = bReadValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicle.SeatWeaponRotation
// (Simulated, Native, HasOptionalParms, Public)
// Parameters:
// int                            SeatIndex                      (Parm)
// struct FRotator                NewRot                         (OptionalParm, Parm)
// bool                           bReadValue                     (OptionalParm, Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator AUDKVehicle::SeatWeaponRotation(int SeatIndex, const struct FRotator& NewRot, bool bReadValue)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.SeatWeaponRotation");

	AUDKVehicle_SeatWeaponRotation_Params params;
	params.SeatIndex = SeatIndex;
	params.NewRot = NewRot;
	params.bReadValue = bReadValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKWeaponPawn.GetTargetLocation
// (Simulated, Native, HasOptionalParms, Public)
// Parameters:
// class AActor*                  RequestedBy                    (OptionalParm, Parm)
// bool                           bRequestAlternateLoc           (OptionalParm, Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AUDKWeaponPawn::GetTargetLocation(class AActor* RequestedBy, bool bRequestAlternateLoc)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKWeaponPawn.GetTargetLocation");

	AUDKWeaponPawn_GetTargetLocation_Params params;
	params.RequestedBy = RequestedBy;
	params.bRequestAlternateLoc = bRequestAlternateLoc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicleFactory.GetTeamNum
// (Simulated, Native, Public)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char AUDKVehicleFactory::GetTeamNum()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleFactory.GetTeamNum");

	AUDKVehicleFactory_GetTeamNum_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicleFactory.SetHUDLocation
// (Simulated, Native, Public)
// Parameters:
// struct FVector                 NewHUDLocation                 (Parm)

void AUDKVehicleFactory::SetHUDLocation(const struct FVector& NewHUDLocation)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleFactory.SetHUDLocation");

	AUDKVehicleFactory_SetHUDLocation_Params params;
	params.NewHUDLocation = NewHUDLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicleFactory.SpawnVehicle
// (Event, Public)

void AUDKVehicleFactory::SpawnVehicle()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleFactory.SpawnVehicle");

	AUDKVehicleFactory_SpawnVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicleSimHoverboard.UpdateLeanConstraint
// (Native, Public)
// Parameters:
// class URB_ConstraintInstance*  LeanUprightConstraintInstance  (Parm)
// struct FVector                 LeanY                          (Parm)
// struct FVector                 LeanZ                          (Parm)

void UUDKVehicleSimHoverboard::UpdateLeanConstraint(class URB_ConstraintInstance* LeanUprightConstraintInstance, const struct FVector& LeanY, const struct FVector& LeanZ)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleSimHoverboard.UpdateLeanConstraint");

	UUDKVehicleSimHoverboard_UpdateLeanConstraint_Params params;
	params.LeanUprightConstraintInstance = LeanUprightConstraintInstance;
	params.LeanY = LeanY;
	params.LeanZ = LeanZ;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicleSimHoverboard.InitWheels
// (Native, Public)
// Parameters:
// class AUDKVehicle*             Vehicle                        (Parm)

void UUDKVehicleSimHoverboard::InitWheels(class AUDKVehicle* Vehicle)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleSimHoverboard.InitWheels");

	UUDKVehicleSimHoverboard_InitWheels_Params params;
	params.Vehicle = Vehicle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicleWheel.OldEffectFinished
// (Defined, Public)
// Parameters:
// class UParticleSystemComponent* PSystem                        (Parm, EditInline)

void UUDKVehicleWheel::OldEffectFinished(class UParticleSystemComponent* PSystem)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleWheel.OldEffectFinished");

	UUDKVehicleWheel_OldEffectFinished_Params params;
	params.PSystem = PSystem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicleWheel.SetParticleEffect
// (Defined, Event, Public)
// Parameters:
// class AUDKVehicle*             OwnerVehicle                   (Parm)
// class UParticleSystem*         NewTemplate                    (Parm)

void UUDKVehicleWheel::SetParticleEffect(class AUDKVehicle* OwnerVehicle, class UParticleSystem* NewTemplate)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleWheel.SetParticleEffect");

	UUDKVehicleWheel_SetParticleEffect_Params params;
	params.OwnerVehicle = OwnerVehicle;
	params.NewTemplate = NewTemplate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKWeapon.SetPosition
// (Simulated, Event, Public)
// Parameters:
// class AUDKPawn*                Holder                         (Parm)

void AUDKWeapon::SetPosition(class AUDKPawn* Holder)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKWeapon.SetPosition");

	AUDKWeapon_SetPosition_Params params;
	params.Holder = Holder;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKWeapon.EnsureWeaponOverlayComponentLast
// (Native, Public)

void AUDKWeapon::EnsureWeaponOverlayComponentLast()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKWeapon.EnsureWeaponOverlayComponentLast");

	AUDKWeapon_EnsureWeaponOverlayComponentLast_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKWeapon.BestMode
// (Public)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char AUDKWeapon::BestMode()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKWeapon.BestMode");

	AUDKWeapon_BestMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKWeapon.IsAimCorrect
// (Simulated, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKWeapon::IsAimCorrect()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKWeapon.IsAimCorrect");

	AUDKWeapon_IsAimCorrect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKWeapon.PostBeginPlay
// (Defined, Simulated, Public)

void AUDKWeapon::PostBeginPlay()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKWeapon.PostBeginPlay");

	AUDKWeapon_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKAnimBlendBase.TickAnim
// (Event, Public)
// Parameters:
// float                          DeltaSeconds                   (Parm)

void UUDKAnimBlendBase::TickAnim(float DeltaSeconds)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKAnimBlendBase.TickAnim");

	UUDKAnimBlendBase_TickAnim_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKAnimBlendBase.GetAnimDuration
// (Final, Native, Public)
// Parameters:
// int                            ChildIndex                     (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UUDKAnimBlendBase::GetAnimDuration(int ChildIndex)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKAnimBlendBase.GetAnimDuration");

	UUDKAnimBlendBase_GetAnimDuration_Params params;
	params.ChildIndex = ChildIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKAnimBlendBase.GetBlendTime
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// int                            ChildIndex                     (Parm)
// bool                           bGetDefault                    (OptionalParm, Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UUDKAnimBlendBase::GetBlendTime(int ChildIndex, bool bGetDefault)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKAnimBlendBase.GetBlendTime");

	UUDKAnimBlendBase_GetBlendTime_Params params;
	params.ChildIndex = ChildIndex;
	params.bGetDefault = bGetDefault;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKAnimBlendByFlying.UpdateFlyingState
// (Native, Public)

void UUDKAnimBlendByFlying::UpdateFlyingState()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKAnimBlendByFlying.UpdateFlyingState");

	UUDKAnimBlendByFlying_UpdateFlyingState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKAnimBlendByPhysicsVolume.PhysicsVolumeChanged
// (Defined, Event, Public)
// Parameters:
// class APhysicsVolume*          NewVolume                      (Parm)

void UUDKAnimBlendByPhysicsVolume::PhysicsVolumeChanged(class APhysicsVolume* NewVolume)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKAnimBlendByPhysicsVolume.PhysicsVolumeChanged");

	UUDKAnimBlendByPhysicsVolume_PhysicsVolumeChanged_Params params;
	params.NewVolume = NewVolume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKAnimBlendByVehicle.UpdateVehicleState
// (Native, Public)

void UUDKAnimBlendByVehicle::UpdateVehicleState()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKAnimBlendByVehicle.UpdateVehicleState");

	UUDKAnimBlendByVehicle_UpdateVehicleState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKAnimBlendByDriving.UpdateDrivingState
// (Native, Public)

void UUDKAnimBlendByDriving::UpdateDrivingState()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKAnimBlendByDriving.UpdateDrivingState");

	UUDKAnimBlendByDriving_UpdateDrivingState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKAnimBlendByWeapon.AnimStopFire
// (Defined, Event, HasOptionalParms, Public)
// Parameters:
// float                          SpecialBlendTime               (OptionalParm, Parm)

void UUDKAnimBlendByWeapon::AnimStopFire(float SpecialBlendTime)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKAnimBlendByWeapon.AnimStopFire");

	UUDKAnimBlendByWeapon_AnimStopFire_Params params;
	params.SpecialBlendTime = SpecialBlendTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKAnimBlendByWeapon.AnimFire
// (Defined, HasOptionalParms, Public)
// Parameters:
// struct FName                   FireSequence                   (Parm)
// bool                           bAutoFire                      (Parm)
// float                          AnimRate                       (OptionalParm, Parm)
// float                          SpecialBlendTime               (OptionalParm, Parm)
// struct FName                   LoopSequence                   (OptionalParm, Parm)

void UUDKAnimBlendByWeapon::AnimFire(const struct FName& FireSequence, bool bAutoFire, float AnimRate, float SpecialBlendTime, const struct FName& LoopSequence)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKAnimBlendByWeapon.AnimFire");

	UUDKAnimBlendByWeapon_AnimFire_Params params;
	params.FireSequence = FireSequence;
	params.bAutoFire = bAutoFire;
	params.AnimRate = AnimRate;
	params.SpecialBlendTime = SpecialBlendTime;
	params.LoopSequence = LoopSequence;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKAnimNodeFramePlayer.SetAnimPosition
// (Native, Public)
// Parameters:
// float                          Perc                           (Parm)

void UUDKAnimNodeFramePlayer::SetAnimPosition(float Perc)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKAnimNodeFramePlayer.SetAnimPosition");

	UUDKAnimNodeFramePlayer_SetAnimPosition_Params params;
	params.Perc = Perc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKAnimNodeFramePlayer.SetAnimation
// (Native, Public)
// Parameters:
// struct FName                   Sequence                       (Parm)
// float                          RateScale                      (Parm)

void UUDKAnimNodeFramePlayer::SetAnimation(const struct FName& Sequence, float RateScale)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKAnimNodeFramePlayer.SetAnimation");

	UUDKAnimNodeFramePlayer_SetAnimation_Params params;
	params.Sequence = Sequence;
	params.RateScale = RateScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKAnimNodeJumpLeanOffset.SetLeanWeight
// (Final, Native, Public)
// Parameters:
// float                          WeightTarget                   (Parm)
// float                          BlendTime                      (Parm)

void UUDKAnimNodeJumpLeanOffset::SetLeanWeight(float WeightTarget, float BlendTime)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKAnimNodeJumpLeanOffset.SetLeanWeight");

	UUDKAnimNodeJumpLeanOffset_SetLeanWeight_Params params;
	params.WeightTarget = WeightTarget;
	params.BlendTime = BlendTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKAnimNodeSequence.OnInit
// (Defined, Event, Public)

void UUDKAnimNodeSequence::OnInit()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKAnimNodeSequence.OnInit");

	UUDKAnimNodeSequence_OnInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKAnimNodeSequence.PlayAnimationSet
// (Native, Public)
// Parameters:
// TArray<struct FName>           Sequences                      (Parm, NeedCtorLink)
// float                          SeqRate                        (Parm)
// bool                           bLoopLast                      (Parm)

void UUDKAnimNodeSequence::PlayAnimationSet(TArray<struct FName> Sequences, float SeqRate, bool bLoopLast)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKAnimNodeSequence.PlayAnimationSet");

	UUDKAnimNodeSequence_PlayAnimationSet_Params params;
	params.Sequences = Sequences;
	params.SeqRate = SeqRate;
	params.bLoopLast = bLoopLast;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKAnimNodeSequence.PlayAnimation
// (Native, Public)
// Parameters:
// struct FName                   Sequence                       (Parm)
// float                          SeqRate                        (Parm)
// bool                           bSeqLoop                       (Parm)

void UUDKAnimNodeSequence::PlayAnimation(const struct FName& Sequence, float SeqRate, bool bSeqLoop)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKAnimNodeSequence.PlayAnimation");

	UUDKAnimNodeSequence_PlayAnimation_Params params;
	params.Sequence = Sequence;
	params.SeqRate = SeqRate;
	params.bSeqLoop = bSeqLoop;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKSkelControl_CantileverBeam.EntireBeamVelocity
// (Defined, Public, Delegate)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UUDKSkelControl_CantileverBeam::EntireBeamVelocity()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKSkelControl_CantileverBeam.EntireBeamVelocity");

	UUDKSkelControl_CantileverBeam_EntireBeamVelocity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKSkelControl_Damage.RestorePart
// (Defined, Simulated, Event, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UUDKSkelControl_Damage::RestorePart()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKSkelControl_Damage.RestorePart");

	UUDKSkelControl_Damage_RestorePart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKSkelControl_Damage.BreakApartOnDeath
// (Defined, Simulated, Event, Public)
// Parameters:
// struct FVector                 PartLocation                   (Parm)
// bool                           bIsVisible                     (Parm)

void UUDKSkelControl_Damage::BreakApartOnDeath(const struct FVector& PartLocation, bool bIsVisible)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKSkelControl_Damage.BreakApartOnDeath");

	UUDKSkelControl_Damage_BreakApartOnDeath_Params params;
	params.PartLocation = PartLocation;
	params.bIsVisible = bIsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKSkelControl_Damage.BreakApart
// (Defined, Simulated, Event, Public)
// Parameters:
// struct FVector                 PartLocation                   (Parm)
// bool                           bIsVisible                     (Parm)

void UUDKSkelControl_Damage::BreakApart(const struct FVector& PartLocation, bool bIsVisible)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKSkelControl_Damage.BreakApart");

	UUDKSkelControl_Damage_BreakApart_Params params;
	params.PartLocation = PartLocation;
	params.bIsVisible = bIsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKSkelControl_MassBoneScaling.GetBoneScale
// (Final, Native, Public)
// Parameters:
// struct FName                   BoneName                       (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UUDKSkelControl_MassBoneScaling::GetBoneScale(const struct FName& BoneName)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKSkelControl_MassBoneScaling.GetBoneScale");

	UUDKSkelControl_MassBoneScaling_GetBoneScale_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKSkelControl_MassBoneScaling.SetBoneScale
// (Final, Native, Public)
// Parameters:
// struct FName                   BoneName                       (Parm)
// float                          Scale                          (Parm)

void UUDKSkelControl_MassBoneScaling::SetBoneScale(const struct FName& BoneName, float Scale)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKSkelControl_MassBoneScaling.SetBoneScale");

	UUDKSkelControl_MassBoneScaling_SetBoneScale_Params params;
	params.BoneName = BoneName;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKSkelControl_TurretConstrained.WouldConstrainPitch
// (Final, Native, Public)
// Parameters:
// int                            TestPitch                      (Parm)
// class USkeletalMeshComponent*  SkelComp                       (Parm, EditInline)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUDKSkelControl_TurretConstrained::WouldConstrainPitch(int TestPitch, class USkeletalMeshComponent* SkelComp)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKSkelControl_TurretConstrained.WouldConstrainPitch");

	UUDKSkelControl_TurretConstrained_WouldConstrainPitch_Params params;
	params.TestPitch = TestPitch;
	params.SkelComp = SkelComp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKSkelControl_TurretConstrained.InitTurret
// (Final, Native, Public)
// Parameters:
// struct FRotator                InitRot                        (Parm)
// class USkeletalMeshComponent*  SkelComp                       (Parm, EditInline)

void UUDKSkelControl_TurretConstrained::InitTurret(const struct FRotator& InitRot, class USkeletalMeshComponent* SkelComp)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKSkelControl_TurretConstrained.InitTurret");

	UUDKSkelControl_TurretConstrained_InitTurret_Params params;
	params.InitRot = InitRot;
	params.SkelComp = SkelComp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKSkelControl_TurretConstrained.OnTurretStatusChange
// (Public, Delegate)
// Parameters:
// bool                           bIsMoving                      (Parm)

void UUDKSkelControl_TurretConstrained::OnTurretStatusChange(bool bIsMoving)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKSkelControl_TurretConstrained.OnTurretStatusChange");

	UUDKSkelControl_TurretConstrained_OnTurretStatusChange_Params params;
	params.bIsMoving = bIsMoving;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.SimplePawn.GetPawnViewLocation
// (Defined, Simulated, Public)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector ASimplePawn::GetPawnViewLocation()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.SimplePawn.GetPawnViewLocation");

	ASimplePawn_GetPawnViewLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.SimplePawn.TickSpecial
// (Defined, Event, Public, HasDefaults)
// Parameters:
// float                          DeltaTime                      (Parm)

void ASimplePawn::TickSpecial(float DeltaTime)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.SimplePawn.TickSpecial");

	ASimplePawn_TickSpecial_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.SimplePawn.CalcCamera
// (Defined, Simulated, Public, HasOutParms)
// Parameters:
// float                          fDeltaTime                     (Parm)
// struct FVector                 out_CamLoc                     (Parm, OutParm)
// struct FRotator                out_CamRot                     (Parm, OutParm)
// float                          out_FOV                        (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ASimplePawn::CalcCamera(float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.SimplePawn.CalcCamera");

	ASimplePawn_CalcCamera_Params params;
	params.fDeltaTime = fDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_CamLoc != nullptr)
		*out_CamLoc = params.out_CamLoc;
	if (out_CamRot != nullptr)
		*out_CamRot = params.out_CamRot;
	if (out_FOV != nullptr)
		*out_FOV = params.out_FOV;

	return params.ReturnValue;
}


// Function UDKBase.SimplePawn.FixedView
// (Defined, Exec, Public)

void ASimplePawn::FixedView()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.SimplePawn.FixedView");

	ASimplePawn_FixedView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.SimplePawn.PostBeginPlay
// (Defined, Simulated, Public)

void ASimplePawn::PostBeginPlay()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.SimplePawn.PostBeginPlay");

	ASimplePawn_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.SimplePC.SetFootstepsToSnow
// (Exec, Public)

void ASimplePC::SetFootstepsToSnow()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.SimplePC.SetFootstepsToSnow");

	ASimplePC_SetFootstepsToSnow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.SimplePC.SetFootstepsToStone
// (Exec, Public)

void ASimplePC::SetFootstepsToStone()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.SimplePC.SetFootstepsToStone");

	ASimplePC_SetFootstepsToStone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.SimplePC.PlayerTick
// (Defined, Public, HasDefaults)
// Parameters:
// float                          DeltaTime                      (Parm)

void ASimplePC::PlayerTick(float DeltaTime)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.SimplePC.PlayerTick");

	ASimplePC_PlayerTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.SimplePC.GetPlayerViewPoint
// (Defined, Simulated, Event, Public, HasOutParms)
// Parameters:
// struct FVector                 out_Location                   (Parm, OutParm)
// struct FRotator                out_Rotation                   (Parm, OutParm)

void ASimplePC::GetPlayerViewPoint(struct FVector* out_Location, struct FRotator* out_Rotation)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.SimplePC.GetPlayerViewPoint");

	ASimplePC_GetPlayerViewPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_Location != nullptr)
		*out_Location = params.out_Location;
	if (out_Rotation != nullptr)
		*out_Rotation = params.out_Rotation;
}


// Function UDKBase.SimplePC.NotifyDirectorControl
// (Defined, Event, Public)
// Parameters:
// bool                           bNowControlling                (Parm)
// class USeqAct_Interp*          CurrentMatinee                 (Parm)

void ASimplePC::NotifyDirectorControl(bool bNowControlling, class USeqAct_Interp* CurrentMatinee)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.SimplePC.NotifyDirectorControl");

	ASimplePC_NotifyDirectorControl_Params params;
	params.bNowControlling = bNowControlling;
	params.CurrentMatinee = CurrentMatinee;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.SimplePC.OffsetMatineeTouch
// (Defined, Public)
// Parameters:
// int                            Handle                         (Parm)
// TEnumAsByte<ETouchType>        Type                           (Parm)
// struct FVector2D               TouchLocation                  (Parm)
// float                          DeviceTimestamp                (Parm)
// int                            TouchpadIndex                  (Parm)

void ASimplePC::OffsetMatineeTouch(int Handle, TEnumAsByte<ETouchType> Type, const struct FVector2D& TouchLocation, float DeviceTimestamp, int TouchpadIndex)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.SimplePC.OffsetMatineeTouch");

	ASimplePC_OffsetMatineeTouch_Params params;
	params.Handle = Handle;
	params.Type = Type;
	params.TouchLocation = TouchLocation;
	params.DeviceTimestamp = DeviceTimestamp;
	params.TouchpadIndex = TouchpadIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.SimplePC.ActivateControlGroup
// (Defined, Public)

void ASimplePC::ActivateControlGroup()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.SimplePC.ActivateControlGroup");

	ASimplePC_ActivateControlGroup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.SimplePC.UpdateCameraBreathing
// (Defined, Simulated, Public, HasDefaults)

void ASimplePC::UpdateCameraBreathing()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.SimplePC.UpdateCameraBreathing");

	ASimplePC_UpdateCameraBreathing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.SimplePC.CheckDistanceToDestination
// (Simulated, Public)
// Parameters:
// float                          DistToDestination              (Parm)

void ASimplePC::CheckDistanceToDestination(float DistToDestination)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.SimplePC.CheckDistanceToDestination");

	ASimplePC_CheckDistanceToDestination_Params params;
	params.DistToDestination = DistToDestination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.SimplePC.ProcessViewRotation
// (Defined, Public, HasOutParms, HasDefaults)
// Parameters:
// float                          DeltaTime                      (Parm)
// struct FRotator                out_ViewRotation               (Parm, OutParm)
// struct FRotator                DeltaRot                       (Parm)

void ASimplePC::ProcessViewRotation(float DeltaTime, const struct FRotator& DeltaRot, struct FRotator* out_ViewRotation)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.SimplePC.ProcessViewRotation");

	ASimplePC_ProcessViewRotation_Params params;
	params.DeltaTime = DeltaTime;
	params.DeltaRot = DeltaRot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_ViewRotation != nullptr)
		*out_ViewRotation = params.out_ViewRotation;
}


// Function UDKBase.SimplePC.UpdateRotation
// (Defined, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void ASimplePC::UpdateRotation(float DeltaTime)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.SimplePC.UpdateRotation");

	ASimplePC_UpdateRotation_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.SimplePC.PlayerMove
// (Defined, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void ASimplePC::PlayerMove(float DeltaTime)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.SimplePC.PlayerMove");

	ASimplePC_PlayerMove_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.SimplePC.SetNextFootstepDistance
// (Defined, Public)

void ASimplePC::SetNextFootstepDistance()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.SimplePC.SetNextFootstepDistance");

	ASimplePC_SetNextFootstepDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.SimplePC.IsStickMoveActive
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ASimplePC::IsStickMoveActive()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.SimplePC.IsStickMoveActive");

	ASimplePC_IsStickMoveActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.SimplePC.PostBeginPlay
// (Defined, Simulated, Public)

void ASimplePC::PostBeginPlay()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.SimplePC.PostBeginPlay");

	ASimplePC_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.SimplePC.SetupZones
// (Defined, Public)

void ASimplePC::SetupZones()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.SimplePC.SetupZones");

	ASimplePC_SetupZones_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.SimplePC.ReceivedGameClass
// (Defined, Simulated, Public)
// Parameters:
// class UClass*                  GameClass                      (Parm)

void ASimplePC::ReceivedGameClass(class UClass* GameClass)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.SimplePC.ReceivedGameClass");

	ASimplePC_ReceivedGameClass_Params params;
	params.GameClass = GameClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.SimplePC.OnConsoleCommand
// (Defined, Public)
// Parameters:
// class USeqAct_ConsoleCommand*  inAction                       (Parm)

void ASimplePC::OnConsoleCommand(class USeqAct_ConsoleCommand* inAction)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.SimplePC.OnConsoleCommand");

	ASimplePC_OnConsoleCommand_Params params;
	params.inAction = inAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.SimplePC.InitInputSystem
// (Defined, Event, Public)

void ASimplePC::InitInputSystem()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.SimplePC.InitInputSystem");

	ASimplePC_InitInputSystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.CastleGame.SetGameType
// (Defined, Event, Static, Public)
// Parameters:
// struct FString                 MapName                        (Parm, NeedCtorLink)
// struct FString                 Options                        (Parm, NeedCtorLink)
// struct FString                 Portal                         (Parm, NeedCtorLink)
// class UClass*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class UClass* ACastleGame::STATIC_SetGameType(const struct FString& MapName, const struct FString& Options, const struct FString& Portal)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CastleGame.SetGameType");

	ACastleGame_SetGameType_Params params;
	params.MapName = MapName;
	params.Options = Options;
	params.Portal = Portal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.CastleGame.PreventDeath
// (Defined, Public)
// Parameters:
// class APawn*                   KilledPawn                     (Parm)
// class AController*             Killer                         (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FVector                 HitLocation                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ACastleGame::PreventDeath(class APawn* KilledPawn, class AController* Killer, class UClass* DamageType, const struct FVector& HitLocation)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CastleGame.PreventDeath");

	ACastleGame_PreventDeath_Params params;
	params.KilledPawn = KilledPawn;
	params.Killer = Killer;
	params.DamageType = DamageType;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.CastleGame.OnEngineHasLoaded
// (Event, Public)

void ACastleGame::OnEngineHasLoaded()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CastleGame.OnEngineHasLoaded");

	ACastleGame_OnEngineHasLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.MobileHUDExt.FlashSticks
// (Defined, Public)

void AMobileHUDExt::FlashSticks()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.MobileHUDExt.FlashSticks");

	AMobileHUDExt_FlashSticks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.MobileHUDExt.DrawMobileZone_Joystick
// (Defined, Public, HasDefaults)
// Parameters:
// class UMobileInputZone*        Zone                           (Parm)

void AMobileHUDExt::DrawMobileZone_Joystick(class UMobileInputZone* Zone)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.MobileHUDExt.DrawMobileZone_Joystick");

	AMobileHUDExt_DrawMobileZone_Joystick_Params params;
	params.Zone = Zone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.MobileHUDExt.DrawMobileZone_Slider
// (Defined, Public, HasDefaults)
// Parameters:
// class UMobileInputZone*        Zone                           (Parm)

void AMobileHUDExt::DrawMobileZone_Slider(class UMobileInputZone* Zone)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.MobileHUDExt.DrawMobileZone_Slider");

	AMobileHUDExt_DrawMobileZone_Slider_Params params;
	params.Zone = Zone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.MobileHUDExt.PostRenderBenchmarkModeRunning
// (Defined, Public)

void AMobileHUDExt::PostRenderBenchmarkModeRunning()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.MobileHUDExt.PostRenderBenchmarkModeRunning");

	AMobileHUDExt_PostRenderBenchmarkModeRunning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.MobileHUDExt.PostRenderBenchmarkModeCompleted
// (Defined, Public)

void AMobileHUDExt::PostRenderBenchmarkModeCompleted()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.MobileHUDExt.PostRenderBenchmarkModeCompleted");

	AMobileHUDExt_PostRenderBenchmarkModeCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.MobileHUDExt.PostRenderAttractMode
// (Defined, Public)

void AMobileHUDExt::PostRenderAttractMode()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.MobileHUDExt.PostRenderAttractMode");

	AMobileHUDExt_PostRenderAttractMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.MobileHUDExt.PostRender
// (Defined, Public)

void AMobileHUDExt::PostRender()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.MobileHUDExt.PostRender");

	AMobileHUDExt_PostRender_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.MobileHUDExt.ShowMobileHud
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AMobileHUDExt::ShowMobileHud()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.MobileHUDExt.ShowMobileHud");

	AMobileHUDExt_ShowMobileHud_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.MobileHUDExt.ConditionallyDrawTapToMoveEffect
// (Defined, Public)

void AMobileHUDExt::ConditionallyDrawTapToMoveEffect()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.MobileHUDExt.ConditionallyDrawTapToMoveEffect");

	AMobileHUDExt_ConditionallyDrawTapToMoveEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.MobileHUDExt.StartTapToMoveEffect
// (Defined, Public)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void AMobileHUDExt::StartTapToMoveEffect(float X, float Y)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.MobileHUDExt.StartTapToMoveEffect");

	AMobileHUDExt_StartTapToMoveEffect_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.CastlePC.SetFootstepsToSnow
// (Exec, Public)

void ACastlePC::SetFootstepsToSnow()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CastlePC.SetFootstepsToSnow");

	ACastlePC_SetFootstepsToSnow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.CastlePC.SetFootstepsToStone
// (Exec, Public)

void ACastlePC::SetFootstepsToStone()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CastlePC.SetFootstepsToStone");

	ACastlePC_SetFootstepsToStone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.CastlePC.StartTutorials
// (Defined, Public)

void ACastlePC::StartTutorials()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CastlePC.StartTutorials");

	ACastlePC_StartTutorials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.CastlePC.FlashHelp
// (Defined, Exec, Public)
// Parameters:
// float                          Duration                       (Parm)

void ACastlePC::FlashHelp(float Duration)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CastlePC.FlashHelp");

	ACastlePC_FlashHelp_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.CastlePC.ShowSplash
// (Defined, Exec, Public)

void ACastlePC::ShowSplash()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CastlePC.ShowSplash");

	ACastlePC_ShowSplash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.CastlePC.PlayerTick
// (Defined, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void ACastlePC::PlayerTick(float DeltaTime)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CastlePC.PlayerTick");

	ACastlePC_PlayerTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.CastlePC.ProcessMenuSlide
// (Defined, Public)
// Parameters:
// class UMobileInputZone*        Zone                           (Parm)
// TEnumAsByte<ETouchType>        EventType                      (Parm)
// int                            SlideValue                     (Parm)
// struct FVector2D               ViewportSizes                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ACastlePC::ProcessMenuSlide(class UMobileInputZone* Zone, TEnumAsByte<ETouchType> EventType, int SlideValue, const struct FVector2D& ViewportSizes)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CastlePC.ProcessMenuSlide");

	ACastlePC_ProcessMenuSlide_Params params;
	params.Zone = Zone;
	params.EventType = EventType;
	params.SlideValue = SlideValue;
	params.ViewportSizes = ViewportSizes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.CastlePC.MenuSliderTap
// (Defined, Public)
// Parameters:
// class UMobileInputZone*        Zone                           (Parm)
// TEnumAsByte<ETouchType>        EventType                      (Parm)
// struct FVector2D               TouchLocation                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ACastlePC::MenuSliderTap(class UMobileInputZone* Zone, TEnumAsByte<ETouchType> EventType, const struct FVector2D& TouchLocation)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CastlePC.MenuSliderTap");

	ACastlePC_MenuSliderTap_Params params;
	params.Zone = Zone;
	params.EventType = EventType;
	params.TouchLocation = TouchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.CastlePC.OpenMenu
// (Defined, Public)

void ACastlePC::OpenMenu()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CastlePC.OpenMenu");

	ACastlePC_OpenMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.CastlePC.ResetMenu
// (Defined, Public)

void ACastlePC::ResetMenu()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CastlePC.ResetMenu");

	ACastlePC_ResetMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.CastlePC.AutoSlideSettings
// (Defined, Public)
// Parameters:
// float                          Destination                    (Parm)

void ACastlePC::AutoSlideSettings(float Destination)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CastlePC.AutoSlideSettings");

	ACastlePC_AutoSlideSettings_Params params;
	params.Destination = Destination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.CastlePC.AutoSlide
// (Defined, Public)
// Parameters:
// float                          Destination                    (Parm)

void ACastlePC::AutoSlide(float Destination)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CastlePC.AutoSlide");

	ACastlePC_AutoSlide_Params params;
	params.Destination = Destination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.CastlePC.ExitAttractTap
// (Defined, Public)
// Parameters:
// class UMobileInputZone*        Zone                           (Parm)
// TEnumAsByte<ETouchType>        EventType                      (Parm)
// struct FVector2D               TouchLocation                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ACastlePC::ExitAttractTap(class UMobileInputZone* Zone, TEnumAsByte<ETouchType> EventType, const struct FVector2D& TouchLocation)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CastlePC.ExitAttractTap");

	ACastlePC_ExitAttractTap_Params params;
	params.Zone = Zone;
	params.EventType = EventType;
	params.TouchLocation = TouchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.CastlePC.ExitAttractMode
// (Defined, Exec, Public)

void ACastlePC::ExitAttractMode()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CastlePC.ExitAttractMode");

	ACastlePC_ExitAttractMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.CastlePC.OnFlyThroughLoopCompleted
// (Defined, Exec, Public)

void ACastlePC::OnFlyThroughLoopCompleted()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CastlePC.OnFlyThroughLoopCompleted");

	ACastlePC_OnFlyThroughLoopCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.CastlePC.EnterAttractMode
// (Defined, Exec, HasOptionalParms, Public)
// Parameters:
// bool                           BeginBenchmarking              (OptionalParm, Parm)

void ACastlePC::EnterAttractMode(bool BeginBenchmarking)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CastlePC.EnterAttractMode");

	ACastlePC_EnterAttractMode_Params params;
	params.BeginBenchmarking = BeginBenchmarking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.CastlePC.NotifyDirectorControl
// (Defined, Event, Public)
// Parameters:
// bool                           bNowControlling                (Parm)
// class USeqAct_Interp*          CurrentMatinee                 (Parm)

void ACastlePC::NotifyDirectorControl(bool bNowControlling, class USeqAct_Interp* CurrentMatinee)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CastlePC.NotifyDirectorControl");

	ACastlePC_NotifyDirectorControl_Params params;
	params.bNowControlling = bNowControlling;
	params.CurrentMatinee = CurrentMatinee;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.CastlePC.CheckDistanceToDestination
// (Defined, Simulated, Public)
// Parameters:
// float                          DistToDestination              (Parm)

void ACastlePC::CheckDistanceToDestination(float DistToDestination)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CastlePC.CheckDistanceToDestination");

	ACastlePC_CheckDistanceToDestination_Params params;
	params.DistToDestination = DistToDestination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.CastlePC.ProcessViewRotation
// (Defined, Public, HasOutParms, HasDefaults)
// Parameters:
// float                          DeltaTime                      (Parm)
// struct FRotator                out_ViewRotation               (Parm, OutParm)
// struct FRotator                DeltaRot                       (Parm)

void ACastlePC::ProcessViewRotation(float DeltaTime, const struct FRotator& DeltaRot, struct FRotator* out_ViewRotation)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CastlePC.ProcessViewRotation");

	ACastlePC_ProcessViewRotation_Params params;
	params.DeltaTime = DeltaTime;
	params.DeltaRot = DeltaRot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_ViewRotation != nullptr)
		*out_ViewRotation = params.out_ViewRotation;
}


// Function UDKBase.CastlePC.PlayerLookAtDestination
// (Defined, Public)

void ACastlePC::PlayerLookAtDestination()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CastlePC.PlayerLookAtDestination");

	ACastlePC_PlayerLookAtDestination_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.CastlePC.DoTapToMove
// (Defined, Public)
// Parameters:
// struct FVector                 NewDestination                 (Parm)
// bool                           bShouldLookAtDestination       (Parm)

void ACastlePC::DoTapToMove(const struct FVector& NewDestination, bool bShouldLookAtDestination)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CastlePC.DoTapToMove");

	ACastlePC_DoTapToMove_Params params;
	params.NewDestination = NewDestination;
	params.bShouldLookAtDestination = bShouldLookAtDestination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.CastlePC.TapToMoveTap
// (Defined, Public, HasDefaults)
// Parameters:
// class UMobileInputZone*        Zone                           (Parm)
// TEnumAsByte<ETouchType>        EventType                      (Parm)
// struct FVector2D               TouchLocation                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ACastlePC::TapToMoveTap(class UMobileInputZone* Zone, TEnumAsByte<ETouchType> EventType, const struct FVector2D& TouchLocation)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CastlePC.TapToMoveTap");

	ACastlePC_TapToMoveTap_Params params;
	params.Zone = Zone;
	params.EventType = EventType;
	params.TouchLocation = TouchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.CastlePC.TraceForTapToMove
// (Defined, Simulated, Public, HasOutParms, HasDefaults)
// Parameters:
// class APawn*                   TraceOwner                     (Parm)
// struct FVector                 HitLocation                    (Parm, OutParm)
// struct FVector                 HitNormal                      (Parm, OutParm)
// struct FVector                 End                            (Parm)
// struct FVector                 Start                          (Parm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* ACastlePC::TraceForTapToMove(class APawn* TraceOwner, const struct FVector& End, const struct FVector& Start, struct FVector* HitLocation, struct FVector* HitNormal)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CastlePC.TraceForTapToMove");

	ACastlePC_TraceForTapToMove_Params params;
	params.TraceOwner = TraceOwner;
	params.End = End;
	params.Start = Start;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitLocation != nullptr)
		*HitLocation = params.HitLocation;
	if (HitNormal != nullptr)
		*HitNormal = params.HitNormal;

	return params.ReturnValue;
}


// Function UDKBase.CastlePC.CheckInactivity
// (Defined, Public)

void ACastlePC::CheckInactivity()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CastlePC.CheckInactivity");

	ACastlePC_CheckInactivity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.CastlePC.SaveControllerStats
// (Defined, Public)

void ACastlePC::SaveControllerStats()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CastlePC.SaveControllerStats");

	ACastlePC_SaveControllerStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.CastlePC.SetupZones
// (Defined, Public)

void ACastlePC::SetupZones()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CastlePC.SetupZones");

	ACastlePC_SetupZones_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.CastlePC.OnEngineInitialTick
// (Defined, Event, Public)

void ACastlePC::OnEngineInitialTick()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CastlePC.OnEngineInitialTick");

	ACastlePC_OnEngineInitialTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.CastlePC.Destroyed
// (Defined, Event, Public)

void ACastlePC::Destroyed()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CastlePC.Destroyed");

	ACastlePC_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.CastlePC.PostBeginPlay
// (Defined, Simulated, Public)

void ACastlePC::PostBeginPlay()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CastlePC.PostBeginPlay");

	ACastlePC_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.MobileMenuControls.RenderScene
// (Defined, Public)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)
// float                          RenderDelta                    (Parm)

void UMobileMenuControls::RenderScene(class UCanvas* Canvas, float RenderDelta)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.MobileMenuControls.RenderScene");

	UMobileMenuControls_RenderScene_Params params;
	params.Canvas = Canvas;
	params.RenderDelta = RenderDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.MobileMenuControls.Setup
// (Defined, Public)
// Parameters:
// bool                           bTap                           (Parm)

void UMobileMenuControls::Setup(bool bTap)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.MobileMenuControls.Setup");

	UMobileMenuControls_Setup_Params params;
	params.bTap = bTap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.MobileMenuControls.FadeOut
// (Defined, Public)

void UMobileMenuControls::FadeOut()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.MobileMenuControls.FadeOut");

	UMobileMenuControls_FadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.MobileMenuSplash.Closed
// (Defined, Public)

void UMobileMenuSplash::Closed()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.MobileMenuSplash.Closed");

	UMobileMenuSplash_Closed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.MobileMenuSplash.OnTouch
// (Defined, Event, Public)
// Parameters:
// class UMobileMenuObject*       Sender                         (Parm)
// TEnumAsByte<ETouchType>        EventType                      (Parm)
// float                          TouchX                         (Parm)
// float                          TouchY                         (Parm)

void UMobileMenuSplash::OnTouch(class UMobileMenuObject* Sender, TEnumAsByte<ETouchType> EventType, float TouchX, float TouchY)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.MobileMenuSplash.OnTouch");

	UMobileMenuSplash_OnTouch_Params params;
	params.Sender = Sender;
	params.EventType = EventType;
	params.TouchX = TouchX;
	params.TouchY = TouchY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.MobileMenuSplash.InitMenuScene
// (Defined, Event, Public)
// Parameters:
// class UMobilePlayerInput*      PlayerInput                    (Parm)
// int                            ScreenWidth                    (Parm)
// int                            ScreenHeight                   (Parm)
// bool                           bIsFirstInitialization         (Parm)

void UMobileMenuSplash::InitMenuScene(class UMobilePlayerInput* PlayerInput, int ScreenWidth, int ScreenHeight, bool bIsFirstInitialization)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.MobileMenuSplash.InitMenuScene");

	UMobileMenuSplash_InitMenuScene_Params params;
	params.PlayerInput = PlayerInput;
	params.ScreenWidth = ScreenWidth;
	params.ScreenHeight = ScreenHeight;
	params.bIsFirstInitialization = bIsFirstInitialization;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.MobileMenuPause.SetDefaultUI
// (Defined, Public)

void UMobileMenuPause::SetDefaultUI()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.MobileMenuPause.SetDefaultUI");

	UMobileMenuPause_SetDefaultUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.MobileMenuPause.SetAttractModeUI
// (Defined, Public)
// Parameters:
// bool                           bIsInBenchmarkMode             (Parm)

void UMobileMenuPause::SetAttractModeUI(bool bIsInBenchmarkMode)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.MobileMenuPause.SetAttractModeUI");

	UMobileMenuPause_SetAttractModeUI_Params params;
	params.bIsInBenchmarkMode = bIsInBenchmarkMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.MobileMenuPause.ReleaseHelp
// (Defined, Public)

void UMobileMenuPause::ReleaseHelp()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.MobileMenuPause.ReleaseHelp");

	UMobileMenuPause_ReleaseHelp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.MobileMenuPause.FlashHelp
// (Defined, Public)
// Parameters:
// float                          Duration                       (Parm)

void UMobileMenuPause::FlashHelp(float Duration)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.MobileMenuPause.FlashHelp");

	UMobileMenuPause_FlashHelp_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.MobileMenuPause.OnSceneTouch
// (Defined, Public)
// Parameters:
// TEnumAsByte<ETouchType>        EventType                      (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)
// bool                           bInside                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMobileMenuPause::OnSceneTouch(TEnumAsByte<ETouchType> EventType, float X, float Y, bool bInside)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.MobileMenuPause.OnSceneTouch");

	UMobileMenuPause_OnSceneTouch_Params params;
	params.EventType = EventType;
	params.X = X;
	params.Y = Y;
	params.bInside = bInside;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.MobileMenuPause.RenderScene
// (Defined, Public)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)
// float                          RenderDelta                    (Parm)

void UMobileMenuPause::RenderScene(class UCanvas* Canvas, float RenderDelta)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.MobileMenuPause.RenderScene");

	UMobileMenuPause_RenderScene_Params params;
	params.Canvas = Canvas;
	params.RenderDelta = RenderDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.MobileMenuPause.HackInactiveAlpha
// (Defined, Public)
// Parameters:
// float                          NewValue                       (Parm)

void UMobileMenuPause::HackInactiveAlpha(float NewValue)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.MobileMenuPause.HackInactiveAlpha");

	UMobileMenuPause_HackInactiveAlpha_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.MobileMenuPause.OnResetMenu
// (Public)

void UMobileMenuPause::OnResetMenu()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.MobileMenuPause.OnResetMenu");

	UMobileMenuPause_OnResetMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.MobileMenuPause.OnTouch
// (Defined, Event, Public)
// Parameters:
// class UMobileMenuObject*       Sender                         (Parm)
// TEnumAsByte<ETouchType>        EventType                      (Parm)
// float                          TouchX                         (Parm)
// float                          TouchY                         (Parm)

void UMobileMenuPause::OnTouch(class UMobileMenuObject* Sender, TEnumAsByte<ETouchType> EventType, float TouchX, float TouchY)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.MobileMenuPause.OnTouch");

	UMobileMenuPause_OnTouch_Params params;
	params.Sender = Sender;
	params.EventType = EventType;
	params.TouchX = TouchX;
	params.TouchY = TouchY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.MobileMenuPause.InitMenuScene
// (Defined, Event, Public)
// Parameters:
// class UMobilePlayerInput*      PlayerInput                    (Parm)
// int                            ScreenWidth                    (Parm)
// int                            ScreenHeight                   (Parm)
// bool                           bIsFirstInitialization         (Parm)

void UMobileMenuPause::InitMenuScene(class UMobilePlayerInput* PlayerInput, int ScreenWidth, int ScreenHeight, bool bIsFirstInitialization)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.MobileMenuPause.InitMenuScene");

	UMobileMenuPause_InitMenuScene_Params params;
	params.PlayerInput = PlayerInput;
	params.ScreenWidth = ScreenWidth;
	params.ScreenHeight = ScreenHeight;
	params.bIsFirstInitialization = bIsFirstInitialization;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.MobileMenuBase.RenderScene
// (Defined, Public)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)
// float                          RenderDelta                    (Parm)

void UMobileMenuBase::RenderScene(class UCanvas* Canvas, float RenderDelta)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.MobileMenuBase.RenderScene");

	UMobileMenuBase_RenderScene_Params params;
	params.Canvas = Canvas;
	params.RenderDelta = RenderDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.MobileMenuBase.Fade
// (Defined, Public)
// Parameters:
// bool                           bIsFadeOut                     (Parm)
// float                          FadeDur                        (Parm)

void UMobileMenuBase::Fade(bool bIsFadeOut, float FadeDur)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.MobileMenuBase.Fade");

	UMobileMenuBase_Fade_Params params;
	params.bIsFadeOut = bIsFadeOut;
	params.FadeDur = FadeDur;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.MobileMenuDebug.OnTouch
// (Defined, Event, Public)
// Parameters:
// class UMobileMenuObject*       Sender                         (Parm)
// TEnumAsByte<ETouchType>        EventType                      (Parm)
// float                          TouchX                         (Parm)
// float                          TouchY                         (Parm)

void UMobileMenuDebug::OnTouch(class UMobileMenuObject* Sender, TEnumAsByte<ETouchType> EventType, float TouchX, float TouchY)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.MobileMenuDebug.OnTouch");

	UMobileMenuDebug_OnTouch_Params params;
	params.Sender = Sender;
	params.EventType = EventType;
	params.TouchX = TouchX;
	params.TouchY = TouchY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.CloudHUD.PostRender
// (Defined, Public)

void ACloudHUD::PostRender()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CloudHUD.PostRender");

	ACloudHUD_PostRender_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.CloudPC.OnTwitterAuthorizeComplete
// (Defined, Public, HasOutParms)
// Parameters:
// struct FPlatformInterfaceDelegateResult Result                         (Const, Parm, OutParm, NeedCtorLink)

void ACloudPC::OnTwitterAuthorizeComplete(struct FPlatformInterfaceDelegateResult* Result)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CloudPC.OnTwitterAuthorizeComplete");

	ACloudPC_OnTwitterAuthorizeComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function UDKBase.CloudPC.OnTwitterRequestComplete
// (Defined, Public, HasOutParms)
// Parameters:
// struct FPlatformInterfaceDelegateResult Result                         (Const, Parm, OutParm, NeedCtorLink)

void ACloudPC::OnTwitterRequestComplete(struct FPlatformInterfaceDelegateResult* Result)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CloudPC.OnTwitterRequestComplete");

	ACloudPC_OnTwitterRequestComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function UDKBase.CloudPC.OnTweetComplete
// (Defined, Public, HasOutParms)
// Parameters:
// struct FPlatformInterfaceDelegateResult Result                         (Const, Parm, OutParm, NeedCtorLink)

void ACloudPC::OnTweetComplete(struct FPlatformInterfaceDelegateResult* Result)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CloudPC.OnTweetComplete");

	ACloudPC_OnTweetComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function UDKBase.CloudPC.CloudGameTwitter
// (Defined, Exec, Public)

void ACloudPC::CloudGameTwitter()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CloudPC.CloudGameTwitter");

	ACloudPC_CloudGameTwitter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.CloudPC.CloudGameBuyConsumable
// (Defined, Exec, Public)

void ACloudPC::CloudGameBuyConsumable()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CloudPC.CloudGameBuyConsumable");

	ACloudPC_CloudGameBuyConsumable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.CloudPC.MicroQueryProducts
// (Defined, Exec, Public)

void ACloudPC::MicroQueryProducts()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CloudPC.MicroQueryProducts");

	ACloudPC_MicroQueryProducts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.CloudPC.OnProductPurchaseComplete
// (Defined, Public, HasOutParms)
// Parameters:
// struct FPlatformInterfaceDelegateResult Result                         (Const, Parm, OutParm, NeedCtorLink)

void ACloudPC::OnProductPurchaseComplete(struct FPlatformInterfaceDelegateResult* Result)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CloudPC.OnProductPurchaseComplete");

	ACloudPC_OnProductPurchaseComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function UDKBase.CloudPC.OnProductQueryComplete
// (Public, HasOutParms)
// Parameters:
// struct FPlatformInterfaceDelegateResult Result                         (Const, Parm, OutParm, NeedCtorLink)

void ACloudPC::OnProductQueryComplete(struct FPlatformInterfaceDelegateResult* Result)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CloudPC.OnProductQueryComplete");

	ACloudPC_OnProductQueryComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function UDKBase.CloudPC.CloudGameFacebook
// (Defined, Exec, Public)

void ACloudPC::CloudGameFacebook()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CloudPC.CloudGameFacebook");

	ACloudPC_CloudGameFacebook_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.CloudPC.OnFBDialogComplete
// (Defined, Public, HasOutParms)
// Parameters:
// struct FPlatformInterfaceDelegateResult Result                         (Const, Parm, OutParm, NeedCtorLink)

void ACloudPC::OnFBDialogComplete(struct FPlatformInterfaceDelegateResult* Result)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CloudPC.OnFBDialogComplete");

	ACloudPC_OnFBDialogComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function UDKBase.CloudPC.OnFBFriendsListComplete
// (Defined, Public, HasOutParms)
// Parameters:
// struct FPlatformInterfaceDelegateResult Result                         (Const, Parm, OutParm, NeedCtorLink)

void ACloudPC::OnFBFriendsListComplete(struct FPlatformInterfaceDelegateResult* Result)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CloudPC.OnFBFriendsListComplete");

	ACloudPC_OnFBFriendsListComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function UDKBase.CloudPC.OnFBRequestComplete
// (Public, HasOutParms)
// Parameters:
// struct FPlatformInterfaceDelegateResult Result                         (Const, Parm, OutParm, NeedCtorLink)

void ACloudPC::OnFBRequestComplete(struct FPlatformInterfaceDelegateResult* Result)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CloudPC.OnFBRequestComplete");

	ACloudPC_OnFBRequestComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function UDKBase.CloudPC.OnFBAuthComplete
// (Defined, Public, HasOutParms)
// Parameters:
// struct FPlatformInterfaceDelegateResult Result                         (Const, Parm, OutParm, NeedCtorLink)

void ACloudPC::OnFBAuthComplete(struct FPlatformInterfaceDelegateResult* Result)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CloudPC.OnFBAuthComplete");

	ACloudPC_OnFBAuthComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function UDKBase.CloudPC.OnUserClosedAdvertisement
// (Defined, Event, Public, HasOutParms)
// Parameters:
// struct FPlatformInterfaceDelegateResult Result                         (Const, Parm, OutParm, NeedCtorLink)

void ACloudPC::OnUserClosedAdvertisement(struct FPlatformInterfaceDelegateResult* Result)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CloudPC.OnUserClosedAdvertisement");

	ACloudPC_OnUserClosedAdvertisement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function UDKBase.CloudPC.OnUserClickedAdvertisement
// (Defined, Public, HasOutParms)
// Parameters:
// struct FPlatformInterfaceDelegateResult Result                         (Const, Parm, OutParm, NeedCtorLink)

void ACloudPC::OnUserClickedAdvertisement(struct FPlatformInterfaceDelegateResult* Result)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CloudPC.OnUserClickedAdvertisement");

	ACloudPC_OnUserClickedAdvertisement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function UDKBase.CloudPC.CloudGameToggleAd
// (Defined, Exec, Public)

void ACloudPC::CloudGameToggleAd()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CloudPC.CloudGameToggleAd");

	ACloudPC_CloudGameToggleAd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.CloudPC.CloudGetDocs
// (Defined, Public)

void ACloudPC::CloudGetDocs()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CloudPC.CloudGetDocs");

	ACloudPC_CloudGetDocs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.CloudPC.CloudConflictDetected
// (Defined, Public, HasOutParms)
// Parameters:
// struct FPlatformInterfaceDelegateResult Result                         (Const, Parm, OutParm, NeedCtorLink)

void ACloudPC::CloudConflictDetected(struct FPlatformInterfaceDelegateResult* Result)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CloudPC.CloudConflictDetected");

	ACloudPC_CloudConflictDetected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function UDKBase.CloudPC.CloudReadDocument
// (Defined, Public, HasOutParms)
// Parameters:
// struct FPlatformInterfaceDelegateResult Result                         (Const, Parm, OutParm, NeedCtorLink)

void ACloudPC::CloudReadDocument(struct FPlatformInterfaceDelegateResult* Result)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CloudPC.CloudReadDocument");

	ACloudPC_CloudReadDocument_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function UDKBase.CloudPC.CloudGotDocuments
// (Defined, Public, HasOutParms)
// Parameters:
// struct FPlatformInterfaceDelegateResult Result                         (Const, Parm, OutParm, NeedCtorLink)

void ACloudPC::CloudGotDocuments(struct FPlatformInterfaceDelegateResult* Result)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CloudPC.CloudGotDocuments");

	ACloudPC_CloudGotDocuments_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function UDKBase.CloudPC.CloudGetAndIncrement
// (Defined, Exec, Public, HasDefaults)

void ACloudPC::CloudGetAndIncrement()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CloudPC.CloudGetAndIncrement");

	ACloudPC_CloudGetAndIncrement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.CloudPC.CloudIncrementValue
// (Defined, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FPlatformInterfaceDelegateResult Result                         (Const, Parm, OutParm, NeedCtorLink)

void ACloudPC::CloudIncrementValue(struct FPlatformInterfaceDelegateResult* Result)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CloudPC.CloudIncrementValue");

	ACloudPC_CloudIncrementValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function UDKBase.CloudPC.CloudValueChanged
// (Defined, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FPlatformInterfaceDelegateResult Result                         (Const, Parm, OutParm, NeedCtorLink)

void ACloudPC::CloudValueChanged(struct FPlatformInterfaceDelegateResult* Result)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CloudPC.CloudValueChanged");

	ACloudPC_CloudValueChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function UDKBase.CloudPC.CloudLogValue
// (Defined, Public, HasOutParms)
// Parameters:
// struct FPlatformInterfaceDelegateResult Result                         (Const, Parm, OutParm, NeedCtorLink)

void ACloudPC::CloudLogValue(struct FPlatformInterfaceDelegateResult* Result)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CloudPC.CloudLogValue");

	ACloudPC_CloudLogValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function UDKBase.CloudPC.CloudGameLoad
// (Defined, Exec, Public)
// Parameters:
// int                            Slot                           (Parm)

void ACloudPC::CloudGameLoad(int Slot)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CloudPC.CloudGameLoad");

	ACloudPC_CloudGameLoad_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.CloudPC.CloudGameSave
// (Defined, Exec, Public)
// Parameters:
// int                            Slot                           (Parm)

void ACloudPC::CloudGameSave(int Slot)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CloudPC.CloudGameSave");

	ACloudPC_CloudGameSave_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.CloudPC.CloudGameFight
// (Defined, Exec, Public)

void ACloudPC::CloudGameFight()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CloudPC.CloudGameFight");

	ACloudPC_CloudGameFight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.CloudPC.Destroyed
// (Defined, Event, Public)

void ACloudPC::Destroyed()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CloudPC.Destroyed");

	ACloudPC_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.CloudPC.PostBeginPlay
// (Defined, Simulated, Public)

void ACloudPC::PostBeginPlay()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CloudPC.PostBeginPlay");

	ACloudPC_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.CloudMenuMicroTrans.OnProductPurchaseComplete
// (Defined, Public, HasOutParms)
// Parameters:
// struct FPlatformInterfaceDelegateResult Result                         (Const, Parm, OutParm, NeedCtorLink)

void UCloudMenuMicroTrans::OnProductPurchaseComplete(struct FPlatformInterfaceDelegateResult* Result)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CloudMenuMicroTrans.OnProductPurchaseComplete");

	UCloudMenuMicroTrans_OnProductPurchaseComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function UDKBase.CloudMenuMicroTrans.OnProductQueryComplete
// (Defined, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FPlatformInterfaceDelegateResult Result                         (Const, Parm, OutParm, NeedCtorLink)

void UCloudMenuMicroTrans::OnProductQueryComplete(struct FPlatformInterfaceDelegateResult* Result)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CloudMenuMicroTrans.OnProductQueryComplete");

	UCloudMenuMicroTrans_OnProductQueryComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function UDKBase.CloudMenuMicroTrans.Closed
// (Defined, Public)

void UCloudMenuMicroTrans::Closed()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CloudMenuMicroTrans.Closed");

	UCloudMenuMicroTrans_Closed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.CloudMenuMicroTrans.OnTouch
// (Defined, Event, Public)
// Parameters:
// class UMobileMenuObject*       Sender                         (Parm)
// TEnumAsByte<ETouchType>        EventType                      (Parm)
// float                          TouchX                         (Parm)
// float                          TouchY                         (Parm)

void UCloudMenuMicroTrans::OnTouch(class UMobileMenuObject* Sender, TEnumAsByte<ETouchType> EventType, float TouchX, float TouchY)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CloudMenuMicroTrans.OnTouch");

	UCloudMenuMicroTrans_OnTouch_Params params;
	params.Sender = Sender;
	params.EventType = EventType;
	params.TouchX = TouchX;
	params.TouchY = TouchY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.CloudMenuMicroTrans.InitMenuScene
// (Defined, Event, Public)
// Parameters:
// class UMobilePlayerInput*      PlayerInput                    (Parm)
// int                            ScreenWidth                    (Parm)
// int                            ScreenHeight                   (Parm)
// bool                           bIsFirstInitialization         (Parm)

void UCloudMenuMicroTrans::InitMenuScene(class UMobilePlayerInput* PlayerInput, int ScreenWidth, int ScreenHeight, bool bIsFirstInitialization)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.CloudMenuMicroTrans.InitMenuScene");

	UCloudMenuMicroTrans_InitMenuScene_Params params;
	params.PlayerInput = PlayerInput;
	params.ScreenWidth = ScreenWidth;
	params.ScreenHeight = ScreenHeight;
	params.bIsFirstInitialization = bIsFirstInitialization;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.MobileGameCrowdAgent.OnSetMaterial
// (Defined, Public)
// Parameters:
// class USeqAct_SetMaterial*     Action                         (Parm)

void AMobileGameCrowdAgent::OnSetMaterial(class USeqAct_SetMaterial* Action)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.MobileGameCrowdAgent.OnSetMaterial");

	AMobileGameCrowdAgent_OnSetMaterial_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.MobileGameCrowdAgent.PlayDeath
// (Defined, Public)
// Parameters:
// struct FVector                 KillMomentum                   (Parm)

void AMobileGameCrowdAgent::PlayDeath(const struct FVector& KillMomentum)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.MobileGameCrowdAgent.PlayDeath");

	AMobileGameCrowdAgent_PlayDeath_Params params;
	params.KillMomentum = KillMomentum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.MobilePlaceablePawn.GetPawnViewLocation
// (Defined, Simulated, Public)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AMobilePlaceablePawn::GetPawnViewLocation()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.MobilePlaceablePawn.GetPawnViewLocation");

	AMobilePlaceablePawn_GetPawnViewLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.MobilePlaceablePawn.CalcCamera
// (Defined, Simulated, Public, HasOutParms)
// Parameters:
// float                          fDeltaTime                     (Parm)
// struct FVector                 out_CamLoc                     (Parm, OutParm)
// struct FRotator                out_CamRot                     (Parm, OutParm)
// float                          out_FOV                        (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AMobilePlaceablePawn::CalcCamera(float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.MobilePlaceablePawn.CalcCamera");

	AMobilePlaceablePawn_CalcCamera_Params params;
	params.fDeltaTime = fDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_CamLoc != nullptr)
		*out_CamLoc = params.out_CamLoc;
	if (out_CamRot != nullptr)
		*out_CamRot = params.out_CamRot;
	if (out_FOV != nullptr)
		*out_FOV = params.out_FOV;

	return params.ReturnValue;
}


// Function UDKBase.MobilePlaceablePawn.RestoreAnimSetsToDefault
// (Defined, Simulated, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AMobilePlaceablePawn::RestoreAnimSetsToDefault()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.MobilePlaceablePawn.RestoreAnimSetsToDefault");

	AMobilePlaceablePawn_RestoreAnimSetsToDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.MobilePlaceablePawn.FixedView
// (Defined, Exec, Public)

void AMobilePlaceablePawn::FixedView()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.MobilePlaceablePawn.FixedView");

	AMobilePlaceablePawn_FixedView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.MobileProjectile.GetPawnOwner
// (Simulated, Public)
// Parameters:
// class APawn*                   ReturnValue                    (Parm, OutParm, ReturnParm)

class APawn* AMobileProjectile::GetPawnOwner()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.MobileProjectile.GetPawnOwner");

	AMobileProjectile_GetPawnOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.MobileProjectile.CalcCamera
// (Defined, Simulated, Public, HasOutParms)
// Parameters:
// float                          fDeltaTime                     (Parm)
// struct FVector                 out_CamLoc                     (Parm, OutParm)
// struct FRotator                out_CamRot                     (Parm, OutParm)
// float                          out_FOV                        (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AMobileProjectile::CalcCamera(float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.MobileProjectile.CalcCamera");

	AMobileProjectile_CalcCamera_Params params;
	params.fDeltaTime = fDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_CamLoc != nullptr)
		*out_CamLoc = params.out_CamLoc;
	if (out_CamRot != nullptr)
		*out_CamRot = params.out_CamRot;
	if (out_FOV != nullptr)
		*out_FOV = params.out_FOV;

	return params.ReturnValue;
}


// Function UDKBase.MobileProjectile.MyOnParticleSystemFinished
// (Defined, Simulated, Public)
// Parameters:
// class UParticleSystemComponent* PSC                            (Parm, EditInline)

void AMobileProjectile::MyOnParticleSystemFinished(class UParticleSystemComponent* PSC)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.MobileProjectile.MyOnParticleSystemFinished");

	AMobileProjectile_MyOnParticleSystemFinished_Params params;
	params.PSC = PSC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.MobileProjectile.Destroyed
// (Defined, Simulated, Public)

void AMobileProjectile::Destroyed()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.MobileProjectile.Destroyed");

	AMobileProjectile_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.MobileProjectile.HideProjectile
// (Defined, Simulated, Public)

void AMobileProjectile::HideProjectile()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.MobileProjectile.HideProjectile");

	AMobileProjectile_HideProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.MobileProjectile.TornOff
// (Defined, Event, Public)

void AMobileProjectile::TornOff()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.MobileProjectile.TornOff");

	AMobileProjectile_TornOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.MobileProjectile.ShutDown
// (Defined, Simulated, Public, HasDefaults)

void AMobileProjectile::ShutDown()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.MobileProjectile.ShutDown");

	AMobileProjectile_ShutDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.MobileProjectile.SpawnExplosionEffects
// (Defined, Simulated, Public)
// Parameters:
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void AMobileProjectile::SpawnExplosionEffects(const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.MobileProjectile.SpawnExplosionEffects");

	AMobileProjectile_SpawnExplosionEffects_Params params;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.MobileProjectile.SetExplosionEffectParameters
// (Simulated, Public)
// Parameters:
// class UParticleSystemComponent* ProjExplosion                  (Parm, EditInline)

void AMobileProjectile::SetExplosionEffectParameters(class UParticleSystemComponent* ProjExplosion)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.MobileProjectile.SetExplosionEffectParameters");

	AMobileProjectile_SetExplosionEffectParameters_Params params;
	params.ProjExplosion = ProjExplosion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.MobileProjectile.SpawnFlightEffects
// (Defined, Simulated, Public)

void AMobileProjectile::SpawnFlightEffects()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.MobileProjectile.SpawnFlightEffects");

	AMobileProjectile_SpawnFlightEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.MobileProjectile.Explode
// (Defined, Simulated, Public)
// Parameters:
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void AMobileProjectile::Explode(const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.MobileProjectile.Explode");

	AMobileProjectile_Explode_Params params;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.MobileProjectile.ProcessTouch
// (Defined, Simulated, Public)
// Parameters:
// class AActor*                  Other                          (Parm)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void AMobileProjectile::ProcessTouch(class AActor* Other, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.MobileProjectile.ProcessTouch");

	AMobileProjectile_ProcessTouch_Params params;
	params.Other = Other;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.MobileProjectile.Init
// (Defined, Public)
// Parameters:
// struct FVector                 Direction                      (Parm)

void AMobileProjectile::Init(const struct FVector& Direction)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.MobileProjectile.Init");

	AMobileProjectile_Init_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.MobileProjectile.SetInitialState
// (Defined, Simulated, Event, Public)

void AMobileProjectile::SetInitialState()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.MobileProjectile.SetInitialState");

	AMobileProjectile_SetInitialState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.MobileProjectile.PostBeginPlay
// (Defined, Simulated, Public)

void AMobileProjectile::PostBeginPlay()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.MobileProjectile.PostBeginPlay");

	AMobileProjectile_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.MobileProjectile.Landed
// (Defined, Simulated, Event, Public)
// Parameters:
// struct FVector                 HitNormal                      (Parm)
// class AActor*                  FloorActor                     (Parm)

void AMobileProjectile::Landed(const struct FVector& HitNormal, class AActor* FloorActor)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.MobileProjectile.Landed");

	AMobileProjectile_Landed_Params params;
	params.HitNormal = HitNormal;
	params.FloorActor = FloorActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKAnimNodeSequenceByBoneRotation.OnBecomeRelevant
// (Defined, Event, Public, HasDefaults)

void UUDKAnimNodeSequenceByBoneRotation::OnBecomeRelevant()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKAnimNodeSequenceByBoneRotation.OnBecomeRelevant");

	UUDKAnimNodeSequenceByBoneRotation_OnBecomeRelevant_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKMobileInputZone.ProcessGameplayInput
// (Defined, Public, HasDefaults)
// Parameters:
// class UMobileInputZone*        Zone                           (Parm)
// float                          DeltaTime                      (Parm)
// int                            Handle                         (Parm)
// TEnumAsByte<ETouchType>        EventType                      (Parm)
// struct FVector2D               TouchLocation                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUDKMobileInputZone::ProcessGameplayInput(class UMobileInputZone* Zone, float DeltaTime, int Handle, TEnumAsByte<ETouchType> EventType, const struct FVector2D& TouchLocation)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKMobileInputZone.ProcessGameplayInput");

	UUDKMobileInputZone_ProcessGameplayInput_Params params;
	params.Zone = Zone;
	params.DeltaTime = DeltaTime;
	params.Handle = Handle;
	params.EventType = EventType;
	params.TouchLocation = TouchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKMobileInputZone.TraceFromScreenToWorld
// (Defined, HasOptionalParms, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FVector2D               ScreenPos                      (Parm)
// class AActor*                  outHitActor                    (Parm, OutParm)
// struct FVector                 OutHitLocation                 (Parm, OutParm)
// struct FVector                 Extent                         (OptionalParm, Parm)

void UUDKMobileInputZone::TraceFromScreenToWorld(const struct FVector2D& ScreenPos, const struct FVector& Extent, class AActor** outHitActor, struct FVector* OutHitLocation)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKMobileInputZone.TraceFromScreenToWorld");

	UUDKMobileInputZone_TraceFromScreenToWorld_Params params;
	params.ScreenPos = ScreenPos;
	params.Extent = Extent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outHitActor != nullptr)
		*outHitActor = params.outHitActor;
	if (OutHitLocation != nullptr)
		*OutHitLocation = params.OutHitLocation;
}


// Function UDKBase.UDKMobileInputZone.IsTouchingPlayerPawn
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUDKMobileInputZone::IsTouchingPlayerPawn()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function UDKBase.UDKMobileInputZone.IsTouchingPlayerPawn");

	UUDKMobileInputZone_IsTouchingPlayerPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

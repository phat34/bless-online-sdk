#pragma once

// Unreal Engine 3 (3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE3_UDKBase_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class UDKBase.ParticleModuleTypeDataSnow
// 0x00E4 (0x0150 - 0x006C)
class UParticleModuleTypeDataSnow : public UParticleModuleTypeDataBase
{
public:
	struct FRawDistributionVector                      StartSize;                                                // 0x006C(0x0024) (Edit, Component, NeedCtorLink)
	struct FRawDistributionVector                      StartVelocity;                                            // 0x0090(0x0024) (Edit, Component, NeedCtorLink)
	struct FRawDistributionVector                      StartLocation;                                            // 0x00B4(0x0024) (Edit, Component, NeedCtorLink)
	struct FRawDistributionVector                      ColorOverLife;                                            // 0x00D8(0x0024) (Edit, Component, NeedCtorLink)
	struct FRawDistributionFloat                       AlphaOverLife;                                            // 0x00FC(0x0024) (Edit, Component, NeedCtorLink)
	struct FRawDistributionFloat                       Lifetime;                                                 // 0x0120(0x0024) (Edit, Component, NeedCtorLink)
	float                                              KillHeight;                                               // 0x0144(0x0004) (Edit)
	float                                              FadeStart;                                                // 0x0148(0x0004) (Edit)
	float                                              FadeStop;                                                 // 0x014C(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.ParticleModuleTypeDataSnow");
		return ptr;
	}

};


// Class UDKBase.SimpleGame
// 0x0000 (0x04AC - 0x04AC)
class ASimpleGame : public AFrameworkGame
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.SimpleGame");
		return ptr;
	}


	class UClass* STATIC_SetGameType(const struct FString& MapName, const struct FString& Options, const struct FString& Portal);
	struct FString STATIC_StripPlayOnPrefix(const struct FString& MapName);
};


// Class UDKBase.UDKGame
// 0x0000 (0x04AC - 0x04AC)
class AUDKGame : public ASimpleGame
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKGame");
		return ptr;
	}

};


// Class UDKBase.UDKAIDecisionComponent
// 0x0007 (0x008C - 0x0085)
class UUDKAIDecisionComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0085(0x0003) MISSED OFFSET
	unsigned long                                      bTriggered : 1;                                           // 0x0088(0x0004)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKAIDecisionComponent");
		return ptr;
	}

};


// Class UDKBase.UDKBot
// 0x00FC (0x055C - 0x0460)
class AUDKBot : public AAIController
{
public:
	class AUDKSquadAI*                                 Squad;                                                    // 0x0460(0x0008)
	class UUDKAIDecisionComponent*                     DecisionComponent;                                        // 0x0468(0x0008) (ExportObject, Component, EditInline)
	class AActor*                                      TemporaryFocus;                                           // 0x0470(0x0008)
	unsigned long                                      bExecutingWhatToDoNext : 1;                               // 0x0478(0x0004)
	unsigned long                                      bScriptSpecialJumpCost : 1;                               // 0x0478(0x0004)
	unsigned long                                      bForceRefreshRoute : 1;                                   // 0x0478(0x0004)
	unsigned long                                      bTargetAlternateLoc : 1;                                  // 0x0478(0x0004)
	unsigned long                                      bEnemyInfoValid : 1;                                      // 0x0478(0x0004)
	unsigned long                                      bEnemyIsVisible : 1;                                      // 0x0478(0x0004)
	unsigned long                                      bLeadTarget : 1;                                          // 0x0478(0x0004)
	unsigned long                                      bJumpOverWall : 1;                                        // 0x0478(0x0004)
	unsigned long                                      bPlannedJump : 1;                                         // 0x0478(0x0004)
	unsigned long                                      bInDodgeMove : 1;                                         // 0x0478(0x0004)
	unsigned long                                      bEnemyAcquired : 1;                                       // 0x0478(0x0004)
	unsigned long                                      bNeedDelayedLeaveVehicle : 1;                             // 0x0478(0x0004)
	unsigned long                                      bAllowRouteReuse : 1;                                     // 0x0478(0x0004)
	unsigned long                                      bUsingSquadRoute : 1;                                     // 0x0478(0x0004)
	unsigned long                                      bUsePreviousSquadRoute : 1;                               // 0x0478(0x0004)
	unsigned char                                      ScriptedFireMode;                                         // 0x047C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x047D(0x0003) MISSED OFFSET
	float                                              EnemyVisibilityTime;                                      // 0x0480(0x0004)
	class APawn*                                       VisibleEnemy;                                             // 0x0484(0x0008)
	class AVehicle*                                    LastBlockingVehicle;                                      // 0x048C(0x0008)
	class APawn*                                       CurrentlyTrackedEnemy;                                    // 0x0494(0x0008)
	TArray<struct FEnemyPosition>                      SavedPositions;                                           // 0x049C(0x0010) (NeedCtorLink)
	struct FVector                                     ImpactVelocity;                                           // 0x04AC(0x000C)
	int                                                AcquisitionYawRate;                                       // 0x04B8(0x0004)
	float                                              HearingThreshold;                                         // 0x04BC(0x0004)
	float                                              RespawnPredictionTime;                                    // 0x04C0(0x0004)
	float                                              WarningDelay;                                             // 0x04C4(0x0004)
	class AProjectile*                                 WarningProjectile;                                        // 0x04C8(0x0008)
	struct FVector                                     MonitorStartLoc;                                          // 0x04D0(0x000C)
	class APawn*                                       MonitoredPawn;                                            // 0x04DC(0x0008)
	float                                              MonitorMaxDistSq;                                         // 0x04E4(0x0004)
	struct FVector                                     LastSeenPos;                                              // 0x04E8(0x000C)
	struct FVector                                     LastSeeingPos;                                            // 0x04F4(0x000C)
	float                                              LastSeenTime;                                             // 0x0500(0x0004)
	float                                              TrackingReactionTime;                                     // 0x0504(0x0004)
	float                                              BaseTrackingReactionTime;                                 // 0x0508(0x0004)
	struct FVector                                     TrackedVelocity;                                          // 0x050C(0x000C)
	class ANavigationPoint*                            SquadRouteGoal;                                           // 0x0518(0x0008)
	class APawn*                                       BlockedAimTarget;                                         // 0x0520(0x0008)
	float                                              LastIterativeCheck;                                       // 0x0528(0x0004)
	float                                              AimUpdateFrequency;                                       // 0x052C(0x0004)
	float                                              LastAimUpdateTime;                                        // 0x0530(0x0004)
	float                                              ErrorUpdateFrequency;                                     // 0x0534(0x0004)
	float                                              LastErrorUpdateTime;                                      // 0x0538(0x0004)
	float                                              CurrentAimError;                                          // 0x053C(0x0004)
	float                                              DodgeLandZ;                                               // 0x0540(0x0004)
	class AActor*                                      FearSpots[0x2];                                           // 0x0544(0x0008)
	float                                              DodgeToGoalPct;                                           // 0x0554(0x0004)
	float                                              MultiJumpZ;                                               // 0x0558(0x0004)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKBot");
		return ptr;
	}


	void DelayedLeaveVehicle();
	void DelayedWarning();
	void MissedDodge();
	float AdjustAimError(float TargetDist, bool bInstantProj);
	float SuperDesireability(class APickupFactory* P);
	bool SpecialJumpCost(float RequiredJumpZ, float* Cost);
	void MayDodgeToMoveTarget();
	void TimeDJReset();
	void MonitoredPawnAlert();
	void WhatToDoNext();
	class AActor* FindBestSuperPickup(float MaxDist);
	void BuildSquadRoute();
	class AActor* FindPathToSquadRoute(bool bWeightDetours);
	class AActor* FindBestInventoryPath(float* MinWeight);
	bool CanMakePathTo(class AActor* A);
	void LatentWhatToDoNext();
	void WaitToSeeEnemy();
	void ReceiveRunOverWarning(class AUDKVehicle* V, float projSpeed, const struct FVector& VehicleDir);
	void ExecuteWhatToDoNext();
	class AActor* FaceActor(float StrafingModifier);
};


// Class UDKBase.UDKCarriedObject
// 0x0050 (0x02A0 - 0x0250)
class AUDKCarriedObject : public AActor
{
public:
	class ATeamInfo*                                   Team;                                                     // 0x0250(0x0008) (Net)
	class ANavigationPoint*                            LastAnchor;                                               // 0x0258(0x0008) (Const)
	float                                              LastValidAnchorTime;                                      // 0x0260(0x0004)
	class USkeletalMeshComponent*                      SkelMesh;                                                 // 0x0264(0x0008) (ExportObject, Component, EditInline)
	unsigned long                                      bHome : 1;                                                // 0x026C(0x0004) (Net)
	class AUDKGameObjective*                           HomeBase;                                                 // 0x0270(0x0008) (Net)
	struct FVector                                     HomeBaseOffset;                                           // 0x0278(0x000C)
	class AActor*                                      OldBase;                                                  // 0x0284(0x0008)
	class AActor*                                      OldBaseBase;                                              // 0x028C(0x0008)
	struct FVector                                     HUDLocation;                                              // 0x0294(0x000C)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKCarriedObject");
		return ptr;
	}


	unsigned char GetTeamNum();
	void OnBaseChainChanged();
	void NotReachableBy(class APawn* P);
	void SetHUDLocation(const struct FVector& NewHUDLocation);
};


// Class UDKBase.UDKDataStore_GameSearchBase
// 0x0008 (0x00D8 - 0x00D0)
class UUDKDataStore_GameSearchBase : public UUIDataStore_OnlineGameSearch
{
public:
	class UUDKUIDataProvider_ServerDetails*            ServerDetailsProvider;                                    // 0x00D0(0x0008) (Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKDataStore_GameSearchBase");
		return ptr;
	}


	bool HasExistingSearchResults();
	bool HasOutstandingQueries(bool bRestrictCheckToSelf);
	void OnSearchComplete(bool bWasSuccessful);
	bool SubmitGameSearch(unsigned char ControllerIndex, bool bInvalidateExistingSearchResults);
	void Init();
};


// Class UDKBase.UDKEmitCameraEffect
// 0x000C (0x0270 - 0x0264)
class AUDKEmitCameraEffect : public AEmitter
{
public:
	float                                              DistFromCamera;                                           // 0x0264(0x0004) (Edit)
	class AUDKPlayerController*                        Cam;                                                      // 0x0268(0x0008)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKEmitCameraEffect");
		return ptr;
	}


	void UpdateLocation(float CamFOVDeg, struct FVector* CamLoc, struct FRotator* CamRot);
	void RegisterCamera(class AUDKPlayerController* inCam);
	void Destroyed();
	void PostBeginPlay();
};


// Class UDKBase.UDKEmitterPool
// 0x0010 (0x02D0 - 0x02C0)
class AUDKEmitterPool : public AEmitterPool
{
public:
	TArray<struct FAttachedExplosionLight>             RelativeExplosionLights;                                  // 0x02C0(0x0010) (Component, NeedCtorLink)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKEmitterPool");
		return ptr;
	}


	class UUDKExplosionLight* SpawnExplosionLight(class UClass* LightClass, const struct FVector& SpawnLocation, class AActor* AttachToActor);
	void OnExplosionLightFinished(class UUDKExplosionLight* Light);
	class UParticleSystemComponent* SpawnEmitter(class UParticleSystem* EmitterTemplate, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, class AActor* AttachToActor, class AActor* InInstigator, int MaxDLEPooledReuses, bool bInheritScaleFromBase);
};


// Class UDKBase.UDKExplosionLight
// 0x0030 (0x0270 - 0x0240)
class UUDKExplosionLight : public UPointLightComponent
{
public:
	unsigned long                                      bCheckFrameRate : 1;                                      // 0x0240(0x0004)
	unsigned long                                      bInitialized : 1;                                         // 0x0240(0x0004)
	float                                              HighDetailFrameTime;                                      // 0x0244(0x0004) (Edit)
	float                                              Lifetime;                                                 // 0x0248(0x0004)
	int                                                TimeShiftIndex;                                           // 0x024C(0x0004)
	TArray<struct FLightValues>                        TimeShift;                                                // 0x0250(0x0010) (Edit, NeedCtorLink)
	struct FScriptDelegate                             __OnLightFinished__Delegate;                              // 0x0260(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0260(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKExplosionLight");
		return ptr;
	}


	void OnLightFinished(class UUDKExplosionLight* Light);
	void ResetLight();
};


// Class UDKBase.UDKForcedDirectionVolume
// 0x0030 (0x030C - 0x02DC)
class AUDKForcedDirectionVolume : public APhysicsVolume
{
public:
	class UClass*                                      TypeToForce;                                              // 0x02DC(0x0008) (Edit)
	unsigned long                                      bIgnoreHoverboards : 1;                                   // 0x02E4(0x0004) (Edit)
	unsigned long                                      bDenyExit : 1;                                            // 0x02E4(0x0004) (Edit)
	unsigned long                                      bBlockPawns : 1;                                          // 0x02E4(0x0004) (Edit)
	unsigned long                                      bBlockSpectators : 1;                                     // 0x02E4(0x0004) (Edit)
	class UArrowComponent*                             Arrow;                                                    // 0x02E8(0x0008) (Edit, Const, ExportObject, Component, EditInline)
	struct FVector                                     ArrowDirection;                                           // 0x02F0(0x000C)
	TArray<class AUDKVehicle*>                         TouchingVehicles;                                         // 0x02FC(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKForcedDirectionVolume");
		return ptr;
	}


	bool StopsProjectile(class AProjectile* P);
	void UnTouch(class AActor* Other);
	void Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
	void ActorEnteredVolume(class AActor* Other);
	void PostBeginPlay();
};


// Class UDKBase.UDKGameInteraction
// 0x0004 (0x01D8 - 0x01D4)
class UUDKGameInteraction : public UUIInteraction
{
public:
	int                                                BlockUIInputSemaphore;                                    // 0x01D4(0x0004)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKGameInteraction");
		return ptr;
	}


	void NotifyGameSessionEnded();
	void BlockUIInput(bool bBlock);
	void ClearUIInputBlocks();
	bool ShouldProcessUIInput();
};


// Class UDKBase.UDKGameObjective
// 0x0039 (0x03A1 - 0x0368)
class AUDKGameObjective : public ANavigationPoint
{
public:
	TArray<class ANavigationPoint*>                    ShootSpots;                                               // 0x0368(0x0010) (NeedCtorLink)
	unsigned long                                      bAllowOnlyShootable : 1;                                  // 0x0378(0x0004)
	unsigned long                                      bUnderAttack : 1;                                         // 0x0378(0x0004) (Net)
	struct FVector                                     HUDLocation;                                              // 0x037C(0x000C)
	class UTexture2D*                                  IconHudTexture;                                           // 0x0388(0x0008) (Const)
	struct FTextureCoordinates                         IconCoords;                                               // 0x0390(0x0010)
	unsigned char                                      DefenderTeamIndex;                                        // 0x03A0(0x0001) (Net)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKGameObjective");
		return ptr;
	}


	unsigned char GetTeamNum();
	void DrawIcon(class UCanvas* Canvas, const struct FVector& IconLocation, float IconWidth, float IconAlpha, class AUDKPlayerController* PlayerOwner, const struct FLinearColor& DrawColor);
	void SetHUDLocation(const struct FVector& NewHUDLocation);
	void TriggerFlagEvent(const struct FName& EventType, class AController* EventInstigator);
	bool BotNearObjective(class AAIController* C);
	class AActor* GetBestViewTarget();
	void ObjectiveChanged();
};


// Class UDKBase.UDKGameSettingsCommon
// 0x0000 (0x00E4 - 0x00E4)
class UUDKGameSettingsCommon : public UOnlineGameSettings
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKGameSettingsCommon");
		return ptr;
	}


	struct FString STATIC_BlobToString(struct FString* InBlob);
	bool STATIC_StringToBlob(struct FString* InString, struct FString* OutBlob);
};


// Class UDKBase.UDKGameViewportClient
// 0x0010 (0x01B0 - 0x01A0)
class UUDKGameViewportClient : public UGameViewportClient
{
public:
	struct FString                                     HintLocFileName;                                          // 0x01A0(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKGameViewportClient");
		return ptr;
	}


	struct FString LoadRandomLocalizedHintMessage(const struct FString& Category1Name, const struct FString& Category2Name);
};


// Class UDKBase.UDKHUD
// 0x0054 (0x06E0 - 0x068C)
class AUDKHUD : public AMobileHUD
{
public:
	class UFont*                                       GlowFonts[0x2];                                           // 0x068C(0x0008)
	float                                              PulseDuration;                                            // 0x069C(0x0004)
	float                                              PulseSplit;                                               // 0x06A0(0x0004)
	float                                              PulseMultiplier;                                          // 0x06A4(0x0004)
	struct FFontRenderInfo                             TextRenderInfo;                                           // 0x06A8(0x0028)
	class UFont*                                       ConsoleIconFont;                                          // 0x06D0(0x0008)
	class UFont*                                       BindTextFont;                                             // 0x06D8(0x0008)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKHUD");
		return ptr;
	}


	void STATIC_TranslateBindToFont(const struct FString& InBindStr, class UFont** DrawFont, struct FString* OutBindStr);
	void DrawGlowText(const struct FString& Text, float X, float Y, float MaxHeightInPixels, float PulseTime, bool bRightJustified);
};


// Class UDKBase.UDKJumpPad
// 0x002C (0x0394 - 0x0368)
class AUDKJumpPad : public ANavigationPoint
{
public:
	struct FVector                                     JumpVelocity;                                             // 0x0368(0x000C)
	class APathNode*                                   JumpTarget;                                               // 0x0374(0x0008) (Edit)
	class USoundCue*                                   JumpSound;                                                // 0x037C(0x0008) (Edit)
	float                                              JumpTime;                                                 // 0x0384(0x0004) (Edit)
	float                                              JumpAirControl;                                           // 0x0388(0x0004) (Edit)
	class UAudioComponent*                             JumpAmbientSound;                                         // 0x038C(0x0008) (ExportObject, Component, EditInline)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKJumpPad");
		return ptr;
	}


	bool SuggestMovePreparation(class APawn* Other);
	void PostTouch(class AActor* Other);
	void Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
};


// Class UDKBase.UDKKActorBreakable
// 0x004C (0x03C4 - 0x0378)
class AUDKKActorBreakable : public AKActor
{
public:
	unsigned long                                      bHasHealth : 1;                                           // 0x0378(0x0004) (Edit)
	unsigned long                                      bDamageOnEncroachment : 1;                                // 0x0378(0x0004) (Edit)
	unsigned long                                      bResetDOEWhenAsleep : 1;                                  // 0x0378(0x0004) (Edit)
	unsigned long                                      bTakeDamageOnEncroachment : 1;                            // 0x0378(0x0004) (Edit)
	unsigned long                                      bBreakWhenCausingDamage : 1;                              // 0x0378(0x0004) (Edit)
	unsigned long                                      bBroken : 1;                                              // 0x0378(0x0004)
	int                                                Health;                                                   // 0x037C(0x0004) (Edit)
	int                                                EncroachDamage_Other;                                     // 0x0380(0x0004) (Edit)
	int                                                EncroachDamage_Self;                                      // 0x0384(0x0004) (Edit)
	class UClass*                                      DmgTypeClass;                                             // 0x0388(0x0008) (Edit)
	int                                                DOEResetThreshold;                                        // 0x0390(0x0004) (Edit)
	class UParticleSystem*                             BrokenTemplate;                                           // 0x0394(0x0008) (Edit)
	class AController*                                 InstigatorController;                                     // 0x039C(0x0008)
	struct FScriptDelegate                             __OnBreakApart__Delegate;                                 // 0x03A4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03A4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnEncroach__Delegate;                                   // 0x03B4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03B4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKKActorBreakable");
		return ptr;
	}


	void ReplicatedEvent(const struct FName& VarName);
	void BreakApart();
	bool EncroachingOn(class AActor* Other);
	void TakeDamage(int Damage, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser);
	bool OnEncroach(class AActor* Other);
	void OnBreakApart();
};


// Class UDKBase.UDKMapInfo
// 0x0004 (0x0064 - 0x0060)
class UUDKMapInfo : public UMapInfo
{
public:
	float                                              VisibilityModifier;                                       // 0x0060(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKMapInfo");
		return ptr;
	}

};


// Class UDKBase.UDKMapMusicInfo
// 0x00F4 (0x0154 - 0x0060)
class UUDKMapMusicInfo : public UObject
{
public:
	struct FMusicForAMap                               MapMusic;                                                 // 0x0060(0x007C) (Edit)
	struct FStingersForAMap                            MapStingers;                                              // 0x00DC(0x0078) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKMapMusicInfo");
		return ptr;
	}

};


// Class UDKBase.UDKParticleSystemComponent
// 0x0014 (0x03C0 - 0x03AC)
class UUDKParticleSystemComponent : public UParticleSystemComponent
{
public:
	float                                              FOV;                                                      // 0x03AC(0x0004) (Const)
	unsigned long                                      bHasSavedScale3D : 1;                                     // 0x03B0(0x0004) (Const)
	struct FVector                                     SavedScale3D;                                             // 0x03B4(0x000C) (Const)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKParticleSystemComponent");
		return ptr;
	}


	void SetFOV(float NewFOV);
};


// Class UDKBase.UDKPawn
// 0x0238 (0x07AC - 0x0574)
class AUDKPawn : public AGamePawn
{
public:
	unsigned long                                      bReadyToDoubleJump : 1;                                   // 0x0574(0x0004)
	unsigned long                                      bRequiresDoubleJump : 1;                                  // 0x0574(0x0004)
	unsigned long                                      bCanDoubleJump : 1;                                       // 0x0574(0x0004)
	unsigned long                                      bNoJumpAdjust : 1;                                        // 0x0574(0x0004)
	unsigned long                                      bIsHoverboardAnimPawn : 1;                                // 0x0574(0x0004)
	unsigned long                                      bFeigningDeath : 1;                                       // 0x0574(0x0004) (Net)
	unsigned long                                      bNotifyStopFalling : 1;                                   // 0x0574(0x0004)
	unsigned long                                      bIsInvisible : 1;                                         // 0x0574(0x0004) (Net)
	unsigned long                                      bSmoothNetUpdates : 1;                                    // 0x0574(0x0004)
	unsigned long                                      bPuttingDownWeapon : 1;                                   // 0x0574(0x0004) (Net)
	unsigned long                                      bPlayingFeignDeathRecovery : 1;                           // 0x0574(0x0004)
	unsigned long                                      bCanPlayFallingImpacts : 1;                               // 0x0574(0x0004)
	unsigned long                                      bEnableFootPlacement : 1;                                 // 0x0574(0x0004)
	unsigned long                                      bPostRenderOtherTeam : 1;                                 // 0x0574(0x0004)
	unsigned long                                      bBlendOutTakeHitPhysics : 1;                              // 0x0574(0x0004)
	unsigned long                                      bUpdateEyeheight : 1;                                     // 0x0574(0x0004)
	unsigned long                                      bTearOffGibs : 1;                                         // 0x0574(0x0004) (Net)
	float                                              MaxDoubleJumpHeight;                                      // 0x0578(0x0004)
	int                                                MultiJumpRemaining;                                       // 0x057C(0x0004)
	int                                                MaxMultiJump;                                             // 0x0580(0x0004)
	int                                                MultiJumpBoost;                                           // 0x0584(0x0004)
	float                                              CustomGravityScaling;                                     // 0x0588(0x0004) (Net)
	struct FPlayEmoteInfo                              EmoteRepInfo;                                             // 0x058C(0x0010) (Net)
	float                                              LastEmoteTime;                                            // 0x059C(0x0004)
	float                                              MinTimeBetweenEmotes;                                     // 0x05A0(0x0004)
	unsigned char                                      BigTeleportCount;                                         // 0x05A4(0x0001) (Net)
	unsigned char                                      WeaponOverlayFlags;                                       // 0x05A5(0x0001) (Net)
	unsigned char                                      UnknownData00[0x2];                                       // 0x05A6(0x0002) MISSED OFFSET
	struct FUTTakeHitInfo                              LastTakeHitInfo;                                          // 0x05A8(0x002C) (Net)
	float                                              LastTakeHitTimeout;                                       // 0x05D4(0x0004)
	float                                              FireRateMultiplier;                                       // 0x05D8(0x0004) (Net)
	float                                              HeadScale;                                                // 0x05DC(0x0004) (Net)
	float                                              MaxSmoothNetUpdateDist;                                   // 0x05E0(0x0004)
	float                                              NoSmoothNetUpdateDist;                                    // 0x05E4(0x0004)
	float                                              SmoothNetUpdateTime;                                      // 0x05E8(0x0004)
	struct FVector                                     MeshTranslationOffset;                                    // 0x05EC(0x000C)
	float                                              OldZ;                                                     // 0x05F8(0x0004)
	class UAudioComponent*                             PawnAmbientSound;                                         // 0x05FC(0x0008) (ExportObject, Component, EditInline)
	class USoundCue*                                   PawnAmbientSoundCue;                                      // 0x0604(0x0008) (Net)
	struct FDrivenWeaponPawnInfo                       DrivenWeaponPawn;                                         // 0x060C(0x0014) (Net)
	class UAudioComponent*                             WeaponAmbientSound;                                       // 0x0620(0x0008) (ExportObject, Component, EditInline)
	class USoundCue*                                   WeaponAmbientSoundCue;                                    // 0x0628(0x0008) (Net)
	class UMaterial*                                   ReplicatedBodyMaterial;                                   // 0x0630(0x0008) (Net)
	TArray<class UMaterialInstanceConstant*>           BodyMaterialInstances;                                    // 0x0638(0x0010) (NeedCtorLink)
	class UMaterialInterface*                          OverlayMaterialInstance;                                  // 0x0648(0x0008) (Net)
	class USkelControlSingleBone*                      RootRotControl;                                           // 0x0650(0x0008)
	class UAnimNodeAimOffset*                          AimNode;                                                  // 0x0658(0x0008)
	class UGameSkelCtrl_Recoil*                        GunRecoilNode;                                            // 0x0660(0x0008)
	class UGameSkelCtrl_Recoil*                        LeftRecoilNode;                                           // 0x0668(0x0008)
	class UGameSkelCtrl_Recoil*                        RightRecoilNode;                                          // 0x0670(0x0008)
	TArray<class AUDKBot*>                             Trackers;                                                 // 0x0678(0x0010) (NeedCtorLink)
	float                                              BodyMatFadeDuration;                                      // 0x0688(0x0004)
	struct FLinearColor                                CurrentBodyMatColor;                                      // 0x068C(0x0010)
	float                                              RemainingBodyMatDuration;                                 // 0x069C(0x0004)
	float                                              ClientBodyMatDuration;                                    // 0x06A0(0x0004) (Net)
	struct FLinearColor                                BodyMatColor;                                             // 0x06A4(0x0010)
	struct FRotator                                    CompressedBodyMatColor;                                   // 0x06B4(0x000C) (Net)
	float                                              StartFallImpactTime;                                      // 0x06C0(0x0004)
	struct FName                                       TorsoBoneName;                                            // 0x06C4(0x0008)
	class USoundCue*                                   FallImpactSound;                                          // 0x06CC(0x0008)
	float                                              FallSpeedThreshold;                                       // 0x06D4(0x0004)
	class UStaticMeshComponent*                        BlobShadow;                                               // 0x06D8(0x0008) (ExportObject, Component, EditInline)
	class USkeletalMeshComponent*                      OverlayMesh;                                              // 0x06E0(0x0008) (ExportObject, Component, EditInline)
	struct FName                                       LeftFootBone;                                             // 0x06E8(0x0008)
	struct FName                                       RightFootBone;                                            // 0x06F0(0x0008)
	struct FName                                       LeftFootControlName;                                      // 0x06F8(0x0008)
	struct FName                                       RightFootControlName;                                     // 0x0700(0x0008)
	float                                              BaseTranslationOffset;                                    // 0x0708(0x0004)
	float                                              CrouchTranslationOffset;                                  // 0x070C(0x0004)
	float                                              OldLocationZ;                                             // 0x0710(0x0004)
	float                                              ZSmoothingRate;                                           // 0x0714(0x0004) (Const)
	float                                              MaxFootPlacementDistSquared;                              // 0x0718(0x0004)
	class USkelControlFootPlacement*                   LeftLegControl;                                           // 0x071C(0x0008)
	class USkelControlFootPlacement*                   RightLegControl;                                          // 0x0724(0x0008)
	class USkelControlLimb*                            LeftHandIK;                                               // 0x072C(0x0008)
	class USkelControlLimb*                            RightHandIK;                                              // 0x0734(0x0008)
	struct FName                                       DamageParameterName;                                      // 0x073C(0x0008)
	struct FName                                       SaturationParameterName;                                  // 0x0744(0x0008)
	float                                              LastPostRenderTraceTime;                                  // 0x074C(0x0004)
	float                                              TeamBeaconMaxDist;                                        // 0x0750(0x0004) (Edit)
	float                                              StartedFallingTime;                                       // 0x0754(0x0004)
	float                                              SlopeBoostFriction;                                       // 0x0758(0x0004)
	class UAnimNodeAimOffset*                          FlyingDirOffset;                                          // 0x075C(0x0008)
	int                                                MaxLeanRoll;                                              // 0x0764(0x0004)
	float                                              FeignDeathPhysicsBlendOutSpeed;                           // 0x0768(0x0004)
	float                                              SwimmingZOffset;                                          // 0x076C(0x0004) (Edit)
	float                                              SwimmingZOffsetSpeed;                                     // 0x0770(0x0004) (Edit)
	float                                              CrouchMeshZOffset;                                        // 0x0774(0x0004)
	float                                              TakeHitPhysicsBlendOutSpeed;                              // 0x0778(0x0004)
	class UUDKSkeletalMeshComponent*                   ArmsMesh[0x2];                                            // 0x077C(0x0008) (ExportObject, Component, EditInline)
	int                                                RootYaw;                                                  // 0x078C(0x0004)
	float                                              RootYawSpeed;                                             // 0x0790(0x0004)
	int                                                MaxYawAim;                                                // 0x0794(0x0004) (Edit)
	struct FVector2D                                   CurrentSkelAim;                                           // 0x0798(0x0008)
	struct FVector                                     HUDLocation;                                              // 0x07A0(0x000C)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKPawn");
		return ptr;
	}


	void StuckFalling();
	void UpdateEyeHeight(float DeltaTime);
	void TakeHitBlendedOut();
	void StartFeignDeathRecoveryAnim();
	void SetHandIKEnabled(bool bEnabled);
	void SetWeaponAttachmentVisibility(bool bAttachmentVisible);
	void NativePostRenderFor(class APlayerController* PC, class UCanvas* Canvas, const struct FVector& CameraPosition, const struct FVector& CameraDir);
	void SetHUDLocation(const struct FVector& NewHUDLocation);
	bool SuggestJumpVelocity(const struct FVector& Destination, const struct FVector& Start, bool bRequireFallLanding, struct FVector* JumpVelocity);
	void StartCrouch(float HeightAdjust);
	void EndCrouch(float HeightAdjust);
	void StoppedFalling();
	void HoldGameObject(class AUDKCarriedObject* UDKGameObj);
	bool IsInvisible();
	struct FVector GetTargetLocation(class AActor* RequestedBy, bool bRequestAlternateLoc);
	void EnsureOverlayComponentLast();
	void RestorePreRagdollCollisionComponent();
	void GetBoundingCylinder(float* CollisionRadius, float* CollisionHeight);
};


// Class UDKBase.UDKPickupFactory
// 0x00C0 (0x0454 - 0x0394)
class AUDKPickupFactory : public APickupFactory
{
public:
	unsigned long                                      bIsRespawning : 1;                                        // 0x0394(0x0004) (Net)
	unsigned long                                      bPulseBase : 1;                                           // 0x0394(0x0004) (Net)
	unsigned long                                      bIsDisabled : 1;                                          // 0x0394(0x0004) (Net)
	unsigned long                                      bFloatingPickup : 1;                                      // 0x0394(0x0004)
	unsigned long                                      bRandomStart : 1;                                         // 0x0394(0x0004)
	unsigned long                                      bRotatingPickup : 1;                                      // 0x0394(0x0004)
	unsigned long                                      bUpdatingPickup : 1;                                      // 0x0394(0x0004)
	unsigned long                                      bDoVisibilityFadeIn : 1;                                  // 0x0394(0x0004)
	class UStaticMeshComponent*                        BaseMesh;                                                 // 0x0398(0x0008) (ExportObject, Transient, Component, EditInline)
	class UMaterialInstanceConstant*                   BaseMaterialInstance;                                     // 0x03A0(0x0008)
	struct FLinearColor                                BaseBrightEmissive;                                       // 0x03A8(0x0010)
	struct FLinearColor                                BaseDimEmissive;                                          // 0x03B8(0x0010)
	float                                              BasePulseRate;                                            // 0x03C8(0x0004)
	float                                              BasePulseTime;                                            // 0x03CC(0x0004)
	float                                              PulseThreshold;                                           // 0x03D0(0x0004)
	struct FLinearColor                                BaseTargetEmissive;                                       // 0x03D4(0x0010)
	struct FLinearColor                                BaseEmissive;                                             // 0x03E4(0x0010)
	struct FName                                       BaseMaterialParamName;                                    // 0x03F4(0x0008)
	float                                              BobTimer;                                                 // 0x03FC(0x0004)
	float                                              BobOffset;                                                // 0x0400(0x0004)
	float                                              BobSpeed;                                                 // 0x0404(0x0004)
	float                                              BobBaseOffset;                                            // 0x0408(0x0004)
	float                                              YawRotationRate;                                          // 0x040C(0x0004)
	struct FVector                                     PivotTranslation;                                         // 0x0410(0x000C)
	struct FName                                       VisibilityParamName;                                      // 0x041C(0x0008)
	class UMaterialInstanceConstant*                   MIC_Visibility;                                           // 0x0424(0x0008)
	class UMaterialInstanceConstant*                   MIC_VisibilitySecondMaterial;                             // 0x042C(0x0008)
	class UParticleSystemComponent*                    Glow;                                                     // 0x0434(0x0008) (ExportObject, Component, EditInline)
	struct FName                                       GlowEmissiveParam;                                        // 0x043C(0x0008)
	class UPrimitiveComponent*                         Spinner;                                                  // 0x0444(0x0008) (ExportObject, Component, EditInline)
	class UUDKParticleSystemComponent*                 SpinningParticleEffects;                                  // 0x044C(0x0008) (ExportObject, Component, EditInline)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKPickupFactory");
		return ptr;
	}


	void SetPickupHidden();
	void SetPickupVisible();
};


// Class UDKBase.UDKPlayerController
// 0x0574 (0x0CB8 - 0x0744)
class AUDKPlayerController : public AGamePlayerController
{
public:
	class UCameraAnimInst*                             CameraAnimPlayer;                                         // 0x0744(0x0008)
	class AUDKEmitCameraEffect*                        CameraEffect;                                             // 0x074C(0x0008)
	unsigned long                                      bDedicatedServerSpectator : 1;                            // 0x0754(0x0004)
	unsigned long                                      bAcuteHearing : 1;                                        // 0x0754(0x0004)
	unsigned long                                      bConsolePlayer : 1;                                       // 0x0754(0x0004)
	unsigned long                                      bPulseTeamColor : 1;                                      // 0x0754(0x0004)
	unsigned long                                      bUsePhysicsRotation : 1;                                  // 0x0754(0x0004)
	struct FVector                                     ShakeOffset;                                              // 0x0758(0x000C)
	struct FRotator                                    ShakeRot;                                                 // 0x0764(0x000C)
	struct FPostProcessSettings                        CamOverridePostProcess;                                   // 0x0770(0x0298) (NeedCtorLink)
	struct FPostProcessSettings                        PostProcessModifier;                                      // 0x0A08(0x0298) (NeedCtorLink)
	TArray<class AActor*>                              PotentiallyHiddenActors;                                  // 0x0CA0(0x0010) (NeedCtorLink)
	float                                              VehicleCheckRadiusScaling;                                // 0x0CB0(0x0004)
	float                                              PulseTimer;                                               // 0x0CB4(0x0004)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKPlayerController");
		return ptr;
	}


	class APawn* GetTargetAdhesionFrictionTarget(float MaxDistance, struct FVector* CamLoc, struct FRotator* CamRot);
	void ClearCameraEffect();
	void ClientSpawnCameraEffect(class UClass* CameraEffectClass);
	void RemoveCameraEffect(class AUDKEmitCameraEffect* CamEmitter);
	bool IsMouseAvailable();
	bool IsKeyboardAvailable();
	void SetHardwarePhysicsEnabled(bool bEnabled);
	void SetGamma(float GammaValue);
};


// Class UDKBase.UDKPlayerInput
// 0x0000 (0x0550 - 0x0550)
class UUDKPlayerInput : public UMobilePlayerInput
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKPlayerInput");
		return ptr;
	}


	struct FString GetUDKBindNameFromCommand(const struct FString& BindCommand);
};


// Class UDKBase.UDKProfileSettings
// 0x0000 (0x00C4 - 0x00C4)
class UUDKProfileSettings : public UOnlineProfileSettings
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKProfileSettings");
		return ptr;
	}


	void STATIC_ResetKeysToDefault(class ULocalPlayer* InPlayerOwner);
	void ResetToDefault(int ProfileId);
};


// Class UDKBase.UDKProjectile
// 0x0044 (0x02F0 - 0x02AC)
class AUDKProjectile : public AProjectile
{
public:
	unsigned long                                      bWideCheck : 1;                                           // 0x02AC(0x0004) (Net)
	unsigned long                                      bShuttingDown : 1;                                        // 0x02AC(0x0004)
	unsigned long                                      bCheckProjectileLight : 1;                                // 0x02AC(0x0004)
	unsigned long                                      bNotBlockedByShield : 1;                                  // 0x02AC(0x0004)
	float                                              CheckRadius;                                              // 0x02B0(0x0004)
	float                                              AccelRate;                                                // 0x02B4(0x0004)
	class AActor*                                      SeekTarget;                                               // 0x02B8(0x0008) (Net)
	float                                              BaseTrackingStrength;                                     // 0x02C0(0x0004)
	float                                              HomingTrackingStrength;                                   // 0x02C4(0x0004)
	struct FVector                                     InitialDir;                                               // 0x02C8(0x000C) (Net)
	float                                              LastLockWarningTime;                                      // 0x02D4(0x0004)
	float                                              LockWarningInterval;                                      // 0x02D8(0x0004)
	float                                              TerminalVelocity;                                         // 0x02DC(0x0004)
	float                                              Buoyancy;                                                 // 0x02E0(0x0004)
	float                                              CustomGravityScaling;                                     // 0x02E4(0x0004)
	class AVehicle*                                    InstigatorBaseVehicle;                                    // 0x02E8(0x0008) (Net)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKProjectile");
		return ptr;
	}


	void CreateProjectileLight();
	float GetTerminalVelocity();
};


// Class UDKBase.UDKScout
// 0x0018 (0x0624 - 0x060C)
class AUDKScout : public AScout
{
public:
	unsigned long                                      bRequiresDoubleJump : 1;                                  // 0x060C(0x0004)
	float                                              MaxDoubleJumpHeight;                                      // 0x0610(0x0004)
	class UClass*                                      PrototypePawnClass;                                       // 0x0614(0x0008)
	struct FName                                       SizePersonFindName;                                       // 0x061C(0x0008)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKScout");
		return ptr;
	}


	bool SuggestJumpVelocity(const struct FVector& Destination, const struct FVector& Start, bool bRequireFallLanding, struct FVector* JumpVelocity);
};


// Class UDKBase.UDKScriptedNavigationPoint
// 0x0004 (0x036C - 0x0368)
class AUDKScriptedNavigationPoint : public ANavigationPoint
{
public:
	unsigned long                                      bScriptSpecifyEndAnchor : 1;                              // 0x0368(0x0004)
	unsigned long                                      bScriptNotifyAnchorFindingResult : 1;                     // 0x0368(0x0004)
	unsigned long                                      bAnchorMustBeReachable : 1;                               // 0x0368(0x0004)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKScriptedNavigationPoint");
		return ptr;
	}


	void NotifyAnchorFindingResult(class ANavigationPoint* EndAnchor, class APawn* RouteFinder);
	class ANavigationPoint* SpecifyEndAnchor(class APawn* RouteFinder);
};


// Class UDKBase.UDKSkeletalMeshComponent
// 0x000C (0x07A8 - 0x079C)
class UUDKSkeletalMeshComponent : public USkeletalMeshComponent
{
public:
	float                                              FOV;                                                      // 0x079C(0x0004) (Edit, Const)
	unsigned long                                      bForceLoadTextures : 1;                                   // 0x07A0(0x0004)
	float                                              ClearStreamingTime;                                       // 0x07A4(0x0004)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKSkeletalMeshComponent");
		return ptr;
	}


	void SetFOV(float NewFOV);
	void PreloadTextures(bool bForcePreload, float ClearTime);
};


// Class UDKBase.UDKTeamOwnedInfo
// 0x0008 (0x0258 - 0x0250)
class AUDKTeamOwnedInfo : public AReplicationInfo
{
public:
	class ATeamInfo*                                   Team;                                                     // 0x0250(0x0008)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKTeamOwnedInfo");
		return ptr;
	}


	unsigned char GetTeamNum();
};


// Class UDKBase.UDKSquadAI
// 0x0050 (0x02A8 - 0x0258)
class AUDKSquadAI : public AUDKTeamOwnedInfo
{
public:
	class AUDKGameObjective*                           SquadObjective;                                           // 0x0258(0x0008) (Net)
	class ANavigationPoint*                            RouteObjective;                                           // 0x0260(0x0008)
	TArray<class ANavigationPoint*>                    ObjectiveRouteCache;                                      // 0x0268(0x0010) (NeedCtorLink)
	TArray<class ANavigationPoint*>                    PreviousObjectiveRouteCache;                              // 0x0278(0x0010) (NeedCtorLink)
	class AUDKBot*                                     PendingSquadRouteMaker;                                   // 0x0288(0x0008)
	int                                                SquadRouteIteration;                                      // 0x0290(0x0004)
	TArray<struct FAlternateRoute>                     SquadRoutes;                                              // 0x0294(0x0010) (NeedCtorLink)
	int                                                MaxSquadRoutes;                                           // 0x02A4(0x0004)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKSquadAI");
		return ptr;
	}

};


// Class UDKBase.UDKTeamPlayerStart
// 0x0014 (0x038C - 0x0378)
class AUDKTeamPlayerStart : public APlayerStart
{
public:
	unsigned char                                      TeamNumber;                                               // 0x0378(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0379(0x0003) MISSED OFFSET
	TArray<class UTexture2D*>                          TeamSprites;                                              // 0x037C(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKTeamPlayerStart");
		return ptr;
	}

};


// Class UDKBase.UDKTeleporterBase
// 0x0040 (0x03D4 - 0x0394)
class AUDKTeleporterBase : public ATeleporter
{
public:
	class USceneCaptureComponent*                      PortalCaptureComponent;                                   // 0x0394(0x0008) (Edit, ExportObject, EditConst, Component, EditInline)
	class UTextureRenderTarget2D*                      TextureTarget;                                            // 0x039C(0x0008)
	int                                                TextureResolutionX;                                       // 0x03A4(0x0004) (Edit)
	int                                                TextureResolutionY;                                       // 0x03A8(0x0004) (Edit)
	class AActor*                                      PortalViewTarget;                                         // 0x03AC(0x0008)
	class UMaterialInterface*                          PortalMaterial;                                           // 0x03B4(0x0008)
	class UMaterialInstanceConstant*                   PortalMaterialInstance;                                   // 0x03BC(0x0008)
	struct FName                                       PortalTextureParameter;                                   // 0x03C4(0x0008)
	class USoundCue*                                   TeleportingSound;                                         // 0x03CC(0x0008)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKTeleporterBase");
		return ptr;
	}


	bool Accept(class AActor* Incoming, class AActor* Source);
	void InitializePortalEffect(class AActor* Dest);
	void PostBeginPlay();
};


// Class UDKBase.UDKTrajectoryReachSpec
// 0x0000 (0x00C8 - 0x00C8)
class UUDKTrajectoryReachSpec : public UAdvancedReachSpec
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKTrajectoryReachSpec");
		return ptr;
	}

};


// Class UDKBase.UDKJumpPadReachSpec
// 0x0000 (0x00C8 - 0x00C8)
class UUDKJumpPadReachSpec : public UUDKTrajectoryReachSpec
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKJumpPadReachSpec");
		return ptr;
	}

};


// Class UDKBase.UDKUIDataProvider_SearchResult
// 0x0030 (0x00CC - 0x009C)
class UUDKUIDataProvider_SearchResult : public UUIDataProvider_Settings
{
public:
	struct FName                                       PlayerRatioTag;                                           // 0x009C(0x0008) (Const)
	struct FName                                       GameModeFriendlyNameTag;                                  // 0x00A4(0x0008) (Const)
	struct FName                                       ServerFlagsTag;                                           // 0x00AC(0x0008) (Const)
	struct FName                                       MapNameTag;                                               // 0x00B4(0x0008) (Const)
	struct FString                                     IconFontPathName;                                         // 0x00BC(0x0010) (Const, NeedCtorLink)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKUIDataProvider_SearchResult");
		return ptr;
	}


	bool IsPrivateServer();
};


// Class UDKBase.UDKUIDataProvider_SimpleElementProvider
// 0x0000 (0x0070 - 0x0070)
class UUDKUIDataProvider_SimpleElementProvider : public UUIDataProvider
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKUIDataProvider_SimpleElementProvider");
		return ptr;
	}

};


// Class UDKBase.UDKUIDataProvider_ServerDetails
// 0x0004 (0x0074 - 0x0070)
class UUDKUIDataProvider_ServerDetails : public UUDKUIDataProvider_SimpleElementProvider
{
public:
	int                                                SearchResultsRow;                                         // 0x0070(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKUIDataProvider_ServerDetails");
		return ptr;
	}

};


// Class UDKBase.UDKUIDataProvider_StringArray
// 0x0010 (0x0080 - 0x0070)
class UUDKUIDataProvider_StringArray : public UUDKUIDataProvider_SimpleElementProvider
{
public:
	TArray<struct FString>                             Strings;                                                  // 0x0070(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKUIDataProvider_StringArray");
		return ptr;
	}

};


// Class UDKBase.UDKUIDataStore_MenuItems
// 0x0038 (0x0128 - 0x00F0)
class UUDKUIDataStore_MenuItems : public UUIDataStore_GameResource
{
public:
	class UClass*                                      MapInfoDataProviderClass;                                 // 0x00F0(0x0008)
	TArray<int>                                        EnabledMutators;                                          // 0x00F8(0x0010) (NeedCtorLink)
	TArray<int>                                        MapCycle;                                                 // 0x0108(0x0010) (NeedCtorLink)
	TArray<int>                                        WeaponPriority;                                           // 0x0118(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKUIDataStore_MenuItems");
		return ptr;
	}


	void AddListElementProvidersKey(const struct FName& KeyName, class UUDKUIResourceDataProvider* Provider);
	void RemoveListElementProvidersKey(const struct FName& KeyName);
	void InitializeListElementProviders();
	bool GetProviderSet(const struct FName& ProviderFieldName, TArray<class UUDKUIResourceDataProvider*>* OutProviders);
	void STATIC_GetAllResourceDataProviders(class UClass* ProviderClass, TArray<class UUDKUIResourceDataProvider*>* Providers);
};


// Class UDKBase.UDKUIDataStore_Options
// 0x0058 (0x0148 - 0x00F0)
class UUDKUIDataStore_Options : public UUIDataStore_GameResource
{
public:
	struct FMultiMap_Mirror                            OptionProviders;                                          // 0x00F0(0x0048) (Const, Native, Transient)
	TArray<class UUDKUIResourceDataProvider*>          DynamicProviders;                                         // 0x0138(0x0010) (Transient, NeedCtorLink)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKUIDataStore_Options");
		return ptr;
	}

};


// Class UDKBase.UDKUIDataStore_StringAliasBindingMap
// 0x005C (0x0150 - 0x00F4)
class UUDKUIDataStore_StringAliasBindingMap : public UUIDataStore_StringAliasMap
{
public:
	int                                                FakePlatform;                                             // 0x00F4(0x0004) (Config)
	struct FMap_Mirror                                 CommandToBindNames;                                       // 0x00F8(0x0048) (Const, Native, Transient)
	TArray<struct FControllerMap>                      ControllerMapArray;                                       // 0x0140(0x0010) (Config, NeedCtorLink)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKUIDataStore_StringAliasBindingMap");
		return ptr;
	}


	void ClearBoundKeyCache();
	void AddMappingToBoundKeyCache(const struct FString& Command, const struct FString& MappingStr, int FieldIndex);
	bool FindMappingInBoundKeyCache(const struct FString& Command, struct FString* MappingStr, int* FieldIndex);
	int GetBoundStringWithFieldName(const struct FString& FieldName, struct FString* MappedString, int* StartIndex, struct FString* BindString);
	int GetStringWithFieldName(const struct FString& FieldName, struct FString* MappedString);
};


// Class UDKBase.UDKUIDataStore_StringAliasMap
// 0x0004 (0x00F8 - 0x00F4)
class UUDKUIDataStore_StringAliasMap : public UUIDataStore_StringAliasMap
{
public:
	int                                                FakePlatform;                                             // 0x00F4(0x0004) (Config)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKUIDataStore_StringAliasMap");
		return ptr;
	}


	int GetStringWithFieldName(const struct FString& FieldName, struct FString* MappedString);
};


// Class UDKBase.UDKUIDataStore_StringList
// 0x0010 (0x00A8 - 0x0098)
class UUDKUIDataStore_StringList : public UUIDataStore_StringBase
{
public:
	TArray<struct FEStringListData>                    StringData;                                               // 0x0098(0x0010) (Config, NeedCtorLink)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKUIDataStore_StringList");
		return ptr;
	}


	int Num(const struct FName& FieldName);
	int SetCurrentValueIndex(const struct FName& FieldName, int NewValueIndex);
	int GetCurrentValueIndex(const struct FName& FieldName);
	bool GetCurrentValue(const struct FName& FieldName, struct FString* out_Value);
	struct FString GetStr(const struct FName& FieldName, int StrIndex);
	int FindStr(const struct FName& FieldName, const struct FString& SearchString);
	void Empty(const struct FName& FieldName, bool bBatchOp);
	void RemoveStrByIndex(const struct FName& FieldName, int Index, int COUNT, bool bBatchOp);
	void RemoveStr(const struct FName& FieldName, const struct FString& StringToRemove, bool bBatchOp);
	int GetFieldIndex(const struct FName& FieldName);
	void Registered(class ULocalPlayer* PlayerOwner);
};


// Class UDKBase.UDKUIResourceDataProvider
// 0x0024 (0x00B8 - 0x0094)
class UUDKUIResourceDataProvider : public UUIResourceDataProvider
{
public:
	struct FString                                     FriendlyName;                                             // 0x0094(0x0010) (Const, Config, Localized, NeedCtorLink)
	unsigned long                                      bSearchAllInis : 1;                                       // 0x00A4(0x0004) (Edit)
	unsigned long                                      bRemoveOn360 : 1;                                         // 0x00A4(0x0004) (Config)
	unsigned long                                      bRemoveOnPC : 1;                                          // 0x00A4(0x0004) (Config)
	unsigned long                                      bRemoveOnPS3 : 1;                                         // 0x00A4(0x0004) (Config)
	struct FString                                     IniName;                                                  // 0x00A8(0x0010) (Const, NeedCtorLink)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKUIResourceDataProvider");
		return ptr;
	}


	bool ShouldBeFiltered();
};


// Class UDKBase.UDKUIDataProvider_MapInfo
// 0x0044 (0x00FC - 0x00B8)
class UUDKUIDataProvider_MapInfo : public UUDKUIResourceDataProvider
{
public:
	int                                                MapId;                                                    // 0x00B8(0x0004) (Config)
	struct FString                                     MapName;                                                  // 0x00BC(0x0010) (Config, NeedCtorLink)
	struct FString                                     NumPlayers;                                               // 0x00CC(0x0010) (Const, Config, Localized, NeedCtorLink)
	struct FString                                     Description;                                              // 0x00DC(0x0010) (Const, Config, Localized, NeedCtorLink)
	struct FString                                     PreviewImageMarkup;                                       // 0x00EC(0x0010) (Config, NeedCtorLink)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKUIDataProvider_MapInfo");
		return ptr;
	}

};


// Class UDKBase.UDKUIDataProvider_MenuOption
// 0x0068 (0x0120 - 0x00B8)
class UUDKUIDataProvider_MenuOption : public UUDKUIResourceDataProvider
{
public:
	TEnumAsByte<EUTOptionType>                         OptionType;                                               // 0x00B8(0x0001) (Config)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B9(0x0003) MISSED OFFSET
	TArray<struct FName>                               OptionSet;                                                // 0x00BC(0x0010) (Config, NeedCtorLink)
	struct FString                                     DataStoreMarkup;                                          // 0x00CC(0x0010) (Config, NeedCtorLink)
	struct FName                                       RequiredGameMode;                                         // 0x00DC(0x0008) (Config)
	struct FString                                     CustomFriendlyName;                                       // 0x00E4(0x0010) (NeedCtorLink)
	struct FString                                     Description;                                              // 0x00F4(0x0010) (Const, Config, Localized, NeedCtorLink)
	unsigned long                                      bEditableCombo : 1;                                       // 0x0104(0x0004) (Config)
	unsigned long                                      bNumericCombo : 1;                                        // 0x0104(0x0004) (Config)
	unsigned long                                      bKeyboardOrMouseOption : 1;                               // 0x0104(0x0004) (Config)
	unsigned long                                      bOnlineOnly : 1;                                          // 0x0104(0x0004) (Config)
	unsigned long                                      bOfflineOnly : 1;                                         // 0x0104(0x0004) (Config)
	int                                                EditBoxMaxLength;                                         // 0x0108(0x0004) (Config)
	struct FUIRangeData                                RangeData;                                                // 0x010C(0x0014) (Config)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKUIDataProvider_MenuOption");
		return ptr;
	}

};


// Class UDKBase.UDKVehicleBase
// 0x0004 (0x073C - 0x0738)
class AUDKVehicleBase : public ASVehicle
{
public:
	unsigned long                                      bShouldEject : 1;                                         // 0x0738(0x0004)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKVehicleBase");
		return ptr;
	}


	void HandleDeadVehicleDriver();
	void DriverLeft();
	void StopFiringWeapon();
	bool BotFire(bool bFinished);
	unsigned char ChooseFireMode();
	void DetachDriver(class APawn* P);
	void EjectDriver();
	struct FName GetVehicleDrivingStatName();
	void ApplyWeaponEffects(int OverlayFlags, int SeatIndex);
	bool DriverEnter(class APawn* P);
	void DrivingStatusChanged();
	bool NeedToTurn(const struct FVector& targ);
	float GetDamageScaling();
	void ServerChangeSeat(int RequestedSeat);
	void ServerAdjacentSeat(int Direction, class AController* C);
	void AdjacentSeat(int Direction, class AController* C);
	void SwitchWeapon(unsigned char NewGroup);
	void HoldGameObject(class AUDKCarriedObject* GameObj);
};


// Class UDKBase.UDKVehicle
// 0x0208 (0x0944 - 0x073C)
class AUDKVehicle : public AUDKVehicleBase
{
public:
	unsigned long                                      bEjectKilledBodies : 1;                                   // 0x073C(0x0004)
	unsigned long                                      bHomingTarget : 1;                                        // 0x073C(0x0004)
	unsigned long                                      bFrontalCollision : 1;                                    // 0x073C(0x0004) (Const)
	unsigned long                                      bFrontalCollisionWithFixed : 1;                           // 0x073C(0x0004) (Const)
	unsigned long                                      bNoZDampingInAir : 1;                                     // 0x073C(0x0004)
	unsigned long                                      bNoZDamping : 1;                                          // 0x073C(0x0004)
	unsigned long                                      bIsDisabled : 1;                                          // 0x073C(0x0004) (Net)
	unsigned long                                      bIsBurning : 1;                                           // 0x073C(0x0004)
	unsigned long                                      bEjectPassengersWhenFlipped : 1;                          // 0x073C(0x0004)
	unsigned long                                      bIsScraping : 1;                                          // 0x073C(0x0004)
	unsigned long                                      bTakeWaterDamageWhileDriving : 1;                         // 0x073C(0x0004)
	unsigned long                                      bIsInDestroyablePenetration : 1;                          // 0x073C(0x0004)
	unsigned long                                      bDeadVehicle : 1;                                         // 0x073C(0x0004) (Net)
	unsigned long                                      bJostleWhileDriving : 1;                                  // 0x073C(0x0004)
	unsigned long                                      bFloatWhenDriven : 1;                                     // 0x073C(0x0004)
	unsigned long                                      bAllowedExit : 1;                                         // 0x073C(0x0004)
	unsigned long                                      bUseAlternatePaths : 1;                                   // 0x073C(0x0004)
	unsigned long                                      bShowLocked : 1;                                          // 0x073C(0x0004)
	unsigned long                                      bTeamLocked : 1;                                          // 0x073C(0x0004) (Net)
	unsigned long                                      bDisableRepulsorsAtMaxFallSpeed : 1;                      // 0x073C(0x0004)
	unsigned long                                      bTrickJumping : 1;                                        // 0x073C(0x0004) (Net)
	unsigned long                                      bGrab1 : 1;                                               // 0x073C(0x0004) (Net)
	unsigned long                                      bGrab2 : 1;                                               // 0x073C(0x0004) (Net)
	unsigned long                                      bForceSpinWarmup : 1;                                     // 0x073C(0x0004) (Net)
	float                                              RemainingBurn;                                            // 0x0740(0x0004)
	TArray<struct FBurnOutDatum>                       BurnOutMaterialInstances;                                 // 0x0744(0x0010) (NeedCtorLink)
	class UAudioComponent*                             TireAudioComp;                                            // 0x0754(0x0008) (Edit, Const, ExportObject, EditConst, Component, EditInline)
	TArray<struct FMaterialSoundEffect>                TireSoundList;                                            // 0x075C(0x0010) (Edit, NeedCtorLink)
	struct FName                                       CurrentTireMaterial;                                      // 0x076C(0x0008)
	float                                              MaxWheelEffectDistSq;                                     // 0x0774(0x0004)
	TArray<struct FMaterialParticleEffect>             WheelParticleEffects;                                     // 0x0778(0x0010) (NeedCtorLink)
	float                                              LastCheckUpsideDownTime;                                  // 0x0788(0x0004)
	float                                              FlippedCount;                                             // 0x078C(0x0004)
	class UAudioComponent*                             ScrapeSound;                                              // 0x0790(0x0008) (Edit, ExportObject, Component, EditInline)
	float                                              FireDamageThreshold;                                      // 0x0798(0x0004)
	float                                              FireDamagePerSec;                                         // 0x079C(0x0004)
	float                                              AccruedFireDamage;                                        // 0x07A0(0x0004)
	float                                              UpsideDownDamagePerSec;                                   // 0x07A4(0x0004)
	float                                              OccupiedUpsideDownDamagePerSec;                           // 0x07A8(0x0004)
	float                                              WaterDamage;                                              // 0x07AC(0x0004)
	float                                              AccumulatedWaterDamage;                                   // 0x07B0(0x0004)
	TArray<int>                                        GroundEffectIndices;                                      // 0x07B4(0x0010) (NeedCtorLink)
	float                                              MaxGroundEffectDist;                                      // 0x07C4(0x0004)
	struct FName                                       GroundEffectDistParameterName;                            // 0x07C8(0x0008)
	class UParticleSystem*                             WaterGroundEffect;                                        // 0x07D0(0x0008)
	struct FRotator                                    WeaponRotation;                                           // 0x07D8(0x000C) (Net)
	TArray<struct FVehicleSeat>                        Seats;                                                    // 0x07E4(0x0010) (Edit, Component, NeedCtorLink)
	int                                                SeatMask;                                                 // 0x07F4(0x0004) (Net)
	TArray<struct FVehicleAnim>                        VehicleAnims;                                             // 0x07F8(0x0010) (Edit, NeedCtorLink)
	TArray<struct FVehicleSound>                       VehicleSounds;                                            // 0x0808(0x0010) (Edit, Component, NeedCtorLink)
	struct FName                                       DrivingAnim;                                              // 0x0818(0x0008)
	float                                              DestroyOnPenetrationThreshold;                            // 0x0820(0x0004) (Edit)
	float                                              DestroyOnPenetrationDuration;                             // 0x0824(0x0004) (Edit)
	float                                              TimeInDestroyablePenetration;                             // 0x0828(0x0004)
	float                                              LastDeathImpactTime;                                      // 0x082C(0x0004)
	class USoundCue*                                   LargeChunkImpactSound;                                    // 0x0830(0x0008)
	class USoundCue*                                   MediumChunkImpactSound;                                   // 0x0838(0x0008)
	class USoundCue*                                   SmallChunkImpactSound;                                    // 0x0840(0x0008)
	float                                              CustomGravityScaling;                                     // 0x0848(0x0004) (Edit, Net)
	TArray<struct FDamageParamScales>                  DamageParamScaleLevels;                                   // 0x084C(0x0010) (NeedCtorLink)
	TArray<class UUDKSkelControl_Damage*>              DamageSkelControls;                                       // 0x085C(0x0010) (NeedCtorLink)
	TArray<struct FFDamageMorphTargets>                DamageMorphTargets;                                       // 0x086C(0x0010) (NeedCtorLink)
	class UMaterialInstanceConstant*                   DamageMaterialInstance[0x2];                              // 0x087C(0x0008)
	struct FUTTakeHitInfo                              LastTakeHitInfo;                                          // 0x088C(0x002C) (Net)
	float                                              LastTakeHitTimeout;                                       // 0x08B8(0x0004)
	TArray<struct FVehicleEffect>                      VehicleEffects;                                           // 0x08BC(0x0010) (Edit, Component, NeedCtorLink)
	class AController*                                 KillerController;                                         // 0x08CC(0x0008) (Net)
	float                                              LastJumpOutCheck;                                         // 0x08D4(0x0004)
	struct FName                                       WaterEffectType;                                          // 0x08D8(0x0008)
	TArray<int>                                        ContrailEffectIndices;                                    // 0x08E0(0x0010) (NeedCtorLink)
	struct FName                                       ContrailColorParameterName;                               // 0x08F0(0x0008)
	float                                              ObjectiveGetOutDist;                                      // 0x08F8(0x0004)
	TArray<class AUDKBot*>                             Trackers;                                                 // 0x08FC(0x0010) (NeedCtorLink)
	unsigned char                                      Team;                                                     // 0x090C(0x0001) (Net)
	unsigned char                                      UnknownData00[0x3];                                       // 0x090D(0x0003) MISSED OFFSET
	float                                              ExtraReachDownThreshold;                                  // 0x0910(0x0004)
	float                                              ResetTime;                                                // 0x0914(0x0004)
	float                                              MinRunOverSpeed;                                          // 0x0918(0x0004)
	float                                              LastRunOverWarningTime;                                   // 0x091C(0x0004)
	float                                              MinRunOverWarningAim;                                     // 0x0920(0x0004)
	float                                              TeamBeaconMaxDist;                                        // 0x0924(0x0004)
	float                                              LastPostRenderTraceTime;                                  // 0x0928(0x0004)
	float                                              ShowLockedMaxDist;                                        // 0x092C(0x0004)
	struct FVector                                     HUDLocation;                                              // 0x0930(0x000C)
	class UParticleSystemComponent*                    HoverboardDust;                                           // 0x093C(0x0008) (ExportObject, Component, EditInline)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKVehicle");
		return ptr;
	}


	void UpdateHoverboardDustEffect(float DustHeight);
	void PostInitRigidBody(class UPrimitiveComponent* PrimComp);
	void TakeFireDamage();
	void CheckReset();
	void TakeWaterDamage();
	void RBPenetrationDestroy();
	void MorphTargetDestroyed(int MorphNodeIndex);
	void ApplyMorphDamage(const struct FVector& HitLocation, int Damage, const struct FVector& Momentum);
	void UpdateDamageMaterial();
	void InitDamageSkel();
	void SetHUDLocation(const struct FVector& NewHUDLocation);
	bool InUseableRange(class AUDKPlayerController* PC, float Dist);
	void NativePostRenderFor(class APlayerController* PC, class UCanvas* Canvas, const struct FVector& CameraPosition, const struct FVector& CameraDir);
	unsigned char GetTeamNum();
	void SelfDestruct(class AActor* ImpactedActor);
	bool CheckAutoDestruct(class ATeamInfo* InstigatorTeam, float CheckRadius);
	float GetMaxRiseForce();
	void JumpOutCheck();
	void ReceivedHealthChange();
	void PlayTakeHitEffects();
	bool OnTouchForcedDirVolume(class AUDKForcedDirectionVolume* Vol);
	float GetGravityZ();
	void OnPropertyChange(const struct FName& PropName);
	void LockOnWarning(class AUDKProjectile* IncomingMissile);
	class UClass* GetRanOverDamageType();
	bool IsSeatControllerReplicationViewer(int SeatIndex);
	int GetBarrelIndex(int SeatIndex);
	struct FVector GetSeatPivotPoint(int SeatIndex);
	void ForceWeaponRotation(int SeatIndex, const struct FRotator& NewRotation);
	unsigned char SeatFiringMode(int SeatIndex, unsigned char NewFireMode, bool bReadValue);
	unsigned char SeatFlashCount(int SeatIndex, unsigned char NewCount, bool bReadValue);
	struct FVector SeatFlashLocation(int SeatIndex, const struct FVector& NewLoc, bool bReadValue);
	struct FRotator SeatWeaponRotation(int SeatIndex, const struct FRotator& NewRot, bool bReadValue);
};


// Class UDKBase.UDKWeaponPawn
// 0x0014 (0x0750 - 0x073C)
class AUDKWeaponPawn : public AUDKVehicleBase
{
public:
	class AUDKVehicle*                                 MyVehicle;                                                // 0x073C(0x0008) (Net)
	class AUDKWeapon*                                  MyVehicleWeapon;                                          // 0x0744(0x0008) (Net)
	int                                                MySeatIndex;                                              // 0x074C(0x0004) (Net)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKWeaponPawn");
		return ptr;
	}


	struct FVector GetTargetLocation(class AActor* RequestedBy, bool bRequestAlternateLoc);
};


// Class UDKBase.UDKVehicleFactory
// 0x0038 (0x03A0 - 0x0368)
class AUDKVehicleFactory : public ANavigationPoint
{
public:
	struct FString                                     VehicleClassPath;                                         // 0x0368(0x0010) (NeedCtorLink)
	unsigned long                                      bHasLockedVehicle : 1;                                    // 0x0378(0x0004) (Net)
	unsigned long                                      bReplicateChildVehicle : 1;                               // 0x0378(0x0004)
	class UClass*                                      VehicleClass;                                             // 0x037C(0x0008)
	class AUDKVehicle*                                 ChildVehicle;                                             // 0x0384(0x0008) (Net)
	float                                              RespawnProgress;                                          // 0x038C(0x0004)
	struct FVector                                     HUDLocation;                                              // 0x0390(0x000C)
	int                                                TeamNum;                                                  // 0x039C(0x0004)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKVehicleFactory");
		return ptr;
	}


	unsigned char GetTeamNum();
	void SetHUDLocation(const struct FVector& NewHUDLocation);
	void SpawnVehicle();
};


// Class UDKBase.UDKVehicleMovementEffect
// 0x0020 (0x0270 - 0x0250)
class AUDKVehicleMovementEffect : public AActor
{
public:
	class UStaticMeshComponent*                        AirEffect;                                                // 0x0250(0x0008) (ExportObject, Component, EditInline)
	float                                              MinVelocityForAirEffect;                                  // 0x0258(0x0004)
	float                                              MaxVelocityForAirEffect;                                  // 0x025C(0x0004)
	struct FName                                       AirEffectScalar;                                          // 0x0260(0x0008)
	float                                              AirMaxDelta;                                              // 0x0268(0x0004)
	float                                              AirCurrentLevel;                                          // 0x026C(0x0004)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKVehicleMovementEffect");
		return ptr;
	}

};


// Class UDKBase.UDKVehicleSimCar
// 0x0080 (0x0178 - 0x00F8)
class UUDKVehicleSimCar : public USVehicleSimCar
{
public:
	struct FInterpCurveFloat                           TorqueVSpeedCurve;                                        // 0x00F8(0x0014) (Edit, NeedCtorLink)
	struct FInterpCurveFloat                           EngineRPMCurve;                                           // 0x010C(0x0014) (Edit, NeedCtorLink)
	float                                              LSDFactor;                                                // 0x0120(0x0004) (Edit)
	float                                              ThrottleSpeed;                                            // 0x0124(0x0004) (Edit)
	float                                              MinRPM;                                                   // 0x0128(0x0004)
	float                                              MaxRPM;                                                   // 0x012C(0x0004)
	float                                              ActualThrottle;                                           // 0x0130(0x0004)
	unsigned long                                      bForceThrottle : 1;                                       // 0x0134(0x0004)
	unsigned long                                      bHasForcedThrottle : 1;                                   // 0x0134(0x0004)
	unsigned long                                      bDriverlessBraking : 1;                                   // 0x0134(0x0004)
	unsigned long                                      bAutoHandbrake : 1;                                       // 0x0134(0x0004) (Edit)
	float                                              SteeringReductionFactor;                                  // 0x0138(0x0004) (Edit)
	float                                              SteeringReductionRampUpRate;                              // 0x013C(0x0004) (Edit)
	float                                              CurrentSteeringReduction;                                 // 0x0140(0x0004)
	int                                                NumWheelsForFullSteering;                                 // 0x0144(0x0004) (Edit)
	float                                              SteeringReductionSpeed;                                   // 0x0148(0x0004) (Edit)
	float                                              SteeringReductionMinSpeed;                                // 0x014C(0x0004) (Edit)
	float                                              MinHardTurnSpeed;                                         // 0x0150(0x0004) (Edit)
	float                                              HardTurnMotorTorque;                                      // 0x0154(0x0004) (Edit)
	float                                              HandbrakeSpeed;                                           // 0x0158(0x0004) (Edit)
	float                                              ActualHandbrake;                                          // 0x015C(0x0004)
	float                                              FrontalCollisionGripFactor;                               // 0x0160(0x0004) (Edit)
	float                                              ConsoleHardTurnGripFactor;                                // 0x0164(0x0004) (Edit)
	float                                              SpeedBasedTurnDamping;                                    // 0x0168(0x0004) (Edit)
	float                                              AirControlTurnTorque;                                     // 0x016C(0x0004) (Edit)
	float                                              InAirUprightTorqueFactor;                                 // 0x0170(0x0004) (Edit)
	float                                              InAirUprightMaxTorque;                                    // 0x0174(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKVehicleSimCar");
		return ptr;
	}

};


// Class UDKBase.UDKVehicleSimChopper
// 0x00A4 (0x0164 - 0x00C0)
class UUDKVehicleSimChopper : public USVehicleSimBase
{
public:
	float                                              MaxThrustForce;                                           // 0x00C0(0x0004) (Edit)
	float                                              MaxReverseForce;                                          // 0x00C4(0x0004) (Edit)
	float                                              LongDamping;                                              // 0x00C8(0x0004) (Edit)
	float                                              MaxStrafeForce;                                           // 0x00CC(0x0004) (Edit)
	float                                              LatDamping;                                               // 0x00D0(0x0004) (Edit)
	float                                              DirectionChangeForce;                                     // 0x00D4(0x0004) (Edit)
	float                                              MaxRiseForce;                                             // 0x00D8(0x0004) (Edit)
	float                                              UpDamping;                                                // 0x00DC(0x0004) (Edit)
	float                                              TurnTorqueFactor;                                         // 0x00E0(0x0004) (Edit)
	float                                              TurnTorqueMax;                                            // 0x00E4(0x0004) (Edit)
	float                                              TurnDamping;                                              // 0x00E8(0x0004) (Edit)
	float                                              MaxYawRate;                                               // 0x00EC(0x0004) (Edit)
	float                                              PitchTorqueFactor;                                        // 0x00F0(0x0004) (Edit)
	float                                              PitchTorqueMax;                                           // 0x00F4(0x0004) (Edit)
	float                                              PitchDamping;                                             // 0x00F8(0x0004) (Edit)
	float                                              RollTorqueTurnFactor;                                     // 0x00FC(0x0004) (Edit)
	float                                              RollTorqueStrafeFactor;                                   // 0x0100(0x0004) (Edit)
	float                                              RollTorqueMax;                                            // 0x0104(0x0004) (Edit)
	float                                              RollDamping;                                              // 0x0108(0x0004) (Edit)
	float                                              StopThreshold;                                            // 0x010C(0x0004) (Edit)
	float                                              MaxRandForce;                                             // 0x0110(0x0004) (Edit)
	float                                              RandForceInterval;                                        // 0x0114(0x0004) (Edit)
	unsigned long                                      bAllowZThrust : 1;                                        // 0x0118(0x0004) (Edit)
	unsigned long                                      bFullThrustOnDirectionChange : 1;                         // 0x0118(0x0004) (Edit)
	unsigned long                                      bShouldCutThrustMaxOnImpact : 1;                          // 0x0118(0x0004) (Edit)
	unsigned long                                      bRecentlyHit : 1;                                         // 0x0118(0x0004)
	unsigned long                                      bStrafeAffectsTurnDamping : 1;                            // 0x0118(0x0004)
	unsigned long                                      bHeadingInitialized : 1;                                  // 0x0118(0x0004)
	unsigned long                                      bStabilizeStops : 1;                                      // 0x0118(0x0004) (Edit)
	float                                              StrafeTurnDamping;                                        // 0x011C(0x0004)
	float                                              TargetHeading;                                            // 0x0120(0x0004)
	float                                              TargetPitch;                                              // 0x0124(0x0004)
	float                                              PitchViewCorrelation;                                     // 0x0128(0x0004)
	struct FVector                                     RandForce;                                                // 0x012C(0x000C)
	struct FVector                                     RandTorque;                                               // 0x0138(0x000C)
	float                                              AccumulatedTime;                                          // 0x0144(0x0004)
	float                                              StabilizationForceMultiplier;                             // 0x0148(0x0004) (Edit)
	float                                              CurrentStabilizationMultiplier;                           // 0x014C(0x0004)
	struct FVector                                     OldVelocity;                                              // 0x0150(0x000C)
	float                                              StoppedBrakeTorque;                                       // 0x015C(0x0004)
	float                                              HardLimitAirSpeedScale;                                   // 0x0160(0x0004)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKVehicleSimChopper");
		return ptr;
	}

};


// Class UDKBase.UDKVehicleSimHover
// 0x0004 (0x0168 - 0x0164)
class UUDKVehicleSimHover : public UUDKVehicleSimChopper
{
public:
	unsigned long                                      bDisableWheelsWhenOff : 1;                                // 0x0164(0x0004)
	unsigned long                                      bRepulsorCollisionEnabled : 1;                            // 0x0164(0x0004)
	unsigned long                                      bCanClimbSlopes : 1;                                      // 0x0164(0x0004)
	unsigned long                                      bUnPoweredDriving : 1;                                    // 0x0164(0x0004)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKVehicleSimHover");
		return ptr;
	}

};


// Class UDKBase.UDKVehicleSimHoverboard
// 0x0084 (0x0144 - 0x00C0)
class UUDKVehicleSimHoverboard : public USVehicleSimBase
{
public:
	float                                              MaxThrustForce;                                           // 0x00C0(0x0004) (Edit)
	float                                              MaxReverseForce;                                          // 0x00C4(0x0004) (Edit)
	float                                              MaxReverseVelocity;                                       // 0x00C8(0x0004) (Edit)
	float                                              LongDamping;                                              // 0x00CC(0x0004) (Edit)
	float                                              MaxStrafeForce;                                           // 0x00D0(0x0004) (Edit)
	float                                              LatDamping;                                               // 0x00D4(0x0004) (Edit)
	float                                              MaxRiseForce;                                             // 0x00D8(0x0004) (Edit)
	float                                              TurnTorqueFactor;                                         // 0x00DC(0x0004) (Edit)
	float                                              SpinTurnTorqueScale;                                      // 0x00E0(0x0004) (Edit)
	float                                              MaxTurnTorque;                                            // 0x00E4(0x0004) (Edit)
	struct FInterpCurveFloat                           TurnDampingSpeedFunc;                                     // 0x00E8(0x0014) (Edit, NeedCtorLink)
	unsigned long                                      bIsOverDeepWater : 1;                                     // 0x00FC(0x0004)
	unsigned long                                      bInAJump : 1;                                             // 0x00FC(0x0004)
	unsigned long                                      bLeftGround : 1;                                          // 0x00FC(0x0004)
	float                                              StopThreshold;                                            // 0x0100(0x0004) (Edit)
	float                                              WaterCheckLevel;                                          // 0x0104(0x0004) (Edit)
	class USoundCue*                                   OverWaterSound;                                           // 0x0108(0x0008)
	struct FVector                                     GroundNormal;                                             // 0x0110(0x000C) (Transient)
	float                                              TakeoffYaw;                                               // 0x011C(0x0004)
	float                                              TrickJumpWarmup;                                          // 0x0120(0x0004)
	float                                              SpinHeadingOffset;                                        // 0x0124(0x0004)
	float                                              AutoSpin;                                                 // 0x0128(0x0004)
	float                                              SpinSpeed;                                                // 0x012C(0x0004) (Edit)
	float                                              LandedCountdown;                                          // 0x0130(0x0004)
	float                                              CurrentSteerOffset;                                       // 0x0134(0x0004)
	float                                              HoverboardSlalomMaxAngle;                                 // 0x0138(0x0004) (Edit)
	float                                              SlalomSpeed;                                              // 0x013C(0x0004) (Edit)
	float                                              CurrentLookYaw;                                           // 0x0140(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKVehicleSimHoverboard");
		return ptr;
	}


	void UpdateLeanConstraint(class URB_ConstraintInstance* LeanUprightConstraintInstance, const struct FVector& LeanY, const struct FVector& LeanZ);
	void InitWheels(class AUDKVehicle* Vehicle);
};


// Class UDKBase.UDKVehicleWheel
// 0x0010 (0x0160 - 0x0150)
class UUDKVehicleWheel : public USVehicleWheel
{
public:
	unsigned long                                      bUseMaterialSpecificEffects : 1;                          // 0x0150(0x0004)
	unsigned long                                      bDisableWheelOnDeath : 1;                                 // 0x0150(0x0004)
	class UParticleSystemComponent*                    OldWheelParticleComp;                                     // 0x0154(0x0008) (ExportObject, Component, EditInline)
	float                                              EffectDesiredSpinDir;                                     // 0x015C(0x0004)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKVehicleWheel");
		return ptr;
	}


	void OldEffectFinished(class UParticleSystemComponent* PSystem);
	void SetParticleEffect(class AUDKVehicle* OwnerVehicle, class UParticleSystem* NewTemplate);
};


// Class UDKBase.UDKWeapon
// 0x0028 (0x03BC - 0x0394)
class AUDKWeapon : public AWeapon
{
public:
	class UMeshComponent*                              OverlayMesh;                                              // 0x0394(0x0008) (ExportObject, Component, EditInline)
	unsigned long                                      bLeadTarget : 1;                                          // 0x039C(0x0004)
	unsigned long                                      bConsiderProjectileAcceleration : 1;                      // 0x039C(0x0004)
	int                                                AmmoCount;                                                // 0x03A0(0x0004) (Net)
	unsigned char                                      HitEnemy;                                                 // 0x03A4(0x0001) (Net)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03A5(0x0003) MISSED OFFSET
	float                                              AimTraceRange;                                            // 0x03A8(0x0004)
	TArray<class AActor*>                              AimingTraceIgnoredActors;                                 // 0x03AC(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKWeapon");
		return ptr;
	}


	void SetPosition(class AUDKPawn* Holder);
	void EnsureWeaponOverlayComponentLast();
	unsigned char BestMode();
	bool IsAimCorrect();
	void PostBeginPlay();
};


// Class UDKBase.UDKWeaponShield
// 0x0004 (0x0254 - 0x0250)
class AUDKWeaponShield : public AActor
{
public:
	unsigned long                                      bIgnoreFlaggedProjectiles : 1;                            // 0x0250(0x0004)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKWeaponShield");
		return ptr;
	}

};


// Class UDKBase.UDKAnimBlendBase
// 0x0018 (0x017C - 0x0164)
class UUDKAnimBlendBase : public UAnimNodeBlendList
{
public:
	float                                              BlendTime;                                                // 0x0164(0x0004) (Edit)
	TArray<float>                                      ChildBlendTimes;                                          // 0x0168(0x0010) (Edit, NeedCtorLink)
	unsigned long                                      bTickAnimInScript : 1;                                    // 0x0178(0x0004)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKAnimBlendBase");
		return ptr;
	}


	void TickAnim(float DeltaSeconds);
	float GetAnimDuration(int ChildIndex);
	float GetBlendTime(int ChildIndex, bool bGetDefault);
};


// Class UDKBase.UDKAnimBlendByFall
// 0x0020 (0x019C - 0x017C)
class UUDKAnimBlendByFall : public UUDKAnimBlendBase
{
public:
	unsigned long                                      bIgnoreDoubleJumps : 1;                                   // 0x017C(0x0004) (Edit)
	unsigned long                                      bDidDoubleJump : 1;                                       // 0x017C(0x0004) (Transient)
	unsigned long                                      bDodgeFall : 1;                                           // 0x017C(0x0004)
	float                                              PreLandTime;                                              // 0x0180(0x0004) (Edit)
	float                                              PreLandStartUprightTime;                                  // 0x0184(0x0004) (Edit)
	float                                              ToDblJumpUprightTime;                                     // 0x0188(0x0004) (Edit)
	TEnumAsByte<EBlendFallTypes>                       FallState;                                                // 0x018C(0x0001) (Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x018D(0x0003) MISSED OFFSET
	float                                              LastFallingVelocity;                                      // 0x0190(0x0004) (Const)
	class UUDKAnimNodeJumpLeanOffset*                  CachedLeanNode;                                           // 0x0194(0x0008) (Const)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKAnimBlendByFall");
		return ptr;
	}

};


// Class UDKBase.UDKAnimBlendByHoverJump
// 0x0010 (0x01AC - 0x019C)
class UUDKAnimBlendByHoverJump : public UUDKAnimBlendByFall
{
public:
	class APawn*                                       OwnerP;                                                   // 0x019C(0x0008) (Const, Transient)
	class AUDKVehicle*                                 OwnerHV;                                                  // 0x01A4(0x0008) (Const, Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKAnimBlendByHoverJump");
		return ptr;
	}

};


// Class UDKBase.UDKAnimBlendByFlying
// 0x0030 (0x01AC - 0x017C)
class UUDKAnimBlendByFlying : public UUDKAnimBlendBase
{
public:
	TEnumAsByte<EFlyingState>                          FlyingState;                                              // 0x017C(0x0001) (Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x017D(0x0003) MISSED OFFSET
	class AUDKPawn*                                    Pawn;                                                     // 0x0180(0x0008)
	class UUDKAnimBlendBase*                           FlyingMode;                                               // 0x0188(0x0008)
	class UAnimNodeAimOffset*                          FlyingDir;                                                // 0x0190(0x0008)
	struct FName                                       StartingAnimName;                                         // 0x0198(0x0008) (Edit)
	unsigned long                                      bHasStartingAnim : 1;                                     // 0x01A0(0x0004)
	unsigned long                                      bHasEndingAnim : 1;                                       // 0x01A0(0x0004)
	struct FName                                       EndingAnimName;                                           // 0x01A4(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKAnimBlendByFlying");
		return ptr;
	}


	void UpdateFlyingState();
};


// Class UDKBase.UDKAnimBlendByHoverboarding
// 0x000C (0x0188 - 0x017C)
class UUDKAnimBlendByHoverboarding : public UUDKAnimBlendBase
{
public:
	int                                                LastActiveChildIndex;                                     // 0x017C(0x0004)
	float                                              BoardLeanAmount;                                          // 0x0180(0x0004)
	float                                              FallTimeBeforeAnim;                                       // 0x0184(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKAnimBlendByHoverboarding");
		return ptr;
	}

};


// Class UDKBase.UDKAnimBlendByIdle
// 0x0000 (0x017C - 0x017C)
class UUDKAnimBlendByIdle : public UUDKAnimBlendBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKAnimBlendByIdle");
		return ptr;
	}

};


// Class UDKBase.UDKAnimBlendByPhysics
// 0x0040 (0x01BC - 0x017C)
class UUDKAnimBlendByPhysics : public UUDKAnimBlendBase
{
public:
	int                                                PhysicsMap[0xC];                                          // 0x017C(0x0004) (Edit)
	int                                                LastPhysics;                                              // 0x01AC(0x0004)
	float                                              LandBlendDelay;                                           // 0x01B0(0x0004) (Edit)
	int                                                PendingChildIndex;                                        // 0x01B4(0x0004)
	float                                              PendingTimeToGo;                                          // 0x01B8(0x0004)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKAnimBlendByPhysics");
		return ptr;
	}

};


// Class UDKBase.UDKAnimBlendByPhysicsVolume
// 0x0018 (0x0194 - 0x017C)
class UUDKAnimBlendByPhysicsVolume : public UUDKAnimBlendBase
{
public:
	TArray<struct FPhysicsVolumeParams>                PhysicsParamList;                                         // 0x017C(0x0010) (Edit, NeedCtorLink)
	class APhysicsVolume*                              LastPhysicsVolume;                                        // 0x018C(0x0008) (Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKAnimBlendByPhysicsVolume");
		return ptr;
	}


	void PhysicsVolumeChanged(class APhysicsVolume* NewVolume);
};


// Class UDKBase.UDKAnimBlendByPosture
// 0x0000 (0x017C - 0x017C)
class UUDKAnimBlendByPosture : public UUDKAnimBlendBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKAnimBlendByPosture");
		return ptr;
	}

};


// Class UDKBase.UDKAnimBlendByTurnInPlace
// 0x0010 (0x018C - 0x017C)
class UUDKAnimBlendByTurnInPlace : public UUDKAnimBlendBase
{
public:
	float                                              RootYawSpeedThresh;                                       // 0x017C(0x0004) (Edit)
	float                                              TurnInPlaceBlendSpeed;                                    // 0x0180(0x0004) (Edit)
	class AUDKPawn*                                    OwnerUTP;                                                 // 0x0184(0x0008) (Const, Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKAnimBlendByTurnInPlace");
		return ptr;
	}

};


// Class UDKBase.UDKAnimBlendByVehicle
// 0x000C (0x0188 - 0x017C)
class UUDKAnimBlendByVehicle : public UUDKAnimBlendBase
{
public:
	unsigned long                                      bLastPawnDriving : 1;                                     // 0x017C(0x0004)
	class AVehicle*                                    LastVehicle;                                              // 0x0180(0x0008)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKAnimBlendByVehicle");
		return ptr;
	}


	void UpdateVehicleState();
};


// Class UDKBase.UDKAnimBlendByDriving
// 0x0000 (0x0150 - 0x0150)
class UUDKAnimBlendByDriving : public UAnimNodeBlend
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKAnimBlendByDriving");
		return ptr;
	}


	void UpdateDrivingState();
};


// Class UDKBase.UDKAnimBlendByHoverboardTilt
// 0x0023 (0x0160 - 0x013D)
class UUDKAnimBlendByHoverboardTilt : public UAnimNodeBlendBase
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x013D(0x0003) MISSED OFFSET
	struct FVector                                     UpVector;                                                 // 0x0140(0x000C)
	float                                              TiltScale;                                                // 0x014C(0x0004) (Edit)
	float                                              TiltDeadZone;                                             // 0x0150(0x0004) (Edit)
	float                                              TiltYScale;                                               // 0x0154(0x0004) (Edit)
	struct FName                                       UpperBodyName;                                            // 0x0158(0x0008)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKAnimBlendByHoverboardTilt");
		return ptr;
	}

};


// Class UDKBase.UDKAnimBlendByHoverboardTurn
// 0x000F (0x014C - 0x013D)
class UUDKAnimBlendByHoverboardTurn : public UAnimNodeBlendBase
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x013D(0x0003) MISSED OFFSET
	float                                              TurnScale;                                                // 0x0140(0x0004) (Edit)
	float                                              MaxBlendPerSec;                                           // 0x0144(0x0004) (Edit)
	float                                              CurrentAnimWeight;                                        // 0x0148(0x0004)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKAnimBlendByHoverboardTurn");
		return ptr;
	}

};


// Class UDKBase.UDKAnimBlendBySlotActive
// 0x0008 (0x018C - 0x0184)
class UUDKAnimBlendBySlotActive : public UAnimNodeBlendPerBone
{
public:
	class UAnimNodeSlot*                               ChildSlot;                                                // 0x0184(0x0008)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKAnimBlendBySlotActive");
		return ptr;
	}

};


// Class UDKBase.UDKAnimBlendBySpeed
// 0x0008 (0x0158 - 0x0150)
class UUDKAnimBlendBySpeed : public UAnimNodeBlend
{
public:
	float                                              MinSpeed;                                                 // 0x0150(0x0004) (Edit)
	float                                              MaxSpeed;                                                 // 0x0154(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKAnimBlendBySpeed");
		return ptr;
	}

};


// Class UDKBase.UDKAnimBlendByWeapon
// 0x0010 (0x0194 - 0x0184)
class UUDKAnimBlendByWeapon : public UAnimNodeBlendPerBone
{
public:
	unsigned long                                      bLooping : 1;                                             // 0x0184(0x0004) (Edit)
	struct FName                                       LoopingAnim;                                              // 0x0188(0x0008) (Edit)
	float                                              BlendTime;                                                // 0x0190(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKAnimBlendByWeapon");
		return ptr;
	}


	void AnimStopFire(float SpecialBlendTime);
	void AnimFire(const struct FName& FireSequence, bool bAutoFire, float AnimRate, float SpecialBlendTime, const struct FName& LoopSequence);
};


// Class UDKBase.UDKAnimBlendByWeapType
// 0x0000 (0x0184 - 0x0184)
class UUDKAnimBlendByWeapType : public UAnimNodeBlendPerBone
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKAnimBlendByWeapType");
		return ptr;
	}

};


// Class UDKBase.UDKAnimNodeCopyBoneTranslation
// 0x0073 (0x01B0 - 0x013D)
class UUDKAnimNodeCopyBoneTranslation : public UAnimNodeBlendBase
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x013D(0x0003) MISSED OFFSET
	class UAnimNodeAimOffset*                          CachedAimNode;                                            // 0x0140(0x0008)
	struct FName                                       OldAimProfileName;                                        // 0x0148(0x0008)
	TArray<struct FBoneCopyInfo>                       DefaultBoneCopyArray;                                     // 0x0150(0x0010) (Edit, NeedCtorLink)
	TArray<struct FBoneCopyInfo>                       DualWieldBoneCopyArray;                                   // 0x0160(0x0010) (Edit, NeedCtorLink)
	TArray<struct FBoneCopyInfo>                       ActiveBoneCopyArray;                                      // 0x0170(0x0010) (NeedCtorLink)
	TArray<unsigned char>                              RequiredBones;                                            // 0x0180(0x0010) (NeedCtorLink)
	TArray<class UUDKAnimNodeSeqWeap*>                 SeqWeaps;                                                 // 0x0190(0x0010) (NeedCtorLink)
	TArray<class UUDKAnimBlendByWeapType*>             WeapTypeBlends;                                           // 0x01A0(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKAnimNodeCopyBoneTranslation");
		return ptr;
	}

};


// Class UDKBase.UDKAnimNodeFramePlayer
// 0x0000 (0x01AC - 0x01AC)
class UUDKAnimNodeFramePlayer : public UAnimNodeSequence
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKAnimNodeFramePlayer");
		return ptr;
	}


	void SetAnimPosition(float Perc);
	void SetAnimation(const struct FName& Sequence, float RateScale);
};


// Class UDKBase.UDKAnimNodeJumpLeanOffset
// 0x0030 (0x01C8 - 0x0198)
class UUDKAnimNodeJumpLeanOffset : public UAnimNodeAimOffset
{
public:
	float                                              JumpLeanStrength;                                         // 0x0198(0x0004) (Edit)
	float                                              MaxLeanChangeSpeed;                                       // 0x019C(0x0004) (Edit)
	unsigned long                                      bMultiplyByZVelocity : 1;                                 // 0x01A0(0x0004) (Edit)
	unsigned long                                      bDodging : 1;                                             // 0x01A0(0x0004) (Edit)
	unsigned long                                      bOldDodging : 1;                                          // 0x01A0(0x0004)
	unsigned long                                      bDoubleJumping : 1;                                       // 0x01A0(0x0004) (Edit)
	unsigned long                                      bOldDoubleJumping : 1;                                    // 0x01A0(0x0004)
	class UAnimNodeAimOffset*                          CachedAimNode;                                            // 0x01A4(0x0008)
	struct FName                                       OldAimProfileName;                                        // 0x01AC(0x0008)
	struct FVector2D                                   PreBlendAim;                                              // 0x01B4(0x0008)
	float                                              LeanWeight;                                               // 0x01BC(0x0004)
	float                                              LeanWeightTarget;                                         // 0x01C0(0x0004)
	float                                              BlendTimeToGo;                                            // 0x01C4(0x0004)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKAnimNodeJumpLeanOffset");
		return ptr;
	}


	void SetLeanWeight(float WeightTarget, float BlendTime);
};


// Class UDKBase.UDKAnimNodeSequence
// 0x0014 (0x01C0 - 0x01AC)
class UUDKAnimNodeSequence : public UAnimNodeSequence
{
public:
	unsigned long                                      bAutoStart : 1;                                           // 0x01AC(0x0004) (Edit)
	unsigned long                                      bLoopLastSequence : 1;                                    // 0x01AC(0x0004)
	TArray<struct FName>                               SeqStack;                                                 // 0x01B0(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKAnimNodeSequence");
		return ptr;
	}


	void OnInit();
	void PlayAnimationSet(TArray<struct FName> Sequences, float SeqRate, bool bLoopLast);
	void PlayAnimation(const struct FName& Sequence, float SeqRate, bool bSeqLoop);
};


// Class UDKBase.UDKAnimNodeSeqWeap
// 0x0028 (0x01E8 - 0x01C0)
class UUDKAnimNodeSeqWeap : public UUDKAnimNodeSequence
{
public:
	struct FName                                       DefaultAnim;                                              // 0x01C0(0x0008) (Edit)
	struct FName                                       DualPistolAnim;                                           // 0x01C8(0x0008) (Edit)
	struct FName                                       SinglePistolAnim;                                         // 0x01D0(0x0008) (Edit)
	struct FName                                       ShoulderRocketAnim;                                       // 0x01D8(0x0008) (Edit)
	struct FName                                       StingerAnim;                                              // 0x01E0(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKAnimNodeSeqWeap");
		return ptr;
	}

};


// Class UDKBase.UDKSkelControl_CantileverBeam
// 0x0040 (0x01DC - 0x019C)
class UUDKSkelControl_CantileverBeam : public USkelControlLookAt
{
public:
	struct FVector                                     WorldSpaceGoal;                                           // 0x019C(0x000C)
	struct FVector                                     InitialWorldSpaceGoalOffset;                              // 0x01A8(0x000C) (Edit)
	struct FVector                                     Velocity;                                                 // 0x01B4(0x000C)
	float                                              SpringStiffness;                                          // 0x01C0(0x0004) (Edit)
	float                                              SpringDamping;                                            // 0x01C4(0x0004) (Edit)
	float                                              PercentBeamVelocityTransfer;                              // 0x01C8(0x0004) (Edit)
	struct FScriptDelegate                             __EntireBeamVelocity__Delegate;                           // 0x01CC(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01CC(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKSkelControl_CantileverBeam");
		return ptr;
	}


	struct FVector EntireBeamVelocity();
};


// Class UDKBase.UDKSkelControl_Damage
// 0x00A8 (0x01D8 - 0x0130)
class UUDKSkelControl_Damage : public USkelControlSingleBone
{
public:
	unsigned long                                      bInitialized : 1;                                         // 0x0130(0x0004)
	unsigned long                                      bOnDamageActive : 1;                                      // 0x0130(0x0004) (Edit)
	unsigned long                                      bControlStrFollowsHealth : 1;                             // 0x0130(0x0004) (Edit)
	unsigned long                                      bIsBroken : 1;                                            // 0x0130(0x0004) (Transient)
	unsigned long                                      bIsBreaking : 1;                                          // 0x0130(0x0004) (Transient)
	unsigned long                                      bOnDeathActive : 1;                                       // 0x0130(0x0004) (Edit)
	unsigned long                                      bOnDeathUseForSecondaryExplosion : 1;                     // 0x0130(0x0004) (Edit)
	class AUDKVehicle*                                 OwnerVehicle;                                             // 0x0134(0x0008)
	float                                              HealthPerc;                                               // 0x013C(0x0004)
	float                                              DamageBoneScale;                                          // 0x0140(0x0004) (Edit)
	int                                                DamageMax;                                                // 0x0144(0x0004) (Edit)
	float                                              ActivationThreshold;                                      // 0x0148(0x0004) (Edit)
	class UStaticMesh*                                 BreakMesh;                                                // 0x014C(0x0008) (Edit)
	float                                              BreakThreshold;                                           // 0x0154(0x0004) (Edit)
	float                                              BreakTime;                                                // 0x0158(0x0004) (Edit)
	struct FVector                                     DefaultBreakDir;                                          // 0x015C(0x000C) (Edit)
	struct FVector                                     DamageScale;                                              // 0x0168(0x000C) (Edit)
	class UParticleSystem*                             PS_DamageOnBreak;                                         // 0x0174(0x0008) (Edit)
	class UParticleSystem*                             PS_DamageTrail;                                           // 0x017C(0x0008) (Edit)
	struct FName                                       BrokenBone;                                               // 0x0184(0x0008) (Transient)
	float                                              BreakTimer;                                               // 0x018C(0x0004) (Transient)
	float                                              OwnerVehicleMaxHealth;                                    // 0x0190(0x0004) (Transient)
	struct FVector                                     BreakSpeed;                                               // 0x0194(0x000C) (Edit)
	float                                              DeathPercentToActuallySpawn;                              // 0x01A0(0x0004) (Edit)
	float                                              DeathBoneScale;                                           // 0x01A4(0x0004) (Edit)
	class UStaticMesh*                                 DeathStaticMesh;                                          // 0x01A8(0x0008) (Edit)
	struct FVector                                     DeathImpulseDir;                                          // 0x01B0(0x000C) (Edit)
	struct FVector                                     DeathScale;                                               // 0x01BC(0x000C) (Edit)
	class UParticleSystem*                             PS_DeathOnBreak;                                          // 0x01C8(0x0008) (Edit)
	class UParticleSystem*                             PS_DeathTrail;                                            // 0x01D0(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKSkelControl_Damage");
		return ptr;
	}


	float RestorePart();
	void BreakApartOnDeath(const struct FVector& PartLocation, bool bIsVisible);
	void BreakApart(const struct FVector& PartLocation, bool bIsVisible);
};


// Class UDKBase.UDKSkelControl_DamageHinge
// 0x0014 (0x01EC - 0x01D8)
class UUDKSkelControl_DamageHinge : public UUDKSkelControl_Damage
{
public:
	float                                              MaxAngle;                                                 // 0x01D8(0x0004) (Edit)
	TEnumAsByte<EAxis>                                 PivotAxis;                                                // 0x01DC(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01DD(0x0003) MISSED OFFSET
	float                                              AVModifier;                                               // 0x01E0(0x0004) (Edit)
	float                                              CurrentAngle;                                             // 0x01E4(0x0004) (Transient)
	float                                              SpringStiffness;                                          // 0x01E8(0x0004)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKSkelControl_DamageHinge");
		return ptr;
	}

};


// Class UDKBase.UDKSkelControl_DamageSpring
// 0x0048 (0x0220 - 0x01D8)
class UUDKSkelControl_DamageSpring : public UUDKSkelControl_Damage
{
public:
	struct FRotator                                    MaxAngle;                                                 // 0x01D8(0x000C) (Edit)
	struct FRotator                                    MinAngle;                                                 // 0x01E4(0x000C) (Edit)
	float                                              Falloff;                                                  // 0x01F0(0x0004) (Edit)
	float                                              SpringStiffness;                                          // 0x01F4(0x0004) (Edit)
	float                                              AVModifier;                                               // 0x01F8(0x0004) (Edit)
	struct FRotator                                    CurrentAngle;                                             // 0x01FC(0x000C) (Transient)
	float                                              RandomPortion;                                            // 0x0208(0x0004)
	struct FVector                                     LastHitMomentum;                                          // 0x020C(0x000C)
	float                                              LastHitTime;                                              // 0x0218(0x0004)
	float                                              MomentumPortion;                                          // 0x021C(0x0004)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKSkelControl_DamageSpring");
		return ptr;
	}

};


// Class UDKBase.UDKSkelControl_HoverboardSuspension
// 0x0024 (0x0154 - 0x0130)
class UUDKSkelControl_HoverboardSuspension : public USkelControlSingleBone
{
public:
	float                                              TransIgnore;                                              // 0x0130(0x0004) (Edit)
	float                                              TransScale;                                               // 0x0134(0x0004) (Edit)
	float                                              TransOffset;                                              // 0x0138(0x0004) (Edit)
	float                                              MaxTrans;                                                 // 0x013C(0x0004) (Edit)
	float                                              MinTrans;                                                 // 0x0140(0x0004) (Edit)
	float                                              RotScale;                                                 // 0x0144(0x0004) (Edit)
	float                                              MaxRot;                                                   // 0x0148(0x0004) (Edit)
	float                                              MaxRotRate;                                               // 0x014C(0x0004) (Edit)
	float                                              CurrentRot;                                               // 0x0150(0x0004)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKSkelControl_HoverboardSuspension");
		return ptr;
	}

};


// Class UDKBase.UDKSkelControl_HoverboardSwing
// 0x0028 (0x0158 - 0x0130)
class UUDKSkelControl_HoverboardSwing : public USkelControlSingleBone
{
public:
	int                                                SwingHistoryWindow;                                       // 0x0130(0x0004) (Edit)
	int                                                SwingHistorySlot;                                         // 0x0134(0x0004)
	TArray<float>                                      SwingHistory;                                             // 0x0138(0x0010) (NeedCtorLink)
	float                                              SwingScale;                                               // 0x0148(0x0004) (Edit)
	float                                              MaxSwing;                                                 // 0x014C(0x0004) (Edit)
	float                                              MaxUseVel;                                                // 0x0150(0x0004) (Edit)
	float                                              CurrentSwing;                                             // 0x0154(0x0004)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKSkelControl_HoverboardSwing");
		return ptr;
	}

};


// Class UDKBase.UDKSkelControl_HoverboardVibration
// 0x0014 (0x0144 - 0x0130)
class UUDKSkelControl_HoverboardVibration : public USkelControlSingleBone
{
public:
	float                                              VibFrequency;                                             // 0x0130(0x0004) (Edit)
	float                                              VibSpeedAmpScale;                                         // 0x0134(0x0004) (Edit)
	float                                              VibTurnAmpScale;                                          // 0x0138(0x0004) (Edit)
	float                                              VibMaxAmplitude;                                          // 0x013C(0x0004) (Edit)
	float                                              VibInput;                                                 // 0x0140(0x0004)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKSkelControl_HoverboardVibration");
		return ptr;
	}

};


// Class UDKBase.UDKSkelControl_HugGround
// 0x0024 (0x0154 - 0x0130)
class UUDKSkelControl_HugGround : public USkelControlSingleBone
{
public:
	float                                              DesiredGroundDist;                                        // 0x0130(0x0004) (Edit)
	float                                              MaxDist;                                                  // 0x0134(0x0004) (Edit)
	struct FName                                       ParentBone;                                               // 0x0138(0x0008) (Edit)
	unsigned long                                      bOppositeFromParent : 1;                                  // 0x0140(0x0004) (Edit)
	float                                              XYDistFromParentBone;                                     // 0x0144(0x0004) (Edit)
	float                                              ZDistFromParentBone;                                      // 0x0148(0x0004) (Edit)
	float                                              MaxTranslationPerSec;                                     // 0x014C(0x0004) (Edit)
	float                                              LastUpdateTime;                                           // 0x0150(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKSkelControl_HugGround");
		return ptr;
	}

};


// Class UDKBase.UDKSkelControl_LockRotation
// 0x0028 (0x0128 - 0x0100)
class UUDKSkelControl_LockRotation : public USkelControlBase
{
public:
	unsigned long                                      bLockPitch : 1;                                           // 0x0100(0x0004) (Edit)
	unsigned long                                      bLockYaw : 1;                                             // 0x0100(0x0004) (Edit)
	unsigned long                                      bLockRoll : 1;                                            // 0x0100(0x0004) (Edit)
	struct FRotator                                    LockRotation;                                             // 0x0104(0x000C) (Edit)
	struct FRotator                                    MaxDelta;                                                 // 0x0110(0x000C) (Edit)
	TEnumAsByte<EBoneControlSpace>                     LockRotationSpace;                                        // 0x011C(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x011D(0x0003) MISSED OFFSET
	struct FName                                       RotationSpaceBoneName;                                    // 0x0120(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKSkelControl_LockRotation");
		return ptr;
	}

};


// Class UDKBase.UDKSkelControl_LookAt
// 0x0010 (0x01AC - 0x019C)
class UUDKSkelControl_LookAt : public USkelControlLookAt
{
public:
	unsigned long                                      bLimitYaw : 1;                                            // 0x019C(0x0004) (Edit)
	unsigned long                                      bLimitPitch : 1;                                          // 0x019C(0x0004) (Edit)
	unsigned long                                      bLimitRoll : 1;                                           // 0x019C(0x0004) (Edit)
	unsigned long                                      bShowPerAxisLimits : 1;                                   // 0x019C(0x0004) (Edit)
	float                                              YawLimit;                                                 // 0x01A0(0x0004) (Edit)
	float                                              PitchLimit;                                               // 0x01A4(0x0004) (Edit)
	float                                              RollLimit;                                                // 0x01A8(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKSkelControl_LookAt");
		return ptr;
	}

};


// Class UDKBase.UDKSkelControl_MassBoneScaling
// 0x0010 (0x0110 - 0x0100)
class UUDKSkelControl_MassBoneScaling : public USkelControlBase
{
public:
	TArray<float>                                      BoneScales;                                               // 0x0100(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKSkelControl_MassBoneScaling");
		return ptr;
	}


	float GetBoneScale(const struct FName& BoneName);
	void SetBoneScale(const struct FName& BoneName, float Scale);
};


// Class UDKBase.UDKSkelControl_PropellerBlade
// 0x0014 (0x0144 - 0x0130)
class UUDKSkelControl_PropellerBlade : public USkelControlSingleBone
{
public:
	float                                              MaxRotationsPerSecond;                                    // 0x0130(0x0004) (Edit)
	float                                              SpinUpTime;                                               // 0x0134(0x0004) (Edit)
	unsigned long                                      bCounterClockwise : 1;                                    // 0x0138(0x0004) (Edit)
	float                                              RotationsPerSecond;                                       // 0x013C(0x0004)
	float                                              DesiredRotationsPerSecond;                                // 0x0140(0x0004)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKSkelControl_PropellerBlade");
		return ptr;
	}

};


// Class UDKBase.UDKSkelControl_Rotate
// 0x0018 (0x0148 - 0x0130)
class UUDKSkelControl_Rotate : public USkelControlSingleBone
{
public:
	struct FRotator                                    DesiredBoneRotation;                                      // 0x0130(0x000C) (Edit)
	struct FRotator                                    DesiredBoneRotationRate;                                  // 0x013C(0x000C) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKSkelControl_Rotate");
		return ptr;
	}

};


// Class UDKBase.UDKSkelControl_SpinControl
// 0x0010 (0x0140 - 0x0130)
class UUDKSkelControl_SpinControl : public USkelControlSingleBone
{
public:
	float                                              DegreesPerSecond;                                         // 0x0130(0x0004) (Edit)
	struct FVector                                     Axis;                                                     // 0x0134(0x000C) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKSkelControl_SpinControl");
		return ptr;
	}

};


// Class UDKBase.UDKSkelControl_TurretConstrained
// 0x0060 (0x0190 - 0x0130)
class UUDKSkelControl_TurretConstrained : public USkelControlSingleBone
{
public:
	unsigned long                                      bConstrainPitch : 1;                                      // 0x0130(0x0004) (Edit)
	unsigned long                                      bConstrainYaw : 1;                                        // 0x0130(0x0004) (Edit)
	unsigned long                                      bConstrainRoll : 1;                                       // 0x0130(0x0004) (Edit)
	unsigned long                                      bInvertPitch : 1;                                         // 0x0130(0x0004) (Edit)
	unsigned long                                      bInvertYaw : 1;                                           // 0x0130(0x0004) (Edit)
	unsigned long                                      bInvertRoll : 1;                                          // 0x0130(0x0004) (Edit)
	unsigned long                                      bFixedWhenFiring : 1;                                     // 0x0130(0x0004) (Edit)
	unsigned long                                      bResetWhenUnattended : 1;                                 // 0x0130(0x0004) (Edit)
	unsigned long                                      bIsInMotion : 1;                                          // 0x0130(0x0004)
	struct FTurretConstraintData                       MaxAngle;                                                 // 0x0134(0x000C) (Edit)
	struct FTurretConstraintData                       MinAngle;                                                 // 0x0140(0x000C) (Edit)
	TArray<struct FTurretStepData>                     Steps;                                                    // 0x014C(0x0010) (Edit, NeedCtorLink)
	float                                              LagDegreesPerSecond;                                      // 0x015C(0x0004) (Edit)
	float                                              PitchSpeedScale;                                          // 0x0160(0x0004) (Edit)
	struct FRotator                                    DesiredBoneRotation;                                      // 0x0164(0x000C) (Edit)
	int                                                AssociatedSeatIndex;                                      // 0x0170(0x0004) (Edit)
	struct FRotator                                    ConstrainedBoneRotation;                                  // 0x0174(0x000C) (Transient)
	struct FScriptDelegate                             __OnTurretStatusChange__Delegate;                         // 0x0180(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0180(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKSkelControl_TurretConstrained");
		return ptr;
	}


	bool WouldConstrainPitch(int TestPitch, class USkeletalMeshComponent* SkelComp);
	void InitTurret(const struct FRotator& InitRot, class USkeletalMeshComponent* SkelComp);
	void OnTurretStatusChange(bool bIsMoving);
};


// Class UDKBase.UDKSkelControl_VehicleFlap
// 0x0020 (0x0150 - 0x0130)
class UUDKSkelControl_VehicleFlap : public USkelControlSingleBone
{
public:
	float                                              maxPitch;                                                 // 0x0130(0x0004) (Edit)
	float                                              OldZPitch;                                                // 0x0134(0x0004)
	float                                              MaxPitchTime;                                             // 0x0138(0x0004)
	float                                              MaxPitchChange;                                           // 0x013C(0x0004)
	struct FName                                       RightFlapControl;                                         // 0x0140(0x0008)
	struct FName                                       LeftFlapControl;                                          // 0x0148(0x0008)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKSkelControl_VehicleFlap");
		return ptr;
	}

};


// Class UDKBase.SimplePawn
// 0x0040 (0x05B4 - 0x0574)
class ASimplePawn : public AGamePawn
{
public:
	unsigned long                                      bFixedView : 1;                                           // 0x0574(0x0004)
	struct FVector                                     FixedViewLoc;                                             // 0x0578(0x000C)
	struct FRotator                                    FixedViewRot;                                             // 0x0584(0x000C)
	float                                              Bob;                                                      // 0x0590(0x0004)
	float                                              AppliedBob;                                               // 0x0594(0x0004)
	float                                              BobTime;                                                  // 0x0598(0x0004)
	struct FVector                                     WalkBob;                                                  // 0x059C(0x000C)
	float                                              OldZ;                                                     // 0x05A8(0x0004)
	float                                              CastlePawnSpeed;                                          // 0x05AC(0x0004) (Config)
	float                                              CastlePawnAccel;                                          // 0x05B0(0x0004) (Config)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.SimplePawn");
		return ptr;
	}


	struct FVector GetPawnViewLocation();
	void TickSpecial(float DeltaTime);
	bool CalcCamera(float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV);
	void FixedView();
	void PostBeginPlay();
};


// Class UDKBase.SimplePC
// 0x00FC (0x0840 - 0x0744)
class ASimplePC : public AGamePlayerController
{
public:
	float                                              AutoRotationAccelRate;                                    // 0x0744(0x0004)
	float                                              AutoRotationBrakeDecelRate;                               // 0x0748(0x0004)
	float                                              MaxAutoRotationVelocity;                                  // 0x074C(0x0004)
	float                                              BreathAutoRotationAccelRate;                              // 0x0750(0x0004)
	float                                              BreathAutoRotationBrakeDecelRate;                         // 0x0754(0x0004)
	float                                              MaxBreathAutoRotationVelocity;                            // 0x0758(0x0004)
	float                                              RangeBasedYawAccelStrength;                               // 0x075C(0x0004)
	float                                              RangeBasedAccelMaxDistance;                               // 0x0760(0x0004)
	unsigned long                                      bLookAtDestination : 1;                                   // 0x0764(0x0004)
	unsigned long                                      bCameraBreathing : 1;                                     // 0x0764(0x0004)
	unsigned long                                      bSmoothRotation : 1;                                      // 0x0764(0x0004) (Config)
	unsigned long                                      bApplyBackTouchToViewOffset : 1;                          // 0x0764(0x0004)
	unsigned long                                      bFingerIsDown : 1;                                        // 0x0764(0x0004)
	struct FVector                                     LookAtDestination;                                        // 0x0768(0x000C)
	float                                              LookAtDestAutoPitchAmount;                                // 0x0774(0x0004)
	struct FVector                                     CameraBreathCenterLocation;                               // 0x0778(0x000C)
	struct FRotator                                    CameraBreathRotator;                                      // 0x0784(0x000C)
	struct FVector                                     CameraBreathSampleLocation;                               // 0x0790(0x000C)
	float                                              LastCameraBreathDeltaSelectTime;                          // 0x079C(0x0004)
	float                                              TimeBetweenCameraBreathChanges;                           // 0x07A0(0x0004)
	struct FVector2D                                   AutoRotationVelocity;                                     // 0x07A4(0x0008)
	struct FVector2D                                   ViewportSize;                                             // 0x07AC(0x0008)
	TArray<class USoundCue*>                           FootstepSounds;                                           // 0x07B4(0x0010) (NeedCtorLink)
	float                                              DistanceUntilNextFootstepSound;                           // 0x07C4(0x0004)
	struct FString                                     ServerCommandline;                                        // 0x07C8(0x0010) (Config, NeedCtorLink)
	float                                              OldTurn;                                                  // 0x07D8(0x0004)
	float                                              OldLookup;                                                // 0x07DC(0x0004)
	float                                              RotationSmoothingFactor;                                  // 0x07E0(0x0004) (Config)
	int                                                DefaultInputGroup;                                        // 0x07E4(0x0004) (Config)
	class UMobilePlayerInput*                          MPI;                                                      // 0x07E8(0x0008)
	class UMobileInputZone*                            SliderZone;                                               // 0x07F0(0x0008)
	class UMobileInputZone*                            StickMoveZone;                                            // 0x07F8(0x0008)
	class UMobileInputZone*                            StickLookZone;                                            // 0x0800(0x0008)
	class UMobileInputZone*                            FreeLookZone;                                             // 0x0808(0x0008)
	int                                                NoTapToMoves;                                             // 0x0810(0x0004)
	float                                              LastEnteredTapToMove;                                     // 0x0814(0x0004)
	float                                              TotalTimeInTapToMove;                                     // 0x0818(0x0004)
	float                                              TimeOfLastUserViewChange;                                 // 0x081C(0x0004)
	struct FVector2D                                   TouchCenter;                                              // 0x0820(0x0008)
	struct FRotator                                    LastOffset;                                               // 0x0828(0x000C)
	struct FRotator                                    MatineeOffset;                                            // 0x0834(0x000C)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.SimplePC");
		return ptr;
	}


	void SetFootstepsToSnow();
	void SetFootstepsToStone();
	void PlayerTick(float DeltaTime);
	void GetPlayerViewPoint(struct FVector* out_Location, struct FRotator* out_Rotation);
	void NotifyDirectorControl(bool bNowControlling, class USeqAct_Interp* CurrentMatinee);
	void OffsetMatineeTouch(int Handle, TEnumAsByte<ETouchType> Type, const struct FVector2D& TouchLocation, float DeviceTimestamp, int TouchpadIndex);
	void ActivateControlGroup();
	void UpdateCameraBreathing();
	void CheckDistanceToDestination(float DistToDestination);
	void ProcessViewRotation(float DeltaTime, const struct FRotator& DeltaRot, struct FRotator* out_ViewRotation);
	void UpdateRotation(float DeltaTime);
	void PlayerMove(float DeltaTime);
	void SetNextFootstepDistance();
	bool IsStickMoveActive();
	void PostBeginPlay();
	void SetupZones();
	void ReceivedGameClass(class UClass* GameClass);
	void OnConsoleCommand(class USeqAct_ConsoleCommand* inAction);
	void InitInputSystem();
};


// Class UDKBase.CastleGame
// 0x0004 (0x04B0 - 0x04AC)
class ACastleGame : public ASimpleGame
{
public:
	unsigned long                                      bAllowAttractMode : 1;                                    // 0x04AC(0x0004) (Config)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.CastleGame");
		return ptr;
	}


	class UClass* STATIC_SetGameType(const struct FString& MapName, const struct FString& Options, const struct FString& Portal);
	bool PreventDeath(class APawn* KilledPawn, class AController* Killer, class UClass* DamageType, const struct FVector& HitLocation);
	void OnEngineHasLoaded();
};


// Class UDKBase.MobileHUDExt
// 0x0048 (0x06D4 - 0x068C)
class AMobileHUDExt : public AMobileHUD
{
public:
	class UTexture2D*                                  TapToMoveTexture;                                         // 0x068C(0x0008)
	float                                              LastTapToMoveEffectTime;                                  // 0x0694(0x0004)
	struct FVector2D                                   TapToMoveEffectPos;                                       // 0x0698(0x0008)
	struct FCachedLastTouch                            LastTouch;                                                // 0x06A0(0x000C)
	unsigned long                                      bFlashJoysticks : 1;                                      // 0x06AC(0x0004)
	float                                              FlashTime;                                                // 0x06B0(0x0004)
	class UFont*                                       BenchmarkFont;                                            // 0x06B4(0x0008)
	class UTexture2D*                                  BenchmarkBackground;                                      // 0x06BC(0x0008)
	struct FTextureUVs                                 BenchmarkBackgroundUVs;                                   // 0x06C4(0x0010)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.MobileHUDExt");
		return ptr;
	}


	void FlashSticks();
	void DrawMobileZone_Joystick(class UMobileInputZone* Zone);
	void DrawMobileZone_Slider(class UMobileInputZone* Zone);
	void PostRenderBenchmarkModeRunning();
	void PostRenderBenchmarkModeCompleted();
	void PostRenderAttractMode();
	void PostRender();
	bool ShowMobileHud();
	void ConditionallyDrawTapToMoveEffect();
	void StartTapToMoveEffect(float X, float Y);
};


// Class UDKBase.CastlePC
// 0x00B0 (0x08F0 - 0x0840)
class ACastlePC : public ASimplePC
{
public:
	unsigned long                                      bSuppressSplash : 1;                                      // 0x0840(0x0004) (Config)
	unsigned long                                      bSplashHasBeenShown : 1;                                  // 0x0840(0x0004)
	unsigned long                                      bIsInAttractMode : 1;                                     // 0x0840(0x0004)
	unsigned long                                      bIsInBenchmarkMode : 1;                                   // 0x0840(0x0004)
	unsigned long                                      bBenchmarkLoopCompleted : 1;                              // 0x0840(0x0004)
	unsigned long                                      bDoneInitialFade : 1;                                     // 0x0840(0x0004)
	unsigned long                                      bPauseMenuOpen : 1;                                       // 0x0840(0x0004)
	unsigned long                                      bAutoSlide : 1;                                           // 0x0840(0x0004)
	int                                                BenchmarkNumFrames;                                       // 0x0844(0x0004)
	float                                              BenchmarkElapsedTime;                                     // 0x0848(0x0004)
	class UMobileMenuPause*                            PauseMenu;                                                // 0x084C(0x0008)
	class UMobileMenuDebug*                            DebugMenu;                                                // 0x0854(0x0008)
	float                                              SliderStart;                                              // 0x085C(0x0004)
	float                                              SliderEnd;                                                // 0x0860(0x0004)
	float                                              SliderTravelTime;                                         // 0x0864(0x0004)
	float                                              SliderTravelDuration;                                     // 0x0868(0x0004)
	float                                              SettingsSliderStart;                                      // 0x086C(0x0004)
	float                                              SettingsSliderEnd;                                        // 0x0870(0x0004)
	float                                              AutoAttractTime;                                          // 0x0874(0x0004)
	class USoundCue*                                   OpenMenuSound;                                            // 0x0878(0x0008)
	class USoundCue*                                   CloseMenuSound;                                           // 0x0880(0x0008)
	class UMobileMenuControls*                         TutMenu;                                                  // 0x0888(0x0008)
	float                                              StuckThreshHold;                                          // 0x0890(0x0004)
	float                                              TapToMoveAutoPitchAmount;                                 // 0x0894(0x0004)
	class UStaticMesh*                                 TapToMoveVisualMesh;                                      // 0x0898(0x0008)
	float                                              TapToMoveVisualMinDist;                                   // 0x08A0(0x0004)
	float                                              TapToMoveVisualRotateSpeed;                               // 0x08A4(0x0004)
	float                                              TapToMoveVisualAnimDuration;                              // 0x08A8(0x0004)
	struct FVector                                     TapToMoveDestination;                                     // 0x08AC(0x000C)
	float                                              LastDistToDestination;                                    // 0x08B8(0x0004)
	float                                              TapToMoveVisualEffectStartTime;                           // 0x08BC(0x0004)
	float                                              TapToMoveVisualEffectEndTime;                             // 0x08C0(0x0004)
	class USoundCue*                                   TapToMoveSound;                                           // 0x08C4(0x0008)
	class USoundCue*                                   InvalidTapToMoveSound;                                    // 0x08CC(0x0008)
	class USoundCue*                                   TapToMoveStopSound;                                       // 0x08D4(0x0008)
	class AKActorSpawnable*                            TapToMoveVisualActor;                                     // 0x08DC(0x0008)
	TEnumAsByte<ETutorialStage>                        TutorialStage;                                            // 0x08E4(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x08E5(0x0003) MISSED OFFSET
	class UMobileInputZone*                            TutorialLookZone;                                         // 0x08E8(0x0008)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.CastlePC");
		return ptr;
	}


	void SetFootstepsToSnow();
	void SetFootstepsToStone();
	void StartTutorials();
	void FlashHelp(float Duration);
	void ShowSplash();
	void PlayerTick(float DeltaTime);
	bool ProcessMenuSlide(class UMobileInputZone* Zone, TEnumAsByte<ETouchType> EventType, int SlideValue, const struct FVector2D& ViewportSizes);
	bool MenuSliderTap(class UMobileInputZone* Zone, TEnumAsByte<ETouchType> EventType, const struct FVector2D& TouchLocation);
	void OpenMenu();
	void ResetMenu();
	void AutoSlideSettings(float Destination);
	void AutoSlide(float Destination);
	bool ExitAttractTap(class UMobileInputZone* Zone, TEnumAsByte<ETouchType> EventType, const struct FVector2D& TouchLocation);
	void ExitAttractMode();
	void OnFlyThroughLoopCompleted();
	void EnterAttractMode(bool BeginBenchmarking);
	void NotifyDirectorControl(bool bNowControlling, class USeqAct_Interp* CurrentMatinee);
	void CheckDistanceToDestination(float DistToDestination);
	void ProcessViewRotation(float DeltaTime, const struct FRotator& DeltaRot, struct FRotator* out_ViewRotation);
	void PlayerLookAtDestination();
	void DoTapToMove(const struct FVector& NewDestination, bool bShouldLookAtDestination);
	bool TapToMoveTap(class UMobileInputZone* Zone, TEnumAsByte<ETouchType> EventType, const struct FVector2D& TouchLocation);
	class AActor* TraceForTapToMove(class APawn* TraceOwner, const struct FVector& End, const struct FVector& Start, struct FVector* HitLocation, struct FVector* HitNormal);
	void CheckInactivity();
	void SaveControllerStats();
	void SetupZones();
	void OnEngineInitialTick();
	void Destroyed();
	void PostBeginPlay();
};


// Class UDKBase.MobileMenuControls
// 0x0024 (0x00F4 - 0x00D0)
class UMobileMenuControls : public UMobileMenuScene
{
public:
	float                                              FadeTime;                                                 // 0x00D0(0x0004)
	float                                              FadeDuration;                                             // 0x00D4(0x0004)
	float                                              AnimTime;                                                 // 0x00D8(0x0004)
	unsigned long                                      bFadeOut : 1;                                             // 0x00DC(0x0004)
	unsigned long                                      bAnimate : 1;                                             // 0x00DC(0x0004)
	class UMobileMenuImage*                            Icon;                                                     // 0x00E0(0x0008)
	class UMobileMenuImage*                            msg;                                                      // 0x00E8(0x0008)
	float                                              Scale;                                                    // 0x00F0(0x0004)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.MobileMenuControls");
		return ptr;
	}


	void RenderScene(class UCanvas* Canvas, float RenderDelta);
	void Setup(bool bTap);
	void FadeOut();
};


// Class UDKBase.MobileMenuSplash
// 0x0004 (0x00D4 - 0x00D0)
class UMobileMenuSplash : public UMobileMenuScene
{
public:
	float                                              HelpFlashDuration;                                        // 0x00D0(0x0004)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.MobileMenuSplash");
		return ptr;
	}


	void Closed();
	void OnTouch(class UMobileMenuObject* Sender, TEnumAsByte<ETouchType> EventType, float TouchX, float TouchY);
	void InitMenuScene(class UMobilePlayerInput* PlayerInput, int ScreenWidth, int ScreenHeight, bool bIsFirstInitialization);
};


// Class UDKBase.MobileMenuPause
// 0x0024 (0x00F4 - 0x00D0)
class UMobileMenuPause : public UMobileMenuScene
{
public:
	class UMobileMenuControls*                         FadingControlsMenu;                                       // 0x00D0(0x0008)
	unsigned long                                      bHelpFadingOut : 1;                                       // 0x00D8(0x0004)
	unsigned long                                      bFlashHelp : 1;                                           // 0x00D8(0x0004)
	float                                              HelpFadeTime;                                             // 0x00DC(0x0004)
	float                                              HelpFadeDuration;                                         // 0x00E0(0x0004)
	float                                              ShownSize;                                                // 0x00E4(0x0004)
	float                                              Scale;                                                    // 0x00E8(0x0004)
	float                                              FlashDuration;                                            // 0x00EC(0x0004)
	float                                              FlashTime;                                                // 0x00F0(0x0004)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.MobileMenuPause");
		return ptr;
	}


	void SetDefaultUI();
	void SetAttractModeUI(bool bIsInBenchmarkMode);
	void ReleaseHelp();
	void FlashHelp(float Duration);
	bool OnSceneTouch(TEnumAsByte<ETouchType> EventType, float X, float Y, bool bInside);
	void RenderScene(class UCanvas* Canvas, float RenderDelta);
	void HackInactiveAlpha(float NewValue);
	void OnResetMenu();
	void OnTouch(class UMobileMenuObject* Sender, TEnumAsByte<ETouchType> EventType, float TouchX, float TouchY);
	void InitMenuScene(class UMobilePlayerInput* PlayerInput, int ScreenWidth, int ScreenHeight, bool bIsFirstInitialization);
};


// Class UDKBase.MobileMenuBase
// 0x0028 (0x00F8 - 0x00D0)
class UMobileMenuBase : public UMobileMenuScene
{
public:
	class UTexture2D*                                  iPadBackgroundTexture;                                    // 0x00D0(0x0008)
	struct FUVCoords                                   iPadBackgroundCoords;                                     // 0x00D8(0x0014)
	float                                              FadeTime;                                                 // 0x00EC(0x0004)
	float                                              FadeDuration;                                             // 0x00F0(0x0004)
	unsigned long                                      bFadeOut : 1;                                             // 0x00F4(0x0004)
	unsigned long                                      bCloseOnFadeOut : 1;                                      // 0x00F4(0x0004)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.MobileMenuBase");
		return ptr;
	}


	void RenderScene(class UCanvas* Canvas, float RenderDelta);
	void Fade(bool bIsFadeOut, float FadeDur);
};


// Class UDKBase.MobileMenuDebug
// 0x0000 (0x00F8 - 0x00F8)
class UMobileMenuDebug : public UMobileMenuBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.MobileMenuDebug");
		return ptr;
	}


	void OnTouch(class UMobileMenuObject* Sender, TEnumAsByte<ETouchType> EventType, float TouchX, float TouchY);
};


// Class UDKBase.CloudGame
// 0x0000 (0x04AC - 0x04AC)
class ACloudGame : public ASimpleGame
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.CloudGame");
		return ptr;
	}

};


// Class UDKBase.CloudHUD
// 0x0000 (0x06E0 - 0x06E0)
class ACloudHUD : public AUDKHUD
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.CloudHUD");
		return ptr;
	}


	void PostRender();
};


// Class UDKBase.CloudPC
// 0x003C (0x087C - 0x0840)
class ACloudPC : public ASimplePC
{
public:
	class UCloudSaveData*                              SaveData;                                                 // 0x0840(0x0008)
	int                                                Slot1DocIndex;                                            // 0x0848(0x0004)
	int                                                Slot2DocIndex;                                            // 0x084C(0x0004)
	class UCloudStorageBase*                           Cloud;                                                    // 0x0850(0x0008)
	class UFacebookIntegration*                        Facebook;                                                 // 0x0858(0x0008)
	class UInGameAdManager*                            AdManager;                                                // 0x0860(0x0008)
	class UMicroTransactionBase*                       MicroTrans;                                               // 0x0868(0x0008)
	class UTwitterIntegrationBase*                     Twitter;                                                  // 0x0870(0x0008)
	unsigned long                                      bIsFBAuthenticating : 1;                                  // 0x0878(0x0004)
	unsigned long                                      bAdHasBeenShown : 1;                                      // 0x0878(0x0004)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.CloudPC");
		return ptr;
	}


	void OnTwitterAuthorizeComplete(struct FPlatformInterfaceDelegateResult* Result);
	void OnTwitterRequestComplete(struct FPlatformInterfaceDelegateResult* Result);
	void OnTweetComplete(struct FPlatformInterfaceDelegateResult* Result);
	void CloudGameTwitter();
	void CloudGameBuyConsumable();
	void MicroQueryProducts();
	void OnProductPurchaseComplete(struct FPlatformInterfaceDelegateResult* Result);
	void OnProductQueryComplete(struct FPlatformInterfaceDelegateResult* Result);
	void CloudGameFacebook();
	void OnFBDialogComplete(struct FPlatformInterfaceDelegateResult* Result);
	void OnFBFriendsListComplete(struct FPlatformInterfaceDelegateResult* Result);
	void OnFBRequestComplete(struct FPlatformInterfaceDelegateResult* Result);
	void OnFBAuthComplete(struct FPlatformInterfaceDelegateResult* Result);
	void OnUserClosedAdvertisement(struct FPlatformInterfaceDelegateResult* Result);
	void OnUserClickedAdvertisement(struct FPlatformInterfaceDelegateResult* Result);
	void CloudGameToggleAd();
	void CloudGetDocs();
	void CloudConflictDetected(struct FPlatformInterfaceDelegateResult* Result);
	void CloudReadDocument(struct FPlatformInterfaceDelegateResult* Result);
	void CloudGotDocuments(struct FPlatformInterfaceDelegateResult* Result);
	void CloudGetAndIncrement();
	void CloudIncrementValue(struct FPlatformInterfaceDelegateResult* Result);
	void CloudValueChanged(struct FPlatformInterfaceDelegateResult* Result);
	void CloudLogValue(struct FPlatformInterfaceDelegateResult* Result);
	void CloudGameLoad(int Slot);
	void CloudGameSave(int Slot);
	void CloudGameFight();
	void Destroyed();
	void PostBeginPlay();
};


// Class UDKBase.CloudSaveData
// 0x0008 (0x0068 - 0x0060)
class UCloudSaveData : public UObject
{
public:
	int                                                Exp;                                                      // 0x0060(0x0004)
	int                                                Gold;                                                     // 0x0064(0x0004)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.CloudSaveData");
		return ptr;
	}

};


// Class UDKBase.CloudMenuMicroTrans
// 0x0020 (0x00F0 - 0x00D0)
class UCloudMenuMicroTrans : public UMobileMenuScene
{
public:
	class ACloudPC*                                    PC;                                                       // 0x00D0(0x0008)
	class UMicroTransactionBase*                       MicroTrans;                                               // 0x00D8(0x0008)
	class UMobileMenuButton*                           ProductButtons[0x2];                                      // 0x00E0(0x0008)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.CloudMenuMicroTrans");
		return ptr;
	}


	void OnProductPurchaseComplete(struct FPlatformInterfaceDelegateResult* Result);
	void OnProductQueryComplete(struct FPlatformInterfaceDelegateResult* Result);
	void Closed();
	void OnTouch(class UMobileMenuObject* Sender, TEnumAsByte<ETouchType> EventType, float TouchX, float TouchY);
	void InitMenuScene(class UMobilePlayerInput* PlayerInput, int ScreenWidth, int ScreenHeight, bool bIsFirstInitialization);
};


// Class UDKBase.MobileGameCrowdAgent
// 0x0000 (0x0584 - 0x0584)
class AMobileGameCrowdAgent : public AGameCrowdAgentSkeletal
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.MobileGameCrowdAgent");
		return ptr;
	}


	void OnSetMaterial(class USeqAct_SetMaterial* Action);
	void PlayDeath(const struct FVector& KillMomentum);
};


// Class UDKBase.MobilePlaceablePawn
// 0x0024 (0x0598 - 0x0574)
class AMobilePlaceablePawn : public AGamePawn
{
public:
	unsigned long                                      bFixedView : 1;                                           // 0x0574(0x0004)
	struct FVector                                     FixedViewLoc;                                             // 0x0578(0x000C)
	struct FRotator                                    FixedViewRot;                                             // 0x0584(0x000C)
	class ULightEnvironmentComponent*                  LightEnvironment;                                         // 0x0590(0x0008) (Edit, Const, ExportObject, EditConst, Component, EditInline)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.MobilePlaceablePawn");
		return ptr;
	}


	struct FVector GetPawnViewLocation();
	bool CalcCamera(float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV);
	bool RestoreAnimSetsToDefault();
	void FixedView();
};


// Class UDKBase.MobileProjectile
// 0x003C (0x02E8 - 0x02AC)
class AMobileProjectile : public AProjectile
{
public:
	float                                              AccelRate;                                                // 0x02AC(0x0004) (Edit)
	unsigned long                                      bShuttingDown : 1;                                        // 0x02B0(0x0004)
	unsigned long                                      bInitOnSpawnWithRotation : 1;                             // 0x02B0(0x0004) (Edit)
	unsigned long                                      bSuppressExplosionFX : 1;                                 // 0x02B0(0x0004)
	class UParticleSystemComponent*                    ProjEffects;                                              // 0x02B4(0x0008) (ExportObject, Component, EditInline)
	class UParticleSystem*                             ProjFlightTemplate;                                       // 0x02BC(0x0008) (Edit)
	class UParticleSystem*                             ProjExplosionTemplate;                                    // 0x02C4(0x0008) (Edit)
	float                                              MaxEffectDistance;                                        // 0x02CC(0x0004) (Edit)
	class USoundCue*                                   ExplosionSound;                                           // 0x02D0(0x0008) (Edit)
	TArray<class UClass*>                              ActorsToIgnoreWhenHit;                                    // 0x02D8(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.MobileProjectile");
		return ptr;
	}


	class APawn* GetPawnOwner();
	bool CalcCamera(float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV);
	void MyOnParticleSystemFinished(class UParticleSystemComponent* PSC);
	void Destroyed();
	void HideProjectile();
	void TornOff();
	void ShutDown();
	void SpawnExplosionEffects(const struct FVector& HitLocation, const struct FVector& HitNormal);
	void SetExplosionEffectParameters(class UParticleSystemComponent* ProjExplosion);
	void SpawnFlightEffects();
	void Explode(const struct FVector& HitLocation, const struct FVector& HitNormal);
	void ProcessTouch(class AActor* Other, const struct FVector& HitLocation, const struct FVector& HitNormal);
	void Init(const struct FVector& Direction);
	void SetInitialState();
	void PostBeginPlay();
	void Landed(const struct FVector& HitNormal, class AActor* FloorActor);
};


// Class UDKBase.SeqAct_MobileCrowdSpawner
// 0x0000 (0x019C - 0x019C)
class USeqAct_MobileCrowdSpawner : public USeqAct_GameCrowdSpawner
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.SeqAct_MobileCrowdSpawner");
		return ptr;
	}

};


// Class UDKBase.UDKAnimNodeSequenceByBoneRotation
// 0x001C (0x01C8 - 0x01AC)
class UUDKAnimNodeSequenceByBoneRotation : public UAnimNodeSequence
{
public:
	struct FName                                       BoneName;                                                 // 0x01AC(0x0008) (Edit)
	TEnumAsByte<EAxis>                                 BoneAxis;                                                 // 0x01B4(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01B5(0x0003) MISSED OFFSET
	TArray<struct FAnimByRotation>                     AnimList;                                                 // 0x01B8(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKAnimNodeSequenceByBoneRotation");
		return ptr;
	}


	void OnBecomeRelevant();
};


// Class UDKBase.UDKMobileInputZone
// 0x0030 (0x0290 - 0x0260)
class UUDKMobileInputZone : public UMobileInputZone
{
public:
	float                                              HoldPlayerDistance;                                       // 0x0260(0x0004) (Const)
	TArray<struct FActivePress>                        CurrentPresses;                                           // 0x0264(0x0010) (NeedCtorLink)
	struct FVector                                     TraceHitLocation;                                         // 0x0274(0x000C) (Transient)
	class AActor*                                      LastTappedActor;                                          // 0x0280(0x0008) (Transient)
	float                                              TimeOfLastUntouch;                                        // 0x0288(0x0004) (Transient)
	float                                              PlayerTouchStartTime;                                     // 0x028C(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class UDKBase.UDKMobileInputZone");
		return ptr;
	}


	bool ProcessGameplayInput(class UMobileInputZone* Zone, float DeltaTime, int Handle, TEnumAsByte<ETouchType> EventType, const struct FVector2D& TouchLocation);
	void TraceFromScreenToWorld(const struct FVector2D& ScreenPos, const struct FVector& Extent, class AActor** outHitActor, struct FVector* OutHitLocation);
	bool IsTouchingPlayerPawn();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

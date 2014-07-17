#pragma once

class CVehicle
{
public:
	* ActivateBomb()
	* ActivateBombWhenEntered()
	* AddDamagedVehicleParticles()
	* AddExhaustParticles()
	* AddMovingCollisionSpeed(CVector&)
	* AddPassenger(CPed*)
	* AddPassenger(CPed*, unsigned char)
	* AddReplacementUpgrade(int, int)
	* AddSingleWheelParticles(tWheelState, unsigned int, float, float, CColPoint*, CVector*, float, int, unsigned int, bool*, unsigned int)
	* AddUpgrade(int, int)
	* AddVehicleUpgrade(int)
	* AddWaterSplashParticles()
	* AddWheelDirtAndWater(CColPoint&, unsigned int, unsigned char, unsigned char)
	* ApplyBoatWaterResistance(tBoatHandlingData*, float)
	* BladeColSectorList(CPtrList&, CColModel&, CMatrix&, short, float)
	* BlowUpCar(CEntity*, unsigned char)
	* BlowUpCarCutSceneNoExtras(bool, bool, bool, bool)
	* BreakTowLink()
	* BurstTyre(unsigned char, bool)
	* CVehicle(unsigned char)
	* CalculateLightingFromCollision()
	* CanBeDeleted() const
	* CanBeDriven() const
	* CanDoorsBeDamaged() const
	* CanPedEnterCar() const
	* CanPedJumpOutCar(CPed*) const
	* CanPedLeanOut(CPed*) const
	* CanPedOpenLocks(CPed const*) const
	* CanPedStepOutCar(bool) const
	* CanUseCameraHeightSetting()
	* CanVehicleBeDamaged(CEntity*, eWeaponType, unsigned char*)
	* CarHasRoof() const
	* ChangeLawEnforcerState(unsigned char)
	* ClearGettingInFlags(unsigned char)
	* ClearGettingOutFlags(unsigned char)
	* ClearVehicleUpgradeFlags(int, int)
	* ClearWindowOpenFlag(unsigned char)
	* CreateReplacementAtomic(CBaseModelInfo*, RwFrame*, int, bool, bool)
	* CreateUpgradeAtomic(CBaseModelInfo*, UpgradePosnDesc const*, RwFrame*, bool)
	* CustomCarPlate_TextureCreate(CVehicleModelInfo*)
	* CustomCarPlate_TextureDestroy()
	* DeleteRwObject()
	* DoBladeCollision(CVector, CMatrix&, short, float, float)
	* DoBoatSplashes(float)
	* DoBurstAndSoftGroundRatios()
	* DoDriveByShootings()
	* DoFixedMachineGuns()
	* DoHeadLightBeam(int, CMatrix&, unsigned char)
	* DoHeadLightEffect(int, CMatrix&, unsigned char, unsigned char)
	* DoHeadLightReflection(CMatrix&, unsigned int, unsigned char, unsigned char)
	* DoHeadLightReflectionSingle(CMatrix&, unsigned char)
	* DoHeadLightReflectionTwin(CMatrix&)
	* DoPlaneGunFireFX(CWeapon*, CVector&, CVector&, int)
	* DoReverseLightEffect(int, CMatrix&, unsigned char, unsigned char, unsigned int, unsigned char)
	* DoSunGlare()
	* DoTailLightEffect(int, CMatrix&, unsigned char, unsigned char, unsigned int, unsigned char)
	* DoVehicleLights(CMatrix&, unsigned int)
	* ExtinguishCarFire()
	* FillVehicleWithPeds(bool)
	* FindTyreNearestPoint(float, float)
	* FindWheelWidth(bool)
	* FireFixedMachineGuns()
	* FireHeatSeakingMissile(CEntity*, eOrdnanceType, bool)
	* FirePlaneGuns()
	* FireUnguidedMissile(eOrdnanceType, bool)
	* Fix()
	* FlagToDestroyWhenNextProcessed()
	* FlyingControl(eFlightModel, float, float, float, float)
	* GetComponentWorldPosition(int, CVector&)
	* GetDooorAngleOpenRatio(eDoors) const
	* GetDooorAngleOpenRatio(unsigned int) const
	* GetFiringRateMultiplier()
	* GetGasTankPosition()
	* GetHasDualExhausts()
	* GetHeightAboveRoad() const
	* GetNewSteeringAmt()
	* GetNumContactWheels()
	* GetPlaneGunsAutoAimAngle()
	* GetPlaneGunsPosition(int)
	* GetPlaneGunsRateOfFire()
	* GetPlaneNumGuns()
	* GetPlaneOrdnancePosition(eOrdnanceType)
	* GetPlaneOrdnanceRateOfFire(eOrdnanceType)
	* GetPlaneWeaponFiringStatus(bool&, eOrdnanceType&)
	* GetRemapIndex()
	* GetReplacementUpgrade(int)
	* GetRideAnimData()
	* GetRopeHeightForHeli()
	* GetSpareHasslePosId()
	* GetSpecialColModel()
	* GetTowBarPos(CVector&, bool, CVehicle*)
	* GetTowHitchPos(CVector&, bool, CVehicle*)
	* GetUpgrade(int)
	* GetVehicleAppearance() const
	* GetVehicleLightsStatus()
	* HeightAboveCeiling(float, eFlightModel)
	* InflictDamage(CEntity*, eWeaponType, float, CVector)
	* InitWinch(int)
	* IsComponentPresent(int) const
	* IsDoorClosed(eDoors) const
	* IsDoorClosed(unsigned int) const
	* IsDoorFullyOpen(eDoors) const
	* IsDoorFullyOpen(unsigned int) const
	* IsDoorMissing(eDoors) const
	* IsDoorMissing(unsigned int) const
	* IsDoorReady(eDoors) const
	* IsDoorReady(unsigned int) const
	* IsDriver(CPed const*) const
	* IsDriver(int) const
	* IsLawEnforcementVehicle() const
	* IsOnItsSide() const
	* IsOpenTopCar() const
	* IsPassenger(CPed const*) const
	* IsPassenger(int) const
	* IsRoomForPedToLeaveCar(unsigned int, CVector*)
	* IsSphereTouchingVehicle(float, float, float, float)
	* IsUpsideDown() const
	* IsVehicleNormal() const
	* KillPedsGettingInVehicle()
	* KillPedsInVehicle()
	* Load()
	* MakeDirty(CColPoint&)
	* OpenDoor(CPed*, int, eDoors, float, bool)
	* PickRandomPassenger()
	* PickUpEntityWithWinch(CEntity*)
	* PlayCarHorn()
	* PossiblyDropFreeFallBombForPlayer(eOrdnanceType, bool)
	* PreRender()
	* PreRenderDriverAndPassengers()
	* ProcessBikeWheel(CVector&, CVector&, CVector&, CVector&, int, float, float, float, float, char, float*, tWheelState*, eBikeWheelSpecial, unsigned short)
	* ProcessBoatControl(tBoatHandlingData*, float&, bool, bool)
	* ProcessCarAlarm()
	* ProcessControlCollisionCheck(bool)
	* ProcessControlInputs(unsigned char)
	* ProcessDelayedExplosion()
	* ProcessDrivingAnims(CPed*, unsigned char)
	* ProcessOpenDoor(CPed*, unsigned int, unsigned int, unsigned int, float)
	* ProcessSirenAndHorn(bool)
	* ProcessWeapons()
	* ProcessWheel(CVector&, CVector&, CVector&, CVector&, int, float, float, float, char, float*, tWheelState*, unsigned short)
	* ProcessWheelRotation(tWheelState, CVector const&, CVector const&, float)
	* QueryPickedUpEntityWithWinch()
	* ReactToVehicleDamage(CPed*)
	* ReduceVehicleDamage(float&)
	* ReleasePickedUpEntityWithWinch()
	* RemoveAllUpgrades()
	* RemoveDriver(bool)
	* RemoveLighting(bool)
	* RemovePassenger(CPed*)
	* RemoveRefsToVehicle(CEntity*)
	* RemoveReplacementUpgrade(int)
	* RemoveUpgrade(int)
	* RemoveVehicleUpgrade(int)
	* RemoveWinch()
	* Render()
	* RenderDriverAndPassengers()
	* ResetAfterRender()
	* Save()
	* ScanAndMarkTargetForHeatSeekingMissile(CEntity*)
	* SelectPlaneWeapon(bool, eOrdnanceType)
	* SetCollisionLighting(unsigned char)
	* SetComponentAtomicAlpha(RpAtomic*, int)
	* SetComponentRotation(RwFrame*, int, float, bool)
	* SetComponentVisibility(RwFrame*, unsigned int)
	* SetDriver(CPed*)
	* SetFiringRateMultiplier(float)
	* SetGettingInFlags(unsigned char)
	* SetGettingOutFlags(unsigned char)
	* SetHasslePosId(int, bool)
	* SetModelIndex(unsigned int)
	* SetRemap(int)
	* SetRemapTexDictionary(char const*)
	* SetRopeHeightForHeli(float)
	* SetTappedGasTankVehicle(CEntity*)
	* SetTowLink(CVehicle*, bool)
	* SetTransmissionRotation(RwFrame*, float, float, CVector, bool)
	* SetUpDriver(int, bool, bool)
	* SetUpWheelColModel(CColModel*)
	* SetVehicleCreatedBy(int, bool)
	* SetVehicleUpgradeFlags(int, int, int&)
	* SetWindowOpenFlag(unsigned char)
	* SetupDamageAfterLoad()
	* SetupLighting()
	* SetupPassenger(int, int, bool, bool)
	* SetupRender()
	* SetupSuspensionLines()
	* SetupUpgradesAfterLoad()
	* ShufflePassengersToMakeSpace()
	* Shutdown()
	* SpecialEntityCalcCollisionSteps(bool&, bool&)
	* SpecialEntityPreCollisionStuff(CPhysical*, bool, bool&, bool&, bool&, bool&)
	* UpdateClumpAlpha()
	* UpdateLightingFromStoredPolys()
	* UpdatePassengerList()
	* UpdateTractorLink(bool, bool)
	* UpdateTrailerLink(bool, bool)
	* UpdateWinch()
	* UsesSiren() const
	* VehicleDamage(float, unsigned short, CEntity*, CVector*, CVector*, eWeaponType)
	* operator delete(void*)
	* operator delete(void*, int)
	* operator new(unsigned int)
	* operator new(unsigned int, int)
	* ~CVehicle()
protected:
private:
};

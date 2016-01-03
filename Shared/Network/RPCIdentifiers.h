//============== IV:Multiplayer - https://github.com/Neproify/ivmultiplayer ==============
//
// File: RPCIdentifiers.h
// Project: Shared
// Author(s): jenksta
// License: See LICENSE in root directory
//
//==============================================================================

#pragma once

// Type used for rpc ids
typedef unsigned char RPCIdentifier;

enum eRPCIdentfiers
{

	// Player RPCs
	RPC_PlayerConnect,
	RPC_PlayerJoinComplete,

	// RPC's
	RPC_Message,
	RPC_NewObject,
	RPC_DeleteObject,
	RPC_NewBlip,
	RPC_DeleteBlip,
	RPC_NewActor,
	RPC_DeleteActor,
	RPC_NewCheckpoint,
	RPC_DeleteCheckpoint,
	RPC_NewPlayer,
	RPC_DeletePlayer,
	RPC_PlayerSpawn,
	RPC_OnFootSync,
	RPC_InVehicleSync,
	RPC_NewVehicle,
	RPC_DeleteVehicle,
	RPC_PassengerSync,
	RPC_SmallSync,
	RPC_EmptyVehicleSync,
	RPC_ConnectionRefused,
	RPC_JoinedGame,
	RPC_PlayerDeath,
	RPC_ScriptingSetModel,
	RPC_Command,
	RPC_Chat,
	RPC_CheckpointLeft,
	RPC_Death,
	RPC_VehicleEnterExit,
	RPC_HeadMovement,
	RPC_CheckpointEntered,
	RPC_NameChange,
	RPC_NewFile,
	RPC_DeleteFile,
	RPC_NewPickup,
	RPC_DeletePickup,
	RPC_SyncActor,
	RPC_RequestActorUpdate,

	// Scripting RPC's
	RPC_ScriptingTogglePayAndSpray,
	RPC_ScriptingToggleAutoAim,
	RPC_ScriptingGivePlayerWeapon,
	RPC_ScriptingSetPlayerHealth,
	RPC_ScriptingSetPlayerCameraPos,
	RPC_ScriptingSetPlayerCameraLookAt,
	RPC_ScriptingResetPlayerCamera,
	RPC_ScriptingSetPlayerCoordinates,
	RPC_ScriptingForcePlayerAnim,
	RPC_ScriptingRequestAnims,
	RPC_ScriptingReleaseAnims,
	RPC_ScriptingSetPlayerTime,
	RPC_ScriptingSetPlayerWeather,
	RPC_ScriptingSetPlayerGravity,
	RPC_ScriptingToggleControls,
	RPC_ScriptingSetHeading,
	RPC_ScriptingRemoveHelmet,
	RPC_ScriptingSetVehicleDirtLevel,
	RPC_ScriptingSetVehicleCoordinates,
	RPC_ScriptingSetVehicleRotation,
	RPC_ScriptingSetActorCoordinates,
	RPC_ScriptingSetActorHeading,
	RPC_ScriptingActorWalkToCoordinates,
	RPC_ScriptingSetActorName,
	RPC_ScriptingToggleActorNametag,
	RPC_ScriptingToggleActorBlip,
	RPC_ScriptingSetActorColor,
	RPC_ScriptingToggleActorFrozen,
	RPC_ScriptingToggleActorHelmet,
	RPC_ScriptingWarpActorIntoVehicle,
	RPC_ScriptingRemoveActorFromVehicle,
	RPC_ScriptingStopActorDriving,
	RPC_ScriptingForceActorAnimation,
	RPC_ScriptingActorDriveToCoords,
	RPC_ScriptingSetSpawnLocation,
	RPC_ScriptingSetVehicleColor,
	RPC_ScriptingToggleRagdoll,
	RPC_ScriptingGivePlayerMoney,
	RPC_ScriptingGiveHelmet,
	RPC_ScriptingSetPlayerMoney,
	RPC_ScriptingDisplayText,
	RPC_ScriptingDisplayInfoText,
	RPC_ScriptingToggleFrozen,
	RPC_ScriptingSetVehicleHealth,
	RPC_ScriptingSetVehicleSirenState,
	RPC_ScriptingSetVehicleEngineState,
	RPC_ScriptingTurnTaxiLights,
	RPC_ScriptingControlCar,
	RPC_ScriptingSetCarLights,
	RPC_ScriptingRepairCarWindows,
	RPC_ScriptingRepairCarTyres,
	RPC_ScriptingSetPlayerArmour,
	RPC_ScriptingSetPlayerMoveSpeed,
	RPC_ScriptingSetVehicleMoveSpeed,
	RPC_ScriptingSetVehicleTurnSpeed,
	RPC_ScriptingRemoveWeapons,
	RPC_ScriptingSetWantedLevel,
	RPC_ScriptingWarpPlayerIntoVehicle,
	RPC_ScriptingRemovePlayerFromVehicle,
	RPC_ScriptingSetBlipColor,
	RPC_ScriptingSetBlipSize,
	RPC_ScriptingToggleBlipShortRange,
	RPC_ScriptingToggleBlipRoute,
	RPC_ScriptingSetBlipName,
	RPC_ScriptingSetBlipIcon,
	RPC_ScriptingShowCheckpointForPlayer,
	RPC_ScriptingHideCheckpointForPlayer,
	RPC_ScriptingSetCameraBehindPlayer,
	RPC_ScriptingSetPlayerDucking,
	RPC_ScriptingSetPlayerInvincible,
	RPC_ScriptingToggleHUD,
	RPC_ScriptingToggleRadar,
	RPC_ScriptingToggleNames,
	RPC_ScriptingToggleAreaNames,
	RPC_ScriptingEventCall,
	RPC_ScriptingCancelVehicleEntry,
	RPC_ScriptingSetVehicleIndicators,
	RPC_ScriptingSetVehicleComponents,
	RPC_ScriptingSetVehicleVariation,
	RPC_ScriptingSoundVehicleHorn,
	RPC_ScriptingSetPlayerColor,
	RPC_ScriptingSetVehicleLocked,
	RPC_ScriptingSetPlayerClothes,
	RPC_ScriptingResetPlayerClothes,
	RPC_ScriptingSetTrafficLightState,
	RPC_ScriptingSetObjectPosition,
	RPC_ScriptingSetObjectRotation,
	RPC_ScriptingSetPickupPosition,
	RPC_ScriptingSetPickupRotation,
	RPC_ScriptingSetPickupValue,
	RPC_ScriptingCreateFire,
	RPC_ScriptingDeleteFire,
	RPC_ScriptingCreateExplosion,
	RPC_ScriptingBlockWeaponChange,
	RPC_ScriptingBlockWeaponDrop,
	RPC_ScriptingFadeScreenOut,
	RPC_ScriptingFadeScreenIn,
	RPC_ScriptingPlayPoliceReport,
	RPC_ScriptingPlayMissionCompleteAudio,
	RPC_ScriptingPlayGameAudio,
	RPC_ScriptingForceWind,
	RPC_ScriptingSetNametags,
	RPC_ScriptingAttachObject,
	RPC_ScriptingDetachObject,
	RPC_ScriptingVehicleDeath,
	RPC_ScriptingAttachCam,
	RPC_ScriptingDisplayHudNotification,
	RPC_ScriptingSetVehicleFollowMode,
	RPC_ScriptingSetVehicleFollowOffset,
	RPC_ScriptingSetAmmoInClip,
	RPC_ScriptingSetAmmo,
	RPC_ScriptingCreatePlayerBlip,
	RPC_ScriptingRemovePlayerBlip,
	RPC_ScriptingChangePlayerBlip,
	RPC_ScriptingSetVehicleGPSState,
	RPC_ScriptingSetVehicleAlarm,
	RPC_ScriptingSetVehiclePetrolTankHealth,
	RPC_ScriptingSetVehicleTryeState,
	RPC_ScriptingSetVehicleWindowState,
	RPC_ScriptingSetPlayerUseMobilePhone,
	RPC_ScriptingMarkVehicleAsActorVehicle,
	RPC_ScriptingFixVehicle,
	RPC_ScriptingPlayerSaySpeech,
	RPC_ScriptingActorSaySpeech,
	RPC_ScriptingLetPlayerDriveAutomatic,
	RPC_ScriptingSetPlayerDimension,
	RPC_ResetVehicleEnterExit,
	RPC_ScriptingTogglePlayerLabelForPlayer,
	RPC_ScriptingMoveObject,
	RPC_ScriptingRotateObject,
	RPC_ScriptingSetObjectDimension,
	RPC_ScriptingSetCheckpointDimension,
	RPC_ScriptingSetObjectInterior,
	RPC_ScriptingExplodeCar,
	RPC_New3DLabel,
	RPC_Delete3DLabel,
	RPC_ScriptingSet3DLabelPosition,
	RPC_ScriptingSet3DLabelText,
	RPC_ScriptingSet3DLabelColor,
	RPC_ScriptingSet3DLabelVisible,
	RPC_ScriptingSet3DLabelStreamingDistance,
	RPC_ScriptingSet3DLabelDimension,
};

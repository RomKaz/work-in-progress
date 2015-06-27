////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:13:12 2014 : Source 'file' date Fri Oct 31 06:13:12 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=4
enum {
	stabilizedinaxisx = 1,
	stabilizedinaxisy = 2,
	stabilizedinaxesboth = 3,
	stabilizedinaxesnone = 0
};

//Class tracked_e : M1_Abrams\config.bin{
class CfgPatches
{
	class CATracked_E_M1_Abrams
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.04;
		requiredAddons[] = {"CATracked_E","CATracked"};
	};
};
class CfgVehicles
{
	class Tank;
	class M1A1: Tank
	{
		model = "ca\Tracked_E\M1_Abrams\M1_abrams";
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\Tracked_E\M1_Abrams\Data\m1_abrams_01_metal.rvmat","Ca\Tracked_E\M1_Abrams\Data\m1_abrams_01_metal_damage.rvmat","Ca\Tracked_E\M1_Abrams\Data\m1_abrams_01_metal_destruct.rvmat","Ca\Tracked_E\M1_Abrams\Data\m1_abrams_02_metal.rvmat","Ca\Tracked_E\M1_Abrams\Data\m1_abrams_02_metal_damage.rvmat","Ca\Tracked_E\M1_Abrams\Data\m1_abrams_02_metal_destruct.rvmat","Ca\Tracked_E\M1_Abrams\Data\m1_abrams_03_metal.rvmat","Ca\Tracked_E\M1_Abrams\Data\m1_abrams_03_metal_damage.rvmat","Ca\Tracked_E\M1_Abrams\Data\m1_abrams_03_metal_destruct.rvmat","Ca\Tracked_E\M1_Abrams\Data\m1_abrams_track_metal.rvmat","Ca\Tracked_E\M1_Abrams\Data\m1_abrams_track_metal_damage.rvmat","Ca\Tracked_E\M1_Abrams\Data\m1_abrams_track_metal_destruct.rvmat","Ca\Tracked_E\M1_Abrams\Data\m1a2_loader.rvmat","Ca\Tracked_E\M1_Abrams\Data\m1a2_loader_damage.rvmat","Ca\Tracked_E\M1_Abrams\Data\m1a2_loader_destruct.rvmat","Ca\Tracked_E\M1_Abrams\Data\m1abrams_mg_mount.rvmat","Ca\Tracked_E\M1_Abrams\Data\m1abrams_mg_mount_damage.rvmat","Ca\Tracked_E\M1_Abrams\Data\m1abrams_mg_mount_destruct.rvmat","ca\weapons_e\m2\data\m2.rvmat","Ca\weapons\Data\m2_damage.rvmat","Ca\weapons\Data\m2_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
		LockDetectionSystem = 4;
		IncommingMisslieDetectionSystem = 16;
	};
	class M1A2_TUSK_MG: M1A1
	{
		model = "ca\Tracked_E\M1_Abrams\M1A2_TUSK";
	};
};
//};

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

//Class tracked_e : ZSU\config.bin{
class CfgPatches
{
	class CATracked_E_ZSU
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
	class ZSU_Base: Tank
	{
		model = "ca\Tracked_E\ZSU\zsu";
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\Tracked_E\ZSU\Data\ZSU_01.rvmat","Ca\Tracked_E\ZSU\Data\ZSU_01_damage.rvmat","Ca\Tracked_E\ZSU\Data\ZSU_01_destruct.rvmat","Ca\Tracked_E\ZSU\Data\ZSU_02.rvmat","Ca\Tracked_E\ZSU\Data\ZSU_02_damage.rvmat","Ca\Tracked_E\ZSU\Data\ZSU_02_destruct.rvmat","Ca\Tracked_E\ZSU\Data\ZSU_03.rvmat","Ca\Tracked_E\ZSU\Data\ZSU_03_damage.rvmat","Ca\Tracked_E\ZSU\Data\ZSU_03_destruct.rvmat","Ca\Tracked_E\ZSU\Data\ZSU_track.rvmat","Ca\Tracked_E\ZSU\Data\ZSU_track_damage.rvmat","Ca\Tracked_E\ZSU\Data\ZSU_track_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
	};
};
//};

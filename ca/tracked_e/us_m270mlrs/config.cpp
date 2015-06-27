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

//Class tracked_e : us_m270mlrs\config.bin{
class CfgPatches
{
	class CATracked_E_us_m270mlrs
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.04;
		requiredAddons[] = {"CATracked_E","CATracked2_us_m270mlrs","CA_Modules_ARTY"};
	};
};
class CfgVehicles
{
	class LandVehicle;
	class Tank: LandVehicle
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class MLRS: Tank
	{
		model = "ca\Tracked_E\us_m270mlrs\MLRS";
		artilleryScanner = 1;
		ARTY_IsArtyVehicle = 0;
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\Tracked_E\us_m270mlrs\Data\MLRS_glass.rvmat","Ca\Tracked_E\us_m270mlrs\Data\MLRS_glass_damage.rvmat","Ca\Tracked_E\us_m270mlrs\Data\MLRS_glass_damage.rvmat","Ca\Tracked_E\us_m270mlrs\Data\MLRS_hull.rvmat","Ca\Tracked_E\us_m270mlrs\Data\MLRS_hull_damage.rvmat","Ca\Tracked_E\us_m270mlrs\Data\MLRS_hull_destruct.rvmat","Ca\Tracked_E\us_m270mlrs\Data\MLRS_interior.rvmat","Ca\Tracked_E\us_m270mlrs\Data\MLRS_interior_damage.rvmat","Ca\Tracked_E\us_m270mlrs\Data\MLRS_interior_destruct.rvmat","Ca\Tracked_E\us_m270mlrs\Data\MLRS_tracks.rvmat","Ca\Tracked_E\us_m270mlrs\Data\MLRS_tracks_damage.rvmat","Ca\Tracked_E\us_m270mlrs\Data\MLRS_tracks_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
		class NVGMarkers
		{
			class NVGMarker01
			{
				name = "nvg_marker";
				color[] = {0.03,0.003,0.003,1};
				ambient[] = {0.003,0.0003,0.0003,1};
				brightness = 0.001;
				blinking = 1;
			};
		};
	};
};
//};

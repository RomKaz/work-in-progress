////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:07:19 2014 : Source 'file' date Fri Oct 31 06:07:19 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=8
enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	destructno = 0,
	destructman = 5,
	destructbuilding = 1
};

//Class wheeled_acr : lr\config.bin{
class _xx_100Rnd_762x54_PK
{
	magazine = "100Rnd_762x54_PK";
	count = "5*x";
};
class _xx_HandGrenade_West
{
	magazine = "HandGrenade_West";
	count = "6*x";
};
class _xx_SmokeShell
{
	magazine = "SmokeShell";
	count = "6*x";
};
class _xx_SmokeShellRed
{
	magazine = "SmokeShellRed";
	count = "2*x";
};
class CfgPatches
{
	class CAWheeled_ACR_LR
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.5;
		requiredAddons[] = {"CAWheeled_ACR"};
	};
};
class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class HitPoints;
	};
	class LandRover_Base: Car
	{
		class HitPoints: HitPoints
		{
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
		};
	};
	class LandRover_ACR: LandRover_Base
	{
		expansion = 3;
		scope = 2;
		vehicleClass = "CarW";
		model = "\Ca\Wheeled_ACR\LR\LR_ACR.p3d";
		side = 1;
		faction = "BIS_CZ";
		crew = "CZ_Soldier_Wdl_ACR";
		typicalCargo[] = {"CZ_Soldier_Wdl_ACR","CZ_Soldier_Wdl_ACR"};
		enableGPS = 1;
		class Turrets{};
		class HitPoints: HitPoints
		{
			class HitGlass1: HitGlass1
			{
				armor = 0.15;
			};
			class HitGlass2: HitGlass2
			{
				armor = 0.1;
			};
			class HitGlass3: HitGlass3
			{
				armor = 0.1;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\wheeled_E\LR\Data\LR_base.rvmat","ca\wheeled_E\LR\Data\LR_base_damage.rvmat","ca\wheeled_E\LR\Data\LR_base_destruct.rvmat","ca\wheeled_E\LR\Data\LR_glass.rvmat","ca\wheeled_E\LR\Data\LR_glass_damage.rvmat","ca\wheeled_E\LR\Data\LR_glass_destruct.rvmat","ca\wheeled_E\LR\Data\LR_Special.rvmat","ca\wheeled_E\LR\Data\LR_Special_damage.rvmat","ca\wheeled_E\LR\Data\LR_Special_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
		class TransportWeapons
		{
			class _xx_Sa58P_EP1
			{
				weapon = "Sa58P_EP1";
				count = 1;
			};
			class _xx_CZ805_A1_ACR
			{
				weapon = "CZ805_A1_ACR";
				count = "2*1";
			};
			class _xx_UK59_ACR
			{
				weapon = "UK59_ACR";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_762x39_SA58
			{
				magazine = "30Rnd_762x39_SA58";
				count = "15*1";
			};
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = "30*1";
			};
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
	class LandRover_Ambulance_ACR: LandRover_ACR
	{
		vehicleClass = "SupportWoodland_ACR";
		displayName = "Military Offroad (Ambulance)";
		model = "\Ca\Wheeled_ACR\LR\LR_AMB_ACR";
		attendant = 1;
		hiddenSelections[] = {"camo2"};
		hiddenSelectionsTextures[] = {"\ca\wheeled_acr\lr\data\lr_amb_ext_co.paa"};
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\wheeled_acr\lr\data\lr_amb_ext.rvmat","ca\wheeled_acr\lr\data\lr_amb_ext_damage.rvmat","ca\wheeled_acr\lr\data\lr_amb_ext_destruct.rvmat","ca\wheeled_E\LR\Data\LR_base.rvmat","ca\wheeled_E\LR\Data\LR_base_damage.rvmat","ca\wheeled_E\LR\Data\LR_base_destruct.rvmat","ca\wheeled_E\LR\Data\LR_glass.rvmat","ca\wheeled_E\LR\Data\LR_glass_damage.rvmat","ca\wheeled_E\LR\Data\LR_glass_destruct.rvmat","ca\wheeled_E\LR\Data\LR_Special.rvmat","ca\wheeled_E\LR\Data\LR_Special_damage.rvmat","ca\wheeled_E\LR\Data\LR_Special_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
		class TransportWeapons{};
	};
	class LandRover_Ambulance_Des_ACR: LandRover_Ambulance_ACR
	{
		vehicleClass = "Support";
		crew = "CZ_Soldier_DES_EP1";
		typicalCargo[] = {"CZ_Soldier_DES_EP1","CZ_Soldier_DES_EP1"};
		hiddenSelectionsTextures[] = {"\ca\wheeled_acr\lr\data\lr_amb_ext_desert_co.paa"};
	};
};
//};

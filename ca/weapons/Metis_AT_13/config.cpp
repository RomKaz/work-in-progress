////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:06:53 2014 : Source 'file' date Fri Oct 31 06:06:53 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class weapons : Metis_AT_13\config.bin{
class CfgPatches
{
	class CAWeapons_Metis_AT_13
	{
		units[] = {"Metis"};
		weapons[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {"CAWeapons"};
	};
};
class CfgVehicles
{
	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		class Turrets;
	};
	class StaticATWeapon: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class Metis: StaticATWeapon
	{
		scope = 0;
		displayname = "$STR_DN_AT13";
		model = "\ca\weapons\Metis_AT_13\metis.p3d";
		class Library
		{
			libTextDesc = "$STR_LIB_AT13";
		};
		picture = "\Ca\weapons\data\ico\metis_at13_CA.paa";
		icon = "\Ca\weapons\data\map_ico\icomap_metis_at13_CA.paa";
		mapSize = 3;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"AT13LauncherSingle"};
				magazines[] = {"6Rnd_AT13"};
				gunnerAction = "Metis_Gunner";
				gunnerOpticsModel = "\ca\weapons\2Dscope_Metis";
				gunnerOpticsEffect[] = {"OpticsCHAbera1","OpticsBlur2"};
				minTurn = -45;
				maxTurn = 45;
				initTurn = 0;
				minElev = -10;
				maxElev = 40;
				initElev = 0;
				ejectDeadGunner = 0;
				gunnerForceOptics = 0;
				class ViewGunner
				{
					initAngleX = 5;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.078;
					minFov = 0.078;
					maxFov = 0.078;
					visionMode[] = {"Ti"};
					thermalMode[] = {3,4};
				};
			};
		};
	};
};
//};

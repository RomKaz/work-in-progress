////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:06:54 2014 : Source 'file' date Fri Oct 31 06:06:54 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class weapons : ZU23\config.bin{
class CfgPatches
{
	class CAWeapons_ZU23
	{
		units[] = {"ZU23_Ins","ZU23_CDF","ZU23_Gue"};
		weapons[] = {};
		requiredVersion = 0.1;
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
	class StaticCanon: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class ZU23_base: StaticCanon
	{
		cargoAction[] = {"Hilux_cargo01"};
		displayname = "$STR_DN_ZU23";
		model = "\ca\weapons\ZU23\zu23";
		class Library
		{
			libTextDesc = "$STR_LIB_ZU23";
		};
		picture = "\ca\Weapons\data\ico\zu23_CA.paa";
		icon = "\Ca\weapons\Data\map_ico\icomap_zu23_CA.paa";
		transportSoldier = 1;
		memoryPointsGetInCargo = "pos_cargo_dir";
		memoryPointsGetInCargoDir = "pos_cargo";
		memoryPointsGetInDriver = "pos_driver_dir";
		memoryPointsGetInDriverDir = "pos_driver";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minElev = -10;
				maxElev = 85;
				weapons[] = {"2A14"};
				magazines[] = {"40Rnd_23mm_AZP85","40Rnd_23mm_AZP85","40Rnd_23mm_AZP85","40Rnd_23mm_AZP85","40Rnd_23mm_AZP85","40Rnd_23mm_AZP85","40Rnd_23mm_AZP85","40Rnd_23mm_AZP85","40Rnd_23mm_AZP85","40Rnd_23mm_AZP85"};
				gunnerAction = "Hilux_cargo01";
				gunnerOpticsModel = "\ca\weapons\2Dscope_RUAA5";
				gunnerOpticsEffect[] = {"OpticsCHAbera1","OpticsBlur2"};
				gunnerForceOptics = 0;
				memoryPointsGetInGunner = "pos_gunner_dir";
				memoryPointsGetInGunnerDir = "pos_gunner";
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
					initFov = 0.093;
					minFov = 0.093;
					maxFov = 0.093;
				};
			};
		};
		class AnimationSources
		{
			class fire_anim
			{
				source = "revolving";
				weapon = "2A14";
			};
		};
	};
};
//};

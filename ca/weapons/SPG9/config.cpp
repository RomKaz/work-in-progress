////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:06:53 2014 : Source 'file' date Fri Oct 31 06:06:53 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class weapons : SPG9\config.bin{
class CfgPatches
{
	class CAWeapons_SPG9
	{
		units[] = {"SPG9_GUE","SPG9_CDF","SPG9_Ins"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAweapons"};
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
	class SPG9_base: StaticATWeapon
	{
		displayName = "$STR_DN_SPG9";
		model = "\ca\weapons\spg9\spg9.p3d";
		picture = "\CA\weapons\data\Equip\picture_spg9_ca.paa";
		icon = "\Ca\weapons\Data\Equip\icon_spg9_CA.paa";
		mapSize = 3;
		nameSound = "cannon";
		transportSoldier = 0;
		gunnerHasFlares = 1;
		class AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "SPG9";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"SPG9"};
				magazines[] = {"OG9_HE","OG9_HE","OG9_HE","OG9_HE","OG9_HE","OG9_HE","OG9_HE","OG9_HE","OG9_HE","OG9_HE","PG9_AT","PG9_AT","PG9_AT","PG9_AT","PG9_AT"};
				gunnerAction = "SPG_Gunner";
				gunnerOpticsModel = "\ca\weapons\2Dscope_SPG_4";
				gunnerOpticsEffect[] = {"OpticsCHAbera1","OpticsBlur2","TankGunnerOptics1"};
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
					initFov = 0.111;
					minFov = 0.111;
					maxFov = 0.111;
				};
			};
		};
		class Library
		{
			libTextDesc = "$STR_LIB_SPG9";
		};
	};
};
//};

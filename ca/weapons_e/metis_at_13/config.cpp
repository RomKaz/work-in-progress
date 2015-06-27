////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:13:23 2014 : Source 'file' date Fri Oct 31 06:13:23 2014
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

//Class weapons_e : metis_at_13\config.bin{
class CfgPatches
{
	class CAWeapons_E_Metis
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.04;
		requiredAddons[] = {"CAWeapons_E","CAWeapons_Metis_AT_13"};
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
		model = "ca\weapons_E\metis_at_13\metis";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				memoryPointsGetInGunner = "pos_gunner";
				memoryPointsGetInGunnerDir = "pos_gunner_dir";
				gunnerOpticsModel = "ca\weapons_e\optics_metis.p3d";
			};
		};
	};
};
class CfgWeapons
{
	class Launcher;
	class MetisLauncher: Launcher
	{
		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		model = "ca\weapons_E\metis_at_13\metis_launcher";
		modelOptics = "ca\weapons_e\optics_metis.p3d";
		visionMode[] = {"Ti"};
		thermalMode[] = {4};
	};
};
class CfgMagazines
{
	class CA_LauncherMagazine;
	class AT13: CA_LauncherMagazine
	{
		modelSpecial = "ca\weapons_E\metis_at_13\metis_launcher_loaded";
	};
};
//};

////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:13:22 2014 : Source 'file' date Fri Oct 31 06:13:22 2014
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

//Class weapons_e : igla\config.bin{
class CfgPatches
{
	class CAWeapons_E_Igla
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.04;
		requiredAddons[] = {"CAWeapons_E","CAWeapons","CAWeapons_Warfare_weapons"};
	};
};
class CfgWeapons
{
	class Strela;
	class Igla: Strela
	{
		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		model = "\ca\weapons_e\IGLA\igla";
	};
};
class CfgMagazines
{
	class Strela;
	class Igla: Strela
	{
		modelSpecial = "\ca\weapons_e\IGLA\igla_loaded";
	};
};
class CfgVehicles
{
	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		class Turrets;
	};
	class StaticAAWeapon: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class Igla_AA_pod_East: StaticAAWeapon
	{
		model = "ca\weapons_E\igla\igla_AA_pod";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				memoryPointsGetInGunner = "pos_gunner";
				memoryPointsGetInGunnerDir = "pos_gunner_dir";
			};
		};
	};
};
//};
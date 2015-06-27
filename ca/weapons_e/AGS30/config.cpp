////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:13:21 2014 : Source 'file' date Fri Oct 31 06:13:21 2014
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

//Class weapons_e : AGS30\config.bin{
class CfgPatches
{
	class CAWeapons_E_AGS
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.04;
		requiredAddons[] = {"CAWeapons_E","CAWeapons"};
	};
};
class CfgVehicles
{
	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		class Turrets;
	};
	class StaticGrenadeLauncher: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class AGS_base: StaticGrenadeLauncher
	{
		model = "ca\weapons_E\AGS30\AGS_static";
		visionMode[] = {"Normal"};
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

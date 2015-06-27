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

//Class weapons_e : M2\config.bin{
class CfgPatches
{
	class CAWeapons_E_M2StaticMG
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.04;
		requiredAddons[] = {"CAWeapons_E","CAWeapons"};
	};
};
class CfgVehicles
{
	class StaticMGWeapon;
	class M2StaticMG_base: StaticMGWeapon
	{
		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		model = "ca\weapons_E\M2\M2_mg";
	};
	class M2HD_mini_TriPod: M2StaticMG_base
	{
		model = "ca\weapons_E\M2\M2_mg2";
	};
};
//};

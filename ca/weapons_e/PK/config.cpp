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

//Class weapons_e : PK\config.bin{
class CfgPatches
{
	class CAWeapons_E_PK
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.04;
		requiredAddons[] = {"CAWeapons_E","CAWeapons"};
	};
};
class CfgWeapons
{
	class Rifle;
	class PK: Rifle
	{
		model = "ca\weapons_E\PK\PK_MG";
		htMin = 1;
		htMax = 600;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100,200,300,400,500,600,700,800};
		discreteDistanceInitIndex = 2;
	};
};
//};

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

//Class weapons_e : ksvk\config.bin{
class CfgPatches
{
	class CAWeapons_E_ksvk
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.04;
		requiredAddons[] = {"CAWeapons_E","CAweapons_ksvk"};
	};
};
class CfgWeapons
{
	class Rifle;
	class ksvk: Rifle
	{
		model = "ca\weapons_E\ksvk\ksvk";
		fireLightDuration = 0.0;
		fireLightIntensity = 0.0;
		htMin = 1;
		htMax = 600;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		visionMode[] = {"Normal"};
	};
};
//};

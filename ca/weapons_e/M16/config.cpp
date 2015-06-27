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

//Class weapons_e : M16\config.bin{
class CfgPatches
{
	class CAWeapons_E_M16
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {"CAWeapons_E","CAweapons"};
	};
};
class CfgWeapons
{
	class M16_base;
	class M16A2: M16_base
	{
		model = "\ca\weapons_e\m16\M16A2";
		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
	};
	class M16A2GL: M16A2
	{
		model = "\ca\weapons_e\m16\M16A2_GL";
	};
};
//};

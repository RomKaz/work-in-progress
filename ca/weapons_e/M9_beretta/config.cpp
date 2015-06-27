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

//Class weapons_e : M9_beretta\config.bin{
class CfgPatches
{
	class CAWeapons_E_M9
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.04;
		requiredAddons[] = {"CAWeapons_E","CAWeapons"};
	};
};
class CfgWeapons
{
	class Pistol;
	class M9: Pistol
	{
		model = "ca\weapons_E\M9_beretta\M9_Beretta";
		htMin = 1;
		htMax = 300;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
	};
	class M9SD: M9
	{
		model = "ca\weapons_E\M9_beretta\M9_Beretta_SD";
		displayName = "$STR_EP1_DN_M9SD";
	};
};
//};

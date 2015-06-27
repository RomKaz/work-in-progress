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

//Class weapons_e : colt1911\config.bin{
class CfgPatches
{
	class CAWeapons_E_Colt1911
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.04;
		requiredAddons[] = {"CAWeapons_E","CAWeapons_Colt1911"};
	};
};
class CfgWeapons
{
	class M9;
	class Colt1911: M9
	{
		model = "ca\weapons_E\colt1911\Colt1911";
		htMin = 1;
		htMax = 300;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
	};
};
//};

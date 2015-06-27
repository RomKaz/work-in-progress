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

//Class weapons_e : rpg18\config.bin{
class CfgPatches
{
	class CAWeapons_E_RPG18
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.04;
		requiredAddons[] = {"CAWeapons_E","CAWeapons2_RPG18"};
	};
};
class CfgWeapons
{
	class Launcher;
	class RPG18: Launcher
	{
		model = "ca\weapons_E\rpg18\rpg18";
		htMin = 1;
		htMax = 420;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
	};
};
class CfgMagazines
{
	class CA_LauncherMagazine;
	class RPG18: CA_LauncherMagazine
	{
		modelSpecial = "ca\weapons_E\rpg18\rpg18_loaded";
	};
};
//};

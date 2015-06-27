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

//Class weapons_e : rpg7\config.bin{
class CfgPatches
{
	class CAWeapons_E_RPG7
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.04;
		requiredAddons[] = {"CAWeapons_E","CAWeapons"};
	};
};
class CfgWeapons
{
	class Launcher;
	class RPG7V: Launcher
	{
		model = "\ca\weapons_e\RPG7\rpg7_launcher";
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
	class PG7V: CA_LauncherMagazine
	{
		modelSpecial = "\ca\weapons_e\RPG7\rpg7_launcher_loaded";
	};
	class PG7VL: PG7V
	{
		modelSpecial = "\ca\weapons_e\RPG7\rpg7L_launcher_loaded";
	};
	class PG7VR: PG7V
	{
		modelSpecial = "\ca\weapons_e\RPG7\rpg7VR_launcher_loaded";
	};
	class OG7: CA_LauncherMagazine
	{
		modelSpecial = "\ca\weapons_e\RPG7\rpg7o_launcher_loaded";
	};
};
//};

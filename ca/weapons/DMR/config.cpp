////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:06:53 2014 : Source 'file' date Fri Oct 31 06:06:53 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class weapons : DMR\config.bin{
class CfgPatches
{
	class CAWeapons_DMR
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAweapons"};
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class 20Rnd_762x51_DMR: CA_Magazine
	{
		scope = 2;
		displayName = "$STR_MN_DMR";
		picture = "\ca\weapons\data\equip\M_US_DMR_CA.paa";
		count = 20;
		ammo = "B_762x51_noTracer";
		initSpeed = 900;
		reloadMagazineSound[] = {"\ca\Weapons\Data\Sound\M21_reload_v4",0.01,1,20};
		descriptionShort = "$STR_DSS_20RND_DMR";
	};
};
//};

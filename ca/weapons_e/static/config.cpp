////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:13:23 2014 : Source 'file' date Fri Oct 31 06:13:23 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class weapons_e : static\config.bin{
class CfgPatches
{
	class CAWeapons_E_STATIC
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.04;
		requiredAddons[] = {"CAWeapons_E","CAWeapons_Warfare_weapons"};
	};
};
class CfgVehicles
{
	class StaticMGWeapon;
	class WarfareBMGNest_PK_Base: StaticMGWeapon
	{
		model = "\Ca\weapons_E\static\PK_nest.p3d";
	};
	class WarfareBMGNest_M240_base: StaticMGWeapon
	{
		model = "\Ca\weapons_E\static\M240_nest.p3d";
	};
};
//};

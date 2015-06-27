////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:13:24 2014 : Source 'file' date Fri Oct 31 06:13:24 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class weapons_e : TOW\config.bin{
class CfgPatches
{
	class CAWeapons_E_TOW
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.04;
		requiredAddons[] = {"CAWeapons_E"};
	};
};
class CfgVehicles
{
	class StaticATWeapon;
	class TOW_TriPod_Base: StaticATWeapon
	{
		model = "\Ca\weapons_E\TOW\TOW_static";
	};
	class TOW_TriPod: StaticATWeapon
	{
		model = "\Ca\weapons_E\TOW\TOW_static";
	};
};
//};

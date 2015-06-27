////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:12:00 2014 : Source 'file' date Fri Oct 31 06:12:00 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class structures_e : Wall\config.bin{
class CfgPatches
{
	class CAStructures_E_Wall
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAStructures_E"};
	};
};
class CfgVehicles
{
	class House_EP1;
	class Fort_StoneWall_EP1: House_EP1
	{
		expansion = 1;
		scope = 2;
		displayName = "$STR_EP1_DN_Fort_StoneWall";
		model = "\Ca\Structures_E\Wall\Wall_K\Wall_Stone";
		vehicleClass = "Structures";
		icon = "\Ca\misc3\data\Icons\icon_fortBagFenceLong_ca.paa";
		destrType = "DestructNo";
	};
};
//};

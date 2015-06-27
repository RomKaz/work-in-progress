////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:12:00 2014 : Source 'file' date Fri Oct 31 06:12:00 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=8
enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	destructno = 0,
	destructman = 5,
	destructbuilding = 1
};

//Class structures_e : Misc\Misc_Well\config.bin{
class CfgPatches
{
	class CAStructures_E_Misc_Misc_Well
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {"CAStructures_E_Misc"};
	};
};
class CfgVehicles
{
	class House;
	class House_EP1: House
	{
		class DestructionEffects;
	};
	class Ruins_EP1;
	class Land_Misc_Well_L_EP1: House_EP1
	{
		scope = 2;
		model = "\ca\Structures_E\Misc\Misc_Well\Misc_Well_L_EP1";
		vehicleClass = "Structures";
		displayName = "$STR_EP1_DN_Land_Misc_Well_L";
	};
	class Land_Misc_Well_C_EP1: House_EP1
	{
		scope = 2;
		model = "\ca\Structures_E\Misc\Misc_Well\Misc_Well_C_EP1";
		vehicleClass = "Structures";
		displayName = "$STR_EP1_DN_Land_Misc_Well_C";
	};
};
//};

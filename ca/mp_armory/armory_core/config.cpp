////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:11:09 2014 : Source 'file' date Fri Oct 31 06:11:09 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class mp_armory : armory_core\config.bin{
class CfgPatches
{
	class CA_MPA_Core
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {};
	};
};
class CfgVehicles
{
	class Logic;
	class ArmoryManager: Logic
	{
		displayName = "$STR_EP1_MPA_ARMORYMANAGER";
		vehicleClass = "Modules";
		class Eventhandlers
		{
			init = "private [""_ok""]; _ok = (_this select 0) execVM ""ca\mp_armory\armory_core\data\scripts\init.sqf""";
		};
	};
};
//};

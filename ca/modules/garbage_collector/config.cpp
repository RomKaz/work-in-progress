////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:04:58 2014 : Source 'file' date Fri Oct 31 06:04:58 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class modules : garbage_collector\config.bin{
class CfgPatches
{
	class CA_Missions_GarbageCollector
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgVehicles
{
	class Logic;
	class GarbageCollector: Logic
	{
		displayName = "$STR_GC_NAME";
		icon = "\ca\ui\data\icon_gc_ca";
		picture = "\ca\ui\data\icon_gc_ca";
		vehicleClass = "Modules";
		class Eventhandlers
		{
			init = "private [""_ok""]; _ok = (_this select 0) execVM ""ca\modules\garbage_collector\data\scripts\init.sqf""";
		};
	};
};
//};

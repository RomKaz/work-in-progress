////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:04:57 2014 : Source 'file' date Fri Oct 31 06:04:57 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class modules : ambient_combat\config.bin{
class CfgPatches
{
	class CA_Missions_AmbientCombat
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
	class AmbientCombatManager: Logic
	{
		displayName = "$STR_ACM_MANAGER";
		icon = "\ca\ui\data\icon_acm_ca";
		picture = "\ca\ui\data\icon_acm_ca";
		vehicleClass = "Modules";
		class Eventhandlers
		{
			init = "private [""_ok""]; _ok = (_this select 0) execVM ""ca\modules\ambient_combat\data\scripts\init.sqf""";
		};
	};
};
//};

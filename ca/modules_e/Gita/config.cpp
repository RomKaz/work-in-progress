////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:11:08 2014 : Source 'file' date Fri Oct 31 06:11:08 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class modules_e : Gita\config.bin{
class CfgPatches
{
	class CA_Modules_E_Gita
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
	class GitaManager: Logic
	{
		displayName = "$STR_EP1_config.cppCfgVehicles_GitaManager0";
		icon = "\ca\ui\data\icon_Town_ca.paa";
		picture = "\ca\ui\data\icon_Town_ca.paa";
		vehicleClass = "Modules";
		class Eventhandlers
		{
			init = "if (isServer) then {private [""_ok""];_ok = _this execVM ""ca\modules_e\gita\data\scripts\main.sqf""}; if (isnil 'RE') then {private [""_ok""]; _ok = [] execVM '\ca\Modules\MP\data\scripts\MPframework.sqf'};";
		};
	};
};
class cfgFunctions
{
	class BIS_GITA
	{
		class Default
		{
			file = "ca\modules_e\gita\data\scripts";
			class createMarkers
			{
				description = "Marks all buildings in given town to map.";
			};
		};
	};
};
//};

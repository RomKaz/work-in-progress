////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:04:58 2014 : Source 'file' date Fri Oct 31 06:04:58 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class modules : HC\config.bin{
class CfgPatches
{
	class CA_HighCommand
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
	class HighCommand: Logic
	{
		displayName = "$STR_HC_COMMANDER";
		icon = "\ca\ui\data\icon_HC_ca.paa";
		picture = "\ca\ui\data\icon_HC_ca.paa";
		vehicleClass = "Modules";
		class Eventhandlers
		{
			init = "if (isServer) then {if (isnil 'BIS_HC_mainscope') then {BIS_HC_mainscope = _this select 0; publicvariable 'bis_hc_mainscope'}; _ok = _this execVM '\ca\Modules\HC\data\scripts\hc.sqf'}; if (isnil 'RE') then {private [""_ok""]; _ok = [] execVM '\ca\Modules\MP\data\scripts\MPframework.sqf'}";
		};
	};
	class HighCommandSubordinate: HighCommand
	{
		displayName = "$STR_HC_SUBORDINATE";
		icon = "\ca\ui\data\icon_HC_sub_ca.paa";
		picture = "\ca\ui\data\icon_HC_sub_ca.paa";
		vehicleClass = "Modules";
		class Eventhandlers
		{
			init = "";
		};
	};
};
//};

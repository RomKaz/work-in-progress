////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:04:58 2014 : Source 'file' date Fri Oct 31 06:04:58 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class modules : Marta\config.bin{
class CfgPatches
{
	class CA_Modules_Marta
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
	class MartaManager: Logic
	{
		displayName = "$STR_MARTA_NAME";
		icon = "\ca\ui\data\icon_MARTA_ca.paa";
		picture = "\ca\ui\data\icon_MARTA_ca.paa";
		vehicleClass = "Modules";
		class Eventhandlers
		{
			init = "if (isnil 'BIS_marta_mainscope') then {BIS_marta_mainscope = _this select 0; if (isServer) then {private [""_ok""];_ok = _this execVM ""ca\modules\marta\data\scripts\main.sqf""}}; if (isnil 'RE') then {private [""_ok""]; _ok = [] execVM '\ca\Modules\MP\data\scripts\MPframework.sqf'};";
		};
	};
};
//};

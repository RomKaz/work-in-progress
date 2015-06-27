////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:04:58 2014 : Source 'file' date Fri Oct 31 06:04:58 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class modules : UAV\config.bin{
class CfgPatches
{
	class CA_Modules_UAV
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
	class UAVManager: Logic
	{
		displayName = "$STR_UAV_NAME";
		vehicleClass = "Modules";
		icon = "\ca\ui\data\icon_UAV_ca.paa";
		picture = "\ca\ui\data\icon_UAV_ca.paa";
		class Eventhandlers
		{
			init = "if (isServer) then {private [""_ok""];_ok = _this execVM ""ca\modules\uav\data\scripts\uav.sqf""};";
		};
	};
};
//};

////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:11:08 2014 : Source 'file' date Fri Oct 31 06:11:08 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class modules_e : UAV\config.bin{
class CfgPatches
{
	class CA_Modules_E_UAV
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.04;
		requiredAddons[] = {"CA_Modules_E"};
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
			init = "if (isServer) then {private [""_ok""];_ok = _this execVM ""ca\modules_e\uav\data\scripts\uav.sqf""};";
		};
	};
};
//};

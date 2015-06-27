////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:11:08 2014 : Source 'file' date Fri Oct 31 06:11:08 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class modules_e : UAV_Heli\config.bin{
class CfgPatches
{
	class CA_Modules_E_UAV_Heli
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
	class UAV_HeliManager: Logic
	{
		displayName = "$STR_EP1_ULB_action";
		vehicleClass = "Modules";
		icon = "\ca\ui\data\icon_ULB_ca.paa";
		picture = "\ca\ui\data\icon_ULB_ca.paa";
		class Eventhandlers
		{
			init = "if (isServer) then {private [""_ok""];_ok = _this execVM ""ca\modules_e\uav_heli\data\scripts\uav.sqf""};";
		};
	};
};
//};

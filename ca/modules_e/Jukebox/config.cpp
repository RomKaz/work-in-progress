////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:11:08 2014 : Source 'file' date Fri Oct 31 06:11:08 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class modules_e : Jukebox\config.bin{
class CfgPatches
{
	class CA_Modules_E_Jukebox
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
	class JukeboxManager: Logic
	{
		displayName = "$STR_EP1_config.cppCfgVehicles_JukeboxManager0";
		icon = "\ca\ui\data\icon_Jukebox_ca.paa";
		picture = "\ca\ui\data\icon_Jukebox_ca.paa";
		vehicleClass = "Modules";
		class Eventhandlers
		{
			init = "_ok = _this execVM ""ca\modules_e\jukebox\data\scripts\jukebox.sqf"";";
		};
	};
};
//};

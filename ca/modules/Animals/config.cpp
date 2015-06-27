////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:04:57 2014 : Source 'file' date Fri Oct 31 06:04:57 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class modules : Animals\config.bin{
class CfgPatches
{
	class CA_Modules_Animals
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
	class BIS_animals_Logic: Logic
	{
		displayName = "$STR_animals_module";
		icon = "\ca\ui\data\icon_animals_ca.paa";
		picture = "\ca\ui\data\icon_animals_ca.paa";
		vehicleClass = "Modules";
		class Eventhandlers
		{
			init = "_this execVM '\CA\Modules\Animals\Data\scripts\init.sqf';";
		};
	};
};
//};

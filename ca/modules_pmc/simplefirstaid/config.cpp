////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:04:59 2014 : Source 'file' date Fri Oct 31 06:04:59 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class MODULES_PMC : simplefirstaid\config.bin{
class CfgPatches
{
	class CA_Modules_PMC_SimpleFIrstAid
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
	class SimpleFirstAid: Logic
	{
		displayName = "$STR_pmc_SFA_name";
		icon = "\ca\ui\data\icon_famisc_ca.paa";
		picture = "\ca\ui\data\icon_famisc_ca.paa";
		vehicleClass = "Modules";
		class Eventhandlers
		{
			init = "_nil = _this execVM '\ca\Modules_PMC\SimpleFIrstAid\data\scripts\init.sqf';";
		};
	};
};
//};

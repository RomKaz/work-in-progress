////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:04:58 2014 : Source 'file' date Fri Oct 31 06:04:58 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class modules : BC\config.bin{
class CfgPatches
{
	class CA_Missions_BattlefieldClearance
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
	class BattleFieldClearance: Logic
	{
		displayName = "$STR_BC_NAME";
		icon = "\ca\ui\data\icon_famisc_ca.paa";
		picture = "\ca\ui\data\icon_famisc_ca.paa";
		vehicleClass = "Modules";
		class Eventhandlers
		{
			init = "[] call (compile (preprocessFileLineNumbers (""\ca\Modules\MP\data\scripts\MPframework.sqf""))); _ok = _this execVM ""\ca\Modules\BC\data\scripts\BCserverStartUsingLogic.sqf""";
		};
	};
};
//};

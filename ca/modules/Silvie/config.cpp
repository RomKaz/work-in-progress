////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:04:58 2014 : Source 'file' date Fri Oct 31 06:04:58 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class modules : Silvie\config.bin{
class CfgPatches
{
	class CA_Modules_Silvie
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
	class SilvieManager: Logic
	{
		displayName = "$STR_SILVIE_NAME";
		icon = "\ca\ui\data\icon_SILVIE_ca.paa";
		picture = "\ca\ui\data\icon_SILVIE_ca.paa";
		vehicleClass = "Modules";
		class Eventhandlers
		{
			init = "if (isnil 'BIS_silvie_mainscope') then {BIS_silvie_mainscope = _this select 0; if (isServer) then {private [""_ok""];_ok = _this execVM ""ca\modules\silvie\data\scripts\main.sqf""};};";
		};
	};
};
class CfgSounds
{
	class SILVIE_carradio
	{
		sound[] = {"\ca\Music\Track27_Eastern_Eggs_-_Killing_Machines.ogg",0.063095726,1};
		titles[] = {};
	};
};
//};

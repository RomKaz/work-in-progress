////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:04:58 2014 : Source 'file' date Fri Oct 31 06:04:58 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class modules : Zora\config.bin{
class CfgPatches
{
	class CA_Modules_ZoRA
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
	class ZoraManager: Logic
	{
		displayName = "$STR_ZORA_NAME";
		icon = "\ca\ui\data\icon_ZORA_ca.paa";
		picture = "\ca\ui\data\icon_ZORA_ca.paa";
		vehicleClass = "Modules";
		class Eventhandlers
		{
			init = "if (isnil 'BIS_Zora_mainscope') then {BIS_Zora_MainScope = _this select 0; if (isServer) then {private [""_ok""];_ok = _this execVM ""ca\modules\zora\data\scripts\main.sqf""};};";
		};
	};
};
class CfgSounds
{
	class Zora_AK74
	{
		scope = 2;
		name = "ZoRA - AK74";
		sound[] = {"\ca\Weapons\data\Sound\AK74_2.wss",0.3,1.0};
		titles[] = {};
	};
	class Zora_M16
	{
		scope = 2;
		name = "ZoRA - M16";
		sound[] = {"\ca\weapons\data\Sound\M16_2_SS.wss",0.3,1.0};
		titles[] = {};
	};
	class Zora_Missile
	{
		scope = 2;
		name = "ZoRA - Missile";
		sound[] = {"\ca\Weapons\Data\Sound\RocketLauncher_Shot04_A",0.3,1.0};
		titles[] = {};
	};
};
//};

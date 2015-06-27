////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:11:08 2014 : Source 'file' date Fri Oct 31 06:11:08 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class modules_e : Weather\config.bin{
class CfgPatches
{
	class CA_Modules_E_Weather
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"ca_modules"};
	};
};
class CfgVehicles
{
	class Logic;
	class WeatherPostprocessManager: Logic
	{
		displayName = "$STR_EP1_config.cppCfgVehicles_WeatherPostprocessManager0";
		icon = "\ca\ui\data\icon_weather_ca.paa";
		picture = "\ca\ui\data\icon_weather_ca.paa";
		vehicleClass = "Modules";
		class Eventhandlers
		{
			init = "if (isnil 'BIS_WeatherPostprocess_logic') then {BIS_WeatherPostprocess_logic = _this select 0; if (isServer) then {private [""_ok""];_ok = _this execVM ""ca\modules_e\weather\data\scripts\main.sqf""}; if (isnil 'RE') then {private [""_ok""]; _ok = [] execVM '\ca\Modules\MP\data\scripts\MPframework.sqf'};};";
		};
	};
	class WeatherParticlesManager: Logic
	{
		displayName = "$STR_EP1_config.cppCfgVehicles_WeatherParticlesManager0";
		icon = "\ca\ui\data\icon_weather_ca.paa";
		picture = "\ca\ui\data\icon_weather_ca.paa";
		vehicleClass = "Modules";
		class Eventhandlers
		{
			init = "if (isnil 'BIS_WeatherParticles_logic') then {BIS_WeatherParticles_logic = _this select 0; if (isServer) then {private [""_ok""];_ok = _this execVM ""ca\modules_e\weather\data\scripts\main.sqf""}; if (isnil 'RE') then {private [""_ok""]; _ok = [] execVM '\ca\Modules\MP\data\scripts\MPframework.sqf'};};";
		};
	};
};
//};

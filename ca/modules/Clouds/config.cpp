////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:04:58 2014 : Source 'file' date Fri Oct 31 06:04:58 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class modules : Clouds\config.bin{
class CfgPatches
{
	class CA_Modules_clouds
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
	class BIS_clouds_Logic: Logic
	{
		displayName = "$STR_clouds_module";
		icon = "\ca\ui\data\icon_weather_ca.paa";
		picture = "\ca\ui\data\icon_weather_ca.paa";
		vehicleClass = "Modules";
		class Eventhandlers
		{
			init = "_this exec '\ca\modules\Clouds\data\scripts\BIS_CloudSystem.sqs'";
		};
	};
};
//};

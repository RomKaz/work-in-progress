////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:04:58 2014 : Source 'file' date Fri Oct 31 06:04:58 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class modules : config.bin{
class CfgPatches
{
	class CA_Modules
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAData"};
	};
};
class CfgVehicles
{
	class Logic;
	class BIS_Effect_FilmGrain: Logic
	{
		displayName = "Effect: Film Grain";
		icon = "\ca\ui\data\icon_effects_ca.paa";
		picture = "\ca\ui\data\icon_effects_ca.paa";
		vehicleClass = "Modules";
		class Eventhandlers
		{
			init = """filmGrain"" ppEffectEnable true;   ""filmGrain"" ppEffectAdjust [0.03, 1, 1, 0.1, 1, false];  ""filmGrain"" ppEffectCommit 0;   ";
		};
	};
	class BIS_Effect_Day: Logic
	{
		displayName = "Effect: Movie Day";
		icon = "\ca\ui\data\icon_effects_ca.paa";
		picture = "\ca\ui\data\icon_effects_ca.paa";
		vehicleClass = "Modules";
		class Eventhandlers
		{
			init = """colorCorrections"" ppEffectAdjust [1, 1.02, -0.005, [0.0, 0.0, 0.0, 0.0], [1, 0.8, 0.6, 0.65],  [0.199, 0.587, 0.114, 0.0]];   ""colorCorrections"" ppEffectCommit 0;      ""colorCorrections"" ppEffectEnable true";
		};
	};
	class BIS_Effect_MovieNight: Logic
	{
		displayName = "Effect: Movie Night";
		icon = "\ca\ui\data\icon_effects_ca.paa";
		picture = "\ca\ui\data\icon_effects_ca.paa";
		vehicleClass = "Modules";
		class Eventhandlers
		{
			init = """colorCorrections"" ppEffectAdjust [1, 1.15, 0, [0.0, 0.0, 0.0, 0.0], [0.5, 0.8, 1, 0.5],  [0.199, 0.587, 0.114, 0.0]];   ""colorCorrections"" ppEffectCommit 0; ""colorCorrections"" ppEffectEnable true;";
		};
	};
	class BIS_Effect_Sepia: Logic
	{
		displayName = "Effect: Sepia";
		icon = "\ca\ui\data\icon_effects_ca.paa";
		picture = "\ca\ui\data\icon_effects_ca.paa";
		vehicleClass = "Modules";
		class Eventhandlers
		{
			init = """colorCorrections"" ppEffectAdjust [1, 1.06, -0.01, [0.0, 0.0, 0.0, 0.0], [0.44, 0.26, 0.078, 0],  [0.199, 0.587, 0.114, 0.0]];   ""colorCorrections"" ppEffectCommit 0; ""colorCorrections"" ppEffectEnable true;";
		};
	};
};
//};

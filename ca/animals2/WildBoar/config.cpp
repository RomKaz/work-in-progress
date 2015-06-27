////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:00:49 2014 : Source 'file' date Fri Oct 31 06:00:49 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class animals2 : WildBoar\config.bin{
class CfgPatches
{
	class CA_Animals2_WildBoar
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CA_Animals2","CA_Animals2_Anim_Config"};
	};
};
class CfgVehicles
{
	class CAAnimalBase;
	class WildBoar: CAAnimalBase
	{
		scope = 2;
		model = "\ca\animals2\WildBoar\WildBoar";
		displayName = "$STR_DN_WILDBOAR";
		moves = "CfgMovesWildBoar";
		wildAnimal = 1;
		humansDetectionRadius = 100;
		runDistanceMax = 10;
		minIdleTime = 10;
		maxIdleTime = 20;
		favouritezones = "(forest) * (1 - houses) * (1 - meadow) * (1 - sea)";
		class VariablesString
		{
			_sound1 = "";
			_sound2 = "";
			_sound3 = "";
		};
	};
};
//};

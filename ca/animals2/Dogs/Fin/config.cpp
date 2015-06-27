////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:00:48 2014 : Source 'file' date Fri Oct 31 06:00:48 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class animals2 : Dogs\Fin\config.bin{
class CfgPatches
{
	class CA_Animals2_Dogs_Fin
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CA_Animals2_Dogs","CA_Animals2_Anim_Config"};
	};
};
class CfgVehicles
{
	class CAAnimalBase;
	class Fin: CAAnimalBase
	{
		scope = 2;
		model = "\ca\animals2\Dogs\Fin\Fin";
		displayName = "$STR_DN_DOG_FIN";
		moves = "CfgMovesDog";
		wildAnimal = 0;
		humansDetectionRadius = 2;
		runDistanceMax = 10;
		minIdleTime = 10;
		maxIdleTime = 20;
		favouritezones = "(meadow) * (1 - forest) * (houses) * (1 - sea)";
		class VariablesString
		{
			_sound1 = "dog_01";
			_sound2 = "dog_02";
			_sound3 = "";
		};
	};
};
//};

////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:00:48 2014 : Source 'file' date Fri Oct 31 06:00:48 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class animals2 : Goat\config.bin{
class CfgPatches
{
	class CA_Animals2_Goat
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
	class Goat: CAAnimalBase
	{
		scope = 2;
		model = "\ca\animals2\Goat\Goat";
		displayName = "$STR_DN_GOAT";
		moves = "CfgMovesGoat";
		wildAnimal = 0;
		humansDetectionRadius = 2;
		runDistanceMax = 10;
		minIdleTime = 10;
		maxIdleTime = 15;
		favouritezones = "(meadow) * (1 - forest) * (1 - houses) * (1 - sea)";
		class VariablesString
		{
			_sound1 = "goat_01";
			_sound2 = "goat_02";
			_sound3 = "goat_03";
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\animals2\Goat\data\goat.rvmat","ca\animals2\Goat\data\W1_goat.rvmat","ca\animals2\Goat\data\W2_goat.rvmat"};
		};
	};
};
//};

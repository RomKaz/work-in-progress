////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:00:48 2014 : Source 'file' date Fri Oct 31 06:00:48 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class animals2 : Birds\chicken\config.bin{
class CfgPatches
{
	class CA_Animals2_Chicken
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
	class Hen: CAAnimalBase
	{
		scope = 2;
		model = "\ca\animals2\Birds\chicken\hen";
		displayName = "$STR_DN_HEN";
		moves = "CfgMovesHen";
		wildAnimal = 0;
		humansDetectionRadius = 5;
		runDistanceMax = 10;
		minIdleTime = 2;
		maxIdleTime = 5;
		favouritezones = "(houses) * (1 - forest) * (1 - meadow) * (1 - sea)";
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\animals2\Birds\chicken\data\hen.rvmat","ca\animals2\Birds\chicken\data\W1_hen.rvmat","ca\animals2\Birds\chicken\data\W2_hen.rvmat"};
		};
		class VariablesString
		{
			_sound1 = "chicken01";
			_sound2 = "chicken02";
			_sound3 = "chicken01";
		};
	};
	class Cock: Hen
	{
		scope = 2;
		model = "\ca\animals2\Birds\chicken\Cock";
		displayName = "$STR_DN_COCK";
		moves = "CfgMovesCock";
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\animals2\Birds\chicken\data\cock.rvmat","ca\animals2\Birds\chicken\data\W1_cock.rvmat","ca\animals2\Birds\chicken\data\W2_cock.rvmat"};
		};
	};
};
//};

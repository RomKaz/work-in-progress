////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:00:49 2014 : Source 'file' date Fri Oct 31 06:00:49 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class animals2 : Sheep\config.bin{
class CfgPatches
{
	class CA_Animals2_Sheep
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
	class Sheep: CAAnimalBase
	{
		scope = 2;
		model = "\ca\animals2\Sheep\Sheep";
		displayName = "$STR_DN_SHEEP";
		moves = "CfgMovesSheep";
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\animals2\sheep\data\sheep.rvmat","ca\animals2\sheep\data\W1_sheep.rvmat","ca\animals2\sheep\data\W2_sheep.rvmat"};
		};
		wildAnimal = 0;
		humansDetectionRadius = 2;
		runDistanceMax = 10;
		minIdleTime = 15;
		maxIdleTime = 20;
		idleSpecialAnim = "Sheep_Eat";
		favouritezones = "(meadow) * (1 - forest) * (1 - houses) * (1 - sea)";
		class VariablesString
		{
			_sound1 = "sheep_01";
			_sound2 = "sheep_02";
			_sound3 = "sheep_03";
		};
	};
};
class CfgSounds
{
	class Sheep_Danger
	{
		sound[] = {"\ca\animals2\sheep\data\sound\danger.wss",1,1};
		titles[] = {"Sheep - danger."};
	};
	class Sheep_IdleComm
	{
		sound[] = {"\ca\animals2\sheep\data\sound\idleComm",1,1};
		titles[] = {"Sheep - idle communication."};
	};
};
//};

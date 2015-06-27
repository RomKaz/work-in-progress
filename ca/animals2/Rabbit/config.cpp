////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:00:49 2014 : Source 'file' date Fri Oct 31 06:00:49 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class animals2 : Rabbit\config.bin{
class CfgPatches
{
	class CA_Animals2_Rabbit
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
	class Rabbit: CAAnimalBase
	{
		scope = 2;
		side = 3;
		model = "\ca\animals2\rabbit\rabbit";
		displayName = "$STR_DN_RABBIT";
		moves = "CfgMovesRabbit";
		fsmFormation = "";
		fsmDanger = "";
		maxTurnAngularVelocity = 30;
		costTurnCoef = 1e-005;
		boneHead = "head";
		bonePrimaryWeapon = "head";
		weaponBone = "head";
		triggerAnim = "";
		wildAnimal = 1;
		humansDetectionRadius = 50;
		runDistanceMax = 10;
		minIdleTime = 5;
		maxIdleTime = 10;
		favouritezones = "(meadow) * (forest) * (1 - houses) * (1 - sea)";
		class VariablesString
		{
			_sound1 = "";
			_sound2 = "";
			_sound3 = "";
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"Ca\animals2\Rabbit\data\Rabbit.rvmat","Ca\animals2\Rabbit\data\W1_Rabbit.rvmat","Ca\animals2\Rabbit\data\W2_Rabbit.rvmat"};
		};
	};
};
//};

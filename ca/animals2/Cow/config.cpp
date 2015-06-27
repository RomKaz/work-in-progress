////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:00:48 2014 : Source 'file' date Fri Oct 31 06:00:48 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class animals2 : Cow\config.bin{
class CfgPatches
{
	class CA_Animals2_Cow
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
	class Cow: CAAnimalBase
	{
		scope = 0;
		model = "\ca\animals2\cow\cow";
		displayName = "$STR_DN_COW";
		moves = "CfgMovesCow";
		maxTurnAngularVelocity = 30;
		costTurnCoef = 1e-005;
		boneHead = "head";
		bonePrimaryWeapon = "head";
		weaponBone = "head";
		triggerAnim = "";
		wildAnimal = 0;
		humansDetectionRadius = 2;
		runDistanceMax = 10;
		minIdleTime = 20;
		maxIdleTime = 40;
		idleSpecialAnim = "";
		favouritezones = "(meadow) * (1 - forest) * (1 - houses) * (1 - sea)";
		extCameraPosition[] = {0,0.75,-3.0};
		hiddenSelections[] = {"Camo"};
		class VariablesString
		{
			_sound1 = "cow_01";
			_sound2 = "cow_02";
			_sound3 = "cow_03";
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"Ca\animals2\Cow\data\Cow.rvmat","Ca\animals2\Cow\data\W1_Cow.rvmat","Ca\animals2\Cow\data\W2_Cow.rvmat"};
		};
	};
	class Cow01: Cow
	{
		scope = 2;
		accuracy = 1000;
		model = "\ca\animals2\cow\cow";
		displayName = "$STR_DN_COW01";
		hiddenSelectionsTextures[] = {"ca\animals2\cow\data\cow_co.PAA"};
	};
	class Cow02: Cow01
	{
		displayName = "$STR_DN_COW02";
		hiddenSelectionsTextures[] = {"ca\animals2\cow\data\cow2_co.PAA"};
	};
	class Cow03: Cow01
	{
		displayName = "$STR_DN_COW03";
		hiddenSelectionsTextures[] = {"ca\animals2\cow\data\cow3_co.PAA"};
	};
	class Cow04: Cow01
	{
		displayName = "$STR_DN_COW04";
		hiddenSelectionsTextures[] = {"ca\animals2\cow\data\cow4_co.PAA"};
	};
};
//};

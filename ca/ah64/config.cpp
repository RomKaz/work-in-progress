////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:00:38 2014 : Source 'file' date Fri Oct 31 06:00:38 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=8
enum {
	stabilizedinaxisx = 1,
	compartment1 = 1,
	stabilizedinaxisy = 2,
	compartment2 = 2,
	stabilizedinaxesboth = 3,
	compartment3 = 4,
	compartment4 = 8,
	stabilizedinaxesnone = 0
};

//Class ah64 : config.bin{
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		AH64_Pilot = "AH64_Pilot";
		AH64_Gunner = "AH64_Gunner";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class AH64_Dead: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\AH64\Data\Anims\KIA_AH64_pilot.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class Crew;
		class KIA_AH64_Pilot: DefaultDie
		{
			actions = "DeadActions";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			file = "\ca\AH64\Data\Anims\KIA_AH64_pilot.rtm";
			connectTo[] = {"DeadState",0.1};
		};
		class AH64_Pilot: Crew
		{
			file = "\ca\AH64\Data\Anims\AH64_Pilot.rtm";
			interpolateTo[] = {"KIA_AH64_pilot",1};
		};
		class KIA_AH64_Gunner: DefaultDie
		{
			actions = "DeadActions";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			file = "\ca\AH64\Data\Anims\KIA_AH64_gunner.rtm";
			connectTo[] = {"DeadState",0.1};
		};
		class AH64_Gunner: Crew
		{
			file = "\ca\AH64\Data\Anims\AH64_gunner.rtm";
			interpolateTo[] = {"KIA_AH64_gunner",1};
		};
	};
};
class CfgMovesWomen: CfgMovesBasic
{
	class ManActions
	{
		AH64_Pilot = "";
		AH64_Gunner = "";
	};
};
class CfgPatches
{
	class CA_AH64D
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.04;
		requiredAddons[] = {"CAAir"};
	};
};
//};

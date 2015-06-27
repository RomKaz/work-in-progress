////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:00:44 2014 : Source 'file' date Fri Oct 31 06:00:44 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=8
enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	destructno = 0,
	destructman = 5,
	destructbuilding = 1
};

//Class air3 : config.bin{
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		Su34_Pilot = "Su34_Pilot";
		Su34_Gunner = "Su34_Gunner";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Su34_Dead: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\air3\SU34\DATA\Anim\KIA_Su34_Pilot.rtm";
			speed = 1e+010;
			terminal = 0;
			soundEnabled = 1;
			connectTo[] = {"DeadState",1};
		};
		class Crew;
		class Su34_Pilot: Crew
		{
			file = "\ca\air3\SU34\Data\anim\Su34_Pilot.rtm";
			connectTo[] = {"Su34_Dead",1};
		};
		class Su34_Gunner: Crew
		{
			file = "\ca\air3\SU34\Data\anim\Su34_Pilot.rtm";
			connectTo[] = {"Su34_Dead",1};
		};
	};
};
class CfgMovesWomen: CfgMovesBasic
{
	class ManActions
	{
		Su34_Pilot = "";
		Su34_Gunner = "";
	};
};
class CfgPatches
{
	class CAAir3
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAAir"};
	};
};
//};

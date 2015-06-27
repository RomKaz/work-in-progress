////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:07:15 2014 : Source 'file' date Fri Oct 31 06:07:15 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=4
enum {
	stabilizedinaxisx = 1,
	stabilizedinaxisy = 2,
	stabilizedinaxesboth = 3,
	stabilizedinaxesnone = 0
};

//Class wheeled2 : MMT\config.bin{
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		MMT_Driver = "MMT_Driver";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class MMT_Dead: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\wheeled2\MMT\DATA\anim\MMT_Driver.rtm";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
		};
		class Crew;
		class MMT_Driver: Crew
		{
			file = "\ca\wheeled2\MMT\DATA\anim\MMT_Driver.rtm";
			connectTo[] = {"MMT_Dead",1};
			speed = 2;
			looped = 1;
		};
	};
};
class CfgMovesWomen: CfgMovesBasic
{
	class ManActions
	{
		MMT_Driver = "";
	};
};
class CfgPatches
{
	class CAWheeled2_MMT
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.04;
		requiredAddons[] = {"CAWheeled2"};
	};
};
class NoDust{};
//};

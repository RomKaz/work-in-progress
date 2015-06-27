////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:06:26 2014 : Source 'file' date Fri Oct 31 06:06:26 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class tracked2 : T90\config.bin{
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		T90_Driver = "T90_Driver";
		T90_Gunner = "T90_Gunner";
		T90_Commander = "T90_Commander";
		T90_DriverOUT = "T90_DriverOUT";
		T90_GunnerOUT = "T90_GunnerOUT";
		T90_CommanderOUT = "T90_CommanderOUT";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class KIA_T90_Driver: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\tracked\Data\Anim\KIA_T72_Driver";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class T90_Driver: Crew
		{
			file = "\ca\tracked\Data\Anim\T72_Driver.rtm";
			interpolateTo[] = {"KIA_T90_Driver",1};
		};
		class KIA_T90_Gunner: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\tracked\Data\Anim\KIA_T72_Gunner.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class T90_Gunner: Crew
		{
			file = "\ca\tracked\Data\Anim\T72_Gunner.rtm";
			interpolateTo[] = {"KIA_T90_Gunner",1};
		};
		class KIA_T90_Commander: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\tracked\Data\Anim\KIA_T72_Commander.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class T90_Commander: Crew
		{
			file = "\ca\tracked\Data\Anim\T72_Commander.rtm";
			interpolateTo[] = {"KIA_T90_Commander",1};
		};
		class KIA_T90_DriverOUT: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\tracked\Data\Anim\KIA_T72_Driver.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class T90_DriverOUT: Crew
		{
			file = "\ca\tracked\Data\Anim\T72_DriverOut";
			interpolateTo[] = {"KIA_T90_DriverOUT",1};
		};
		class KIA_T90_GunnerOUT: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\tracked2\T90\DATA\anim\KIA_T90_GunnerOUT.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class T90_GunnerOUT: Crew
		{
			file = "\ca\tracked2\T90\DATA\anim\T90_GunnerOUT.rtm";
			interpolateTo[] = {"KIA_T90_GunnerOUT",1};
		};
		class KIA_T90_CommanderOUT: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\tracked2\T90\DATA\anim\KIA_T90_CommanderOUT.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class T90_CommanderOUT: Crew
		{
			file = "\ca\tracked2\T90\DATA\anim\T90_CommanderOUT.rtm";
			interpolateTo[] = {"KIA_T90_CommanderOUT",1};
		};
	};
};
class CfgMovesWomen: CfgMovesBasic
{
	class ManActions
	{
		T90_Driver = "";
		T90_Gunner = "";
		T90_Commander = "";
		T90_DriverOUT = "";
		T90_GunnerOUT = "";
		T90_CommanderOUT = "";
	};
};
class CfgPatches
{
	class CATracked2_T90
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {"CATracked2","CAWeapons","CACharacters2"};
	};
};
//};

////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:06:26 2014 : Source 'file' date Fri Oct 31 06:06:26 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class tracked2 : BMP3\config.bin{
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		BMP3_Driver = "BMP3_Driver";
		BMP3_Gunner = "BMP3_Gunner";
		BMP3_Gunner02 = "BMP3_Gunner02";
		BMP3_Gunner03 = "BMP3_Gunner03";
		BMP3_Commander = "BMP3_Commander";
		BMP3_Driver_OUT = "BMP3_Driver_OUT";
		BMP3_Gunner_OUT = "BMP3_Gunner_OUT";
		BMP3_Commander_OUT = "BMP3_Commander_OUT";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class KIA_BMP3_Driver: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\tracked2\BMP3\DATA\anim\KIA_bmp3_driver.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class BMP3_Driver: Crew
		{
			file = "\ca\tracked2\BMP3\DATA\anim\bmp3_driver.rtm";
			interpolateTo[] = {"KIA_BMP3_Driver",1};
		};
		class KIA_BMP3_Gunner: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\tracked2\BMP3\DATA\anim\KIA_bmp3_gunner.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class BMP3_Gunner: Crew
		{
			file = "\ca\tracked2\BMP3\DATA\anim\bmp3_gunner.rtm";
			interpolateTo[] = {"KIA_BMP3_Gunner",1};
		};
		class KIA_BMP3_Gunner02: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\tracked2\BMP3\DATA\anim\KIA_bmp3_gunner02.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class BMP3_Gunner02: Crew
		{
			file = "\ca\tracked2\BMP3\DATA\anim\bmp3_gunner02.rtm";
			interpolateTo[] = {"KIA_BMP3_Gunner02",1};
		};
		class KIA_BMP3_Gunner03: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\tracked2\BMP3\DATA\anim\KIA_bmp3_gunner03.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class BMP3_Gunner03: Crew
		{
			file = "\ca\tracked2\BMP3\DATA\anim\bmp3_gunner03.rtm";
			interpolateTo[] = {"KIA_BMP3_Gunner02",1};
		};
		class KIA_BMP3_Commander: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\tracked2\BMP3\DATA\anim\KIA_bmp3_commander.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class BMP3_Commander: Crew
		{
			file = "\ca\tracked2\BMP3\DATA\anim\bmp3_commander.rtm";
			interpolateTo[] = {"KIA_BMP3_Commander",1};
		};
		class KIA_BMP3_Driver_OUT: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\tracked2\BMP3\DATA\anim\KIA_bmp3_driver_out.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class BMP3_Driver_OUT: Crew
		{
			file = "\ca\tracked2\BMP3\DATA\anim\BMP3_driver_out.rtm";
			interpolateTo[] = {"KIA_BMP3_Driver_OUT",1};
		};
		class KIA_BMP3_Gunner_OUT: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\tracked2\BMP3\DATA\anim\KIA_bmp3_gunner_out.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class BMP3_Gunner_OUT: Crew
		{
			file = "\ca\tracked2\BMP3\DATA\anim\bmp3_gunner_out.rtm";
			interpolateTo[] = {"KIA_BMP3_Gunner_OUT",1};
		};
		class KIA_BMP3_Commander_OUT: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\tracked2\BMP3\DATA\anim\KIA_bmp3_commander_out.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class BMP3_Commander_OUT: Crew
		{
			file = "\ca\tracked2\BMP3\DATA\anim\bmp3_commander_out.rtm";
			interpolateTo[] = {"KIA_BMP3_Commander_OUT",1};
		};
	};
};
class CfgMovesWomen: CfgMovesBasic
{
	class ManActions
	{
		BMP3_Driver = "";
		BMP3_Gunner = "";
		BMP3_Gunner02 = "";
		BMP3_Gunner03 = "";
		BMP3_Commander = "";
		BMP3_Driver_OUT = "";
		BMP3_Gunner_OUT = "";
		BMP3_Commander_OUT = "";
	};
};
class CfgPatches
{
	class CATracked2_BMP3
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {"CATracked2","CAWeapons","CACharacters2"};
	};
};
//};

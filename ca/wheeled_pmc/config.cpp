////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:07:21 2014 : Source 'file' date Fri Oct 31 06:07:21 2014
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

//Class WHEELED_PMC : config.bin{
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		ArmoredSUV_Gunner_PMC = "ArmoredSUV_Gunner_PMC";
		ArmoredSUV_GunnerIn_PMC = "ArmoredSUV_GunnerIn_PMC";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class ArmoredSUV_Gunner_PMC: Crew
		{
			file = "\Ca\Wheeled_PMC\ArmoredSUV\data\Anim\SUVmatildaTurnOutPose.rtm";
			interpolateTo[] = {"ArmoredSUV_KIA_Gunner_PMC",1};
			speed = 1e+010;
		};
		class ArmoredSUV_GunnerIn_PMC: ArmoredSUV_Gunner_PMC
		{
			file = "\Ca\Wheeled_PMC\ArmoredSUV\data\Anim\SUVmatildaTurnInPose.rtm";
		};
		class ArmoredSUV_KIA_Gunner_PMC: DefaultDie
		{
			actions = "DeadActions";
			file = "\Ca\Wheeled_PMC\ArmoredSUV\data\Anim\SUVmatildaDeath.rtm";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class ArmoredSUV_GunnerTurnIn_PMC: Crew
		{
			file = "\Ca\Wheeled_PMC\ArmoredSUV\data\Anim\SUVmatildaTurnIn.rtm";
			interpolateTo[] = {"ArmoredSUV_KIA_Gunner_PMC",1};
			connectTo[] = {"ArmoredSUV_GunnerIn_PMC",0.1};
			speed = 0.5;
			looped = 0;
		};
		class ArmoredSUV_GunnerTurnOut_PMC: Crew
		{
			file = "\Ca\Wheeled_PMC\ArmoredSUV\data\Anim\SUVmatildaTurnOut.rtm";
			interpolateTo[] = {"ArmoredSUV_KIA_Gunner_PMC",1};
			connectTo[] = {"ArmoredSUV_Gunner_PMC",0.1};
			speed = 0.5;
			looped = 0;
		};
	};
};
class CfgMovesWomen: CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		ArmoredSUV_Gunner_PMC = "Crew";
	};
};
class CfgPatches
{
	class CAWheeled_PMC
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.54;
		requiredAddons[] = {"CA_PMC","CAWheeled_E"};
	};
};
class CfgVehicles
{
	class SUV_Base_EP1;
	class SUV_PMC: SUV_Base_EP1
	{
		expansion = 4;
		scope = 2;
		side = 2;
		faction = "PMC_BAF";
		crew = "Soldier_PMC";
		typicalCargo[] = {"Soldier_PMC","Soldier_PMC","Soldier_PMC","Soldier_PMC","Soldier_PMC"};
		transportMaxBackpacks = 5000;
		transportMaxWeapons = 5000;
		transportMaxMagazines = 20000;
		class Library
		{
			libTextDesc = "$STR_PMC_LIB_SUV";
		};
	};
};
//};

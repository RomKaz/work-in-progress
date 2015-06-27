////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:01:47 2014 : Source 'file' date Fri Oct 31 06:01:47 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class buildings2 : shed_wooden\config.bin{
class CfgPatches
{
	class Shed_wooden
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CABuildings2"};
	};
};
class CfgVehicles
{
	class HouseBase;
	class House: HouseBase
	{
		class DestructionEffects;
	};
	class Ruins;
	class Land_Shed_wooden: House
	{
		scope = 2;
		animated = 1;
		model = "\ca\buildings2\Shed_wooden\Shed_wooden";
		vehicleClass = "Misc";
		mapSize = 2;
		displayName = "$STR_MISC_SHED";
		armor = 20;
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\ca\buildings2\Shed_wooden\Shed_wooden_ruins";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		class AnimationSources
		{
			class dvere1
			{
				animPeriod = 1;
				initPhase = 0;
			};
		};
		class UserActions
		{
			class OpenDoors1
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "osa_dvere1";
				radius = 3;
				onlyForPlayer = "false";
				condition = "this animationPhase ""dvere1"" >= 0.5";
				statement = "this animate [""dvere1"", 0]";
			};
			class CloseDoors1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "osa_dvere1";
				radius = 3;
				onlyForPlayer = "false";
				condition = "this animationPhase ""dvere1"" < 0.5";
				statement = "this animate [""dvere1"", 1]";
			};
		};
		actionBegin1 = "OpenDoors1";
		actionEnd1 = "OpenDoors1";
	};
	class Land_Shed_wooden_ruins: Ruins
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\ca\buildings2\Shed_wooden\Shed_wooden_ruins";
	};
};
//};

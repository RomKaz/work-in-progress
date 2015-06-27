////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:06:16 2014 : Source 'file' date Fri Oct 31 06:06:16 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class structures : Wall\config.bin{
class CfgPatches
{
	class CAStructures_Wall
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAStructures"};
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
	class Land_Wall_Gate_Ind1_L: House
	{
		armor = 50;
		model = "\ca\structures\Wall\Wall_Gate_Ind1_L";
		destrType = "DestructTree";
		class AnimationSources
		{
			class DoorL
			{
				source = "User";
				animPeriod = 1;
				initPhase = 0;
			};
		};
		class UserActions
		{
			class OpenDoors
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "DoorL";
				radius = 10;
				onlyForPlayer = 0;
				condition = "this animationPhase ""DoorL"" < 0.5";
				statement = "this animate [""DoorL"", 1]";
			};
			class CloseDoors: OpenDoors
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				condition = "this animationPhase ""DoorL"" >= 0.5";
				statement = "this animate [""DoorL"", 0]";
			};
		};
		actionBegin1 = "OpenDoors";
		actionEnd1 = "OpenDoors";
	};
	class Land_Wall_Gate_Ind1_R: Land_Wall_Gate_Ind1_L
	{
		model = "\ca\structures\Wall\Wall_Gate_Ind1_R";
		class AnimationSources
		{
			class DoorR
			{
				source = "User";
				animPeriod = 1;
				initPhase = 0;
			};
		};
		class UserActions
		{
			class OpenDoors
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "DoorR";
				radius = 10;
				onlyForPlayer = 0;
				condition = "this animationPhase ""DoorR"" < 0.5";
				statement = "this animate [""DoorR"", 1]";
			};
			class CloseDoors: OpenDoors
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				condition = "this animationPhase ""DoorR"" >= 0.5";
				statement = "this animate [""DoorR"", 0]";
			};
		};
		actionBegin1 = "OpenDoors";
		actionEnd1 = "OpenDoors";
	};
	class Land_Wall_Gate_Ind2A_L: Land_Wall_Gate_Ind1_L
	{
		model = "\ca\structures\Wall\Wall_Gate_Ind2A_L";
	};
	class Land_Wall_Gate_Ind2A_R: Land_Wall_Gate_Ind1_R
	{
		model = "\ca\structures\Wall\Wall_Gate_Ind2A_R";
	};
	class Land_Wall_Gate_Ind2B_L: Land_Wall_Gate_Ind1_L
	{
		model = "\ca\structures\Wall\Wall_Gate_Ind2B_L";
	};
	class Land_Wall_Gate_Ind2B_R: Land_Wall_Gate_Ind1_R
	{
		model = "\ca\structures\Wall\Wall_Gate_Ind2B_R";
	};
};
//};

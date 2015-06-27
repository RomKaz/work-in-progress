////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:11:57 2014 : Source 'file' date Fri Oct 31 06:11:57 2014
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

//Class structures_e : Ind\Ind_Garage01\config.bin{
class CfgPatches
{
	class CAStructures_E_Ind_Ind_Garage01
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.03;
		requiredAddons[] = {"CAStructures_E_Ind"};
	};
};
class CfgVehicles
{
	class House;
	class House_EP1: House
	{
		class DestructionEffects;
	};
	class Ruins_EP1;
	class Land_Ind_Garage01_EP1: House_EP1
	{
		scope = 1;
		armor = 100;
		model = "\ca\Structures_E\Ind\Ind_Garage01\Ind_Garage01_ep1";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\ca\Structures_E\Ind\Ind_Garage01\Ind_Garage01_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		class HitPoints
		{
			class Hit1
			{
				armor = 0.2;
				material = -1;
				name = "dam 1";
				visual = "damT1";
				passThrough = 0;
				convexComponent = "dam 1";
				class DestructionEffects
				{
					class Dust
					{
						simulation = "particles";
						type = "HousePartDust";
						position = "";
						intensity = 1;
						interval = 1;
						lifeTime = 0.01;
					};
					class Dust2: Dust
					{
						type = "HousePartDustLong";
					};
					class Walls: Dust
					{
						type = "HousePartWall";
					};
				};
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\Structures_E\Ind\Ind_Garage01\data\ind_garage01_multi1_ep1.rvmat","ca\Structures_E\Ind\Ind_Garage01\data\destruct_half_ind_garage01_multi1_ep1.rvmat","ca\Structures_E\Ind\Ind_Garage01\data\destruct_full_ind_garage01_multi1_ep1.rvmat","ca\Structures_E\Ind\Ind_Garage01\data\ind_garage01_multi2_ep1.rvmat","ca\Structures_E\Ind\Ind_Garage01\data\destruct_half_ind_garage01_multi2_ep1.rvmat","ca\Structures_E\Ind\Ind_Garage01\data\destruct_full_ind_garage01_multi2_ep1.rvmat"};
		};
		class AnimationSources
		{
			class dvere1
			{
				animPeriod = 1;
				initPhase = 1;
			};
			class dvere2
			{
				animPeriod = 1;
				initPhase = 1;
			};
		};
		class UserActions
		{
			class OpenDoors1
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "osa_dvere1";
				radius = 2;
				onlyForPlayer = 0;
				condition = "this animationPhase ""dvere1"" < 0.5";
				statement = "this animate [""dvere1"", 1]";
			};
			class CloseDoors1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "osa_dvere1";
				radius = 2;
				onlyForPlayer = 0;
				condition = "this animationPhase ""dvere1"" >= 0.5";
				statement = "this animate [""dvere1"", 0]";
			};
			class OpenDoors2
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "osa_dvere2";
				radius = 2;
				onlyForPlayer = 0;
				condition = "this animationPhase ""Dvere2"" >= 0.5";
				statement = "this animate [""Dvere2"", 0]";
			};
			class CloseDoors2
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "osa_dvere2";
				radius = 2;
				onlyForPlayer = 0;
				condition = "this animationPhase ""Dvere2"" < 0.5";
				statement = "this animate [""Dvere2"", 1]";
			};
		};
		actionBegin1 = "OpenDoors1";
		actionEnd1 = "OpenDoors1";
		actionBegin2 = "OpenDoors2";
		actionEnd2 = "OpenDoors2";
	};
	class Land_Ind_Garage01_ruins_EP1: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\ca\Structures_E\Ind\Ind_Garage01\Ind_Garage01_ruins_EP1";
	};
};
//};

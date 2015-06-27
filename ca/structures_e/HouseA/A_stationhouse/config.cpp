////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:11:48 2014 : Source 'file' date Fri Oct 31 06:11:48 2014
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

//Class structures_e : HouseA\A_stationhouse\config.bin{
class CfgPatches
{
	class CAStructures_E_HouseA_a_stationhouse
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"CAStructures_E_HouseA"};
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
	class Land_A_Stationhouse_ep1: House_EP1
	{
		scope = 1;
		armor = 320;
		model = "\ca\Structures_E\HouseA\A_stationhouse\a_stationhouse_ep1.p3d";
		ladders[] = {{ "start1","end1" },{ "start2","end2" },{ "start3","end3" }};
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\ca\Structures_E\HouseA\A_stationhouse\a_stationhouse_ruins_ep1.p3d";
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
				armor = 0.5;
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
			mat[] = {};
		};
		class AnimationSources
		{
			class dvere
			{
				animPeriod = 1;
				initPhase = 1;
			};
			class vrataL1
			{
				animPeriod = 1;
				initPhase = 1;
			};
			class vrataR1
			{
				animPeriod = 1;
				initPhase = 0;
			};
			class vrataL2
			{
				animPeriod = 1;
				initPhase = 0;
			};
			class vrataR2
			{
				animPeriod = 1;
				initPhase = 0;
			};
			class vrataL3
			{
				animPeriod = 1;
				initPhase = 0;
			};
			class vrataR3
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
				position = "osa_dvere";
				radius = 3;
				onlyForPlayer = 0;
				condition = "this animationPhase ""dvere"" < 0.5";
				statement = "this animate [""dvere"", 1]";
			};
			class CloseDoors1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "osa_dvere";
				radius = 3;
				onlyForPlayer = 0;
				condition = "this animationPhase ""dvere"" >= 0.5";
				statement = "this animate [""dvere"", 0]";
			};
			class OpenDoors2
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "vrata1_akce";
				radius = 6;
				onlyForPlayer = 0;
				condition = "this animationPhase ""vrataL1"" < 0.5";
				statement = "this animate [""vrataL1"", 1];this animate [""vrataR1"", 1]";
			};
			class CloseDoors2
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "vrata1_akce";
				radius = 6;
				onlyForPlayer = 0;
				condition = "this animationPhase ""vrataL1"" >= 0.5";
				statement = "this animate [""vrataL1"", 0];this animate [""vrataR1"", 0]";
			};
			class OpenDoors4: OpenDoors2
			{
				position = "vrata2_akce";
				condition = "this animationPhase ""vrataL2"" < 0.5";
				statement = "this animate [""vrataL2"", 1];this animate [""vrataR2"", 1]";
			};
			class CloseDoors4: CloseDoors2
			{
				position = "vrata2_akce";
				condition = "this animationPhase ""vrataL2"" >= 0.5";
				statement = "this animate [""vrataL2"", 0];this animate [""vrataR2"", 0]";
			};
			class OpenDoors6: OpenDoors2
			{
				position = "vrata3_akce";
				condition = "this animationPhase ""vrataL3"" < 0.5";
				statement = "this animate [""vrataL3"", 1];this animate [""vrataR3"", 1]";
			};
			class CloseDoors6: CloseDoors2
			{
				position = "vrata3_akce";
				condition = "this animationPhase ""vrataL3"" >= 0.5";
				statement = "this animate [""vrataL3"", 0];this animate [""vrataR3"", 0]";
			};
		};
		actionBegin1 = "OpenDoors1";
		actionEnd1 = "OpenDoors1";
		actionBegin2 = "OpenDoors2";
		actionEnd2 = "OpenDoors2";
		actionBegin3 = "OpenDoors4";
		actionEnd3 = "OpenDoors4";
		actionBegin4 = "OpenDoors6";
		actionEnd4 = "OpenDoors6";
	};
	class Land_a_stationhouse_ruins_ep1: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\ca\Structures_E\HouseA\A_stationhouse\a_stationhouse_ruins_ep1.p3d";
	};
};
//};

////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:11:47 2014 : Source 'file' date Fri Oct 31 06:11:47 2014
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

//Class structures_e : HouseA\A_Mosque_big\config.bin{
class CfgPatches
{
	class CAStructures_E_HouseA_A_Mosque_big
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
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
	class Land_A_Mosque_big_hq_EP1: House_EP1
	{
		scope = 1;
		model = "\Ca\Structures_E\HouseA\A_Mosque_big\A_Mosque_big_hq_EP1";
		vehicleClass = "Test";
		ladders[] = {{ "start1","end1" },{ "start2","end2" }};
		class AnimationSources
		{
			class Dvere1
			{
				animPeriod = 1;
			};
			class Dvere2
			{
				animPeriod = 1;
			};
			class Dvere3
			{
				animPeriod = 1;
			};
			class Dvere4
			{
				animPeriod = 1;
			};
			class Dvere5
			{
				animPeriod = 1;
			};
			class Dvere6
			{
				animPeriod = 1;
			};
			class Dvere7
			{
				animPeriod = 1;
			};
			class Dvere8
			{
				animPeriod = 1;
			};
			class Dvere9
			{
				animPeriod = 1;
			};
			class Dvere10
			{
				animPeriod = 1;
			};
			class Dvere11
			{
				animPeriod = 1;
			};
			class Dvere12
			{
				animPeriod = 1;
			};
			class Dvere13
			{
				animPeriod = 1;
			};
			class Dvere14
			{
				animPeriod = 1;
			};
		};
		class UserActions
		{
			class OpenDoors1
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "osa Door_1";
				radius = 2;
				onlyForPlayer = 0;
				condition = "this animationPhase ""Dvere1"" >= 0.5";
				statement = "this animate [""Dvere1"", 0];this animate [""Dvere2"", 0]";
			};
			class CloseDoors1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "osa Door_1";
				radius = 2;
				onlyForPlayer = 0;
				condition = "this animationPhase ""Dvere1"" < 0.5";
				statement = "this animate [""Dvere1"", 1];this animate [""Dvere2"", 1]";
			};
			class OpenDoors3: OpenDoors1
			{
				position = "osa Door_3";
				condition = "this animationPhase ""Dvere3"" >= 0.5";
				statement = "this animate [""Dvere3"", 0];this animate [""Dvere4"", 0]";
			};
			class CloseDoors3: CloseDoors1
			{
				position = "osa Door_3";
				condition = "this animationPhase ""Dvere3"" < 0.5";
				statement = "this animate [""Dvere3"", 1];this animate [""Dvere4"", 1]";
			};
			class OpenDoors5: OpenDoors1
			{
				position = "osa Door_5";
				condition = "this animationPhase ""Dvere5"" >= 0.5";
				statement = "this animate [""Dvere5"", 0]";
			};
			class CloseDoors5: CloseDoors1
			{
				position = "osa Door_5";
				condition = "this animationPhase ""Dvere5"" < 0.5";
				statement = "this animate [""Dvere5"", 1]";
			};
			class OpenDoors6: OpenDoors1
			{
				position = "osa Door_6";
				condition = "this animationPhase ""Dvere6"" >= 0.5";
				statement = "this animate [""Dvere6"", 0]";
			};
			class CloseDoors6: CloseDoors1
			{
				position = "osa Door_6";
				condition = "this animationPhase ""Dvere6"" < 0.5";
				statement = "this animate [""Dvere6"", 1]";
			};
			class OpenDoors7: OpenDoors1
			{
				position = "osa Door_7";
				condition = "this animationPhase ""Dvere7"" >= 0.5";
				statement = "this animate [""Dvere7"", 0]";
			};
			class CloseDoors7: CloseDoors1
			{
				position = "osa Door_7";
				condition = "this animationPhase ""Dvere7"" < 0.5";
				statement = "this animate [""Dvere7"", 1]";
			};
			class OpenDoors8: OpenDoors1
			{
				position = "osa Door_8";
				condition = "this animationPhase ""Dvere8"" >= 0.5";
				statement = "this animate [""Dvere8"", 0]";
			};
			class CloseDoors8: CloseDoors1
			{
				position = "osa Door_8";
				condition = "this animationPhase ""Dvere8"" < 0.5";
				statement = "this animate [""Dvere8"", 1]";
			};
			class OpenDoors9: OpenDoors1
			{
				position = "osa Door_9";
				condition = "this animationPhase ""Dvere9"" >= 0.5";
				statement = "this animate [""Dvere9"", 0]";
			};
			class CloseDoors9: CloseDoors1
			{
				position = "osa Door_9";
				condition = "this animationPhase ""Dvere9"" < 0.5";
				statement = "this animate [""Dvere9"", 1]";
			};
			class OpenDoors10: OpenDoors1
			{
				position = "osa Door_10";
				condition = "this animationPhase ""Dvere10"" >= 0.5";
				statement = "this animate [""Dvere10"", 0]";
			};
			class CloseDoors10: CloseDoors1
			{
				position = "osa Door_10";
				condition = "this animationPhase ""Dvere10"" < 0.5";
				statement = "this animate [""Dvere10"", 1]";
			};
			class OpenDoors11: OpenDoors1
			{
				position = "osa Door_11";
				condition = "this animationPhase ""Dvere11"" >= 0.5";
				statement = "this animate [""Dvere11"", 0]";
			};
			class CloseDoors11: CloseDoors1
			{
				position = "osa Door_11";
				condition = "this animationPhase ""Dvere11"" < 0.5";
				statement = "this animate [""Dvere11"", 1]";
			};
			class OpenDoors12: OpenDoors1
			{
				position = "osa Door_12";
				condition = "this animationPhase ""Dvere12"" >= 0.5";
				statement = "this animate [""Dvere12"", 0]";
			};
			class CloseDoors12: CloseDoors1
			{
				position = "osa Door_12";
				condition = "this animationPhase ""Dvere12"" < 0.5";
				statement = "this animate [""Dvere12"", 1]";
			};
			class OpenDoors13: OpenDoors1
			{
				position = "osa Door_13";
				condition = "this animationPhase ""Dvere13"" >= 0.5";
				statement = "this animate [""Dvere13"", 0]";
			};
			class CloseDoors13: CloseDoors1
			{
				position = "osa Door_13";
				condition = "this animationPhase ""Dvere13"" < 0.5";
				statement = "this animate [""Dvere13"", 1]";
			};
			class OpenDoors14: OpenDoors1
			{
				position = "osa Door_14";
				condition = "this animationPhase ""Dvere14"" >= 0.5";
				statement = "this animate [""Dvere14"", 0]";
			};
			class CloseDoors14: CloseDoors1
			{
				position = "osa Door_14";
				condition = "this animationPhase ""Dvere14"" < 0.5";
				statement = "this animate [""Dvere14"", 1]";
			};
		};
		actionBegin1 = "OpenDoors1";
		actionEnd1 = "OpenDoors1";
		actionBegin3 = "OpenDoors3";
		actionEnd3 = "OpenDoors3";
		actionBegin5 = "OpenDoors5";
		actionEnd5 = "OpenDoors5";
		actionBegin6 = "OpenDoors6";
		actionEnd6 = "OpenDoors6";
		actionBegin7 = "OpenDoors7";
		actionEnd7 = "OpenDoors7";
		actionBegin8 = "OpenDoors8";
		actionEnd8 = "OpenDoors8";
		actionBegin9 = "OpenDoors9";
		actionEnd9 = "OpenDoors9";
		actionBegin10 = "OpenDoors10";
		actionEnd10 = "OpenDoors10";
		actionBegin11 = "OpenDoors11";
		actionEnd11 = "OpenDoors11";
		actionBegin12 = "OpenDoors12";
		actionEnd12 = "OpenDoors12";
		actionBegin13 = "OpenDoors13";
		actionEnd13 = "OpenDoors13";
		actionBegin14 = "OpenDoors14";
		actionEnd14 = "OpenDoors14";
		actionBegin15 = "OpenDoors15";
		actionEnd15 = "OpenDoors15";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\HouseA\A_Mosque_big\A_Mosque_big_hq_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		featureSize = 21;
	};
	class Land_A_Mosque_big_addon_EP1: House_EP1
	{
		scope = 1;
		model = "\Ca\Structures_E\HouseA\A_Mosque_big\A_Mosque_big_addon_EP1";
		vehicleClass = "Test";
		class AnimationSources
		{
			class Dvere1
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
				position = "osa Door_1";
				radius = 2;
				onlyForPlayer = 0;
				condition = "this animationPhase ""Dvere1"" >= 0.5";
				statement = "this animate [""Dvere1"", 0];this animate [""Dvere2"", 0]";
			};
			class CloseDoors1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "osa Door_1";
				radius = 2;
				onlyForPlayer = 0;
				condition = "this animationPhase ""Dvere1"" < 0.5";
				statement = "this animate [""Dvere1"", 1];this animate [""Dvere2"", 1]";
			};
		};
		actionBegin1 = "OpenDoors1";
		actionEnd1 = "OpenDoors1";
		featureSize = 21;
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\HouseA\A_Mosque_big\A_Mosque_big_addon_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class Land_A_Mosque_big_minaret_1_EP1: House_EP1
	{
		scope = 1;
		model = "\Ca\Structures_E\HouseA\A_Mosque_big\A_Mosque_big_minaret_1_EP1";
		vehicleClass = "Test";
		ladders[] = {{ "start1","end1" }};
		class HitPoints
		{
			class Hit1
			{
				armor = 0.5;
				material = -1;
				name = "dam1";
				visual = "damT1";
				passThrough = 0;
				convexComponent = "dam1";
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
		replaceDamagedHitpoints[] = {"Hit1"};
		replaceDamaged = "Land_A_Mosque_big_minaret_1_dam_EP1";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\HouseA\A_Mosque_big\A_Mosque_big_minaret_1_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		featureSize = 21;
	};
	class Land_A_Mosque_big_minaret_1_dam_EP1: House_EP1
	{
		scope = 1;
		model = "\Ca\Structures_E\HouseA\A_Mosque_big\A_Mosque_big_minaret_1_dam_EP1";
		vehicleClass = "Test";
		ladders[] = {{ "start1","end1" }};
		class HitPoints
		{
			class Hit1
			{
				armor = 0.5;
				material = -1;
				name = "dam1";
				visual = "damT1";
				passThrough = 0;
				convexComponent = "dam1";
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
		class AnimationSources
		{
			class Hit1
			{
				source = "Hit";
				hitpoint = "Hit1";
				raw = 1;
			};
		};
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\HouseA\A_Mosque_big\A_Mosque_big_minaret_1_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		featureSize = 21;
	};
	class Land_A_Mosque_big_minaret_2_EP1: House_EP1
	{
		scope = 1;
		model = "\Ca\Structures_E\HouseA\A_Mosque_big\A_Mosque_big_minaret_2_EP1";
		vehicleClass = "Test";
		ladders[] = {{ "start1","end1" }};
		class HitPoints
		{
			class Hit1
			{
				armor = 0.5;
				material = -1;
				name = "dam1";
				visual = "damT1";
				passThrough = 0;
				convexComponent = "dam1";
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
		replaceDamagedHitpoints[] = {"Hit1"};
		replaceDamaged = "Land_A_Mosque_big_minaret_2_dam_EP1";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\HouseA\A_Mosque_big\A_Mosque_big_minaret_2_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		featureSize = 30;
	};
	class Land_A_Mosque_big_minaret_2_dam_EP1: House_EP1
	{
		scope = 1;
		model = "\Ca\Structures_E\HouseA\A_Mosque_big\A_Mosque_big_minaret_2_dam_EP1";
		vehicleClass = "Test";
		ladders[] = {{ "start1","end1" }};
		class HitPoints
		{
			class Hit1
			{
				armor = 0.5;
				material = -1;
				name = "dam1";
				visual = "damT1";
				passThrough = 0;
				convexComponent = "dam1";
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
		class AnimationSources
		{
			class Hit1
			{
				source = "Hit";
				hitpoint = "Hit1";
				raw = 1;
			};
		};
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\HouseA\A_Mosque_big\A_Mosque_big_minaret_2_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		featureSize = 30;
	};
	class Land_A_Mosque_big_wall_EP1: House_EP1
	{
		scope = 1;
		model = "\CA\Structures_E\HouseA\A_Mosque_big\A_Mosque_big_wall_EP1";
		vehicleClass = "Test";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\HouseA\A_Mosque_big\A_Mosque_big_wall_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class Land_A_Mosque_big_wall_corner_EP1: House_EP1
	{
		scope = 1;
		model = "\CA\Structures_E\HouseA\A_Mosque_big\A_Mosque_big_wall_corner_EP1";
		vehicleClass = "Test";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\HouseA\A_Mosque_big\A_Mosque_big_wall_corner_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class Land_A_Mosque_big_wall_gate_EP1: House_EP1
	{
		scope = 1;
		model = "\CA\Structures_E\HouseA\A_Mosque_big\A_Mosque_big_wall_gate_EP1";
		vehicleClass = "Test";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\HouseA\A_Mosque_big\A_Mosque_big_wall_gate_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class Land_A_Mosque_big_wall_gate_dam_EP1: House_EP1
	{
		scope = 1;
		model = "\Ca\Structures_E\HouseA\A_Mosque_big\A_Mosque_big_wall_gate_dam_EP1";
		vehicleClass = "Test";
		class HitPoints
		{
			class Hit1
			{
				armor = 0.3;
				material = -1;
				name = "dam1";
				visual = "damT1";
				passThrough = 0;
				convexComponent = "dam1";
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
			class Hit2
			{
				armor = 0.3;
				material = -1;
				name = "dam2";
				visual = "damT2";
				passThrough = 0;
				convexComponent = "dam2";
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
		class AnimationSources
		{
			class Hit1
			{
				source = "Hit";
				hitpoint = "Hit1";
				raw = 1;
			};
			class Hit2: Hit1
			{
				hitpoint = "Hit2";
			};
		};
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\HouseA\A_Mosque_big\A_Mosque_big_wall_gate_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class Land_A_Mosque_big_hq_ruins_EP1: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\Ca\Structures_E\HouseA\A_Mosque_big\A_Mosque_big_hq_ruins_EP1";
	};
	class Land_A_Mosque_big_addon_ruins_EP1: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\Ca\Structures_E\HouseA\A_Mosque_big\A_Mosque_big_addon_ruins_EP1";
	};
	class Land_A_Mosque_big_minaret_1_ruins_EP1: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\Ca\Structures_E\HouseA\A_Mosque_big\A_Mosque_big_minaret_1_ruins_EP1";
	};
	class Land_A_Mosque_big_minaret_2_ruins_EP1: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\Ca\Structures_E\HouseA\A_Mosque_big\A_Mosque_big_minaret_2_ruins_EP1";
	};
	class Land_A_Mosque_big_wall_gate_ruins_EP1: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\Ca\Structures_E\HouseA\A_Mosque_big\A_Mosque_big_wall_gate_ruins_EP1";
	};
	class Land_A_Mosque_big_wall_corner_ruins_EP1: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\Ca\Structures_E\HouseA\A_Mosque_big\A_Mosque_big_wall_corner_ruins_EP1";
	};
	class Land_A_Mosque_big_wall_ruins_EP1: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\Ca\Structures_E\HouseA\A_Mosque_big\A_Mosque_big_wall_ruins_EP1";
	};
};
//};

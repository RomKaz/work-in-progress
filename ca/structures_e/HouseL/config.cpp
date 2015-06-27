////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:11:50 2014 : Source 'file' date Fri Oct 31 06:11:50 2014
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

//Class structures_e : HouseL\config.bin{
class CfgPatches
{
	class CAStructures_E_HouseL
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAStructures_E"};
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
	class Land_House_L_1_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\HouseL\House_L_1_EP1";
		vehicleClass = "Test";
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
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\Structures_E\HouseL\data\HouseL_01.rvmat","Ca\Structures_E\HouseL\data\destruct_half_HouseL_01.rvmat","Ca\Structures_E\HouseL\data\destruct_full_HouseL_01.rvmat"};
		};
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\HouseL\House_L_1_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class Land_House_L_3_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\HouseL\House_L_3_EP1";
		vehicleClass = "Test";
		ladders[] = {{ "Ladder01_start","Ladder01_end" }};
		class HitPoints
		{
			class Hit1
			{
				armor = 0.8;
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
				armor = 0.8;
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
		replaceDamagedHitpoints[] = {"Hit1","Hit2"};
		replaceDamaged = "Land_House_L_3_dam_EP1";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\HouseL\House_L_3_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\Structures_E\HouseL\data\HouseL_03_01.rvmat","Ca\Structures_E\HouseL\data\destruct_half_HouseL_03_01.rvmat","Ca\Structures_E\HouseL\data\destruct_full_HouseL_03_01.rvmat","Ca\Structures_E\HouseL\data\HouseL_03_02.rvmat","Ca\Structures_E\HouseL\data\destruct_half_HouseL_03_02.rvmat","Ca\Structures_E\HouseL\data\destruct_full_HouseL_03_02.rvmat"};
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
				statement = "this animate [""Dvere1"", 0]";
			};
			class CloseDoors1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "osa Door_1";
				radius = 2;
				onlyForPlayer = 0;
				condition = "this animationPhase ""Dvere1"" < 0.5";
				statement = "this animate [""Dvere1"", 1]";
			};
			class OpenDoors2: OpenDoors1
			{
				position = "osa Door_2";
				condition = "this animationPhase ""Dvere2"" >= 0.5";
				statement = "this animate [""Dvere2"", 0];this animate [""Dvere3"", 0]";
			};
			class CloseDoors2: CloseDoors1
			{
				position = "osa Door_2";
				condition = "this animationPhase ""Dvere2"" < 0.5";
				statement = "this animate [""Dvere2"", 1];this animate [""Dvere3"", 1]";
			};
		};
		actionBegin1 = "OpenDoors1";
		actionEnd1 = "OpenDoors1";
		actionBegin2 = "OpenDoors2";
		actionEnd2 = "OpenDoors2";
	};
	class Land_House_L_3_dam_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\HouseL\House_L_3_dam_EP1";
		vehicleClass = "Test";
		ladders[] = {{ "Ladder01_start","Ladder01_end" }};
		class HitPoints
		{
			class Hit1
			{
				armor = 0.8;
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
				armor = 0.8;
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
				statement = "this animate [""Dvere1"", 0]";
			};
			class CloseDoors1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "osa Door_1";
				radius = 2;
				onlyForPlayer = 0;
				condition = "this animationPhase ""Dvere1"" < 0.5";
				statement = "this animate [""Dvere1"", 1]";
			};
			class OpenDoors2: OpenDoors1
			{
				position = "osa Door_2";
				condition = "this animationPhase ""Dvere2"" >= 0.5";
				statement = "this animate [""Dvere2"", 0];this animate [""Dvere3"", 0]";
			};
			class CloseDoors2: CloseDoors1
			{
				position = "osa Door_2";
				condition = "this animationPhase ""Dvere2"" < 0.5";
				statement = "this animate [""Dvere2"", 1];this animate [""Dvere3"", 1]";
			};
		};
		actionBegin1 = "OpenDoors1";
		actionEnd1 = "OpenDoors1";
		actionBegin2 = "OpenDoors2";
		actionEnd2 = "OpenDoors2";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\HouseL\House_L_3_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class Land_House_L_4_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\HouseL\House_L_4_EP1";
		vehicleClass = "Test";
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
			class Hit2
			{
				armor = 0.5;
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
		replaceDamagedHitpoints[] = {"Hit1","Hit2"};
		replaceDamaged = "Land_House_L_4_dam_EP1";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\HouseL\House_L_4_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\Structures_E\HouseL\data\House_L_04_01.rvmat","Ca\Structures_E\HouseL\data\destruct_half_House_L_04_01.rvmat","Ca\Structures_E\HouseL\data\destruct_full_House_L_04_01.rvmat"};
		};
		class AnimationSources
		{
			class Dvere1
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
				statement = "this animate [""Dvere1"", 0]";
			};
			class CloseDoors1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "osa Door_1";
				radius = 2;
				onlyForPlayer = 0;
				condition = "this animationPhase ""Dvere1"" < 0.5";
				statement = "this animate [""Dvere1"", 1]";
			};
		};
		actionBegin1 = "OpenDoors1";
		actionEnd1 = "OpenDoors1";
	};
	class Land_House_L_4_dam_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\HouseL\House_L_4_dam_EP1";
		vehicleClass = "Test";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\HouseL\House_L_4_ruins_EP1.p3d";
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
				armor = 0.5;
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
			class Dvere1
			{
				animPeriod = 1;
			};
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
				statement = "this animate [""Dvere1"", 0]";
			};
			class CloseDoors1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "osa Door_1";
				radius = 2;
				onlyForPlayer = 0;
				condition = "this animationPhase ""Dvere1"" < 0.5";
				statement = "this animate [""Dvere1"", 1]";
			};
		};
		actionBegin1 = "OpenDoors1";
		actionEnd1 = "OpenDoors1";
	};
	class Land_House_L_6_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\HouseL\House_L_6_EP1";
		vehicleClass = "Test";
		class HitPoints
		{
			class Hit1
			{
				armor = 0.2;
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
				armor = 0.2;
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
		replaceDamagedHitpoints[] = {"Hit1","Hit2"};
		replaceDamaged = "Land_House_L_6_dam_EP1";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\HouseL\House_L_6_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\Structures_E\HouseL\data\HouseL_06_1.rvmat","Ca\Structures_E\HouseL\data\destruct_half_HouseL_06_1.rvmat","Ca\Structures_E\HouseL\data\destruct_full_HouseL_06_1.rvmat"};
		};
		class AnimationSources
		{
			class Dvere1
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
				statement = "this animate [""Dvere1"", 0]";
			};
			class CloseDoors1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "osa Door_1";
				radius = 2;
				onlyForPlayer = 0;
				condition = "this animationPhase ""Dvere1"" < 0.5";
				statement = "this animate [""Dvere1"", 1]";
			};
		};
		actionBegin1 = "OpenDoors1";
		actionEnd1 = "OpenDoors1";
	};
	class Land_House_L_6_dam_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\HouseL\House_L_6_dam_EP1";
		vehicleClass = "Test";
		class HitPoints
		{
			class Hit1
			{
				armor = 0.2;
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
				armor = 0.2;
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
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\HouseL\House_L_6_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		class AnimationSources
		{
			class Dvere1
			{
				animPeriod = 1;
			};
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
				statement = "this animate [""Dvere1"", 0]";
			};
			class CloseDoors1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "osa Door_1";
				radius = 2;
				onlyForPlayer = 0;
				condition = "this animationPhase ""Dvere1"" < 0.5";
				statement = "this animate [""Dvere1"", 1]";
			};
		};
		actionBegin1 = "OpenDoors1";
		actionEnd1 = "OpenDoors1";
	};
	class Land_House_L_7_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\HouseL\House_L_7_EP1";
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
			class Hit3
			{
				armor = 0.3;
				material = -1;
				name = "dam3";
				visual = "damT3";
				passThrough = 0;
				convexComponent = "dam3";
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
		replaceDamagedHitpoints[] = {"Hit1","Hit2","Hit3"};
		replaceDamaged = "Land_House_L_7_dam_EP1";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\HouseL\House_L_7_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\Structures_E\HouseL\data\House_L_07_01.rvmat","Ca\Structures_E\HouseL\data\destruct_half_House_L_07_01.rvmat","Ca\Structures_E\HouseL\data\destruct_full_House_L_07_01.rvmat","Ca\Structures_E\HouseL\data\House_L_07_02.rvmat","Ca\Structures_E\HouseL\data\destruct_half_House_L_07_02.rvmat","Ca\Structures_E\HouseL\data\destruct_full_House_L_07_02.rvmat"};
		};
		class AnimationSources
		{
			class Dvere1
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
				statement = "this animate [""Dvere1"", 0]";
			};
			class CloseDoors1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "osa Door_1";
				radius = 2;
				onlyForPlayer = 0;
				condition = "this animationPhase ""Dvere1"" < 0.5";
				statement = "this animate [""Dvere1"", 1]";
			};
		};
		actionBegin1 = "OpenDoors1";
		actionEnd1 = "OpenDoors1";
	};
	class Land_House_L_7_dam_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\HouseL\House_L_7_dam_EP1";
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
			class Hit3
			{
				armor = 0.3;
				material = -1;
				name = "dam3";
				visual = "damT3";
				passThrough = 0;
				convexComponent = "dam3";
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
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\HouseL\House_L_7_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		class AnimationSources
		{
			class Dvere1
			{
				animPeriod = 1;
			};
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
			class Hit3: Hit1
			{
				hitpoint = "Hit3";
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
				statement = "this animate [""Dvere1"", 0]";
			};
			class CloseDoors1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "osa Door_1";
				radius = 2;
				onlyForPlayer = 0;
				condition = "this animationPhase ""Dvere1"" < 0.5";
				statement = "this animate [""Dvere1"", 1]";
			};
		};
		actionBegin1 = "OpenDoors1";
		actionEnd1 = "OpenDoors1";
	};
	class Land_House_L_8_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\HouseL\House_L_8_EP1";
		vehicleClass = "Test";
		class HitPoints
		{
			class Hit1
			{
				armor = 0.25;
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
				armor = 0.25;
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
			class Hit3
			{
				armor = 0.25;
				material = -1;
				name = "dam3";
				visual = "damT3";
				passThrough = 0;
				convexComponent = "dam3";
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
			mat[] = {"Ca\Structures_E\HouseL\data\HouseL_08_1.rvmat","Ca\Structures_E\HouseL\data\destruct_half_HouseL_08_1.rvmat","Ca\Structures_E\HouseL\data\destruct_full_HouseL_08_1.rvmat"};
		};
		replaceDamagedHitpoints[] = {"Hit1","Hit2","Hit3"};
		replaceDamaged = "Land_House_L_8_dam_EP1";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\HouseL\House_L_8_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
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
				statement = "this animate [""Dvere1"", 0]";
			};
			class CloseDoors1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "osa Door_1";
				radius = 2;
				onlyForPlayer = 0;
				condition = "this animationPhase ""Dvere1"" < 0.5";
				statement = "this animate [""Dvere1"", 1]";
			};
			class OpenDoors2: OpenDoors1
			{
				position = "osa Door_2";
				condition = "this animationPhase ""Dvere2"" >= 0.5";
				statement = "this animate [""Dvere2"", 0]";
			};
			class CloseDoors2: CloseDoors1
			{
				position = "osa Door_2";
				condition = "this animationPhase ""Dvere2"" < 0.5";
				statement = "this animate [""Dvere2"", 1]";
			};
		};
		actionBegin1 = "OpenDoors1";
		actionEnd1 = "OpenDoors1";
		actionBegin2 = "OpenDoors2";
		actionEnd2 = "OpenDoors2";
	};
	class Land_House_L_8_dam_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\HouseL\House_L_8_dam_EP1";
		vehicleClass = "Test";
		class HitPoints
		{
			class Hit1
			{
				armor = 0.25;
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
				armor = 0.25;
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
			class Hit3
			{
				armor = 0.25;
				material = -1;
				name = "dam3";
				visual = "damT3";
				passThrough = 0;
				convexComponent = "dam3";
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
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\HouseL\House_L_8_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
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
			class Hit3: Hit1
			{
				hitpoint = "Hit3";
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
				statement = "this animate [""Dvere1"", 0]";
			};
			class CloseDoors1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "osa Door_1";
				radius = 2;
				onlyForPlayer = 0;
				condition = "this animationPhase ""Dvere1"" < 0.5";
				statement = "this animate [""Dvere1"", 1]";
			};
			class OpenDoors2: OpenDoors1
			{
				position = "osa Door_2";
				condition = "this animationPhase ""Dvere2"" >= 0.5";
				statement = "this animate [""Dvere2"", 0]";
			};
			class CloseDoors2: CloseDoors1
			{
				position = "osa Door_2";
				condition = "this animationPhase ""Dvere2"" < 0.5";
				statement = "this animate [""Dvere2"", 1]";
			};
		};
		actionBegin1 = "OpenDoors1";
		actionEnd1 = "OpenDoors1";
		actionBegin2 = "OpenDoors2";
		actionEnd2 = "OpenDoors2";
	};
	class Land_House_L_9_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\HouseL\House_L_9_EP1";
		vehicleClass = "Test";
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
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\Structures_E\HouseL\data\HouseL_09_1.rvmat","Ca\Structures_E\HouseL\data\destruct_half_HouseL_09_1.rvmat","Ca\Structures_E\HouseL\data\destruct_full_HouseL_09_1.rvmat"};
		};
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\HouseL\House_L_9_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class Land_House_L_1_ruins_EP1: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\Ca\Structures_E\HouseL\House_L_1_ruins_EP1";
	};
	class Land_House_L_3_ruins_EP1: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\Ca\Structures_E\HouseL\House_L_3_ruins_EP1";
	};
	class Land_House_L_4_ruins_EP1: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\Ca\Structures_E\HouseL\House_L_4_ruins_EP1";
	};
	class Land_House_L_6_ruins_EP1: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\Ca\Structures_E\HouseL\House_L_6_ruins_EP1";
	};
	class Land_House_L_7_ruins_EP1: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\Ca\Structures_E\HouseL\House_L_7_ruins_EP1";
	};
	class Land_House_L_8_ruins_EP1: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\Ca\Structures_E\HouseL\House_L_8_ruins_EP1";
	};
	class Land_House_L_9_ruins_EP1: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\Ca\Structures_E\HouseL\House_L_9_ruins_EP1";
	};
};
//};

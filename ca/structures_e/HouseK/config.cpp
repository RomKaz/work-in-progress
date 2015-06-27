////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:11:49 2014 : Source 'file' date Fri Oct 31 06:11:49 2014
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

//Class structures_e : HouseK\config.bin{
class CfgPatches
{
	class CAStructures_E_HouseK
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
	class Land_House_K_1_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\HouseK\House_K_1_EP1";
		vehicleClass = "Test";
		class HitPoints
		{
			class Hit1
			{
				armor = 0.5;
				material = -1;
				name = "dam1";
				visual = "damT1";
				passThrough = 0.2;
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
			mat[] = {"Ca\Structures_E\HouseK\data\House_K_1_01_MULTI.rvmat","Ca\Structures_E\HouseK\data\destruct_half_House_K_1_01_MULTI.rvmat","Ca\Structures_E\HouseK\data\destruct_full_House_K_1_01_MULTI.rvmat","Ca\Structures_E\HouseK\data\House_K_1_02_MULTI.rvmat","Ca\Structures_E\HouseK\data\destruct_half_House_K_1_02_MULTI.rvmat","Ca\Structures_E\HouseK\data\destruct_full_House_K_1_02_MULTI.rvmat"};
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
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\HouseK\House_K_1_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class Land_House_K_3_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\HouseK\House_K_3_EP1";
		vehicleClass = "Test";
		ladders[] = {{ "start","end" }};
		class HitPoints
		{
			class Hit1
			{
				armor = 0.2;
				material = -1;
				name = "dam1";
				visual = "damT1";
				passThrough = 0.2;
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
				passThrough = 0.2;
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
				armor = 0.2;
				material = -1;
				name = "dam3";
				visual = "damT3";
				passThrough = 0.2;
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
			class Hit4
			{
				armor = 0.2;
				material = -1;
				name = "dam4";
				visual = "damT4";
				passThrough = 0.2;
				convexComponent = "dam4";
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
		replaceDamagedHitpoints[] = {"Hit1","Hit2","Hit3","Hit4"};
		replaceDamaged = "Land_House_K_3_dam_EP1";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\HouseK\House_K_3_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\Structures_E\HouseK\data\House_K_3_01_MULTI.rvmat","Ca\Structures_E\HouseK\data\destruct_half_House_K_3_01_MULTI.rvmat","Ca\Structures_E\HouseK\data\destruct_full_House_K_3_01_MULTI.rvmat","Ca\Structures_E\HouseK\data\House_K_3_02_MULTI.rvmat","Ca\Structures_E\HouseK\data\destruct_half_House_K_3_02_MULTI.rvmat","Ca\Structures_E\HouseK\data\destruct_full_House_K_3_02_MULTI.rvmat"};
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
				statement = "this animate [""Dvere2"", 0]";
			};
			class CloseDoors2: CloseDoors1
			{
				position = "osa Door_2";
				condition = "this animationPhase ""Dvere2"" < 0.5";
				statement = "this animate [""Dvere2"", 1]";
			};
			class OpenDoors3: OpenDoors1
			{
				position = "osa Door_3";
				condition = "this animationPhase ""Dvere3"" >= 0.5";
				statement = "this animate [""Dvere3"", 0]";
			};
			class CloseDoors3: CloseDoors1
			{
				position = "osa Door_3";
				condition = "this animationPhase ""Dvere3"" < 0.5";
				statement = "this animate [""Dvere3"", 1]";
			};
		};
		actionBegin1 = "OpenDoors1";
		actionEnd1 = "OpenDoors1";
		actionBegin2 = "OpenDoors2";
		actionEnd2 = "OpenDoors2";
		actionBegin3 = "OpenDoors3";
		actionEnd3 = "OpenDoors3";
	};
	class Land_House_K_3_dam_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\HouseK\House_K_3_dam_EP1";
		vehicleClass = "Test";
		ladders[] = {{ "start","end" }};
		class HitPoints
		{
			class Hit1
			{
				armor = 0.2;
				material = -1;
				name = "dam1";
				visual = "damT1";
				passThrough = 0.2;
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
				passThrough = 0.2;
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
				armor = 0.2;
				material = -1;
				name = "dam3";
				visual = "damT3";
				passThrough = 0.2;
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
			class Hit4
			{
				armor = 0.2;
				material = -1;
				name = "dam4";
				visual = "damT4";
				passThrough = 0.2;
				convexComponent = "dam4";
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
			class Hit4: Hit1
			{
				hitpoint = "Hit4";
			};
		};
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\HouseK\House_K_3_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
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
			class OpenDoors3: OpenDoors1
			{
				position = "osa Door_3";
				condition = "this animationPhase ""Dvere3"" >= 0.5";
				statement = "this animate [""Dvere3"", 0]";
			};
			class CloseDoors3: CloseDoors1
			{
				position = "osa Door_3";
				condition = "this animationPhase ""Dvere3"" < 0.5";
				statement = "this animate [""Dvere3"", 1]";
			};
		};
		actionBegin1 = "OpenDoors1";
		actionEnd1 = "OpenDoors1";
		actionBegin2 = "OpenDoors2";
		actionEnd2 = "OpenDoors2";
		actionBegin3 = "OpenDoors3";
		actionEnd3 = "OpenDoors3";
	};
	class Land_House_K_5_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\HouseK\House_K_5_EP1";
		vehicleClass = "Test";
		class HitPoints
		{
			class Hit1
			{
				armor = 0.6;
				material = -1;
				name = "dam1";
				visual = "damT1";
				passThrough = 0.2;
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
				armor = 0.6;
				material = -1;
				name = "dam2";
				visual = "damT2";
				passThrough = 0.2;
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
		replaceDamaged = "Land_House_K_5_dam_EP1";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\HouseK\House_K_5_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\Structures_E\HouseK\data\House_K_5_MULTI.rvmat","Ca\Structures_E\HouseK\data\destruct_half_House_K_5_MULTI.rvmat","Ca\Structures_E\HouseK\data\destruct_full_House_K_5_MULTI.rvmat","Ca\Structures_E\HouseK\data\House_K_5_MULTI2.rvmat","Ca\Structures_E\HouseK\data\destruct_half_House_K_5_MULTI2.rvmat","Ca\Structures_E\HouseK\data\destruct_full_House_K_5_MULTI2.rvmat"};
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
	class Land_House_K_5_dam_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\HouseK\House_K_5_dam_EP1";
		vehicleClass = "Test";
		class HitPoints
		{
			class Hit1
			{
				armor = 0.8;
				material = -1;
				name = "dam1";
				visual = "damT1";
				passThrough = 0.2;
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
				passThrough = 0.2;
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
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\HouseK\House_K_5_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
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
	class Land_House_K_6_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\HouseK\House_K_6_EP1";
		vehicleClass = "Test";
		ladders[] = {{ "start1","end1" },{ "start2","end2" }};
		class HitPoints
		{
			class Hit1
			{
				armor = 0.3;
				material = -1;
				name = "dam1";
				visual = "damT1";
				passThrough = 0.2;
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
				passThrough = 0.2;
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
				passThrough = 0.2;
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
		replaceDamaged = "Land_House_K_6_dam_EP1";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\HouseK\House_K_6_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\Structures_E\HouseK\data\House_K_6_01_MULTI.rvmat","Ca\Structures_E\HouseK\data\destruct_half_House_K_6_01_MULTI.rvmat","Ca\Structures_E\HouseK\data\destruct_full_House_K_6_01_MULTI.rvmat"};
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
				statement = "this animate [""Dvere2"", 0]";
			};
			class CloseDoors2: CloseDoors1
			{
				position = "osa Door_2";
				condition = "this animationPhase ""Dvere2"" < 0.5";
				statement = "this animate [""Dvere2"", 1]";
			};
			class OpenDoors3: OpenDoors1
			{
				position = "osa Door_3";
				condition = "this animationPhase ""Dvere3"" >= 0.5";
				statement = "this animate [""Dvere3"", 0]";
			};
			class CloseDoors3: CloseDoors1
			{
				position = "osa Door_3";
				condition = "this animationPhase ""Dvere3"" < 0.5";
				statement = "this animate [""Dvere3"", 1]";
			};
		};
		actionBegin1 = "OpenDoors1";
		actionEnd1 = "OpenDoors1";
		actionBegin2 = "OpenDoors2";
		actionEnd2 = "OpenDoors2";
		actionBegin3 = "OpenDoors3";
		actionEnd3 = "OpenDoors3";
	};
	class Land_House_K_6_dam_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\HouseK\House_K_6_dam_EP1";
		vehicleClass = "Test";
		ladders[] = {{ "start1","end1" },{ "start2","end2" }};
		class HitPoints
		{
			class Hit1
			{
				armor = 0.3;
				material = -1;
				name = "dam1";
				visual = "damT1";
				passThrough = 0.2;
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
				passThrough = 0.2;
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
				passThrough = 0.2;
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
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\HouseK\House_K_6_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
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
			class OpenDoors3: OpenDoors1
			{
				position = "osa Door_3";
				condition = "this animationPhase ""Dvere3"" >= 0.5";
				statement = "this animate [""Dvere3"", 0]";
			};
			class CloseDoors3: CloseDoors1
			{
				position = "osa Door_3";
				condition = "this animationPhase ""Dvere3"" < 0.5";
				statement = "this animate [""Dvere3"", 1]";
			};
		};
		actionBegin1 = "OpenDoors1";
		actionEnd1 = "OpenDoors1";
		actionBegin2 = "OpenDoors2";
		actionEnd2 = "OpenDoors2";
		actionBegin3 = "OpenDoors3";
		actionEnd3 = "OpenDoors3";
	};
	class Land_House_K_7_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\HouseK\House_K_7_EP1";
		vehicleClass = "Test";
		ladders[] = {{ "start","end" }};
		class HitPoints
		{
			class Hit1
			{
				armor = 0.5;
				material = -1;
				name = "dam1";
				visual = "damT1";
				passThrough = 0.2;
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
		replaceDamaged = "Land_House_K_7_dam_EP1";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\HouseK\House_K_7_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\Structures_E\HouseK\data\House_K_7_01_Multi.rvmat","Ca\Structures_E\HouseK\data\destruct_half_House_K_7_01_Multi.rvmat","Ca\Structures_E\HouseK\data\destruct_full_House_K_7_01_Multi.rvmat"};
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
			class Dvere3
			{
				animPeriod = 1;
			};
			class Dvere4
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
			class OpenDoors3: OpenDoors1
			{
				position = "osa Door_3";
				condition = "this animationPhase ""Dvere3"" >= 0.5";
				statement = "this animate [""Dvere3"", 0]";
			};
			class CloseDoors3: CloseDoors1
			{
				position = "osa Door_3";
				condition = "this animationPhase ""Dvere3"" < 0.5";
				statement = "this animate [""Dvere3"", 1]";
			};
			class OpenDoors4: OpenDoors1
			{
				position = "osa Door_4";
				condition = "this animationPhase ""Dvere4"" >= 0.5";
				statement = "this animate [""Dvere4"", 0]";
			};
			class CloseDoors4: CloseDoors1
			{
				position = "osa Door_4";
				condition = "this animationPhase ""Dvere4"" < 0.5";
				statement = "this animate [""Dvere4"", 1]";
			};
		};
		actionBegin1 = "OpenDoors1";
		actionEnd1 = "OpenDoors1";
		actionBegin2 = "OpenDoors2";
		actionEnd2 = "OpenDoors2";
		actionBegin3 = "OpenDoors3";
		actionEnd3 = "OpenDoors3";
		actionBegin4 = "OpenDoors4";
		actionEnd4 = "OpenDoors4";
	};
	class Land_House_K_7_dam_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\HouseK\House_K_7_dam_EP1";
		vehicleClass = "Test";
		class HitPoints
		{
			class Hit1
			{
				armor = 0.5;
				material = -1;
				name = "dam1";
				visual = "damT1";
				passThrough = 0.2;
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
				type = "\Ca\Structures_E\HouseK\House_K_7_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
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
			class OpenDoors3: OpenDoors1
			{
				position = "osa Door_3";
				condition = "this animationPhase ""Dvere3"" >= 0.5";
				statement = "this animate [""Dvere3"", 0]";
			};
			class CloseDoors3: CloseDoors1
			{
				position = "osa Door_3";
				condition = "this animationPhase ""Dvere3"" < 0.5";
				statement = "this animate [""Dvere3"", 1]";
			};
			class OpenDoors4: OpenDoors1
			{
				position = "osa Door_4";
				condition = "this animationPhase ""Dvere4"" >= 0.5";
				statement = "this animate [""Dvere4"", 0]";
			};
			class CloseDoors4: CloseDoors1
			{
				position = "osa Door_4";
				condition = "this animationPhase ""Dvere4"" < 0.5";
				statement = "this animate [""Dvere4"", 1]";
			};
		};
		actionBegin1 = "OpenDoors1";
		actionEnd1 = "OpenDoors1";
		actionBegin2 = "OpenDoors2";
		actionEnd2 = "OpenDoors2";
		actionBegin3 = "OpenDoors3";
		actionEnd3 = "OpenDoors3";
		actionBegin4 = "OpenDoors4";
		actionEnd4 = "OpenDoors4";
	};
	class Land_House_K_8_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\HouseK\House_K_8_EP1";
		vehicleClass = "Test";
		ladders[] = {{ "start1","end1" },{ "start2","end2" }};
		class HitPoints
		{
			class Hit1
			{
				armor = 0.3;
				material = -1;
				name = "dam1";
				visual = "damT1";
				passThrough = 0.2;
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
				armor = 0.4;
				material = -1;
				name = "dam2";
				visual = "damT2";
				passThrough = 0.2;
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
				armor = 0.4;
				material = -1;
				name = "dam3";
				visual = "damT3";
				passThrough = 0.2;
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
		replaceDamaged = "Land_House_K_8_dam_EP1";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\HouseK\House_K_8_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\Structures_E\HouseK\data\House_K_8_01_MULTI.rvmat","Ca\Structures_E\HouseK\data\destruct_half_House_K_8_01_MULTI.rvmat","Ca\Structures_E\HouseK\data\destruct_full_House_K_8_01_MULTI.rvmat"};
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
				statement = "this animate [""Dvere2"", 0]";
			};
			class CloseDoors2: CloseDoors1
			{
				position = "osa Door_2";
				condition = "this animationPhase ""Dvere2"" < 0.5";
				statement = "this animate [""Dvere2"", 1]";
			};
			class OpenDoors3: OpenDoors1
			{
				position = "osa Door_3";
				condition = "this animationPhase ""Dvere3"" >= 0.5";
				statement = "this animate [""Dvere3"", 0]";
			};
			class CloseDoors3: CloseDoors1
			{
				position = "osa Door_3";
				condition = "this animationPhase ""Dvere3"" < 0.5";
				statement = "this animate [""Dvere3"", 1]";
			};
		};
		actionBegin1 = "OpenDoors1";
		actionEnd1 = "OpenDoors1";
		actionBegin2 = "OpenDoors2";
		actionEnd2 = "OpenDoors2";
		actionBegin3 = "OpenDoors3";
		actionEnd3 = "OpenDoors3";
	};
	class Land_House_K_8_dam_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\HouseK\House_K_8_dam_EP1";
		vehicleClass = "Test";
		ladders[] = {{ "start1","end1" },{ "start2","end2" }};
		class HitPoints
		{
			class Hit1
			{
				armor = 0.3;
				material = -1;
				name = "dam1";
				visual = "damT1";
				passThrough = 0.2;
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
				armor = 0.4;
				material = -1;
				name = "dam2";
				visual = "damT2";
				passThrough = 0.2;
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
				armor = 0.4;
				material = -1;
				name = "dam3";
				visual = "damT3";
				passThrough = 0.2;
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
		replaceDamaged = "Land_House_K_8_dam_EP1";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\HouseK\House_K_8_ruins_EP1.p3d";
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
			class Dvere3
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
			class OpenDoors3: OpenDoors1
			{
				position = "osa Door_3";
				condition = "this animationPhase ""Dvere3"" >= 0.5";
				statement = "this animate [""Dvere3"", 0]";
			};
			class CloseDoors3: CloseDoors1
			{
				position = "osa Door_3";
				condition = "this animationPhase ""Dvere3"" < 0.5";
				statement = "this animate [""Dvere3"", 1]";
			};
		};
		actionBegin1 = "OpenDoors1";
		actionEnd1 = "OpenDoors1";
		actionBegin2 = "OpenDoors2";
		actionEnd2 = "OpenDoors2";
		actionBegin3 = "OpenDoors3";
		actionEnd3 = "OpenDoors3";
	};
	class Land_Terrace_K_1_EP1: House_EP1
	{
		scope = 1;
		model = "\CA\Structures_E\HouseK\Terrace_K_1_EP1";
		vehicleClass = "Test";
	};
	class Land_House_K_1_ruins_EP1: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\Ca\Structures_E\HouseK\House_K_1_ruins_EP1";
	};
	class Land_House_K_5_ruins_EP1: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\Ca\Structures_E\HouseK\House_K_5_ruins_EP1";
	};
	class Land_House_K_3_ruins_EP1: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\Ca\Structures_E\HouseK\House_K_3_ruins_EP1";
	};
	class Land_House_K_6_ruins_EP1: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\Ca\Structures_E\HouseK\House_K_6_ruins_EP1";
	};
	class Land_House_K_7_ruins_EP1: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\Ca\Structures_E\HouseK\House_K_7_ruins_EP1";
	};
	class Land_House_K_8_ruins_EP1: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\Ca\Structures_E\HouseK\House_K_8_ruins_EP1";
	};
};
//};

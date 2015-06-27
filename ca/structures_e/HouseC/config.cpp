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

//Class structures_e : HouseC\config.bin{
class CfgPatches
{
	class CAStructures_E_HouseC
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
	class Land_House_C_1_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\HouseC\House_C_1_EP1";
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
		replaceDamaged = "Land_House_C_1_dam_EP1";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\HouseC\House_C_1_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\Structures_E\HouseC\Data\House_C_1_1.rvmat","Ca\Structures_E\HouseC\Data\destruct_half_House_C_1_1.rvmat","Ca\Structures_E\HouseC\Data\destruct_full_House_C_1_1.rvmat","Ca\Structures_E\HouseC\Data\House_C_1_2.rvmat","Ca\Structures_E\HouseC\Data\destruct_half_House_C_1_2.rvmat","Ca\Structures_E\HouseC\Data\destruct_full_House_C_1_2.rvmat","Ca\Structures_E\HouseC\Data\House_C_1_metal.rvmat","Ca\Structures_E\HouseC\Data\destruct_half_House_C_1_metal.rvmat","Ca\Structures_E\HouseC\Data\destruct_full_House_C_1_metal.rvmat","Ca\Structures_E\Data\Windows\glass_tiled.rvmat","Ca\Structures_E\Data\Windows\destruct_half_glass_tiled.rvmat","Ca\Structures_E\Data\Windows\destruct_full_glass_tiled.rvmat"};
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
	class Land_House_C_1_dam_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\HouseC\House_C_1_dam_EP1";
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
				type = "\Ca\Structures_E\HouseC\House_C_1_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
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
			class Hit3: Hit1
			{
				hitpoint = "Hit3";
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
	class Land_House_C_1_v2_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\HouseC\House_C_1_v2_EP1";
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
		replaceDamaged = "Land_House_C_1_v2_dam_EP1";
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\Structures_E\HouseC\Data\House_C_1_1_v2.rvmat","Ca\Structures_E\HouseC\Data\destruct_half_House_C_1_1_v2.rvmat","Ca\Structures_E\HouseC\Data\destruct_full_House_C_1_1_v2.rvmat","Ca\Structures_E\HouseC\Data\House_C_1_2.rvmat","Ca\Structures_E\HouseC\Data\destruct_half_House_C_1_2.rvmat","Ca\Structures_E\HouseC\Data\destruct_full_House_C_1_2.rvmat","Ca\Structures_E\HouseC\Data\House_C_1_metal.rvmat","Ca\Structures_E\HouseC\Data\destruct_half_House_C_1_metal.rvmat","Ca\Structures_E\HouseC\Data\destruct_full_House_C_1_metal.rvmat","Ca\Structures_E\Data\Windows\glass_tiled.rvmat","Ca\Structures_E\Data\Windows\destruct_half_glass_tiled.rvmat","Ca\Structures_E\Data\Windows\destruct_full_glass_tiled.rvmat"};
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
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\HouseC\House_C_1_v2_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class Land_House_C_1_v2_dam_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\HouseC\House_C_1_v2_dam_EP1";
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
				type = "\Ca\Structures_E\HouseC\House_C_1_v2_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
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
			class Hit3: Hit1
			{
				hitpoint = "Hit3";
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
	class Land_House_C_2_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\HouseC\House_C_2_EP1";
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
		replaceDamaged = "Land_House_C_2_dam_EP1";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\HouseC\House_C_2_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\Structures_E\HouseC\Data\House_C_2interior.rvmat","Ca\Structures_E\HouseC\Data\destruct_half_House_C_2interior.rvmat","Ca\Structures_E\HouseC\Data\destruct_full_House_C_2interior.rvmat","Ca\Structures_E\HouseC\Data\House_C_2walls.rvmat","Ca\Structures_E\HouseC\Data\destruct_half_House_C_2walls.rvmat","Ca\Structures_E\HouseC\Data\destruct_full_House_C_2walls.rvmat"};
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
			class Dvere5
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
		};
		actionBegin1 = "OpenDoors1";
		actionEnd1 = "OpenDoors1";
		actionBegin3 = "OpenDoors3";
		actionEnd3 = "OpenDoors3";
		actionBegin4 = "OpenDoors4";
		actionEnd4 = "OpenDoors4";
		actionBegin5 = "OpenDoors5";
		actionEnd5 = "OpenDoors5";
	};
	class Land_House_C_2_DAM_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\HouseC\House_C_2_dam_EP1";
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
				type = "\Ca\Structures_E\HouseC\House_C_2_ruins_EP1.p3d";
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
			class Dvere4
			{
				animPeriod = 1;
			};
			class Dvere5
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
		};
		actionBegin1 = "OpenDoors1";
		actionEnd1 = "OpenDoors1";
		actionBegin2 = "OpenDoors2";
		actionEnd2 = "OpenDoors2";
		actionBegin3 = "OpenDoors3";
		actionEnd3 = "OpenDoors3";
		actionBegin4 = "OpenDoors4";
		actionEnd4 = "OpenDoors4";
		actionBegin5 = "OpenDoors5";
		actionEnd5 = "OpenDoors5";
	};
	class Land_House_C_3_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\HouseC\House_C_3_EP1";
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
		replaceDamaged = "Land_House_C_3_dam_EP1";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\HouseC\House_C_3_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\Structures_E\HouseC\Data\House_C_3interior.rvmat","Ca\Structures_E\HouseC\Data\destruct_half_House_C_3interior.rvmat","Ca\Structures_E\HouseC\Data\destruct_full_House_C_3interior.rvmat","Ca\Structures_E\HouseC\Data\House_C_3walls.rvmat","Ca\Structures_E\HouseC\Data\destruct_half_House_C_3walls.rvmat","Ca\Structures_E\HouseC\Data\destruct_full_House_C_3walls.rvmat","Ca\Structures_E\HouseC\Data\House_C_3wood.rvmat","Ca\Structures_E\HouseC\Data\destruct_half_House_C_3wood.rvmat","Ca\Structures_E\HouseC\Data\destruct_full_House_C_3wood.rvmat"};
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
		};
		actionBegin1 = "OpenDoors1";
		actionEnd1 = "OpenDoors1";
		actionBegin2 = "OpenDoors2";
		actionEnd2 = "OpenDoors2";
		actionBegin3 = "OpenDoors3";
		actionEnd3 = "OpenDoors3";
		actionBegin4 = "OpenDoors4";
		actionEnd4 = "OpenDoors4";
		actionBegin5 = "OpenDoors5";
		actionEnd5 = "OpenDoors5";
		actionBegin6 = "OpenDoors6";
		actionEnd6 = "OpenDoors6";
		actionBegin7 = "OpenDoors7";
		actionEnd7 = "OpenDoors7";
	};
	class Land_House_C_3_dam_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\HouseC\House_C_3_dam_EP1";
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
				type = "\Ca\Structures_E\HouseC\House_C_3_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
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
			class Hit3: Hit1
			{
				hitpoint = "Hit3";
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
		};
		actionBegin1 = "OpenDoors1";
		actionEnd1 = "OpenDoors1";
		actionBegin2 = "OpenDoors2";
		actionEnd2 = "OpenDoors2";
		actionBegin3 = "OpenDoors3";
		actionEnd3 = "OpenDoors3";
		actionBegin4 = "OpenDoors4";
		actionEnd4 = "OpenDoors4";
		actionBegin5 = "OpenDoors5";
		actionEnd5 = "OpenDoors5";
		actionBegin6 = "OpenDoors6";
		actionEnd6 = "OpenDoors6";
		actionBegin7 = "OpenDoors7";
		actionEnd7 = "OpenDoors7";
	};
	class Land_House_C_4_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\HouseC\House_C_4_EP1";
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
			class Hit4
			{
				armor = 0.3;
				material = -1;
				name = "dam4";
				visual = "damT4";
				passThrough = 0;
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
		replaceDamaged = "Land_House_C_4_dam_EP1";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\HouseC\House_C_4_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\Structures_E\HouseC\Data\House_C_4_01_multi.rvmat","Ca\Structures_E\HouseC\Data\destruct_half_House_C_4_01_multi.rvmat","Ca\Structures_E\HouseC\Data\destruct_full_House_C_4_01_multi.rvmat","Ca\Structures_E\HouseC\Data\House_C_4_02_multi.rvmat","Ca\Structures_E\HouseC\Data\destruct_half_House_C_4_02_multi.rvmat","Ca\Structures_E\HouseC\Data\destruct_full_House_C_4_02_multi.rvmat"};
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
	class Land_House_C_4_dam_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\HouseC\House_C_4_dam_EP1";
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
			class Hit4
			{
				armor = 0.3;
				material = -1;
				name = "dam4";
				visual = "damT4";
				passThrough = 0;
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
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\HouseC\House_C_4_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
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
			class Hit3: Hit1
			{
				hitpoint = "Hit3";
			};
			class Hit4: Hit1
			{
				hitpoint = "Hit4";
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
	class Land_House_C_5_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\HouseC\House_C_5_EP1";
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
		replaceDamagedHitpoints[] = {"Hit1","Hit2"};
		replaceDamaged = "Land_House_C_5_dam_EP1";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\HouseC\House_C_5_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\Structures_E\HouseC\Data\House_C_5_01_multi.rvmat","Ca\Structures_E\HouseC\Data\destruct_half_House_C_5_01_multi.rvmat","Ca\Structures_E\HouseC\Data\destruct_full_House_C_5_01_multi.rvmat","Ca\Structures_E\HouseC\Data\House_C_5_02_multi.rvmat","Ca\Structures_E\HouseC\Data\destruct_half_House_C_5_02_multi.rvmat","Ca\Structures_E\HouseC\Data\destruct_full_House_C_5_02_multi.rvmat"};
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
	class Land_House_C_5_dam_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\HouseC\House_C_5_dam_EP1";
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
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\HouseC\House_C_5_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
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
	class Land_House_C_5_V1_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\HouseC\House_C_5_V1_EP1";
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
		replaceDamagedHitpoints[] = {"Hit1","Hit2"};
		replaceDamaged = "Land_House_C_5_V1_dam_EP1";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\HouseC\House_C_5_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\Structures_E\HouseC\Data\House_C_5_01_multi.rvmat","Ca\Structures_E\HouseC\Data\destruct_half_House_C_5_01_multi.rvmat","Ca\Structures_E\HouseC\Data\destruct_full_House_C_5_01_multi.rvmat","Ca\Structures_E\HouseC\Data\House_C_5_02_multi.rvmat","Ca\Structures_E\HouseC\Data\destruct_half_House_C_5_02_multi.rvmat","Ca\Structures_E\HouseC\Data\destruct_full_House_C_5_02_multi.rvmat"};
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
	class Land_House_C_5_V1_dam_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\HouseC\House_C_5_V1_dam_EP1";
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
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\HouseC\House_C_5_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
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
	class Land_House_C_5_V2_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\HouseC\House_C_5_V2_EP1";
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
		replaceDamagedHitpoints[] = {"Hit1","Hit2"};
		replaceDamaged = "Land_House_C_5_V2_dam_EP1";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\HouseC\House_C_5_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\Structures_E\HouseC\Data\House_C_5_01_multi.rvmat","Ca\Structures_E\HouseC\Data\destruct_half_House_C_5_01_multi.rvmat","Ca\Structures_E\HouseC\Data\destruct_full_House_C_5_01_multi.rvmat","Ca\Structures_E\HouseC\Data\House_C_5_02_multi.rvmat","Ca\Structures_E\HouseC\Data\destruct_half_House_C_5_02_multi.rvmat","Ca\Structures_E\HouseC\Data\destruct_full_House_C_5_02_multi.rvmat"};
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
	class Land_House_C_5_V2_dam_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\HouseC\House_C_5_V2_dam_EP1";
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
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\HouseC\House_C_5_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
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
	class Land_House_C_5_V3_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\HouseC\House_C_5_V3_EP1";
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
		replaceDamagedHitpoints[] = {"Hit1","Hit2"};
		replaceDamaged = "Land_House_C_5_V3_dam_EP1";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\HouseC\House_C_5_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\Structures_E\HouseC\Data\House_C_5_01_multi.rvmat","Ca\Structures_E\HouseC\Data\destruct_half_House_C_5_01_multi.rvmat","Ca\Structures_E\HouseC\Data\destruct_full_House_C_5_01_multi.rvmat","Ca\Structures_E\HouseC\Data\House_C_5_02_multi.rvmat","Ca\Structures_E\HouseC\Data\destruct_half_House_C_5_02_multi.rvmat","Ca\Structures_E\HouseC\Data\destruct_full_House_C_5_02_multi.rvmat"};
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
	class Land_House_C_5_V3_dam_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\HouseC\House_C_5_V3_dam_EP1";
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
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\HouseC\House_C_5_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
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
	class Land_House_C_9_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\HouseC\House_C_9_EP1";
		vehicleClass = "Test";
		class HitPoints
		{
			class Hit1
			{
				armor = 0.6;
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
		replaceDamaged = "Land_House_C_9_dam_EP1";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\HouseC\House_C_9_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\Structures_E\HouseC\Data\House_C_9_01_multi.rvmat","Ca\Structures_E\HouseC\Data\destruct_half_House_C_9_01_multi.rvmat","Ca\Structures_E\HouseC\Data\destruct_full_House_C_9_01_multi.rvmat","Ca\Structures_E\HouseC\Data\House_C_9_02_multi.rvmat","Ca\Structures_E\HouseC\Data\destruct_half_House_C_9_02_multi.rvmat","Ca\Structures_E\HouseC\Data\destruct_full_House_C_9_02_multi.rvmat"};
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
	class Land_House_C_9_dam_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\HouseC\House_C_9_dam_EP1";
		vehicleClass = "Test";
		class HitPoints
		{
			class Hit1
			{
				armor = 0.6;
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
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\HouseC\House_C_9_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
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
	class Land_House_C_10_EP1: House_EP1
	{
		scope = 1;
		model = "\CA\Structures_E\HouseC\House_C_10_EP1";
		vehicleClass = "Test";
		ladders[] = {{ "start1","end1" }};
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
			class Hit4
			{
				armor = 0.3;
				material = -1;
				name = "dam4";
				visual = "damT4";
				passThrough = 0;
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
		replaceDamaged = "Land_House_C_10_dam_EP1";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\HouseC\House_C_10_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\Structures_E\HouseC\Data\House_C_10_01_multi.rvmat","Ca\Structures_E\HouseC\Data\destruct_half_House_C_10_01_multi.rvmat","Ca\Structures_E\HouseC\Data\destruct_full_House_C_10_01_multi.rvmat","Ca\Structures_E\HouseC\Data\House_C_10_02_multi.rvmat","Ca\Structures_E\HouseC\Data\destruct_half_House_C_10_02_multi.rvmat","Ca\Structures_E\HouseC\Data\destruct_full_House_C_10_02_multi.rvmat"};
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
			class Hit3: Hit1
			{
				hitpoint = "Hit3";
			};
			class Hit4: Hit1
			{
				hitpoint = "Hit4";
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
		};
		actionBegin1 = "OpenDoors1";
		actionEnd1 = "OpenDoors1";
		actionBegin2 = "OpenDoors2";
		actionEnd2 = "OpenDoors2";
		actionBegin3 = "OpenDoors3";
		actionEnd3 = "OpenDoors3";
		actionBegin4 = "OpenDoors4";
		actionEnd4 = "OpenDoors4";
		actionBegin5 = "OpenDoors5";
		actionEnd5 = "OpenDoors5";
		actionBegin6 = "OpenDoors6";
		actionEnd6 = "OpenDoors6";
		actionBegin7 = "OpenDoors7";
		actionEnd7 = "OpenDoors7";
		actionBegin8 = "OpenDoors8";
		actionEnd8 = "OpenDoors8";
	};
	class Land_House_C_10_dam_EP1: House_EP1
	{
		scope = 1;
		model = "\CA\Structures_E\HouseC\House_C_10_dam_EP1";
		vehicleClass = "Test";
		ladders[] = {{ "start1","end1" }};
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
			class Hit4
			{
				armor = 0.3;
				material = -1;
				name = "dam4";
				visual = "damT4";
				passThrough = 0;
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
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\HouseC\House_C_10_ruins_EP1.p3d";
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
		};
		actionBegin1 = "OpenDoors1";
		actionEnd1 = "OpenDoors1";
		actionBegin2 = "OpenDoors2";
		actionEnd2 = "OpenDoors2";
		actionBegin3 = "OpenDoors3";
		actionEnd3 = "OpenDoors3";
		actionBegin4 = "OpenDoors4";
		actionEnd4 = "OpenDoors4";
		actionBegin5 = "OpenDoors5";
		actionEnd5 = "OpenDoors5";
		actionBegin6 = "OpenDoors6";
		actionEnd6 = "OpenDoors6";
		actionBegin7 = "OpenDoors7";
		actionEnd7 = "OpenDoors7";
		actionBegin8 = "OpenDoors8";
		actionEnd8 = "OpenDoors8";
	};
	class Land_House_C_11_EP1: House_EP1
	{
		scope = 1;
		model = "\CA\Structures_E\HouseC\House_C_11_EP1";
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
		replaceDamaged = "Land_House_C_11_dam_EP1";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\HouseC\House_C_11_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\Structures_E\HouseC\Data\House_C_11_01.rvmat","Ca\Structures_E\HouseC\Data\destruct_half_House_C_11_01.rvmat","Ca\Structures_E\HouseC\Data\destruct_full_House_C_11_01.rvmat","Ca\Structures_E\HouseC\Data\House_C_11_02.rvmat","Ca\Structures_E\HouseC\Data\destruct_half_House_C_11_02.rvmat","Ca\Structures_E\HouseC\Data\destruct_full_House_C_11_02.rvmat"};
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
			class Hit3: Hit1
			{
				hitpoint = "Hit3";
			};
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
	class Land_House_C_11_dam_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\HouseC\House_C_11_dam_EP1";
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
				type = "\Ca\Structures_E\HouseC\House_C_11_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
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
			class Hit3: Hit1
			{
				hitpoint = "Hit3";
			};
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
	class Land_House_C_12_EP1: House_EP1
	{
		scope = 1;
		model = "\CA\Structures_E\HouseC\House_C_12_EP1";
		vehicleClass = "Test";
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
		replaceDamagedHitpoints[] = {"Hit1","Hit2"};
		replaceDamaged = "Land_House_C_12_dam_EP1";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\HouseC\House_C_12_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\Structures_E\HouseC\Data\House_C_12ext.rvmat","Ca\Structures_E\HouseC\Data\destruct_half_House_C_12ext.rvmat","Ca\Structures_E\HouseC\Data\destruct_full_House_C_12ext.rvmat","Ca\Structures_E\HouseC\Data\House_C_12in.rvmat","Ca\Structures_E\HouseC\Data\destruct_half_House_C_12in.rvmat","Ca\Structures_E\HouseC\Data\destruct_full_House_C_12in.rvmat"};
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
	class Land_House_C_12_dam_EP1: House_EP1
	{
		scope = 1;
		model = "\CA\Structures_E\HouseC\House_C_12_dam_EP1";
		vehicleClass = "Test";
		class HitPoints
		{
			class Hit1
			{
				armor = 0.4;
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
				armor = 0.4;
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
				type = "\Ca\Structures_E\HouseC\House_C_12_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
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
	class Land_House_C_1_ruins_EP1: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\Ca\Structures_E\HouseC\House_C_1_ruins_EP1";
	};
	class Land_House_C_1_v2_ruins_EP1: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\Ca\Structures_E\HouseC\House_C_1_v2_ruins_EP1";
	};
	class Land_House_C_2_ruins_EP1: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\Ca\Structures_E\HouseC\House_C_2_ruins_EP1";
	};
	class Land_House_C_3_ruins_EP1: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\Ca\Structures_E\HouseC\House_C_3_ruins_EP1";
	};
	class Land_House_C_4_ruins_EP1: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\Ca\Structures_E\HouseC\House_C_4_ruins_EP1";
	};
	class Land_House_C_5_ruins_EP1: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\Ca\Structures_E\HouseC\House_C_5_ruins_EP1";
	};
	class Land_House_C_9_ruins_EP1: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\Ca\Structures_E\HouseC\House_C_9_ruins_EP1";
	};
	class Land_House_C_10_ruins_EP1: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\Ca\Structures_E\HouseC\House_C_10_ruins_EP1";
	};
	class Land_House_C_11_ruins_EP1: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\Ca\Structures_E\HouseC\House_C_11_ruins_EP1";
	};
	class Land_House_C_12_ruins_EP1: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\Ca\Structures_E\HouseC\House_C_12_ruins_EP1";
	};
};
//};

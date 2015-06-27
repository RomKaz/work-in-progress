////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:06:18 2014 : Source 'file' date Fri Oct 31 06:06:18 2014
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

//Class STRUCTURES_PMC : buildings\ruins\farm_cowshed\config.bin{
class CfgPatches
{
	class CAStructures_PMC_Buildings_Ruin_Cowshed
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.54;
		requiredAddons[] = {"CAStructures_PMC_Buildings"};
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
	class Land_Ruin_Cowshed_a_PMC: House
	{
		scope = 1;
		armor = 600;
		model = "\ca\Structures_PMC\Buildings\Ruins\Farm_Cowshed\Ruin_Cowshed_a_PMC";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\ca\Structures_PMC\Buildings\Ruins\Farm_Cowshed\Ruin_Cowshed_a_ruins_PMC.p3d";
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
				armor = 0.15;
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
			class Hit2
			{
				armor = 0.15;
				material = -1;
				name = "dam 2";
				visual = "damT2";
				passThrough = 0;
				convexComponent = "dam 2";
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
				armor = 0.15;
				material = -1;
				name = "dam 3";
				visual = "damT3";
				passThrough = 0;
				convexComponent = "dam 3";
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
				armor = 0.15;
				material = -1;
				name = "dam 4";
				visual = "damT4";
				passThrough = 0;
				convexComponent = "dam 4";
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
			class Hit5
			{
				armor = 0.15;
				material = -1;
				name = "dam 5";
				visual = "damT5";
				passThrough = 0;
				convexComponent = "dam 5";
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
			class Hit6
			{
				armor = 0.15;
				material = -1;
				name = "dam 6";
				visual = "damT6";
				passThrough = 0;
				convexComponent = "dam 6";
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
			class door01_a
			{
				animPeriod = 1;
				initPhase = 1;
			};
			class door01_b
			{
				animPeriod = 1;
				initPhase = 1;
			};
			class door02_a
			{
				animPeriod = 1;
				initPhase = 1;
			};
			class door02_b
			{
				animPeriod = 1;
				initPhase = 0;
			};
			class door03
			{
				animPeriod = 1;
				initPhase = 0;
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
			class Hit5: Hit1
			{
				hitpoint = "Hit5";
			};
			class Hit6: Hit1
			{
				hitpoint = "Hit6";
			};
		};
		class UserActions
		{
			class OpenDoors1
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "door01_a_axis";
				radius = 3;
				onlyForPlayer = 0;
				condition = "this animationPhase ""door01_a"" < 0.5";
				statement = "this animate [""door01_a"", 1];this animate [""door01_b"", 1]";
			};
			class CloseDoors1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "door01_a_axis";
				radius = 3;
				onlyForPlayer = 0;
				condition = "this animationPhase ""door01_a"" >= 0.5";
				statement = "this animate [""door01_a"", 0];this animate [""door01_b"", 0]";
			};
			class OpenDoors3
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "door02_a_axis";
				radius = 3;
				onlyForPlayer = 0;
				condition = "this animationPhase ""door02_a"" < 0.5";
				statement = "this animate [""door02_a"", 1];this animate [""door02_b"", 1]";
			};
			class CloseDoors3
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "door02_a_axis";
				radius = 3;
				onlyForPlayer = 0;
				condition = "this animationPhase ""door02_a"" >= 0.5";
				statement = "this animate [""door02_a"", 0];this animate [""door02_b"", 0]";
			};
			class OpenDoors5
			{
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "door03_axis";
				radius = 3;
				onlyForPlayer = 0;
				condition = "this animationPhase ""door03"" < 0.5";
				statement = "this animate [""door03"", 1]";
			};
			class CloseDoors5
			{
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "door03_axis";
				radius = 3;
				onlyForPlayer = 0;
				condition = "this animationPhase ""door03"" >= 0.5";
				statement = "this animate [""door03"", 0]";
			};
		};
		actionBegin1 = "OpenDoors1";
		actionEnd1 = "OpenDoors1";
		actionBegin3 = "OpenDoors3";
		actionEnd3 = "OpenDoors3";
		actionBegin5 = "OpenDoors5";
		actionEnd5 = "OpenDoors5";
	};
	class Land_Ruin_Cowshed_b_PMC: House
	{
		scope = 1;
		armor = 500;
		model = "\ca\Structures_PMC\Buildings\Ruins\Farm_Cowshed\Ruin_Cowshed_b_PMC";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\ca\Structures_PMC\Buildings\Ruins\Farm_Cowshed\Ruin_Cowshed_b_ruins_PMC.p3d";
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
				armor = 0.15;
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
			class Hit2
			{
				armor = 0.15;
				material = -1;
				name = "dam 2";
				visual = "damT2";
				passThrough = 0;
				convexComponent = "dam 2";
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
				armor = 0.15;
				material = -1;
				name = "dam 3";
				visual = "damT3";
				passThrough = 0;
				convexComponent = "dam 3";
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
				armor = 0.15;
				material = -1;
				name = "dam 4";
				visual = "damT4";
				passThrough = 0;
				convexComponent = "dam 4";
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
			class Hit5
			{
				armor = 0.15;
				material = -1;
				name = "dam 5";
				visual = "damT5";
				passThrough = 0;
				convexComponent = "dam 5";
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
			class Hit3: Hit1
			{
				hitpoint = "Hit3";
			};
			class Hit4: Hit1
			{
				hitpoint = "Hit4";
			};
			class Hit5: Hit1
			{
				hitpoint = "Hit5";
			};
		};
	};
	class Land_Ruin_Cowshed_c_PMC: House
	{
		scope = 1;
		armor = 700;
		model = "\ca\Structures_PMC\Buildings\Ruins\Farm_Cowshed\Ruin_Cowshed_c_PMC";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\ca\Structures_PMC\Buildings\Ruins\Farm_Cowshed\Ruin_Cowshed_c_ruins_PMC.p3d";
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
				armor = 0.15;
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
			class Hit2
			{
				armor = 0.15;
				material = -1;
				name = "dam 2";
				visual = "damT2";
				passThrough = 0;
				convexComponent = "dam 2";
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
				armor = 0.15;
				material = -1;
				name = "dam 3";
				visual = "damT3";
				passThrough = 0;
				convexComponent = "dam 3";
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
				armor = 0.15;
				material = -1;
				name = "dam 4";
				visual = "damT4";
				passThrough = 0;
				convexComponent = "dam 4";
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
			class door_a
			{
				animPeriod = 1;
				initPhase = 1;
			};
			class door_b
			{
				animPeriod = 1;
				initPhase = 1;
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
			class Hit5: Hit1
			{
				hitpoint = "Hit5";
			};
		};
		class UserActions
		{
			class OpenDoors1
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "door_a_axis";
				radius = 3;
				onlyForPlayer = 0;
				condition = "this animationPhase ""door_a"" < 0.5";
				statement = "this animate [""door_a"", 1];this animate [""door_b"", 1]";
			};
			class CloseDoors1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "door_a_axis";
				radius = 3;
				onlyForPlayer = 0;
				condition = "this animationPhase ""door_a"" >= 0.5";
				statement = "this animate [""door_a"", 0];this animate [""door_b"", 0]";
			};
		};
		actionBegin1 = "OpenDoors1";
		actionEnd1 = "OpenDoors1";
	};
	class Land_Ruin_Cowshed_a_ruins_PMC: Ruins
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\ca\Structures_PMC\Buildings\Ruins\Farm_Cowshed\Ruin_Cowshed_a_ruins_PMC";
	};
	class Land_Ruin_Cowshed_b_ruins_PMC: Ruins
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\ca\Structures_PMC\Buildings\Ruins\Farm_Cowshed\Ruin_Cowshed_b_ruins_PMC";
	};
	class Land_Ruin_Cowshed_c_ruins_PMC: Ruins
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\ca\Structures_PMC\Buildings\Ruins\Farm_Cowshed\Ruin_Cowshed_c_ruins_PMC";
	};
};
//};

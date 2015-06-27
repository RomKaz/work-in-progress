////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:11:58 2014 : Source 'file' date Fri Oct 31 06:11:58 2014
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

//Class structures_e : Mil\config.bin{
class CfgPatches
{
	class CAStructures_E_Mil
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
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
	class Land_Mil_ControlTower_EP1: House_EP1
	{
		scope = 1;
		armor = 400;
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\ca\Structures_E\Mil\Mil_ControlTower_ruins_EP1.p3d";
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
				armor = 0.25;
				material = -1;
				name = "dam 1";
				visual = "damT1";
				passThrough = 1;
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
				armor = 0.25;
				material = -1;
				name = "dam 2";
				visual = "damT2";
				passThrough = 1;
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
				armor = 0.25;
				material = -1;
				name = "dam 3";
				visual = "damT3";
				passThrough = 1;
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
				armor = 0.25;
				material = -1;
				name = "dam 4";
				visual = "damT4";
				passThrough = 1;
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
				armor = 0.25;
				material = -1;
				name = "dam 5";
				visual = "damT5";
				passThrough = 1;
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
				armor = 0.25;
				material = -1;
				name = "dam 6";
				visual = "damT6";
				passThrough = 1;
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
			class Hitglass
			{
				armor = 0.0005;
				material = -1;
				name = "dam glass";
				visual = "damTglass";
				passThrough = 0;
				convexComponent = "dam glass";
			};
			class Hittower
			{
				armor = 0.0005;
				material = -1;
				name = "dam tower";
				visual = "damTtower";
				passThrough = 0;
				convexComponent = "dam tower";
			};
		};
		replaceDamagedHitpoints[] = {"Hit1","Hit2","Hit3","Hit4","Hit5","Hit6"};
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\Structures_E\Mil\Data\Mil_ControlTower_windows1_ep1.rvmat","ca\Structures_E\Mil\Data\destruct_half_Mil_ControlTower_windows1_ep1.rvmat","ca\Structures_E\Mil\Data\destruct_full_Mil_ControlTower_windows1_ep1.rvmat"};
		};
		model = "\CA\Structures_E\Mil\Mil_ControlTower_EP1";
		ladders[] = {{ "start1","end1" },{ "start2","end2" }};
		class AnimationSources
		{
			class dvere_spodni_R
			{
				animPeriod = 1;
				initPhase = 0;
				source = "user";
			};
			class dvere_spodni_L
			{
				animPeriod = 1;
				initPhase = 1;
				source = "user";
			};
			class dvere_vrchni
			{
				animPeriod = 1;
				initPhase = 1;
				source = "user";
			};
			class HitTower
			{
				source = "Hit";
				hitpoint = "HitTower";
				raw = 1;
			};
		};
		class UserActions
		{
			class OpenDoors1
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "Dvere_spodni_R_osa";
				radius = 2;
				onlyForPlayer = 0;
				condition = "this animationPhase ""Dvere_spodni_R"" < 0.5";
				statement = "this animate [""Dvere_spodni_R"", 1];this animate [""Dvere_spodni_L"", 1]";
			};
			class CloseDoors1: OpenDoors1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				condition = "this animationPhase ""Dvere_spodni_R"" >= 0.5";
				statement = "this animate [""Dvere_spodni_R"", 0];this animate [""Dvere_spodni_L"", 0]";
			};
			class OpenDoors3
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "Dvere_Vrchni_osa";
				radius = 2;
				onlyForPlayer = 0;
				condition = "this animationPhase ""dvere_vrchni"" < 0.5";
				statement = "this animate [""dvere_vrchni"", 1]";
			};
			class CloseDoors3: OpenDoors3
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				condition = "this animationPhase ""dvere_vrchni"" >= 0.5";
				statement = "this animate [""dvere_vrchni"", 0]";
			};
		};
		actionBegin1 = "OpenDoors1";
		actionEnd1 = "OpenDoors1";
		actionBegin2 = "OpenDoors3";
		actionEnd2 = "OpenDoors3";
		class MarkerLights
		{
			class RedBlinking
			{
				name = "cerveny pozicni";
				color[] = {1.0,0.1,0.1,1};
				ambient[] = {0.1,0.01,0.01,1};
				brightness = 0.02;
				blinking = 1;
			};
		};
		replaceDamaged = "Land_Mil_ControlTower_dam_EP1";
		featureSize = 15;
	};
	class Land_Mil_ControlTower_dam_EP1: Land_Mil_ControlTower_EP1
	{
		replaceDamaged = "";
		model = "\CA\Structures_e\Mil\Mil_ControlTower_dam_EP1";
		scope = 1;
		class HitPoints
		{
			class Hit1
			{
				armor = 0.25;
				material = -1;
				name = "dam 1";
				visual = "damT1";
				passThrough = 1;
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
				armor = 0.25;
				material = -1;
				name = "dam 2";
				visual = "damT2";
				passThrough = 1;
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
				armor = 0.25;
				material = -1;
				name = "dam 3";
				visual = "damT3";
				passThrough = 1;
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
				armor = 0.25;
				material = -1;
				name = "dam 4";
				visual = "damT4";
				passThrough = 1;
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
				armor = 0.25;
				material = -1;
				name = "dam 5";
				visual = "damT5";
				passThrough = 1;
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
				armor = 0.25;
				material = -1;
				name = "dam 6";
				visual = "damT6";
				passThrough = 1;
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
			class HitTower
			{
				armor = 1;
				material = -1;
				name = "dam tower";
				visual = "";
				passThrough = 1;
			};
			class HitGlass
			{
				armor = 1;
				material = -1;
				name = "dam glass";
				visual = "";
				passThrough = 1;
			};
		};
		class AnimationSources: AnimationSources
		{
			class dvere_spodni_R
			{
				animPeriod = 1;
				initPhase = 0;
				source = "user";
			};
			class dvere_spodni_L
			{
				animPeriod = 1;
				initPhase = 1;
				source = "user";
			};
			class dvere_vrchni
			{
				animPeriod = 1;
				initPhase = 1;
				source = "user";
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
			class HitTower
			{
				source = "Hit";
				hitpoint = "HitTower";
				raw = 1;
			};
		};
		featureSize = 15;
	};
	class Land_Mil_ControlTower_ruins_EP1: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\ca\Structures_E\Mil\Mil_ControlTower_ruins_EP1";
	};
	class Land_Mil_House_EP1: House_EP1
	{
		scope = 1;
		armor = 400;
		model = "\CA\Structures_E\Mil\Mil_House_EP1";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\ca\Structures_E\Mil\Mil_House_ruins_EP1.p3d";
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
				armor = 0.25;
				material = -1;
				name = "dam 1";
				visual = "damT1";
				passThrough = 1;
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
				armor = 0.25;
				material = -1;
				name = "dam 2";
				visual = "damT2";
				passThrough = 1;
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
				armor = 0.25;
				material = -1;
				name = "dam 3";
				visual = "damT3";
				passThrough = 1;
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
				armor = 0.25;
				material = -1;
				name = "dam 4";
				visual = "damT4";
				passThrough = 1;
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
				armor = 0.25;
				material = -1;
				name = "dam 5";
				visual = "damT5";
				passThrough = 1;
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
				armor = 0.25;
				material = -1;
				name = "dam 6";
				visual = "damT6";
				passThrough = 1;
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
			class Hitglass
			{
				armor = 0.0005;
				material = -1;
				name = "dam glass";
				visual = "damTglass";
				passThrough = 0;
				convexComponent = "dam glass";
			};
		};
		replaceDamagedHitpoints[] = {"Hit1","Hit2","Hit3","Hit4","Hit5","Hit6"};
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\Structures_E\Mil\Data\Mil_House_windows_ep1.rvmat","ca\Structures_E\Mil\Data\destruct_half_Mil_House_windows_ep1.rvmat","ca\Structures_E\Mil\Data\destruct_full_Mil_House_windows_ep1.rvmat"};
		};
		replaceDamaged = "Land_Mil_House_dam_EP1";
		featureSize = 10;
	};
	class Land_Mil_House_dam_EP1: Land_Mil_House_EP1
	{
		scope = 1;
		replaceDamaged = "";
		model = "\CA\Structures_E\Mil\Mil_House_dam_EP1";
		class HitPoints
		{
			class Hit1
			{
				armor = 0.2;
				material = -1;
				name = "dam 1";
				visual = "damT1";
				passThrough = 1;
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
				armor = 0.2;
				material = -1;
				name = "dam 2";
				visual = "damT2";
				passThrough = 1;
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
				armor = 0.2;
				material = -1;
				name = "dam 3";
				visual = "damT3";
				passThrough = 1;
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
				armor = 0.2;
				material = -1;
				name = "dam 4";
				visual = "damT4";
				passThrough = 1;
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
				armor = 0.2;
				material = -1;
				name = "dam 5";
				visual = "damT5";
				passThrough = 1;
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
				armor = 0.2;
				material = -1;
				name = "dam 6";
				visual = "damT6";
				passThrough = 1;
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
			class HitGlass
			{
				armor = 1;
				material = -1;
				name = "dam glass";
				visual = "";
				passThrough = 1;
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
			class Hit6: Hit1
			{
				hitpoint = "Hit6";
			};
		};
		featureSize = 10;
	};
	class Land_Mil_House_ruins_EP1: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\ca\Structures_E\Mil\Mil_House_ruins_EP1";
	};
	class Land_Mil_Barracks_i_EP1: House_EP1
	{
		scope = 1;
		armor = 400;
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\ca\Structures_E\Mil\Mil_Barracks_i_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		model = "\CA\Structures_E\Mil\Mil_Barracks_i_EP1";
		class AnimationSources
		{
			class Door_01
			{
				animPeriod = 1;
				source = "user";
			};
			class Door_03
			{
				animPeriod = 1;
				source = "user";
			};
			class Door_04
			{
				animPeriod = 1;
				source = "user";
			};
			class Door_05
			{
				animPeriod = 1;
				source = "user";
			};
			class Door_06
			{
				animPeriod = 1;
				source = "user";
			};
			class HitGlass
			{
				armor = 1;
				material = -1;
				name = "dam glass";
				visual = "";
				passThrough = 1;
			};
		};
		class UserActions
		{
			class OpenDoors1
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "Door_01_klika";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "this animationPhase ""Door_01"" >= 0.5";
				statement = "this animate [""Door_01"", 0]";
			};
			class CloseDoors1: OpenDoors1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				condition = "this animationPhase ""Door_01"" < 0.5";
				statement = "this animate [""Door_01"", 1]";
			};
			class OpenDoors3: OpenDoors1
			{
				position = "Door_03_klika";
				condition = "this animationPhase ""Door_03"" >= 0.5";
				statement = "this animate [""Door_03"", 0]";
			};
			class CloseDoors3: OpenDoors3
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				condition = "this animationPhase ""Door_03"" < 0.5";
				statement = "this animate [""Door_03"", 1]";
			};
			class OpenDoors4: OpenDoors1
			{
				position = "Door_04_klika";
				condition = "this animationPhase ""Door_04"" >= 0.5";
				statement = "this animate [""Door_04"", 0]";
			};
			class CloseDoors4: OpenDoors4
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				condition = "this animationPhase ""Door_04"" < 0.5";
				statement = "this animate [""Door_04"", 1]";
			};
			class OpenDoors5: OpenDoors1
			{
				position = "Door_05_klika";
				condition = "this animationPhase ""Door_05"" >= 0.5";
				statement = "this animate [""Door_05"", 0]";
			};
			class CloseDoors5: OpenDoors5
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				condition = "this animationPhase ""Door_05"" < 0.5";
				statement = "this animate [""Door_05"", 1]";
			};
			class OpenDoors6: OpenDoors1
			{
				position = "Door_06_klika";
				condition = "this animationPhase ""Door_06"" >= 0.5";
				statement = "this animate [""Door_06"", 0]";
			};
			class CloseDoors6: OpenDoors6
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				condition = "this animationPhase ""Door_06"" < 0.5";
				statement = "this animate [""Door_06"", 1]";
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
		actionBegin6 = "OpenDoors6";
		actionEnd6 = "OpenDoors6";
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\Structures_E\Mil\Data\Mil_Barracks_i_exter_EP1_multi.rvmat","ca\Structures_E\Mil\Data\destruct_half_Mil_Barracks_i_exter_EP1_multi.rvmat","ca\Structures_E\Mil\Data\destruct_full_Mil_Barracks_i_exter_EP1_multi.rvmat","ca\Structures_E\Mil\Data\Mil_Barracks_i_EP1_Glass.rvmat","ca\Structures_E\Mil\Data\destruct_half_Mil_Barracks_i_EP1_Glass.rvmat","ca\Structures_E\Mil\Data\destruct_full_Mil_Barracks_i_EP1_Glass.rvmat","ca\structures\mil\data\Mil_Barracks_i_inter_multi.rvmat","ca\structures\mil\data\destruct_half_Mil_Barracks_i_inter_multi.rvmat","ca\structures\mil\data\destruct_full_Mil_Barracks_i_inter_multi.rvmat","ca\Structures_E\Mil\Data\Mil_Barracks_i_EP1_super.rvmat","ca\Structures_E\Mil\Data\destruct_half_Mil_Barracks_i_EP1_super.rvmat","ca\Structures_E\Mil\Data\destruct_full_Mil_Barracks_i_EP1_super.rvmat"};
		};
	};
	class Land_Mil_Barracks_i_ruins_EP1: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\ca\Structures_E\Mil\Mil_Barracks_i_ruins_EP1";
	};
	class Land_Mil_Barracks_EP1: House_EP1
	{
		scope = 1;
		armor = 400;
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\ca\Structures_E\Mil\Mil_Barracks_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		model = "\CA\Structures_E\Mil\Mil_Barracks_EP1";
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\Structures_E\Mil\Data\Mil_Barracks_EP1.rvmat","ca\Structures_E\Mil\Data\destruct_half_Mil_Barracks_EP1.rvmat","ca\Structures_E\Mil\Data\destruct_full_Mil_Barracks_EP1.rvmat","ca\Structures_E\Mil\Data\Mil_Barracks_EP1_muti.rvmat","ca\Structures_E\Mil\Data\destruct_half_Mil_Barracks_EP1_muti.rvmat","ca\Structures_E\Mil\Data\destruct_full_Mil_Barracks_EP1_muti.rvmat"};
		};
	};
	class Land_Mil_Barracks_Ruins_EP1: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\ca\Structures_E\Mil\Mil_Barracks_Ruins_EP1";
	};
	class Land_Mil_Barracks_L_EP1: House_EP1
	{
		scope = 1;
		armor = 400;
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\ca\Structures_E\Mil\Mil_Barracks_L_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		model = "\ca\Structures_E\Mil\Mil_Barracks_L_EP1";
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\Structures_E\Mil\Data\Mil_Barracks_L_EP1.rvmat","ca\Structures_E\Mil\Data\destruct_half_Mil_Barracks_L_EP1.rvmat","ca\Structures_E\Mil\Data\destruct_full_Mil_Barracks_L_EP1.rvmat","ca\Structures_E\Mil\Data\Mil_Barracks_L_EP1_multi.rvmat","ca\Structures_E\Mil\Data\destruct_half_Mil_Barracks_L_EP1_multi.rvmat","ca\Structures_E\Mil\Data\destruct_full_Mil_Barracks_L_EP1_multi.rvmat"};
		};
	};
	class Land_Mil_Barracks_L_ruins_EP1: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\ca\Structures_E\Mil\Mil_Barracks_L_ruins_EP1";
	};
	class Land_Mil_Guardhouse_EP1: House_EP1
	{
		scope = 1;
		armor = 400;
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\ca\Structures_E\Mil\Mil_Guardhouse_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		model = "\ca\Structures_E\Mil\Mil_Guardhouse_EP1";
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\Structures_E\Mil\Data\Mil_GuardHouse_multi_EP1.rvmat","ca\Structures_E\Mil\Data\destruct_half_Mil_GuardHouse_multi_EP1.rvmat","ca\Structures_E\Mil\Data\destruct_full_Mil_GuardHouse_multi_EP1.rvmat","ca\Structures_E\Mil\Data\Mil_GuardHouse_SuperGlass_EP1.rvmat","ca\Structures_E\Mil\Data\destruct_half_Mil_GuardHouse_SuperGlass_EP1.rvmat","ca\Structures_E\Mil\Data\destruct_full_Mil_GuardHouse_SuperGlass_EP1.rvmat","ca\Structures_E\Mil\Data\Mil_GuardHouse_tile_EP1.rvmat","ca\Structures_E\Mil\Data\destruct_half_Mil_GuardHouse_tile_EP1.rvmat","ca\Structures_E\Mil\Data\destruct_full_Mil_GuardHouse_tile_EP1.rvmat"};
		};
	};
	class Land_Mil_Guardhouse_ruins_EP1: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\ca\Structures_E\Mil\Mil_Guardhouse_ruins_EP1";
	};
	class Land_Mil_hangar_EP1: House_EP1
	{
		scope = 1;
		vehicleClass = "Test";
		model = "\ca\Structures_E\Mil\Mil_Hangar_ep1.p3d";
		armor = 800;
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\ca\Structures_E\Mil\Mil_hangar_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		featureSize = 12;
	};
	class Land_Mil_hangar_ruins_EP1: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\ca\Structures_E\Mil\Mil_hangar_ruins_EP1";
	};
	class Land_Mil_Repair_center_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\Mil\Mil_Repair_center_ep1";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\ca\Structures_E\Mil\Mil_Repair_center_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		supplyRadius = 2.4;
		armor = 500;
	};
	class Land_Mil_Repair_center_ruins_EP1: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\ca\Structures_E\Mil\Mil_Repair_center_ruins_EP1";
	};
};
//};

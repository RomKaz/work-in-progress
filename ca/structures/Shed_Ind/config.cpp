////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:06:16 2014 : Source 'file' date Fri Oct 31 06:06:16 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class structures : Shed_Ind\config.bin{
class CfgPatches
{
	class CAStructuresHouse_Shed_Ind
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
	class Land_Shed_Ind02: House
	{
		scope = 1;
		armor = 400;
		model = "\CA\Structures\Shed_Ind\Shed_Ind02";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures\Shed_Ind\Shed_Ind02_ruins.p3d";
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
				armor = 0.1;
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
				armor = 0.1;
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
				armor = 0.1;
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
				armor = 0.1;
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
				armor = 0.1;
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
				armor = 0.1;
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
		};
		class AnimationSources
		{
			class dvere1L
			{
				animPeriod = 2;
				initPhase = 1;
			};
			class dvere2L: dvere1L{};
			class dvere1R: dvere1L{};
			class dvere2R: dvere1L{};
		};
		class UserActions
		{
			class OpenDoors
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "door_01_action";
				radius = 3;
				onlyForPlayer = 0;
				condition = "this animationPhase ""dvere1L"" < 0.5";
				statement = "this animate [""dvere1L"", 1];this animate [""dvere1R"", 1]";
			};
			class CloseDoors1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "door_01_action";
				radius = 3;
				onlyForPlayer = 0;
				condition = "this animationPhase ""dvere1L"" >= 0.5";
				statement = "this animate [""dvere1L"", 0];this animate [""dvere1R"", 0]";
			};
			class OpenDoors2
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "door_02_action";
				radius = 2;
				onlyForPlayer = 0;
				condition = "this animationPhase ""dvere2L"" < 0.5";
				statement = "this animate [""dvere2L"", 1];this animate [""dvere2R"", 1]";
			};
			class CloseDoors2
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "door_02_action";
				radius = 2;
				onlyForPlayer = 0;
				condition = "this animationPhase ""dvere2L"" >= 0.5";
				statement = "this animate [""dvere2L"", 0];this animate [""dvere2R"", 0]";
			};
		};
		actionBegin1 = "OpenDoors1";
		actionEnd1 = "OpenDoors1";
		actionBegin2 = "OpenDoors2";
		actionEnd2 = "OpenDoors2";
		replaceDamaged = "Land_Shed_Ind02_dam";
		replaceDamagedHitpoints[] = {"Hit1","Hit2","Hit3","Hit4","Hit5","Hit6"};
	};
	class Land_Shed_Ind02_dam: Land_Shed_Ind02
	{
		scope = 1;
		vehicleClass = "test";
		replaceDamaged = "";
		model = "\CA\Structures\Shed_Ind\Shed_Ind02_dam";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures\Shed_Ind\Shed_Ind02_ruins.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		class AnimationSources: AnimationSources
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
			class Hit7: Hit1
			{
				hitpoint = "Hit7";
			};
		};
		class UserActions
		{
			class OpenDoors
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "door_01_action";
				radius = 3;
				onlyForPlayer = 0;
				condition = "this animationPhase ""dvere1L"" < 0.5";
				statement = "this animate [""dvere1L"", 1];this animate [""dvere1R"", 1]";
			};
			class CloseDoors1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "door_01_action";
				radius = 3;
				onlyForPlayer = 0;
				condition = "this animationPhase ""dvere1L"" >= 0.5";
				statement = "this animate [""dvere1L"", 0];this animate [""dvere1R"", 0]";
			};
			class OpenDoors2
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "door_02_action";
				radius = 2;
				onlyForPlayer = 0;
				condition = "this animationPhase ""dvere2L"" < 0.5";
				statement = "this animate [""dvere2L"", 1];this animate [""dvere2R"", 1]";
			};
			class CloseDoors2
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "door_02_action";
				radius = 2;
				onlyForPlayer = 0;
				condition = "this animationPhase ""dvere2L"" >= 0.5";
				statement = "this animate [""dvere2L"", 0];this animate [""dvere2R"", 0]";
			};
		};
		actionBegin1 = "OpenDoors1";
		actionEnd1 = "OpenDoors1";
		actionBegin2 = "OpenDoors2";
		actionEnd2 = "OpenDoors2";
	};
	class Land_Shed_Ind02_ruins: Ruins
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\Ca\Structures\Shed_Ind\Shed_Ind02_ruins";
	};
};
//};

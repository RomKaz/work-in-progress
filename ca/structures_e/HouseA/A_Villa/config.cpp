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

//Class structures_e : HouseA\A_Villa\config.bin{
class CfgPatches
{
	class CAStructures_E_HouseA_A_Villa
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAStructures_E_houseA"};
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
	class Land_A_Villa_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\HouseA\A_Villa\A_Villa_EP1";
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
		replaceDamaged = "Land_A_Villa_dam_EP1";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\HouseA\A_Villa\A_Villa_ruins_EP1.p3d";
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
		actionBegin9 = "OpenDoors9";
		actionEnd9 = "OpenDoors9";
		actionBegin10 = "OpenDoors10";
		actionEnd10 = "OpenDoors10";
		actionBegin11 = "OpenDoors11";
		actionEnd11 = "OpenDoors11";
		actionBegin12 = "OpenDoors12";
		actionEnd12 = "OpenDoors12";
		featureSize = 12;
	};
	class Land_A_Villa_dam_EP1: Land_A_Villa_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\HouseA\A_Villa\A_Villa_dam_EP1";
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
		};
		replaceDamaged = "";
		featureSize = 12;
	};
	class Land_A_Villa_ruins_EP1: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\Ca\Structures_E\HouseA\A_Villa\A_Villa_ruins_EP1";
	};
};
//};

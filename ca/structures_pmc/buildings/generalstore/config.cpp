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

//Class STRUCTURES_PMC : buildings\generalstore\config.bin{
class CfgPatches
{
	class CAStructures_PMC_Buildings_GeneralStore_PMC
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
	class Land_GeneralStore_01a_PMC: House
	{
		scope = 1;
		armor = 400;
		animated = 1;
		model = "\ca\Structures_PMC\Buildings\GeneralStore\GeneralStore_01a_PMC";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\ca\Structures_PMC\Buildings\GeneralStore\GeneralStore_01a_ruins_pmc.p3d";
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
			class HitGlass1
			{
				armor = 8e-005;
				material = -1;
				name = "glass1";
				visual = "";
				passThrough = 0;
				depends = "Hit2";
			};
			class HitGlass2: HitGlass1
			{
				name = "glass2";
			};
			class HitGlass3: HitGlass1
			{
				name = "glass3";
			};
			class HitGlass4: HitGlass1
			{
				name = "glass4";
			};
			class HitGlass5: HitGlass1
			{
				name = "glass5";
			};
			class HitGlass6: HitGlass1
			{
				name = "glass6";
			};
			class HitGlass7: HitGlass1
			{
				name = "glass7";
				armor = 0.0008;
			};
			class HitGlass8: HitGlass7
			{
				name = "glass8";
			};
			class HitGlass9: HitGlass7
			{
				name = "glass9";
			};
			class HitGlass10: HitGlass7
			{
				name = "glass10";
			};
		};
		replaceDamagedHitpoints[] = {"Hit1","Hit2","Hit3","Hit4","Hit5"};
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
			class dvere3
			{
				animPeriod = 1;
				initPhase = 1;
			};
			class dvere4
			{
				animPeriod = 1;
				initPhase = 0;
			};
			class dvere5
			{
				animPeriod = 1;
				initPhase = 0;
			};
			class dvere6
			{
				animPeriod = 1;
				initPhase = 0;
			};
			class dvere7
			{
				animPeriod = 1;
				initPhase = 1;
			};
			class dvere8
			{
				animPeriod = 1;
				initPhase = 0;
			};
			class dvere9
			{
				animPeriod = 1;
				initPhase = 0;
			};
			class dvere10
			{
				animPeriod = 1;
				initPhase = 0;
			};
			class HitGlass1
			{
				source = "Hit";
				hitpoint = "HitGlass1";
				raw = 1;
			};
			class HitGlass2: HitGlass1
			{
				hitpoint = "HitGlass2";
			};
			class HitGlass3: HitGlass1
			{
				hitpoint = "HitGlass3";
			};
			class HitGlass4: HitGlass1
			{
				hitpoint = "HitGlass4";
			};
			class HitGlass5: HitGlass1
			{
				hitpoint = "HitGlass5";
			};
			class HitGlass6: HitGlass1
			{
				hitpoint = "HitGlass6";
			};
			class HitGlass7: HitGlass1
			{
				hitpoint = "HitGlass7";
			};
			class HitGlass8: HitGlass1
			{
				hitpoint = "HitGlass8";
			};
			class HitGlass9: HitGlass1
			{
				hitpoint = "HitGlass9";
			};
			class HitGlass10: HitGlass1
			{
				hitpoint = "HitGlass10";
			};
		};
		class UserActions
		{
			class OpenDoors1
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "osa_dvere1";
				radius = 3;
				onlyForPlayer = 0;
				condition = "this animationPhase ""dvere1"" < 0.5";
				statement = "this animate [""dvere1"", 1];this animate [""dvere2"", 1]";
			};
			class CloseDoors1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "osa_dvere1";
				radius = 3;
				onlyForPlayer = 0;
				condition = "this animationPhase ""dvere1"" >= 0.5";
				statement = "this animate [""dvere1"", 0];this animate [""dvere2"", 0]";
			};
			class OpenDoors2
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "osa_dvere2";
				radius = 3;
				onlyForPlayer = 0;
				condition = "this animationPhase ""dvere2"" < 0.5";
				statement = "this animate [""dvere2"", 1]";
			};
			class CloseDoors2
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "osa_dvere2";
				radius = 3;
				onlyForPlayer = 0;
				condition = "this animationPhase ""dvere2"" >= 0.5";
				statement = "this animate [""dvere2"", 0]";
			};
			class OpenDoors3
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "osa_dvere3";
				radius = 3;
				onlyForPlayer = 0;
				condition = "this animationPhase ""dvere3"" < 0.5";
				statement = "this animate [""dvere3"", 1];this animate [""dvere4"", 1]";
			};
			class CloseDoors3
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "osa_dvere3";
				radius = 3;
				onlyForPlayer = 0;
				condition = "this animationPhase ""dvere3"" >= 0.5";
				statement = "this animate [""dvere3"", 0];this animate [""dvere4"", 0]";
			};
			class OpenDoors4
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "osa_dvere4";
				radius = 3;
				onlyForPlayer = 0;
				condition = "this animationPhase ""dvere4"" < 0.5";
				statement = "this animate [""dvere4"", 1]";
			};
			class CloseDoors4
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "osa_dvere4";
				radius = 3;
				onlyForPlayer = 0;
				condition = "this animationPhase ""dvere4"" >= 0.5";
				statement = "this animate [""dvere4"", 0]";
			};
			class OpenDoors5
			{
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "osa_dvere5";
				radius = 3;
				onlyForPlayer = 0;
				condition = "this animationPhase ""dvere5"" < 0.5";
				statement = "this animate [""dvere5"", 1];this animate [""dvere6"", 1]";
			};
			class CloseDoors5
			{
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "osa_dvere5";
				radius = 3;
				onlyForPlayer = 0;
				condition = "this animationPhase ""dvere5"" >= 0.5";
				statement = "this animate [""dvere5"", 0];this animate [""dvere6"", 0]";
			};
			class OpenDoors6
			{
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "osa_dvere6";
				radius = 3;
				onlyForPlayer = 0;
				condition = "this animationPhase ""dvere6"" < 0.5";
				statement = "this animate [""dvere6"", 1]";
			};
			class CloseDoors6
			{
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "osa_dvere6";
				radius = 3;
				onlyForPlayer = 0;
				condition = "this animationPhase ""dvere6"" >= 0.5";
				statement = "this animate [""dvere6"", 0]";
			};
			class OpenDoors7
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "osa_dvere7";
				radius = 3;
				onlyForPlayer = 0;
				condition = "this animationPhase ""dvere7"" < 0.5";
				statement = "this animate [""dvere7"", 1];this animate [""dvere8"", 1]";
			};
			class CloseDoors7
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "osa_dvere7";
				radius = 3;
				onlyForPlayer = 0;
				condition = "this animationPhase ""dvere7"" >= 0.5";
				statement = "this animate [""dvere7"", 0];this animate [""dvere8"", 0]";
			};
			class OpenDoors8
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "osa_dvere8";
				radius = 3;
				onlyForPlayer = 0;
				condition = "this animationPhase ""dvere8"" < 0.5";
				statement = "this animate [""dvere8"", 1]";
			};
			class CloseDoors8
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "osa_dvere8";
				radius = 3;
				onlyForPlayer = 0;
				condition = "this animationPhase ""dvere8"" >= 0.5";
				statement = "this animate [""dvere8"", 0]";
			};
			class OpenDoors9
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "osa_dvere9";
				radius = 3;
				onlyForPlayer = 0;
				condition = "this animationPhase ""dvere9"" < 0.5";
				statement = "this animate [""dvere9"", 1];this animate [""dvere10"", 1]";
			};
			class CloseDoors9
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "osa_dvere9";
				radius = 3;
				onlyForPlayer = 0;
				condition = "this animationPhase ""dvere9"" >= 0.5";
				statement = "this animate [""dvere9"", 0];this animate [""dvere10"", 0]";
			};
			class OpenDoors10
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "osa_dvere10";
				radius = 3;
				onlyForPlayer = 0;
				condition = "this animationPhase ""dvere10"" < 0.5";
				statement = "this animate [""dvere10"", 1]";
			};
			class CloseDoors10
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "osa_dvere10";
				radius = 3;
				onlyForPlayer = 0;
				condition = "this animationPhase ""dvere10"" >= 0.5";
				statement = "this animate [""dvere10"", 0]";
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
		replaceDamaged = "Land_GeneralStore_01a_dam_PMC";
	};
	class Land_GeneralStore_01a_dam_PMC: Land_GeneralStore_01a_PMC
	{
		scope = 1;
		model = "\ca\Structures_PMC\Buildings\GeneralStore\GeneralStore_01a_dam_PMC";
		replaceDamaged = "";
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
		};
	};
	class Land_GeneralStore_01a_ruins_PMC: Ruins
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\ca\Structures_PMC\Buildings\GeneralStore\GeneralStore_01a_ruins_PMC";
	};
};
//};

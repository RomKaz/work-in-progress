////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:06:19 2014 : Source 'file' date Fri Oct 31 06:06:19 2014
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

//Class STRUCTURES_PMC : ind\fuelstation\config.bin{
class CfgPatches
{
	class CAStructures_PMC_FuelStation
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.03;
		requiredAddons[] = {"CAStructures_PMC"};
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
	class Strategic;
	class Land_FuelStation_Feed_PMC: Strategic
	{
		model = "\ca\Structures_PMC\Ind\FuelStation\FuelStation_Feed_PMC.p3d";
		transportFuel = 50000;
		nameSound = "fuelstation";
		class DestructionEffects
		{
			class FuelStationExp
			{
				simulation = "particles";
				type = "FuelStationExp";
				position = "";
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.001;
			};
			class FuelStationSmk1
			{
				simulation = "particles";
				type = "FuelStationSmk1";
				position = "";
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.001;
			};
			class Light1
			{
				simulation = "light";
				type = "ObjectDestructionLight";
				position = "DestructionFire";
				intensity = 0.001;
				interval = 1;
				lifeTime = 0.5;
			};
			class FuelFire1
			{
				simulation = "particles";
				type = "FuelFire1";
				position = "DestructionFire";
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.5;
			};
			class FuelSmoke1
			{
				simulation = "particles";
				type = "FuelSmoke1";
				position = "DestructionFire";
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.5;
			};
			class FuelSmoke2
			{
				simulation = "particles";
				type = "FuelSmoke2";
				position = "DestructionFire";
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.5;
			};
			class FuelDestr
			{
				simulation = "destroy";
				type = "FuelStationDestr";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class Land_FuelStation_Build_PMC: House_EP1
	{
		scope = 1;
		vehicleClass = "Test";
		armor = 3000;
		model = "\ca\Structures_PMC\Ind\FuelStation\FuelStation_Build_PMC";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\ca\Structures_PMC\Ind\FuelStation\FuelStation_Build_ruins_PMC.p3d";
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
			mat[] = {"ca\Structures_PMC\Ind\FuelStation\data\A_FuelStation_Build_Multi_F.rvmat","ca\Structures_PMC\Ind\FuelStation\data\destruct_half_A_FuelStation_Build_Multi_F.rvmat","ca\Structures_PMC\Ind\FuelStation\data\destruct_full_A_FuelStation_Build_Multi_F.rvmat","ca\Structures_PMC\Ind\FuelStation\data\A_FuelStation_Build_metal.rvmat","ca\Structures_PMC\Ind\FuelStation\data\destruct_half_A_FuelStation_Build_metal.rvmat","ca\Structures_PMC\Ind\FuelStation\data\destruct_full_A_FuelStation_Build_metal.rvmat"};
		};
		class AnimationSources
		{
			class door_1
			{
				source = "User";
				animPeriod = 1;
			};
			class door_2
			{
				source = "User";
				animPeriod = 1;
			};
		};
		class UserActions
		{
			class OpenDoors1
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "door_1_handle";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "this animationPhase ""door_1"" >= 0.5";
				statement = "this animate [""door_1"", 0]";
			};
			class CloseDoors1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "door_1_handle";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "this animationPhase ""door_1"" < 0.5";
				statement = "this animate [""door_1"", 1]";
			};
			class OpenDoors2
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "door_2_handle";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "this animationPhase ""door_2"" >= 0.5";
				statement = "this animate [""door_2"", 0]";
			};
			class CloseDoors2
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "door_2_handle";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "this animationPhase ""door_2"" < 0.5";
				statement = "this animate [""door_2"", 1]";
			};
		};
		actionBegin1 = "OpenDoors1";
		actionEnd1 = "OpenDoors1";
		actionBegin2 = "OpenDoors2";
		actionEnd2 = "OpenDoors2";
	};
	class Land_FuelStation_Shed_PMC: House_EP1
	{
		scope = 1;
		vehicleClass = "Test";
		armor = 5000;
		model = "\ca\Structures_PMC\Ind\FuelStation\FuelStation_Shed_PMC";
		class HitPoints
		{
			class Hit1
			{
				armor = 0.1;
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
			mat[] = {"ca\Structures_PMC\Ind\FuelStation\data\Shed_metal2_F.rvmat","ca\Structures_PMC\Ind\FuelStation\data\destruct_half_Shed_metal2_F.rvmat","ca\Structures_PMC\Ind\FuelStation\data\destruct_full_Shed_metal2_F.rvmat","ca\Structures_PMC\Ind\FuelStation\data\Shed_multi_F.rvmat","ca\Structures_PMC\Ind\FuelStation\data\destruct_half_Shed_multi_F.rvmat","ca\Structures_PMC\Ind\FuelStation\data\destruct_full_Shed_multi_F.rvmat"};
		};
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\ca\Structures_PMC\Ind\FuelStation\FuelStation_Shed_ruins_PMC.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class Land_FuelStation_Build_ruins_PMC: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\ca\Structures_PMC\Ind\FuelStation\FuelStation_Build_ruins_PMC";
	};
	class Land_FuelStation_Shed_ruins_PMC: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\ca\Structures_PMC\Ind\FuelStation\FuelStation_Shed_ruins_PMC";
	};
};
//};

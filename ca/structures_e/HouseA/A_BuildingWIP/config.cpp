////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:11:46 2014 : Source 'file' date Fri Oct 31 06:11:46 2014
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

//Class structures_e : HouseA\A_BuildingWIP\config.bin{
class CfgPatches
{
	class CAStructures_E_HouseA_A_BuildingWIP
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
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
	class Land_A_BuildingWIP_EP1: House_EP1
	{
		armor = 500;
		scope = 1;
		model = "\ca\Structures_E\HouseA\A_BuildingWIP\A_BuildingWIP_ep1.p3d";
		ladders[] = {{ "start1","end1" },{ "start2","end2" }};
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\ca\Structures_E\HouseA\A_BuildingWIP\A_BuildingWIP_ruins_EP1.p3d";
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
			mat[] = {"Ca\Structures\A_BuildingWIP\data\walls_Multi.rvmat","Ca\Structures\A_BuildingWIP\data\destruct_half_walls_Multi.rvmat","Ca\Structures\A_BuildingWIP\data\destruct_full_walls_Multi.rvmat","Ca\Structures\A_BuildingWIP\data\floor_Multi.rvmat","Ca\Structures\A_BuildingWIP\data\destruct_half_floor_Multi.rvmat","Ca\Structures\A_BuildingWIP\data\destruct_full_floor_Multi.rvmat","Ca\Structures\A_BuildingWIP\data\panels_Multi.rvmat","Ca\Structures\A_BuildingWIP\data\destruct_half_panels_Multi.rvmat","Ca\Structures\A_BuildingWIP\data\destruct_full_panels_Multi.rvmat","Ca\Structures\A_BuildingWIP\data\pillars_Multi.rvmat","Ca\Structures\A_BuildingWIP\data\destruct_half_pillars_Multi.rvmat","Ca\Structures\A_BuildingWIP\data\destruct_full_pillars_Multi.rvmat"};
		};
	};
	class Land_A_BuildingWIP_ruins_EP1: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\Ca\Structures_E\HouseA\A_BuildingWIP\A_BuildingWIP_ruins_EP1";
	};
};
//};

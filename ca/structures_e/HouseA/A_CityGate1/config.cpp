////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:11:47 2014 : Source 'file' date Fri Oct 31 06:11:47 2014
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

//Class structures_e : HouseA\A_CityGate1\config.bin{
class CfgPatches
{
	class CAStructures_E_HouseA_A_CityGate1
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
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
	class Land_A_CityGate1_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\HouseA\A_CityGate1\A_CityGate1_EP1";
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
			mat[] = {"Ca\Structures_E\HouseA\A_CityGate1\data\A_CityGate_MULTI.rvmat","Ca\Structures_E\HouseA\A_CityGate1\data\destruct_half_A_CityGate_MULTI.rvmat","Ca\Structures_E\HouseA\A_CityGate1\data\destruct_full_A_CityGate_MULTI.rvmat"};
		};
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\HouseA\A_CityGate1\A_CityGate1_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class Land_A_CityGate1_ruins_EP1: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\Ca\Structures_E\HouseA\A_CityGate1\A_CityGate1_ruins_EP1";
	};
};
//};

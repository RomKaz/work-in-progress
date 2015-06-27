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

//Class structures_e : Ind\Ind_Shed\config.bin{
class CfgPatches
{
	class CAStructures_E_Ind_Ind_Shed
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAStructures_E_Ind"};
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
	class Land_Ind_Shed_01_EP1: House_EP1
	{
		scope = 1;
		armor = 110;
		model = "\ca\Structures_E\Ind\Ind_Shed\Ind_Shed_01_EP1";
		class HitPoints
		{
			class Hit1
			{
				armor = 0.5;
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
			mat[] = {"ca\Structures_E\Ind\Ind_Shed\data\metal_shed_multi1.rvmat","ca\Structures_E\Ind\Ind_Shed\data\destruct_half_metal_shed_multi1.rvmat","ca\Structures_E\Ind\Ind_Shed\data\destruct_full_metal_shed_multi1.rvmat"};
		};
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\ca\Structures_E\Ind\Ind_Shed\Ind_Shed_01_ruins_EP1";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class Land_Ind_Shed_02_EP1: Land_Ind_Shed_01_EP1
	{
		model = "\ca\Structures_E\Ind\Ind_Shed\Ind_Shed_02_EP1";
		class HitPoints
		{
			class Hit1
			{
				armor = 0.5;
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
			mat[] = {"ca\Structures_E\Ind\Ind_Shed\data\metal_shed_multi2.rvmat","ca\Structures_E\Ind\Ind_Shed\data\destruct_half_metal_shed_multi2.rvmat","ca\Structures_E\Ind\Ind_Shed\data\destruct_full_metal_shed_multi2.rvmat"};
		};
		class DestructionEffects: DestructionEffects
		{
			class Ruin1: Ruin1
			{
				type = "\ca\Structures_E\Ind\Ind_Shed\Ind_Shed_02_ruins_EP1";
			};
		};
	};
	class Land_Ind_Shed_01_ruins_EP1: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\ca\Structures_E\Ind\Ind_Shed\Ind_Shed_01_ruins_EP1";
	};
	class Land_Ind_Shed_02_ruins_EP1: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\ca\Structures_E\Ind\Ind_Shed\Ind_Shed_02_ruins_EP1";
	};
};
//};

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

//Class structures_e : Ind\Ind_PowerStation\config.bin{
class CfgPatches
{
	class CAStructures_E_Ind_Misc_PowerStation
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.03;
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
	class Land_Ind_PowerStation_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\Ind\Ind_PowerStation\Ind_PowerStation_ep1";
		armor = 1200;
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\ca\Structures_E\Ind\Ind_PowerStation\Ind_PowerStation_ruins_EP1.p3d";
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
				armor = 0.05;
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
			mat[] = {"ca\Structures_E\Ind\Ind_PowerStation\Data\misc_powerstation_multi1_ep1.rvmat","ca\Structures_E\Ind\Ind_PowerStation\Data\destruct_half_misc_powerstation_multi1_ep1.rvmat","ca\Structures_E\Ind\Ind_PowerStation\Data\destruct_full_misc_powerstation_multi1_ep1.rvmat","ca\Structures_E\Ind\Ind_PowerStation\Data\misc_powerstation_multi2_ep1.rvmat","ca\Structures_E\Ind\Ind_PowerStation\Data\destruct_half_misc_powerstation_multi2_ep1.rvmat","ca\Structures_E\Ind\Ind_PowerStation\Data\destruct_full_misc_powerstation_multi2_ep1.rvmat"};
		};
	};
	class Land_Ind_PowerStation_ruins_EP1: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\ca\Structures_E\Ind\Ind_PowerStation\Ind_PowerStation_ruins_EP1";
	};
};
//};

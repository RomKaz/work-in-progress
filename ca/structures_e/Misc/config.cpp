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

//Class structures_e : Misc\config.bin{
class CfgPatches
{
	class CAStructures_E_Misc
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.02;
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
	class Land_Shed_W02_EP1: House_EP1
	{
		scope = 1;
		armor = 30;
		model = "\CA\Structures_E\Misc\Shed_W02_ep1";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\CA\Structures_E\Misc\Shed_M03_ruins_EP1";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class Land_Shed_W03_EP1: House_EP1
	{
		scope = 1;
		armor = 30;
		model = "\CA\Structures_E\Misc\Shed_W03_ep1";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\CA\Structures_E\Misc\Shed_W03_ruins_EP1";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class Land_Shed_M01_EP1: House_EP1
	{
		scope = 1;
		armor = 30;
		model = "\CA\Structures_E\Misc\Shed_M01_ep1";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\CA\Structures_E\Misc\Shed_M01_ruins_EP1";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class Land_Shed_M01_ruins_EP1: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\CA\Structures_E\Misc\Shed_M01_ruins_EP1";
	};
	class Land_Shed_W03_ruins_EP1: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\CA\Structures_E\Misc\Shed_W03_ruins_EP1";
	};
	class Land_Shed_M03_ruins_EP1: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\CA\Structures_E\Misc\Shed_M03_ruins_EP1";
	};
	class Land_Com_tower_ep1: House_EP1
	{
		scope = 1;
		armor = 600;
		destrType = "DestructBuilding";
		model = "\ca\Structures_E\Misc\Com_tower_ep1.p3d";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\CA\Structures_E\Misc\Com_tower_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		class MarkerLights
		{
			class RedBlinking
			{
				name = "cerveny pozicni";
				color[] = {0.64,0.064,0.064,1};
				ambient[] = {0.1,0.01,0.01,1};
				brightness = 0.01;
				blinking = 1;
			};
		};
		ladders[] = {{ "start1","end1" },{ "start2","end2" },{ "start3","end3" }};
		featureSize = 30;
	};
	class Land_Com_tower_ruins_EP1: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\CA\Structures_E\Misc\Com_tower_ruins_EP1";
	};
};
//};

////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:06:20 2014 : Source 'file' date Fri Oct 31 06:06:20 2014
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

//Class STRUCTURES_PMC : misc\shed\config.bin{
class CfgPatches
{
	class CAStructures_PMC_Misc_Shed
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.54;
		requiredAddons[] = {"CAStructures_PMC_Misc"};
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
	class Land_Shed_W02_PMC: House_EP1
	{
		scope = 1;
		armor = 30;
		model = "\CA\Structures_PMC\Misc\Shed\Shed_W02_PMC";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\CA\Structures_PMC\Misc\Shed\Shed_W02_ruins_PMC";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class Land_Shed_W03_PMC: House_EP1
	{
		scope = 1;
		armor = 30;
		model = "\CA\Structures_PMC\Misc\Shed\Shed_W03_PMC";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\CA\Structures_PMC\Misc\Shed\Shed_W03_ruins_PMC";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class Land_Shed_W03_ruins_PMC: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\CA\Structures_PMC\Misc\Shed\Shed_W03_ruins_PMC";
	};
	class Land_Shed_W02_ruins_PMC: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\CA\Structures_PMC\Misc\Shed\Shed_W02_ruins_PMC";
	};
};
//};

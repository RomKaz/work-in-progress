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

//Class STRUCTURES_PMC : buildings\bunker\config.bin{
class CfgPatches
{
	class CAStructures_PMC_Buildings_Bunker
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
	class Bunker_PMC: House
	{
		expansion = 4;
		scope = 2;
		vehicleClass = "Military";
		displayName = "$STR_dn_bunker";
		model = "\Ca\Structures_PMC\Buildings\Bunker\Bunker_PMC.p3d";
		armor = 500;
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\ca\Structures_PMC\Buildings\Bunker\Bunker_pmc_ruins.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class Ruins;
	class Land_Bunker_PMC_Ruins: Ruins
	{
		scope = 1;
		model = "\ca\Structures_PMC\Buildings\Bunker\Bunker_pmc_ruins.p3d";
		vehicleClass = "Ruins";
	};
};
//};

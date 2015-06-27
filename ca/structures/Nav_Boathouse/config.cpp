////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:06:16 2014 : Source 'file' date Fri Oct 31 06:06:16 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class structures : Nav_Boathouse\config.bin{
class CfgPatches
{
	class CAStructuresLand_Nav_Boathouse
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAStructures"};
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
	class Land_Nav_Boathouse_PierL: House
	{
		model = "\Ca\Structures\Nav_Boathouse\Nav_Boathouse_PierL";
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\structures\nav_boathouse\data\Nav_Boathouse_Pier_metal_plates.rvmat","ca\structures\nav_boathouse\data\destruct_half_Nav_Boathouse_Pier_metal_plates.rvmat","ca\structures\nav_boathouse\data\destruct_full_Nav_Boathouse_Pier_metal_plates.rvmat","ca\structures\nav_boathouse\data\Nav_Boathouse_Pier_multi.rvmat","ca\structures\nav_boathouse\data\destruct_half_Nav_Boathouse_Pier_multi.rvmat","ca\structures\nav_boathouse\data\destruct_full_Nav_Boathouse_Pier_multi.rvmat"};
		};
	};
	class Land_Nav_Boathouse_PierR: Land_Nav_Boathouse_PierL
	{
		model = "\Ca\Structures\Nav_Boathouse\Nav_Boathouse_PierR";
	};
	class Land_Nav_Boathouse_PierT: Land_Nav_Boathouse_PierL
	{
		model = "\Ca\Structures\Nav_Boathouse\Nav_Boathouse_PierT";
	};
};
//};

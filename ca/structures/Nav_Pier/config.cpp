////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:06:16 2014 : Source 'file' date Fri Oct 31 06:06:16 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class structures : Nav_Pier\config.bin{
class CfgPatches
{
	class CAStructures_Nav_pier
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAData","CAStructures","CABuildings","CABuildings2"};
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
	class Land_nav_pier_m_2: House
	{
		model = "\CA\structures\Nav_Pier\nav_pier_m_2";
		destrType = "DestructBuilding";
		armor = 800;
		class DestructionEffects{};
	};
	class land_nav_pier_m: Land_nav_pier_m_2
	{
		model = "\CA\structures\Nav_Pier\nav_pier_m";
	};
	class land_nav_pier_m_1: Land_nav_pier_m_2
	{
		model = "\CA\structures\Nav_Pier\nav_pier_m_1";
	};
	class land_nav_pier_m_end: Land_nav_pier_m_2
	{
		model = "\CA\structures\Nav_Pier\nav_pier_m_end";
	};
	class land_nav_pier_M_fuel: Land_nav_pier_m_2
	{
		model = "\CA\structures\Nav_Pier\nav_pier_M_fuel";
	};
	class land_nav_pier_pneu: Land_nav_pier_m_2
	{
		model = "\CA\structures\Nav_Pier\nav_pier_pneu";
	};
	class land_nav_pier_uvaz: Land_nav_pier_m_2
	{
		model = "\CA\structures\Nav_Pier\nav_pier_uvaz";
	};
};
//};

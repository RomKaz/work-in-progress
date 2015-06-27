////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:04:48 2014 : Source 'file' date Fri Oct 31 06:04:48 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class missions2_pmc : config.bin{
class CfgPatches
{
	class CA_Missions2_PMC
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.56;
		requiredAddons[] = {"CA_Missions_PMC","CAMisc3","CAAir_E"};
	};
};
class CfgMissions
{
	class Missions
	{
		class PMC_Missions
		{
			displayName = "$STR_pmc_scenarios_name";
			overview = "ca\missions2_pmc\overview.html";
			class SPPXX_PMC
			{
				directory = "ca\missions2_pmc\scenarios\SPP00.Zargabad";
			};
		};
	};
};
class CfgVehicles
{
	class Misc_cargo_cont_net1;
	class Misc_cargo_cont_net_noGeometry_PMC: Misc_cargo_cont_net1
	{
		scope = 1;
		model = "ca\missions2_PMC\Misc_cargo_cont_net1.p3d";
		expansion = 4;
	};
	class ParachuteMediumWest_EP1;
	class ParachuteMediumWest_noGeometry_PMC: ParachuteMediumWest_EP1
	{
		scope = 1;
		expansion = 4;
		model = "ca\missions2_PMC\Para_Medium.p3d";
	};
};
//};

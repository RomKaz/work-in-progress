////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:14:04 2014 : Source 'file' date Fri Oct 31 06:14:04 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : Visual_FixedMi17Mi8UnitTypeIcon\config.bin{
class cfgPatches
{
	class CA_CommunityConfigurationProject_E_Visual_FixedMi17Mi8UnitTypeIcon
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CA_CommunityConfigurationProject_E"};
	};
};
class CfgVehicles
{
	class Helicopter;
	class Mi17_base: Helicopter
	{
		picture = "\ca\air\data\ico\mi17_HIP_CA.paa";
	};
	class Mi17_base_RU: Mi17_base{};
	class Mi17_rockets_RU: Mi17_base_RU
	{
		picture = "\ca\air\data\ico\mi17_hip_mg_CA.paa";
	};
	class Mi17_base_CZ_EP1: Mi17_base{};
	class Mi171Sh_Base_EP1: Mi17_base_CZ_EP1
	{
		picture = "\ca\air\data\ico\mi17_hip_mg_CA.paa";
	};
	class Mi171Sh_CZ_EP1: Mi171Sh_Base_EP1
	{
		picture = "\ca\air\data\ico\mi17_HIP_CA.paa";
	};
};
//};

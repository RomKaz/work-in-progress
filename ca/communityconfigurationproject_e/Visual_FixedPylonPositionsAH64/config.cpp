////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:14:04 2014 : Source 'file' date Fri Oct 31 06:14:04 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : Visual_FixedPylonPositionsAH64\config.bin{
class cfgPatches
{
	class CA_CommunityConfigurationProject_E_Visual_FixedPylonPositionsAH64
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CA_CommunityConfigurationProject_E"};
	};
};
class CfgVehicles
{
	class AH64_base_EP1;
	class AH64D: AH64_base_EP1
	{
		memoryPointLMissile = "Rocket_1";
		memoryPointRMissile = "Rocket_2";
		memoryPointLRocket = "Missile_1";
		memoryPointRRocket = "Missile_2";
	};
	class AH64D_EP1: AH64_base_EP1{};
};
//};

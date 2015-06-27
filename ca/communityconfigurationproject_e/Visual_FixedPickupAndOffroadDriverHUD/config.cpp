////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:14:04 2014 : Source 'file' date Fri Oct 31 06:14:04 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : Visual_FixedPickupAndOffroadDriverHUD\config.bin{
class cfgPatches
{
	class CA_CommunityConfigurationProject_E_Visual_FixedPickupAndOffroadDriverHUD
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CA_CommunityConfigurationProject_E"};
	};
};
class CfgVehicles
{
	class Car;
	class Pickup_PK_base: Car
	{
		unitInfoType = "RscUnitInfo";
	};
	class Offroad_DSHKM_base: Car
	{
		unitInfoType = "RscUnitInfo";
	};
};
//};

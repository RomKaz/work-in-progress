////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:14:04 2014 : Source 'file' date Fri Oct 31 06:14:04 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : Visual_FixedPylonPositionsMi24\config.bin{
class cfgPatches
{
	class CA_CommunityConfigurationProject_E_Visual_FixedPylonPositionsMi24
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
	class Mi24_Base: Helicopter
	{
		memoryPointLMissile = "Rocket_1";
		memoryPointRMissile = "Rocket_2";
		memoryPointLRocket = "Missile_1";
		memoryPointRRocket = "Missile_2";
	};
	class Mi24_Base_RU: Mi24_Base{};
	class Mi24_V: Mi24_Base_RU
	{
		memoryPointLMissile = "Missile_1";
		memoryPointRMissile = "Missile_2";
		memoryPointLRocket = "Rocket_1";
		memoryPointRRocket = "Rocket_2";
	};
	class Mi24_P: Mi24_Base_RU{};
	class Mi24_Base_CDF: Mi24_Base{};
	class Mi24_D: Mi24_Base_CDF{};
	class Mi24_Base_TK_EP1: Mi24_Base{};
	class Mi24_D_Base_TK_EP1: Mi24_Base_TK_EP1{};
	class Mi24_Base_CZ_ACR: Mi24_Base{};
	class Mi24_D_Base_CZ_ACR: Mi24_Base_CZ_ACR
	{
		memoryPointLMissile = "Missile_1";
		memoryPointRMissile = "Missile_2";
		memoryPointLRocket = "Rocket_1";
		memoryPointRRocket = "Rocket_2";
	};
};
//};

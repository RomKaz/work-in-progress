////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:14:01 2014 : Source 'file' date Fri Oct 31 06:14:01 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : Gameplay_FixedBizonLightFlashOnFiring\config.bin{
class cfgPatches
{
	class CA_CommunityConfigurationProject_E_Gameplay_FixedBizonLightFlashOnFiring
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CA_CommunityConfigurationProject_E"};
	};
};
class CfgWeapons
{
	class Rifle;
	class bizon: Rifle
	{
		fireLightDuration = 0.05;
		fireLightIntensity = 0.012;
	};
	class bizon_silenced: bizon
	{
		fireLightDuration = 0;
		fireLightIntensity = 0;
	};
};
//};

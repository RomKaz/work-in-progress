////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:14:00 2014 : Source 'file' date Fri Oct 31 06:14:00 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : Gameplay_AddedMissingFlaresToChoppers\config.bin{
class CfgPatches
{
	class CA_CommunityConfigurationProject_E_Gameplay_AddedMissingFlaresToChoppers
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CA_CommunityConfigurationProject_E"};
	};
};
class CfgVehicles
{
	class Plane;
	class UH1_Base;
	class MV22: Plane
	{
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"120Rnd_CMFlare_Chaff_Magazine"};
	};
	class UH1Y: UH1_Base
	{
		weapons[] = {"FFARLauncher_14","CMFlareLauncher"};
		magazines[] = {"14Rnd_FFAR","120Rnd_CMFlareMagazine"};
	};
};
//};

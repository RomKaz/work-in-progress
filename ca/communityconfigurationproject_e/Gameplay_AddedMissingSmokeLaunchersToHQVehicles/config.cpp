////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:14:00 2014 : Source 'file' date Fri Oct 31 06:14:00 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : Gameplay_AddedMissingSmokeLaunchersToHQVehicles\config.bin{
class CfgPatches
{
	class CA_CommunityConfigurationProject_E_Gameplay_AddedMissingSmokeLaunchersToHQVehicles
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CA_CommunityConfigurationProject_E"};
	};
};
class CfgVehicles
{
	class Wheeled_APC;
	class Tracked_APC;
	class BMP2_Base: Tracked_APC{};
	class BTR90_Base: Wheeled_APC{};
	class LAV25_Base: Wheeled_APC{};
	class BMP2_HQ_Base: BMP2_Base
	{
		weapons[] = {"SmokeLauncher"};
		magazines[] = {"SmokeLauncherMag","SmokeLauncherMag","SmokeLauncherMag"};
	};
	class BTR90_HQ: BTR90_Base
	{
		weapons[] = {"SmokeLauncher"};
		magazines[] = {"SmokeLauncherMag","SmokeLauncherMag","SmokeLauncherMag"};
	};
	class LAV25_HQ: LAV25_Base
	{
		weapons[] = {"SmokeLauncher"};
		magazines[] = {"SmokeLauncherMag","SmokeLauncherMag","SmokeLauncherMag","SmokeLauncherMag"};
	};
};
//};

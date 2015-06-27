////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:14:00 2014 : Source 'file' date Fri Oct 31 06:14:00 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : Gameplay_AddedShortLockDelayForNLAW\config.bin{
class CfgPatches
{
	class CA_CommunityConfigurationProject_E_Gameplay_AddedShortLockDelayForNLAW
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CA_CommunityConfigurationProject_E"};
	};
};
class CfgWeapons
{
	class Launcher;
	class BAF_NLAW_Launcher: Launcher
	{
		weaponLockDelay = 2;
	};
};
//};

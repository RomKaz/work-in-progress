////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:14:01 2014 : Source 'file' date Fri Oct 31 06:14:01 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : Gameplay_EnabledAlwaysLockingForCRV7_PG\config.bin{
class cfgPatches
{
	class CA_CommunityConfigurationProject_E_Gameplay_EnabledAlwaysLockingForCRV7_PG
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CA_CommunityConfigurationProject_E"};
	};
};
class CfgWeapons
{
	class RocketPods;
	class CRV7_PG: RocketPods
	{
		canLock = 2;
	};
};
//};

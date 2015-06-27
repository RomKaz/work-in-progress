////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:13:58 2014 : Source 'file' date Fri Oct 31 06:13:58 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : Editor_MadeOldTractorAvailable\config.bin{
class cfgPatches
{
	class CA_CommunityConfigurationProject_E_Editor_MadeOldTractorAvailable
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CA_CommunityConfigurationProject_E"};
	};
};
class CfgVehicles
{
	class Tractor;
	class tractorOld: Tractor
	{
		scope = 2;
		displayName = "Old Tractor";
		accuracy = 1000;
	};
};
//};

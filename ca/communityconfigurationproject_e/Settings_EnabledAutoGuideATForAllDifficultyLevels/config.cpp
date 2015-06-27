////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:14:02 2014 : Source 'file' date Fri Oct 31 06:14:02 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : Settings_EnabledAutoGuideATForAllDifficultyLevels\config.bin{
class cfgPatches
{
	class CA_CommunityConfigurationProject_E_Settings_EnabledAutoGuideATForAllDifficultyLevels
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CA_CommunityConfigurationProject_E"};
	};
};
class CfgDifficulties
{
	class Veteran
	{
		class Flags
		{
			autoGuideAT[] = {1,1};
		};
	};
	class Mercenary
	{
		class Flags
		{
			autoGuideAT[] = {1,1};
		};
	};
};
//};

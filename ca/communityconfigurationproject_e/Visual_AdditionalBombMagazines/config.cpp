////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:14:04 2014 : Source 'file' date Fri Oct 31 06:14:04 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : Visual_AdditionalBombMagazines\config.bin{
class cfgPatches
{
	class CA_CommunityConfigurationProject_E_Visual_AdditionalBombMagazines
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CA_CommunityConfigurationProject_E"};
	};
};
class CfgMagazines
{
	class 6Rnd_Mk82;
	class 6Rnd_GBU12_AV8B;
	class 2Rnd_Mk82: 6Rnd_Mk82
	{
		count = 2;
	};
	class 4Rnd_Mk82: 6Rnd_Mk82
	{
		count = 4;
	};
	class 2Rnd_GBU12_AV8B: 6Rnd_GBU12_AV8B
	{
		count = 2;
	};
	class 4Rnd_GBU12_AV8B: 6Rnd_GBU12_AV8B
	{
		count = 4;
	};
};
//};

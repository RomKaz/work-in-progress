////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:13:56 2014 : Source 'file' date Fri Oct 31 06:13:56 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : AI_MadeAIUseCTWSVsInfantry\config.bin{
class cfgPatches
{
	class CA_CommunityConfigurationProject_E_AI_MadeAIUseCTWSVsInfantry
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CA_CommunityConfigurationProject_E"};
	};
};
class CfgAmmo
{
	class BulletBase;
	class Sh_40_HE: BulletBase
	{
		cost = 100;
	};
	class Sh_40_SABOT: Sh_40_HE
	{
		cost = 200;
	};
};
//};

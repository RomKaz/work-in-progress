////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:13:56 2014 : Source 'file' date Fri Oct 31 06:13:56 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : AI_MadeAINotEngageBTR40WithRifles\config.bin{
class cfgPatches
{
	class CA_CommunityConfigurationProject_E_AI_MadeAINotEngageBTR40WithRifles
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
	class BTR40_MG_base_EP1: Wheeled_APC
	{
		crewVulnerable = 0;
	};
};
//};

////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:14:01 2014 : Source 'file' date Fri Oct 31 06:14:01 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : Gameplay_CorrectedDriverViewInBTR60\config.bin{
class cfgPatches
{
	class CA_CommunityConfigurationProject_E_Gameplay_CorrectedDriverViewInBTR60
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CA_CommunityConfigurationProject_E"};
	};
};
class CfgVehicles
{
	class BRDM2_Base;
	class BTR60_TK_EP1: BRDM2_Base
	{
		class ViewPilot
		{
			initAngleY = 0;
			initFov = 0.7;
			minFov = 0.42;
			maxFov = 0.85;
		};
	};
};
//};

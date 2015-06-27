////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:14:03 2014 : Source 'file' date Fri Oct 31 06:14:03 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : Sound_FixedCTWS\config.bin{
class cfgPatches
{
	class CA_CommunityConfigurationProject_E_Sound_FixedCTWS
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CA_CommunityConfigurationProject_E","CA_CommunityConfigurationProject_E_AI_MadeTankGunnersUseATAndHEAmmo"};
	};
};
class Mode_FullAuto;
class CfgWeapons
{
	class CannonCore;
	class CTWS: CannonCore
	{
		modes[] = {"player","close","short","medium","far"};
		class player: Mode_FullAuto
		{
			minRange = 1;
			minRangeProbab = 0.06;
			midRange = 2;
			midRangeProbab = 0.06;
			maxRange = 3;
			maxRangeProbab = 0.004;
		};
		class close: player
		{
			soundBurst = 0;
		};
	};
	class CTWS_AI: CannonCore
	{
		modes[] = {"close","short","medium","far"};
		class player: Mode_FullAuto
		{
			minRange = 1;
			minRangeProbab = 0.06;
			midRange = 2;
			midRangeProbab = 0.06;
			maxRange = 3;
			maxRangeProbab = 0.004;
		};
		class close: player
		{
			soundBurst = 0;
		};
	};
};
//};

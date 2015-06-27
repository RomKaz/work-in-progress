////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:14:03 2014 : Source 'file' date Fri Oct 31 06:14:03 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : Sound_FixedMH60SDammageSound\config.bin{
class cfgPatches
{
	class CA_CommunityConfigurationProject_E_Sound_FixedMH60SDammageSound
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CA_CommunityConfigurationProject_E"};
	};
};
class CfgVehicles
{
	class Helicopter;
	class UH60_Base: Helicopter{};
	class MH60S: UH60_Base
	{
		soundDammage[] = {"ca\sounds\air\noises\alarm_loop1",0.0001,1};
	};
};
//};

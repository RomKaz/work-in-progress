////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:14:02 2014 : Source 'file' date Fri Oct 31 06:14:02 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : Gameplay_ReducedGrenadeDeflection\config.bin{
class cfgPatches
{
	class CA_CommunityConfigurationProject_E_Gameplay_ReducedGrenadeDeflection
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CA_CommunityConfigurationProject_E"};
	};
};
class CfgAmmo
{
	class GrenadeCore;
	class FlareBase;
	class F_40mm_White: FlareBase
	{
		deflecting = "1/2 * 30";
	};
	class GrenadeHand;
	class GrenadeHandTimedWest: GrenadeHand
	{
		deflecting = "1/4 * 90";
	};
	class SmokeShell: GrenadeHand
	{
		deflecting = "1/3 * 60";
	};
	class IRStrobeBase: GrenadeCore
	{
		deflecting = "1/3 * 60";
	};
	class IRStrobe: IRStrobeBase
	{
		deflecting = "1/3 * 30";
	};
};
//};

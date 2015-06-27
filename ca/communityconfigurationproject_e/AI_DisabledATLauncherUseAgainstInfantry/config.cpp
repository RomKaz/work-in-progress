////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:13:56 2014 : Source 'file' date Fri Oct 31 06:13:56 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : AI_DisabledATLauncherUseAgainstInfantry\config.bin{
class cfgPatches
{
	class CA_CommunityConfigurationProject_E_AI_DisabledATLauncherUseAgainstInfantry
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CA_CommunityConfigurationProject_E"};
	};
};
class CfgAmmo
{
	class RocketBase;
	class R_SMAW_HEDP;
	class R_M136_AT: RocketBase
	{
		irLock = 1;
	};
	class R_RPG18_AT: RocketBase
	{
		irLock = 1;
	};
	class R_PG7V_AT: RocketBase
	{
		irLock = 1;
	};
	class R_OG7_AT: R_PG7V_AT
	{
		irLock = 0;
	};
	class R_PG9_AT: RocketBase
	{
		irLock = 1;
	};
	class R_OG9_HE: R_PG9_AT
	{
		irLock = 0;
	};
	class R_SMAW_HEAA: R_SMAW_HEDP
	{
		irLock = 1;
	};
};
//};

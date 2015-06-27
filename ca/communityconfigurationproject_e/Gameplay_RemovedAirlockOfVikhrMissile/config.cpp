////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:14:02 2014 : Source 'file' date Fri Oct 31 06:14:02 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : Gameplay_RemovedAirlockOfVikhrMissile\config.bin{
class cfgPatches
{
	class CA_CommunityConfigurationProject_E_Gameplay_RemovedAirlockOfVikhrMissile
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CA_CommunityConfigurationProject_E"};
	};
};
class CfgAmmo
{
	class MissileBase;
	class M_Vikhr_AT: MissileBase
	{
		airLock = 0;
	};
};
//};

////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:14:01 2014 : Source 'file' date Fri Oct 31 06:14:01 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : Gameplay_FixedMissileSmoke\config.bin{
class CfgPatches
{
	class CA_CommunityConfigurationProject_E_Gameplay_FixedMissileSmoke
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
	class M_AT3_AT: MissileBase
	{
		effectsMissile = "missile2";
	};
	class M_AT5_AT: MissileBase
	{
		effectsMissile = "missile2";
	};
};
//};

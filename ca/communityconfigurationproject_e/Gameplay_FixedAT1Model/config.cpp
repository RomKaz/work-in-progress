////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:14:01 2014 : Source 'file' date Fri Oct 31 06:14:01 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : Gameplay_FixedAT1Model\config.bin{
class CfgPatches
{
	class CA_CommunityConfigurationProject_E_Gameplay_FixedAT1Model
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
	class M_AT5_AT: MissileBase
	{
		model = "\ca\CommunityConfigurationProject_E\Gameplay_FixedAT1Model\p3d\ccp_at1.p3d";
	};
	class M_AT10_AT: MissileBase
	{
		model = "\ca\CommunityConfigurationProject_E\Gameplay_FixedAT1Model\p3d\ccp_at1.p3d";
	};
	class M_Vikhr_AT: MissileBase
	{
		model = "\ca\CommunityConfigurationProject_E\Gameplay_FixedAT1Model\p3d\ccp_at1.p3d";
	};
	class M_AT6_AT: MissileBase
	{
		model = "\ca\CommunityConfigurationProject_E\Gameplay_FixedAT1Model\p3d\ccp_at1.p3d";
	};
	class RocketCore;
	class RocketBase: RocketCore
	{
		model = "\ca\CommunityConfigurationProject_E\Gameplay_FixedAT1Model\p3d\ccp_at1.p3d";
	};
	class R_SMAW_HEDP;
	class R_MEEWS_HEDP: R_SMAW_HEDP
	{
		model = "\ca\CommunityConfigurationProject_E\Gameplay_FixedAT1Model\p3d\ccp_at1.p3d";
	};
	class R_SMAW_HEAA;
	class R_MEEWS_HEAT: R_SMAW_HEAA
	{
		model = "\ca\CommunityConfigurationProject_E\Gameplay_FixedAT1Model\p3d\ccp_at1.p3d";
	};
};
//};

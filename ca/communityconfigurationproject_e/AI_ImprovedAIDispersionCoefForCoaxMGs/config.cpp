////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:13:56 2014 : Source 'file' date Fri Oct 31 06:13:56 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : AI_ImprovedAIDispersionCoefForCoaxMGs\config.bin{
class cfgPatches
{
	class CA_CommunityConfigurationProject_E_AI_ImprovedAIDispersionCoefForCoaxMGs
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CA_CommunityConfigurationProject_E"};
	};
};
class CfgWeapons
{
	class MGun;
	class PKT: MGun
	{
		aiDispersionCoefX = 21;
		aiDispersionCoefY = 21;
	};
	class PKT_MG_Nest: PKT{};
	class PKT_veh: PKT_MG_Nest{};
	class PKTBC_veh: PKT_veh
	{
		aiDispersionCoefX = 14;
		aiDispersionCoefY = 14;
	};
	class M240_veh;
	class M240BC_veh: M240_veh
	{
		aiDispersionCoefX = 14;
		aiDispersionCoefY = 14;
	};
};
//};

////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:14:00 2014 : Source 'file' date Fri Oct 31 06:14:00 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : Gameplay_AdditionalLauncherRocketsWithEnlargedSize\config.bin{
class cfgPatches
{
	class CA_CommunityConfigurationProject_E_Gameplay_AdditionalLauncherRocketsWithEnlargedSize
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CA_CommunityConfigurationProject_E"};
	};
};
class CfgMagazines
{
	class NLAW;
	class SMAW_HEDP;
	class SMAW_HEAA;
	class SMAW_HEDP_Big: SMAW_HEDP
	{
		type = "3 * 256";
	};
	class SMAW_HEAA_Big: SMAW_HEAA
	{
		type = "3 * 256";
	};
	class NLAW_Big: NLAW
	{
		type = "6 * 256";
	};
};
class CfgWeapons
{
	class Launcher;
	class SMAW: Launcher
	{
		magazines[] = {"SMAW_HEAA","SMAW_HEDP","SMAW_HEAA_Big","SMAW_HEDP_Big"};
	};
	class BAF_NLAW_Launcher: Launcher
	{
		magazines[] = {"NLAW","NLAW_Big"};
	};
};
//};

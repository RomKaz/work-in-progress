////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:13:58 2014 : Source 'file' date Fri Oct 31 06:13:58 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : Editor_AddedInvisibleZoneProtection\config.bin{
class cfgPatches
{
	class CA_CommunityConfigurationProject_E_Editor_AddedInvisibleZoneProtection
	{
		units[] = {"ProtectionZone_Invisible_Ep1"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CA_CommunityConfigurationProject_E"};
	};
};
class CfgVehicles
{
	class ProtectionZone_Ep1;
	class ProtectionZone_Invisible_Ep1: ProtectionZone_Ep1
	{
		displayName = "Protection Zone (Invisible)";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0,0,0,0,ca)"};
	};
};
//};

////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:14:04 2014 : Source 'file' date Fri Oct 31 06:14:04 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : Stringtable_FixedWeaponNames\config.bin{
class CfgPatches
{
	class CA_CommunityConfigurationProject_E_Stringtable_FixedWeaponNames
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CA_CommunityConfigurationProject_E"};
	};
};
class CfgWeapons
{
	class MissileLauncher;
	class CannonCore;
	class VikhrLauncher: MissileLauncher
	{
		displayName = "$STR_DN_VIKHR_CCP";
	};
	class Ch29Launcher: MissileLauncher
	{
		displayName = "$STR_DN_KH29_CCP";
	};
	class D10: CannonCore
	{
		displayName = "$STR_DN_D10_CCP";
	};
};
//};

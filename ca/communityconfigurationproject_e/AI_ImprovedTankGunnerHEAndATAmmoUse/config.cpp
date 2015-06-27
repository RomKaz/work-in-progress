////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:13:56 2014 : Source 'file' date Fri Oct 31 06:13:56 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : AI_ImprovedTankGunnerHEAndATAmmoUse\config.bin{
class cfgPatches
{
	class CA_CommunityConfigurationProject_E_AI_ImprovedTankGunnerHEAndATAmmoUse
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CA_CommunityConfigurationProject_E"};
	};
};
class CfgAmmo
{
	class BulletBase;
	class ShellBase;
	class Sh_81_HE: ShellBase
	{
		cost = "1/2 * 200";
	};
	class Sh_82_HE: ShellBase
	{
		cost = "1/2 * 200";
	};
	class Sh_85_HE: ShellBase
	{
		cost = "1/2 * 200";
	};
	class 120mmHE_M120: ShellBase
	{
		cost = "1/2 * 300";
	};
	class Sh_105_HE: ShellBase
	{
		cost = "1/2 * 300";
	};
	class Sh_100_HE: Sh_105_HE
	{
		cost = "1/2 * 300";
	};
	class Sh_120_HE: ShellBase
	{
		cost = "1/2 * 300";
	};
	class Sh_105_HESH: Sh_120_HE
	{
		cost = "1/2 * 250";
	};
	class Sh_122_HE: ShellBase
	{
		cost = "1/2 * 300";
	};
	class Sh_125_HE: ShellBase
	{
		cost = "1/2 * 300";
	};
	class PG15V: ShellBase
	{
		cost = "1/2 * 300";
	};
	class B_25mm_APDS: BulletBase
	{
		cost = "2 * 40";
	};
	class B_30mm_AP: BulletBase
	{
		cost = "2 * 50";
	};
	class Sh_85_AP: ShellBase
	{
		cost = "2 * 200";
	};
	class Sh_100_HEAT: Sh_105_HE
	{
		cost = "2 * 500";
	};
};
//};

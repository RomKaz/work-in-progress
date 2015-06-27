////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:07:00 2014 : Source 'file' date Fri Oct 31 06:07:00 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=8
enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	destructno = 0,
	destructman = 5,
	destructbuilding = 1
};

//Class weapons_acr : lrtv\config.bin{
class CfgPatches
{
	class CAWeapons_ACR_LRTV
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.5;
		requiredAddons[] = {"CAWeapons_ACR"};
	};
};
class CfgWeapons
{
	class LaserDesignator;
	class LRTV_ACR: LaserDesignator
	{
		expansion = 3;
		scope = 2;
		displayName = "$STR_ACR_DN_LRTV";
		class Library
		{
			libTextDesc = "$STR_ACR_LIB_LRTV";
		};
		descriptionShort = "$STR_ACR_DSS_LRTV";
		model = "\Ca\Weapons_ACR\LRTV\LTLM.p3d";
		modelOptics = "\ca\weapons_E\optics_vector.p3d";
		picture = "\Ca\Weapons_ACR\Data\UI\picture_LRTV_CA.paa";
		discretefov[] = {0.079,0.026};
		discreteInitIndex = 0;
		weaponInfoType = "rscWeaponLRTV";
	};
};
//};

////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:13:23 2014 : Source 'file' date Fri Oct 31 06:13:23 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class weapons_e : MAAWS\config.bin{
class CfgPatches
{
	class CAWeapons_E_MAAWS
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {"CAWeapons_E"};
	};
};
class CfgWeapons
{
	class Launcher;
	class MAAWS: Launcher
	{
		htMin = 1;
		htMax = 460;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		scope = 2;
		displayName = "$STR_EP1_DN_MAAWS";
		model = "\ca\weapons_e\MAAWS\MAAWS.p3d";
		handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons_E\Data\Anim\MAAWS.rtm"};
		sound[] = {"Ca\Sounds_E\Weapons_E\MAAWS\MAAWS_1",3.1622777,1,1200};
		drySound[] = {"Ca\Sounds_E\Weapons_E\M47\dry",0.0001,1,10};
		reloadMagazineSound[] = {"Ca\Sounds_E\Weapons_E\M47\rocket_reload",1.0,1,30};
		soundFly[] = {"Ca\Sounds_E\Weapons_E\M47\rocket_fly",3.1622777,1,500};
		magazines[] = {"MAAWS_HEAT","MAAWS_HEDP"};
		minRange = 20;
		midRange = 250;
		maxRange = 500;
		recoil = "launcherBase";
		aiRateOfFire = 10.0;
		aiRateOfFireDistance = 250;
		modelOptics = "\ca\weapons_e\MAAWS\M3_optic_3x.p3d";
		visionMode[] = {"Normal"};
		opticsZoomMin = 0.14389;
		opticsZoomMax = 0.14389;
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		picture = "\ca\weapons_E\Data\icons\maaws_CA.paa";
		UiPicture = "\CA\weapons\data\Ico\i_at_CA.paa";
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_MAAWS";
		};
		descriptionShort = "$STR_EP1_DSS_MAAWS";
		weaponInfoType = "RscWeaponRangeFinder";
	};
};
//};

////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:13:23 2014 : Source 'file' date Fri Oct 31 06:13:23 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=4
enum {
	stabilizedinaxisx = 1,
	stabilizedinaxisy = 2,
	stabilizedinaxesboth = 3,
	stabilizedinaxesnone = 0
};

//Class weapons_e : M47\config.bin{
class CfgPatches
{
	class CAWeapons_E_M47
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {"CAWeapons_E","CAWeapons"};
	};
};
class CfgAmmo
{
	class M_TOW_AT;
	class M_47_AT_EP1: M_TOW_AT
	{
		hit = 360;
		indirectHit = 9;
		indirectHitRange = 1;
		cost = 4000;
		trackOversteer = 0.95;
		trackLead = 0.9;
		timeToLive = 20;
		maneuvrability = 10;
		simulationStep = 0.005;
		sideAirFriction = 0.05;
		maxControlRange = 1500;
		maxSpeed = 200;
		initTime = 0.151;
		thrustTime = 1.45;
		thrust = 300;
	};
};
class CfgMagazines
{
	class CA_LauncherMagazine;
	class Dragon_EP1: CA_LauncherMagazine
	{
		scope = 2;
		displayName = "$STR_EP1_DN_Dragon_EP1";
		model = "\Ca\weapons_E\magazine_dragon\magazine_dragon.p3d";
		ammo = "M_47_AT_EP1";
		type = "6 * 		256";
		picture = "\CA\weapons\data\equip\m_Javelin_ca.paa";
		modelSpecial = "\ca\weapons_e\M47\M47_loaded.p3d";
		initSpeed = 20;
		descriptionShort = "$STR_EP1_DSS_Dragon_EP1";
	};
};
class CfgWeapons
{
	class Launcher;
	class M47Launcher_EP1: Launcher
	{
		htMin = 1;
		htMax = 460;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		scope = 2;
		displayName = "$STR_EP1_DN_M47Launcher_EP1";
		model = "\ca\weapons_e\M47\M47.p3d";
		value = 15;
		handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons_E\Data\Anim\M47.rtm"};
		sound[] = {"Ca\Sounds_E\Weapons_E\M47\M47_1",3.1622777,1,1200};
		drySound[] = {"Ca\Sounds_E\Weapons_E\M47\dry",0.0001,1,10};
		reloadMagazineSound[] = {"Ca\Sounds_E\Weapons_E\M47\rocket_reload",1.0,1,30};
		soundFly[] = {"Ca\Sounds_E\Weapons_E\M47\rocket_fly",3.1622777,1,500};
		magazines[] = {"Dragon_EP1"};
		canLock = 2;
		minRange = 10;
		minRangeProbab = 0.3;
		midRange = 250;
		midRangeProbab = 0.58;
		maxRange = 1500;
		maxRangeProbab = 0.04;
		recoil = "launcherBase";
		aiRateOfFire = 3.0;
		aiRateOfFireDistance = 300;
		modelOptics = "\ca\Weapons_e\optics_m47";
		opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
		visionMode[] = {"Normal","NVG"};
		cameraDir = "look";
		opticsZoomMin = 0.0277;
		opticsZoomMax = 0.7;
		opticsZoomInit = 0.0625;
		picture = "\ca\weapons_e\data\icons\m47_CA.paa";
		UiPicture = "\CA\weapons\data\Ico\i_at_CA.paa";
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_M47Launcher_EP1";
		};
		descriptionShort = "$STR_EP1_DSS_M47Launcher_EP1";
	};
};
//};

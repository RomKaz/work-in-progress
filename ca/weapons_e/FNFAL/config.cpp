////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:13:22 2014 : Source 'file' date Fri Oct 31 06:13:22 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=10
enum {
	_k = 0,
	stabilizedinaxisx = 1,
	stabilizedinaxisy = 2,
	stabilizedinaxesboth = 3,
	stabilizedinaxesnone = 0,
	_c = 50,
	_r = 0,
	_d = 0,
	_t = -1,
	_e = 1
};

//Class weapons_e : FNFAL\config.bin{
class CfgPatches
{
	class CAWeapons_E_fnfal
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {"CAWeapons_E","CAWeapons"};
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class 20Rnd_762x51_FNFAL: CA_Magazine
	{
		scope = 2;
		displayName = "$STR_EP1_DN_20Rnd_762x51_FNFAL";
		descriptionShort = "$STR_EP1_DSS_20Rnd_762x51_FNFAL";
		picture = "\ca\weapons\data\equip\m_20stanag_CA.paa";
		count = 20;
		initSpeed = 900;
		ammo = "B_762x51_Ball";
		tracersEvery = 0;
	};
};
class CfgWeapons
{
	class M16_base;
	class M16A2: M16_base
	{
		class Single;
		class Burst;
	};
	class FN_FAL: M16A2
	{
		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		scope = 2;
		displayName = "$STR_EP1_DN_FN_FAL";
		model = "\CA\weapons_E\FNFAL\fnFal";
		dexterity = 1.55;
		magazines[] = {"20Rnd_762x51_FNFAL"};
		picture = "\ca\weapons_E\Data\icons\fnfal_CA.paa";
		modes[] = {"Single","Burst"};
		class Single: Single
		{
			reloadTime = 0.0778654;
			recoil = "recoil_single_primary_5outof10";
			recoilProne = "recoil_single_primary_prone_4outof10";
			dispersion = 0.0005;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.05;
			aiRateOfFireDistance = 600;
			begin1[] = {"Ca\Sounds_E\Weapons_E\FNFAL\FNFAL_single_1",1.7782794,1,1500};
			begin2[] = {"Ca\Sounds_E\Weapons_E\FNFAL\FNFAL_single_2",1.7782794,1,1500};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
		class Burst: Burst
		{
			reloadTime = 0.0778654;
			soundBurst = 0;
			recoil = "recoil_single_primary_4outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 80;
			midRangeProbab = 0.7;
			maxRange = 200;
			maxRangeProbab = 0.05;
			dispersion = 0.0005;
			begin1[] = {"Ca\Sounds_E\Weapons_E\FNFAL\FNFAL_single_1",1.7782794,1,1500};
			begin2[] = {"Ca\Sounds_E\Weapons_E\FNFAL\FNFAL_single_2",1.7782794,1,1500};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_FN_FAL";
		};
		descriptionShort = "$STR_EP1_DSS_FN_FAL";
	};
	class FN_FAL_ANPVS4: FN_FAL
	{
		displayName = "$STR_EP1_DN_FN_FAL_ANPVS4";
		model = "ca\weapons_E\FNFAL\fnFal_anpvs4";
		picture = "\ca\weapons_E\data\icons\w_fnfal_anpvs4_ca.paa";
		modelOptics = "\Ca\weapons_E\NV_anpvs4_optic.p3d";
		visionMode[] = {"NVG"};
		opticsZoomMin = 0.0625;
		opticsZoomMax = 0.0625;
		opticsZoomInit = 0.0625;
		opticsPPEffects[] = {};
		opticsDisablePeripherialVision = 1;
	};
};
//};

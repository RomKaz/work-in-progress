////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:07:04 2014 : Source 'file' date Fri Oct 31 06:07:04 2014
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

//Class WEAPONS_PMC : aa_12\config.bin{
class CfgPatches
{
	class CAWeapons_PMC_AA_12
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.54;
		requiredAddons[] = {"CAWeapons_PMC"};
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class CfgWeapons
{
	class Rifle;
	class AA12_PMC: Rifle
	{
		scope = 2;
		displayName = "$STR_PMC_DN_AA12";
		model = "\Ca\Weapons_PMC\AA_12\AA_12_PMC.p3d";
		picture = "\CA\Weapons_PMC\data\ui\w_aa12_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		magazines[] = {"20Rnd_B_AA12_Pellets","20Rnd_B_AA12_74Slug","20Rnd_B_AA12_HE"};
		optics = 1;
		modelOptics = "-";
		distanceZoomMin = 50;
		distanceZoomMax = 50;
		bullet1[] = {"Ca\Sounds_PMC\Weapons_PMC\SHOTGUN\shotgun_patrona_metal_1",0.1,1,15};
		bullet2[] = {"Ca\Sounds_PMC\Weapons_PMC\SHOTGUN\shotgun_patrona_metal_2",0.1,1,15};
		bullet3[] = {"Ca\Sounds_PMC\Weapons_PMC\SHOTGUN\shotgun_patrona_metal_3",0.17782794,1,15};
		bullet4[] = {"Ca\Sounds_PMC\Weapons_PMC\SHOTGUN\shotgun_patrona_metal_4",0.17782794,1,15};
		bullet5[] = {"Ca\Sounds_PMC\Weapons_PMC\SHOTGUN\shotgun_patrona_dirt_1",0.1,1,15};
		bullet6[] = {"Ca\Sounds_PMC\Weapons_PMC\SHOTGUN\shotgun_patrona_dirt_2",0.1,1,15};
		bullet7[] = {"Ca\Sounds_PMC\Weapons_PMC\SHOTGUN\shotgun_patrona_dirt_3",0.1,1,15};
		bullet8[] = {"Ca\Sounds_PMC\Weapons_PMC\SHOTGUN\shotgun_patrona_dirt_4",0.1,1,15};
		bullet9[] = {"Ca\Sounds_PMC\Weapons_PMC\SHOTGUN\shotgun_patrona_dirt_1",0.01,1,15};
		bullet10[] = {"Ca\Sounds_PMC\Weapons_PMC\SHOTGUN\shotgun_patrona_dirt_2",0.01,1,15};
		bullet11[] = {"Ca\Sounds_PMC\Weapons_PMC\SHOTGUN\shotgun_patrona_dirt_3",0.01,1,15};
		bullet12[] = {"Ca\Sounds_PMC\Weapons_PMC\SHOTGUN\shotgun_patrona_dirt_4",0.01,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		fireSpreadAngle = 0.7848246;
		modes[] = {"Single","FullAuto"};
		class Single: Mode_SemiAuto
		{
			begin1[] = {"Ca\Sounds_PMC\Weapons_PMC\SHOTGUN\shotgun1",1.7782794,1,1200};
			begin2[] = {"Ca\Sounds_PMC\Weapons_PMC\SHOTGUN\shotgun4",1.7782794,1,1200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			dispersion = 0.002;
			reloadTime = 0.2;
			recoil = "recoil_single_primary_6outof10";
			recoilProne = "recoil_single_primary_prone_6outof10";
			minRange = 0;
			minRangeProbab = 0.5;
			midRange = 60;
			midRangeProbab = 0.2;
			maxRange = 100;
			maxRangeProbab = 0.03;
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[] = {"Ca\Sounds_PMC\Weapons_PMC\SHOTGUN\shotgun1",1.7782794,1,1200};
			begin2[] = {"Ca\Sounds_PMC\Weapons_PMC\SHOTGUN\shotgun4",1.7782794,1,1200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			dispersion = 0.003;
			reloadTime = 0.2;
			recoil = "recoil_single_primary_6outof10";
			recoilProne = "recoil_single_primary_prone_6outof10";
			minRange = 0;
			minRangeProbab = 0.6;
			midRange = 40;
			midRangeProbab = 0.15;
			maxRange = 70;
			maxRangeProbab = 0.02;
		};
		class Library
		{
			libTextDesc = "$STR_PMC_LIB_AA12";
		};
	};
};
//};

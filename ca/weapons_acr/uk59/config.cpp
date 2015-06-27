////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:07:02 2014 : Source 'file' date Fri Oct 31 06:07:02 2014
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

//Class weapons_acr : uk59\config.bin{
class CfgPatches
{
	class CAWeapons_ACR_UK59
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.5;
		requiredAddons[] = {"CAWeapons_ACR"};
	};
};
class Mode_FullAuto;
class CfgWeapons
{
	class Rifle;
	class UK59_ACR: Rifle
	{
		htMin = 1;
		htMax = 600;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		scope = 2;
		displayName = "$STR_ACR_DN_UK59";
		class Library
		{
			libTextDesc = "$STR_ACR_LIB_UK59";
		};
		descriptionShort = "$STR_ACR_DSS_UK59";
		model = "\Ca\Weapons_ACR\UK59\uk59";
		picture = "\ca\weapons_acr\Data\UI\picture_uk59_CA.paa";
		UiPicture = "\CA\weapons\data\Ico\i_mg_CA.paa";
		magazines[] = {"100Rnd_762x54_PK"};
		reloadMagazineSound[] = {"\Ca\sounds\Weapons\rifles\reload-belt-1",0.056234132,1,20};
		magazineReloadTime = 5;
		bullet1[] = {"ca\sounds\weapons\shells\big_shell_metal_01",0.17782794,1,15};
		bullet2[] = {"ca\sounds\weapons\shells\big_shell_metal_03",0.17782794,1,15};
		bullet3[] = {"ca\sounds\weapons\shells\big_shell_metal_02",0.17782794,1,15};
		bullet4[] = {"ca\sounds\weapons\shells\big_shell_metal_01",0.17782794,1,15};
		bullet5[] = {"ca\sounds\weapons\shells\big_shell_dirt_01",0.31622776,1,15};
		bullet6[] = {"ca\sounds\weapons\shells\big_shell_dirt_02",0.31622776,1,15};
		bullet7[] = {"ca\sounds\weapons\shells\big_shell_dirt_03",0.31622776,1,15};
		bullet8[] = {"ca\sounds\weapons\shells\big_shell_dirt_04",0.31622776,1,15};
		bullet9[] = {"ca\sounds\weapons\shells\big_shell_soft_01",0.17782794,1,15};
		bullet10[] = {"ca\sounds\weapons\shells\big_shell_soft_02",0.17782794,1,15};
		bullet11[] = {"ca\sounds\weapons\shells\big_shell_soft_03",0.17782794,1,15};
		bullet12[] = {"ca\sounds\weapons\shells\big_shell_soft_04",0.17782794,1,15};
		dexterity = 0.96;
		cursor = "MGCursor";
		cursoraim = "\ca\Weapons\Data\clear_empty.paa";
		modes[] = {"manual","close","short","medium","far"};
		class manual: Mode_FullAuto
		{
			displayName = "";
			reloadTime = 0.09;
			recoil = "recoil_auto_machinegun_8outof10";
			recoilProne = "recoil_auto_machinegun_prone_5outof10";
			dispersion = 0.001;
			begin1[] = {"CA\Sounds_ACR\weapons\uk_single_1",2.5118864,1,1400};
			soundBegin[] = {"begin1",1};
			soundContinuous = 0;
			soundBurst = 0;
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 5;
			midRangeProbab = 0.58;
			maxRange = 10;
			maxRangeProbab = 0.04;
			showToPlayer = 1;
		};
		class close: manual
		{
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.58;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.58;
			maxRange = 300;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 12;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.58;
			maxRange = 600;
			maxRangeProbab = 0.04;
		};
		class far: close
		{
			burst = 16;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 600;
			midRangeProbab = 0.4;
			maxRange = 900;
			maxRangeProbab = 0.01;
		};
		aiDispersionCoefY = 21.0;
		aiDispersionCoefX = 21.0;
		type = "1	 + 	4";
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100,200,300,400,500,600,700,800};
		discreteDistanceInitIndex = 2;
	};
};
//};

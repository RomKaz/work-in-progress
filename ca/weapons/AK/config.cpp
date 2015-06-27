////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:06:46 2014 : Source 'file' date Fri Oct 31 06:06:46 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class weapons : AK\config.bin{
class CfgPatches
{
	class CAWeapons_AK
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAWeapons"};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class cfgWeapons
{
	class GrenadeLauncher;
	class Rifle;
	class AK_BASE: Rifle
	{
		scope = 0;
		value = 0;
		model = "";
		displayName = "";
		optics = 1;
		drySound[] = {"ca\sounds\weapons\rifles\dry",0.00031622776,1,10};
		reloadMagazineSound[] = {"ca\sounds\weapons\rifles\reload-ak-2ivan",0.07079458,1,20};
		modes[] = {"FullAuto","Single","Burst"};
		magazines[] = {"30Rnd_545x39_AK","30Rnd_545x39_AKSD"};
		bullet1[] = {"ca\sounds\weapons\shells\small_shell_metal_04",0.17782794,1,15};
		bullet2[] = {"ca\sounds\weapons\shells\small_shell_metal_03",0.17782794,1,15};
		bullet3[] = {"ca\sounds\weapons\shells\small_shell_metal_02",0.17782794,1,15};
		bullet4[] = {"ca\sounds\weapons\shells\small_shell_metal_01",0.17782794,1,15};
		bullet5[] = {"ca\sounds\weapons\shells\small_shell_dirt_07",0.31622776,1,15};
		bullet6[] = {"ca\sounds\weapons\shells\small_shell_dirt_09",0.31622776,1,15};
		bullet7[] = {"ca\sounds\weapons\shells\small_shell_dirt_10",0.31622776,1,15};
		bullet8[] = {"ca\sounds\weapons\shells\small_shell_dirt_12",0.31622776,1,15};
		bullet9[] = {"ca\sounds\weapons\shells\small_shell_soft_05",0.17782794,1,15};
		bullet10[] = {"ca\sounds\weapons\shells\small_shell_soft_09",0.17782794,1,15};
		bullet11[] = {"ca\sounds\weapons\shells\small_shell_soft_10",0.17782794,1,15};
		bullet12[] = {"ca\sounds\weapons\shells\small_shell_soft_13",0.17782794,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		class Single: Mode_SemiAuto
		{
			begin1[] = {"ca\sounds\weapons\rifles\AK74_single2",1.7782794,1,1000};
			soundBegin[] = {"begin1",1};
			reloadTime = 0.1;
			recoil = "recoil_single_primary_4outof10";
			recoilProne = "recoil_single_primary_prone_4outof10";
			dispersion = 0.00125;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.04;
		};
		class Burst: Mode_Burst
		{
			begin1[] = {"ca\sounds\weapons\rifles\AK74_single2",1.7782794,1,1000};
			soundBegin[] = {"begin1",1};
			soundBurst = 0;
			reloadTime = 0.1;
			ffCount = 3;
			recoil = "recoil_auto_primary_3outof10";
			recoilProne = "recoil_auto_primary_prone_3outof10";
			dispersion = 0.00125;
			minRange = 50;
			minRangeProbab = 0.3;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.05;
			showToPlayer = 0;
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[] = {"ca\sounds\weapons\rifles\AK74_single2",1.7782794,1,1000};
			soundBegin[] = {"begin1",1};
			reloadTime = 0.1;
			ffCount = 30;
			recoil = "recoil_auto_primary_4outof10";
			recoilProne = "recoil_auto_primary_prone_4outof10";
			dispersion = 0.00125;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.05;
		};
		class GP25Muzzle: GrenadeLauncher
		{
			displayName = "$STR_DN_GP25";
			reloadMagazineSound[] = {"Ca\sounds\Weapons\cannon\flare_reload",0.00031622776,1,25};
			magazines[] = {"1Rnd_HE_GP25","FlareWhite_GP25","FlareGreen_GP25","FlareRed_GP25","FlareYellow_GP25","1Rnd_SMOKE_GP25","1Rnd_SMOKERED_GP25","1Rnd_SMOKEGREEN_GP25","1Rnd_SMOKEYELLOW_GP25"};
			magazineReloadTime = 0;
			reloadTime = 0.1;
			optics = 1;
			modelOptics = "-";
			cameraDir = "GL look";
			memoryPointCamera = "GL eye";
			opticsZoomMin = 0.25;
			opticsZoomMax = 1.1;
			opticsZoomInit = 0.7;
		};
	};
	class AKS_BASE: AK_BASE
	{
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		value = 1;
		dexterity = 1.78;
		class Single: Single
		{
			dispersion = 0.00175;
		};
		class Burst: Burst
		{
			dispersion = 0.00175;
		};
		class FullAuto: FullAuto
		{
			dispersion = 0.00175;
		};
	};
};
//};

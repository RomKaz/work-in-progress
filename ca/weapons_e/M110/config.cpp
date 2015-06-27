////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:13:22 2014 : Source 'file' date Fri Oct 31 06:13:22 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class weapons_e : M110\config.bin{
class CfgPatches
{
	class CAWeapons_E_M110
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {"CAWeapons_E"};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
	class Rifle;
	class M110_TWS_EP1: Rifle
	{
		htMin = 1;
		htMax = 420;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		scope = 2;
		model = "\Ca\weapons_E\M110\M110_TWS.p3d";
		picture = "\ca\weapons_E\Data\icons\m110_tws_CA.paa";
		UiPicture = "\CA\weapons\data\Ico\i_sniper_CA.paa";
		weaponInfoType = "RscWeaponZeroing";
		opticsFlare = "true";
		opticsDisablePeripherialVision = "true";
		modelOptics = "\Ca\weapons_E\HWTS_optic.p3d";
		opticsPPEffects[] = {};
		visionMode[] = {"Ti"};
		thermalMode[] = {0,1};
		opticsZoomMin = 0.0498;
		distanceZoomMin = 400;
		opticsZoomMax = 0.15;
		distanceZoomMax = 120;
		opticsZoomInit = 0.15;
		dexterity = 1.55;
		displayName = "$STR_EP1_DN_M110_TWS_EP1";
		begin1[] = {"Ca\Sounds_E\Weapons_E\M110\M110_1",1.7782794,1,2000};
		soundBegin[] = {"begin1",1};
		drySound[] = {"Ca\Sounds_E\Weapons_E\M110\M110_dry",1.0,1,20};
		reloadMagazineSound[] = {"Ca\Sounds_E\Weapons_E\M110\M110_reload",1.0,1,100};
		magazines[] = {"20Rnd_762x51_B_SCAR"};
		reloadTime = 2;
		backgroundReload = "true";
		modes[] = {"Single"};
		class OpticsModes
		{
			class HTWS
			{
				opticsID = 1;
				useModelOptics = "true";
				opticsZoomMin = 0.0249;
				distanceZoomMin = 400;
				opticsZoomMax = 0.0755;
				distanceZoomMax = 120;
				opticsZoomInit = 0.0755;
				memoryPointCamera = "eye";
				opticsFlare = "true";
				opticsDisablePeripherialVision = "true";
				cameraDir = "";
				opticsPPEffects[] = {};
				visionMode[] = {"Ti"};
				thermalMode[] = {0,1};
				discretefov[] = {0.0755,0.0249};
				discreteInitIndex = 0;
				discreteDistance[] = {100,200,300,400,500,600,700,800};
				discreteDistanceInitIndex = 2;
			};
		};
		class Single: Mode_SemiAuto
		{
			begin1[] = {"Ca\Sounds_E\Weapons_E\M110\M110_1",1.7782794,1,1400};
			soundBegin[] = {"begin1",1};
			reloadMagazineSound[] = {"Ca\Sounds_E\Weapons_E\M110\M110_reload",1.0,1,100};
			dispersion = 0.00012;
			recoil = "recoil_single_primary_5outof10";
			recoilProne = "recoil_single_primary_prone_4outof10";
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 500;
			midRangeProbab = 0.7;
			maxRange = 1000;
			maxRangeProbab = 0.05;
			aiRateOfFire = 10.0;
			aiRateOfFireDistance = 1000;
			displayName = "";
		};
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_M110_TWS_EP1";
		};
		descriptionShort = "$STR_EP1_DSS_M110_TWS_EP1";
	};
	class M110_NVG_EP1: M110_TWS_EP1
	{
		htMin = 1;
		htMax = 420;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		displayName = "$STR_EP1_DN_M110_NVG_EP1";
		model = "\Ca\weapons_E\M110\M110_NV.p3d";
		picture = "\ca\weapons_E\Data\icons\m110_nv_CA.paa";
		modelOptics = "\ca\Weapons\2Dscope_MilDot_9.p3d";
		visionMode[] = {"Normal","NVG"};
		opticsZoomInit = 0.0293;
		distanceZoomMin = 300;
		opticsZoomMin = 0.0293;
		distanceZoomMax = 300;
		opticsZoomMax = 0.0293;
		class OpticsModes: OpticsModes
		{
			class StepScope: HTWS
			{
				opticsZoomInit = 0.0293;
				distanceZoomMin = 300;
				opticsZoomMin = 0.0293;
				distanceZoomMax = 300;
				opticsZoomMax = 0.0293;
				visionMode[] = {"Normal","NVG"};
				thermalMode[] = {};
				discreteDistance[] = {100,200,300,400,500,600,700,800};
				discreteDistanceInitIndex = 2;
			};
		};
	};
};
//};

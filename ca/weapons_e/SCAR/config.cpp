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

//Class weapons_e : SCAR\config.bin{
class CfgPatches
{
	class CAWeapons_E_scar
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {"CAWeapons_E"};
	};
};
class cfgRecoils
{
	scar_LRecoil[] = {0,0.008,0.006,0.01,0.008,0.006,0.04,0.004,0.012,0.12,0,0};
	scar_LRecoilProne[] = {0,0.005,0.004,0.01,0.005,0.004,0.07,0.004,0.001,0.16,0,0};
	scar_HRecoil[] = {0,0.014,0.015,0.02,0.014,0.015,0.07,0.005,0.018,0.13,0,0};
	scar_HRecoilProne[] = {0,0.01,0.006,0.013,0.01,0.006,0.1,0.008,0.001,0.12,0,0};
};
class Mode_SemiAuto
{
	displayName = "$STR_DN_MODE_SEMIAUTO";
};
class Mode_Burst: Mode_SemiAuto
{
	displayName = "$STR_DN_MODE_BURST";
};
class Mode_FullAuto: Mode_SemiAuto
{
	displayName = "$STR_DN_MODE_FULLAUTO";
};
class CfgWeapons
{
	class Rifle;
	class M16_base: Rifle
	{
		class M203Muzzle;
		class Single;
		class Burst;
		class FullAuto;
	};
	class SCAR_Base: M16_base
	{
		reloadSound[] = {"",1,1};
		reloadMagazineSound[] = {"\ca\Weapons\Data\Sound\m4_reload",0.031622775,1};
		drySound[] = {"\ca\Weapons\Data\Sound\G36_dry_v1",0.01,1};
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
		optics = 1;
		modes[] = {"SCAR_L_Single","SCAR_L_FullAuto"};
		class SCAR_L_Single: Single
		{
			begin1[] = {"ca\sounds_E\weapons_E\SCAR\SCAR_single_shot_v2a",2.5118864,1,1200};
			soundBegin[] = {"begin1",1};
		};
		class SCAR_L_FullAuto: FullAuto
		{
			begin1[] = {"ca\sounds_E\weapons_E\SCAR\SCAR_single_shot_v2a",2.5118864,1,1200};
			soundBegin[] = {"begin1",1};
			disabledOpticsModes[] = {1};
		};
		class EGLMMuzzle: M203Muzzle
		{
			begin1[] = {"ca\sounds_e\weapons_e\grenade_launcher\gr_launcher_3",1.0,1,200};
			begin2[] = {"ca\sounds_e\weapons_e\grenade_launcher\gr_launcher_4",1.0,1,200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			reloadMagazineSound[] = {"ca\sounds_e\weapons_e\grenade_launcher\gr_launcher_reload",1.0,1,30};
			drySound[] = {"ca\sounds_e\weapons_e\grenade_launcher\gr_launcher_dry",1.1220185,1,40};
			displayName = "$STR_EP1_DN_EGLM";
			opticsZoomMin = 0.22;
			opticsZoomMax = 0.95;
			opticsZoomInit = 0.42;
		};
	};
	class SCAR_L_Base: SCAR_Base
	{
		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
	};
	class SCAR_L_CQC: SCAR_L_Base
	{
		scope = 2;
		model = "\Ca\weapons_E\SCAR\mk16_short_ironsights";
		modelOptics = "-";
		dexterity = 1.68;
		displayName = "$STR_EP1_DN_SCAR_L_CQC";
		picture = "\Ca\weapons_E\data\icons\mk16_short_ironsights_CA.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		modes[] = {"SCAR_L_Single","SCAR_L_FullAuto"};
		class SCAR_L_Single: SCAR_L_Single
		{
			dispersion = 0.00175;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.05;
			aiRateOfFireDistance = 300;
		};
		class SCAR_L_FullAuto: SCAR_L_FullAuto
		{
			dispersion = 0.00175;
		};
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_SCAR_L_CQC";
		};
		descriptionShort = "$STR_EP1_DSS_SCAR_L_CQC";
	};
	class SCAR_L_CQC_Holo: SCAR_L_CQC
	{
		scope = 2;
		model = "\Ca\weapons_E\SCAR\mk16_short_holo_lamp";
		modelOptics = "-";
		displayName = "$STR_EP1_DN_SCAR_L_CQC_Holo";
		picture = "\Ca\weapons_E\data\icons\mk16_short_holo_lamp_CA.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons_E\SCAR\Data\Anim\SCAR.rtm"};
		class FlashLight
		{
			color[] = {0.9,0.9,0.7,0.9};
			ambient[] = {0.1,0.1,0.1,1.0};
			position = "flash dir";
			direction = "flash";
			angle = 30;
			scale[] = {1,1,0.5};
			brightness = 0.1;
		};
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_SCAR_L_CQC_Holo";
		};
		descriptionShort = "$STR_EP1_DSS_SCAR_L_CQC_Holo";
	};
	class SCAR_L_STD_Mk4CQT: SCAR_L_Base
	{
		scope = 2;
		model = "\Ca\weapons_E\SCAR\mk16_std_mk4cqt_laser_grip";
		modelOptics = "\Ca\weapons_E\SCAR\MK4_Illum_optic_4x.p3d";
		class OpticsModes
		{
			class Mk4
			{
				opticsID = 1;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				opticsZoomMin = 0.083;
				opticsZoomMax = 0.083;
				opticsZoomInit = 0.083;
				memoryPointCamera = "opticView";
				visionMode[] = {"Normal"};
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				distanceZoomMin = 300;
				distanceZoomMax = 300;
				cameraDir = "";
			};
			class Kolimator: Mk4
			{
				opticsID = 2;
				useModelOptics = 0;
				opticsFlare = 0;
				opticsDisablePeripherialVision = 0;
				opticsZoomMin = 0.25;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.5;
				memoryPointCamera = "eye";
				visionMode[] = {};
			};
		};
		dexterity = 1.64;
		displayName = "$STR_EP1_DN_SCAR_L_STD_Mk4CQT";
		picture = "\Ca\weapons_E\data\icons\mk16_std_mk4cqt_laser_grip_CA.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons_E\SCAR\Data\Anim\SCAR.rtm"};
		irDistance = 100;
		class SCAR_L_Single: SCAR_L_Single
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 250;
			midRangeProbab = 0.9;
			maxRange = 600;
			maxRangeProbab = 0.1;
			aiRateOfFireDistance = 600;
		};
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_SCAR_L_STD_Mk4CQT";
		};
		descriptionShort = "$STR_EP1_DSS_SCAR_L_STD_Mk4CQT";
	};
	class SCAR_L_STD_EGLM_RCO: SCAR_L_STD_Mk4CQT
	{
		scope = 2;
		model = "\Ca\weapons_E\SCAR\mk16_std_acog_eglm_laser";
		modelOptics = "\Ca\weapons_E\SCAR\ACOG_TA31_optic_4x.p3d";
		dexterity = 1.48;
		displayName = "$STR_EP1_DN_SCAR_L_STD_EGLM_RCO";
		picture = "\Ca\weapons_E\data\icons\mk16_std_acog_eglm_laser_CA.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons\data\Anim\M16GL.rtm"};
		muzzles[] = {"this","EGLMMuzzle"};
		class OpticsModes
		{
			class ACOG
			{
				opticsID = 1;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				opticsZoomMin = 0.0623;
				opticsZoomMax = 0.0623;
				opticsZoomInit = 0.0623;
				memoryPointCamera = "opticView";
				visionMode[] = {"Normal"};
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				distanceZoomMin = 300;
				distanceZoomMax = 300;
				cameraDir = "";
			};
			class Kolimator: ACOG
			{
				opticsID = 2;
				useModelOptics = 0;
				opticsFlare = 0;
				opticsDisablePeripherialVision = 0;
				opticsZoomMin = 0.25;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.5;
				memoryPointCamera = "eye";
				visionMode[] = {};
			};
		};
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_SCAR_L_STD_EGLM_RCO";
		};
		descriptionShort = "$STR_EP1_DSS_SCAR_L_STD_EGLM_RCO";
	};
	class SCAR_L_CQC_EGLM_Holo: SCAR_L_CQC
	{
		scope = 2;
		model = "\Ca\weapons_E\SCAR\mk16_short_holo_eglm_laser_mfsup";
		modelOptics = "-";
		dexterity = 1.54;
		displayName = "$STR_EP1_DN_SCAR_L_CQC_EGLM_Holo";
		picture = "\Ca\weapons_E\data\icons\mk16_short_holo_eglm_laser_mfsup_CA.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons\data\Anim\M16GL.rtm"};
		muzzles[] = {"this","EGLMMuzzle"};
		modes[] = {"SCAR_L_Single","SCAR_L_FullAuto"};
		irDistance = 100;
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_SCAR_L_CQC_EGLM_Holo";
		};
		descriptionShort = "$STR_EP1_DSS_SCAR_L_CQC_EGLM_Holo";
	};
	class SCAR_L_STD_EGLM_TWS: SCAR_L_STD_EGLM_RCO
	{
		scope = 2;
		model = "\Ca\weapons_E\SCAR\mk16_std_tws_eglm_mfsup";
		displayName = "$STR_EP1_DN_SCAR_L_STD_EGLM_TWS";
		picture = "\Ca\weapons_E\data\icons\mk16_std_tws_eglm_mfsup_CA.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		modelOptics = "\Ca\weapons_E\LWTS_optic.p3d";
		opticsZoomMin = 0.1606;
		opticsZoomMax = 0.1606;
		opticsZoomInit = 0.1606;
		visionMode[] = {"Ti"};
		thermalMode[] = {0,1};
		class OpticsModes
		{
			class LTWS
			{
				opticsID = 1;
				useModelOptics = 1;
				opticsZoomMin = 0.1606;
				opticsZoomMax = 0.1606;
				opticsZoomInit = 0.1606;
				distanceZoomMin = 300;
				distanceZoomMax = 300;
				memoryPointCamera = "eye";
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				cameraDir = "";
				opticsPPEffects[] = {};
				visionMode[] = {"Ti"};
				thermalMode[] = {0,1};
			};
		};
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_SCAR_L_STD_EGLM_TWS";
		};
		descriptionShort = "$STR_EP1_DSS_SCAR_L_STD_EGLM_TWS";
	};
	class SCAR_L_STD_HOLO: SCAR_L_Base
	{
		scope = 2;
		model = "\Ca\weapons_E\SCAR\mk16_std_holo_laser_grip";
		modelOptics = "-";
		dexterity = 1.64;
		displayName = "$STR_EP1_DN_SCAR_L_STD_HOLO";
		picture = "\Ca\weapons_E\data\icons\mk16_std_holo_laser_grip_CA";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons_E\SCAR\Data\Anim\SCAR.rtm"};
		irDistance = 100;
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_SCAR_L_STD_HOLO";
		};
		descriptionShort = "$STR_EP1_DSS_SCAR_L_STD_HOLO";
	};
	class SCAR_L_CQC_CCO_SD: SCAR_L_CQC
	{
		scope = 2;
		model = "\Ca\weapons_E\SCAR\mk16_short_aim_laser_sup_grip";
		modelOptics = "-";
		dexterity = 1.64;
		displayName = "$STR_EP1_DN_SCAR_L_CQC_CCO_SD";
		picture = "\Ca\weapons_E\data\icons\mk16_short_aim_laser_sup_grip_CA.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons_E\SCAR\Data\Anim\SCAR.rtm"};
		irDistance = 100;
		modes[] = {"SCAR_L_SD_Single","SCAR_L_SD_FullAuto"};
		magazines[] = {"30Rnd_556x45_StanagSD","30Rnd_556x45_G36SD"};
		fireLightDuration = 0.0;
		fireLightIntensity = 0.0;
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		class SCAR_L_SD_Single: Mode_SemiAuto
		{
			begin1[] = {"ca\sounds_E\weapons_E\SCAR\SCAR_SD_single1",2.5118864,1,50};
			soundBegin[] = {"begin1",1};
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_2outof10";
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 40;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFireDistance = 600;
		};
		class SCAR_L_SD_FullAuto: Mode_FullAuto
		{
			begin1[] = {"ca\sounds_E\weapons_E\SCAR\SCAR_SD_start1",2.5118864,1,50};
			soundBegin[] = {"begin1",1};
			end1[] = {"ca\sounds_E\weapons_E\SCAR\SCAR_SD_single1",2.5118864,1,50};
			end2[] = {"ca\sounds_E\weapons_E\SCAR\SCAR_SD_single2",2.5118864,1,50};
			soundEnd[] = {"end1",0.5,"end2",0.5};
			recoil = "recoil_auto_primary_2outof10";
			recoilProne = "recoil_auto_primary_prone_2outof10";
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 40;
			maxRangeProbab = 0.05;
		};
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_SCAR_L_CQC_CCO_SD";
		};
		descriptionShort = "$STR_EP1_DSS_SCAR_L_CQC_CCO_SD";
	};
	class SCAR_H_Base: SCAR_Base
	{
		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		magazines[] = {"20rnd_762x51_B_SCAR"};
		modes[] = {"SCAR_H_Single","SCAR_H_FullAuto"};
		class SCAR_H_Single: Mode_SemiAuto
		{
			begin1[] = {"ca\sounds_E\weapons_E\SCAR\SCAR_single_shot_v3",2.5118864,1,1500};
			soundBegin[] = {"begin1",1};
			dispersion = 0.00045;
			recoil = "recoil_single_primary_4outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.05;
			aiRateOfFireDistance = 600;
		};
		class SCAR_H_FullAuto: Mode_FullAuto
		{
			begin1[] = {"ca\sounds_E\weapons_E\SCAR\SCAR_single_shot_v3",2.5118864,1,1500};
			soundBegin[] = {"begin1",1};
			dispersion = 0.00045;
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 30;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
		};
	};
	class SCAR_H_CQC_CCO: SCAR_H_Base
	{
		scope = 2;
		model = "\Ca\weapons_E\SCAR\mk17_short_aim_lamp_mfsup";
		modelOptics = "-";
		dexterity = 1.61;
		displayName = "$STR_EP1_DN_SCAR_H_CQC_CCO";
		picture = "\Ca\weapons_E\data\icons\mk17_short_aim_lamp_mfsup_CA.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons_E\SCAR\Data\Anim\SCAR.rtm"};
		class SCAR_H_Single: SCAR_H_Single
		{
			dispersion = 0.00035;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.05;
			aiRateOfFireDistance = 300;
		};
		class FlashLight
		{
			color[] = {0.9,0.9,0.7,0.9};
			ambient[] = {0.1,0.1,0.1,1.0};
			position = "flash dir";
			direction = "flash";
			angle = 30;
			scale[] = {1,1,0.5};
			brightness = 0.1;
		};
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_SCAR_H_CQC_CCO";
		};
		descriptionShort = "$STR_EP1_DSS_SCAR_H_CQC_CCO";
	};
	class SCAR_H_CQC_CCO_SD: SCAR_H_CQC_CCO
	{
		scope = 2;
		model = "\Ca\weapons_E\SCAR\mk17_std_aim_laser_sup_grip";
		modelOptics = "-";
		dexterity = 1.62;
		displayName = "$STR_EP1_DN_SCAR_H_CQC_CCO_SD";
		picture = "\Ca\weapons_E\data\icons\mk17_std_aim_laser_sup_grip_CA.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons_E\SCAR\Data\Anim\SCAR.rtm"};
		fireLightDuration = 0.0;
		fireLightIntensity = 0.0;
		magazines[] = {"20rnd_762x51_SB_SCAR"};
		irDistance = 100;
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		modes[] = {"SCAR_H_SD_Single","SCAR_H_SD_FullAuto"};
		class SCAR_H_SD_Single: SCAR_H_Single
		{
			begin1[] = {"\ca\sounds_E\weapons_E\SCAR\SCAR_SD_single1",2.5118864,1,50};
			soundBegin[] = {"begin1",1};
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 40;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFireDistance = 150;
		};
		class SCAR_H_SD_FullAuto: SCAR_H_FullAuto
		{
			begin1[] = {"\ca\sounds_E\weapons_E\SCAR\SCAR_SD_start1",2.5118864,1,50};
			soundBegin[] = {"begin1",1};
			end1[] = {"\ca\sounds_E\weapons_E\SCAR\SCAR_SD_single1",2.5118864,1,50};
			end2[] = {"\ca\sounds_E\weapons_E\SCAR\SCAR_SD_single2",2.5118864,1,50};
			soundEnd[] = {"end1",0.5,"end2",0.5};
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 40;
			maxRangeProbab = 0.05;
		};
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_SCAR_H_CQC_CCO_SD";
		};
		descriptionShort = "$STR_EP1_DSS_SCAR_H_CQC_CCO_SD";
	};
	class SCAR_H_STD_EGLM_Spect: SCAR_H_CQC_CCO
	{
		scope = 2;
		model = "\Ca\weapons_E\SCAR\mk17_short_spectre_eglm_laser";
		modelOptics = "\Ca\weapons_E\SCAR\SpecterDR_556_optic_4x.p3d";
		class OpticsModes
		{
			class Specter
			{
				opticsID = 1;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				opticsZoomMin = 0.071945;
				opticsZoomInit = 0.071945;
				opticsZoomMax = 0.071945;
				memoryPointCamera = "opticView";
				visionMode[] = {"Normal"};
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				distanceZoomMin = 300;
				distanceZoomMax = 300;
				cameraDir = "";
			};
			class Ironsights: Specter
			{
				opticsID = 2;
				useModelOptics = 0;
				opticsPPEffects[] = {};
				opticsFlare = 0;
				opticsDisablePeripherialVision = 0;
				opticsZoomMin = 0.25;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.5;
				memoryPointCamera = "eye";
				visionMode[] = {};
			};
		};
		dexterity = 1.49;
		displayName = "$STR_EP1_DN_SCAR_H_STD_EGLM_Spect";
		picture = "\Ca\weapons_E\data\icons\mk17_short_spectre_eglm_laser_CA.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons\data\Anim\M16GL.rtm"};
		muzzles[] = {"this","EGLMMuzzle"};
		irDistance = 100;
		class SCAR_H_Single: SCAR_H_Single
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.05;
			aiRateOfFireDistance = 600;
		};
		class SCAR_H_FullAuto: SCAR_H_FullAuto
		{
			modelOptics = "-";
			opticsPPEffects[] = {};
			opticsZoomMin = 0.25;
			opticsZoomMax = 1.1;
			opticsZoomInit = 0.5;
		};
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_SCAR_H_STD_EGLM_Spect";
		};
		descriptionShort = "$STR_EP1_DSS_SCAR_H_STD_EGLM_Spect";
	};
	class SCAR_H_LNG_Sniper: SCAR_H_Base
	{
		scope = 2;
		model = "\Ca\weapons_E\SCAR\mk17_long_leupold_bipod";
		modelOptics = "\Ca\weapons_E\SCAR\TacMil_optic_8x.p3d";
		opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
		opticsZoomMin = 0.035972;
		opticsZoomMax = 0.087666;
		opticsZoomInit = 0.087666;
		distanceZoomMin = 329;
		distanceZoomMax = 329;
		dexterity = 1.6;
		displayName = "$STR_EP1_DN_SCAR_H_LNG_Sniper";
		picture = "\Ca\weapons_E\data\icons\mk17_long_leupold_bipod_CA.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		handAnim[] = {};
		modes[] = {"SCAR_H_Single","SCAR_H_FullAuto"};
		weaponInfoType = "RscWeaponZeroing";
		class OpticsModes
		{
			class StepScope
			{
				opticsID = 1;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				opticsZoomMin = 0.087666;
				opticsZoomMax = 0.035972;
				opticsZoomInit = 0.087666;
				memoryPointCamera = "eye";
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				distanceZoomMin = 329;
				distanceZoomMax = 329;
				cameraDir = "";
				visionMode[] = {"Normal"};
				discreteDistance[] = {100,200,300,400,500,600,700,800};
				discreteDistanceInitIndex = 2;
			};
		};
		class SCAR_H_Single: SCAR_H_Single
		{
			dispersion = 0.00025;
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 400;
			midRangeProbab = 0.7;
			maxRange = 800;
			maxRangeProbab = 0.05;
			aiRateOfFireDistance = 800;
		};
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_SCAR_H_LNG_Sniper";
		};
		descriptionShort = "$STR_EP1_DSS_SCAR_H_LNG_Sniper";
	};
	class SCAR_H_LNG_Sniper_SD: SCAR_H_Base
	{
		scope = 2;
		model = "\Ca\weapons_E\SCAR\mk17_long_zeiss_sup_bipod";
		modelOptics = "\ca\weapons\2Dscope_MilDot_10";
		opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
		opticsZoomMin = 0.071945;
		opticsZoomMax = 0.071945;
		opticsZoomInit = 0.071945;
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		fireLightDuration = 0.0;
		fireLightIntensity = 0.0;
		dexterity = 1.57;
		displayName = "$STR_EP1_DN_SCAR_H_LNG_Sniper_SD";
		picture = "\Ca\weapons_E\data\icons\mk17_long_zeiss_sup_bipod_CA.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons_E\SCAR\Data\Anim\SCAR.rtm"};
		magazines[] = {"20rnd_762x51_SB_SCAR"};
		modes[] = {"SCAR_H_SD_Single","SCAR_H_SD_FullAuto"};
		weaponInfoType = "RscWeaponZeroing";
		class OpticsModes
		{
			class StepScope
			{
				opticsID = 1;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				opticsZoomMin = 0.087666;
				opticsZoomMax = 0.035972;
				opticsZoomInit = 0.087666;
				memoryPointCamera = "eye";
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				distanceZoomMin = 100;
				distanceZoomMax = 100;
				cameraDir = "";
				visionMode[] = {"Normal"};
				discreteDistance[] = {50,100,200,300};
				discreteDistanceInitIndex = 1;
			};
		};
		class SCAR_H_SD_Single: Mode_SemiAuto
		{
			begin1[] = {"\ca\sounds_E\weapons_E\SCAR\SCAR_SD_single1",2.5118864,1,50};
			soundBegin[] = {"begin1",1};
			dispersion = 0.0015;
			reloadTime = 0.1;
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_2outof10";
			minRange = 2;
			minRangeProbab = 0.1;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 350;
			maxRangeProbab = 0.5;
			aiRateOfFireDistance = 350;
		};
		class SCAR_H_SD_FullAuto: Mode_FullAuto
		{
			begin1[] = {"\ca\sounds_E\weapons_E\SCAR\SCAR_SD_start1",2.5118864,1,50};
			soundBegin[] = {"begin1",1};
			end1[] = {"\ca\sounds_E\weapons_E\SCAR\SCAR_SD_single1",2.5118864,1,50};
			end2[] = {"\ca\sounds_E\weapons_E\SCAR\SCAR_SD_single2",2.5118864,1,50};
			soundEnd[] = {"end1",0.5,"end2",0.5};
			dispersion = 0.004;
			reloadTime = 0.1;
			recoil = "recoil_single_primary_2outof10";
			recoilProne = "recoil_single_primary_prone_2outof10";
			minRange = 2;
			minRangeProbab = 0.1;
			midRange = 50;
			midRangeProbab = 0.58;
			maxRange = 100;
			maxRangeProbab = 0.04;
		};
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_SCAR_H_LNG_Sniper_SD";
		};
		descriptionShort = "$STR_EP1_DSS_SCAR_H_LNG_Sniper_SD";
	};
	class SCAR_H_STD_TWS_SD: SCAR_H_LNG_Sniper_SD
	{
		scope = 2;
		model = "\Ca\weapons_E\SCAR\mk17_std_tws_sup_grip";
		modelOptics = "\Ca\weapons_E\LWTS_optic.p3d";
		opticsPPEffects[] = {};
		visionMode[] = {"Ti"};
		thermalMode[] = {0,1};
		opticsZoomMin = 0.1606;
		opticsZoomMax = 0.1606;
		opticsZoomInit = 0.1606;
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		dexterity = 1.68;
		displayName = "$STR_EP1_DN_SCAR_H_STD_TWS_SD";
		picture = "\Ca\weapons_E\data\icons\mk17_std_tws_sup_grip_CA.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		irDistance = 100;
		class OpticsModes: OpticsModes
		{
			class StepScope: StepScope
			{
				opticsPPEffects[] = {};
				opticsZoomMin = 0.1606;
				opticsZoomMax = 0.1606;
				opticsZoomInit = 0.1606;
				memoryPointCamera = "eye";
				distanceZoomMin = 100;
				distanceZoomMax = 100;
				visionMode[] = {"Ti"};
				thermalMode[] = {0,1};
			};
		};
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_SCAR_H_STD_TWS_SD";
		};
		descriptionShort = "$STR_EP1_DSS_SCAR_H_STD_TWS_SD";
	};
};
//};

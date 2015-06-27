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

//Class WEAPONS_PMC : xm8\config.bin{
class CfgPatches
{
	class CAWeapons_PMC_XM8
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.54;
		requiredAddons[] = {"CAWeapons_PMC"};
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class Mode_Burst;
class CfgWeapons
{
	class RifleCore;
	class Rifle: RifleCore
	{
		class M203Muzzle;
	};
	class m8_base: Rifle
	{
		htMin = 1;
		htMax = 600;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		magazines[] = {"30Rnd_556x45_G36","100Rnd_556x45_BetaCMag","30Rnd_556x45_G36SD","30Rnd_556x45_Stanag","30Rnd_556x45_StanagSD","20Rnd_556x45_Stanag"};
		optics = 1;
		modelOptics = "\Ca\Weapons_PMC\XM8\m8_optics.p3d";
		opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
		opticsDisablePeripherialVision = 1;
		opticsZoomMin = 0.0623;
		opticsZoomMax = 0.0623;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		discreteDistance[] = {100,200,300,400,500,600,700,800};
		discreteDistanceInitIndex = 2;
		visionMode[] = {"Normal"};
		dexterity = 1.68;
		modes[] = {"Single","Burst","Fullauto"};
		class Single: Mode_SemiAuto
		{
			begin1[] = {"ca\sounds\weapons\rifles\g36_single1",2.2387211,1,1000};
			begin2[] = {"ca\sounds\weapons\rifles\g36_single2",2.2387211,1,1000};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			reloadTime = 0.08;
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
			dispersion = 0.00175;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 350;
			maxRangeProbab = 0.05;
		};
		class Burst: Mode_Burst
		{
			begin1[] = {"ca\sounds\weapons\rifles\g36_single1",2.2387211,1,1000};
			begin2[] = {"ca\sounds\weapons\rifles\g36_single2",2.2387211,1,1000};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			soundBurst = 0;
			ffCount = 3;
			reloadTime = 0.08;
			recoil = "recoil_auto_primary_2outof10";
			recoilProne = "recoil_auto_primary_prone_2outof10";
			dispersion = 0.00175;
			minRange = 1;
			minRangeProbab = 0.3;
			midRange = 80;
			midRangeProbab = 0.7;
			maxRange = 120;
			maxRangeProbab = 0.05;
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[] = {"ca\sounds\weapons\rifles\g36_single1",2.2387211,1,1000};
			begin2[] = {"ca\sounds\weapons\rifles\g36_single2",2.2387211,1,1000};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			soundContinuous = 0;
			reloadTime = 0.08;
			recoil = "recoil_auto_primary_3outof10";
			recoilProne = "recoil_auto_primary_prone_3outof10";
			dispersion = 0.00175;
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.7;
			maxRange = 70;
			maxRangeProbab = 0.05;
		};
		class XM320Muzzle: M203Muzzle{};
		bullet1[] = {"ca\sounds\weapons\shells\small_shell_metal_04",0.17782794,1,30};
		bullet2[] = {"ca\sounds\weapons\shells\small_shell_metal_03",0.17782794,1,30};
		bullet3[] = {"ca\sounds\weapons\shells\small_shell_metal_02",0.17782794,1,30};
		bullet4[] = {"ca\sounds\weapons\shells\small_shell_metal_01",0.17782794,1,30};
		bullet5[] = {"ca\sounds\weapons\shells\small_shell_dirt_07",0.31622776,1,20};
		bullet6[] = {"ca\sounds\weapons\shells\small_shell_dirt_09",0.31622776,1,20};
		bullet7[] = {"ca\sounds\weapons\shells\small_shell_dirt_10",0.31622776,1,20};
		bullet8[] = {"ca\sounds\weapons\shells\small_shell_dirt_12",0.31622776,1,20};
		bullet9[] = {"ca\sounds\weapons\shells\small_shell_soft_05",0.17782794,1,20};
		bullet10[] = {"ca\sounds\weapons\shells\small_shell_soft_09",0.17782794,1,15};
		bullet11[] = {"ca\sounds\weapons\shells\small_shell_soft_10",0.17782794,1,15};
		bullet12[] = {"ca\sounds\weapons\shells\small_shell_soft_13",0.17782794,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		drySound[] = {"\ca\Weapons\Data\Sound\G36_dry_v1",0.00031622776,1,5};
	};
	class m8_carbine: m8_base
	{
		scope = 2;
		displayname = "$STR_DN_XM8";
		model = "\Ca\Weapons_PMC\XM8\m8_carbine.p3d";
		picture = "\ca\Weapons_PMC\Data\ui\w_xm8_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		irDistance = 100;
		weaponInfoType = "RscWeaponZeroing";
		class Library
		{
			libTextDesc = "$STR_LIB_XM8";
		};
		descriptionShort = "$STR_DSS_XM8";
	};
	class m8_carbine_pmc: m8_base
	{
		scope = 2;
		displayName = "$STR_PMC_DN_XM8_CQC";
		model = "\Ca\Weapons_PMC\XM8\m8_carbine_pmc.p3d";
		picture = "\ca\Weapons_PMC\Data\ui\w_xm8_CQC_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		dexterity = 1.64;
		class OpticsModes
		{
			class CCO
			{
				opticsID = 1;
				useModelOptics = 0;
				opticsPPEffects[] = {};
				distanceZoomMin = 300;
				distanceZoomMax = 300;
				discreteDistance[] = {300};
				discreteDistanceInitIndex = 0;
				opticsZoomMin = 0.25;
				opticsZoomInit = 0.5;
				opticsZoomMax = 1.1;
				memoryPointCamera = "eye";
				visionMode[] = {};
				opticsFlare = 0;
				opticsDisablePeripherialVision = 0;
				cameraDir = "";
			};
		};
		irDistance = 100;
		class Library
		{
			libTextDesc = "$STR_LIB_XM8";
		};
		descriptionShort = "$STR_DSS_XM8";
		handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons_E\SCAR\Data\Anim\SCAR.rtm"};
	};
	class m8_carbineGL: m8_base
	{
		scope = 2;
		displayname = "$STR_DN_XM8_GL";
		model = "\Ca\Weapons_PMC\XM8\m8_carbineGL.p3d";
		picture = "\ca\Weapons_PMC\Data\ui\w_xm8_xm320_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		muzzles[] = {"this","XM320Muzzle"};
		class OpticsModes
		{
			class CCO
			{
				opticsID = 1;
				useModelOptics = 0;
				opticsPPEffects[] = {};
				distanceZoomMin = 300;
				distanceZoomMax = 300;
				discreteDistance[] = {300};
				discreteDistanceInitIndex = 0;
				opticsZoomMin = 0.25;
				opticsZoomInit = 0.5;
				opticsZoomMax = 1.1;
				memoryPointCamera = "eye";
				visionMode[] = {};
				opticsFlare = 0;
				opticsDisablePeripherialVision = 0;
				cameraDir = "";
			};
		};
		irDistance = 100;
		dexterity = 1.53;
		class Library
		{
			libTextDesc = "$STR_LIB_XM8_GL";
		};
		descriptionShort = "$STR_DSS_XM8_GL";
		handAnim[] = {"OFP2_ManSkeleton","\Ca\Weapons_PMC\Data\Anim\XM8GL.rtm"};
	};
	class m8_compact: m8_base
	{
		scope = 2;
		displayname = "$STR_DN_XM8_COMPACT";
		model = "\Ca\Weapons_PMC\XM8\m8_compact.p3d";
		picture = "\ca\Weapons_PMC\Data\ui\w_xm8_compact_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		dexterity = 1.7;
		handAnim[] = {"OFP2_ManSkeleton","\Ca\Weapons_PMC\Data\Anim\XM8GL.rtm"};
		class OpticsModes
		{
			class CCO
			{
				opticsID = 1;
				useModelOptics = 0;
				opticsPPEffects[] = {};
				distanceZoomMin = 100;
				distanceZoomMax = 100;
				discreteDistance[] = {100};
				discreteDistanceInitIndex = 0;
				opticsZoomMin = 0.25;
				opticsZoomInit = 0.5;
				opticsZoomMax = 1.1;
				memoryPointCamera = "eye";
				visionMode[] = {};
				opticsFlare = 0;
				opticsDisablePeripherialVision = 0;
				cameraDir = "";
			};
		};
		irDistance = 100;
		class Single: Single
		{
			dispersion = 0.002;
			minRange = 2;
			minRangeProbab = 0.1;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.05;
		};
		class Burst: Burst
		{
			dispersion = 0.002;
			minRange = 1;
			minRangeProbab = 0.1;
			midRange = 60;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
		};
		class FullAuto: FullAuto
		{
			dispersion = 0.002;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 60;
			maxRangeProbab = 0.05;
		};
		class Library
		{
			libTextDesc = "$STR_LIB_XM8_Compact";
		};
		descriptionShort = "$STR_DSS_XM8_Compact";
	};
	class m8_compact_pmc: m8_compact
	{
		displayName = "$STR_PMC_DN_XM8_COMPACT_CCO";
		model = "\Ca\Weapons_PMC\XM8\m8_compact_pmc.p3d";
		picture = "\ca\Weapons_PMC\Data\ui\w_xm8_compact_cco_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		irDistance = 0;
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
			libTextDesc = "$STR_LIB_XM8_COMPACT";
		};
	};
	class m8_sharpshooter: m8_base
	{
		scope = 2;
		displayname = "$STR_DN_XM8_LONG";
		model = "\Ca\Weapons_PMC\XM8\m8_sharpshooter.p3d";
		picture = "\ca\Weapons_PMC\Data\ui\w_xm8_sharp_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_sniper_CA.paa";
		dexterity = 1.6;
		weaponInfoType = "RscWeaponZeroing";
		class OpticsModes
		{
			class Scope
			{
				opticsID = 1;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				opticsZoomMin = 0.07082153;
				opticsZoomMax = 0.07082153;
				opticsZoomInit = 0.07082153;
				memoryPointCamera = "opticView";
				visionMode[] = {"Normal"};
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				distanceZoomMin = 300;
				distanceZoomMax = 300;
				cameraDir = "";
				discreteDistance[] = {100,200,300,400,500,600,700,800};
				discreteDistanceInitIndex = 2;
			};
		};
		irDistance = 100;
		class Single: Single
		{
			dispersion = 0.0007;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.05;
		};
		class Burst: Burst
		{
			dispersion = 0.0007;
			minRange = 1;
			minRangeProbab = 0.2;
			midRange = 80;
			midRangeProbab = 0.7;
			maxRange = 120;
			maxRangeProbab = 0.05;
		};
		class FullAuto: FullAuto
		{
			dispersion = 0.0007;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 25;
			midRangeProbab = 0.7;
			maxRange = 70;
			maxRangeProbab = 0.05;
		};
		class Library
		{
			libTextDesc = "$STR_LIB_XM8_Long";
		};
		descriptionShort = "$STR_DSS_XM8_Long";
	};
	class m8_SAW: m8_sharpshooter
	{
		scope = 2;
		displayname = "$STR_DN_XM8_SAW";
		model = "\Ca\Weapons_PMC\XM8\m8_SAW.p3d";
		magazines[] = {"100Rnd_556x45_BetaCMag","100Rnd_556x45_BetaCMag_airLock","30Rnd_556x45_G36","30Rnd_556x45_G36SD","30Rnd_556x45_Stanag","30Rnd_556x45_StanagSD","20Rnd_556x45_Stanag"};
		picture = "\ca\Weapons_PMC\Data\ui\w_xm8_auto_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_mg_CA.paa";
		dexterity = 1.3;
		cursor = "MGCursor";
		cursoraim = "foresight";
		handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons_E\data\Anim\MG36.rtm"};
		modes[] = {"Manual","Close","Short","Medium","Far"};
		class Manual: Mode_FullAuto
		{
			recoil = "recoil_auto_machinegun_5outof10";
			recoilProne = "recoil_auto_machinegun_prone_5outof10";
			dispersion = 0.002;
			sound[] = {"\Ca\Sounds_PMC\Weapons_PMC\XM8\M249_1a",10.0,1,1400};
			soundBurst = 0;
			minRange = 1;
			minRangeProbab = 0.3;
			midRange = 5;
			midRangeProbab = 0.58;
			maxRange = 10;
			maxRangeProbab = 0.04;
			showToPlayer = 1;
		};
		class Close: Manual
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
		class Short: Close
		{
			burst = 6;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 200;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 100;
			midRangeProbab = 0.58;
			maxRange = 200;
			maxRangeProbab = 0.04;
		};
		class Medium: Close
		{
			burst = 8;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 400;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 300;
			midRangeProbab = 0.58;
			maxRange = 400;
			maxRangeProbab = 0.04;
		};
		class Far: Close
		{
			burst = 7;
			aiRateOfFire = 7;
			aiRateOfFireDistance = 600;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.4;
			maxRange = 600;
			maxRangeProbab = 0.01;
		};
		aiDispersionCoefY = 14.0;
		aiDispersionCoefX = 14.0;
		class Library
		{
			libTextDesc = "$STR_LIB_XM8_SAW";
		};
		descriptionShort = "$STR_DSS_XM8_SAW";
	};
	class m8_holo_sd: m8_base
	{
		scope = 2;
		displayName = "$STR_PMC_DN_XM8_HOLO_SD";
		model = "\Ca\Weapons_PMC\XM8\m8_Sup_HOLO.p3d";
		picture = "\ca\Weapons_PMC\Data\ui\w_xm8_supHOLO_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		magazines[] = {"30Rnd_556x45_G36SD","30Rnd_556x45_StanagSD"};
		handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons_E\SCAR\Data\Anim\SCAR.rtm"};
		class OpticsModes
		{
			class CCO
			{
				opticsID = 1;
				useModelOptics = 0;
				opticsPPEffects[] = {};
				distanceZoomMin = 100;
				distanceZoomMax = 100;
				discreteDistance[] = {100};
				discreteDistanceInitIndex = 0;
				opticsZoomMin = 0.25;
				opticsZoomInit = 0.5;
				opticsZoomMax = 1.1;
				memoryPointCamera = "eye";
				visionMode[] = {};
				opticsFlare = 0;
				opticsDisablePeripherialVision = 0;
				cameraDir = "";
			};
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
		class Single: Single
		{
			begin1[] = {"ca\sounds_E\weapons_E\SCAR\SCAR_SD_single1",2.5118864,1,50};
			soundBegin[] = {"begin1",1};
			minRange = 2;
			minRangeProbab = 0.1;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
		};
		class Burst: Burst
		{
			begin1[] = {"ca\sounds_E\weapons_E\SCAR\SCAR_SD_start1",2.5118864,1,50};
			soundBegin[] = {"begin1",1};
			minRange = 1;
			minRangeProbab = 0.1;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
		};
		class FullAuto: FullAuto
		{
			begin1[] = {"ca\sounds_E\weapons_E\SCAR\SCAR_SD_start1",2.5118864,1,50};
			soundBegin[] = {"begin1",1};
			end1[] = {"ca\sounds_E\weapons_E\SCAR\SCAR_SD_single1",2.5118864,1,50};
			end2[] = {"ca\sounds_E\weapons_E\SCAR\SCAR_SD_single2",2.5118864,1,50};
			soundEnd[] = {"end1",0.5,"end2",0.5};
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
		};
		class Library
		{
			libTextDesc = "$STR_LIB_XM8";
		};
		descriptionShort = "$STR_DSS_XM8";
	};
	class m8_tws_sd: m8_base
	{
		scope = 2;
		displayName = "$STR_PMC_DN_XM8_TWS_SD";
		model = "\Ca\Weapons_PMC\XM8\m8_Sup_TI.p3d";
		picture = "\ca\Weapons_PMC\Data\ui\w_xm8_supTWI_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		magazines[] = {"30Rnd_556x45_G36SD","30Rnd_556x45_StanagSD"};
		modelOptics = "\Ca\weapons_E\LWTS_optic.p3d";
		opticsZoomMin = 0.1606;
		opticsZoomMax = 0.1606;
		opticsZoomInit = 0.1606;
		visionMode[] = {"Ti"};
		thermalMode[] = {0,1};
		weaponInfoType = "RscWeaponZeroing";
		class OpticsModes
		{
			class LTWS
			{
				opticsID = 1;
				useModelOptics = 1;
				opticsZoomMin = 0.1606;
				opticsZoomMax = 0.1606;
				opticsZoomInit = 0.1606;
				distanceZoomMin = 100;
				distanceZoomMax = 100;
				memoryPointCamera = "eye";
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				cameraDir = "";
				opticsPPEffects[] = {};
				visionMode[] = {"Ti"};
				thermalMode[] = {0,1};
				discreteDistance[] = {100,200,300};
				discreteDistanceInitIndex = 0;
			};
		};
		dexterity = 1.64;
		class Single: Single
		{
			begin1[] = {"ca\sounds_E\weapons_E\SCAR\SCAR_SD_single1",2.5118864,1,50};
			soundBegin[] = {"begin1",1};
			minRange = 2;
			minRangeProbab = 0.1;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
		};
		class Burst: Burst
		{
			begin1[] = {"ca\sounds_E\weapons_E\SCAR\SCAR_SD_start1",2.5118864,1,50};
			soundBegin[] = {"begin1",1};
			minRange = 1;
			minRangeProbab = 0.1;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
		};
		class FullAuto: FullAuto
		{
			begin1[] = {"ca\sounds_E\weapons_E\SCAR\SCAR_SD_start1",2.5118864,1,50};
			soundBegin[] = {"begin1",1};
			end1[] = {"ca\sounds_E\weapons_E\SCAR\SCAR_SD_single1",2.5118864,1,50};
			end2[] = {"ca\sounds_E\weapons_E\SCAR\SCAR_SD_single2",2.5118864,1,50};
			soundEnd[] = {"end1",0.5,"end2",0.5};
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
		};
		class Library
		{
			libTextDesc = "$STR_LIB_XM8";
		};
		descriptionShort = "$STR_DSS_XM8";
	};
	class m8_tws: m8_base
	{
		scope = 2;
		displayName = "$STR_PMC_DN_XM8_TWS";
		model = "\Ca\Weapons_PMC\XM8\m8_TI.p3d";
		picture = "\ca\Weapons_PMC\Data\ui\w_xm8_TWI_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		modelOptics = "\Ca\weapons_E\LWTS_optic.p3d";
		opticsZoomMin = 0.1606;
		opticsZoomMax = 0.1606;
		opticsZoomInit = 0.1606;
		visionMode[] = {"Ti"};
		thermalMode[] = {0,1};
		weaponInfoType = "RscWeaponZeroing";
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
				discreteDistance[] = {100,200,300,400,500,600,700,800};
				discreteDistanceInitIndex = 2;
			};
		};
		dexterity = 1.64;
		irDistance = 100;
		class Library
		{
			libTextDesc = "$STR_LIB_XM8";
		};
		descriptionShort = "$STR_DSS_XM8";
	};
};
//};

////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:07:03 2014 : Source 'file' date Fri Oct 31 06:07:03 2014
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

//Class weapons_baf : config.bin{
class CfgPatches
{
	class CAWeapons_BAF
	{
		units[] = {};
		weapons[] = {"BAF_AS50_scoped","BAF_AS50_TWS","BAF_LRR_scoped","BAF_NLAW_Launcher","BAF_L17_40mm","BAF_L85A2_RIS_Holo","BAF_L85A2_UGL_Holo","BAF_L85A2_RIS_SUSAT","BAF_L85A2_UGL_SUSAT","BAF_L85A2_RIS_CWS","BAF_L86A2_ACOG","BAF_L110A1_Aim","BAF_L2A1_ACOG_tripod","BAF_L2A1_ACOG_minitripod","BAF_GPMG_Minitripod_D","BAF_GMG_ACOG_minitripod","BAF_ied_v1","BAF_ied_v2","BAF_ied_v3","BAF_ied_v4"};
		requiredVersion = 1.54;
		requiredAddons[] = {"CA_E","CAWeapons","CA_BAF","CAWeapons_E_AmmoBoxes"};
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class Mode_Burst;
class cfgWeapons
{
	class MGunCore;
	class MGun: MGunCore
	{
		type = 65536;
		cursor = "MGCursor";
		cursoraim = "\ca\Weapons\Data\clear_empty";
		cursorSize = 1;
		displayName = "";
		nameSound = "mgun";
		reloadTime = 0.25;
		autoFire = 1;
		reloadAction = "ManActReloadMagazine";
		sound[] = {"\ca\sounds\Weapons\machineguns\m240_single1",1.0,1,1400};
		soundContinuous = 0;
		reloadSound[] = {"",1,1};
		initSpeed = 900;
		flash = "gunfire";
		flashSize = 0.5;
		optics = 0;
	};
	class M2;
	class BAF_L2A1: M2
	{
		displayName = "$STR_BAF_BAF_L2A10";
		soundContinuous = 0;
		begin1[] = {"ca\sounds_baf\weapons\L2A1",1.7782794,1,1200};
		soundBegin[] = {"begin1",1};
		reloadMagazineSound[] = {"Ca\sounds_baf\weapons\L110_reload",0.056234132,1,25};
		sound[] = {"ca\sounds_baf\weapons\L2A1",1.7782794,1,1200};
		class manual: MGun
		{
			displayName = "";
			reloadTime = 0.15;
		};
	};
	class M240_veh;
	class BAF_M240_veh: M240_veh
	{
		magazines[] = {"100Rnd_762x51_M240","200Rnd_762x51_M240","1200Rnd_762x51_M240"};
	};
	class BAF_L7A2: MGun
	{
		scope = 1;
		magazines[] = {"200Rnd_762x54_GPMG"};
		displayName = "$STR_BAF_BAF_L7A20";
		begin1[] = {"ca\sounds_baf\weapons\L7A2",1.7782794,1,1000};
		soundBegin[] = {"begin1",1};
		reloadTime = 0.08;
		magazineReloadTime = 6;
		dispersion = 0.0035;
		minRange = 8;
		minRangeProbab = 0.6;
		midRange = 500;
		midRangeProbab = 0.7;
		maxRange = 1500;
		maxRangeProbab = 0.1;
		aiRateOfFire = 0.1;
		aiRateOfFireDistance = 5;
		ballisticsComputer = 2;
	};
	class BAF_L94A1: MGun
	{
		scope = 1;
		magazines[] = {"2000Rnd_762x51_L94A1"};
		initSpeed = 862;
		displayName = "$STR_BAF_BAF_L94A10";
		reloadTime = 0.12;
		magazineReloadTime = 6;
		begin1[] = {"ca\sounds_baf\weapons\L94A1",1.7782794,1,1300};
		soundBegin[] = {"begin1",1};
		soundContinuous = 0;
		dispersion = 0.002;
		minRange = 8;
		minRangeProbab = 0.6;
		midRange = 500;
		midRangeProbab = 0.7;
		maxRange = 1500;
		maxRangeProbab = 0.1;
		aiRateOfFire = 0.1;
		aiRateOfFireDistance = 5;
		ballisticsComputer = 2;
	};
	class BAF_static_GMG: MGun
	{
		scope = 1;
		displayName = "$STR_BAF_BAF_STATIC_GMG0";
		begin1[] = {"ca\sounds_baf\weapons\GMG",1.7782794,1,1300};
		soundBegin[] = {"begin1",1};
		magazines[] = {"32Rnd_40mm_GMG"};
		reloadTime = 0.16;
		magazineReloadTime = 6;
		dispersion = 0.006;
		minRange = 8;
		minRangeProbab = 0.6;
		midRange = 500;
		midRangeProbab = 0.7;
		maxRange = 1500;
		maxRangeProbab = 0.1;
		autoReload = 1;
		canLock = 0;
		aiRateOfFire = 2.0;
		aiRateOfFireDistance = 500;
		ballisticsComputer = 2;
	};
	class BAF_GMG: BAF_static_GMG
	{
		autoFire = 1;
		cursor = "Vehicle_Grenade_W";
		cursorAim = "\ca\Weapons\Data\clear_empty";
		cursorSize = 1;
		magazines[] = {"48Rnd_40mm_MK19"};
	};
	class CannonCore;
	class CTWS: CannonCore
	{
		scope = 1;
		displayName = "$STR_BAF_CTWS0";
		cursor = "Cannon";
		cursorAim = "\ca\Weapons\Data\clear_empty";
		cursorSize = 1;
		nameSound = "cannon";
		soundContinuous = 0;
		magazines[] = {"200Rnd_40mmHE_FV510","200Rnd_40mmSABOT_FV510"};
		minRange = 5;
		minRangeProbab = 0.7;
		midRange = 1200;
		midRangeProbab = 0.7;
		maxRange = 2500;
		maxRangeProbab = 0.1;
		reloadTime = 0.3;
		aiRateOfFire = 0.6;
		aiRateOfFireDistance = 500;
		magazineReloadTime = 2;
		autoReload = 1;
		ballisticsComputer = 1;
		canLock = 2;
		autoFire = 1;
		modes[] = {"player"};
		class player: Mode_FullAuto
		{
			begin1[] = {"\ca\Sounds_baf\weapons\40mm_1",17.782795,1,1500};
			soundBegin[] = {"begin1",1};
			soundContinuous = 0;
			reloadTime = 0.3;
			magazineReloadTime = 2;
			autoReload = 1;
			ballisticsComputer = 1;
			canLock = 2;
			autoFire = 1;
		};
		class close: player
		{
			showToPlayer = 0;
			soundBurst = 1;
			burst = 15;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.58;
			maxRange = 1000;
			maxRangeProbab = 0.04;
			aiDispersionCoefX = 6;
			aiDispersionCoefY = 6;
			ffMagnitude = 0.5;
			ffFrequency = 11;
			ffCount = 6;
		};
		class short: close
		{
			showToPlayer = 0;
			burst = 10;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 300;
			minRange = 500;
			minRangeProbab = 0.05;
			midRange = 1000;
			midRangeProbab = 0.58;
			maxRange = 1500;
			maxRangeProbab = 0.04;
		};
		class medium: short
		{
			showToPlayer = 0;
			soundBurst = 0;
			burst = 7;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			minRange = 1000;
			minRangeProbab = 0.05;
			midRange = 1500;
			midRangeProbab = 0.58;
			maxRange = 2000;
			maxRangeProbab = 0.04;
		};
		class far: medium
		{
			burst = 4;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 1500;
			minRangeProbab = 0.05;
			midRange = 2500;
			midRangeProbab = 0.4;
			maxRange = 3000;
			maxRangeProbab = 0.01;
		};
	};
	class RocketPods;
	class CRV7_PG: RocketPods
	{
		displayName = "$STR_BAF_CRV70";
		magazines[] = {"12Rnd_CRV7","38Rnd_CRV7","6Rnd_CRV7_HEPD","6Rnd_CRV7_FAT"};
		modes[] = {"Far_AI","Burst"};
		canLock = 1;
		WeaponLockSystem = 4;
		cmImmunity = 0.8;
		cursorAim = "\ca\Weapons\Data\clear_empty";
		cursor = "Rocket";
		cursorSize = 1;
		class Far_AI: RocketPods
		{
			minRange = 50;
			minRangeProbab = 0.041;
			midRange = 600;
			midRangeProbab = 0.21;
			maxRange = 2500;
			maxRangeProbab = 0.11;
			displayName = "$STR_BAF_CRV7_PG_FAR_AI0";
			sound[] = {"\ca\Sounds\weapons\cannon\RocketLauncher_Shot21",3.1622777,1,1100};
			soundFly[] = {"\ca\Sounds\weapons\cannon\rocket_fly1",5.623413,1.2,700};
			burst = 1;
			reloadTime = 0.9;
			autoFire = 0;
			showToPlayer = 0;
		};
		class Burst: RocketPods
		{
			minRange = 1;
			minRangeProbab = 0.001;
			midRange = 2;
			midRangeProbab = 0.001;
			maxRange = 3;
			maxRangeProbab = 0.001;
			displayName = "$STR_BAF_CRV7_PG_BURST0";
			burst = 1;
			reloadTime = 0.9;
			soundContinuous = 1;
			autoFire = 1;
			sound[] = {"\ca\Sounds\weapons\cannon\RocketLauncher_Shot21",3.1622777,1,1100};
			soundFly[] = {"\ca\Sounds\weapons\cannon\rocket_fly1",5.623413,1.2,700};
		};
	};
	class CRV7_HEPD: CRV7_PG
	{
		magazines[] = {"6Rnd_CRV7_HEPD"};
		class Burst: RocketPods
		{
			displayName = "$STR_BAF_CFGMAGAZINES_6RND_CRV7_HEPD0";
		};
	};
	class CRV7_FAT: CRV7_PG
	{
		magazines[] = {"6Rnd_CRV7_FAT"};
		class Burst: RocketPods
		{
			displayName = "$STR_BAF_CFGMAGAZINES_6RND_CRV7_FAT0";
		};
	};
	class M621: MGun
	{
		bullet1[] = {"ca\sounds\weapons\shells\big_shell_metal_01",0.07079458,1,15};
		bullet2[] = {"ca\sounds\weapons\shells\big_shell_metal_03",0.07079458,1,15};
		bullet3[] = {"ca\sounds\weapons\shells\big_shell_metal_02",0.07079458,1,15};
		bullet4[] = {"ca\sounds\weapons\shells\big_shell_metal_01",0.07079458,1,15};
		bullet5[] = {"ca\sounds\weapons\shells\big_shell_dirt_01",0.07079458,1,15};
		bullet6[] = {"ca\sounds\weapons\shells\big_shell_dirt_02",0.07079458,1,15};
		bullet7[] = {"ca\sounds\weapons\shells\big_shell_dirt_03",0.07079458,1,15};
		bullet8[] = {"ca\sounds\weapons\shells\big_shell_dirt_04",0.07079458,1,15};
		bullet9[] = {"ca\sounds\weapons\shells\big_shell_soft_01",0.07079458,1,15};
		bullet10[] = {"ca\sounds\weapons\shells\big_shell_soft_02",0.07079458,1,15};
		bullet11[] = {"ca\sounds\weapons\shells\big_shell_soft_03",0.07079458,1,15};
		bullet12[] = {"ca\sounds\weapons\shells\big_shell_soft_04",0.07079458,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		scope = 1;
		displayName = "";
		soundContinuous = 0;
		aiDispersionCoefY = 21;
		aiDispersionCoefX = 21;
		magazines[] = {"1200Rnd_20mm_M621"};
		magazineReloadTime = 5;
		canLock = 0;
		cursor = "Air_W_MG";
		cursorAim = "Air_Dot";
		cursorSize = 1;
		modes[] = {"manual","close","short","medium","far"};
		class manual: MGun
		{
			displayName = "$STR_BAF_M621_MANUAL0";
			autoFire = 1;
			begin1[] = {"ca\sounds\Weapons\machineguns\M240_single1",1.7782794,1,1000};
			begin2[] = {"ca\sounds\Weapons\machineguns\M240_single2",1.7782794,1,1000};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			reloadTime = 0.075;
			dispersion = 0.0012;
			showToPlayer = 1;
			burst = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{
			showToPlayer = 0;
			soundBurst = 0;
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 100;
			midRangeProbab = 0.58;
			maxRange = 200;
			maxRangeProbab = 0.04;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 200;
			midRangeProbab = 0.58;
			maxRange = 400;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 4;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.58;
			maxRange = 600;
			maxRangeProbab = 0.04;
		};
		class far: close
		{
			burst = 5;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 500;
			minRangeProbab = 0.05;
			midRange = 600;
			midRangeProbab = 0.4;
			maxRange = 800;
			maxRangeProbab = 0.01;
		};
	};
	class Rifle;
	class BAF_AS50_scoped: Rifle
	{
		scope = 2;
		model = "\ca\weapons_BAF\as50_BAF";
		picture = "\CA\weapons_baf\data\UI\as50_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_sniper_ca.paa";
		magazines[] = {"5Rnd_127x99_AS50","10Rnd_127x99_m107"};
		dexterity = 1.2;
		initSpeed = 936;
		handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons_BAF\data\Anim\AS50.rtm"};
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100,200,300,400,500,600,700,800,1000,1200,1400,1600};
		discreteDistanceInitIndex = 2;
		modelOptics = "\ca\Weapons_baf\LRR_optic";
		visionMode[] = {"Normal"};
		opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
		opticsFlare = 1;
		opticsDisablePeripherialVision = 1;
		opticsZoomMin = 0.0498;
		distanceZoomMin = 400;
		opticsZoomMax = 0.15;
		distanceZoomMax = 120;
		discretefov[] = {0.0755,0.0249};
		discreteInitIndex = 0;
		displayname = "$STR_BAF_CFGWEAPONS_BAF_AS50_SCOPED0";
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			dispersion = 0.00018;
			soundContinuous = 0;
			reloadTime = 0.25;
			recoil = "recoil_single_primary_4outof10";
			recoilProne = "recoil_single_primary_prone_4outof10";
			begin1[] = {"ca\sounds_baf\weapons\AS50",1.7782794,1,1300};
			soundBegin[] = {"begin1",1};
			minRange = 2;
			minRangeProbab = 0.1;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 1500;
			maxRangeProbab = 0.05;
			aiRateOfFire = 5.0;
		};
		class Full: Mode_FullAuto
		{
			dispersion = 0.00018;
			soundContinuous = 0;
			reloadTime = 0.25;
			recoil = "recoil_auto_primary_3outof10";
			recoilProne = "recoil_auto_primary_prone_3outof10";
			begin1[] = {"ca\sounds_baf\weapons\AS50",1.7782794,1,1300};
			soundBegin[] = {"begin1",1};
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 60;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1.0;
		};
		class Library
		{
			libTextDesc = "$STR_BAF_CFGWEAPONS_BAF_AS50_SCOPED_LIBRARY0";
		};
		descriptionShort = "$STR_BAF_CFGWEAPONS_BAF_AS50_SCOPED0_0";
	};
	class BAF_AS50_TWS: BAF_AS50_scoped
	{
		model = "\ca\weapons_BAF\as50_TWS_BAF";
		picture = "\CA\weapons_baf\data\UI\as50_tws_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_sniper_ca.paa";
		modelOptics = "\Ca\weapons_E\HWTS_optic.p3d";
		visionMode[] = {"Ti"};
		thermalMode[] = {0,1};
		displayname = "$STR_BAF_CFGWEAPONS_BAF_AS50_TWS0";
		class Library
		{
			libTextDesc = "$STR_BAF_CFGWEAPONS_BAF_AS50_TWS_LIBRARY0";
		};
	};
	class BAF_LRR_scoped: Rifle
	{
		scope = 2;
		model = "\ca\weapons_BAF\LRR_scoped_BAF";
		picture = "\CA\weapons_baf\data\UI\LRR_scoped_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_sniper_ca.paa";
		magazines[] = {"5Rnd_86x70_L115A1"};
		dexterity = 1.7;
		initSpeed = 936;
		handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons\data\Anim\M24.rtm"};
		optics = 1;
		modelOptics = "\ca\Weapons_baf\LRR_optic";
		visionMode[] = {"Normal"};
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100,200,300,400,500,600,700,800,1000,1200,1400};
		discreteDistanceInitIndex = 2;
		opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
		opticsFlare = 1;
		opticsDisablePeripherialVision = 1;
		opticsZoomMin = 0.0498;
		distanceZoomMin = 400;
		opticsZoomMax = 0.15;
		distanceZoomMax = 120;
		discretefov[] = {0.0755,0.0249};
		discreteInitIndex = 0;
		displayname = "$STR_BAF_CFGWEAPONS_BAF_LRR_SCOPED0";
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			dispersion = 0.00018;
			soundContinuous = 0;
			reloadTime = 2;
			backgroundReload = 1;
			recoil = "recoil_single_primary_2outof10";
			recoilProne = "recoil_single_primary_prone_2outof10";
			begin1[] = {"ca\sounds_baf\weapons\AS50_rel",2.818383,1,1300};
			soundBegin[] = {"begin1",1};
			minRange = 2;
			minRangeProbab = 0.1;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 1500;
			maxRangeProbab = 0.05;
		};
		class Library
		{
			libTextDesc = "$STR_BAF_CFGWEAPONS_BAF_LRR_SCOPED_LIBRARY0";
		};
		descriptionShort = "$STR_BAF_CFGWEAPONS_BAF_LRR_SCOPED0_0";
	};
	class BAF_LRR_scoped_W: BAF_LRR_scoped
	{
		model = "\ca\weapons_BAF\LRR_scoped_w_BAF";
		displayname = "$STR_BAF_CFGWEAPONS_BAF_LRR_SCOPED_W0";
	};
	class Launcher;
	class BAF_NLAW_Launcher: Launcher
	{
		htMin = 1;
		htMax = 460;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		scope = 2;
		displayName = "$STR_BAF_CFGWEAPONS_BAF_NLAW_LAUNCHER0";
		model = "\ca\weapons_BAF\nlaw_BAF";
		picture = "\CA\weapons_baf\data\UI\nlaw_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_at_ca.paa";
		modelOptics = "\ca\Weapons_baf\nlaw_optic";
		opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
		cursorAim = "\ca\Weapons\Data\clear_empty";
		cursor = "Rocket";
		cursorSize = 1;
		handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons\Data\Anim\Javelin.rtm"};
		cameraDir = "look";
		opticsZoomMin = 0.0623;
		opticsZoomMax = 0.0623;
		opticsZoomInit = 0.0623;
		magazines[] = {"NLAW"};
		sound[] = {"Ca\sounds_baf\weapons\n_law",10.0,1,1400};
		drySound[] = {"Ca\sounds_baf\weapons\dry",0.0001,1,10};
		reloadMagazineSound[] = {"Ca\sounds_baf\weapons\flare_reload",0.00031622776,1,20};
		soundFly[] = {"Ca\sounds_baf\weapons\rocket_fly1",100.0,1.5,700};
		value = 20;
		canLock = 2;
		recoil = "launcherBase";
		aiRateOfFire = 5.0;
		aiRateOfFireDistance = 2500;
		minRange = 10;
		minRangeProbab = 0.3;
		midRange = 1000;
		midRangeProbab = 0.58;
		maxRange = 2000;
		maxRangeProbab = 0.04;
		class Library
		{
			libTextDesc = "$STR_BAF_CFGWEAPONS_BAF_NLAW_LAUNCHER_LIBRARY0";
		};
		descriptionShort = "$STR_BAF_CFGWEAPONS_BAF_NLAW_LAUNCHER0_0";
	};
	class GrenadeLauncher;
	class BAF_L17_40mm: GrenadeLauncher
	{
		displayName = "$STR_BAF_CFGWEAPONS_BAF_L17_40MM0";
		magazines[] = {"1Rnd_HE_M203","FlareWhite_M203","FlareGreen_M203","FlareRed_M203","FlareYellow_M203","1Rnd_Smoke_M203","1Rnd_SmokeRed_M203","1Rnd_SmokeGreen_M203","1Rnd_SmokeYellow_M203"};
		sound[] = {"\ca\Weapons\Data\Sound\grenadelauncher_1",0.1,1,400};
		reloadMagazineSound[] = {"\ca\Weapons\Data\Sound\flare_reload",0.00031622776,1,20};
		drySound[] = {"ca\sounds_e\weapons_e\grenade_launcher\gr_launcher_dry",1.1220185,1,40};
		magazineReloadTime = 0;
		reloadTime = 0.1;
		optics = 1;
		modelOptics = "\ca\Weapons_baf\L85A2_UGL_OPTIC_BAF";
		cameraDir = "UGL look";
		memoryPointCamera = "UGL eye";
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.1;
		opticsZoomInit = 0.5;
	};
	class Throw: GrenadeLauncher
	{
		class ThrowMuzzle;
		class HandGrenadeMuzzle: ThrowMuzzle
		{
			magazines[] = {"HandGrenade","HandGrenade_West","HandGrenade_East","BAF_L109A1_HE"};
		};
	};
	class L85A2_base_BAF: Rifle
	{
		scope = 0;
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_StanagSD","30Rnd_556x45_G36"};
		irLaserPos = "laser pos";
		irLaserEnd = "laser dir";
		irDistance = 5;
		handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons_E\SCAR\Data\Anim\SCAR.rtm"};
		descriptionShort = "$STR_BAF_CFGWEAPONS_L85A2_BASE_BAF0";
		optics = 1;
		dexterity = 1.64;
		modes[] = {"Single","FullAuto"};
		class Single: Mode_SemiAuto
		{
			begin1[] = {"Ca\sounds_baf\weapons\l85a2_single3a",1.7782794,1,1000};
			begin2[] = {"Ca\sounds_baf\weapons\l85a2_single3b",1.7782794,1,1000};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			reloadTime = 0.085;
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
			dispersion = 0.001;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 450;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2.0;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[] = {"Ca\sounds_baf\weapons\l85a2_single3a",1.7782794,1,1000};
			begin2[] = {"Ca\sounds_baf\weapons\l85a2_single3b",1.7782794,1,1000};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			reloadTime = 0.09;
			recoil = "recoil_auto_primary_3outof10";
			recoilProne = "recoil_auto_primary_prone_3outof10";
			dispersion = 0.00175;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 25;
			midRangeProbab = 0.7;
			maxRange = 70;
			maxRangeProbab = 0.05;
			aiRateOfFire = 0.2;
			aiRateOfFireDistance = 50;
		};
		class BAF_L17_40mm: BAF_L17_40mm{};
		drySound[] = {"Ca\sounds_baf\weapons\dry",0.00031622776,1,10};
		reloadMagazineSound[] = {"Ca\sounds_baf\weapons\l85a2_reload1",0.056234132,1.2,20};
	};
	class BAF_L85A2_RIS_Holo: L85A2_base_BAF
	{
		scope = 2;
		model = "\ca\weapons_BAF\L85A2_RIS_Holo_BAF";
		displayName = "$STR_BAF_CFGWEAPONS_BAF_L85A2_RIS_HOLO0";
		picture = "\CA\weapons_baf\data\UI\L85A2_RIS_Holo_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		class Library
		{
			libTextDesc = "$STR_BAF_CFGWEAPONS_BAF_L85A2_RIS_HOLO_LIBRARY0";
		};
	};
	class BAF_L85A2_UGL_Holo: BAF_L85A2_RIS_Holo
	{
		displayName = "$STR_BAF_CFGWEAPONS_BAF_L85A2_UGL_HOLO0";
		model = "\ca\weapons_BAF\L85A2_UGL_Holo_BAF";
		muzzles[] = {"this","BAF_L17_40mm"};
		picture = "\CA\weapons_baf\data\UI\L85A2_UGL_Holo_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton","\ca\weapons_baf\data\Anim\L85A2_UGL.rtm"};
		dexterity = 1.46;
		class Library
		{
			libTextDesc = "$STR_BAF_CFGWEAPONS_BAF_L85A2_UGL_HOLO_LIBRARY0";
		};
		descriptionShort = "$STR_BAF_CFGWEAPONS_BAF_L85A2_UGL_HOLO0_0";
	};
	class BAF_L85A2_RIS_SUSAT: L85A2_base_BAF
	{
		scope = 2;
		model = "\ca\weapons_BAF\L85A2_RIS_SUSAT_BAF";
		picture = "\CA\weapons_baf\data\UI\L85A2_RIS_SUSAT_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		modelOptics = "\ca\Weapons_baf\susat_optic_illum";
		opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
		opticsZoomMax = 0.0732;
		distanceZoomMax = 300;
		opticsZoomMin = 0.0732;
		distanceZoomMin = 300;
		opticsZoomInit = 0.0732;
		memoryPointCamera = "eye";
		visionMode[] = {"Normal"};
		opticsFlare = 1;
		opticsDisablePeripherialVision = 1;
		weaponInfoType = "RscWeaponZeroing";
		class OpticsModes
		{
			class SUSAT
			{
				opticsID = 1;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				opticsZoomMax = 0.0732;
				distanceZoomMax = 300;
				opticsZoomMin = 0.0732;
				distanceZoomMin = 300;
				opticsZoomInit = 0.0732;
				memoryPointCamera = "opticView";
				visionMode[] = {"Normal"};
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				cameraDir = "";
				discreteDistance[] = {100,200,300,400,500,600,700,800};
				discreteDistanceInitIndex = 2;
			};
			class ironsights: SUSAT
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
				discreteDistance[] = {300};
				discreteDistanceInitIndex = 0;
			};
		};
		displayName = "$STR_BAF_CFGWEAPONS_BAF_L85A2_RIS_SUSAT0";
		class Library
		{
			libTextDesc = "$STR_BAF_CFGWEAPONS_BAF_L85A2_RIS_SUSAT_LIBRARY0";
		};
	};
	class BAF_L85A2_UGL_SUSAT: BAF_L85A2_RIS_SUSAT
	{
		displayName = "$STR_BAF_CFGWEAPONS_BAF_L85A2_UGL_SUSAT0";
		model = "\ca\weapons_BAF\L85A2_UGL_SUSAT_BAF";
		picture = "\CA\weapons_baf\data\UI\L85A2_UGL_SUSAT_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		muzzles[] = {"this","BAF_L17_40mm"};
		handAnim[] = {"OFP2_ManSkeleton","\ca\weapons_baf\data\Anim\L85A2_UGL.rtm"};
		dexterity = 1.46;
		class Library
		{
			libTextDesc = "$STR_BAF_CFGWEAPONS_BAF_L85A2_UGL_SUSAT_LIBRARY0";
		};
		descriptionShort = "$STR_BAF_CFGWEAPONS_BAF_L85A2_UGL_SUSAT0_0";
	};
	class BAF_L85A2_RIS_ACOG: L85A2_base_BAF
	{
		scope = 2;
		model = "\ca\weapons_BAF\L85A2_RIS_ACOG_BAF";
		picture = "\CA\weapons_baf\data\UI\L85A2_RIS_ACOG_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		optics = 1;
		visionMode[] = {"Normal"};
		modelOptics = "\ca\Weapons_baf\ACOG_optic";
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
				opticsZoomMax = 1.5;
				opticsZoomInit = 0.8;
				memoryPointCamera = "eye";
				visionMode[] = {};
			};
		};
		displayName = "$STR_BAF_CFGWEAPONS_BAF_L85A2_RIS_ACOG0";
		class Library
		{
			libTextDesc = "$STR_BAF_CFGWEAPONS_BAF_L85A2_RIS_ACOG_LIBRARY0";
		};
	};
	class BAF_L85A2_UGL_ACOG: BAF_L85A2_RIS_ACOG
	{
		displayName = "$STR_BAF_CFGWEAPONS_BAF_L85A2_UGL_ACOG0";
		model = "\ca\weapons_BAF\L85A2_UGL_ACOG_BAF";
		picture = "\CA\weapons_baf\data\UI\L85A2_UGL_ACOG_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		muzzles[] = {"this","BAF_L17_40mm"};
		handAnim[] = {"OFP2_ManSkeleton","\ca\weapons_baf\data\Anim\L85A2_UGL.rtm"};
		dexterity = 1.46;
		class Library
		{
			libTextDesc = "$STR_BAF_CFGWEAPONS_BAF_L85A2_UGL_ACOG_LIBRARY0";
		};
		descriptionShort = "$STR_BAF_CFGWEAPONS_BAF_L85A2_UGL_ACOG0_0";
	};
	class BAF_L85A2_RIS_CWS: L85A2_base_BAF
	{
		scope = 2;
		model = "\ca\weapons_BAF\L85A2_RIS_CWS_BAF";
		picture = "\CA\weapons_baf\data\UI\L85A2_RIS_CWS_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		modelOptics = "\ca\Weapons_baf\cws_optic";
		weaponInfoType = "RscWeaponZeroing";
		visionMode[] = {"NVG","Ti"};
		thermalMode[] = {6};
		discretefov[] = {0.0755,0.0249};
		discreteInitIndex = 0;
		discreteDistance[] = {100,200,300,400,500,600,700,800};
		discreteDistanceInitIndex = 2;
		displayName = "$STR_BAF_CFGWEAPONS_BAF_L85A2_RIS_CWS0";
		class Library
		{
			libTextDesc = "$STR_BAF_CFGWEAPONS_BAF_L85A2_RIS_CWS_LIBRARY0";
		};
	};
	class BAF_L86A2_ACOG: Rifle
	{
		scope = 2;
		handAnim[] = {"OFP2_ManSkeleton","\ca\weapons_baf\data\Anim\L86A2.rtm"};
		model = "\ca\weapons_BAF\L86A2_ACOG_BAF";
		picture = "\CA\weapons_baf\data\UI\L86A2_ACOG_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_mg_CA.paa";
		optics = 1;
		visionMode[] = {"Normal"};
		modelOptics = "\ca\Weapons_baf\ACOG_optic";
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
		dexterity = 1.64;
		displayName = "$STR_BAF_CFGWEAPONS_BAF_L86A2_ACOG0";
		class Library
		{
			libTextDesc = "$STR_BAF_CFGWEAPONS_BAF_L86A2_ACOG_LIBRARY0";
		};
		descriptionShort = "$STR_BAF_CFGWEAPONS_BAF_L86A2_ACOG0_0";
		drySound[] = {"Ca\sounds\Weapons\rifles\dry",0.00031622776,1,10};
		reloadMagazineSound[] = {"ca\sounds\weapons\rifles\reload-m16-3",0.056234132,1,20};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_StanagSD"};
		modes[] = {"Single","FullAuto"};
		class Single: Mode_SemiAuto
		{
			begin1[] = {"Ca\sounds_baf\weapons\l85a2_single3a",1.7782794,1,1000};
			begin2[] = {"Ca\sounds_baf\weapons\l85a2_single3b",1.7782794,1,1000};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			reloadTime = 0.085;
			recoil = "recoil_single_primary_2outof10";
			recoilProne = "recoil_single_primary_prone_1outof10";
			dispersion = 0.001;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2.0;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[] = {"Ca\sounds_baf\weapons\l85a2_single3a",1.7782794,1,1000};
			begin2[] = {"Ca\sounds_baf\weapons\l85a2_single3b",1.7782794,1,1000};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			reloadTime = 0.09;
			recoil = "recoil_auto_primary_2outof10";
			recoilProne = "recoil_auto_primary_prone_2outof10";
			dispersion = 0.001;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 25;
			midRangeProbab = 0.7;
			maxRange = 70;
			maxRangeProbab = 0.05;
			aiRateOfFire = 0.2;
			aiRateOfFireDistance = 50;
		};
	};
	class BAF_L110A1_Aim: Rifle
	{
		bullet1[] = {"ca\sounds\weapons\shells\big_shell_metal_01",0.07079458,1,15};
		bullet2[] = {"ca\sounds\weapons\shells\big_shell_metal_03",0.07079458,1,15};
		bullet3[] = {"ca\sounds\weapons\shells\big_shell_metal_02",0.07079458,1,15};
		bullet4[] = {"ca\sounds\weapons\shells\big_shell_metal_01",0.07079458,1,15};
		bullet5[] = {"ca\sounds\weapons\shells\big_shell_dirt_01",0.07079458,1,15};
		bullet6[] = {"ca\sounds\weapons\shells\big_shell_dirt_02",0.07079458,1,15};
		bullet7[] = {"ca\sounds\weapons\shells\big_shell_dirt_03",0.07079458,1,15};
		bullet8[] = {"ca\sounds\weapons\shells\big_shell_dirt_04",0.07079458,1,15};
		bullet9[] = {"ca\sounds\weapons\shells\big_shell_soft_01",0.07079458,1,15};
		bullet10[] = {"ca\sounds\weapons\shells\big_shell_soft_02",0.07079458,1,15};
		bullet11[] = {"ca\sounds\weapons\shells\big_shell_soft_03",0.07079458,1,15};
		bullet12[] = {"ca\sounds\weapons\shells\big_shell_soft_04",0.07079458,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		scope = 2;
		model = "\ca\weapons_BAF\L110A1_Aim_BAF";
		picture = "\CA\weapons_baf\data\UI\L110A1_Aim_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_mg_CA.paa";
		displayName = "$STR_BAF_CFGWEAPONS_BAF_L110A1_AIM0";
		class Library
		{
			libTextDesc = "$STR_BAF_CFGWEAPONS_BAF_L110A1_AIM_LIBRARY0";
		};
		descriptionShort = "$STR_BAF_CFGWEAPONS_BAF_L110A1_AIM0_0";
		irLaserPos = "laser pos";
		irLaserEnd = "laser dir";
		irDistance = 5;
		cursor = "MGCursor";
		cursoraim = "\ca\Weapons\Data\clear_empty";
		modes[] = {"manual","close","short","medium","far"};
		class manual: Mode_FullAuto
		{
			recoil = "recoil_auto_machinegun_8outof10";
			recoilProne = "recoil_auto_machinegun_prone_5outof10";
			dispersion = 0.0008;
			begin1[] = {"Ca\sounds_baf\weapons\l110_single1a_vetsi_raze",1.7782794,1,1000};
			begin2[] = {"Ca\sounds_baf\weapons\l110_single1b_vetsi_raze",1.7782794,1,1000};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			soundContinuous = 0;
			soundBurst = 0;
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 5;
			midRangeProbab = 0.58;
			maxRange = 10;
			maxRangeProbab = 0.04;
			showToPlayer = 1;
			reloadTime = 0.066;
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
		dexterity = 0.51;
		type = "1	 + 	4";
		reloadMagazineSound[] = {"Ca\sounds_baf\weapons\L110_reload",0.056234132,1,25};
		magazines[] = {"200Rnd_556x45_L110A1","100Rnd_556x45_M249","30Rnd_556x45_Stanag","30Rnd_556x45_StanagSD","200Rnd_556x45_M249","30Rnd_556x45_G36"};
	};
	class m240;
	class BAF_L7A2_GPMG: m240
	{
		scope = 2;
		model = "\ca\weapons_BAF\GPMG_BAF";
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100,200,300,400,500,600,800,1000,1200,1400};
		discreteDistanceInitIndex = 2;
		displayName = "$STR_BAF_CFGWEAPONS_BAF_L7A2_GPMG0";
		class Library
		{
			libTextDesc = "$STR_BAF_CFGWEAPONS_BAF_L7A2_GPMG_LIBRARY0";
		};
		descriptionShort = "$STR_BAF_CFGWEAPONS_BAF_L7A2_GPMG0_0";
	};
	class Default;
	class Put: Default
	{
		muzzles[] = {"TimeBombMuzzle","PipeBombMuzzle","MineMuzzle","MineEMuzzle","BAF_ied_v1_muzzle","BAF_ied_v2_muzzle","BAF_ied_v3_muzzle","BAF_ied_v4_muzzle"};
		class PutMuzzle;
		class BAF_ied_v1_muzzle: PutMuzzle
		{
			displayName = "$STR_BAF_CFGWEAPONS_PUT_BAF_IED_V1_MUZZLE0";
			magazines[] = {"BAF_ied_v1"};
		};
		class BAF_ied_v2_muzzle: BAF_ied_v1_muzzle
		{
			magazines[] = {"BAF_ied_v2"};
		};
		class BAF_ied_v3_muzzle: BAF_ied_v1_muzzle
		{
			magazines[] = {"BAF_ied_v3"};
		};
		class BAF_ied_v4_muzzle: BAF_ied_v1_muzzle
		{
			magazines[] = {"BAF_ied_v4"};
		};
	};
	class BAF_ied_v1: Put
	{
		scope = 0;
		enableAttack = 1;
		ammo = "BAF_ied_v1";
		displayName = "$STR_BAF_CFGWEAPONS_BAF_IED_V10";
		nameSound = "satchelcharge";
		count = 1;
		initSpeed = 0;
		maxLeadSpeed = 0;
		showEmpty = 0;
		useAction = 1;
		useActionTitle = "Arm IED";
		sound[] = {"\ca\Weapons\Data\Sound\gravel_L",0.00031622776,1,10};
		magazines[] = {"this"};
		class Library
		{
			libTextDesc = "$STR_BAF_CFGWEAPONS_BAF_IED_V1_LIBRARY0";
		};
		descriptionShort = "$STR_BAF_CFGWEAPONS_BAF_IED_V10_0";
	};
	class BAF_ied_v2: BAF_ied_v1
	{
		ammo = "BAF_ied_v2";
		displayName = "$STR_BAF_CFGWEAPONS_BAF_IED_V20_0";
	};
	class BAF_ied_v3: BAF_ied_v1
	{
		ammo = "BAF_ied_v3";
		displayName = "$STR_BAF_CFGWEAPONS_BAF_IED_V10_0";
	};
	class BAF_ied_v4: BAF_ied_v1
	{
		ammo = "BAF_ied_v4";
		displayName = "$STR_BAF_CFGWEAPONS_BAF_IED_V20_0";
	};
};
class CfgDestructPos
{
	scope = 1;
	class DelayedDestruction;
	class DelayedDestructionAmmo: DelayedDestruction
	{
		timeBeforeHiding = "21";
		hideDuration = "10";
	};
};
class WeaponCloudsMGun;
class CfgVehicles
{
	class All;
	class Strategic;
	class Land;
	class LandVehicle: Land
	{
		class ViewPilot;
		class NewTurret;
	};
	class StaticWeapon: LandVehicle
	{
		vehicleClass = "Static";
		driverOpticsModel = "\ca\weapons\optika_empty";
		selectionClan = "clan";
		selectionDashboard = "podsvit pristroju";
		selectionShowDamage = "poskozeni";
		selectionBackLights = "light_back";
		bounding = "usti hlavne";
		alphaTracks = 0.7;
		textureTrackWheel = 0;
		selectionLeftOffset = "";
		selectionRightOffset = "";
		memoryPointTrack1L = "";
		memoryPointTrack1R = "";
		memoryPointTrack2L = "";
		memoryPointTrack2R = "";
		tracksSpeed = 1;
		unitInfoType = "RscUnitInfoSoldier";
		selectionFireAnim = "zasleh";
		fireDustEffect = "FDustEffects";
		class DestructionEffects{};
		memoryPointMissile[] = {"spice rakety","usti hlavne"};
		memoryPointMissileDir[] = {"konec rakety","konec hlavne"};
		memoryPointCargoLight = "cargo light";
		gunnerCanSee = "2+8+4";
		gunnerHasFlares = 0;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				memoryPointsGetInGunner = "pos_gunner";
				memoryPointsGetInGunnerDir = "pos_gunner_dir";
				memoryPointGun = "usti hlavne";
				outGunnerMayFire = 1;
				optics = 1;
				minTurn = -180;
				maxTurn = 180;
				initTurn = 0;
				minElev = -7;
				maxElev = 70;
				initElev = 0;
				castGunnerShadow = 1;
				ejectDeadGunner = 1;
				gunnerGetInAction = "";
				gunnerGetOutAction = "";
				gunnerForceOptics = 0;
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
			};
		};
		damperSize = 1.4;
		damperForce = 0.8;
		gearBox[] = {-1,0,1};
		soundEnviron[] = {"",1.0,0.7};
		soundEngine[] = {"",10.0,1};
		soundCrash[] = {"",0.56234133,1};
		soundGear[] = {"",0.00031622776,1};
		soundDammage[] = {"",0.01,1};
		getInAction = "";
		getOutAction = "";
		cargoGetInAction[] = {""};
		cargoGetOutAction[] = {""};
		class Wounds
		{
			tex[] = {};
			mat[] = {};
		};
		mapSize = 5;
		getInRadius = 3.5;
		fuelCapacity = 0;
		irScanRangeMin = 500;
		irScanRangeMax = 4000;
		irScanToEyeFactor = 1;
		armor = 20;
		armorStructural = 2.0;
		class HitPoints
		{
			class HitEngine
			{
				armor = 0.8;
				material = -1;
				name = "motor";
				passThrough = 1;
			};
			class HitHull
			{
				armor = 1;
				material = -1;
				name = "telo";
				passThrough = 1;
			};
			class HitTurret
			{
				armor = 0.8;
				material = -1;
				name = "vez";
				passThrough = 1;
			};
			class HitGun
			{
				armor = 0.6;
				material = -1;
				name = "zbran";
				passThrough = 1;
			};
			class HitLTrack
			{
				armor = 0.6;
				material = -1;
				name = "pas_L";
				passThrough = 1;
			};
			class HitRTrack
			{
				armor = 0.6;
				material = -1;
				name = "pas_P";
				passThrough = 1;
			};
			class HitBody
			{
				armor = 1;
				material = -1;
				name = "NEzbytek";
				visual = "zbytek";
				passThrough = 1;
			};
		};
		extCameraPosition[] = {0,1.5,-9};
		class ViewPilot: ViewPilot
		{
			initAngleX = 7;
			minAngleX = -15;
			maxAngleX = 25;
			initAngleY = 0;
			minAngleY = -90;
			maxAngleY = 90;
		};
		cost = 10000;
		steerAheadSimul = 0.4;
		steerAheadPlan = 0.6;
		predictTurnSimul = 1.2;
		predictTurnPlan = 1.8;
		ejectDeadDriver = 1;
		ejectDeadCargo = 1;
		hasDriver = 0;
		nightVision = 0;
		driverAction = "ManActCargo";
		driverInAction = "ManActCargo";
		memoryPointsGetInCargo = "pos_cargo";
		memoryPointsGetInCargoDir = "pos_cargo_dir";
		simulation = "tank";
		occludeSoundsWhenIn = 1.0;
		obstructSoundsWhenIn = 1.0;
		formationX = 10;
		formationZ = 10;
		precision = 1;
		brakeDistance = 0;
		maxSpeed = 0;
		canFloat = 0;
		weapons[] = {"FakeWeapon"};
		magazines[] = {"FakeWeapon"};
		type = 1;
		threat[] = {0.7,1,0.3};
		camouflage = 1;
		audible = 1;
		hideProxyInCombat = 0;
		driverOpticsColor[] = {0,0,0,1};
		class CargoLight
		{
			color[] = {0,0,0,0};
			ambient[] = {0.6,0,0.15,1};
			brightness = 0.007;
		};
		transportMaxMagazines = 0;
		transportMaxWeapons = 0;
		class Reflectors{};
		secondaryExplosion = 0;
	};
	class StaticMGWeapon: StaticWeapon
	{
		accuracy = 0.12;
		cost = 10000;
		threat[] = {0.7,0,0.3};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
				optics = 1;
			};
		};
	};
	class BAF_L2A1_ACOG_base: StaticMGWeapon
	{
		side = 1;
		faction = "BIS_BAF";
		crew = "BAF_Soldier_MTP";
		typicalCargo[] = {"BAF_Soldier_MTP","BAF_Soldier_DDPM"};
		model = "\ca\weapons_BAF\L2A1_ACOG_tripod_BAF";
		picture = "\CA\weapons_baf\data\UI\l2a1_acog_tripod_ca.paa";
		UiPicture = "\CA\weapons_baf\data\UI\l2a1_acog_tripod_ca.paa";
		icon = "\Ca\weapons_baf\Data\UI\icon_L2A1_ACOG_tripod_ca.paa";
		mapSize = 3;
		begin1[] = {"ca\sounds_baf\weapons\L2A1",3.1622777,1,1200};
		soundBegin[] = {"begin1",1};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				optics = 1;
				gunnerOpticsModel = "ca\Weapons_baf\ACOG_optic";
				minElev = -20;
				weapons[] = {"BAF_L2A1"};
				magazines[] = {"100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2"};
				gunnerAction = "M2_Gunner";
				displayName = "";
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.117;
					minFov = 0.117;
					maxFov = 0.117;
				};
			};
		};
		class AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "BAF_L2A1";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "BAF_L2A1";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "BAF_L2A1";
			};
		};
		soundGetOut[] = {"Ca\sounds\Weapons\machineguns\m2gun_inout",0.001,1,5};
		soundGetIn[] = {"Ca\sounds\Weapons\machineguns\m2gun_inout",0.00031622776,1,5};
		armorStructural = 10.0;
	};
	class BAF_L2A1_Tripod_D: BAF_L2A1_ACOG_base
	{
		displayName = "$STR_BAF_BAF_L2A1_TRIPOD_D0";
		class Library
		{
			libTextDesc = "$STR_BAF_BAF_L2A1_TRIPOD_D_LIBRARY0";
		};
		descriptionShort = "$STR_BAF_BAF_L2A1_TRIPOD_D0_0";
		scope = 2;
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"BAF_L2A1_ACOG_tripod_bag","Tripod_Bag"};
			displayName = "";
		};
	};
	class BAF_L2A1_Tripod_W: BAF_L2A1_Tripod_D
	{
		vehicleClass = "StaticW";
		crew = "BAF_Soldier_W";
	};
	class BAF_L2A1_Minitripod_D: BAF_L2A1_ACOG_base
	{
		displayName = "$STR_BAF_BAF_L2A1_MINITRIPOD_D0";
		class Library
		{
			libTextDesc = "$STR_BAF_BAF_L2A1_MINITRIPOD_D_LIBRARY0";
		};
		descriptionShort = "$STR_BAF_BAF_L2A1_MINITRIPOD_D0_0";
		scope = 2;
		model = "\ca\weapons_BAF\L2A1_ACOG_minitripod_BAF";
		icon = "\Ca\weapons_baf\Data\UI\icon_L2A1_ACOG_minitripod_ca.paa";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerAction = "LowTripod_Gunner";
			};
		};
		minTurn = -60;
		maxTurn = 60;
		initTurn = 0;
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"BAF_L2A1_ACOG_minitripod_bag","Tripod_Bag"};
			displayName = "";
		};
	};
	class BAF_L2A1_Minitripod_W: BAF_L2A1_Minitripod_D
	{
		vehicleClass = "StaticW";
		crew = "BAF_Soldier_W";
	};
	class BAF_GPMG_Minitripod_D: BAF_L2A1_ACOG_base
	{
		displayName = "$STR_BAF_BAF_GPMG_MINITRIPOD_D0";
		class Library
		{
			libTextDesc = "$STR_BAF_BAF_GPMG_MINITRIPOD_D_LIBRARY0";
		};
		descriptionShort = "$STR_BAF_BAF_GPMG_MINITRIPOD_D0_0";
		picture = "\CA\weapons_baf\data\UI\gpmg_c97_minitripod_ca.paa";
		UiPicture = "\CA\weapons_baf\data\UI\gpmg_c97_minitripod_ca.paa";
		icon = "\Ca\weapons_baf\Data\UI\icon_gpmg_c97_minitripod_ca.paa";
		scope = 2;
		model = "\ca\weapons_BAF\GPMG_C97_minitripod_BAF";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"BAF_L7A2"};
				magazines[] = {"200Rnd_762x54_GPMG","200Rnd_762x54_GPMG","200Rnd_762x54_GPMG","200Rnd_762x54_GPMG"};
				gunnerAction = "LowKORD_Gunner";
				minElev = -20;
				optics = 1;
				gunnerOpticsModel = "\Ca\weapons_BAF\C97_optics";
			};
		};
		minTurn = -60;
		maxTurn = 60;
		initTurn = 0;
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"BAF_GPMG_Minitripod_D_bag","Tripod_Bag"};
			displayName = "";
		};
		class AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "BAF_L7A2";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "BAF_L7A2";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "BAF_L7A2";
			};
		};
	};
	class BAF_GPMG_Minitripod_W: BAF_GPMG_Minitripod_D
	{
		vehicleClass = "StaticW";
		crew = "BAF_Soldier_W";
	};
	class StaticGrenadeLauncher: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class GMG_TriPod: StaticGrenadeLauncher
	{
		scope = 0;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerOpticsModel = "\ca\Weapons\optika_empty";
				minElev = -10;
				minTurn = -90;
				maxTurn = 90;
				initTurn = 0;
				weapons[] = {"BAF_static_GMG"};
				magazines[] = {"32Rnd_40mm_GMG","32Rnd_40mm_GMG","32Rnd_40mm_GMG","32Rnd_40mm_GMG"};
				gunnerAction = "LowTripod_Gunner";
				class GunFire: WeaponCloudsMGun
				{
					interval = 0.01;
				};
			};
		};
	};
	class BAF_GMG_Tripod_D: GMG_TriPod
	{
		scope = 2;
		side = 1;
		faction = "BIS_BAF";
		crew = "BAF_Soldier_MTP";
		typicalCargo[] = {"BAF_Soldier_MTP","BAF_Soldier_DDPM"};
		displayName = "$STR_BAF_BAF_GMG_TRIPOD_D0";
		class Library
		{
			libTextDesc = "$STR_BAF_BAF_GMG_TRIPOD_D_LIBRARY0";
		};
		descriptionShort = "$STR_BAF_BAF_GMG_TRIPOD_D0_0";
		picture = "\CA\weapons_baf\data\UI\gmg_acog_minitripod_ca.paa";
		UiPicture = "\CA\weapons_baf\data\UI\gmg_acog_minitripod_ca.paa";
		model = "\ca\weapons_BAF\GMG_ACOG_minitripod_BAF";
		icon = "\Ca\weapons_baf\Data\UI\icon_gmg_acog_minitripod_ca.paa";
		visionMode[] = {"Normal"};
		gunnerAction = "LowTripod_Gunner";
		fireDustEffect = "nodust";
		class Turrets: Turrets
		{
			gunnerAction = "LowTripod_Gunner";
			class MainTurret: MainTurret
			{
				minElev = -20;
				weapons[] = {"BAF_static_GMG"};
				magazines[] = {"32Rnd_40mm_GMG","32Rnd_40mm_GMG","32Rnd_40mm_GMG","32Rnd_40mm_GMG"};
				gunnerAction = "LowTripod_Gunner";
				displayName = "";
				optics = 1;
				class OpticsIn
				{
					class ACOG
					{
						useModelOptics = 1;
						gunnerOpticsModel = "\ca\Weapons_baf\nlaw_optic";
						gunnerOpticsEffect[] = {"OpticsCHAbera1","OpticsBlur1"};
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.117;
						minFov = 0.117;
						maxFov = 0.117;
						memoryPointGunnerOptics = "gunnerview";
						visionMode[] = {"Normal"};
						opticsFlare = 1;
						opticsDisablePeripherialVision = 1;
						cameraDir = "";
					};
				};
			};
		};
		class AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "BAF_static_GMG";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "BAF_static_GMG";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "BAF_static_GMG";
			};
		};
		soundGetOut[] = {"Ca\sounds\Weapons\machineguns\m2gun_inout",0.001,1,5};
		soundGetIn[] = {"Ca\sounds\Weapons\machineguns\m2gun_inout",0.00031622776,1,5};
		armorStructural = 10.0;
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"BAF_GMG_ACOG_minitripod_bag","Tripod_Bag"};
			displayName = "";
		};
	};
	class BAF_GMG_Tripod_W: BAF_GMG_Tripod_D
	{
		vehicleClass = "StaticW";
		crew = "BAF_Soldier_W";
	};
	class ReammoBox;
	class ReammoBox_EP1: ReammoBox
	{
		expansion = 1;
	};
	class Bag_Base_BAF: ReammoBox_EP1
	{
		expansion = 2;
		scope = 0;
		class TransportMagazines{};
		class TransportWeapons{};
		isbackpack = 1;
		reversed = 1;
		mapSize = 2;
		vehicleClass = "Backpacks";
		model = "\ca\weapons_baf\Backpack_Small_BAF";
		displayName = "$STR_BAF_BAG_BASE_BAF0";
		picture = "\ca\weapons_baf\data\UI\backpack_BAF_CA.paa";
		icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
		transportMaxWeapons = 1;
		transportMaxMagazines = 13;
	};
	class BAF_AssaultPack_RifleAmmo: Bag_Base_BAF
	{
		scope = 2;
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 4;
			};
			class _xx_1Rnd_HE_M203
			{
				magazine = "1Rnd_HE_M203";
				count = 2;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 1;
			};
			class _xx_SmokeShellRed
			{
				magazine = "SmokeShellRed";
				count = 1;
			};
		};
	};
	class BAF_AssaultPack_ARAmmo: Bag_Base_BAF
	{
		scope = 2;
		class TransportMagazines
		{
			class _xx_200Rnd_556x45_L110A1
			{
				magazine = "200Rnd_556x45_L110A1";
				count = 4;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 1;
			};
			class _xx_SmokeShellRed
			{
				magazine = "SmokeShellRed";
				count = 1;
			};
		};
	};
	class BAF_AssaultPack_MGAmmo: Bag_Base_BAF
	{
		scope = 2;
		class TransportMagazines
		{
			class _xx_100Rnd_762x51_M240
			{
				magazine = "100Rnd_762x51_M240";
				count = 4;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 1;
			};
			class _xx_SmokeShellRed
			{
				magazine = "SmokeShellRed";
				count = 1;
			};
		};
	};
	class BAF_AssaultPack_ATAmmo: Bag_Base_BAF
	{
		scope = 2;
		class TransportMagazines
		{
			class _xx_NLAW
			{
				magazine = "NLAW";
				count = 2;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 1;
			};
			class _xx_SmokeShellRed
			{
				magazine = "SmokeShellRed";
				count = 1;
			};
		};
	};
	class BAF_AssaultPack_HATAmmo: Bag_Base_BAF
	{
		scope = 2;
		class TransportMagazines
		{
			class _xx_Javelin
			{
				magazine = "Javelin";
				count = 2;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 1;
			};
			class _xx_SmokeShellRed
			{
				magazine = "SmokeShellRed";
				count = 1;
			};
		};
	};
	class BAF_AssaultPack_Special: Bag_Base_BAF
	{
		scope = 2;
		class TransportMagazines
		{
			class _xx_BAF_L109A1_HE
			{
				magazine = "BAF_L109A1_HE";
				count = 2;
			};
			class _xx_Mine
			{
				magazine = "Mine";
				count = 2;
			};
			class _xx_Pipebomb
			{
				magazine = "Pipebomb";
				count = 2;
			};
		};
	};
	class BAF_AssaultPack_FAC: Bag_Base_BAF
	{
		scope = 2;
		class TransportMagazines
		{
			class _xx_SmokeShellRed
			{
				magazine = "SmokeShellRed";
				count = 1;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 1;
			};
			class _xx_SmokeShellYellow
			{
				magazine = "SmokeShellYellow";
				count = 1;
			};
			class _xx_SmokeShellPurple
			{
				magazine = "SmokeShellPurple";
				count = 1;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
			class _xx_Laserbatteries
			{
				magazine = "Laserbatteries";
				count = 3;
			};
		};
		class TransportWeapons
		{
			class _xx_Binocular_Vector
			{
				weapon = "Binocular_Vector";
				count = 1;
			};
		};
	};
	class BAF_AssaultPack_HAAAmmo: Bag_Base_BAF
	{
		scope = 2;
		class TransportMagazines
		{
			class _xx_Stinger
			{
				magazine = "Stinger";
				count = 2;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 1;
			};
			class _xx_SmokeShellRed
			{
				magazine = "SmokeShellRed";
				count = 1;
			};
		};
	};
	class BAF_AssaultPack_LRRAmmo: Bag_Base_BAF
	{
		scope = 2;
		class TransportMagazines
		{
			class _xx_5Rnd_86x70_L115A1
			{
				magazine = "5Rnd_86x70_L115A1";
				count = 4;
			};
			class _xx_BAF_L109A1_HE
			{
				magazine = "BAF_L109A1_HE";
				count = 2;
			};
			class _xx_SmokeShellYellow
			{
				magazine = "SmokeShellYellow";
				count = 1;
			};
			class _xx_SmokeShellPurple
			{
				magazine = "SmokeShellPurple";
				count = 1;
			};
			class _xx_IR_Strobe_Target
			{
				magazine = "IR_Strobe_Target";
				count = 2;
			};
			class _xx_IR_Strobe_Marker
			{
				magazine = "IR_Strobe_Marker";
				count = 2;
			};
		};
	};
	class Bag_Base_EP1;
	class Tripod_Bag;
	class Weapon_Bag_Base_EP1: Bag_Base_EP1
	{
		class assembleInfo{};
	};
	class BAF_L2A1_ACOG_tripod_bag: Weapon_Bag_Base_EP1
	{
		scope = 2;
		displayName = "$STR_BAF_BAF_L2A1_ACOG_TRIPOD_BAG0";
		class assembleInfo: assembleInfo
		{
			displayName = "$STR_BAF_BAF_L2A1_ACOG_TRIPOD_BAG_ASSEMBLEINFO0";
			assembleTo = "BAF_L2A1_ACOG_tripod";
		};
	};
	class BAF_L2A1_ACOG_minitripod_bag: Weapon_Bag_Base_EP1
	{
		scope = 2;
		displayName = "$STR_BAF_BAF_L2A1_ACOG_MINITRIPOD_BAG0";
		class assembleInfo: assembleInfo
		{
			displayName = "$STR_BAF_BAF_L2A1_ACOG_MINITRIPOD_BAG_ASSEMBLEINFO0";
			assembleTo = "BAF_L2A1_Minitripod_D";
		};
	};
	class BAF_GPMG_Minitripod_D_bag: Weapon_Bag_Base_EP1
	{
		scope = 2;
		displayName = "$STR_BAF_BAF_GPMG_MINITRIPOD_D_BAG0";
		class assembleInfo: assembleInfo
		{
			displayName = "$STR_BAF_BAF_GPMG_MINITRIPOD_D_BAG_ASSEMBLEINFO0";
			assembleTo = "BAF_GPMG_Minitripod_D";
		};
	};
	class BAF_GMG_ACOG_minitripod_bag: Weapon_Bag_Base_EP1
	{
		scope = 2;
		displayName = "$STR_BAF_BAF_GMG_ACOG_MINITRIPOD_BAG0";
		class assembleInfo: assembleInfo
		{
			displayName = "$STR_BAF_BAF_GMG_ACOG_MINITRIPOD_BAG_ASSEMBLEINFO0";
			assembleTo = "BAF_GMG_Tripod_D";
		};
	};
	class BAF_BasicAmmunitionBox: ReammoBox_EP1
	{
		scope = 2;
		accuracy = 1000;
		displayName = "$STR_BAF_BAF_BASICAMMUNITIONBOX0";
		model = "\ca\weapons\AmmoBoxes\USBasicAmmo.p3d";
		class TransportMagazines
		{
			class _xx_FlareWhite_M203
			{
				magazine = "FlareWhite_M203";
				count = 2;
			};
			class _xx_FlareGreen_M203
			{
				magazine = "FlareGreen_M203";
				count = 2;
			};
			class _xx_FlareRed_M203
			{
				magazine = "FlareRed_M203";
				count = 2;
			};
			class _xx_FlareYellow_M203
			{
				magazine = "FlareYellow_M203";
				count = 2;
			};
			class _xx_1Rnd_HE_M203
			{
				magazine = "1Rnd_HE_M203";
				count = 80;
			};
			class _xx_1Rnd_SmokeRed_M203
			{
				magazine = "1Rnd_SmokeRed_M203";
				count = 2;
			};
			class _xx_1Rnd_SmokeGreen_M203
			{
				magazine = "1Rnd_SmokeGreen_M203";
				count = 2;
			};
			class _xx_1Rnd_SmokeYellow_M203
			{
				magazine = "1Rnd_SmokeYellow_M203";
				count = 2;
			};
			class _xx_1Rnd_Smoke_M203
			{
				magazine = "1Rnd_Smoke_M203";
				count = 2;
			};
			class _xx_Stinger
			{
				magazine = "Stinger";
				count = 30;
			};
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 200;
			};
			class _xx_30Rnd_556x45_StanagSD
			{
				magazine = "30Rnd_556x45_StanagSD";
				count = 20;
			};
			class _xx_5Rnd_127x99_AS50
			{
				magazine = "5Rnd_127x99_AS50";
				count = 20;
			};
			class _xx_5Rnd_86x70_L115A1
			{
				magazine = "5Rnd_86x70_L115A1";
				count = 50;
			};
			class _xx_NLAW
			{
				magazine = "NLAW";
				count = 30;
			};
			class _xx_Javelin
			{
				magazine = "Javelin";
				count = 30;
			};
			class _xx_200Rnd_556x45_L110A1
			{
				magazine = "200Rnd_556x45_L110A1";
				count = 90;
			};
			class _xx_BAF_L109A1_HE
			{
				magazine = "BAF_L109A1_HE";
				count = 50;
			};
			class _xx_SmokeShellRed
			{
				magazine = "SmokeShellRed";
				count = 2;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 2;
			};
			class _xx_SmokeShellYellow
			{
				magazine = "SmokeShellYellow";
				count = 2;
			};
			class _xx_SmokeShellPurple
			{
				magazine = "SmokeShellPurple";
				count = 2;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 5;
			};
			class _xx_Laserbatteries
			{
				magazine = "Laserbatteries";
				count = 10;
			};
		};
		class TransportWeapons
		{
			class _xx_BAF_L85A2_RIS_ACOG
			{
				weapon = "BAF_L85A2_RIS_ACOG";
				count = 4;
			};
			class _xx_BAF_L86A2_ACOG
			{
				weapon = "BAF_L86A2_ACOG";
				count = 4;
			};
		};
	};
	class BAF_BasicWeapons: ReammoBox_EP1
	{
		scope = 2;
		accuracy = 1000;
		displayName = "$STR_BAF_BAF_BASICWEAPONS0";
		model = "\ca\weapons\AmmoBoxes\USBasicWeapons.p3d";
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 100;
			};
			class _xx_30Rnd_556x45_StanagSD
			{
				magazine = "30Rnd_556x45_StanagSD";
				count = 20;
			};
			class _xx_5Rnd_127x99_AS50
			{
				magazine = "5Rnd_127x99_AS50";
				count = 30;
			};
			class _xx_5Rnd_86x70_L115A1
			{
				magazine = "5Rnd_86x70_L115A1";
				count = 50;
			};
			class _xx_200Rnd_556x45_L110A1
			{
				magazine = "200Rnd_556x45_L110A1";
				count = 20;
			};
			class _xx_100Rnd_762x51_M240
			{
				magazine = "100Rnd_762x51_M240";
				count = 20;
			};
			class _xx_1Rnd_HE_M203
			{
				magazine = "1Rnd_HE_M203";
				count = 30;
			};
			class _xx_FlareWhite_M203
			{
				magazine = "FlareWhite_M203";
				count = 2;
			};
			class _xx_FlareGreen_M203
			{
				magazine = "FlareGreen_M203";
				count = 2;
			};
			class _xx_FlareRed_M203
			{
				magazine = "FlareRed_M203";
				count = 2;
			};
			class _xx_FlareYellow_M203
			{
				magazine = "FlareYellow_M203";
				count = 2;
			};
			class _xx_BAF_L109A1_HE
			{
				magazine = "BAF_L109A1_HE";
				count = 50;
			};
			class _xx_SmokeShellRed
			{
				magazine = "SmokeShellRed";
				count = 2;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 2;
			};
			class _xx_SmokeShellYellow
			{
				magazine = "SmokeShellYellow";
				count = 2;
			};
			class _xx_SmokeShellPurple
			{
				magazine = "SmokeShellPurple";
				count = 2;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 5;
			};
		};
		class TransportWeapons
		{
			class _xx_BAF_AS50_scoped
			{
				weapon = "BAF_AS50_scoped";
				count = 2;
			};
			class _xx_BAF_AS50_TWS
			{
				weapon = "BAF_AS50_TWS";
				count = 1;
			};
			class _xx_BAF_LRR_scoped
			{
				weapon = "BAF_LRR_scoped";
				count = 4;
			};
			class _xx_BAF_L85A2_RIS_Holo
			{
				weapon = "BAF_L85A2_RIS_Holo";
				count = 4;
			};
			class _xx_BAF_L85A2_UGL_Holo
			{
				weapon = "BAF_L85A2_UGL_Holo";
				count = 4;
			};
			class _xx_BAF_L85A2_RIS_SUSAT
			{
				weapon = "BAF_L85A2_RIS_SUSAT";
				count = 4;
			};
			class _xx_BAF_L85A2_UGL_SUSAT
			{
				weapon = "BAF_L85A2_UGL_SUSAT";
				count = 4;
			};
			class _xx_BAF_L85A2_RIS_CWS
			{
				weapon = "BAF_L85A2_RIS_CWS";
				count = 2;
			};
			class _xx_BAF_L85A2_RIS_ACOG
			{
				weapon = "BAF_L85A2_RIS_ACOG";
				count = 4;
			};
			class _xx_BAF_L85A2_UGL_ACOG
			{
				weapon = "BAF_L85A2_UGL_ACOG";
				count = 4;
			};
			class _xx_BAF_L86A2_ACOG
			{
				weapon = "BAF_L86A2_ACOG";
				count = 2;
			};
			class _xx_BAF_L110A1_Aim
			{
				weapon = "BAF_L110A1_Aim";
				count = 2;
			};
			class _xx_BAF_L7A2_GPMG
			{
				weapon = "BAF_L7A2_GPMG";
				count = 2;
			};
		};
	};
	class BAF_Launchers: ReammoBox_EP1
	{
		scope = 2;
		accuracy = 1000;
		displayName = "$STR_BAF_BAF_LAUNCHERS0";
		model = "\ca\weapons\AmmoBoxes\USLaunchers.p3d";
		class TransportMagazines
		{
			class _xx_NLAW
			{
				magazine = "NLAW";
				count = 20;
			};
			class _xx_Javelin
			{
				magazine = "Javelin";
				count = 5;
			};
			class _xx_Stinger
			{
				magazine = "Stinger";
				count = 5;
			};
			class _xx_1Rnd_HE_M203
			{
				magazine = "1Rnd_HE_M203";
				count = 80;
			};
			class _xx_6Rnd_HE_M203
			{
				magazine = "6Rnd_HE_M203";
				count = 30;
			};
			class _xx_BAF_L109A1_HE
			{
				magazine = "BAF_L109A1_HE";
				count = 50;
			};
			class _xx_SmokeShellRed
			{
				magazine = "SmokeShellRed";
				count = 2;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 2;
			};
			class _xx_SmokeShellYellow
			{
				magazine = "SmokeShellYellow";
				count = 2;
			};
			class _xx_SmokeShellPurple
			{
				magazine = "SmokeShellPurple";
				count = 2;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 5;
			};
		};
		class TransportWeapons
		{
			class _xx_BAF_NLAW_Launcher
			{
				weapon = "BAF_NLAW_Launcher";
				count = 2;
			};
			class _xx_Javelin
			{
				weapon = "Javelin";
				count = 1;
			};
			class _xx_Stinger
			{
				weapon = "Stinger";
				count = 1;
			};
		};
	};
	class BAF_VehicleBox: BAF_BasicAmmunitionBox
	{
		displayName = "$STR_BAF_BAF_VEHICLEBOX0";
		model = "\ca\weapons\AmmoBoxes\USVehicleAmmo.p3d";
		class TransportMagazines
		{
			class _xx_100Rnd_762x51_M240
			{
				magazine = "100Rnd_762x51_M240";
				count = 50;
			};
			class _xx_100Rnd_556x45_M249
			{
				magazine = "100Rnd_556x45_M249";
				count = 50;
			};
		};
		class TransportWeapons{};
		transportAmmo = 100000;
		supplyRadius = 3;
	};
	class BAF_OrdnanceBox: BAF_BasicAmmunitionBox
	{
		displayName = "$STR_BAF_BAF_ORDNANCEBOX0";
		model = "\ca\weapons\AmmoBoxes\USOrdnance.p3d";
		class TransportMagazines
		{
			class _xx_Mine
			{
				magazine = "Mine";
				count = 10;
			};
			class _xx_PipeBomb
			{
				magazine = "PipeBomb";
				count = 20;
			};
			class _xx_BAF_L109A1_HE
			{
				magazine = "BAF_L109A1_HE";
				count = 50;
			};
		};
		class TransportWeapons{};
	};
	class BAF_IEDBox: BAF_BasicAmmunitionBox
	{
		displayName = "$STR_BAF_BAF_IEDBOX0";
		model = "\ca\weapons\AmmoBoxes\GuerillaCache.p3d";
		class TransportMagazines
		{
			class _xx_BAF_ied_v4
			{
				magazine = "BAF_ied_v4";
				count = 1;
			};
			class _xx_BAF_ied_v3
			{
				magazine = "BAF_ied_v3";
				count = 2;
			};
			class _xx_BAF_ied_v2
			{
				magazine = "BAF_ied_v2";
				count = 4;
			};
			class _xx_BAF_ied_v1
			{
				magazine = "BAF_ied_v1";
				count = 4;
			};
		};
		class TransportWeapons{};
	};
	class USBasicAmmunitionBox_EP1;
	class IED_placement_BAF: USBasicAmmunitionBox_EP1
	{
		scope = 2;
		model = "\ca\Weapons_baf\IED_V3.p3d";
		DisplayName = "IED";
		class TransportMagazines{};
		class TransportWeapons{};
		transportMaxMagazines = 0;
		transportMaxWeapons = 0;
		vehicleClass = "Backpacks";
		class DestructionEffects{};
	};
};
class CfgMagazines
{
	class VehicleMagazine;
	class CA_Magazine;
	class CA_LauncherMagazine;
	class 100Rnd_127x99_M2;
	class 100Rnd_127x99_L2A1: 100Rnd_127x99_M2
	{
		displayName = "$STR_BAF_CFGMAGAZINES_100RND_127X99_L2A10";
		descriptionShort = "$STR_BAF_CFGMAGAZINES_100RND_127X99_L2A10_0";
	};
	class 5Rnd_127x99_as50: CA_Magazine
	{
		scope = 2;
		displayName = "$STR_BAF_CFGMAGAZINES_5RND_127X99_AS500";
		descriptionShort = "$STR_BAF_CFGMAGAZINES_5RND_127X99_AS500_0";
		ammo = "B_127x99_Ball_noTracer_BAF";
		count = 5;
		initSpeed = 936;
		picture = "\CA\weapons_BAF\data\UI\M_AS50_CA.paa";
	};
	class 5Rnd_86x70_L115A1: CA_Magazine
	{
		scope = 2;
		displayName = "$STR_BAF_CFGMAGAZINES_5RND_86X70_L115A10";
		descriptionShort = "$STR_BAF_CFGMAGAZINES_5RND_86X70_L115A10_0";
		ammo = "B_86x70_Ball_noTracer";
		count = 5;
		initSpeed = 936;
		picture = "\CA\weapons_BAF\data\UI\M_lrr_CA.paa";
	};
	class NLAW: CA_LauncherMagazine
	{
		scope = 2;
		displayName = "$STR_BAF_CFGMAGAZINES_NLAW0";
		descriptionShort = "$STR_BAF_CFGMAGAZINES_NLAW0_0";
		ammo = "M_NLAW_AT";
		type = "3 * 		256";
		picture = "\Ca\weapons_baf\data\UI\nlaw_rocket_ca";
		modelSpecial = "\ca\weapons_BAF\nlaw_loaded_BAF";
		model = "\Ca\weapons_baf\nlaw_proxy_BAF";
		initSpeed = 40;
		maxLeadSpeed = 340;
	};
	class 200Rnd_556x45_M249;
	class 200Rnd_556x45_L110A1: 200Rnd_556x45_M249
	{
		displayName = "$STR_BAF_CFGMAGAZINES_200RND_556X45_L110A10";
		descriptionShort = "$STR_BAF_CFGMAGAZINES_200RND_556X45_L110A10_0";
	};
	class 200Rnd_762x54_PKT;
	class 200Rnd_762x54_GPMG: 200Rnd_762x54_PKT
	{
		displayName = "$STR_BAF_CFGMAGAZINES_200RND_762X54_GPMG0";
		descriptionShort = "$STR_BAF_CFGMAGAZINES_200RND_762X54_GPMG0_0";
	};
	class 48Rnd_40mm_MK19;
	class 32Rnd_40mm_GMG: 48Rnd_40mm_MK19
	{
		count = 32;
		displayName = "$STR_BAF_CFGMAGAZINES_32RND_40MM_GMG0";
		descriptionShort = "$STR_BAF_CFGMAGAZINES_32RND_40MM_GMG0_0";
	};
	class 38Rnd_FFAR;
	class 12Rnd_CRV7: 38Rnd_FFAR
	{
		count = 12;
		ammo = "M_CRV7_AT";
		displayName = "$STR_BAF_CFGMAGAZINES_12RND_CRV70";
		descriptionShort = "$STR_BAF_CFGMAGAZINES_12RND_CRV0_0";
	};
	class 38Rnd_CRV7: 12Rnd_CRV7
	{
		count = 26;
	};
	class 6Rnd_CRV7_HEPD: 38Rnd_FFAR
	{
		count = 19;
		ammo = "M_CRV7_HEPD";
		displayName = "$STR_BAF_CFGMAGAZINES_6RND_CRV7_HEPD0";
		descriptionShort = "$STR_BAF_CFGMAGAZINES_6RND_CRV_HEPD0_0";
	};
	class 6Rnd_CRV7_FAT: 38Rnd_FFAR
	{
		count = 19;
		ammo = "M_CRV7_FAT";
		displayName = "$STR_BAF_CFGMAGAZINES_6RND_CRV7_FAT0";
		descriptionShort = "$STR_BAF_CFGMAGAZINES_6RND_CRV_FAT0_0";
	};
	class 1200Rnd_762x51_M240;
	class 1200Rnd_20mm_M621: 1200Rnd_762x51_M240
	{
		ammo = "B_20mm_AP";
		displayNameShort = "HE";
		count = 400;
	};
	class 200Rnd_40mmHE_FV510: VehicleMagazine
	{
		scope = 1;
		displayName = "$STR_BAF_CFGMAGAZINES_200RND_40MMHE_FV5100";
		ammo = "Sh_40_HE";
		count = 200;
		initSpeed = 1100;
		maxLeadSpeed = 100;
		tracersEvery = 4;
		lastRoundsTracer = 4;
		nameSound = "heat";
		displayNameShort = "HEAT";
	};
	class 200Rnd_40mmSABOT_FV510: 200Rnd_40mmHE_FV510
	{
		displayName = "$STR_BAF_CFGMAGAZINES_200RND_40MMSABOT_FV5100";
		ammo = "Sh_40_SABOT";
		count = 200;
		initSpeed = 1040;
		maxLeadSpeed = 300;
		nameSound = "cannon";
		displayNameShort = "APDS";
	};
	class 2000Rnd_762x51_M134;
	class 2000Rnd_762x51_L94A1: 2000Rnd_762x51_M134
	{
		displayName = "$STR_BAF_CFGMAGAZINES_2000RND_762X51_L94A10";
	};
	class 100Rnd_762x51_M240;
	class 200Rnd_762x51_M240: 100Rnd_762x51_M240
	{
		count = 200;
	};
	class TimeBomb;
	class BAF_ied_v1: TimeBomb
	{
		scope = 2;
		displayName = "$STR_BAF_CFGMAGAZINES_BAF_IED_V10";
		picture = "\ca\weapons_baf\data\UI\ied_v1_ca.paa";
		value = 5;
		ammo = "BAF_ied_v1";
		count = 1;
		initSpeed = 0;
		maxLeadSpeed = 0;
		nameSoundWeapon = "satchelcharge";
		nameSound = "satchelcharge";
		useAction = 1;
		useActionTitle = "$STR_BAF_CFGWEAPONS_BAF_PUTIED_V10";
		sound[] = {"\ca\Weapons\Data\Sound\gravel_L",0.00031622776,1,10};
		descriptionShort = "$STR_BAF_CFGWEAPONS_BAF_IED_V10_0";
	};
	class BAF_ied_v2: BAF_ied_v1
	{
		picture = "\ca\weapons_baf\data\UI\ied_v2_ca.paa";
		displayName = "$STR_BAF_CFGMAGAZINES_BAF_IED_V20";
		useActionTitle = "$STR_BAF_CFGWEAPONS_BAF_PUTIED_V20";
		ammo = "BAF_ied_v2";
		descriptionShort = "$STR_BAF_CFGWEAPONS_BAF_IED_V20_0";
	};
	class BAF_ied_v3: BAF_ied_v1
	{
		picture = "\ca\weapons_baf\data\UI\ied_v3_ca.paa";
		displayName = "$STR_BAF_CFGMAGAZINES_BAF_IED_V30";
		useActionTitle = "$STR_BAF_CFGWEAPONS_BAF_PUTIED_V30";
		ammo = "BAF_ied_v3";
	};
	class BAF_ied_v4: BAF_ied_v1
	{
		picture = "\ca\weapons_baf\data\UI\ied_v4_ca.paa";
		displayName = "$STR_BAF_CFGMAGAZINES_BAF_IED_V40";
		useActionTitle = "$STR_BAF_CFGWEAPONS_BAF_PUTIED_V40";
		ammo = "BAF_ied_v4";
		descriptionShort = "$STR_BAF_CFGWEAPONS_BAF_IED_V20_0";
	};
	class HandGrenade_West;
	class BAF_L109A1_HE: HandGrenade_West
	{
		displayName = "$STR_BAF_CFGMAGAZINES_BAF_L109A1_HE0";
	};
};
class CfgAmmo
{
	class Default;
	class BulletCore;
	class BulletBase;
	class TimeBombCore;
	class B_86x70_Ball_noTracer: BulletBase
	{
		hit = 26;
		indirectHit = 3;
		indirectHitRange = 0.01;
		cartridge = "FxCartridge_127";
		visibleFire = 22;
		audibleFire = 22;
		visibleFireTime = 3;
		cost = 20;
		airLock = 1;
		model = "\ca\Weapons\Data\bullettracer\tracer_red";
		caliber = 2.07;
		tracerColor[] = {0,0,0,0};
		tracerColorR[] = {0,0,0,0};
		tracerStartTime = -1;
		airFriction = -0.0005;
		muzzleEffect = "BIS_Effects_HeavySniper";
	};
	class B_127x99_Ball_noTracer;
	class B_127x99_Ball_noTracer_BAF: B_127x99_Ball_noTracer
	{
		hit = 56;
		indirectHit = 0;
		indirectHitRange = 0;
	};
	class MissileBase;
	class M_NLAW_AT: MissileBase
	{
		model = "\ca\weapons_BAF\nlaw_rocket_BAF";
		hit = 550;
		indirectHit = 20;
		indirectHitRange = 2;
		maneuvrability = 14;
		simulationStep = 0.002;
		trackOversteer = 0.85;
		trackLead = 0;
		irLock = 1;
		cost = 10000;
		timeToLive = 3;
		sideAirFriction = 0.75;
		maxSpeed = 340;
		initTime = 0.25;
		thrustTime = 2;
		thrust = 334;
		fuseDistance = 5;
		effectsMissile = "missile3";
		whistleDist = 16;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
	};
	class Sh_40_HE: BulletBase
	{
		hit = 110;
		indirectHit = 35;
		indirectHitRange = 1.5;
		typicalSpeed = 1300;
		explosive = 0.8;
		cost = 300;
		model = "\ca\Weapons\Data\bullettracer\tracer_red";
		airFriction = -0.00045;
		caliber = 7;
		timeToLive = 15;
		whistleDist = 14;
		muzzleEffect = "BIS_Effects_HeavyCaliber";
		tracerScale = 3;
		tracerStartTime = 0.05;
		tracerEndTime = 3;
		explosionEffects = "ExploAmmoExplosion";
	};
	class Sh_40_SABOT: Sh_40_HE
	{
		hit = 300;
		indirectHit = 5;
		indirectHitRange = 1;
		typicalSpeed = 1900;
		cost = 1000;
		deflecting = 15;
		airFriction = -4e-005;
		explosive = 0.01;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "NoExplosion";
		caliber = 22.22;
	};
	class M_Hellfire_AT;
	class M_CRV7_AT: M_Hellfire_AT
	{
		model = "\ca\air\70mmRocket";
		maneuvrability = 4;
	};
	class R_Hydra_HE;
	class M_CRV7_HEPD: R_Hydra_HE
	{
		timeToLive = 20;
		maneuvrability = 0.0;
		maxControlRange = 0;
		initTime = 0.05;
		thrustTime = 1;
		thrust = 1500;
		visibleFire = 32;
		audibleFire = 32;
		visibleFireTime = 20;
		cost = 2000;
		deflecting = 5;
		hit = 850;
		indirectHit = 20;
		indirectHitRange = 2;
	};
	class M_CRV7_FAT: M_CRV7_HEPD
	{
		hit = 550;
		indirectHit = 100;
		indirectHitRange = 10;
	};
	class BAF_ied_v1: TimeBombCore
	{
		hit = 20;
		indirectHit = 18;
		indirectHitRange = 7;
		model = "\ca\Weapons_baf\IED_V1";
		soundHit[] = {"Ca\sounds\Weapons\explosions\explosion_mega_08",31.622776,1,1500};
		whistleDist = 8;
		simulation = "shotPipeBomb";
		CraterEffects = "GrenadeCrater";
		explosionEffects = "GrenadeExplosion";
		defaultMagazine = "BAF_ied_v1";
	};
	class BAF_ied_v2: TimeBombCore
	{
		hit = 1200;
		indirectHit = 1100;
		indirectHitRange = 4;
		model = "\ca\Weapons_baf\IED_V2";
		soundHit[] = {"Ca\sounds\Weapons\explosions\explosion_mega_08",56.23413,1,1500};
		whistleDist = 15;
		simulation = "shotPipeBomb";
		defaultMagazine = "BAF_ied_v2";
	};
	class BAF_ied_v3: TimeBombCore
	{
		hit = 20;
		indirectHit = 18;
		indirectHitRange = 7;
		model = "\ca\Weapons_baf\IED_V3";
		soundHit[] = {"Ca\sounds\Weapons\explosions\explosion_mega_08",177.82794,1,1500};
		whistleDist = 8;
		simulation = "shotPipeBomb";
		CraterEffects = "GrenadeCrater";
		explosionEffects = "GrenadeExplosion";
		defaultMagazine = "BAF_ied_v3";
	};
	class BAF_ied_v4: TimeBombCore
	{
		hit = 1200;
		indirectHit = 1100;
		indirectHitRange = 4;
		model = "\ca\Weapons_baf\IED_V4";
		soundHit[] = {"Ca\sounds\Weapons\explosions\explosion_mega_08",562.3413,1,1500};
		whistleDist = 15;
		simulation = "shotPipeBomb";
		defaultMagazine = "BAF_ied_v4";
	};
};
//};

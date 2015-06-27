////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:06:56 2014 : Source 'file' date Fri Oct 31 06:06:56 2014
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

//Class weapons_acr : cz805\config.bin{
class CfgPatches
{
	class CAWeapons_ACR_CZ805
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.5;
		requiredAddons[] = {"CAWeapons_ACR"};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
	class Rifle;
	class CZ805_A1_ACR: Rifle
	{
		scope = 2;
		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		optics = 1;
		displayName = "$STR_ACR_DN_CZ805A1";
		descriptionShort = "$STR_ACR_DSS_CZ805A1";
		model = "\Ca\weapons_ACR\CZ805\CZ_805_A1";
		modelOptics = "\Ca\Weapons_ACR\CZ805\optika_805.p3d";
		picture = "\Ca\weapons_ACR\Data\UI\picture_CZ805_A1_CA";
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
		handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons_E\SCAR\Data\Anim\SCAR.rtm"};
		dexterity = 1.64;
		irDistance = 100;
		magazines[] = {"30Rnd_556x45_G36","30Rnd_556x45_G36SD","100Rnd_556x45_BetaCMag","30Rnd_556x45_Stanag","30Rnd_556x45_StanagSD"};
		modes[] = {"single","burst","fullauto"};
		class single: Mode_SemiAuto
		{
			dispersion = 0.00175;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.05;
			aiRateOfFireDistance = 600;
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_2outof10";
			begin1[] = {"\CA\Sounds_ACR\weapons\cz-805_single1a",2.5118864,1,1500};
			begin2[] = {"\CA\Sounds_ACR\weapons\cz-805_single1b",2.5118864,1,1500};
			begin3[] = {"\CA\Sounds_ACR\weapons\cz-805_single1c",2.5118864,1,1500};
			soundBegin[] = {"begin1",0.3,"begin2",0.3,"begin3",0.4};
		};
		class burst: Mode_Burst
		{
			dispersion = 0.00175;
			burst = 2;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 30;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_2outof10";
			begin1[] = {"\CA\Sounds_ACR\weapons\cz-805_single1a",2.5118864,1,1500};
			begin2[] = {"\CA\Sounds_ACR\weapons\cz-805_single1b",2.5118864,1,1500};
			begin3[] = {"\CA\Sounds_ACR\weapons\cz-805_single1c",2.5118864,1,1500};
			soundBegin[] = {"begin1",0.3,"begin2",0.3,"begin3",0.4};
			soundBurst = 0;
		};
		class fullauto: Mode_FullAuto
		{
			dispersion = 0.00175;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 30;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			recoil = "recoil_single_primary_2outof10";
			recoilProne = "recoil_single_primary_prone_2outof10";
			begin1[] = {"\CA\Sounds_ACR\weapons\cz-805_single1a",2.5118864,1,1500};
			begin2[] = {"\CA\Sounds_ACR\weapons\cz-805_single1b",2.5118864,1,1500};
			begin3[] = {"\CA\Sounds_ACR\weapons\cz-805_single1c",2.5118864,1,1500};
			soundBegin[] = {"begin1",0.3,"begin2",0.3,"begin3",0.4};
		};
		class M203Muzzle;
		reloadMagazineSound[] = {"\CA\Sounds_ACR\weapons\cz-805_reload",0.031622775,1};
		drySound[] = {"\CA\Sounds_ACR\weapons\dry",0.01,1};
		class Library
		{
			libTextDesc = "$STR_ACR_LIB_CZ805";
		};
	};
	class CZ805_A1_GL_ACR: CZ805_A1_ACR
	{
		scope = 2;
		displayName = "$STR_ACR_DN_CZ805A1GL";
		descriptionShort = "$STR_ACR_DSS_CZ805AGL";
		model = "\Ca\weapons_ACR\CZ805\CZ_805_GL";
		picture = "\Ca\Weapons_ACR\Data\UI\picture_CZ805_GL_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons\data\Anim\M16GL.rtm"};
		dexterity = 1.6;
		muzzles[] = {"this","M203Muzzle"};
		class M203Muzzle: M203Muzzle
		{
			begin1[] = {"ca\sounds_e\weapons_e\grenade_launcher\gr_launcher_3",1.0,1,200};
			begin2[] = {"ca\sounds_e\weapons_e\grenade_launcher\gr_launcher_4",1.0,1,200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			reloadMagazineSound[] = {"ca\sounds_e\weapons_e\grenade_launcher\gr_launcher_reload",1.0,1,30};
			drySound[] = {"ca\sounds_e\weapons_e\grenade_launcher\gr_launcher_dry",1.1220185,1,40};
			displayName = "$STR_ACR_DN_CZ805G1";
			opticsZoomMin = 0.22;
			opticsZoomMax = 0.95;
			opticsZoomInit = 0.42;
		};
	};
	class CZ805_A2_ACR: CZ805_A1_ACR
	{
		displayName = "$STR_ACR_DN_CZ805A2";
		descriptionShort = "$STR_ACR_DSS_CZ805A2";
		model = "\Ca\weapons_ACR\CZ805\CZ_805_A2";
		picture = "\Ca\Weapons_ACR\Data\UI\picture_CZ805_A2_CA.paa";
		dexterity = 1.7;
		modelOptics = "-";
		irDistance = 0;
		handAnim[] = {};
		class OpticsModes
		{
			class Ironsights
			{
				opticsID = 1;
				distanceZoomMin = 300;
				distanceZoomMax = 300;
				cameraDir = "";
				useModelOptics = 0;
				opticsFlare = 0;
				opticsDisablePeripherialVision = 0;
				opticsZoomMin = 0.25;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.5;
				memoryPointCamera = "eye";
				visionMode[] = {};
				opticsPPEffects[] = {};
			};
		};
		modes[] = {"single","burst","fullauto"};
		class single: Mode_SemiAuto
		{
			dispersion = 0.002;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.05;
			aiRateOfFireDistance = 400;
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_2outof10";
			begin1[] = {"\CA\Sounds_ACR\weapons\cz-805_single1a",2.5118864,1,1500};
			begin2[] = {"\CA\Sounds_ACR\weapons\cz-805_single1b",2.5118864,1,1500};
			begin3[] = {"\CA\Sounds_ACR\weapons\cz-805_single1c",2.5118864,1,1500};
			soundBegin[] = {"begin1",0.3,"begin2",0.3,"begin3",0.4};
		};
		class burst: Mode_Burst
		{
			dispersion = 0.002;
			burst = 2;
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 80;
			midRangeProbab = 0.7;
			maxRange = 120;
			maxRangeProbab = 0.05;
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_2outof10";
			begin1[] = {"\CA\Sounds_ACR\weapons\cz-805_single1a",2.5118864,1,1500};
			begin2[] = {"\CA\Sounds_ACR\weapons\cz-805_single1b",2.5118864,1,1500};
			begin3[] = {"\CA\Sounds_ACR\weapons\cz-805_single1c",2.5118864,1,1500};
			soundBegin[] = {"begin1",0.3,"begin2",0.3,"begin3",0.4};
			soundBurst = 0;
		};
		class fullauto: Mode_FullAuto
		{
			dispersion = 0.002;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 25;
			midRangeProbab = 0.7;
			maxRange = 70;
			maxRangeProbab = 0.05;
			recoil = "recoil_single_primary_2outof10";
			recoilProne = "recoil_single_primary_prone_2outof10";
			begin1[] = {"\CA\Sounds_ACR\weapons\cz-805_single1a",2.5118864,1,1500};
			begin2[] = {"\CA\Sounds_ACR\weapons\cz-805_single1b",2.5118864,1,1500};
			begin3[] = {"\CA\Sounds_ACR\weapons\cz-805_single1c",2.5118864,1,1500};
			soundBegin[] = {"begin1",0.3,"begin2",0.3,"begin3",0.4};
		};
	};
	class CZ805_A2_SD_ACR: CZ805_A2_ACR
	{
		displayName = "$STR_ACR_DN_CZ805A2SD";
		descriptionShort = "$STR_ACR_DSS_CZ805A2";
		model = "\Ca\weapons_ACR\CZ805\CZ_805_SF";
		picture = "\Ca\Weapons_ACR\Data\UI\picture_CZ805_SD_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons_E\SCAR\Data\Anim\SCAR.rtm"};
		magazines[] = {"30Rnd_556x45_G36SD","30Rnd_556x45_StanagSD"};
		distanceZoomMin = 150;
		distanceZoomMax = 150;
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
		class OpticsModes
		{
			class Kolimator
			{
				opticsID = 1;
				useModelOptics = 0;
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				opticsZoomMin = 0.25;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.5;
				memoryPointCamera = "eye";
				visionMode[] = {};
				opticsFlare = 0;
				opticsDisablePeripherialVision = 0;
				distanceZoomMin = 100;
				distanceZoomMax = 100;
				cameraDir = "";
			};
		};
		modes[] = {"single","burst","fullauto"};
		class single: Mode_SemiAuto
		{
			dispersion = 0.002;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 40;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFireDistance = 150;
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_2outof10";
			begin1[] = {"\CA\Sounds_ACR\weapons\cz-805_silent_single1",2.5118864,1,500};
			soundBegin[] = {"begin1",1};
		};
		class burst: Mode_Burst
		{
			dispersion = 0.002;
			burst = 2;
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 30;
			midRangeProbab = 0.7;
			maxRange = 70;
			maxRangeProbab = 0.05;
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_2outof10";
			begin1[] = {"\CA\Sounds_ACR\weapons\cz-805_silent_single1",2.5118864,1,500};
			soundBegin[] = {"begin1",1};
			soundBurst = 0;
		};
		class fullauto: Mode_FullAuto
		{
			dispersion = 0.002;
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 40;
			maxRangeProbab = 0.05;
			recoil = "recoil_single_primary_2outof10";
			recoilProne = "recoil_single_primary_prone_2outof10";
			begin1[] = {"\CA\Sounds_ACR\weapons\cz-805_silent_single1",2.5118864,1,500};
			soundBegin[] = {"begin1",1};
		};
	};
	class CZ805_B_GL_ACR: CZ805_A1_ACR
	{
		displayName = "$STR_ACR_DN_CZ805BGL";
		descriptionShort = "$STR_ACR_DSS_CZ805BGL";
		model = "\Ca\weapons_ACR\CZ805\CZ_805_B";
		picture = "\Ca\Weapons_ACR\Data\UI\picture_CZ805_B_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons\data\Anim\M16GL.rtm"};
		magazines[] = {"20Rnd_762x51_B_SCAR","20Rnd_762x51_SB_SCAR","20Rnd_762x51_FNFAL","20Rnd_762x51_DMR"};
		dexterity = 1.49;
		dispersion = 0.001;
		irDistance = 100;
		muzzles[] = {"this","M203Muzzle"};
		modelOptics = "\Ca\weapons_E\SCAR\ACOG_TA31_optic_4x.p3d";
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
		modes[] = {"single","burst","fullauto"};
		class single: Mode_SemiAuto
		{
			dispersion = 0.001;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.05;
			aiRateOfFireDistance = 600;
			recoil = "recoil_single_primary_4outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
			begin1[] = {"ca\sounds_E\weapons_E\SCAR\SCAR_single_shot_v3",2.5118864,1,1500};
			soundBegin[] = {"begin1",1};
		};
		class burst: Mode_Burst
		{
			dispersion = 0.001;
			burst = 2;
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 80;
			midRangeProbab = 0.7;
			maxRange = 120;
			maxRangeProbab = 0.05;
			recoil = "recoil_single_primary_4outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
			begin1[] = {"ca\sounds_E\weapons_E\SCAR\SCAR_single_shot_v3",2.5118864,1,1500};
			soundBegin[] = {"begin1",1};
			soundBurst = 0;
		};
		class fullauto: Mode_FullAuto
		{
			dispersion = 0.001;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 30;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
			begin1[] = {"ca\sounds_E\weapons_E\SCAR\SCAR_single_shot_v3",2.5118864,1,1500};
			soundBegin[] = {"begin1",1};
		};
		class M203Muzzle: M203Muzzle
		{
			begin1[] = {"ca\sounds_e\weapons_e\grenade_launcher\gr_launcher_3",1.0,1,200};
			begin2[] = {"ca\sounds_e\weapons_e\grenade_launcher\gr_launcher_4",1.0,1,200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			reloadMagazineSound[] = {"ca\sounds_e\weapons_e\grenade_launcher\gr_launcher_reload",1.0,1,30};
			drySound[] = {"ca\sounds_e\weapons_e\grenade_launcher\gr_launcher_dry",1.1220185,1,40};
			displayName = "$STR_ACR_DN_CZ805G1";
			opticsZoomMin = 0.22;
			opticsZoomMax = 0.95;
			opticsZoomInit = 0.42;
		};
	};
};
//};

////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:06:56 2014 : Source 'file' date Fri Oct 31 06:06:56 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=14
enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	_k = 0,
	destructtree = 3,
	destructtent = 4,
	destructno = 0,
	_c = 50,
	_r = 0,
	_d = 0,
	_t = -1,
	_e = 2,
	destructman = 5,
	destructbuilding = 1
};

//Class weapons_acr : config.bin{
class CfgPatches
{
	class CAWEAPONS_ACR
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.5;
		requiredAddons[] = {"CA_ACR","CAWeapons_E","CAWeapons_E_AmmoBoxes"};
	};
};
class CfgAmmo
{
	class MissileBase;
	class M_Bolide_AA: MissileBase
	{
		model = "\ca\weapons\Javelin_Rocket.p3d";
		hit = 70;
		indirectHit = 50;
		indirectHitRange = 8;
		fuseDistance = 120;
		irLock = 1;
		airLock = 1;
		CraterEffects = "AAMissileCrater";
		explosionEffects = "AAMissileExplosion";
		whistleDist = 16;
		effectsMissile = "missile2";
		manualControl = 1;
		maxControlRange = 8000;
		initTime = 0.25;
		thrust = 1300;
		maxSpeed = 660;
		maneuvrability = 14;
		simulationStep = 0.002;
		cost = 8000;
		weaponLockSystem = "CM_Missile + CM_Lock_Laser";
		cmImmunity = "CMImmunity_GOOD";
	};
	class ShellBase;
	class PG15V: ShellBase
	{
		cost = 300;
		typicalSpeed = 665;
		hit = 300;
		indirectHit = 5;
		indirectHitRange = 2.5;
		artilleryLock = 1;
		explosive = 0.8;
		model = "\ca\weapons\AT1";
		tracerScale = 1.2;
		tracerStartTime = 0.075;
		tracerEndTime = 1;
		airFriction = -0.00028;
		nvgOnly = 0;
	};
	class AT3: MissileBase
	{
		displayName = "AT-3";
		nameSound = "missiles";
		proxyShape = "\ca\tracked_ACR\BVP1\AT3_proxy";
		model = "\ca\tracked_ACR\BVP1\AT3_proxy";
		hit = 600;
		indirectHit = 0.2;
		indirectHitRange = 0.2;
		explosive = 0.35;
		typicalSpeed = 200;
		cost = 100000;
		initTime = 0;
		thrustTime = 30;
		thrust = 350;
		maxSpeed = 200;
		soundHit[] = {"\ca\Weapons\Data\Sound\explosion_large1",17.782795,1};
		soundFly[] = {"\ca\Weapons\Data\Sound\rocket_fly1",0.316228,1.5};
		soundEngine[] = {"\ca\Weapons\Data\Sound\noise",0.031623,1};
		irLock = 1;
		manualControl = 1;
		laserLock = 0;
		trackOversteer = 1;
		trackLead = 1;
		maxControlRange = 2500;
		maneuvrability = 8.0;
	};
	class Sh_125_SABOT;
	class Sh_125_IMI: Sh_125_SABOT
	{
		hit = 775;
		indirectHit = 10;
		indirectHitRange = 1;
		caliber = 28;
	};
	class R_GRAD;
	class R_GRAD_ACR: R_GRAD
	{
		proxyShape = "\Ca\Wheeled_ACR\RM70\GradRocket";
		model = "\Ca\Wheeled_ACR\RM70\GradRocket_fly";
	};
};
class CfgMagazines
{
	class VehicleMagazine;
	class 1Rnd_Bolide: VehicleMagazine
	{
		scope = 2;
		count = 1;
		ammo = "M_Bolide_AA";
		displayName = "SAM Bolide";
		initSpeed = 50;
		maxLeadSpeed = 600;
		sound[] = {"\ca\Weapons\Data\Sound\TOW_2",3.1622777,1,1400};
		nameSound = "missiles";
		reloadSound[] = {"\ca\Weapons\Data\Sound\missload",0.00031622776,1,20};
		descriptionShort = "Bolide";
	};
	class 210Rnd_20mm_ZPL_20: VehicleMagazine
	{
		scope = 2;
		displayName = "ZPL-20";
		ammo = "B_20mm_AP";
		count = 210;
		initSpeed = 1020;
		maxLeadSpeed = 200;
		tracersEvery = 10;
		nameSound = "cannon";
	};
	class 4Rnd_AT9_Mi24P;
	class 8Rnd_AT9_Mi24V: 4Rnd_AT9_Mi24P
	{
		count = 8;
	};
	class 2Rnd_Maverick_A10;
	class 4Rnd_Maverick_L159: 2Rnd_Maverick_A10
	{
		count = 4;
	};
	class 140Rnd_30mm_ATKMK44_HE_ACR: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_DN_HE";
		ammo = "B_30mm_HE";
		count = 140;
		initSpeed = 1080;
		maxLeadSpeed = 200;
		tracersEvery = 2;
		lastRoundsTracer = 5;
		nameSound = "heat";
	};
	class 60Rnd_30mm_ATKMK44_AP_ACR: 140Rnd_30mm_ATKMK44_HE_ACR
	{
		displayName = "$STR_DN_AP";
		ammo = "B_30mm_AP";
		count = 60;
		nameSound = "sabot";
	};
	class 100Rnd_762x51_M240;
	class 460Rnd_762x51_M240_ACR: 100Rnd_762x51_M240
	{
		count = 460;
	};
	class 2Rnd_TOW;
	class 2Rnd_Spike_ACR: 2Rnd_TOW
	{
		displayName = "ATGM Spike";
		ammo = "M_Javelin_AT";
		maxLeadSpeed = 100;
		descriptionShort = "Spike";
	};
	class 15Rnd_9x19_M9;
	class 15Rnd_9x19_M9SD;
	class 10Rnd_9x19_Compact: 15Rnd_9x19_M9
	{
		count = 10;
		descriptionShort = "$STR_ACR_DSS_10RND_9X19_CZ75";
		displayName = "$STR_ACR_10RND_CZ75";
		picture = "\Ca\Weapons_ACR\Data\UI\picture_compact_mag_CA.paa";
	};
	class 18Rnd_9x19_Phantom: 15Rnd_9x19_M9
	{
		count = 18;
		descriptionShort = "$STR_ACR_DSS_18RND_9X19_CZ75";
		displayName = "$STR_ACR_18RND_CZ75";
		picture = "\Ca\Weapons_ACR\Data\UI\picture_phantom_mag_CA.paa";
		initSpeed = 400;
	};
	class 18Rnd_9x19_PhantomSD: 15Rnd_9x19_M9SD
	{
		count = 18;
		descriptionShort = "$STR_ACR_DSS_18RND_9X19_CZ75SD";
		displayName = "$STR_ACR_18RND_CZ75SD";
		picture = "\Ca\Weapons_ACR\Data\UI\picture_phantom_mag_CA.paa";
		initSpeed = 320;
	};
	class 5Rnd_762x51_M24;
	class 10Rnd_762x51_CZ750: 5Rnd_762x51_M24
	{
		count = 10;
		descriptionShort = "$STR_ACR_DSS_10RND_762X51_CZ750";
		displayName = "$STR_ACR_10RND_CZ750";
		picture = "\Ca\Weapons_ACR\Data\UI\picture_CZ750_mag_CA.paa";
	};
	class 30Rnd_9x19_MP5SD;
	class 30Rnd_9x19_MP5;
	class 20Rnd_9x19_EVOSD: 30Rnd_9x19_MP5SD
	{
		descriptionShort = "$STR_ACR_DSS_20RND_9X19_EVOSD";
		displayName = "$STR_ACR_20RND_9X19_EVOSD";
		picture = "\Ca\Weapons_ACR\evo\data\equip\m_evo_ca.paa";
		count = 20;
	};
	class 20Rnd_9x19_EVO: 30Rnd_9x19_MP5
	{
		descriptionShort = "$STR_ACR_DSS_20RND_9X19_EVO";
		displayName = "$STR_ACR_20RND_9X19_EVO";
		picture = "\Ca\Weapons_ACR\evo\data\equip\m_evo_ca.paa";
		count = 20;
	};
	class PG15V: VehicleMagazine
	{
		reloadAction = "";
		maxLeadSpeed = 200;
		displayName = "$STR_DN_HE";
		nameSound = "heat";
		ammo = "PG15V";
		tracersEvery = 1;
		lastRoundsTracer = 1;
		initSpeed = 665;
		count = 1;
	};
	class 40rnd_PG15V: PG15V
	{
		count = 40;
	};
	class AT3: VehicleMagazine
	{
		displayName = "AT-3 Sagger";
		descriptionShort = "AT-3";
		nameSound = "missiles";
		ammo = "AT3";
		count = 1;
		initSpeed = 120;
		sound[] = {"\ca\Weapons\Data\Sound\RocketLauncher_Shot04",3.162278,1};
		reloadSound[] = {"\ca\Weapons\Data\Sound\missload",0.000316,1};
	};
	class 4rnd_AT3: AT3
	{
		count = 4;
	};
	class 23Rnd_125mmSABOT_T72;
	class 22Rnd_125mmHE_T72;
	class 22Rnd_125mmSABOT_IMI: 23Rnd_125mmSABOT_T72
	{
		ammo = "Sh_125_IMI";
		count = 22;
	};
	class 15Rnd_125mmHE_T72CZ: 22Rnd_125mmHE_T72
	{
		count = 15;
	};
	class 40Rnd_GRAD;
	class 40Rnd_GRAD_ACR: 40Rnd_GRAD
	{
		ammo = "R_GRAD_ACR";
	};
};
class CfgVehicles
{
	class Bag_Base_EP1;
	class Weapon_Bag_Base_EP1: Bag_Base_EP1
	{
		class assembleInfo;
	};
	class RBS70_Bag_ACR: Weapon_Bag_Base_EP1
	{
		expansion = 3;
		scope = 2;
		displayName = "RBS 70 Bag";
		class AssembleInfo: assembleInfo
		{
			displayName = "RBS 70";
			assembleTo = "RBS70_ACR";
		};
	};
	class Reammobox_EP1;
	class CZBasicWeapons_EP1: Reammobox_EP1
	{
		scope = 2;
		accuracy = 1000;
		displayName = "$STR_EP1_DN_CZBasicWeapons_EP1";
		model = "\ca\weapons\AmmoBoxes\USBasicWeapons.p3d";
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_G36SD
			{
				magazine = "30Rnd_556x45_G36SD";
				count = 20;
			};
			class _xx_30Rnd_556x45_G36
			{
				magazine = "30Rnd_556x45_G36";
				count = 200;
			};
			class _xx_30Rnd_556x45_StanagSD
			{
				magazine = "30Rnd_556x45_StanagSD";
				count = 10;
			};
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 100;
			};
			class _xx_100Rnd_762x51_M240
			{
				magazine = "100Rnd_762x51_M240";
				count = 50;
			};
			class _xx_30Rnd_762x39_SA58
			{
				magazine = "30Rnd_762x39_SA58";
				count = 100;
			};
			class _xx_10Rnd_762x54_SVD
			{
				magazine = "10Rnd_762x54_SVD";
				count = 100;
			};
			class _xx_10Rnd_127x99_m107
			{
				magazine = "10Rnd_127x99_m107";
				count = 10;
			};
			class _xx_MAAWS_HEAT
			{
				magazine = "MAAWS_HEAT";
				count = 10;
			};
			class _xx_MAAWS_HEDP
			{
				magazine = "MAAWS_HEDP";
				count = 10;
			};
			class _xx_PG7V
			{
				magazine = "PG7V";
				count = 15;
			};
			class _xx_PG7VR
			{
				magazine = "PG7VR";
				count = 5;
			};
			class _xx_Igla
			{
				magazine = "Igla";
				count = 10;
			};
			class _xx_HandGrenade_West
			{
				magazine = "HandGrenade_West";
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
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 5;
			};
			class _xx_1Rnd_HE_M203
			{
				magazine = "1Rnd_HE_M203";
				count = 30;
			};
			class _xx_1Rnd_Smoke_M203
			{
				magazine = "1Rnd_Smoke_M203";
				count = 2;
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
			class _xx_20Rnd_762x51_B_SCAR
			{
				magazine = "20Rnd_762x51_B_SCAR";
				count = 20;
			};
			class _xx_20Rnd_762x51_SB_SCAR
			{
				magazine = "20Rnd_762x51_SB_SCAR";
				count = 20;
			};
			class _xx_100Rnd_556x45_M249
			{
				magazine = "100Rnd_556x45_M249";
				count = 3;
			};
			class _xx_100Rnd_762x54_PK
			{
				magazine = "100Rnd_762x54_PK";
				count = 100;
			};
			class _xx_18Rnd_9x19_Phantom
			{
				magazine = "18Rnd_9x19_Phantom";
				count = 20;
			};
			class _xx_18Rnd_9x19_PhantomSD
			{
				magazine = "18Rnd_9x19_PhantomSD";
				count = 20;
			};
			class _xx_15Rnd_9x19_M9
			{
				magazine = "15Rnd_9x19_M9";
				count = 20;
			};
			class _xx_15Rnd_9x19_M9SD
			{
				magazine = "15Rnd_9x19_M9SD";
				count = 20;
			};
			class _xx_10Rnd_9x19_Compact
			{
				magazine = "10Rnd_9x19_Compact";
				count = 20;
			};
			class _xx_20Rnd_9x19_EVOSD
			{
				magazine = "20Rnd_9x19_EVOSD";
				count = 20;
			};
			class _xx_20Rnd_9x19_EVO
			{
				magazine = "20Rnd_9x19_EVO";
				count = 20;
			};
			class _xx_10Rnd_762x51_CZ750
			{
				magazine = "10Rnd_762x51_CZ750";
				count = 10;
			};
			class _xx_20Rnd_B_765x17_Ball
			{
				magazine = "20Rnd_B_765x17_Ball";
				count = 100;
			};
			class _xx_10Rnd_B_765x17_Ball
			{
				magazine = "10Rnd_B_765x17_Ball";
				count = 100;
			};
			class _xx_200Rnd_556x45_M249
			{
				magazine = "200Rnd_556x45_M249";
				count = 100;
			};
			class _xx_Laserbatteries
			{
				magazine = "Laserbatteries";
				count = 5;
			};
		};
		class TransportWeapons
		{
			class _xx_M4A1
			{
				weapon = "M4A1";
				count = 4;
			};
			class _xx_M4A3_CCO_EP1
			{
				weapon = "M4A3_CCO_EP1";
				count = 4;
			};
			class _xx_M4A3_RCO_GL_EP1
			{
				weapon = "M4A3_RCO_GL_EP1";
				count = 4;
			};
			class _xx_Sa58P_EP1
			{
				weapon = "Sa58P_EP1";
				count = 4;
			};
			class _xx_Sa58V_EP1
			{
				weapon = "Sa58V_EP1";
				count = 4;
			};
			class _xx_Sa58V_RCO_EP1
			{
				weapon = "Sa58V_RCO_EP1";
				count = 4;
			};
			class _xx_Sa58V_CCO_EP1
			{
				weapon = "Sa58V_CCO_EP1";
				count = 4;
			};
			class _xx_M60A4_EP1
			{
				weapon = "M60A4_EP1";
				count = 2;
			};
			class _xx_m107
			{
				weapon = "m107";
				count = 1;
			};
			class _xx_MAAWS
			{
				weapon = "MAAWS";
				count = 2;
			};
			class _xx_SVD_des_EP1
			{
				weapon = "SVD_des_EP1";
				count = 2;
			};
			class _xx_Sa61_EP1
			{
				weapon = "Sa61_EP1";
				count = 2;
			};
			class _xx_RPG7V
			{
				weapon = "RPG7V";
				count = 2;
			};
			class _xx_CZ_75_P_07_DUTY
			{
				weapon = "CZ_75_P_07_DUTY";
				count = 2;
			};
			class _xx_CZ_75_D_COMPACT
			{
				weapon = "CZ_75_D_COMPACT";
				count = 2;
			};
			class _xx_CZ_75_SP_01_PHANTOM
			{
				weapon = "CZ_75_SP_01_PHANTOM";
				count = 2;
			};
			class _xx_CZ_75_SP_01_PHANTOM_SD
			{
				weapon = "CZ_75_SP_01_PHANTOM_SD";
				count = 2;
			};
			class _xx_Evo_ACR
			{
				weapon = "Evo_ACR";
				count = 2;
			};
			class _xx_Evo_mrad_ACR
			{
				weapon = "Evo_mrad_ACR";
				count = 2;
			};
			class _xx_evo_sd_ACR
			{
				weapon = "evo_sd_ACR";
				count = 2;
			};
			class _xx_UK59_ACR
			{
				weapon = "UK59_ACR";
				count = 2;
			};
			class _xx_SVD
			{
				weapon = "SVD";
				count = 4;
			};
			class _xx_Igla
			{
				weapon = "Igla";
				count = 2;
			};
			class _xx_M249_m145_EP1
			{
				weapon = "M249_m145_EP1";
				count = 2;
			};
			class _xx_CZ_750_S1_ACR
			{
				weapon = "CZ_750_S1_ACR";
				count = 2;
			};
			class _xx_CZ805_A1_ACR
			{
				weapon = "CZ805_A1_ACR";
				count = 2;
			};
			class _xx_CZ805_A1_GL_ACR
			{
				weapon = "CZ805_A1_GL_ACR";
				count = 2;
			};
			class _xx_CZ805_A2_ACR
			{
				weapon = "CZ805_A2_ACR";
				count = 2;
			};
			class _xx_CZ805_A2_SD_ACR
			{
				weapon = "CZ805_A2_SD_ACR";
				count = 2;
			};
			class _xx_CZ805_B_GL_ACR
			{
				weapon = "CZ805_B_GL_ACR";
				count = 2;
			};
			class _xx_LRTV_ACR
			{
				weapon = "LRTV_ACR";
				count = 1;
			};
		};
	};
};
class Mode_FullAuto;
class CfgWeapons
{
	class M40A3;
	class CZ_750_S1_ACR: M40A3
	{
		displayName = "$STR_ACR_DN_CZ750";
		class Library
		{
			libTextDesc = "$STR_ACR_LIB_CZ750";
		};
		picture = "\Ca\Weapons_ACR\Data\UI\picture_CZ750_CA.paa";
		descriptionShort = "$STR_ACR_DSS_CZ750";
		model = "\Ca\Weapons_ACR\CZ750\750.p3d";
		magazines[] = {"10Rnd_762x51_CZ750","5Rnd_762x51_M24"};
		handAnim[] = {};
		dispersion = 0.0001;
	};
	class MP5A5;
	class MP5SD;
	class Evo_ACR: MP5A5
	{
		model = "\CA\Weapons_ACR\evo\evo.p3d";
		picture = "\Ca\Weapons_ACR\evo\data\equip\w_evo_ca.paa";
		displayName = "$STR_ACR_DN_EVO3";
		begin1[] = {"CA\Sounds_ACR\weapons\evo_1",2.5118864,1,1500};
		begin2[] = {"CA\Sounds_ACR\weapons\evo_2",2.5118864,1,1500};
		begin3[] = {"CA\Sounds_ACR\weapons\evo_3",2.5118864,1,1500};
		soundBegin[] = {"begin1",0.3,"begin2",0.3,"begin3",0.4};
		reloadMagazineSound[] = {"CA\Sounds_ACR\weapons\evo_reload",0.031622775,1};
		drySound[] = {"CA\Sounds_ACR\weapons\dry",0.01,1};
		class Library
		{
			libTextDesc = "$STR_ACR_LIB_EVO3";
		};
		descriptionShort = "$STR_ACR_DSS_EVO3";
		magazines[] = {"20Rnd_9x19_EVO","20Rnd_9x19_EVOSD","18Rnd_9x19_Phantom","18Rnd_9x19_PhantomSD","15Rnd_9x19_M9","15Rnd_9x19_M9SD","10Rnd_9x19_Compact"};
	};
	class Evo_mrad_ACR: Evo_ACR
	{
		model = "\CA\Weapons_ACR\evo\evo_mrad.p3d";
		picture = "\Ca\Weapons_ACR\evo\data\equip\w_evo_mrad_ca.paa";
		displayName = "$STR_ACR_DN_EVO3CCO";
		irDistance = 50;
	};
	class evo_sd_ACR: MP5SD
	{
		model = "\CA\Weapons_ACR\evo\evo_sd.p3d";
		picture = "\Ca\Weapons_ACR\evo\data\equip\w_evo_sd_ca.paa";
		displayName = "$STR_ACR_DN_EVO3SD";
		begin1[] = {"CA\Sounds_ACR\weapons\evo_1sd",2.5118864,1,400};
		begin2[] = {"CA\Sounds_ACR\weapons\evo_2sd",2.5118864,1,400};
		begin3[] = {"CA\Sounds_ACR\weapons\evo_3sd",2.5118864,1,400};
		soundBegin[] = {"begin1",0.3,"begin2",0.3,"begin3",0.4};
		reloadMagazineSound[] = {"CA\Sounds_ACR\weapons\evo_reload",0.031622775,1};
		drySound[] = {"CA\Sounds_ACR\weapons\dry",0.01,1};
		magazines[] = {"20Rnd_9x19_EVOSD","18Rnd_9x19_PhantomSD","15Rnd_9x19_M9SD"};
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
	};
	class M197;
	class CannonCore;
	class ZPL_20: M197
	{
		displayName = "$STR_ACR_DN_ZPL20";
		magazines[] = {"210Rnd_20mm_ZPL_20"};
		modes[] = {"LowROF","HighROF","close","short","medium","far"};
		class LowROF: Mode_FullAuto
		{
			showToPlayer = 1;
			displayName = "$STR_ACR_DN_LOW";
			autoFire = 1;
			reloadTime = 0.0594986;
			dispersion = 0.0005;
			sound[] = {"\Ca\sounds\Weapons\cannon\242_single",10.0,1,1200};
			soundContinuous = 0;
			flash = "gunfire";
			flashSize = 0.1;
			recoil = "Empty";
			aiDispersionCoefX = 6;
			aiDispersionCoefY = 6;
			ffMagnitude = 0.5;
			ffFrequency = 11;
			ffCount = 6;
			minRange = 1;
			minRangeProbab = 0.04;
			midRange = 2;
			midRangeProbab = 0.06;
			maxRange = 3;
			maxRangeProbab = 0.004;
		};
		class HighROF: LowROF
		{
			displayName = "$STR_ACR_DN_HIGH";
			reloadTime = 0.00542178;
			minRange = 1;
			minRangeProbab = 0.08;
			midRange = 2;
			midRangeProbab = 0.058;
			maxRange = 3;
			maxRangeProbab = 0.004;
		};
		class close: HighROF
		{
			showToPlayer = 0;
			soundBurst = 0;
			burst = 15;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 200;
			midRangeProbab = 0.58;
			maxRange = 500;
			maxRangeProbab = 0.04;
		};
		class short: close
		{
			burst = 10;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.58;
			maxRange = 800;
			maxRangeProbab = 0.04;
		};
		class medium: LowROF
		{
			showToPlayer = 0;
			burst = 7;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			minRange = 600;
			minRangeProbab = 0.05;
			midRange = 800;
			midRangeProbab = 0.58;
			maxRange = 1000;
			maxRangeProbab = 0.04;
		};
		class far: medium
		{
			burst = 4;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 850;
			minRangeProbab = 0.05;
			midRange = 1050;
			midRangeProbab = 0.4;
			maxRange = 1250;
			maxRangeProbab = 0.01;
		};
	};
	class MissileLauncher;
	class RBS70: MissileLauncher
	{
		displayName = "$STR_ACR_DN_RBS70";
		minRange = 250;
		minRangeProbab = 0.6;
		midRange = 2000;
		midRangeProbab = 0.9;
		maxRange = 8000;
		maxRangeProbab = 0.1;
		aiRateOfFire = 5.0;
		aiRateOfFireDistance = 4000;
		sound[] = {"Ca\Sounds_ACR\weapons\rbs70",10.0,1,1200};
		soundFly[] = {"\ca\Sounds\weapons\cannon\rocket_fly1",10.0,1.5,700};
		reloadTime = 4;
		magazineReloadTime = 5;
		magazines[] = {"1Rnd_Bolide"};
		cursorAim = "\ca\Weapons\Data\clear_empty.paa";
		cursor = "Stinger";
		weaponLockSystem = 1;
		cmImmunity = 0.2;
		weaponLockDelay = 0;
	};
	class AT9Launcher: MissileLauncher
	{
		magazines[] = {"4Rnd_AT9_Mi24P","8Rnd_AT9_Mi24V"};
	};
	class MaverickLauncher;
	class MaverickLauncher_ACR: MaverickLauncher
	{
		magazines[] = {"4Rnd_Maverick_L159","2Rnd_Maverick_A10"};
	};
	class 2A42: CannonCore
	{
		class LowROF;
		class HighROF;
	};
	class ATKMK44_ACR: 2A42
	{
		displayName = "$STR_ACR_DN_ATK";
		magazines[] = {"140Rnd_30mm_ATKMK44_HE_ACR","60Rnd_30mm_ATKMK44_AP_ACR"};
		ballisticsComputer = 1;
		cursor = "Vehicle_W_MG";
		class LowROF: LowROF
		{
			reloadTime = 0.3;
			displayName = "$STR_ACR_DN_LOW";
		};
		class HighROF: HighROF
		{
			reloadTime = 0.15;
			displayName = "$STR_ACR_DN_HIGH";
		};
	};
	class M240_veh;
	class M240_veh_ACR: M240_veh
	{
		magazines[] = {"460Rnd_762x51_M240_ACR"};
		ballisticsComputer = 1;
		canLock = 2;
	};
	class MG3A1_veh_ACR: M240_veh
	{
		magazines[] = {"100Rnd_762x51_M240"};
		displayName = "$STR_ACR_DN_MG3";
		ballisticsComputer = 1;
		canLock = 2;
	};
	class MK19;
	class GMG_veh_ACR: MK19
	{
		displayName = "$STR_ACR_DN_GMG";
		ballisticsComputer = 1;
		canLock = 2;
	};
	class TOWLauncher;
	class SpikeLauncher_ACR: TOWLauncher
	{
		displayName = "$STR_ACR_DN_SPIKE";
		minRange = 10;
		minRangeProbab = 0.6;
		midRange = 1400;
		midRangeProbab = 0.7;
		maxRange = 4000;
		maxRangeProbab = 0.001;
		sound[] = {"\ca\Sounds\weapons\cannon\Javelin1",31.622776,1,1000};
		soundFly[] = {"\ca\Sounds\weapons\cannon\rocket_fly1",25.118862,0.8,700};
		reloadTime = 5;
		canLock = 2;
		magazineReloadTime = 30;
		magazines[] = {"2Rnd_Spike_ACR"};
		aiRateOfFire = 5.0;
		aiRateOfFireDistance = 500;
	};
	class 2A28: CannonCore
	{
		scope = 1;
		displayName = "$STR_ACR_DN_GROM";
		nameSound = "cannon";
		sound[] = {"\ca\Weapons\Data\Sound\gun125",31.622778,1};
		reloadSound[] = {"\ca\Weapons\Data\Sound\gun125reload",1.0,1};
		magazines[] = {"PG15V","40rnd_PG15V"};
		minRange = 5;
		minRangeProbab = 0.9;
		midRange = 700;
		midRangeProbab = 1.0;
		maxRange = 1300;
		maxRangeProbab = 0.4;
		reloadTime = 7;
		magazineReloadTime = 0;
		maxLeadSpeed = 100;
		autoReload = 1;
	};
	class AT3Launcher: MissileLauncher
	{
		scope = 1;
		displayName = "$STR_ACR_DN_AT3";
		nameSound = "atlauncher";
		minRange = 150;
		minRangeProbab = 0.5;
		midRange = 1750;
		midRangeProbab = 1.0;
		maxRange = 2500;
		maxRangeProbab = 0.6;
		sound[] = {"\ca\Weapons\Data\Sound\Javelin1",31.622778,1};
		soundFly[] = {"\ca\Weapons\Data\Sound\rocket_fly1",25.118866,0.8};
		reloadTime = 8;
		magazineReloadTime = 12;
		magazines[] = {"AT3","4Rnd_AT3"};
		aiRateOfFire = 5.0;
		aiRateOfFireDistance = 3500;
	};
	class D81;
	class D81CZ: D81
	{
		magazines[] = {"22Rnd_125mmSABOT_IMI","15Rnd_125mmHE_T72CZ"};
	};
	class GRAD;
	class GRAD_ACR: GRAD
	{
		magazines[] = {"40Rnd_GRAD_ACR"};
	};
	class M9;
	class M9SD;
	class CZ_75_P_07_DUTY: M9
	{
		displayName = "$STR_ACR_DN_CZ75_DUTY";
		class Library
		{
			libTextDesc = "$STR_ACR_LIB_CZ75_DUTY";
		};
		descriptionShort = "$STR_ACR_DSS_CZ75";
		model = "\Ca\Weapons_ACR\Duty\Duty.p3d";
		picture = "\Ca\Weapons_ACR\Data\UI\picture_Duty_CA.paa";
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
	};
	class CZ_75_D_COMPACT: M9
	{
		displayName = "$STR_ACR_DN_CZ75_COMPACT";
		class Library
		{
			libTextDesc = "$STR_ACR_LIB_CZ75_COMPACT";
		};
		descriptionShort = "$STR_ACR_DSS_CZ75";
		model = "\Ca\Weapons_ACR\Compact\Compact.p3d";
		picture = "\Ca\Weapons_ACR\Data\UI\picture_Compact_CA.paa";
		dispersion = 0.0225;
		magazines[] = {"10Rnd_9x19_Compact"};
		begin1[] = {"CA\Sounds_ACR\weapons\pistol2",1.0,1,500};
		soundBegin[] = {"begin1",1};
		reloadMagazineSound[] = {"\CA\Sounds_ACR\weapons\pistol_reload",0.031622775,1};
		drySound[] = {"\CA\Sounds_ACR\weapons\dry",0.01,1};
	};
	class CZ_75_SP_01_PHANTOM: M9
	{
		displayName = "$STR_ACR_DN_CZ75_PHANTOM";
		class Library
		{
			libTextDesc = "$STR_ACR_LIB_CZ75_PHANTOM";
		};
		descriptionShort = "$STR_ACR_DSS_CZ75";
		model = "\Ca\Weapons_ACR\Phantom\Phantom.p3d";
		picture = "\Ca\Weapons_ACR\Data\UI\picture_Phantom_CA.paa";
		irDistance = 50;
		dispersion = 0.018;
		begin1[] = {"CA\Sounds_ACR\weapons\pistol5",1.0,1,500};
		soundBegin[] = {"begin1",1};
		reloadMagazineSound[] = {"\CA\Sounds_ACR\weapons\pistol_reload",0.031622775,1};
		drySound[] = {"\CA\Sounds_ACR\weapons\dry",0.01,1};
		magazines[] = {"18Rnd_9x19_Phantom","18Rnd_9x19_PhantomSD","17Rnd_9x19_glock17","15Rnd_9x19_M9","15Rnd_9x19_M9SD","10Rnd_9x19_Compact"};
	};
	class CZ_75_SP_01_PHANTOM_SD: M9SD
	{
		displayName = "$STR_ACR_DN_CZ75_PHANTOM_SD";
		class Library
		{
			libTextDesc = "$STR_ACR_LIB_CZ75_PHANTOM";
		};
		descriptionShort = "$STR_ACR_DSS_CZ75";
		model = "\Ca\Weapons_ACR\Phantom\Phantom_SD.p3d";
		picture = "\Ca\Weapons_ACR\Data\UI\picture_PhantomSD_CA.paa";
		magazines[] = {"18Rnd_9x19_PhantomSD","15Rnd_9x19_M9SD"};
		dispersion = 0.018;
		begin1[] = {"CA\Sounds_ACR\weapons\pistol5sd",1.0,1,300};
		soundBegin[] = {"begin1",1};
		reloadMagazineSound[] = {"\CA\Sounds_ACR\weapons\pistol_reload",0.031622775,1};
		drySound[] = {"\CA\Sounds_ACR\weapons\dry",0.01,1};
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
	};
};
//};

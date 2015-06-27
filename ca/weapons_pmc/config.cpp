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

//Class WEAPONS_PMC : config.bin{
class CfgPatches
{
	class CAWeapons_PMC
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.54;
		requiredAddons[] = {"CA_PMC","CAWeapons_E","CAWeapons","CAWeapons2"};
	};
};
class CfgAmmo
{
	class TimeBombCore;
	class PMC_ied_v1: TimeBombCore
	{
		hit = 20;
		indirectHit = 18;
		indirectHitRange = 7;
		model = "\ca\Weapons_PMC\IED_V1";
		soundHit[] = {"Ca\sounds\Weapons\explosions\explosion_mega_08",31.622776,1,1500};
		whistleDist = 8;
		simulation = "shotPipeBomb";
		CraterEffects = "GrenadeCrater";
		explosionEffects = "GrenadeExplosion";
		defaultMagazine = "PMC_ied_v1";
	};
	class PMC_ied_v2: TimeBombCore
	{
		hit = 1200;
		indirectHit = 1100;
		indirectHitRange = 4;
		model = "\ca\Weapons_PMC\IED_V2";
		soundHit[] = {"Ca\sounds\Weapons\explosions\explosion_mega_08",56.23413,1,1500};
		whistleDist = 15;
		simulation = "shotPipeBomb";
		defaultMagazine = "PMC_ied_v2";
	};
	class PMC_ied_v3: TimeBombCore
	{
		hit = 20;
		indirectHit = 18;
		indirectHitRange = 7;
		model = "\ca\Weapons_PMC\IED_V3";
		soundHit[] = {"Ca\sounds\Weapons\explosions\explosion_mega_08",177.82794,1,1500};
		whistleDist = 8;
		simulation = "shotPipeBomb";
		CraterEffects = "GrenadeCrater";
		explosionEffects = "GrenadeExplosion";
		defaultMagazine = "PMC_ied_v3";
	};
	class PMC_ied_v4: TimeBombCore
	{
		hit = 1200;
		indirectHit = 1100;
		indirectHitRange = 4;
		model = "\ca\Weapons_PMC\IED_V4";
		soundHit[] = {"Ca\sounds\Weapons\explosions\explosion_mega_08",562.3413,1,1500};
		whistleDist = 15;
		simulation = "shotPipeBomb";
		defaultMagazine = "PMC_ied_v4";
	};
	class BulletBase;
	class B_12Gauge_Pellets: BulletBase
	{
		simulation = "shotSpread";
		hit = 6;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_slug";
		cost = 2;
		typicalSpeed = 400;
		visibleFire = 18;
		audibleFire = 18;
		airFriction = -0.005;
		caliber = 0.5;
	};
	class G_30mm_HE;
	class G_30mm_HE_heli: G_30mm_HE
	{
		simulation = "shotBullet";
	};
	class B_19mm_HE: BulletBase
	{
		soundHit[] = {"Ca\sounds\Weapons\explosions\GP25_explosion",3.1622777,1,1300};
		explosive = 0.5;
		explosionEffects = "ExploAmmoExplosion";
		craterEffects = "ExploAmmoCrater";
		hit = 9;
		indirectHit = 5;
		indirectHitRange = 2;
		visibleFire = 16;
		audibleFire = 18;
		visibleFireTime = 3;
		cost = 20;
		deflecting = 0;
		airFriction = -0.0005;
		fuseDistance = 3;
		typicalSpeed = 400;
	};
	class B_556x45_Ball;
	class B_556x45_Ball_airLock: B_556x45_Ball
	{
		airLock = 1;
	};
};
class CfgMagazines
{
	class TimeBomb;
	class PMC_ied_v1: TimeBomb
	{
		scope = 2;
		displayName = "$STR_PMC_MN_IED";
		picture = "\ca\weapons_PMC\data\UI\ied_v1_ca.paa";
		value = 5;
		ammo = "PMC_ied_v1";
		count = 1;
		initSpeed = 0;
		maxLeadSpeed = 0;
		nameSoundWeapon = "satchelcharge";
		nameSound = "satchelcharge";
		useAction = 1;
		useActionTitle = "$STR_PMC_Put_IED";
		sound[] = {"\ca\Weapons\Data\Sound\gravel_L",0.00031622776,1,10};
		descriptionShort = "$STR_PMC_MN_IED";
		class Library
		{
			libTextDesc = "$STR_PMC_LIB_IED";
		};
	};
	class PMC_ied_v2: PMC_ied_v1
	{
		picture = "\ca\weapons_PMC\data\UI\ied_v2_ca.paa";
		displayName = "$STR_PMC_MN_IED2";
		ammo = "PMC_ied_v2";
	};
	class PMC_ied_v3: PMC_ied_v1
	{
		picture = "\ca\weapons_PMC\data\UI\ied_v3_ca.paa";
		displayName = "$STR_PMC_MN_IED3";
		ammo = "PMC_ied_v3";
	};
	class PMC_ied_v4: PMC_ied_v1
	{
		picture = "\ca\weapons_PMC\data\UI\ied_v4_ca.paa";
		displayName = "$STR_PMC_MN_IED4";
		ammo = "PMC_ied_v4";
	};
	class CA_Magazine;
	class 8Rnd_B_Saiga12_74Slug: CA_Magazine
	{
		displayName = "$STR_PMC_MN_8RND_SAIGA_12K_SLUG";
		displayNameShort = "$STR_PMC_dns_Slug";
	};
	class 8Rnd_B_Beneli_74Slug: CA_Magazine
	{
		displayName = "$STR_PMC_MN_8RND_M1014_SLUG";
		displayNameShort = "$STR_PMC_dns_Slug";
	};
	class 8Rnd_B_Saiga12_Pellets: CA_Magazine
	{
		scope = 2;
		displayName = "$STR_PMC_MN_8RND_SAIGA_12K_PELLETS";
		ammo = "B_12Gauge_Pellets";
		count = 8;
		initSpeed = 396;
		picture = "\CA\weapons\data\equip\M_Saiga12K_CA.paa";
		descriptionShort = "$STR_PMC_DSS_8RND_SAIGA_12K_SLUG";
		displayNameShort = "$STR_PMC_dns_Pellets";
	};
	class 8Rnd_B_Beneli_Pellets: CA_Magazine
	{
		scope = 2;
		displayName = "$STR_PMC_MN_8RND_M1014_PELLETS";
		ammo = "B_12Gauge_Pellets";
		count = 8;
		initSpeed = 396;
		picture = "\CA\weapons\data\equip\M_12gauge_CA.paa";
		descriptionShort = "$STR_PMC_DSS_8RND_M1014_PELLETS";
		displayNameShort = "$STR_PMC_dns_Pellets";
	};
	class 20Rnd_B_AA12_Pellets: CA_Magazine
	{
		scope = 2;
		displayName = "$STR_PMC_MN_20RND_AA12_PELLETS";
		ammo = "B_12Gauge_Pellets";
		count = 20;
		initSpeed = 396;
		picture = "\CA\weapons_pmc\data\ui\m_aa12_ca.paa";
		descriptionShort = "$STR_PMC_DSS_20RND_AA12_PELLETS";
		displayNameShort = "$STR_PMC_dns_Pellets";
	};
	class 20Rnd_B_AA12_74Slug: CA_Magazine
	{
		scope = 2;
		displayName = "$STR_PMC_MN_20RND_AA12_SLUG";
		ammo = "B_12Gauge_74Slug";
		count = 20;
		initSpeed = 396;
		picture = "\CA\weapons_pmc\data\ui\m_aa12slug_ca.paa";
		descriptionShort = "$STR_PMC_DSS_20RND_AA12_SLUG";
		displayNameShort = "$STR_PMC_dns_Slug";
	};
	class 20Rnd_B_AA12_HE: CA_Magazine
	{
		scope = 2;
		displayName = "$STR_PMC_MN_20RND_AA12_HE";
		ammo = "B_19mm_HE";
		count = 20;
		initSpeed = 400;
		picture = "\CA\weapons_pmc\data\ui\m_aa12he_ca.paa";
		descriptionShort = "$STR_PMC_DSS_20RND_AA12_HE";
		displayNameShort = "$STR_EP1_SN_HE";
	};
	class 29Rnd_30mm_AGS30;
	class 29Rnd_30mm_AGS30_heli: 29Rnd_30mm_AGS30
	{
		ammo = "G_30mm_HE_heli";
	};
	class 100Rnd_556x45_BetaCMag;
	class 100Rnd_556x45_BetaCMag_airLock: 100Rnd_556x45_BetaCMag
	{
		ammo = "B_556x45_Ball_airLock";
	};
	class 64Rnd_57mm;
	class 14Rnd_57mm: 64Rnd_57mm
	{
		count = 14;
	};
	class 6Rnd_HE_M203;
	class 6Rnd_HE_M203_heli: 6Rnd_HE_M203
	{
		maxLeadSpeed = 170;
	};
};
class CfgVehicles
{
	class NonStrategic;
	class Land_IED_v1_PMC: NonStrategic
	{
		scope = 2;
		vehicleClass = "IEDs";
		model = "\ca\Weapons_PMC\IED_V1";
		picture = "\ca\weapons_PMC\data\UI\ied_v2_ca.paa";
		mapSize = 4;
		displayName = "$STR_PMC_MN_IED1";
		armor = 75;
		class DestructionEffects{};
	};
	class Land_IED_v2_PMC: Land_IED_v1_PMC
	{
		model = "\ca\Weapons_PMC\IED_V2";
		displayName = "$STR_PMC_MN_IED2";
		armor = 25;
	};
	class Land_IED_v3_PMC: Land_IED_v1_PMC
	{
		model = "\ca\Weapons_PMC\IED_V3";
		displayName = "$STR_PMC_MN_IED3";
		armor = 200;
	};
	class Land_IED_v4_PMC: Land_IED_v3_PMC
	{
		model = "\ca\Weapons_PMC\IED_V3";
		displayName = "$STR_PMC_MN_IED4";
	};
	class Reammobox_EP1;
	class Ammobox_PMC: Reammobox_EP1
	{
		expansion = 4;
		scope = 2;
		displayName = "$STR_PMC_DN_AMMO_CRATE";
		model = "\ca\weapons\AmmoBoxes\USBasicWeapons.p3d";
		accuracy = 1000;
		class TransportWeapons
		{
			class _xx_m8_carbine
			{
				weapon = "m8_carbine";
				count = 4;
			};
			class _xx_m8_carbine_pmc
			{
				weapon = "m8_carbine_pmc";
				count = 4;
			};
			class _xx_m8_carbineGL
			{
				weapon = "m8_carbineGL";
				count = 4;
			};
			class _xx_m8_compact
			{
				weapon = "m8_compact";
				count = 4;
			};
			class _xx_m8_compact_pmc
			{
				weapon = "m8_compact_pmc";
				count = 4;
			};
			class _xx_m8_sharpshooter
			{
				weapon = "m8_sharpshooter";
				count = 2;
			};
			class _xx_m8_SAW
			{
				weapon = "m8_SAW";
				count = 2;
			};
			class _xx_m8_holo_sd
			{
				weapon = "m8_holo_sd";
				count = 2;
			};
			class _xx_m8_tws_sd
			{
				weapon = "m8_tws_sd";
				count = 2;
			};
			class _xx_m8_tws
			{
				weapon = "m8_tws";
				count = 2;
			};
			class _xx_M4A3_CCO_EP1
			{
				weapon = "M4A3_CCO_EP1";
				count = 4;
			};
			class _xx_FN_FAL
			{
				weapon = "FN_FAL";
				count = 4;
			};
			class _xx_M16A2GL
			{
				weapon = "M16A2GL";
				count = 4;
			};
			class _xx_PK
			{
				weapon = "PK";
				count = 2;
			};
			class _xx_KSVK
			{
				weapon = "KSVK";
				count = 2;
			};
			class _xx_M4A1
			{
				weapon = "M4A1";
				count = 4;
			};
			class _xx_AA12_PMC
			{
				weapon = "AA12_PMC";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 200;
			};
			class _xx_100Rnd_556x45_BetaCMag
			{
				magazine = "100Rnd_556x45_BetaCMag";
				count = 50;
			};
			class _xx_100Rnd_762x54_PK
			{
				magazine = "100Rnd_762x54_PK";
				count = 50;
			};
			class _xx_20Rnd_762x51_FNFAL
			{
				magazine = "20Rnd_762x51_FNFAL";
				count = 50;
			};
			class _xx_30Rnd_556x45_StanagSD
			{
				magazine = "30Rnd_556x45_StanagSD";
				count = 20;
			};
			class _xx_5Rnd_127x108_KSVK
			{
				magazine = "5Rnd_127x108_KSVK";
				count = 20;
			};
			class _xx_20Rnd_B_AA12_Pellets
			{
				magazine = "20Rnd_B_AA12_Pellets";
				count = 50;
			};
			class _xx_20Rnd_B_AA12_74Slug
			{
				magazine = "20Rnd_B_AA12_74Slug";
				count = 20;
			};
			class _xx_20Rnd_B_AA12_HE
			{
				magazine = "20Rnd_B_AA12_HE";
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
		};
	};
};
class cfgWeapons
{
	class PKT_MG_Nest;
	class PKT_veh: PKT_MG_Nest
	{
		class manual;
		class close;
		class short;
		class medium;
		class far;
	};
	class PKT_high_AI_dispersion: PKT_veh
	{
		modes[] = {"manual","close","short"};
		aiDispersionCoefY = 1000.0;
		aiDispersionCoefX = 1000.0;
		class manual: manual
		{
			dispersion = 0.00125;
		};
		class close: close
		{
			dispersion = 0.00125;
		};
		class short: short
		{
			dispersion = 0.00125;
			maxRange = 300;
		};
		ballisticsComputer = 2;
	};
	class PKT_high_AI_dispersion_tank: PKT_veh
	{
		aiDispersionCoefY = 100.0;
		aiDispersionCoefX = 100.0;
		class manual: manual
		{
			dispersion = 0.00125;
		};
		class close: close
		{
			dispersion = 0.00125;
		};
		class short: short
		{
			dispersion = 0.00125;
		};
		class medium: medium
		{
			dispersion = 0.00125;
		};
		class far: far
		{
			dispersion = 0.00125;
		};
	};
	class AGS30;
	class AGS30_heli: AGS30
	{
		magazines[] = {"29Rnd_30mm_AGS30_heli"};
	};
	class RocketPods;
	class 57mmLauncher: RocketPods
	{
		magazines[] = {"192Rnd_57mm","128Rnd_57mm","64Rnd_57mm","14Rnd_57mm"};
	};
	class MGun;
	class M32_heli: MGun
	{
		scope = 1;
		displayName = "$STR_EP1_DN_M32_EP1";
		magazines[] = {"6Rnd_HE_M203_heli"};
		reloadTime = 0.5;
		magazineReloadTime = 3;
		cursor = "Vehicle_Grenade_E";
		cursorSize = 4;
		sound[] = {"\Ca\sounds\Weapons\cannon\AGS30_shot1_a",3.1622777,1,1200};
		dispersion = 0.007;
		minRange = 8;
		minRangeProbab = 0.6;
		midRange = 450;
		midRangeProbab = 0.7;
		maxRange = 1500;
		maxRangeProbab = 0.1;
		aiRateOfFire = 2.0;
		aiRateOfFireDistance = 500;
		canLock = 0;
	};
	class Rifle;
	class M1014: Rifle
	{
		fireSpreadAngle = 0.7848246;
		magazines[] = {"8Rnd_B_Beneli_74Slug","8Rnd_B_Beneli_Pellets"};
	};
	class Saiga12K: Rifle
	{
		fireSpreadAngle = 0.7848246;
		magazines[] = {"8Rnd_B_Saiga12_74Slug","8Rnd_B_Saiga12_Pellets"};
	};
	class Default;
	class Put: Default
	{
		muzzles[] = {"TimeBombMuzzle","PipeBombMuzzle","MineMuzzle","MineEMuzzle","BAF_ied_v1_muzzle","BAF_ied_v2_muzzle","BAF_ied_v3_muzzle","BAF_ied_v4_muzzle","PMC_ied_v1_muzzle","PMC_ied_v2_muzzle","PMC_ied_v3_muzzle","PMC_ied_v4_muzzle"};
		class PutMuzzle;
		class PMC_ied_v1_muzzle: PutMuzzle
		{
			displayName = "$STR_PMC_DN_FIRE_IED";
			magazines[] = {"PMC_ied_v1"};
			enableAttack = 1;
		};
		class PMC_ied_v2_muzzle: PMC_ied_v1_muzzle
		{
			magazines[] = {"PMC_ied_v2"};
		};
		class PMC_ied_v3_muzzle: PMC_ied_v1_muzzle
		{
			magazines[] = {"PMC_ied_v3"};
		};
		class PMC_ied_v4_muzzle: PMC_ied_v1_muzzle
		{
			magazines[] = {"PMC_ied_v4"};
		};
	};
};
//};

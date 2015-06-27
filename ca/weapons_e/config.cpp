////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:13:22 2014 : Source 'file' date Fri Oct 31 06:13:22 2014
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

//Class weapons_e : config.bin{
class CfgPatches
{
	class CAWeapons_E
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {"CAweapons","CAweapons2","CA_Modules_ARTY","CAWeapons_Kord","CAWeapons_Warfare_weapons"};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgAmmo
{
	class BulletCore;
	class BulletBase: BulletCore
	{
		class HitEffects
		{
			Hit_Foliage_green = "ImpactLeavesGreen";
		};
	};
	class MissileCore;
	class MissileBase: MissileCore{};
	class GrenadeCore;
	class LaserBombCore;
	class B_9x18_Ball: BulletBase
	{
		hit = 4;
		visibleFire = 15;
		audibleFire = 15;
		airFriction = -0.002751;
		caliber = 0.33;
	};
	class B_9x18_SD: B_9x18_Ball
	{
		hit = 4;
	};
	class B_9x19_Ball: B_9x18_Ball
	{
		visibleFire = 16;
		audibleFire = 16;
	};
	class B_45ACP_Ball: BulletBase
	{
		hit = 5;
		audibleFire = 16;
		airFriction = -0.0013522;
	};
	class B_45ACP_noCartridge_Ball: B_45ACP_Ball
	{
		cartridge = "";
	};
	class B_545x39_Ball: BulletBase
	{
		hit = 7;
	};
	class B_12Gauge_74Slug: BulletBase
	{
		hit = 9;
	};
	class B_765x17_Ball: BulletBase
	{
		cartridge = "FxCartridge_9mm";
		hit = 3;
		indirectHit = 0;
		indirectHitRange = 0;
		typicalSpeed = 300;
		airFriction = -0.00195;
		caliber = 0.25;
		visibleFire = 14;
		audibleFire = 14;
	};
	class B_762x51_noTracer;
	class B_762x51_SB_SCAR: B_762x51_noTracer
	{
		hit = 11;
		typicalSpeed = 320;
		airFriction = -0.00098;
		visibleFire = 0.1;
		audibleFire = 0.1;
		visibleFireTime = 2;
	};
	class ShellBase;
	class Sh_105_HE: ShellBase
	{
		artilleryLock = 1;
		thrust = 0;
		timeToLive = 180;
		airFriction = 0;
		sideAirFriction = 0;
	};
	class Sh_100_HEAT: Sh_105_HE
	{
		hit = 380;
		indirectHit = 10;
		indirectHitRange = 5;
		explosive = 0.7;
		deflecting = 5;
		cost = 500;
		caliber = 8;
		artilleryLock = 0;
		thrust = 210;
		timeToLive = 60;
		airFriction = -0.00045;
		sideAirFriction = 1;
	};
	class Sh_120_HE: ShellBase
	{
		simulation = "shotShell";
		model = "ca\Weapons\shell.p3d";
		tracerScale = 2;
		tracerStartTime = 0.1;
		tracerEndTime = 2.3;
	};
	class Sh_105_HESH: Sh_120_HE
	{
		hit = 300;
		indirectHit = 20;
		indirectHitRange = 10;
		explosive = 0.7;
		deflecting = 5;
		cost = 250;
		caliber = 12;
	};
	class Sh_120_SABOT: ShellBase
	{
		simulation = "shotShell";
		model = "ca\Weapons\shell.p3d";
		tracerScale = 2;
		tracerStartTime = 0.1;
		tracerEndTime = 2.3;
	};
	class Sh_105_APDS: Sh_120_SABOT
	{
		hit = 650;
		indirectHit = 10;
		indirectHitRange = 1;
		deflecting = 15;
		cost = 800;
		caliber = 20;
	};
	class Sh_125_HE: ShellBase
	{
		simulation = "shotShell";
		model = "ca\Weapons\shell.p3d";
		tracerScale = 2;
		tracerStartTime = 0.1;
		tracerEndTime = 2.3;
	};
	class Sh_125_SABOT: ShellBase
	{
		simulation = "shotShell";
		model = "ca\Weapons\shell.p3d";
		tracerScale = 2;
		tracerStartTime = 0.1;
		tracerEndTime = 2.3;
	};
	class Sh_85_HE: ShellBase
	{
		simulation = "shotShell";
		model = "ca\Weapons\shell.p3d";
		tracerScale = 2;
		tracerStartTime = 0.1;
		tracerEndTime = 2.3;
	};
	class Sh_85_AP: ShellBase
	{
		simulation = "shotShell";
		model = "ca\Weapons\shell.p3d";
		tracerScale = 2;
		tracerStartTime = 0.1;
		tracerEndTime = 2.3;
	};
	class R_SMAW_HEDP;
	class R_SMAW_HEAA;
	class R_MEEWS_HEDP: R_SMAW_HEDP
	{
		model = "\ca\weapons\AT1";
	};
	class R_MEEWS_HEAT: R_SMAW_HEAA
	{
		model = "\ca\weapons\AT1";
	};
	class M_Javelin_AT: MissileBase
	{
		weaponLockSystem = "16 + 2";
		cmImmunity = 0.8;
	};
	class M_Stinger_AA: MissileBase
	{
		weaponLockSystem = "16 + 2";
		cmImmunity = 0.8;
	};
	class M_Strela_AA: MissileBase
	{
		weaponLockSystem = "16 + 2";
		cmImmunity = 0.8;
	};
	class M_Sidewinder_AA: MissileBase
	{
		model = "\ca\air_e\AIM9xSidewinder_fly";
		proxyShape = "\ca\air_e\AIM9xSidewinder";
		weaponLockSystem = "16 + 2";
		cmImmunity = 0.8;
	};
	class M_Igla_AA: M_Strela_AA
	{
		weaponLockSystem = "16 + 2";
		cmImmunity = 0.8;
	};
	class M_Vikhr_AT: MissileBase
	{
		weaponLockSystem = "16 + 4";
		cmImmunity = 0.8;
	};
	class M_R73_AA: MissileBase
	{
		model = "\ca\air_e\r73_fly";
		proxyShape = "\ca\air_e\r73_proxy";
		weaponLockSystem = "16 + 2";
		cmImmunity = 0.8;
	};
	class M_9M311_AA: MissileBase
	{
		weaponLockSystem = "16 + 2";
		cmImmunity = 0.8;
	};
	class M_AT2_AT: MissileBase
	{
		model = "\Ca\Air_E\falanga";
		proxyShape = "\Ca\Air_E\falanga";
		weaponLockSystem = "16 + 1";
		cmImmunity = 0.8;
	};
	class M_Hellfire_AT: MissileBase
	{
		model = "\Ca\Air_E\AGM114Hellfire";
		proxyShape = "\Ca\Air_E\AGM114Hellfire_proxy";
		thrustTime = 10.0;
		timeToLive = 30;
		weaponLockSystem = "16 +  4";
		cmImmunity = 0.8;
	};
	class M_Maverick_AT: MissileBase
	{
		model = "\Ca\Air_E\agm65_fly";
		proxyShape = "\Ca\Air_E\agm65";
	};
	class BombCore;
	class Bo_FAB_250: BombCore
	{
		model = "\ca\air_E\fab250";
		proxyShape = "\ca\air_E\fab250";
	};
	class IRStrobeBase: GrenadeCore
	{
		muzzleEffect = "BIS_Effects_Rifle";
		timeToLive = 300;
		explosionTime = 310;
		hit = 5;
		indirectHit = 2;
		indirectHitRange = 0.2;
		cost = 5000;
		irLock = 1;
		simulation = "shotNVGMarker";
		simulationStep = 0.05;
		explosive = 0;
		soundHit[] = {"",0,1};
		deflecting = 60;
	};
	class IRStrobe: IRStrobeBase
	{
		model = "\ca\Weapons\granat";
		deflecting = 30;
		class NVGMarkers
		{
			class Blinking1
			{
				name = "cerveny pozicni blik";
				color[] = {0.01,0.01,0.01,1};
				ambient[] = {0.005,0.005,0.005,1};
				blinking = 1;
				brightness = 0.002;
				onlyInNvg = 1;
				picture = "\ca\weapons_E\Data\icons\ir_strobe_CA.paa";
			};
		};
	};
	class IR_Strobe_Marker: IRStrobe{};
	class Bo_GBU12_LGB: LaserBombCore
	{
		model = "\ca\air_e\gbu12fly";
		proxyShape = "\ca\air_e\gbu12_proxy";
		nvLock = 1;
	};
	class SmokeLauncherAmmo: BulletBase
	{
		muzzleEffect = "BIS_Effects_SmokeLauncher";
		effectsSmoke = "NoDust";
		weaponLockSystem = "1 + 4";
		hit = 1;
		indirectHit = 0;
		indirectHitRange = 0;
		timeToLive = 10.0;
		thrustTime = 10.0;
		airFriction = -0.1;
		simulation = "shotCM";
		model = "\ca\weapons\empty";
		maxControlRange = 50;
		initTime = 2;
	};
	class CMflareAmmo: BulletBase
	{
		hit = 1;
		indirectHit = 0;
		indirectHitRange = 0;
		timeToLive = 4.0;
		thrustTime = 2.0;
		airFriction = -0.01;
		simulation = "shotCM";
		effectsSmoke = "CounterMeasureFlare";
		weaponLockSystem = 2;
		model = "\ca\weapons\empty";
		maxControlRange = -1;
		initTime = 0;
	};
	class CMflare_Chaff_Ammo: CMflareAmmo
	{
		effectsSmoke = "CounterMeasureChaff";
		weaponLockSystem = "2 + 8";
	};
	class ARTY_Sh_Base: ShellBase{};
	class ARTY_Sh_120_HE: ARTY_Sh_Base
	{
		hit = 340;
		indirectHit = 125;
		indirectHitRange = 30;
		typicalSpeed = 800;
		explosive = 0.8;
		cost = 300;
		model = "\ca\Weapons\shell";
		airFriction = -0.00038;
		whistleDist = 60;
	};
	class HelicopterExploSmall;
	class SmallSecondary: HelicopterExploSmall
	{
		hit = 5;
		indirectHit = 1;
		indirectHitRange = 4;
	};
	class RocketBase;
	class R_MLRS: RocketBase
	{
		hit = 380;
		indirectHit = 75;
		indirectHitRange = 15;
		artilleryLock = 1;
		initTime = 0.0;
		timeToLive = 180;
		thrust = 0;
		airFriction = 0.0;
		sideairFriction = 0.0;
	};
	class R_GRAD: RocketBase
	{
		hit = 340;
		indirectHit = 45;
		indirectHitRange = 30;
		artilleryLock = 1;
		initTime = 0.0;
		timeToLive = 180;
		thrust = 0;
		airFriction = 0.0;
		sideairFriction = 0.0;
	};
	class Sh_81_HE: ShellBase
	{
		hit = 160;
		indirectHit = 50;
		indirectHitRange = 20;
		typicalSpeed = 800;
		explosive = 0.8;
		cost = 200;
		timeToLive = 180;
		model = "\ca\Weapons\shell";
		CraterEffects = "ArtyShellCrater";
		ExplosionEffects = "ARTY_ShellExplosionSmall";
		muzzleEffect = "BIS_Effects_HeavyCaliber";
		whistleOnFire = 0;
		whistleDist = 20;
		artilleryLock = 1;
		airFriction = 0.0;
		sideairFriction = 0.0;
		thrust = 0;
	};
	class Sh_81_WP: Sh_81_HE
	{
		hit = 35;
		indirectHit = 30;
		indirectHitRange = 20;
		explosive = 0.8;
		ExplosionEffects = "WPExplosion";
		soundHit[] = {"\ca\weapons\data\sound\explosion\grenade_new1",3.162278,1};
		CraterEffects = "";
	};
	class Sh_81_ILLUM: Sh_81_HE
	{
		hit = 5;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0;
		ExplosionEffects = "";
		soundHit[] = {"",0,1};
		CraterEffects = "";
		whistleDist = 0;
	};
	class Sh_82_HE: ShellBase
	{
		hit = 165;
		indirectHit = 52;
		indirectHitRange = 18;
		typicalSpeed = 800;
		explosive = 0.8;
		cost = 200;
		timeToLive = 180;
		model = "\ca\Weapons\shell";
		CraterEffects = "ArtyShellCrater";
		ExplosionEffects = "ARTY_ShellExplosionSmall";
		muzzleEffect = "BIS_Effects_HeavyCaliber";
		whistleOnFire = 0;
		whistleDist = 18;
		artilleryLock = 1;
		airFriction = 0;
		sideAirFricion = 0;
		thrust = 0;
	};
	class Sh_82_WP: Sh_82_HE
	{
		hit = 35;
		indirectHit = 30;
		indirectHitRange = 20;
		explosive = 0.8;
		ExplosionEffects = "WPExplosion";
		soundHit[] = {"\ca\weapons\data\sound\explosion\grenade_new1",3.162278,1};
		CraterEffects = "";
		whistleDist = 20;
	};
	class Sh_82_ILLUM: Sh_82_HE
	{
		hit = 5;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0;
		ExplosionEffects = "";
		soundHit[] = {"",0,1};
		CraterEffects = "";
		whistleDist = 0;
	};
	class Sh_122_HE: ShellBase
	{
		artilleryLock = 1;
		thrust = 0;
		timeToLive = 180;
		airFriction = 0;
		sideairFriction = 0.0;
	};
	class Sh_122_WP: Sh_122_HE
	{
		hit = 60;
		indirectHit = 50;
		indirectHitRange = 30;
		explosive = 0.8;
		ExplosionEffects = "WPExplosion";
		CraterEffects = "ExploAmmoCrater";
		soundHit[] = {"\ca\weapons\data\sound\explosion\grenade_new1",3.162278,1};
		whistleDist = 60;
	};
	class Sh_122_SADARM: Sh_122_HE
	{
		hit = 20;
		indirectHit = 5;
		indirectHitRange = 20;
		explosive = 0;
		ExplosionEffects = "";
		CraterEffects = "";
		whistleDist = 40;
	};
	class Sh_122_LASER: Sh_122_HE{};
	class Sh_122_ILLUM: Sh_122_HE
	{
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0;
		ExplosionEffects = "";
		soundHit[] = {"",0,1};
		CraterEffects = "";
		whistleDist = 0;
	};
	class Sh_122_SMOKE: Sh_122_HE
	{
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0.1;
		ExplosionEffects = "";
		soundHit[] = {"",0,1};
		CraterEffects = "";
		whistleDist = 0;
	};
	class Sh_105_WP: Sh_105_HE
	{
		hit = 60;
		indirectHit = 50;
		indirectHitRange = 30;
		explosive = 0.8;
		ExplosionEffects = "WPExplosion";
		CraterEffects = "ExploAmmoCrater";
		soundHit[] = {"\ca\weapons\data\sound\explosion\grenade_new1",3.162278,1};
		whistleDist = 60;
	};
	class Sh_105_SADARM: Sh_105_HE
	{
		hit = 20;
		indirectHit = 5;
		indirectHitRange = 20;
		explosive = 0;
		ExplosionEffects = "";
		CraterEffects = "";
		whistleDist = 40;
	};
	class Sh_105_LASER: Sh_105_HE{};
	class Sh_105_ILLUM: Sh_105_HE
	{
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0;
		ExplosionEffects = "";
		soundHit[] = {"",0,1};
		CraterEffects = "";
		whistleDist = 0;
	};
	class Sh_105_SMOKE: Sh_105_HE
	{
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0.1;
		ExplosionEffects = "";
		soundHit[] = {"",0,1};
		CraterEffects = "";
		whistleDist = 0;
	};
	class 120mmHE_M120: ShellBase
	{
		hit = 340;
		indirectHit = 125;
		indirectHitRange = 30;
		typicalSpeed = 800;
		explosive = 0.8;
		cost = 300;
		model = "\ca\Weapons\shell";
		whistleDist = 60;
		artilleryLock = 1;
		thrust = 0;
		timeToLive = 180;
		airFriction = 0.0;
		sideairFriction = 0.0;
	};
};
class CfgMagazines
{
	class VehicleMagazine;
	class CA_Magazine;
	class CA_LauncherMagazine;
	class 8Rnd_9x18_Makarov;
	class 8Rnd_9x18_MakarovSD: 8Rnd_9x18_Makarov
	{
		displayNameShort = "$STR_EP1_SN_SD";
	};
	class 15Rnd_9x19_M9;
	class 15Rnd_9x19_M9SD: 15Rnd_9x19_M9
	{
		displayNameShort = "$STR_EP1_SN_SD";
	};
	class 30Rnd_9x19_MP5SD: CA_Magazine
	{
		displayNameShort = "$STR_EP1_SN_SD";
	};
	class 30Rnd_545x39_AK;
	class 30Rnd_545x39_AKSD: 30Rnd_545x39_AK
	{
		displayNameShort = "$STR_EP1_SN_SD";
	};
	class 30Rnd_556x45_Stanag;
	class 30Rnd_556x45_StanagSD: 30Rnd_556x45_Stanag
	{
		displayNameShort = "$STR_EP1_SN_SD";
	};
	class 30Rnd_556x45_G36;
	class 30Rnd_556x45_G36SD: 30Rnd_556x45_G36
	{
		displayNameShort = "$STR_EP1_SN_SD";
	};
	class 64Rnd_9x19_SD_Bizon: CA_Magazine
	{
		displayNameShort = "$STR_EP1_SN_SD";
	};
	class 1Rnd_HE_M203: CA_Magazine
	{
		displayNameShort = "$STR_EP1_SN_HE";
	};
	class FlareWhite_M203: CA_Magazine
	{
		displayNameShort = "$STR_EP1_SN_WHITE";
		picture = "\Ca\weapons\Data\equip\m_FlareWhite_CA.paa";
	};
	class FlareGreen_M203: FlareWhite_M203
	{
		picture = "\Ca\weapons\Data\equip\m_FlareGreen_CA.paa";
		displayNameShort = "$STR_EP1_SN_GREEN";
	};
	class FlareRed_M203: FlareWhite_M203
	{
		picture = "\Ca\weapons\Data\equip\m_FlareRed_CA.paa";
		displayNameShort = "$STR_EP1_SN_RED";
	};
	class FlareYellow_M203: FlareWhite_M203
	{
		picture = "\Ca\weapons\Data\equip\m_FlareYelow_CA.paa";
		displayNameShort = "$STR_EP1_SN_YELLOW";
	};
	class 1Rnd_Smoke_M203: 1Rnd_HE_M203
	{
		displayNameShort = "$STR_EP1_SN_WHITE";
		picture = "\Ca\weapons_E\Data\icons\m_40mmSmoke_CA.paa";
	};
	class 1Rnd_SmokeRed_M203: 1Rnd_Smoke_M203
	{
		picture = "\Ca\weapons_E\Data\icons\m_40mmSmokeRed_CA.paa";
		displayNameShort = "$STR_EP1_SN_RED";
	};
	class 1Rnd_SmokeGreen_M203: 1Rnd_Smoke_M203
	{
		picture = "\Ca\weapons_E\Data\icons\m_40mmSmokeGreen_CA.paa";
		displayNameShort = "$STR_EP1_SN_GREEN";
	};
	class 1Rnd_SmokeYellow_M203: 1Rnd_Smoke_M203
	{
		picture = "\Ca\weapons_E\Data\icons\m_40mmSmokeYellow_CA.paa";
		displayNameShort = "$STR_EP1_SN_YELLOW";
	};
	class FlareWhite_GP25: CA_Magazine
	{
		displayNameShort = "$STR_EP1_SN_WHITE";
		picture = "\Ca\weapons_E\Data\icons\M_GP25_white_CA.paa";
	};
	class FlareGreen_GP25: FlareWhite_GP25
	{
		picture = "\Ca\weapons_E\Data\icons\M_GP25_green_CA.paa";
		displayNameShort = "$STR_EP1_SN_GREEN";
	};
	class FlareRed_GP25: FlareWhite_GP25
	{
		picture = "\Ca\weapons_E\Data\icons\M_GP25_red_CA.paa";
		displayNameShort = "$STR_EP1_SN_RED";
	};
	class FlareYellow_GP25: FlareWhite_GP25
	{
		picture = "\Ca\weapons_E\Data\icons\M_GP25_yellow_CA.paa";
		displayNameShort = "$STR_EP1_SN_YELLOW";
	};
	class 1Rnd_HE_GP25: CA_Magazine
	{
		displayNameShort = "$STR_EP1_SN_HE";
		picture = "\Ca\weapons_E\Data\icons\M_GP25_HE_CA.paa";
	};
	class 1Rnd_SMOKE_GP25: 1Rnd_HE_GP25
	{
		displayNameShort = "$STR_EP1_SN_WHITE";
		picture = "\Ca\weapons_E\Data\icons\M_GP25_white_CA.paa";
	};
	class 1Rnd_SmokeRed_GP25: 1Rnd_SMOKE_GP25
	{
		picture = "\Ca\weapons_E\Data\icons\M_GP25_red_CA.paa";
		displayNameShort = "$STR_EP1_SN_RED";
	};
	class 1Rnd_SmokeGreen_GP25: 1Rnd_SMOKE_GP25
	{
		picture = "\Ca\weapons_E\Data\icons\M_GP25_green_CA.paa";
		displayNameShort = "$STR_EP1_SN_GREEN";
	};
	class 1Rnd_SmokeYellow_GP25: 1Rnd_SMOKE_GP25
	{
		picture = "\Ca\weapons_E\Data\icons\M_GP25_yellow_CA.paa";
		displayNameShort = "$STR_EP1_SN_YELLOW";
	};
	class HandGrenade;
	class SmokeShell: HandGrenade
	{
		displayNameShort = "$STR_EP1_SN_WHITE";
	};
	class SmokeShellRed: SmokeShell
	{
		displayNameShort = "$STR_EP1_SN_RED";
	};
	class SmokeShellGreen: SmokeShell
	{
		displayNameShort = "$STR_EP1_SN_GREEN";
	};
	class SmokeShellYellow: SmokeShell
	{
		displayNameShort = "$STR_EP1_SN_YELLOW";
	};
	class SmokeShellPurple: SmokeShell
	{
		displayNameShort = "$STR_EP1_SN_PURPLE";
	};
	class SmokeShellBlue: SmokeShell
	{
		picture = "\CA\weapons_e\data\icons\m_m18blue_ca.paa";
		displayNameShort = "$STR_EP1_SN_BLUE";
	};
	class SmokeShellOrange: SmokeShell
	{
		picture = "\CA\weapons_e\data\icons\m_m18orange_ca.paa";
		displayNameShort = "$STR_EP1_SN_ORANGE";
	};
	class PG7V: CA_LauncherMagazine
	{
		displayNameShort = "$STR_EP1_SN_PG7V";
	};
	class PG7VL: PG7V
	{
		displayNameShort = "$STR_EP1_SN_PG7VL";
	};
	class PG7VR: PG7V
	{
		displayNameShort = "$STR_EP1_SN_PG7VR";
	};
	class OG7: CA_LauncherMagazine
	{
		displayNameShort = "$STR_EP1_SN_OG7";
	};
	class PG9_AT: CA_LauncherMagazine
	{
		displayNameShort = "$STR_EP1_SN_AT";
	};
	class OG9_HE: CA_LauncherMagazine
	{
		displayNameShort = "$STR_EP1_SN_HE";
	};
	class SMAW_HEDP: CA_LauncherMagazine
	{
		displayNameShort = "$STR_EP1_SN_HEDP";
	};
	class SMAW_HEAA: SMAW_HEDP
	{
		displayNameShort = "$STR_EP1_SN_HEAA";
	};
	class 1000Rnd_23mm_2A14_HE: VehicleMagazine
	{
		displayNameShort = "$STR_EP1_SN_HE";
	};
	class 1000Rnd_23mm_2A14_AP: 1000Rnd_23mm_2A14_HE
	{
		displayNameShort = "$STR_EP1_SN_AP";
	};
	class 210Rnd_25mm_M242_HEI: VehicleMagazine
	{
		displayNameShort = "$STR_EP1_SN_HE";
	};
	class 210Rnd_25mm_M242_APDS: VehicleMagazine
	{
		displayNameShort = "$STR_EP1_SN_AP";
	};
	class 230Rnd_30mmHE_2A42: VehicleMagazine
	{
		displayNameShort = "$STR_EP1_SN_HE";
	};
	class 230Rnd_30mmAP_2A42: 230Rnd_30mmHE_2A42
	{
		displayNameShort = "$STR_EP1_SN_AP";
	};
	class 250Rnd_30mmHE_2A42;
	class 250Rnd_30mmHE_2A72: 250Rnd_30mmHE_2A42
	{
		displayNameShort = "$STR_EP1_SN_HE";
	};
	class 250Rnd_30mmAP_2A42;
	class 250Rnd_30mmAP_2A72: 250Rnd_30mmAP_2A42
	{
		displayNameShort = "$STR_EP1_SN_AP";
	};
	class 20Rnd_120mmHE_M1A2: VehicleMagazine
	{
		displayNameShort = "$STR_EP1_SN_HE";
	};
	class 20Rnd_120mmSABOT_M1A2: VehicleMagazine
	{
		displayNameShort = "$STR_SN_SABOT";
	};
	class 30Rnd_122mmHE_D30: VehicleMagazine
	{
		initSpeed = 389;
		displayNameShort = "$STR_EP1_SN_FRAG";
	};
	class 22Rnd_125mmHE_T72: VehicleMagazine
	{
		displayNameShort = "$STR_EP1_SN_HE";
	};
	class 23Rnd_125mmSABOT_T72: VehicleMagazine
	{
		displayNameShort = "$STR_EP1_SN_APFSDS";
	};
	class 33Rnd_85mmHE: VehicleMagazine
	{
		displayNameShort = "$STR_EP1_SN_HE";
	};
	class 10Rnd_85mmAP: VehicleMagazine
	{
		displayNameShort = "$STR_EP1_SN_AP";
	};
	class 21Rnd_100mmHEAT_D10: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_EP1_DN_21RND_100MMHEAT_D10";
		ammo = "Sh_100_HEAT";
		count = 21;
		initSpeed = 1045;
		maxLeadSpeed = 100;
		nameSound = "heat";
		displayNameShort = "$STR_SN_HEAT";
	};
	class 30Rnd_105mmHE_M119: VehicleMagazine
	{
		displayNameShort = "$STR_EP1_SN_HE";
		initSpeed = 370;
	};
	class 6RND_105mm_APDS: 30Rnd_105mmHE_M119
	{
		initSpeed = 1100;
		displayName = "$STR_EP1_DN_6RND_105MM_APDS";
		descriptionShort = "$STR_EP1_DSS_6RND_105MM_APDS";
		ammo = "Sh_105_APDS";
		nameSound = "sabot";
		count = 6;
		tracersEvery = 1;
		displayNameShort = "$STR_EP1_SN_AP";
	};
	class 12RND_105mm_HESH: 30Rnd_105mmHE_M119
	{
		initSpeed = 1100;
		displayName = "$STR_EP1_DN_12RND_105mm_HESH";
		descriptionShort = "$STR_EP1_DSS_12RND_105mm_HESH";
		ammo = "Sh_105_HESH";
		count = 12;
		tracersEvery = 1;
		displayNameShort = "$STR_EP1_SN_HE";
	};
	class 8Rnd_Hellfire;
	class 4Rnd_Hellfire: 8Rnd_Hellfire
	{
		count = 4;
	};
	class 10Rnd_B_765x17_Ball: CA_Magazine
	{
		scope = 2;
		count = 10;
		ammo = "B_765x17_Ball";
		type = 16;
		initSpeed = 318;
		displayName = "$STR_EP1_DN_10RND_B_765X17_BALL";
		picture = "\Ca\weapons_e\Data\Icons\m_sa61_CA.paa";
		descriptionShort = "$STR_EP1_DSS_10RND_B_765X17_BALL";
	};
	class 20Rnd_B_765x17_Ball: 10Rnd_B_765x17_Ball
	{
		count = 20;
		displayName = "$STR_EP1_DN_20RND_B_765X17_BALL";
		descriptionShort = "$STR_EP1_DSS_20RND_B_765X17_BALL";
	};
	class 8Rnd_Stinger;
	class 4Rnd_Stinger: 8Rnd_Stinger
	{
		count = 4;
	};
	class 30Rnd_9x19_UZI_SD: CA_Magazine
	{
		scope = 2;
		displayName = "$STR_EP1_DN_30RND_9X19_UZI_SD";
		initSpeed = 320;
		ammo = "B_9x19_SD";
		picture = "\Ca\weapons_e\Data\Icons\m_uzi_CA.paa";
		descriptionShort = "$STR_EP1_DSS_30RND_9X19_UZI_SD";
		type = 16;
		count = 30;
	};
	class 30Rnd_9x19_UZI: CA_Magazine
	{
		scope = 2;
		displayName = "$STR_EP1_DN_30RND_9X19_UZI";
		initSpeed = 400;
		ammo = "B_9x19_Ball";
		picture = "\Ca\weapons_e\Data\Icons\m_uzi_CA.paa";
		descriptionShort = "$STR_EP1_DSS_30RND_9X19_UZI";
		type = 16;
		count = 30;
	};
	class 6Rnd_45ACP: CA_Magazine
	{
		scope = 2;
		displayName = "$STR_EP1_DN_6RND_45ACP";
		ammo = "B_45ACP_noCartridge_Ball";
		count = 6;
		initSpeed = 260;
		picture = "\CA\weapons_e\data\icons\m_revolver_ca.paa";
		type = 16;
		descriptionShort = "$STR_EP1_DSS_6RND_45ACP";
	};
	class 17Rnd_9x19_glock17: CA_Magazine
	{
		scope = 2;
		displayName = "$STR_EP1_DN_17RND_9X19_GLOCK17";
		initSpeed = 360;
		ammo = "B_9x19_Ball";
		picture = "\Ca\weapons_e\Data\icons\m_glock17_CA.paa";
		descriptionShort = "$STR_EP1_DSS_17RND_9X19_GLOCK17";
		count = 17;
		type = 16;
	};
	class MAAWS_HEDP: CA_LauncherMagazine
	{
		scope = 2;
		model = "\Ca\weapons_E\magazine_maaws\magazine_maaws.p3d";
		displayName = "$STR_EP1_DN_MAAWS_HEDP";
		ammo = "R_MEEWS_HEDP";
		reloadAction = "ManActReloadAT";
		picture = "\CA\weapons\Data\Equip\m_M136_ca.paa";
		initSpeed = 250;
		descriptionShort = "$STR_EP1_DSS_MAAWS_HEDP";
		displayNameShort = "$STR_EP1_SN_HEDP";
		type = "3 * 256";
	};
	class MAAWS_HEAT: MAAWS_HEDP
	{
		displayName = "$STR_EP1_DN_MAAWS_HEAT";
		ammo = "R_MEEWS_HEAT";
		descriptionShort = "$STR_EP1_DSS_MAAWS_HEAT";
		displayNameShort = "$STR_SN_HEAT";
		type = "3 * 256";
	};
	class 20Rnd_762x51_B_SCAR: CA_Magazine
	{
		scope = 2;
		displayName = "$STR_EP1_DN_20RND_762X51_B_SCAR";
		descriptionShort = "$STR_EP1_DSS_20RND_762X51_B_SCAR";
		picture = "\ca\weapons_e\data\icons\m_mk17_CA.paa";
		ammo = "B_762x51_noTracer";
		count = 20;
		initSpeed = 900;
	};
	class 20Rnd_762x51_SB_SCAR: CA_Magazine
	{
		scope = 2;
		displayName = "$STR_EP1_DN_20RND_762X51_SB_SCAR";
		descriptionShort = "$STR_EP1_DSS_20RND_762X51_SB_SCAR";
		picture = "\ca\weapons_e\data\icons\m_mk17_CA.paa";
		ammo = "B_762x51_SB_SCAR";
		count = 20;
		initSpeed = 350;
		displayNameShort = "$STR_EP1_SN_SD";
	};
	class 30Rnd_762x39_SA58: CA_Magazine
	{
		scope = 2;
		displayName = "$STR_EP1_DN_30Rnd_762x39_SA58";
		ammo = "B_762x39_Ball";
		count = 30;
		initSpeed = 710;
		picture = "\CA\weapons_E\data\icons\M_SA58_CA.paa";
		descriptionShort = "$STR_EP1_DSS_30Rnd_762x39_SA58";
	};
	class 200Rnd_556x45_M249;
	class 100Rnd_556x45_M249: 200Rnd_556x45_M249
	{
		displayName = "$STR_EP1_DN_100RND_556X45_M249";
		descriptionShort = "$STR_EP1_DSS_100RND_556X45_M249";
		count = 100;
		picture = "\CA\weapons_E\Data\icons\m_m245_CA.paa";
	};
	class IR_Strobe_Target: CA_Magazine
	{
		scope = 2;
		value = 1;
		displayName = "$STR_EP1_DN_IR_Strobe_Target";
		picture = "\CA\weapons_e\data\icons\ir_strobe_CA.paa";
		type = 256;
		ammo = "IRStrobe";
		count = 1;
		initSpeed = 22;
		nameSound = "handgrenade";
		maxLeadSpeed = 7;
		sound[] = {"",0.00031622776,1};
		descriptionShort = "$STR_EP1_DSS_IRSTROBE";
	};
	class IR_Strobe_Marker: IR_Strobe_Target
	{
		displayName = "$STR_EP1_DN_IR_Strobe_Marker";
	};
	class IRStrobe: IR_Strobe_Marker{};
	class 60Rnd_CMFlareMagazine: CA_Magazine
	{
		count = 60;
		ammo = "CMflareAmmo";
		initSpeed = 30;
	};
	class 120Rnd_CMFlareMagazine: 60Rnd_CMFlareMagazine
	{
		count = 120;
	};
	class 240Rnd_CMFlareMagazine: 60Rnd_CMFlareMagazine
	{
		count = 240;
	};
	class 60Rnd_CMFlare_Chaff_Magazine: 60Rnd_CMFlareMagazine
	{
		ammo = "CMflare_Chaff_Ammo";
	};
	class 120Rnd_CMFlare_Chaff_Magazine: 60Rnd_CMFlare_Chaff_Magazine
	{
		count = 120;
	};
	class 240Rnd_CMFlare_Chaff_Magazine: 60Rnd_CMFlare_Chaff_Magazine
	{
		count = 240;
	};
	class SmokeLauncherMag: VehicleMagazine
	{
		nameSound = "smokeshell";
		initSpeed = 20;
	};
	class 6Rnd_HE_M203: 1Rnd_HE_M203
	{
		count = 6;
		displayName = "$STR_EP1_DN_6Rnd_HE_M203";
		descriptionShort = "$STR_EP1_DSS_6Rnd_HE_M203";
		type = "2*		256";
		picture = "\CA\weapons_E\Data\icons\m_6x40mmHP_CA.paa";
	};
	class 6Rnd_FlareWhite_M203: FlareWhite_M203
	{
		count = 6;
		displayName = "$STR_EP1_DN_6Rnd_FlareWhite_M203";
		descriptionShort = "$STR_EP1_DSS_6Rnd_FlareWhite_M203";
		type = "2*		256";
		picture = "\CA\weapons_E\Data\icons\m_6x40mmFlare_CA.paa";
	};
	class 6Rnd_FlareGreen_M203: FlareGreen_M203
	{
		count = 6;
		displayName = "$STR_EP1_DN_6Rnd_FlareGreen_M203";
		descriptionShort = "$STR_EP1_DSS_6Rnd_FlareGreen_M203";
		type = "2*		256";
		picture = "\CA\weapons_E\Data\icons\m_6x40mmFlare_CA.paa";
	};
	class 6Rnd_FlareRed_M203: FlareRed_M203
	{
		count = 6;
		displayName = "$STR_EP1_DN_6Rnd_FlareRed_M203";
		descriptionShort = "$STR_EP1_DSS_6Rnd_FlareRed_M203";
		type = "2*		256";
		picture = "\CA\weapons_E\Data\icons\m_6x40mmFlare_CA.paa";
	};
	class 6Rnd_FlareYellow_M203: FlareYellow_M203
	{
		count = 6;
		displayName = "$STR_EP1_DN_6Rnd_FlareYellow_M203";
		descriptionShort = "$STR_EP1_DSS_6Rnd_FlareYellow_M203";
		type = "2*		256";
		picture = "\CA\weapons_E\Data\icons\m_6x40mmFlare_CA.paa";
	};
	class 6Rnd_Smoke_M203: 1Rnd_Smoke_M203
	{
		count = 6;
		displayName = "$STR_EP1_DN_6Rnd_Smoke_M203";
		descriptionShort = "$STR_EP1_DSS_6Rnd_Smoke_M203";
		type = "2*		256";
		picture = "\CA\weapons_E\Data\icons\m_6x40mmSmoke_CA.paa";
	};
	class 6Rnd_SmokeRed_M203: 1Rnd_SmokeRed_M203
	{
		count = 6;
		displayName = "$STR_EP1_DN_6Rnd_SmokeRed_M203";
		descriptionShort = "$STR_EP1_DSS_6Rnd_SmokeRed_M203";
		type = "2*		256";
		picture = "\CA\weapons_E\Data\icons\m_6x40mmSmoke_CA.paa";
	};
	class 6Rnd_SmokeGreen_M203: 1Rnd_SmokeGreen_M203
	{
		count = 6;
		displayName = "$STR_EP1_DN_6Rnd_SmokeGreen_M203";
		descriptionShort = "$STR_EP1_DSS_6Rnd_SmokeGreen_M203";
		type = "2*		256";
		picture = "\CA\weapons_E\Data\icons\m_6x40mmSmoke_CA.paa";
	};
	class 6Rnd_SmokeYellow_M203: 1Rnd_SmokeYellow_M203
	{
		count = 6;
		displayName = "$STR_EP1_DN_6Rnd_SmokeYellow_M203";
		descriptionShort = "$STR_EP1_DSS_6Rnd_SmokeYellow_M203";
		type = "2*		256";
		picture = "\CA\weapons_E\Data\icons\m_6x40mmSmoke_CA.paa";
	};
	class 24Rnd_120mmHE_M120: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_EP1_DN_24Rnd_120mmHE_M120";
		ammo = "ARTY_Sh_120_HE";
		count = 24;
		initSpeed = 650;
		nameSound = "heat";
		displayNameShort = "$STR_EP1_SN_HE";
	};
	class 24Rnd_120mmHE_M120_02: 24Rnd_120mmHE_M120
	{
		ammo = "120mmHE_M120";
		initSpeed = 266;
	};
	class 40Rnd_80mm: VehicleMagazine
	{
		displayNameShort = "$STR_MN_S8KOM";
	};
	class 40Rnd_S8T: VehicleMagazine
	{
		displayNameShort = "$STR_MN_S8T";
	};
	class AT13: CA_LauncherMagazine
	{
		descriptionShort = "$STR_ep1_dss_metis";
	};
	class 12Rnd_MLRS: VehicleMagazine
	{
		initSpeed = 445;
		maxLeadSpeed = 400;
	};
	class 8Rnd_81mmHE_M252: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_CfgMagazines_ARTY_8Rnd_81mmHE_M252_DN";
		ammo = "Sh_81_HE";
		count = 8;
		initSpeed = 243;
		nameSound = "heat";
	};
	class 8Rnd_81mmWP_M252: 8Rnd_81mmHE_M252
	{
		ammo = "Sh_81_WP";
		displayName = "$STR_CfgMagazines_ARTY_8Rnd_81mmWP_M252_DN";
	};
	class 8Rnd_81mmILLUM_M252: 8Rnd_81mmHE_M252
	{
		ammo = "Sh_81_ILLUM";
		displayName = "$STR_CfgMagazines_ARTY_8Rnd_81mmILLUM_M252_DN";
	};
	class 8Rnd_82mmHE_2B14: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_CfgMagazines_ARTY_8Rnd_82mmHE_2B14_DN";
		ammo = "Sh_82_HE";
		count = 8;
		initSpeed = 200;
		nameSound = "heat";
	};
	class 8Rnd_82mmWP_2B14: 8Rnd_82mmHE_2B14
	{
		ammo = "Sh_82_WP";
		displayName = "$STR_CfgMagazines_ARTY_8Rnd_82mmWP_2B14_DN";
	};
	class 8Rnd_82mmILLUM_2B14: 8Rnd_82mmHE_2B14
	{
		ammo = "Sh_82_ILLUM";
		displayName = "$STR_CfgMagazines_ARTY_8Rnd_82mmILLUM_2B14_DN";
	};
	class 30Rnd_122mmWP_D30: 30Rnd_122mmHE_D30
	{
		displayName = "$STR_CfgMagazines_ARTY_30Rnd_122mmWP_D30_DN";
		ammo = "Sh_122_WP";
	};
	class 30Rnd_122mmSADARM_D30: 30Rnd_122mmHE_D30
	{
		displayName = "$STR_CfgMagazines_ARTY_30Rnd_122mmSADARM_D30_DN";
		ammo = "Sh_122_SADARM";
	};
	class 30Rnd_122mmLASER_D30: 30Rnd_122mmHE_D30
	{
		displayName = "$STR_CfgMagazines_ARTY_30Rnd_122mmLASER_D30_DN";
		ammo = "Sh_122_LASER";
	};
	class 30Rnd_122mmSMOKE_D30: 30Rnd_122mmHE_D30
	{
		displayName = "$STR_CfgMagazines_ARTY_30Rnd_122mmSMOKE_D30_DN";
		ammo = "Sh_122_SMOKE";
	};
	class 30Rnd_122mmILLUM_D30: 30Rnd_122mmHE_D30
	{
		displayName = "$STR_CfgMagazines_ARTY_30Rnd_122mmILLUM_D30_DN";
		ammo = "Sh_122_ILLUM";
	};
	class 30Rnd_105mmWP_M119: 30Rnd_105mmHE_M119
	{
		displayName = "$STR_CfgMagazines_ARTY_30Rnd_105mmWP_M119_DN";
		ammo = "Sh_105_WP";
	};
	class 30Rnd_105mmSADARM_M119: 30Rnd_105mmHE_M119
	{
		displayName = "$STR_CfgMagazines_ARTY_30Rnd_105mmSADARM_M119_DN";
		ammo = "Sh_105_SADARM";
	};
	class 30Rnd_105mmLASER_M119: 30Rnd_105mmHE_M119
	{
		displayName = "$STR_CfgMagazines_ARTY_30Rnd_105mmLASER_M119_DN";
		ammo = "Sh_105_LASER";
	};
	class 30Rnd_105mmSMOKE_M119: 30Rnd_105mmHE_M119
	{
		displayName = "$STR_DN_30Rnd_105mmSMOKE_M119";
		ammo = "Sh_105_SMOKE";
	};
	class 30Rnd_105mmILLUM_M119: 30Rnd_105mmHE_M119
	{
		displayName = "$STR_DN_30Rnd_M119_105mmILLUM";
		ammo = "Sh_105_ILLUM";
	};
	class 40Rnd_GRAD: VehicleMagazine
	{
		initSpeed = 445;
	};
};
class CfgVehicles
{
	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		class Turrets;
		turnCoef = 1;
	};
	class StaticCannon;
	class StaticMortar;
	class StaticGrenadeLauncher;
	class M2StaticMG_base;
	class M119;
	class M119_base: M119
	{
		scope = 0;
		side = 4;
		expansion = 1;
		crew = "Civilian";
		typicalCargo[] = {};
	};
	class DSHKM_base;
	class DSHkM_Mini_TriPod;
	class DSHkM_Mini_TriPod_base: DSHkM_Mini_TriPod
	{
		scope = 0;
		side = 4;
		expansion = 1;
		crew = "Civilian";
		typicalCargo[] = {};
	};
	class AGS_base;
	class D30_base;
	class StaticSEARCHLight;
	class SearchLight;
	class SearchLight_base: SearchLight
	{
		scope = 0;
		side = 4;
		expansion = 1;
		crew = "Civilian";
		typicalCargo[] = {};
	};
	class WarfareBMGNest_PK_Base;
	class WarfareBMGNest_M240_base;
	class ZU23_base;
	class SPG9_base;
	class Igla_AA_pod_East;
	class Igla_AA_pod_base: Igla_AA_pod_East
	{
		scope = 0;
		side = 4;
		expansion = 1;
		crew = "Civilian";
		typicalCargo[] = {};
	};
	class KORD_Base;
	class StaticATWeapon: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class Metis: StaticATWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.078;
					minFov = 0.078;
					maxFov = 0.078;
					visionMode[] = {"Ti"};
					thermalMode[] = {4};
				};
			};
		};
	};
	class Metis_base: Metis
	{
		scope = 0;
		side = 4;
		expansion = 1;
		crew = "Civilian";
		typicalCargo[] = {};
	};
	class 2b14_82mm;
	class 2b14_82mm_base: 2b14_82mm
	{
		scope = 0;
		side = 4;
		expansion = 1;
		crew = "Civilian";
		typicalCargo[] = {};
	};
	class M252;
	class M252_base: M252
	{
		scope = 0;
		side = 4;
		expansion = 1;
		crew = "Civilian";
		typicalCargo[] = {};
	};
	class KORD_high;
	class KORD_high_base: KORD_high
	{
		scope = 0;
		side = 4;
		expansion = 1;
		crew = "Civilian";
		typicalCargo[] = {};
	};
	class M2HD_mini_TriPod;
	class M2HD_mini_TriPod_base: M2HD_mini_TriPod
	{
		scope = 0;
		side = 4;
		expansion = 1;
		crew = "Civilian";
		typicalCargo[] = {};
	};
	class MK19_TriPod;
	class MK19_TriPod_base: MK19_TriPod
	{
		scope = 0;
		side = 4;
		expansion = 1;
		crew = "Civilian";
		typicalCargo[] = {};
	};
	class Stinger_Pod_base;
	class WarfareBMGNest_M240_US_EP1: WarfareBMGNest_M240_base
	{
		expansion = 1;
		scope = 2;
		side = 1;
		faction = "BIS_US";
		crew = "US_Soldier_EP1";
		typicalCargo[] = {"US_Soldier_EP1"};
	};
	class M2StaticMG_US_EP1: M2StaticMG_base
	{
		expansion = 1;
		scope = 2;
		side = 1;
		faction = "BIS_US";
		crew = "US_Soldier_EP1";
		typicalCargo[] = {"US_Soldier_EP1"};
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"M2StaticMG_US_Bag_EP1","Tripod_Bag"};
			displayName = "";
		};
	};
	class M2HD_mini_TriPod_US_EP1: M2HD_mini_TriPod_base
	{
		expansion = 1;
		scope = 2;
		side = 1;
		faction = "BIS_US";
		crew = "US_Soldier_EP1";
		typicalCargo[] = {"US_Soldier_EP1"};
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"M2HD_mini_TriPod_US_Bag_EP1","Tripod_Bag"};
			displayName = "";
		};
	};
	class M119_US_EP1: M119_base
	{
		expansion = 1;
		scope = 2;
		side = 1;
		faction = "BIS_US";
		crew = "US_Soldier_EP1";
		typicalCargo[] = {"US_Soldier_EP1"};
	};
	class SearchLight_US_EP1: SearchLight_base
	{
		expansion = 1;
		scope = 2;
		side = 1;
		faction = "BIS_US";
		crew = "US_Soldier_EP1";
		typicalCargo[] = {"US_Soldier_EP1"};
	};
	class M252_US_EP1: M252_base
	{
		expansion = 1;
		scope = 2;
		side = 1;
		faction = "BIS_US";
		crew = "US_Soldier_EP1";
		typicalCargo[] = {"US_Soldier_EP1"};
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"M252_US_Bag_EP1","Tripod_Bag"};
			displayName = "";
		};
	};
	class Stinger_Pod_US_EP1: Stinger_Pod_base
	{
		expansion = 1;
		scope = 2;
		side = 1;
		faction = "BIS_US";
		crew = "US_Soldier_EP1";
		typicalCargo[] = {"US_Soldier_EP1"};
	};
	class MK19_TriPod_US_EP1: MK19_TriPod_base
	{
		expansion = 1;
		scope = 2;
		side = 1;
		faction = "BIS_US";
		crew = "US_Soldier_EP1";
		typicalCargo[] = {"US_Soldier_EP1"};
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"MK19_TriPod_US_Bag_EP1","Tripod_Bag"};
			displayName = "";
		};
	};
	class TOW_TriPod_Base: StaticATWeapon
	{
		scope = 0;
		side = 1;
		faction = "USMC";
		crew = "USMC_Soldier";
		typicalCargo[] = {"USMC_Soldier"};
		model = "\CA\weapons\tow_static.p3d";
		picture = "\Ca\weapons\data\Ico\tow_static_CA.paa";
		icon = "\Ca\weapons\data\map_ico\icomap_tow_static_CA.paa";
		mapSize = 2.5;
		sound[] = {"Ca\sounds\Weapons\cannon\Javelin1",31.622776,1,1200};
		displayName = "$STR_DN_TOW_TRIPOD";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerOpticsModel = "\ca\weapons_e\TOW_TI";
				gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
				minElev = -10;
				weapons[] = {"TOWLauncherSingle"};
				magazines[] = {"6Rnd_TOW_HMMWV"};
				gunnerAction = "TOW_Gunner";
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.2;
					minFov = 0.025;
					maxFov = 0.2;
					visionMode[] = {"Normal","Ti"};
					thermalMode[] = {0,1};
				};
				class ViewGunner
				{
					initAngleX = 5;
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
	};
	class TOW_TriPod: StaticATWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerOpticsModel = "\ca\weapons_e\TOW_TI";
				gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.2;
					minFov = 0.025;
					maxFov = 0.2;
					visionMode[] = {"Normal","Ti"};
					thermalMode[] = {0,1};
				};
			};
		};
	};
	class TOW_TriPod_US_EP1: TOW_TriPod_Base
	{
		expansion = 1;
		scope = 2;
		side = 1;
		faction = "BIS_US";
		crew = "US_Soldier_EP1";
		typicalCargo[] = {"US_Soldier_EP1"};
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"TOW_TriPod_US_Bag_EP1","Tripod_Bag"};
			displayName = "";
		};
	};
	class AGS_UN_EP1: AGS_base
	{
		expansion = 1;
		scope = 2;
		side = 2;
		faction = "BIS_UN";
		crew = "UN_CDF_Soldier_EP1";
		typicalCargo[] = {"UN_CDF_Soldier_EP1"};
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"AGS_UN_Bag_EP1","Tripod_Bag"};
			displayName = "";
		};
	};
	class SearchLight_UN_EP1: SearchLight_base
	{
		expansion = 1;
		scope = 2;
		side = 2;
		faction = "BIS_UN";
		crew = "UN_CDF_Soldier_EP1";
		typicalCargo[] = {"UN_CDF_Soldier_EP1"};
	};
	class KORD_UN_EP1: KORD_Base
	{
		expansion = 1;
		scope = 2;
		side = 2;
		faction = "BIS_UN";
		crew = "UN_CDF_Soldier_EP1";
		typicalCargo[] = {"UN_CDF_Soldier_EP1"};
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"KORD_UN_Bag_EP1","Tripod_Bag"};
			displayName = "";
		};
	};
	class KORD_high_UN_EP1: KORD_high_base
	{
		expansion = 1;
		scope = 2;
		side = 2;
		faction = "BIS_UN";
		crew = "UN_CDF_Soldier_EP1";
		typicalCargo[] = {"UN_CDF_Soldier_EP1"};
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"KORD_high_UN_Bag_EP1","Tripod_Bag"};
			displayName = "";
		};
	};
	class DSHKM_TK_GUE_EP1: DSHKM_base
	{
		expansion = 1;
		scope = 2;
		side = 2;
		faction = "BIS_TK_GUE";
		crew = "TK_GUE_Soldier_EP1";
		typicalCargo[] = {"TK_GUE_Soldier_EP1"};
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"DSHKM_TK_GUE_Bag_EP1","Tripod_Bag"};
			displayName = "";
		};
	};
	class DSHkM_Mini_TriPod_TK_GUE_EP1: DSHkM_Mini_TriPod_base
	{
		expansion = 1;
		scope = 2;
		side = 2;
		faction = "BIS_TK_GUE";
		crew = "TK_GUE_Soldier_EP1";
		typicalCargo[] = {"TK_GUE_Soldier_EP1"};
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"DSHkM_Mini_TriPod_TK_GUE_Bag_EP1","Tripod_Bag"};
			displayName = "";
		};
	};
	class 2b14_82mm_TK_GUE_EP1: 2b14_82mm_base
	{
		expansion = 1;
		scope = 2;
		side = 2;
		faction = "BIS_TK_GUE";
		crew = "TK_GUE_Soldier_EP1";
		typicalCargo[] = {"TK_GUE_Soldier_EP1"};
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"2b14_82mm_TK_GUE_Bag_EP1","Tripod_Bag"};
			displayName = "";
		};
	};
	class SPG9_TK_GUE_EP1: SPG9_base
	{
		expansion = 1;
		scope = 2;
		side = 2;
		faction = "BIS_TK_GUE";
		crew = "TK_GUE_Soldier_EP1";
		typicalCargo[] = {"TK_GUE_Soldier_EP1"};
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"SPG9_TK_GUE_Bag_EP1","Tripod_Bag"};
			displayName = "";
		};
	};
	class ZU23_TK_GUE_EP1: ZU23_base
	{
		expansion = 1;
		scope = 2;
		side = 2;
		faction = "BIS_TK_GUE";
		crew = "TK_GUE_Soldier_EP1";
		typicalCargo[] = {"TK_GUE_Soldier_EP1"};
	};
	class WarfareBMGNest_PK_TK_GUE_EP1: WarfareBMGNest_PK_Base
	{
		expansion = 1;
		scope = 2;
		side = 2;
		faction = "BIS_TK_GUE";
		crew = "TK_GUE_Soldier_EP1";
		typicalCargo[] = {"TK_GUE_Soldier_EP1"};
	};
	class AGS_TK_GUE_EP1: AGS_base
	{
		expansion = 1;
		scope = 2;
		side = 2;
		faction = "BIS_TK_GUE";
		crew = "TK_GUE_Soldier_EP1";
		typicalCargo[] = {"TK_GUE_Soldier_EP1"};
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"AGS_TK_GUE_Bag_EP1","Tripod_Bag"};
			displayName = "";
		};
	};
	class D30_TK_GUE_EP1: D30_base
	{
		expansion = 1;
		scope = 2;
		side = 2;
		faction = "BIS_TK_GUE";
		crew = "TK_GUE_Soldier_EP1";
		typicalCargo[] = {"TK_GUE_Soldier_EP1"};
	};
	class SearchLight_TK_GUE_EP1: SearchLight_base
	{
		expansion = 1;
		scope = 2;
		side = 2;
		faction = "BIS_TK_GUE";
		crew = "TK_GUE_Soldier_EP1";
		typicalCargo[] = {"TK_GUE_Soldier_EP1"};
	};
	class DSHKM_TK_INS_EP1: DSHKM_base
	{
		expansion = 1;
		scope = 2;
		side = 0;
		faction = "BIS_TK_INS";
		crew = "TK_INS_Soldier_EP1";
		typicalCargo[] = {"TK_INS_Soldier_EP1"};
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"DSHKM_TK_INS_Bag_EP1","Tripod_Bag"};
			displayName = "";
		};
	};
	class DSHkM_Mini_TriPod_TK_INS_EP1: DSHkM_Mini_TriPod_base
	{
		expansion = 1;
		scope = 2;
		side = 0;
		faction = "BIS_TK_INS";
		crew = "TK_INS_Soldier_EP1";
		typicalCargo[] = {"TK_INS_Soldier_EP1"};
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"DSHkM_Mini_TriPod_TK_INS_Bag_EP1","Tripod_Bag"};
			displayName = "";
		};
	};
	class 2b14_82mm_TK_INS_EP1: 2b14_82mm_base
	{
		expansion = 1;
		scope = 2;
		side = 0;
		faction = "BIS_TK_INS";
		crew = "TK_INS_Soldier_EP1";
		typicalCargo[] = {"TK_INS_Soldier_EP1"};
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"2b14_82mm_TK_INS_Bag_EP1","Tripod_Bag"};
			displayName = "";
		};
	};
	class SPG9_TK_INS_EP1: SPG9_base
	{
		expansion = 1;
		scope = 2;
		side = 0;
		faction = "BIS_TK_INS";
		crew = "TK_INS_Soldier_EP1";
		typicalCargo[] = {"TK_INS_Soldier_EP1"};
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"SPG9_TK_INS_Bag_EP1","Tripod_Bag"};
			displayName = "";
		};
	};
	class ZU23_TK_INS_EP1: ZU23_base
	{
		expansion = 1;
		scope = 2;
		side = 0;
		faction = "BIS_TK_INS";
		crew = "TK_INS_Soldier_EP1";
		typicalCargo[] = {"TK_INS_Soldier_EP1"};
	};
	class AGS_TK_INS_EP1: AGS_base
	{
		expansion = 1;
		scope = 2;
		side = 0;
		faction = "BIS_TK_INS";
		crew = "TK_INS_Soldier_EP1";
		typicalCargo[] = {"TK_INS_Soldier_EP1"};
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"AGS_TK_INS_Bag_EP1","Tripod_Bag"};
			displayName = "";
		};
	};
	class D30_TK_INS_EP1: D30_base
	{
		expansion = 1;
		scope = 2;
		side = 0;
		faction = "BIS_TK_INS";
		crew = "TK_INS_Soldier_EP1";
		typicalCargo[] = {"TK_INS_Soldier_EP1"};
	};
	class SearchLight_TK_INS_EP1: SearchLight_base
	{
		expansion = 1;
		scope = 2;
		side = 0;
		faction = "BIS_TK_INS";
		crew = "TK_INS_Soldier_EP1";
		typicalCargo[] = {"TK_INS_Soldier_EP1"};
	};
	class Igla_AA_pod_TK_EP1: Igla_AA_pod_base
	{
		expansion = 1;
		scope = 2;
		side = 0;
		faction = "BIS_TK";
		crew = "TK_Soldier_EP1";
		typicalCargo[] = {"TK_Soldier_EP1"};
	};
	class AGS_TK_EP1: AGS_base
	{
		expansion = 1;
		scope = 2;
		side = 0;
		faction = "BIS_TK";
		crew = "TK_Soldier_EP1";
		typicalCargo[] = {"TK_Soldier_EP1"};
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"AGS_TK_Bag_EP1","Tripod_Bag"};
			displayName = "";
		};
	};
	class D30_TK_EP1: D30_base
	{
		expansion = 1;
		scope = 2;
		side = 0;
		faction = "BIS_TK";
		crew = "TK_Soldier_EP1";
		typicalCargo[] = {"TK_Soldier_EP1"};
	};
	class KORD_TK_EP1: KORD_Base
	{
		expansion = 1;
		scope = 2;
		side = 0;
		faction = "BIS_TK";
		crew = "TK_Soldier_EP1";
		typicalCargo[] = {"TK_Soldier_EP1"};
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"KORD_TK_Bag_EP1","Tripod_Bag"};
			displayName = "";
		};
	};
	class KORD_high_TK_EP1: KORD_high_base
	{
		expansion = 1;
		scope = 2;
		side = 0;
		faction = "BIS_TK";
		crew = "TK_Soldier_EP1";
		typicalCargo[] = {"TK_Soldier_EP1"};
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"KORD_high_TK_Bag_EP1","Tripod_Bag"};
			displayName = "";
		};
	};
	class Metis_TK_EP1: Metis_base
	{
		expansion = 1;
		scope = 2;
		side = 0;
		faction = "BIS_TK";
		crew = "TK_Soldier_EP1";
		typicalCargo[] = {"TK_Soldier_EP1"};
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"Metis_TK_Bag_EP1","Tripod_Bag"};
			displayName = "";
		};
	};
	class 2b14_82mm_TK_EP1: 2b14_82mm_base
	{
		expansion = 1;
		scope = 2;
		side = 0;
		faction = "BIS_TK";
		crew = "TK_Soldier_EP1";
		typicalCargo[] = {"TK_Soldier_EP1"};
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"2b14_82mm_TK_Bag_EP1","Tripod_Bag"};
			displayName = "";
		};
	};
	class SearchLight_TK_EP1: SearchLight_base
	{
		expansion = 1;
		scope = 2;
		side = 0;
		faction = "BIS_TK";
		crew = "TK_Soldier_EP1";
		typicalCargo[] = {"TK_Soldier_EP1"};
	};
	class ZU23_TK_EP1: ZU23_base
	{
		expansion = 1;
		scope = 2;
		side = 0;
		faction = "BIS_TK";
		crew = "TK_Soldier_EP1";
		typicalCargo[] = {"TK_Soldier_EP1"};
	};
	class WarfareBMGNest_PK_TK_EP1: WarfareBMGNest_PK_Base
	{
		expansion = 1;
		scope = 2;
		side = 0;
		faction = "BIS_TK";
		crew = "TK_Soldier_EP1";
		typicalCargo[] = {"TK_Soldier_EP1"};
	};
	class AGS_CZ_EP1: AGS_base
	{
		expansion = 1;
		scope = 2;
		side = 1;
		faction = "BIS_CZ";
		crew = "CZ_Soldier_DES_EP1";
		typicalCargo[] = {"CZ_Soldier_DES_EP1"};
	};
	class 2b14_82mm_CZ_EP1: 2b14_82mm_base
	{
		expansion = 1;
		scope = 2;
		side = 1;
		faction = "BIS_CZ";
		crew = "CZ_Soldier_DES_EP1";
		typicalCargo[] = {"CZ_Soldier_DES_EP1"};
	};
	class DSHKM_CZ_EP1: DSHKM_base
	{
		expansion = 1;
		scope = 2;
		side = 1;
		faction = "BIS_CZ";
		crew = "CZ_Soldier_DES_EP1";
		typicalCargo[] = {"CZ_Soldier_DES_EP1"};
	};
	class All;
	class NVTarget: All
	{
		icon = "\ca\data\data\Unknown_object";
		displayName = "$STR_DN_LASER_TARGET";
		model = "\ca\Weapons\laserTgt.p3d";
		picture = "\ca\Weapons\data\ico\i_regular_CA.paa";
		weapons[] = {"M2"};
		magazines[] = {};
		threat[] = {0.2,0.5,1.0};
		simulation = "nvmarker";
		type = 1;
		cost = 1e+015;
		armor = 500;
		class NVGMarker
		{
			name = "pozicni blik";
			diffuse[] = {0.01,0.01,0.01,1};
			ambient[] = {0.005,0.005,0.005,1};
			brightness = 0.02;
			blinking = 1;
			onlyInNvg = 1;
		};
	};
	class NVG_TargetBase: NVTarget{};
	class NVG_TargetCBase: NVG_TargetBase
	{
		scope = 1;
		side = 3;
	};
	class NVG_TargetWBase: NVG_TargetBase
	{
		scope = 1;
		side = 0;
	};
	class NVG_TargetEBase: NVG_TargetBase
	{
		scope = 1;
		side = 1;
	};
	class NVG_TargetC: NVG_TargetCBase
	{
		expansion = 1;
		scope = 1;
		accuracy = 1000;
		weapons[] = {};
		magazines[] = {};
		model = "\ca\weapons\empty.p3d";
		simulation = "nvmarker";
		nvTarget = 1;
		destrType = "DestructEngine";
	};
	class NVG_TargetW: NVG_TargetWBase
	{
		expansion = 1;
		scope = 1;
		accuracy = 1000;
		weapons[] = {};
		magazines[] = {};
		model = "\ca\weapons\empty.p3d";
		simulation = "nvmarker";
		nvTarget = 1;
		destrType = "DestructEngine";
	};
	class NVG_TargetE: NVG_TargetEBase
	{
		expansion = 1;
		scope = 1;
		accuracy = 1000;
		weapons[] = {};
		magazines[] = {};
		model = "\ca\weapons\empty.p3d";
		simulation = "nvmarker";
		nvTarget = 1;
		destrType = "DestructEngine";
	};
	class ReammoBox;
	class ThingEffect;
	class FxCartridge: ThingEffect
	{
		model = "\ca\weapons_E\nabojnice";
		htMin = 30;
		htMax = 60;
		afMax = 90;
		mfMax = 90;
		mFact = 1;
		tBody = 100;
	};
	class FxCartridge_Small: ThingEffect
	{
		model = "\ca\weapons_E\nabojnice_small";
		htMin = 30;
		htMax = 60;
		afMax = 90;
		mfMax = 90;
		mFact = 1;
		tBody = 100;
	};
	class FxCartridge_9mm: FxCartridge_Small{};
	class FxCartridge_556: FxCartridge{};
	class FxCartridge_762: FxCartridge
	{
		model = "\ca\weapons_E\nabojnice_762";
	};
	class FxCartridge_127: FxCartridge
	{
		model = "\ca\weapons_E\nabojnice_127";
	};
	class FxCartridge_slug: FxCartridge
	{
		model = "\ca\weapons_E\nabojnice_slug";
	};
};
class cfgWeapons
{
	class CannonCore;
	class 2A42: CannonCore
	{
		class LowROF: Mode_FullAuto
		{
			displayName = "$STR_EP1_DN_2A42_LowROF";
		};
		class HighROF: LowROF
		{
			displayName = "$STR_EP1_DN_2A42_HighROF";
		};
	};
	class M256: CannonCore
	{
		weaponLockSystem = 4;
	};
	class D81: CannonCore
	{
		weaponLockSystem = 4;
	};
	class RocketPods;
	class FFARLauncher: RocketPods
	{
		displayName = "$STR_EP1_DN_FFARLauncher";
		class Far_AI: RocketPods
		{
			displayName = "$STR_EP1_DN_FFARLauncher";
		};
		class Burst: RocketPods
		{
			displayName = "$STR_EP1_DN_FFARLauncher";
		};
	};
	class M68: M256
	{
		displayName = "$STR_EP1_DN_M68";
		magazines[] = {"6RND_105mm_APDS","12Rnd_105mm_HESH"};
	};
	class D10: CannonCore
	{
		scope = 1;
		displayName = "$STR_DN_D30";
		nameSound = "cannon";
		cursor = "Cannon";
		cursorAim = "\ca\Weapons\Data\clear_empty";
		cursorSize = 1;
		sound[] = {"\ca\Sounds\weapons\cannon\gun120",316.22775,1,1500};
		reloadSound[] = {"\ca\Sounds\weapons\cannon\gun120reload",1.0,1,20};
		magazines[] = {"21Rnd_100mmHEAT_D10","22Rnd_100mm_HE_2A70","8Rnd_AT10_BMP3"};
		minRange = 10;
		minRangeProbab = 0.7;
		midRange = 1800;
		midRangeProbab = 0.7;
		maxRange = 3000;
		maxRangeProbab = 0.1;
		reloadTime = 6;
		magazineReloadTime = 2;
		autoReload = 1;
		canLock = 0;
	};
	class MGun;
	class PKT: MGun
	{
		class manual: MGun
		{
			displayName = "";
		};
	};
	class PKTBC: PKT
	{
		ballisticsComputer = 2;
	};
	class PKT_MG_Nest;
	class PKT_veh: PKT_MG_Nest
	{
		class manual;
		class close;
		class short;
		class medium;
		class far;
	};
	class PKTBC_veh: PKT_veh
	{
		ballisticsComputer = 2;
	};
	class SGMT: PKT_veh
	{
		displayName = "$STR_EP1_DN_SGMT";
		magazines[] = {"250Rnd_762x54_PKT_T90","200Rnd_762x54_PKT"};
		class manual: manual
		{
			reloadTime = 0.1;
		};
		class close: close
		{
			reloadTime = 0.1;
		};
		class short: short
		{
			reloadTime = 0.1;
		};
		class medium: medium
		{
			reloadTime = 0.1;
		};
		class far: far
		{
			reloadTime = 0.1;
		};
	};
	class LauncherCore;
	class MissileLauncher: LauncherCore
	{
		weaponLockDelay = 0.5;
	};
	class HellfireLauncher: MissileLauncher
	{
		WeaponLockSystem = 4;
		cmImmunity = 0.8;
	};
	class HellfireLauncher_AH6: HellfireLauncher
	{
		magazines[] = {"4Rnd_Hellfire"};
	};
	class StingerLaucher: MissileLauncher
	{
		weaponLockSystem = 1;
		cmImmunity = 0.8;
		weaponLockDelay = 3;
	};
	class SidewinderLaucher: MissileLauncher
	{
		weaponLockSystem = 8;
		cmImmunity = 0.8;
		weaponLockDelay = 2;
	};
	class StingerLaucher_4x: StingerLaucher
	{
		magazines[] = {"4Rnd_Stinger"};
	};
	class Igla_twice: MissileLauncher
	{
		weaponLockDelay = 3;
	};
	class SmokeLauncher: MGun
	{
		simulation = "cmlauncher";
		showToPlayer = 1;
		minRange = 0;
		maxRange = 10000;
		displayName = "$STR_EP1_DN_SmokeLauncher";
	};
	class CMFlareLauncher: SmokeLauncher
	{
		scope = 2;
		displayName = "$STR_DN_FlareLauncher";
		magazines[] = {"60Rnd_CMFlareMagazine","120Rnd_CMFlareMagazine","240Rnd_CMFlareMagazine","60Rnd_CMFlare_Chaff_Magazine","120Rnd_CMFlare_Chaff_Magazine","240Rnd_CMFlare_Chaff_Magazine"};
		magazineReloadTime = 0.2;
		simulation = "cmlauncher";
		modes[] = {"Single","Burst","AIBurst"};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.2;
			burst = 1;
			sound[] = {"\Ca\sounds\Weapons\cannon\grenadelauncher_1",0.31622776,1,300};
			showToPlayer = 1;
			multiplier = 2;
			minRange = 0;
			maxRange = 200;
			soundBurst = 0;
		};
		class Burst: Mode_Burst
		{
			reloadTime = 1;
			burst = 5;
			sound[] = {"\Ca\sounds\Weapons\cannon\grenadelauncher_1",0.31622776,1,300};
			showToPlayer = 1;
			multiplier = 2;
			minRange = 0;
			maxRange = 0;
			soundBurst = 0;
		};
		class AIBurst: Burst
		{
			burst = 2;
			showToPlayer = 0;
			minRange = 200;
			maxRange = 10000;
			soundBurst = 0;
		};
	};
	class AZP85: CannonCore
	{
		weaponLockSystem = 8;
		displayname = "$STR_EP1_DN_AZP85";
		class manual: CannonCore
		{
			displayname = "$STR_EP1_DN_AZP85";
		};
	};
	class M242: CannonCore
	{
		class LowROF;
		class HighROF: LowROF
		{
			displayname = "";
		};
		class close: HighROF
		{
			burst = 4;
			aiRateOfFire = 0;
			aiRateOfFireDistance = 50;
		};
		class short: close
		{
			burst = 3;
			aiRateOfFire = 0;
			aiRateOfFireDistance = 300;
		};
		class medium: LowROF
		{
			burst = 3;
			aiRateOfFire = 0;
			aiRateOfFireDistance = 600;
		};
		class far: medium
		{
			burst = 2;
			aiRateOfFire = 0;
			aiRateOfFireDistance = 1000;
		};
	};
	class M242BC: M242
	{
		ballisticsComputer = 1;
		canLock = 2;
	};
	class M240_veh;
	class M240BC_veh: M240_veh
	{
		ballisticsComputer = 2;
	};
	class M2: MGun
	{
		displayName = "$STR_EP1_DN_M2";
		class manual: MGun
		{
			displayName = "";
		};
	};
	class M2BC: M2
	{
		ballisticsComputer = 2;
	};
	class Mk19: MGun
	{
		displayName = "$STR_EP1_DN_Mk19";
	};
	class MK19BC: Mk19
	{
		ballisticsComputer = 2;
	};
	class M3P: M2
	{
		ballisticsComputer = 1;
		canLock = 2;
	};
	class 2A14: CannonCore
	{
		displayName = "$STR_EP1_DN_2A14";
		class manual: CannonCore
		{
			displayName = "$STR_EP1_DN_2A14";
		};
	};
	class M134: MGun
	{
		displayName = "$STR_EP1_DN_M134";
		class LowROF: Mode_FullAuto
		{
			displayName = "$STR_EP1_DN_M134_LowROF";
			begin1[] = {"Ca\Sounds_E\Weapons_E\Minigun\minigun_m134-low3",1.7782794,1,1300};
			soundBegin[] = {"begin1",1};
		};
		class HighROF: LowROF
		{
			displayName = "$STR_EP1_DN_M134_HighROF";
			begin1[] = {"Ca\Sounds_E\Weapons_E\Minigun\minigun_m134-high3",1.7782794,1,1300};
			soundBegin[] = {"begin1",1};
		};
	};
	class 57mmLauncher: RocketPods
	{
		displayName = "$STR_EP1_DN_57mmLauncher";
		class Far_AI: RocketPods
		{
			displayName = "$STR_EP1_DN_57mmLauncher";
		};
		class Burst: RocketPods
		{
			displayName = "$STR_EP1_DN_57mmLauncher";
		};
	};
	class 80mmLauncher: RocketPods
	{
		displayName = "$STR_EP1_DN_80mmLauncher";
		class Far_AI: RocketPods
		{
			displayName = "$STR_EP1_DN_80mmLauncher";
		};
		class Burst: RocketPods
		{
			displayName = "$STR_EP1_DN_80mmLauncher";
		};
	};
	class YakB: MGun
	{
		displayName = "$STR_EP1_DN_YakB";
	};
	class GRAD: RocketPods
	{
		displayName = "$STR_EP1_DN_GRAD";
		modes[] = {"Single","Burst"};
		class Single: Mode_SemiAuto
		{
			sound[] = {"\ca\Sounds\weapons\cannon\RocketLauncher_Shot04_A",10.0,1,1100};
			drySound[] = {"\ca\Sounds\weapons\cannon\Javelin_dry_v1",0.0001,1,10};
			soundFly[] = {"\ca\Sounds\weapons\cannon\rocket_fly1",10.0,1.5,700};
			reloadTime = 0.8;
			minRange = 0;
			midRange = 0;
			maxRange = 0;
			artilleryDispersion = 0.35;
		};
		class Burst: Mode_Burst
		{
			burst = 5;
			sound[] = {"\ca\Sounds\weapons\cannon\RocketLauncher_Shot04_A",10.0,1,1100};
			drySound[] = {"\ca\Sounds\weapons\cannon\Javelin_dry_v1",0.0001,1,10};
			soundFly[] = {"\ca\Sounds\weapons\cannon\rocket_fly1",10.0,1.5,700};
			soundBurst = 0;
			reloadTime = 0.8;
			minRange = 1570;
			minRangeProbab = 0.5;
			midRange = 11113;
			midRangeProbab = 0.7;
			maxRange = 26847;
			maxRangeProbab = 0.5;
			artilleryDispersion = 0.35;
		};
	};
	class GAU8: CannonCore
	{
		class manual: CannonCore
		{
			burst = 15;
			sound[] = {"\Ca\Sounds_E\Weapons_E\Gatling\gatling_500ms",3.1622777,1,1100};
			soundContinuous = 0;
			soundBurst = 1;
		};
		class close: manual
		{
			burst = 15;
			sound[] = {"\Ca\Sounds_E\Weapons_E\Gatling\gatling_500ms",3.1622777,1,1100};
			soundContinuous = 0;
			soundBurst = 1;
		};
		class short: close
		{
			burst = 10;
			sound[] = {"\ca\Sounds_E\Weapons_E\Gatling\gatling_250ms",3.1622777,1,1100};
			soundContinuous = 0;
			soundBurst = 1;
		};
		class medium: close
		{
			burst = 7;
			sound[] = {"\ca\Sounds_E\Weapons_E\Gatling\gatling_250ms",3.1622777,1,1100};
			soundContinuous = 0;
			soundBurst = 1;
		};
		class far: close
		{
			burst = 4;
			sound[] = {"\ca\Sounds_E\Weapons_E\Gatling\gatling_250ms",3.1622777,1,1100};
			soundContinuous = 0;
			soundBurst = 1;
		};
	};
	class KPVT: MGun
	{
		displayName = "$STR_EP1_DN_KPVT";
		class manual: MGun
		{
			displayName = "";
		};
	};
	class MLRS: RocketPods
	{
		modes[] = {"Single1","Single2","Single3","Burst1","Burst2","Burst3"};
		class Single1: Mode_SemiAuto
		{
			displayName = "Semi (close)";
			reloadTime = 0.8;
			burst = 1;
			sound[] = {"\ca\Sounds\weapons\cannon\RocketLauncher_Shot04_A",10.0,1,1100};
			soundFly[] = {"\ca\Sounds\weapons\cannon\rocket_fly1",10.0,1.5,700};
			minRange = 0;
			midRange = 0;
			maxRange = 0;
			artilleryDispersion = 0.01;
			artilleryCharge = 0.48;
		};
		class Single2: Single1
		{
			displayName = "Semi (medium)";
			artilleryCharge = 0.69;
		};
		class Single3: Single1
		{
			displayName = "Semi (far)";
			artilleryCharge = 1;
		};
		class Burst1: Mode_Burst
		{
			showToPlayer = 0;
			reloadTime = 0.8;
			burst = 6;
			sound[] = {"\ca\Sounds\weapons\cannon\RocketLauncher_Shot04_A",10.0,1,1100};
			soundFly[] = {"\ca\Sounds\weapons\cannon\rocket_fly1",10.0,1.5,700};
			soundBurst = 0;
			minRange = 1570;
			minRangeProbab = 0.5;
			midRange = 3345;
			midRangeProbab = 0.7;
			maxRange = 6186;
			maxRangeProbab = 0.5;
			artilleryDispersion = 0.01;
			artilleryCharge = 0.48;
		};
		class Burst2: Burst1
		{
			showToPlayer = 0;
			displayName = "Burst (medium)";
			minRange = 3243;
			minRangeProbab = 0.4;
			midRange = 6911;
			midRangeProbab = 0.6;
			maxRange = 12781;
			maxRangeProbab = 0.4;
			artilleryCharge = 0.69;
		};
		class Burst3: Burst1
		{
			showToPlayer = 0;
			displayName = "Burst (far)";
			minRange = 6813;
			minRangeProbab = 0.3;
			midRange = 14517;
			midRangeProbab = 0.4;
			maxRange = 26847;
			maxRangeProbab = 0.3;
			artilleryCharge = 1;
		};
	};
	class M197: CannonCore
	{
		ballisticsComputer = 1;
	};
	class D30: CannonCore
	{
		magazines[] = {"30Rnd_122mmHE_D30","30Rnd_122mmWP_D30","30Rnd_122mmSADARM_D30","30Rnd_122mmLASER_D30","30Rnd_122mmSMOKE_D30","30Rnd_122mmILLUM_D30","ARTY_30Rnd_122mmHE_D30","ARTY_30Rnd_122mmWP_D30","ARTY_30Rnd_122mmSADARM_D30","ARTY_30Rnd_122mmLASER_D30","ARTY_30Rnd_122mmSMOKE_D30","ARTY_30Rnd_122mmILLUM_D30"};
		modes[] = {"Single1","Single2","Single3","Burst1","Burst2","Burst3"};
		class Single1: Mode_SemiAuto
		{
			displayName = "Semi (close)";
			sound[] = {"\ca\Sounds\weapons\cannon\gun120",316.22775,1,1500};
			reloadSound[] = {"\ca\Sounds\weapons\cannon\gun120reload",1.0,1,20};
			reloadTime = 8;
			minRange = 0;
			midRange = 0;
			maxRange = 0;
			artilleryDispersion = 0.2;
			artilleryCharge = 0.67;
		};
		class Single2: Single1
		{
			displayName = "Semi (medium)";
			artilleryCharge = 0.83;
		};
		class Single3: Single1
		{
			displayName = "Semi (far)";
			artilleryCharge = 1;
		};
		class Burst1: Mode_Burst
		{
			showToPlayer = 0;
			displayName = "Burst (close)";
			burst = 6;
			sound[] = {"\ca\Sounds\weapons\cannon\gun120",316.22775,1,1500};
			reloadSound[] = {"\ca\Sounds\weapons\cannon\gun120reload",1.0,1,20};
			soundBurst = 0;
			reloadTime = 6;
			minRange = 200;
			minRangeProbab = 0.5;
			midRange = 3550;
			midRangeProbab = 0.7;
			maxRange = 9177;
			maxRangeProbab = 0.5;
			artilleryDispersion = 0.3;
			artilleryCharge = 0.67;
		};
		class Burst2: Burst1
		{
			showToPlayer = 0;
			displayName = "Burst (medium)";
			minRange = 5092;
			minRangeProbab = 0.4;
			midRange = 8500;
			midRangeProbab = 0.6;
			maxRange = 13700;
			maxRangeProbab = 0.4;
			artilleryCharge = 0.83;
		};
		class Burst3: Burst1
		{
			showToPlayer = 0;
			displayName = "Burst (far)";
			minRange = 7600;
			minRangeProbab = 0.3;
			midRange = 12250;
			midRangeProbab = 0.4;
			maxRange = 19285;
			maxRangeProbab = 0.3;
			artilleryCharge = 1;
		};
	};
	class M252: CannonCore
	{
		magazines[] = {"8Rnd_81mmHE_M252","8Rnd_81mmWP_M252","8Rnd_81mmILLUM_M252","ARTY_8Rnd_81mmHE_M252","ARTY_8Rnd_81mmWP_M252","ARTY_8Rnd_81mmILLUM_M252"};
		modes[] = {"Single1","Single2","Single3","Burst1","Burst2","Burst3"};
		class Single1: Mode_SemiAuto
		{
			displayName = "Semi (close)";
			sound[] = {"\Ca\sounds\Weapons\cannon\mortar1_fire",22.387213,1,500};
			reloadSound[] = {"\Ca\sounds\Weapons\cannon\mortar_load",1.1220185,1,12};
			soundServo[] = {"",0.0001,1.0};
			reloadTime = 4;
			minRange = 0;
			midRange = 0;
			maxRange = 0;
			artilleryDispersion = 0.7;
			artilleryCharge = 0.27;
		};
		class Single2: Single1
		{
			displayName = "Semi (medium)";
			artilleryCharge = 0.6;
		};
		class Single3: Single1
		{
			displayName = "Semi (far)";
			artilleryCharge = 1;
		};
		class Burst1: Mode_Burst
		{
			showToPlayer = 0;
			displayName = "Burst (close)";
			burst = 4;
			sound[] = {"\Ca\sounds\Weapons\cannon\mortar1_fire",22.387213,1,500};
			reloadSound[] = {"\Ca\sounds\Weapons\cannon\mortar_load",1.1220185,1,12};
			soundServo[] = {"",0.0001,1.0};
			soundBurst = 0;
			reloadTime = 3;
			minRange = 59;
			minRangeProbab = 0.5;
			midRange = 257;
			midRangeProbab = 0.7;
			maxRange = 583;
			maxRangeProbab = 0.5;
			artilleryDispersion = 0.93;
			artilleryCharge = 0.27;
		};
		class Burst2: Burst1
		{
			showToPlayer = 0;
			displayName = "Burst (medium)";
			minRange = 290;
			minRangeProbab = 0.4;
			midRange = 1272;
			midRangeProbab = 0.6;
			maxRange = 2882;
			maxRangeProbab = 0.4;
			artilleryCharge = 0.6;
		};
		class Burst3: Burst1
		{
			showToPlayer = 0;
			displayName = "Burst (far)";
			minRange = 803;
			minRangeProbab = 0.3;
			midRange = 3532;
			midRangeProbab = 0.4;
			maxRange = 8005;
			maxRangeProbab = 0.3;
			artilleryCharge = 1;
		};
	};
	class M120: M252
	{
		displayname = "$STR_EP1_DN_M120";
		magazines[] = {"24Rnd_120mmHE_M120","24Rnd_120mmHE_M120_02"};
		class Single1: Single1
		{
			displayName = "Semi (close)";
			artilleryDispersion = 0.7;
			artilleryCharge = 0.4;
		};
		class Single2: Single1
		{
			displayName = "Semi (medium)";
			artilleryCharge = 0.75;
		};
		class Single3: Single1
		{
			displayName = "Semi (far)";
			artilleryCharge = 1;
		};
		class Burst1: Burst1
		{
			showToPlayer = 0;
			displayName = "Burst (close)";
			minRange = 155;
			minRangeProbab = 0.5;
			midRange = 678;
			midRangeProbab = 0.7;
			maxRange = 1535;
			maxRangeProbab = 0.5;
			artilleryDispersion = 0.93;
			artilleryCharge = 0.4;
		};
		class Burst2: Burst1
		{
			showToPlayer = 0;
			displayName = "Burst (medium)";
			minRange = 543;
			minRangeProbab = 0.4;
			midRange = 2381;
			midRangeProbab = 0.6;
			maxRange = 5396;
			maxRangeProbab = 0.4;
			artilleryCharge = 0.75;
		};
		class Burst3: Burst1
		{
			showToPlayer = 0;
			displayName = "Burst (far)";
			minRange = 957;
			minRangeProbab = 0.3;
			midRange = 4201;
			midRangeProbab = 0.4;
			maxRange = 9521;
			maxRangeProbab = 0.3;
			artilleryCharge = 1;
		};
	};
	class 2B14: CannonCore
	{
		magazines[] = {"8Rnd_82mmHE_2B14","8Rnd_82mmWP_2B14","8Rnd_82mmILLUM_2B14","ARTY_8Rnd_82mmHE_2B14","ARTY_8Rnd_82mmWP_2B14","ARTY_8Rnd_82mmILLUM_2B14"};
		modes[] = {"Single1","Single2","Single3","Burst1","Burst2","Burst3"};
		class Single1: Mode_SemiAuto
		{
			displayName = "Semi (close)";
			sound[] = {"\Ca\sounds\Weapons\cannon\mortar2_fire",22.387213,1,500};
			reloadSound[] = {"\Ca\sounds\Weapons\cannon\mortar_load",1.1220185,1,12};
			soundServo[] = {"",0.0001,1.0};
			reloadTime = 4;
			minRange = 0;
			midRange = 0;
			maxRange = 0;
			artilleryDispersion = 0.7;
			artilleryCharge = 0.35;
		};
		class Single2: Single1
		{
			displayName = "Semi (medium)";
			artilleryCharge = 0.7;
		};
		class Single3: Single1
		{
			displayName = "Semi (far)";
			artilleryCharge = 1;
		};
		class Burst1: Mode_Burst
		{
			showToPlayer = 0;
			displayName = "Burst (close)";
			burst = 4;
			sound[] = {"\Ca\sounds\Weapons\cannon\mortar2_fire",22.387213,1,500};
			reloadSound[] = {"\Ca\sounds\Weapons\cannon\mortar_load",1.1220185,1,12};
			soundServo[] = {"",0.0001,1.0};
			soundBurst = 0;
			reloadTime = 3;
			minRange = 60;
			minRangeProbab = 0.5;
			midRange = 290;
			midRangeProbab = 0.7;
			maxRange = 665;
			maxRangeProbab = 0.5;
			artilleryDispersion = 0.93;
			artilleryCharge = 0.35;
		};
		class Burst2: Burst1
		{
			showToPlayer = 0;
			displayName = "Burst (medium)";
			minRange = 230;
			minRangeProbab = 0.4;
			midRange = 1175;
			midRangeProbab = 0.6;
			maxRange = 2660;
			maxRangeProbab = 0.4;
			artilleryCharge = 0.7;
		};
		class Burst3: Burst1
		{
			showToPlayer = 0;
			displayName = "Burst (far)";
			minRange = 540;
			minRangeProbab = 0.3;
			midRange = 2355;
			midRangeProbab = 0.4;
			maxRange = 5500;
			maxRangeProbab = 0.3;
			artilleryCharge = 1;
		};
	};
	class M119: CannonCore
	{
		magazines[] = {"30Rnd_105mmHE_M119","30Rnd_105mmWP_M119","30Rnd_105mmSADARM_M119","30Rnd_105mmLASER_M119","30Rnd_105mmSMOKE_M119","30Rnd_105mmILLUM_M119","ARTY_30Rnd_105mmHE_M119","ARTY_30Rnd_105mmWP_M119","ARTY_30Rnd_105mmSADARM_M119","ARTY_30Rnd_105mmLASER_M119","ARTY_30Rnd_105mmSMOKE_M119","ARTY_30Rnd_105mmILLUM_M119"};
		modes[] = {"Single1","Single2","Single3","Burst1","Burst2","Burst3"};
		class Single1: Mode_SemiAuto
		{
			displayName = "Semi (close)";
			sound[] = {"\ca\Sounds\weapons\cannon\gun120",316.22775,1,1500};
			reloadSound[] = {"\ca\Sounds\weapons\cannon\gun120reload",1.0,1,20};
			reloadTime = 8;
			minRange = 0;
			midRange = 0;
			maxRange = 0;
			artilleryDispersion = 0.2;
			artilleryCharge = 0.67;
		};
		class Single2: Single1
		{
			displayName = "Semi (medium)";
			artilleryCharge = 0.81;
		};
		class Single3: Single1
		{
			displayName = "Semi (far)";
			artilleryCharge = 1;
		};
		class Burst1: Mode_Burst
		{
			showToPlayer = 0;
			burst = 6;
			sound[] = {"\ca\Sounds\weapons\cannon\gun120",316.22775,1,1500};
			reloadSound[] = {"\ca\Sounds\weapons\cannon\gun120reload",1.0,1,20};
			soundBurst = 0;
			reloadTime = 6;
			minRange = 200;
			minRangeProbab = 0.5;
			midRange = 3225;
			midRangeProbab = 0.7;
			maxRange = 8312;
			maxRangeProbab = 0.5;
			artilleryDispersion = 0.3;
			artilleryCharge = 0.67;
		};
		class Burst2: Burst1
		{
			showToPlayer = 0;
			displayName = "Burst (medium)";
			minRange = 4543;
			minRangeProbab = 0.4;
			midRange = 7525;
			midRangeProbab = 0.6;
			maxRange = 12170;
			maxRangeProbab = 0.4;
			artilleryCharge = 0.81;
		};
		class Burst3: Burst1
		{
			showToPlayer = 0;
			displayName = "Burst (far)";
			minRange = 6930;
			minRangeProbab = 0.3;
			midRange = 11500;
			midRangeProbab = 0.4;
			maxRange = 18620;
			maxRangeProbab = 0.3;
			artilleryCharge = 1;
		};
	};
	class PistolCore;
	class Pistol: PistolCore
	{
		htMin = 1;
		htMax = 300;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
	};
	class Sa61_EP1: Pistol
	{
		scope = 2;
		model = "\ca\weapons_E\sa61\sa61";
		modelOptics = "-";
		picture = "\ca\weapons_E\Data\icons\sa61_CA.paa";
		magazines[] = {"20Rnd_B_765x17_Ball","10Rnd_B_765x17_Ball"};
		displayName = "$STR_EP1_DN_Sa61_EP1";
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_Sa61";
		};
		descriptionShort = "$STR_EP1_DSS_Sa61_EP1";
		autoFire = 1;
		optics = 1;
		distanceZoomMin = 50;
		distanceZoomMax = 50;
		reloadMagazineSound[] = {"Ca\Sounds_E\Weapons_E\SA61\SA61_reload_1",1.0,1,30};
		drySound[] = {"\ca\Weapons\Data\Sound\T33_dry_v1",1.0,1,15};
		ffCount = 1;
		aiRateOfFire = 0.5;
		aiRateOfFireDistance = 50;
		modes[] = {"Single","FullAuto"};
		class Single: Mode_SemiAuto
		{
			begin1[] = {"Ca\Sounds_E\Weapons_E\SA61\SA61_single_1",1.4125376,1,1000};
			soundBegin[] = {"begin1",1};
			reloadTime = 0.075;
			recoil = "recoil_single_pistol_2outof3";
			recoilProne = "recoil_single_pistol_prone_2outof3";
			dispersion = 0.018;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 30;
			midRangeProbab = 0.3;
			maxRange = 50;
			maxRangeProbab = 0.04;
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[] = {"Ca\Sounds_E\Weapons_E\SA61\SA61_single_1",1.4125376,1,1000};
			soundBegin[] = {"begin1",1};
			soundBurst = 0;
			reloadTime = 0.075;
			recoil = "recoil_single_pistol_3outof3";
			recoilProne = "recoil_single_pistol_prone_3outof3";
			dispersion = 0.018;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 30;
			midRangeProbab = 0.3;
			maxRange = 50;
			maxRangeProbab = 0.02;
		};
	};
	class UZI_EP1: Pistol
	{
		scope = 2;
		model = "\ca\weapons_E\UZI\micro_uzi";
		modelOptics = "-";
		picture = "\ca\weapons_E\Data\icons\uzi_CA.paa";
		reloadMagazineSound[] = {"Ca\Sounds_E\Weapons_E\SA61\SA61_reload_1",1.0,1.1,30};
		magazines[] = {"30Rnd_9x19_UZI","30Rnd_9x19_UZI_SD","17Rnd_9x19_glock17","30Rnd_9x19_MP5","30Rnd_9x19_MP5SD","15Rnd_9x19_M9","15Rnd_9x19_M9SD"};
		displayName = "$STR_EP1_DN_UZI_EP1";
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_UZI";
		};
		descriptionShort = "$STR_EP1_DSS_UZI_EP1";
		autoFire = 1;
		distanceZoomMin = 50;
		distanceZoomMax = 50;
		modes[] = {"Single","FullAuto"};
		class Single: Mode_SemiAuto
		{
			begin1[] = {"Ca\Sounds_E\Weapons_E\UZI\UZI_single_1",1.0,1,800};
			soundBegin[] = {"begin1",1};
			reloadTime = 0.075;
			recoil = "recoil_single_pistol_2outof3";
			recoilProne = "recoil_single_pistol_prone_2outof3";
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 30;
			midRangeProbab = 0.3;
			maxRange = 50;
			maxRangeProbab = 0.04;
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[] = {"Ca\Sounds_E\Weapons_E\UZI\UZI_single_1",1.0,1,800};
			soundBegin[] = {"begin1",1};
			soundBurst = 0;
			reloadTime = 0.075;
			recoil = "recoil_single_pistol_3outof3";
			recoilProne = "recoil_single_pistol_prone_3outof3";
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 30;
			midRangeProbab = 0.3;
			maxRange = 50;
			maxRangeProbab = 0.02;
		};
	};
	class UZI_SD_EP1: UZI_EP1
	{
		scope = 2;
		model = "\ca\weapons_E\UZI\micro_uzi_SD";
		modelOptics = "-";
		picture = "\ca\weapons_E\Data\icons\uziSD_CA.paa";
		fireLightDuration = 0.0;
		fireLightIntensity = 0.0;
		magazines[] = {"30Rnd_9x19_UZI_SD","30Rnd_9x19_MP5SD","15Rnd_9x19_M9SD"};
		displayName = "$STR_EP1_DN_UZI_SD_EP1";
		class Single: Single
		{
			begin1[] = {"ca\sounds_E\weapons_E\UZI\UZI_SD",2.5118864,1,60};
			soundBegin[] = {"begin1",1};
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 15;
			midRangeProbab = 0.3;
			maxRange = 20;
			maxRangeProbab = 0.04;
		};
		class FullAuto: FullAuto
		{
			begin1[] = {"ca\sounds_E\weapons_E\UZI\UZI_SD",2.5118864,1,60};
			soundBegin[] = {"begin1",1};
			recoil = "recoil_single_pistol_2outof3";
			recoilProne = "recoil_single_pistol_prone_2outof3";
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 15;
			midRangeProbab = 0.3;
			maxRange = 20;
			maxRangeProbab = 0.02;
		};
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_UZI_SD";
		};
		descriptionShort = "$STR_EP1_DSS_UZI_SD_EP1";
	};
	class revolver_EP1: Pistol
	{
		recoil = "recoil_single_pistol_2outof3";
		recoilProne = "recoil_single_pistol_prone_2outof3";
		distanceZoomMin = 50;
		distanceZoomMax = 50;
		scope = 2;
		model = "\ca\weapons_E\revolver\revolver";
		modelOptics = "-";
		picture = "\ca\weapons_E\Data\icons\revolver_CA.paa";
		begin1[] = {"Ca\Sounds_E\Weapons_E\revolver45\revolver45_1",1.0,1,800};
		begin2[] = {"Ca\Sounds_E\Weapons_E\revolver45\revolver45_2",1.0,1,800};
		soundBegin[] = {"begin1",0.5,"begin2",0.5};
		reloadMagazineSound[] = {"Ca\Sounds_E\Weapons_E\revolver45\reload",1.0,1,20};
		reloadTime = 0.5;
		magazines[] = {"6Rnd_45ACP"};
		displayName = "$STR_EP1_DN_revolver_EP1";
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_revolver";
		};
		descriptionShort = "$STR_EP1_DSS_revolver_EP1";
		autoFire = 0;
		minRange = 0;
		minRangeProbab = 0.1;
		midRange = 30;
		midRangeProbab = 0.3;
		maxRange = 50;
		maxRangeProbab = 0.04;
	};
	class revolver_gold_EP1: revolver_EP1
	{
		model = "\ca\weapons_E\revolver\revolver_gold";
		picture = "\ca\weapons_E\Data\icons\revolverGold_CA.paa";
		magazines[] = {"6Rnd_45ACP"};
		displayName = "$STR_EP1_DN_revolver_gold_EP1";
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_revolver_gold";
		};
		descriptionShort = "$STR_EP1_DSS_revolver_gold_EP1";
	};
	class glock17_EP1: Pistol
	{
		scope = 2;
		model = "\ca\weapons_E\glock17\glock17";
		modelOptics = "-";
		picture = "\ca\weapons_E\Data\icons\glock17_CA.paa";
		magazines[] = {"17Rnd_9x19_glock17","15Rnd_9x19_M9","15Rnd_9x19_M9SD"};
		displayName = "$STR_EP1_DN_glock17_EP1";
		begin1[] = {"Ca\Sounds_E\Weapons_E\Glock17\glock17_1",1.0,1,800};
		begin2[] = {"Ca\Sounds_E\Weapons_E\Glock17\glock17_2",1.0,1,800};
		soundBegin[] = {"begin1",0.5,"begin2",0.5};
		reloadMagazineSound[] = {"Ca\Sounds_E\Weapons_E\Glock17\reload1",1.0,1,20};
		recoil = "recoil_single_pistol_2outof3";
		recoilProne = "recoil_single_pistol_prone_2outof3";
		distanceZoomMin = 50;
		distanceZoomMax = 50;
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_glock17";
		};
		descriptionShort = "$STR_EP1_DSS_glock17_EP1";
		autoFire = 0;
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
		minRange = 0;
		minRangeProbab = 0.1;
		midRange = 30;
		midRangeProbab = 0.3;
		maxRange = 50;
		maxRangeProbab = 0.04;
	};
	class M9;
	class Colt1911: M9
	{
		magazines[] = {"7Rnd_45ACP_1911"};
	};
	class RifleCore;
	class GrenadeLauncher;
	class Rifle: RifleCore
	{
		irLaserPos = "laser pos";
		irLaserEnd = "laser dir";
		irDistance = 0;
		htMin = 1;
		htMax = 600;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		class M203Muzzle: GrenadeLauncher
		{
			displayName = "$STR_EP1_DN_Rifle_M203Muzzle";
		};
	};
	class M16_base: Rifle
	{
		class Single;
		class FullAuto;
	};
	class M60A4_EP1: Rifle
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
		tMin = 1;
		htMax = 600;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		scope = 2;
		model = "\ca\weapons_e\m60e4\m60e4";
		picture = "\ca\weapons_E\Data\icons\m60e4_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons_E\Data\Anim\M60E4.rtm"};
		UiPicture = "\CA\weapons\Data\Ico\i_mg_CA.paa";
		displayName = "$STR_EP1_DN_M60A4_EP1";
		cursor = "MGCursor";
		cursoraim = "\ca\Weapons\Data\clear_empty";
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100,200,300,400,500,600,700,800};
		discreteDistanceInitIndex = 2;
		modes[] = {"manual","close","short","medium","far"};
		class manual: Mode_FullAuto
		{
			recoil = "recoil_auto_machinegun_8outof10";
			recoilProne = "recoil_auto_machinegun_prone_5outof10";
			dispersion = 0.0008;
			begin1[] = {"Ca\Sounds_E\Weapons_E\M60e4\m60e4_single1",3.1622777,1,1500};
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
			reloadTime = 0.086;
			displayName = "";
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
		reloadMagazineSound[] = {"Ca\Sounds_E\Weapons_E\M60e4\M60e4_reload",0.056234132,1,25};
		magazines[] = {"100Rnd_762x51_M240"};
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_M60A4";
		};
		descriptionShort = "$STR_EP1_DSS_M60A4_EP1";
	};
	class Mk_48;
	class Mk_48_DES_EP1: Mk_48
	{
		htMin = 1;
		htMax = 600;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		scope = 2;
		model = "\ca\weapons_E\mk48\Mk48_desert";
		displayname = "$STR_EP1_DN_Mk_48_DES_EP1";
		picture = "\ca\weapons_E\Data\icons\Mk48_desert_CA.paa";
		irDistance = 100;
	};
	class M249: Rifle
	{
		class close;
		class short;
		class medium;
		htMin = 1;
		htMax = 600;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		class manual: Mode_FullAuto
		{
			displayName = "";
		};
	};
	class M249_EP1: M249
	{
		scope = 2;
		model = "\CA\weapons_E\M249\m249_iron";
		picture = "\CA\weapons_e\data\icons\m249_iron_ca.paa";
		displayName = "$STR_DN_M249";
		irDistance = 100;
		magazines[] = {"100Rnd_556x45_M249","200Rnd_556x45_M249","30Rnd_556x45_Stanag","20Rnd_556x45_Stanag","30Rnd_556x45_StanagSD","100Rnd_556x45_BetaCMag","30Rnd_556x45_G36","30Rnd_556x45_G36SD"};
	};
	class M249_TWS_EP1: M249
	{
		scope = 2;
		model = "\ca\weapons_E\M249\m249_TWS";
		displayname = "$STR_EP1_DN_M249_TWS_EP1";
		handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons_E\SCAR\Data\Anim\SCAR.rtm"};
		picture = "\ca\weapons_E\Data\icons\m249_TWS_CA.paa";
		UiPicture = "\CA\weapons\Data\Ico\i_mg_CA.paa";
		modelOptics = "\Ca\weapons_E\MWTS_optic.p3d";
		opticsPPEffects[] = {};
		visionMode[] = {"Ti"};
		thermalMode[] = {0,1};
		opticsZoomMax = 0.15;
		distanceZoomMax = 120;
		opticsZoomMin = 0.0498;
		distanceZoomMin = 400;
		opticsZoomInit = 0.15;
		class OpticsModes
		{
			class MTWS
			{
				opticsID = 1;
				useModelOptics = 1;
				opticsPPEffects[] = {};
				memoryPointCamera = "eye";
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				opticsZoomMax = 0.15;
				distanceZoomMax = 120;
				opticsZoomMin = 0.0498;
				distanceZoomMin = 400;
				opticsZoomInit = 0.15;
				cameraDir = "";
				visionMode[] = {"Ti"};
				thermalMode[] = {0,1};
				discretefov[] = {0.15,0.0498};
				discreteInitIndex = 0;
				discreteDistance[] = {120,400};
				discreteDistanceInitIndex = 1;
			};
		};
		irDistance = 100;
		magazines[] = {"100Rnd_556x45_M249","200Rnd_556x45_M249","30Rnd_556x45_Stanag","20Rnd_556x45_Stanag","30Rnd_556x45_StanagSD","100Rnd_556x45_BetaCMag","30Rnd_556x45_G36","30Rnd_556x45_G36SD"};
	};
	class M249_m145_EP1: M249
	{
		scope = 2;
		model = "\ca\weapons_E\M249\m249_m145.p3d";
		displayname = "$STR_EP1_DN_M249_m145_EP1";
		handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons_E\SCAR\Data\Anim\SCAR.rtm"};
		picture = "\CA\weapons_e\data\icons\m249_m145_ca.paa";
		modelOptics = "\Ca\weapons_E\M249\M145.p3d";
		visionMode[] = {"Normal"};
		opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
		opticsZoomMax = 0.0732;
		distanceZoomMax = 300;
		opticsZoomMin = 0.0732;
		distanceZoomMin = 300;
		opticsZoomInit = 0.0732;
		irDistance = 100;
		magazines[] = {"100Rnd_556x45_M249","200Rnd_556x45_M249","30Rnd_556x45_Stanag","20Rnd_556x45_Stanag","30Rnd_556x45_StanagSD","100Rnd_556x45_BetaCMag","30Rnd_556x45_G36","30Rnd_556x45_G36SD"};
		class close: close
		{
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.58;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class short: short
		{
			aiRateOfFireDistance = 400;
			minRange = 75;
			minRangeProbab = 0.05;
			midRange = 200;
			midRangeProbab = 0.58;
			maxRange = 400;
			maxRangeProbab = 0.04;
		};
		class medium: medium
		{
			aiRateOfFireDistance = 800;
			minRange = 250;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.58;
			maxRange = 800;
			maxRangeProbab = 0.04;
		};
		class OpticsModes
		{
			class M145
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
			};
		};
	};
	class M24: Rifle
	{
		weaponInfoType = "RscWeaponZeroing";
		class OpticsModes
		{
			class StepScope
			{
				opticsID = 1;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				opticsZoomMin = 0.0249;
				opticsZoomMax = 0.0249;
				opticsZoomInit = 0.0249;
				memoryPointCamera = "Konec hlavne";
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				distanceZoomMin = 300;
				distanceZoomMax = 300;
				cameraDir = "";
				visionMode[] = {"Normal"};
				discreteDistance[] = {100,200,300,400,500,600,700,800};
				discreteDistanceInitIndex = 2;
			};
		};
	};
	class M24_des_EP1: M24
	{
		htMin = 1;
		htMax = 420;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		scope = 2;
		model = "\ca\weapons_E\M24\M24_des";
		displayname = "$STR_EP1_DN_M24_des_EP1";
		picture = "\ca\weapons_E\Data\icons\M24_des_CA.paa";
	};
	class SVD: Rifle
	{
		model = "\ca\weapons_E\SVD\SVD";
		htMin = 1;
		htMax = 420;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		visionMode[] = {"Normal"};
		displayname = "$STR_EP1_DN_SVD";
	};
	class SVD_des_EP1: SVD
	{
		model = "\ca\weapons_E\SVD\SVD_desert";
		displayname = "$STR_EP1_DN_SVD_des_EP1";
		picture = "\CA\weapons_E\Data\icons\svd_desert_CA.paa";
	};
	class SVD_NSPU_EP1: SVD
	{
		model = "\ca\weapons_E\SVD\SVD_nspu.p3d";
		displayname = "$STR_EP1_DN_SVD_NSPU_EP1";
		picture = "\CA\weapons_E\Data\icons\w_svd_nspu_CA.paa";
		modelOptics = "\Ca\weapons_E\NV_nspu_optic.p3d";
		class OpticsModes
		{
			class NSPU
			{
				opticsID = 1;
				useModelOptics = 1;
				opticsZoomMin = 0.07082153;
				opticsZoomMax = 0.07082153;
				opticsZoomInit = 0.07082153;
				opticsPPEffects[] = {};
				opticsDisablePeripherialVision = 1;
				memoryPointCamera = "opticView";
				visionMode[] = {"NVG"};
				opticsFlare = 1;
				distanceZoomMin = 300;
				distanceZoomMax = 300;
				cameraDir = "";
			};
			class Ironsights: NSPU
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
	};
	class Sa58P_EP1: Rifle
	{
		value = 0;
		optics = 1;
		drySound[] = {"ca\sounds\weapons\rifles\dry",0.00031622776,1,10};
		reloadMagazineSound[] = {"ca\sounds\weapons\rifles\reload-ak-2ivan",0.07079458,1,20};
		modes[] = {"Single","Burst","FullAuto"};
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100,200,300,400,500,600,700,800};
		discreteDistanceInitIndex = 2;
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
		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		scope = 2;
		model = "\ca\weapons_E\sa58\sa58p";
		picture = "\ca\weapons_E\Data\icons\sa58p_CA.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		magazines[] = {"30Rnd_762x39_SA58","30Rnd_762x39_AK47"};
		displayname = "$STR_EP1_DN_Sa58P_EP1";
		dexterity = 1.57;
		handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons\Data\Anim\AK.rtm"};
		class Single: Mode_SemiAuto
		{
			begin1[] = {"Ca\Sounds_E\Weapons_E\SA58\sa58_single_1a",1.7782794,1,1300};
			soundBegin[] = {"begin1",1};
			reloadTime = 0.1;
			recoil = "recoil_single_primary_5outof10";
			recoilProne = "recoil_single_primary_prone_5outof10";
			dispersion = 0.0018;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.05;
		};
		class Burst: Mode_Burst
		{
			begin1[] = {"Ca\Sounds_E\Weapons_E\SA58\sa58_single_1a",1.7782794,1,1300};
			soundBegin[] = {"begin1",1};
			soundBurst = 0;
			reloadTime = 0.1;
			ffCount = 3;
			recoil = "recoil_auto_primary_4outof10";
			recoilProne = "recoil_auto_primary_prone_4outof10";
			dispersion = 0.0018;
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 200;
			maxRangeProbab = 0.05;
			showToPlayer = 0;
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[] = {"Ca\Sounds_E\Weapons_E\SA58\sa58_single_1a",1.7782794,1,1300};
			soundBegin[] = {"begin1",1};
			soundBurst = 0;
			reloadTime = 0.1;
			recoil = "recoil_auto_primary_4outof10";
			recoilProne = "recoil_auto_primary_prone_4outof10";
			dispersion = 0.0018;
			minRange = 0;
			minRangeProbab = 0.03;
			midRange = 100;
			midRangeProbab = 0.07;
			maxRange = 200;
			maxRangeProbab = 0.005;
		};
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_Sa58P";
		};
		descriptionShort = "$STR_EP1_DSS_Sa58P_EP1";
	};
	class Sa58V_EP1: Sa58P_EP1
	{
		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		displayname = "$STR_EP1_DN_Sa58V_EP1";
		model = "\ca\weapons_E\sa58\sa58v";
		picture = "\ca\weapons_E\Data\icons\sa58v_CA.paa";
	};
	class Sa58V_RCO_EP1: Sa58V_EP1
	{
		displayname = "$STR_EP1_DN_Sa58V_RCO_EP1";
		model = "\ca\weapons_E\SA58\sa58acog";
		picture = "\ca\weapons_E\Data\icons\sa58acog_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons\data\Anim\Mk48.rtm"};
		class Single: Single
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.05;
			aiRateOfFireDistance = 600;
		};
		class Burst: Mode_Burst
		{
			begin1[] = {"Ca\Sounds_E\Weapons_E\SA58\sa58_single_1a",1.7782794,1,1300};
			soundBegin[] = {"begin1",1};
			soundBurst = 0;
			reloadTime = 0.1;
			ffCount = 3;
			recoil = "recoil_auto_primary_4outof10";
			recoilProne = "recoil_auto_primary_prone_4outof10";
			dispersion = 0.0018;
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 200;
			maxRangeProbab = 0.05;
		};
		irDistance = 100;
		modelOptics = "\ca\weapons_E\SA58\2Dscope_Acog";
		opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
		opticsZoomMin = 0.0623;
		opticsZoomMax = 0.0623;
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		discreteDistance[] = {100};
		discreteDistanceInitIndex = 0;
		opticsFlare = 1;
		opticsDisablePeripherialVision = 1;
		weaponInfoType = "RscWeaponEmpty";
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
				distanceZoomMin = 100;
				distanceZoomMax = 100;
				discreteDistance[] = {100};
				discreteDistanceInitIndex = 0;
				cameraDir = "";
			};
			class Ironsigts: ACOG
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
				distanceZoomMin = 300;
				distanceZoomMax = 300;
				discreteDistance[] = {300};
				discreteDistanceInitIndex = 0;
			};
		};
	};
	class Sa58V_CCO_EP1: Sa58V_EP1
	{
		displayname = "$STR_EP1_DN_Sa58V_CCO_EP1";
		model = "\ca\weapons_E\SA58\sa58ref";
		picture = "\ca\weapons_E\Data\icons\sa58ref_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons\data\Anim\Mk48.rtm"};
		irDistance = 100;
		weaponInfoType = "RscWeaponEmpty";
		discreteDistance[] = {300};
		discreteDistanceInitIndex = 0;
	};
	class M4A1: M16_base
	{
		model = "\ca\weapons_E\m4a3\m4a1";
	};
	class M4A3_CCO_EP1: M16_base
	{
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_M4A3_CCO";
		};
		descriptionShort = "$STR_EP1_DSS_M4A3_CCO";
		scope = 2;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		modes[] = {"Single","FullAuto"};
		dexterity = 1.8;
		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		optics = 1;
		opticsDisablePeripherialVision = 1;
		value = 2;
		drySound[] = {"Ca\sounds\Weapons\rifles\dry",0.0056234132,1};
		reloadMagazineSound[] = {"ca\sounds\weapons\rifles\reload-m16-3",0.056234132,1,20};
		class Single: Single
		{
			begin1[] = {"ca\sounds\weapons\rifles\M4A_single1",1.7782794,1,1000};
			begin2[] = {"ca\sounds\weapons\rifles\M4A_single2",1.7782794,1,1000};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			reloadTime = 0.09;
			dispersion = 0.00175;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.05;
		};
		class FullAuto: FullAuto
		{
			begin1[] = {"ca\sounds\weapons\rifles\M4A_single1",1.7782794,1,1000};
			begin2[] = {"ca\sounds\weapons\rifles\M4A_single2",1.7782794,1,1000};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
		displayName = "$STR_EP1_DN_M4A3_CCO_EP1";
		model = "\ca\weapons_E\m4a3\m4a3_cco";
		picture = "\ca\weapons_E\Data\icons\m4a3_cco_CA.paa";
		distanceZoomMin = 300;
		distanceZoomMax = 300;
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
	};
	class M4A3_RCO_GL_EP1: M4A3_CCO_EP1
	{
		displayName = "$STR_EP1_DN_M4A3_RCO_GL_EP1";
		model = "\ca\weapons_E\m4a3\m4a3_rco_gl";
		handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons\data\Anim\M16GL.rtm"};
		picture = "\ca\weapons_E\Data\icons\m4a3_rco_gl_CA.paa";
		modelOptics = "\Ca\weapons_E\SCAR\ACOG_TA31_optic_4x.p3d";
		opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
		opticsZoomMin = 0.0623;
		opticsZoomMax = 0.0623;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		opticsFlare = 1;
		opticsDisablePeripherialVision = 1;
		muzzles[] = {"this","M203Muzzle"};
		class Single: Single
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 300;
			midRangeProbab = 0.9;
			maxRange = 600;
			maxRangeProbab = 0.1;
		};
		class FullAuto: FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 25;
			midRangeProbab = 0.7;
			maxRange = 70;
			maxRangeProbab = 0.05;
		};
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
			libTextDesc = "$STR_EP1_LIB_M4A3_RCO_GL";
		};
		descriptionShort = "$STR_EP1_DSS_M4A3_RCO_GL";
	};
	class MP5SD: Rifle
	{
		magazines[] = {"30Rnd_9x19_MP5SD","30Rnd_9x19_UZI_SD","15Rnd_9x19_M9SD"};
	};
	class MP5A5: MP5SD
	{
		magazines[] = {"30Rnd_9x19_MP5","30Rnd_9x19_MP5SD","30Rnd_9x19_UZI","30Rnd_9x19_UZI_SD","15Rnd_9x19_M9SD","17Rnd_9x19_glock17"};
	};
	class PK: Rifle
	{
		class manual: Mode_FullAuto
		{
			displayName = "";
		};
	};
	class M240: Rifle
	{
		class manual: Mode_FullAuto
		{
			displayName = "";
		};
	};
	class KSVK: Rifle
	{
		begin1[] = {"\Ca\Sounds_E\Weapons_E\KSVK\ksvk_1",1.7782794,1,1000};
	};
	class G36C: Rifle
	{
		class Single;
		class Burst;
		class FullAuto;
	};
	class G36_C_SD_eotech: G36C
	{
		class Single: Single
		{
			minRange = 2;
			minRangeProbab = 0.1;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
		};
		class Burst: Burst
		{
			minRange = 1;
			minRangeProbab = 0.1;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
		};
		class FullAuto: FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
		};
	};
	class Launcher;
	class Javelin: Launcher
	{
		opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
		modelOptics = "\ca\weapons_e\javelin_optic.p3d";
		visionMode[] = {"Normal","Ti"};
		thermalMode[] = {0,1};
		opticsDisplayName = "WIDE";
		weaponLockDelay = 6;
	};
	class Stinger: Launcher
	{
		weaponLockDelay = 3;
		weaponLockSystem = 1;
		cmImmunity = 0.8;
	};
	class Strela: Launcher
	{
		weaponLockDelay = 3;
		weaponLockSystem = 1;
		cmImmunity = 0.8;
	};
	class Igla: Strela
	{
		weaponLockDelay = 3;
		weaponLockSystem = 1;
		cmImmunity = 0.8;
	};
	class RPG7V: Launcher
	{
		handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons_E\Data\Anim\RPG7gripPrevraceny.rtm"};
		displayName = "$STR_EP1_DN_RPG7V";
	};
	class WeaponExplosive: Pistol
	{
		scope = 1;
	};
	class Binocular;
	class Binocular_Vector: Binocular
	{
		displayName = "$STR_EP1_DN_cfgWeapons_Binocular_Vector";
		visionMode[] = {"Normal","NVG"};
		modelOptics = "\ca\weapons_E\optics_vector.p3d";
		opticsZoomInit = 0.0293;
		opticsZoomMin = 0.0293;
		opticsZoomMax = 0.0293;
		weaponInfoType = "RscWeaponRangeFinder";
		model = "\ca\weapons_E\vector\vector21dt";
		Picture = "\CA\weapons_E\Data\icons\bino_vector_CA.paa";
	};
	class Laserdesignator: Binocular
	{
		weaponInfoType = "RscWeaponRangeFinder";
		visionMode[] = {"Normal","NVG","TI"};
		thermalMode[] = {0,1};
	};
	class Throw: GrenadeLauncher
	{
		muzzles[] = {"HandGrenade_Stone","HandGrenadeMuzzle","SmokeShellMuzzle","IRStrobe"};
		class ThrowMuzzle;
		class IRStrobe: ThrowMuzzle
		{
			displayName = "$STR_EP1_DN_cfgWeapons_Throw_IRStrobe";
			magazines[] = {"IR_Strobe_Marker","IR_Strobe_Target"};
			cursor = "\ca\Weapons\Data\clear_empty";
			cursoraim = "Vehicle_Grenade_W";
			cursorSize = 1;
		};
		class SmokeShellMuzzle: ThrowMuzzle
		{
			cursor = "\ca\Weapons\Data\clear_empty";
			cursoraim = "Vehicle_Grenade_W";
			cursorSize = 1;
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyDalekohled_Proxy;
	class ProxyVector21dt: ProxyDalekohled_Proxy{};
	class ProxyGoggles;
	class ProxyNVG_Proxy: ProxyGoggles
	{
		model = "\ca\Weapons_e\NVG_Proxy";
	};
	class ProxyNVG_Head: ProxyGoggles
	{
		model = "\ca\Weapons_e\NVG_Head";
	};
	class ProxyNVG_Head_Big: ProxyGoggles
	{
		model = "\ca\Weapons_e\NVG_Head_Big";
	};
	class ProxyNVG_Head_R: ProxyGoggles
	{
		model = "\ca\Weapons_e\NVG_Head_R";
	};
	class ProxyNVG_Head_C: ProxyGoggles
	{
		model = "\ca\Weapons_e\NVG_Head_C";
	};
	class ProxyNVG_Head_S: ProxyGoggles
	{
		model = "\ca\Weapons_e\NVG_Head_S";
	};
};
//};

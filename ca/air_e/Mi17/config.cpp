////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:07:36 2014 : Source 'file' date Fri Oct 31 06:07:36 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=8
enum {
	stabilizedinaxisx = 1,
	compartment1 = 1,
	stabilizedinaxisy = 2,
	compartment2 = 2,
	stabilizedinaxesboth = 3,
	compartment3 = 4,
	compartment4 = 8,
	stabilizedinaxesnone = 0
};

//Class air_e : Mi17\config.bin{
class CfgPatches
{
	class CAAir_E_MI8
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.04;
		requiredAddons[] = {"CAAir_E","CAAir"};
	};
};
class CfgVehicles
{
	class Air;
	class Helicopter: Air
	{
		class Turrets;
		class HitPoints
		{
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
	};
	class Mi17_base: Helicopter
	{
		class Turrets: Turrets
		{
			class MainTurret;
			class BackTurret;
		};
		class AnimationSources;
		model = "\ca\Air_E\Mi17\Mi_8MT";
		destrType = "DestructWreck";
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"120Rnd_CMFlareMagazine"};
		LockDetectionSystem = 0;
		IncommingMisslieDetectionSystem = 16;
		transportMaxBackpacks = 10;
		radarType = 4;
		threat[] = {0.5,0,0};
		class HitPoints: HitPoints
		{
			class HitGlass1: HitGlass1
			{
				armor = 0.12;
			};
			class HitGlass2: HitGlass2
			{
				armor = 0.12;
			};
			class HitGlass3: HitGlass3
			{
				armor = 0.12;
			};
			class HitGlass4: HitGlass4
			{
				armor = 0.12;
			};
			class HitGlass5: HitGlass5
			{
				armor = 0.12;
			};
			class HitGlass6: HitGlass6
			{
				armor = 0.12;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\Air_E\Mi17\data\mi8_body_amt.rvmat","Ca\Air_E\Mi17\data\mi8_body_amt_damage.rvmat","Ca\Air_E\Mi17\data\mi8_body_amt_destruct.rvmat","Ca\Air_E\Mi17\data\mi8_det_g.rvmat","Ca\Air_E\Mi17\data\mi8_det_g_damage.rvmat","Ca\Air_E\Mi17\data\mi8_det_g_destruct.rvmat","Ca\Air_E\Mi17\data\mi8_glass.rvmat","Ca\Air_E\Mi17\data\mi8_glass_damage.rvmat","Ca\Air_E\Mi17\data\mi8_glass_damage.rvmat","Ca\Air_E\Mi17\data\mi8_glass_in.rvmat","Ca\Air_E\Mi17\data\mi8_glass_in_damage.rvmat","Ca\Air_E\Mi17\data\mi8_glass_in_damage.rvmat","Ca\Air_E\Mi17\data\mi8_inter.rvmat","Ca\Air_E\Mi17\data\mi8_inter_damage.rvmat","Ca\Air_E\Mi17\data\mi8_inter_destruct.rvmat","ca\weapons\data\pkm.rvmat","ca\weapons\data\pkm.rvmat","ca\weapons\data\pkm_destruct.rvmat","Ca\Air_E\Mi17\data\mi8_body_mtv.rvmat","Ca\Air_E\Mi17\data\mi8_body_mtv_damage.rvmat","Ca\Air_E\Mi17\data\mi8_body_mtv_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
	};
	class Mi17_medevac_base: Mi17_base
	{
		model = "\ca\Air_E\Mi17\Mi_8AMT";
		threat[] = {0,0,0};
	};
	class Mi17_base_UN_EP1: Mi17_base
	{
		expansion = 1;
		accuracy = 1.5;
		faction = "BIS_UN";
		side = 2;
	};
	class Mi17_base_CZ_EP1: Mi17_base
	{
		expansion = 1;
		accuracy = 1.5;
		faction = "BIS_CZ";
		side = 1;
	};
	class Mi17_base_TK_EP1: Mi17_base
	{
		expansion = 1;
		accuracy = 1.5;
		faction = "BIS_TK";
		side = 0;
	};
	class Mi17_UN_CDF_EP1: Mi17_base_UN_EP1
	{
		scope = 2;
		crew = "UN_CDF_Soldier_pilot_EP1";
		typicalCargo[] = {"UN_CDF_Soldier_pilot_EP1","UN_CDF_Soldier_pilot_EP1","UN_CDF_Soldier_EP1","UN_CDF_Soldier_EP1"};
		hiddenSelectionsTextures[] = {"\CA\air_E\data\mi17_body_UN_CO.paa","\CA\air_E\data\mi17_det_UN_CO.paa","\ca\air_E\Data\mi17_decals2_UN_CA.paa","\ca\air_E\Data\mi17_decals_UN_CA.paa"};
	};
	class Mi171Sh_Base_EP1: Mi17_base_CZ_EP1
	{
		scope = 0;
		crew = "CZ_Soldier_Pilot_EP1";
		typicalCargo[] = {"CZ_Soldier_Pilot_EP1","CZ_Soldier_Pilot_EP1","CZ_Soldier_Pilot_EP1","CZ_Soldier_Pilot_EP1"};
		hiddenSelectionsTextures[] = {"\CA\air_E\data\mi17_body_ACR_CO.paa","\CA\air_E\data\mi17_det_ACR_CO.paa","\ca\air_E\Data\mi17_decals2_ACR_CA.paa","\ca\air\data\mi8_decals_ca.paa"};
		displayName = "$STR_EP1_DN_Mi171Sh";
		model = "\ca\Air_E\Mi17\Mi_171";
		picture = "\ca\air\data\ico\mi17_HIP_CA.paa";
		Icon = "\ca\air\data\map_ico\icomap_mi17_CA.paa";
		mapSize = 25;
		accuracy = 1000;
		weapons[] = {"57mmLauncher","CMFlareLauncher"};
		magazines[] = {"192Rnd_57mm","120Rnd_CMFlareMagazine"};
		LockDetectionSystem = 0;
		IncommingMisslieDetectionSystem = 16;
		gunnerUsesPilotView = 1;
		threat[] = {1,0.6,0.3};
		enableSweep = 1;
		class TransportMagazines
		{
			class _xx_30Rnd_762x39_AK47
			{
				magazine = "30Rnd_762x39_AK47";
				count = 30;
			};
			class _xx_HandGrenade_West
			{
				magazine = "HandGrenade_West";
				count = 5;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 2;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
		};
		class TransportWeapons{};
		class Turrets: Turrets
		{
			class LeftTurret: MainTurret
			{
				proxyIndex = 2;
				commanding = -1;
				primaryGunner = 0;
				gunnerName = "$STR_POSITION_DOORGUNNER";
				minElev = -50;
				maxElev = 30;
				initElev = 11;
				minTurn = 20;
				maxTurn = 155;
				initTurn = 80;
			};
			class BackTurret: BackTurret
			{
				gunnerName = "$STR_POSITION_REARGUNNER";
				primaryGunner = 1;
				commanding = -3;
				proxyIndex = 3;
				gunnerAction = "Mi171_Gunner_EP1";
				gunnerInAction = "Mi171_Gunner_EP1";
				minTurn = 130;
				maxTurn = 230;
				initTurn = 180;
				minElev = -50;
				maxElev = 10;
				initElev = 0;
			};
			class RightTurret: MainTurret
			{
				proxyIndex = 1;
				gunnerName = "$STR_POSITION_CREWCHIEF";
				body = "Turret_3";
				gun = "Gun_3";
				animationSourceBody = "Turret_3";
				animationSourceGun = "Gun_3";
				minElev = -60;
				maxElev = 30;
				initElev = 11;
				minTurn = -155;
				maxTurn = -30;
				initTurn = -70;
				weapons[] = {"PKT_3"};
				stabilizedInAxes = "StabilizedInAxesNone";
				gunBeg = "muzzle_3";
				gunEnd = "chamber_3";
				gunnerAction = "Mi8_Gunner";
				gunnerInAction = "Mi8_Gunner";
				memoryPointGun = "muzzle_3";
				memoryPointGunnerOptics = "gunnerview3";
				selectionFireAnim = "zasleh3";
				primaryGunner = 0;
				commanding = -1;
			};
		};
		class AnimationSources: AnimationSources
		{
			class HUDaction
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class HUDaction_Hide: HUDaction{};
			class ReloadAnim_3
			{
				source = "reload";
				weapon = "PKT_3";
			};
			class ReloadMagazine_3
			{
				source = "reloadmagazine";
				weapon = "PKT_3";
			};
			class Revolving_3
			{
				source = "revolving";
				weapon = "PKT_3";
			};
			class HIDE_weapon_holders
			{
				source = "user";
				animPeriod = 1e-007;
				initPhase = 0;
			};
			class HIDE_front_armor: HIDE_weapon_holders
			{
				initPhase = 0;
			};
			class HIDE_exhaust: HIDE_weapon_holders
			{
				initPhase = 0;
			};
		};
		class UserActions
		{
			class HUDoff
			{
				displayName = "$STR_AM_HUDON";
				displayNameDefault = "$STR_AM_HUDON";
				position = "zamerny";
				radius = 1;
				onlyForPlayer = 1;
				condition = "(player==driver this)and(this animationphase ""HUDAction"" !=0)";
				statement = "this animate [""HUDAction"",0];this animate [""HUDaction_Hide"",0]";
			};
			class HUDon
			{
				displayName = "$STR_AM_HUDOFF";
				displayNameDefault = "$STR_AM_HUDOFF";
				position = "zamerny";
				radius = 1;
				onlyForPlayer = 1;
				condition = "(player==driver this)and(this animationphase ""HUDAction"" !=1)";
				statement = "this animate [""HUDAction"",1];this animate [""HUDaction_Hide"",1]";
			};
		};
	};
	class Mi17_base_RU: Mi17_base{};
	class Mi17_rockets_RU: Mi17_base_RU
	{
		weapons[] = {"57mmLauncher","CMFlareLauncher"};
		magazines[] = {"128Rnd_57mm","120Rnd_CMFlareMagazine"};
	};
	class Mi171Sh_rockets_CZ_EP1: Mi171Sh_Base_EP1
	{
		scope = 2;
		displayName = "$STR_EP1_DN_Mi171Sh_rockets";
	};
	class Mi171Sh_CZ_EP1: Mi171Sh_Base_EP1
	{
		scope = 2;
		displayName = "$STR_EP1_DN_Mi171Sh";
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"120Rnd_CMFlareMagazine"};
		LockDetectionSystem = 0;
		IncommingMisslieDetectionSystem = 16;
		class AnimationSources: AnimationSources
		{
			class HIDE_weapon_holders: HIDE_weapon_holders
			{
				initPhase = 1;
			};
			class HIDE_front_armor: HIDE_weapon_holders
			{
				initPhase = 1;
			};
			class HIDE_exhaust: HIDE_exhaust
			{
				initPhase = 1;
			};
		};
	};
	class Mi17_TK_EP1: Mi17_base_TK_EP1
	{
		scope = 2;
		crew = "TK_Soldier_Pilot_EP1";
		typicalCargo[] = {"TK_Soldier_Pilot_EP1"};
		hiddenSelectionsTextures[] = {"\ca\air_E\Data\mi17_body_IND_CO.paa","\ca\air_E\Data\mi17_det_IND_CO.paa","\ca\air\data\clear_empty.paa","\ca\air\data\mi8_decals_ca.paa"};
		class TransportMagazines
		{
			class _xx_20Rnd_762x51_FNFAL
			{
				magazine = "20Rnd_762x51_FNFAL";
				count = 30;
			};
			class _xx_HandGrenade_East
			{
				magazine = "HandGrenade_East";
				count = 5;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 2;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
		};
		class TransportWeapons{};
	};
};
//};

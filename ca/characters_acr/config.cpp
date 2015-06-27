////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:02:16 2014 : Source 'file' date Fri Oct 31 06:02:16 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class characters_acr : config.bin{
class CfgPatches
{
	class CACharacters_ACR
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.52;
		requiredAddons[] = {"CA_ACR","CAWeapons_ACR","CACharacters_E","CA_DubbingRadio_ACR"};
	};
};
class CfgVehicles
{
	class CAManBase;
	class SoldierWB: CAManBase
	{
		class HitPoints;
	};
	class CZ_Soldier_base_EP1: SoldierWB
	{
		class HitPoints: HitPoints
		{
			class HitHead;
			class HitBody;
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"Ca\Characters_ACR\Data\acr_dst_805.rvmat","Ca\Characters_ACR\Data\acr_dst_805_d1.rvmat","Ca\Characters_ACR\Data\acr_dst_805_d2.rvmat","Ca\Characters_ACR\Data\acr_dst_805g.rvmat","Ca\Characters_ACR\Data\acr_dst_805g_d1.rvmat","Ca\Characters_ACR\Data\acr_dst_805g_d2.rvmat","Ca\Characters_ACR\Data\acr_dst_crew.rvmat","Ca\Characters_ACR\Data\acr_dst_crew_d1.rvmat","Ca\Characters_ACR\Data\acr_dst_crew_d2.rvmat","Ca\Characters_ACR\Data\acr_dst_leader.rvmat","Ca\Characters_ACR\Data\acr_dst_leader_d1.rvmat","Ca\Characters_ACR\Data\acr_dst_leader_d2.rvmat","Ca\Characters_ACR\Data\acr_dst_medic.rvmat","Ca\Characters_ACR\Data\acr_dst_medic_d1.rvmat","Ca\Characters_ACR\Data\acr_dst_medic_d2.rvmat","Ca\Characters_ACR\Data\acr_dst_mg.rvmat","Ca\Characters_ACR\Data\acr_dst_mg_d1.rvmat","Ca\Characters_ACR\Data\acr_dst_mg_d2.rvmat","Ca\Characters_ACR\Data\acr_dst_officer.rvmat","Ca\Characters_ACR\Data\acr_dst_officer_d1.rvmat","Ca\Characters_ACR\Data\acr_dst_officer_d2.rvmat","Ca\Characters_ACR\Data\acr_dst_spec1.rvmat","Ca\Characters_ACR\Data\acr_dst_spec1_d1.rvmat","Ca\Characters_ACR\Data\acr_dst_spec1_d2.rvmat","Ca\Characters_ACR\Data\acr_dst_spec2.rvmat","Ca\Characters_ACR\Data\acr_dst_spec2_d1.rvmat","Ca\Characters_ACR\Data\acr_dst_spec2_d2.rvmat","Ca\Characters_ACR\Data\acr_dst_spec3.rvmat","Ca\Characters_ACR\Data\acr_dst_spec3_d1.rvmat","Ca\Characters_ACR\Data\acr_dst_spec3_d2.rvmat","Ca\Characters_ACR\Data\acr_wld_805.rvmat","Ca\Characters_ACR\Data\acr_wld_805_d1.rvmat","Ca\Characters_ACR\Data\acr_wld_805_d2.rvmat","Ca\Characters_ACR\Data\acr_wld_805g.rvmat","Ca\Characters_ACR\Data\acr_wld_805g_d1.rvmat","Ca\Characters_ACR\Data\acr_wld_805g_d2.rvmat","Ca\Characters_ACR\Data\acr_wld_crew.rvmat","Ca\Characters_ACR\Data\acr_wld_crew_d1.rvmat","Ca\Characters_ACR\Data\acr_wld_crew_d2.rvmat","Ca\Characters_ACR\Data\acr_wld_leader.rvmat","Ca\Characters_ACR\Data\acr_wld_leader_d1.rvmat","Ca\Characters_ACR\Data\acr_wld_leader_d2.rvmat","Ca\Characters_ACR\Data\acr_wld_medic.rvmat","Ca\Characters_ACR\Data\acr_wld_medic_d1.rvmat","Ca\Characters_ACR\Data\acr_wld_medic_d2.rvmat","Ca\Characters_ACR\Data\acr_wld_mg.rvmat","Ca\Characters_ACR\Data\acr_wld_mg_d1.rvmat","Ca\Characters_ACR\Data\acr_wld_mg_d2.rvmat","Ca\Characters_ACR\Data\acr_wld_officer.rvmat","Ca\Characters_ACR\Data\acr_wld_officer_d1.rvmat","Ca\Characters_ACR\Data\acr_wld_officer_d2.rvmat","Ca\Characters_ACR\Data\acr_wld_rec1.rvmat","Ca\Characters_ACR\Data\acr_wld_rec1_d1.rvmat","Ca\Characters_ACR\Data\acr_wld_rec1_d2.rvmat","Ca\Characters_ACR\Data\acr_wld_soldier.rvmat","Ca\Characters_ACR\Data\acr_wld_soldier_d1.rvmat","Ca\Characters_ACR\Data\acr_wld_soldier_d2.rvmat","Ca\Characters_ACR\Data\acr_wld_spec1.rvmat","Ca\Characters_ACR\Data\acr_wld_spec1_d1.rvmat","Ca\Characters_ACR\Data\acr_wld_spec1_d2.rvmat","Ca\Characters_ACR\Data\acr_wld_spec2.rvmat","Ca\Characters_ACR\Data\acr_wld_spec2_d1.rvmat","Ca\Characters_ACR\Data\acr_wld_spec2_d2.rvmat","Ca\Characters_ACR\Data\acr_wld_spec3.rvmat","Ca\Characters_ACR\Data\acr_wld_spec3_d1.rvmat","Ca\Characters_ACR\Data\acr_wld_spec3_d2.rvmat","Ca\Characters_ACR\Data\acr_light.rvmat","Ca\Characters_ACR\Data\acr_light_d1.rvmat","Ca\Characters_ACR\Data\acr_light_d2.rvmat","Ca\Characters_ACR\Data\acr_pilot.rvmat","Ca\Characters_ACR\Data\acr_pilot_d1.rvmat","Ca\Characters_ACR\Data\acr_pilot_d2.rvmat","Ca\Characters_ACR\Data\acr_soldier.rvmat","Ca\Characters_ACR\Data\acr_soldier_d1.rvmat","Ca\Characters_ACR\Data\acr_soldier_d2.rvmat","Ca\Characters_ACR\Data\acr_soldier_2.rvmat","Ca\Characters_ACR\Data\acr_soldier_2_d1.rvmat","Ca\Characters_ACR\Data\acr_soldier_2_d2.rvmat"};
		};
		class HitDamage
		{
			class Group0
			{
				hitSounds[] = {{ { "ca\sounds\Characters\Noises\Damage\zozo-hit-01",0.17782794,1,120 },0.1 },{ { "ca\sounds\Characters\Noises\Damage\zozo-hit-02",0.17782794,1,120 },0.1 },{ { "ca\sounds\Characters\Noises\Damage\zozo-hit-03",0.17782794,1,120 },0.1 },{ { "ca\sounds\Characters\Noises\Damage\zozo-hit-04",0.17782794,1,120 },0.1 },{ { "ca\sounds\Characters\Noises\Damage\zozo-hit-05",0.17782794,1,120 },0.1 },{ { "ca\sounds\Characters\Noises\Damage\zozo-hit-06",0.17782794,1,120 },0.1 },{ { "ca\sounds\Characters\Noises\Damage\zozo-hit-07",0.17782794,1,120 },0.1 },{ { "ca\sounds\Characters\Noises\Damage\zozo-hit-08",0.17782794,1,120 },0.1 },{ { "ca\sounds\Characters\Noises\Damage\zozo-hit-09",0.17782794,1,120 },0.1 },{ { "ca\sounds\Characters\Noises\Damage\zozo-hit-10",0.17782794,1,120 },0.1 }};
				damageSounds[] = {{ "body",{ "ca\sounds\Characters\Noises\Damage\zozo-damage-g1-01",0.056234132,1,120,0.25,20,40,60 } },{ "body",{ "ca\sounds\Characters\Noises\Damage\zozo-damage-g1-05",0.056234132,1,120,0.25,20,40,60 } },{ "body",{ "ca\sounds\Characters\Noises\Damage\zozo-damage-g1-08",0.056234132,1,120,0.25,20,40,60 } },{ "body",{ "ca\sounds\Characters\Noises\Damage\zozo-damage-g1-14",0.056234132,1,120,0.25,20,40,60 } },{ "hands",{ "ca\sounds\Characters\Noises\Damage\zozo-damage-g1-05",0.056234132,1,120,0.3,20,40,60 } },{ "hands",{ "ca\sounds\Characters\Noises\Damage\zozo-damage-g1-08",0.056234132,1,120,0.3,20,40,60 } },{ "hands",{ "ca\sounds\Characters\Noises\Damage\zozo-damage-g1-01",0.056234132,1,120,0.4,20,40,60 } },{ "legs",{ "ca\sounds\Characters\Noises\Damage\zozo-damage-g1-05",0.056234132,1,120,0.5,20,40,60 } },{ "legs",{ "ca\sounds\Characters\Noises\Damage\zozo-damage-g1-14",0.056234132,1,120,0.5,20,40,60 } }};
			};
			class Group1
			{
				hitSounds[] = {{ { "ca\sounds\Characters\Noises\Damage\george-hit-01",0.17782794,1,120 },0.2 },{ { "ca\sounds\Characters\Noises\Damage\george-hit-02",0.17782794,1,120 },0.2 },{ { "ca\sounds\Characters\Noises\Damage\george-hit-03",0.17782794,1,120 },0.2 },{ { "ca\sounds\Characters\Noises\Damage\george-hit-04",0.17782794,1,120 },0.2 },{ { "ca\sounds\Characters\Noises\Damage\george-hit-05",0.17782794,1,120 },0.1 },{ { "ca\sounds\Characters\Noises\Damage\george-hit-06",0.17782794,1,120 },0.1 }};
				damageSounds[] = {{ "body",{ "ca\sounds\Characters\Noises\Damage\george-damage-g1-01",0.056234132,1,120,0.125,20,40,60 } },{ "body",{ "ca\sounds\Characters\Noises\Damage\george-damage-g1-02",0.056234132,1,120,0.125,20,40,60 } },{ "body",{ "ca\sounds\Characters\Noises\Damage\george-damage-g1-03",0.056234132,1,120,0.125,20,40,60 } },{ "body",{ "ca\sounds\Characters\Noises\Damage\george-damage-g1-04",0.056234132,1,120,0.125,20,40,60 } },{ "body",{ "ca\sounds\Characters\Noises\Damage\george-damage-g2-01",0.056234132,1,120,0.125,20,40,60 } },{ "body",{ "ca\sounds\Characters\Noises\Damage\george-damage-g2-02",0.056234132,1,120,0.125,20,40,60 } },{ "body",{ "ca\sounds\Characters\Noises\Damage\george-damage-g2-03",0.056234132,1,120,0.125,20,40,60 } },{ "body",{ "ca\sounds\Characters\Noises\Damage\george-damage-g2-07",0.056234132,1,120,0.125,20,40,60 } },{ "hands",{ "ca\sounds\Characters\Noises\Damage\george-damage-g1-03",0.056234132,1,120,0.33,20,40,60 } },{ "hands",{ "ca\sounds\Characters\Noises\Damage\george-damage-g2-03",0.056234132,1,120,0.33,20,40,60 } },{ "hands",{ "ca\sounds\Characters\Noises\Damage\george-damage-g1-02",0.056234132,1,120,0.34,20,40,60 } },{ "legs",{ "ca\sounds\Characters\Noises\Damage\george-damage-g1-01",0.056234132,1,120,0.33,20,40,60 } },{ "legs",{ "ca\sounds\Characters\Noises\Damage\george-damage-g1-04",0.056234132,1,120,0.33,20,40,60 } },{ "legs",{ "ca\sounds\Characters\Noises\Damage\george-damage-g1-02",0.056234132,1,120,0.34,20,40,60 } }};
			};
			class Group2
			{
				hitSounds[] = {{ { "ca\sounds\Characters\Noises\Damage\jennik-hit-01",0.17782794,1,120 },0.2 },{ { "ca\sounds\Characters\Noises\Damage\jennik-hit-02",0.17782794,1,120 },0.2 },{ { "ca\sounds\Characters\Noises\Damage\jennik-hit-03",0.17782794,1,120 },0.2 },{ { "ca\sounds\Characters\Noises\Damage\jennik-hit-04",0.17782794,1,120 },0.2 },{ { "ca\sounds\Characters\Noises\Damage\jennik-hit-05",0.17782794,1,120 },0.1 },{ { "ca\sounds\Characters\Noises\Damage\jennik-hit-06",0.17782794,1,120 },0.1 }};
				damageSounds[] = {{ "body",{ "ca\sounds\Characters\Noises\Damage\jennik-damage-g1-01",0.056234132,1,120,0.165,20,40,60 } },{ "body",{ "ca\sounds\Characters\Noises\Damage\jennik-damage-g1-02",0.056234132,1,120,0.165,20,40,60 } },{ "body",{ "ca\sounds\Characters\Noises\Damage\jennik-damage-g1-04",0.056234132,1,120,0.165,20,40,60 } },{ "body",{ "ca\sounds\Characters\Noises\Damage\jennik-damage-g1-05",0.056234132,1,120,0.165,20,40,60 } },{ "body",{ "ca\sounds\Characters\Noises\Damage\jennik-damage-g1-06",0.056234132,1,120,0.165,20,40,60 } },{ "body",{ "ca\sounds\Characters\Noises\Damage\jennik-damage-g1-07",0.056234132,1,120,0.175,20,40,60 } },{ "hands",{ "ca\sounds\Characters\Noises\Damage\jennik-damage-g1-02",0.056234132,1,120,0.33,20,40,60 } },{ "hands",{ "ca\sounds\Characters\Noises\Damage\jennik-damage-g1-01",0.056234132,1,120,0.33,20,40,60 } },{ "hands",{ "ca\sounds\Characters\Noises\Damage\jennik-damage-g1-06",0.056234132,1,120,0.34,20,40,60 } },{ "legs",{ "ca\sounds\Characters\Noises\Damage\jennik-damage-g1-07",0.056234132,1,120,0.5,20,40,60 } },{ "legs",{ "ca\sounds\Characters\Noises\Damage\jennik-damage-g1-04",0.056234132,1,120,0.5,20,40,60 } }};
			};
			class Group3
			{
				hitSounds[] = {{ { "ca\sounds\Characters\Noises\Damage\vasa-hit-01",0.17782794,1,120 },0.15 },{ { "ca\sounds\Characters\Noises\Damage\vasa-hit-02",0.17782794,1,120 },0.15 },{ { "ca\sounds\Characters\Noises\Damage\vasa-hit-03",0.17782794,1,120 },0.1 },{ { "ca\sounds\Characters\Noises\Damage\vasa-hit-04",0.17782794,1,120 },0.1 },{ { "ca\sounds\Characters\Noises\Damage\vasa-hit-05",0.17782794,1,120 },0.1 },{ { "ca\sounds\Characters\Noises\Damage\vasa-hit-06",0.17782794,1,120 },0.1 },{ { "ca\sounds\Characters\Noises\Damage\vasa-hit-07",0.17782794,1,120 },0.1 },{ { "ca\sounds\Characters\Noises\Damage\vasa-hit-08",0.17782794,1,120 },0.1 },{ { "ca\sounds\Characters\Noises\Damage\vasa-hit-09",0.17782794,1,120 },0.1 }};
				damageSounds[] = {{ "body",{ "ca\sounds\Characters\Noises\Damage\vasa-damage-g1-01",0.07079458,1,120,0.2,20,40,60 } },{ "body",{ "ca\sounds\Characters\Noises\Damage\vasa-damage-g1-02",0.07079458,1,120,0.2,20,40,60 } },{ "body",{ "ca\sounds\Characters\Noises\Damage\vasa-damage-g1-03",0.07079458,1,120,0.2,20,40,60 } },{ "body",{ "ca\sounds\Characters\Noises\Damage\vasa-damage-g1-04",0.07079458,1,120,0.2,20,40,60 } },{ "body",{ "ca\sounds\Characters\Noises\Damage\vasa-damage-g1-05",0.07079458,1,120,0.2,20,40,60 } },{ "hands",{ "ca\sounds\Characters\Noises\Damage\vasa-damage-g1-03",0.07079458,1,120,0.33,20,40,60 } },{ "hands",{ "ca\sounds\Characters\Noises\Damage\vasa-damage-g1-01",0.07079458,1,120,0.33,20,40,60 } },{ "hands",{ "ca\sounds\Characters\Noises\Damage\vasa-damage-g1-04",0.07079458,1,120,0.34,20,40,60 } },{ "legs",{ "ca\sounds\Characters\Noises\Damage\vasa-damage-g1-01",0.07079458,1,120,0.5,20,40,60 } },{ "legs",{ "ca\sounds\Characters\Noises\Damage\vasa-damage-g1-02",0.07079458,1,120,0.5,20,40,60 } }};
			};
		};
	};
	class CZ_Soldier_Base_ACR: CZ_Soldier_base_EP1
	{
		expansion = 3;
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_man"};
				speechPlural[] = {"veh_men"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_man_CZ"};
				speechPlural[] = {"veh_men_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_man_CZ4P"};
				speechPlural[] = {"veh_men_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_man_RU"};
				speechPlural[] = {"veh_men_RU"};
			};
		};
		TextPlural = "$STR_DN_men";
		TextSingular = "$STR_DN_man";
		nameSound = "veh_man";
		identityTypes[] = {"Language_ACR_CZ"};
		portrait = "\Ca\characters\data\portraits\comBarHead_usmc_soldier_ca";
		picture = "\Ca\characters\data\Ico\i_null_CA";
		icon = "\Ca\characters2\data\icon\i_soldier_CA";
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor = 0.85;
				passThrough = 1;
			};
			class HitBody: HitBody
			{
				armor = 1;
				passThrough = 0.8;
			};
		};
	};
	class ReammoBox;
	class ReammoBox_ACR: ReammoBox
	{
		expansion = 3;
	};
	class Bag_Base_ACR: ReammoBox_ACR
	{
		scope = 0;
		vehicleClass = "Backpacks";
		icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA";
		mapSize = 2;
		class TransportMagazines{};
		class TransportWeapons{};
		transportMaxMagazines = 0;
		transportMaxWeapons = 0;
		isbackpack = 1;
		reversed = 1;
		class DestructionEffects{};
	};
	class CZ_Assault_Pack_ACR: Bag_Base_ACR
	{
		scope = 2;
		displayName = "$STR_ACR_DN_ASSPACK";
		picture = "\ca\weapons_e\data\icons\backpack_US_ASSAULT_CA";
		model = "\ca\weapons_e\AmmoBoxes\backpack_us_assault";
		transportMaxMagazines = 8;
	};
	class CZ_Assault_Pack_Explosives_ACR: CZ_Assault_Pack_ACR
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Mine
			{
				magazine = "Mine";
				count = 2;
			};
			class _xx_PipeBomb
			{
				magazine = "PipeBomb";
				count = 2;
			};
		};
	};
	class CZ_Assault_Pack_MG_ACR: CZ_Assault_Pack_ACR
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_100Rnd_762x54_PK
			{
				magazine = "100Rnd_762x54_PK";
				count = 4;
			};
		};
	};
	class CZ_Backpack_RPG_ACR: Bag_Base_ACR
	{
		scope = 2;
		displayName = "$STR_ACR_DN_RPGBAG";
		picture = "\Ca\Weapons_ACR\Data\UI\picture_backpack_acr_rpg";
		model = "\Ca\Characters_ACR\backpack_acr_rpg";
		transportMaxMagazines = 6;
		class TransportMagazines
		{
			class _xx_PG7VR
			{
				magazine = "PG7VR";
				count = 2;
			};
			class _xx_PG7VL
			{
				magazine = "PG7VL";
				count = 1;
			};
		};
	};
	class CZ_Soldier_DES_EP1: CZ_Soldier_base_EP1
	{
		weapons[] = {"Sa58V_CCO_EP1","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","HandGrenade_West","HandGrenade_West","HandGrenade_West","HandGrenade_West"};
		respawnWeapons[] = {"Sa58V_CCO_EP1","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","HandGrenade_West","HandGrenade_West"};
	};
	class CZ_Soldier805_DES_ACR: CZ_Soldier_DES_EP1
	{
		model = "\Ca\Characters_ACR\acr_dst_805";
		displayName = "$STR_ACR_DN_WDL_SOLDIER";
		weapons[] = {"CZ805_A1_ACR","CZ_75_P_07_DUTY","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","HandGrenade_West","HandGrenade_West","SmokeShell","SmokeShellRed","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9"};
		respawnWeapons[] = {"CZ805_A1_ACR","CZ_75_P_07_DUTY","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","HandGrenade_West","SmokeShell","SmokeShellRed","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9"};
	};
	class CZ_Soldier_805_Wdl_ACR: CZ_Soldier_Base_ACR
	{
		scope = 2;
		vehicleClass = "MenW";
		displayName = "$STR_ACR_DN_WDL_SOLDIER";
		model = "\Ca\Characters_ACR\acr_wdl_805";
		accuracy = 3.9;
		weapons[] = {"CZ805_A1_ACR","CZ_75_P_07_DUTY","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","HandGrenade_West","HandGrenade_West","SmokeShell","SmokeShellRed","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9"};
		respawnWeapons[] = {"CZ805_A1_ACR","CZ_75_P_07_DUTY","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","HandGrenade_West","SmokeShell","SmokeShellRed","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9"};
	};
	class CZ_Soldier_805g_Dst_ACR: CZ_Soldier_Base_ACR
	{
		scope = 2;
		displayName = "$STR_DN_GRENADIER";
		model = "\Ca\Characters_ACR\acr_dst_805g";
		backpack = "CZ_VestPouch_M4_EP1";
		accuracy = 3.9;
		weapons[] = {"CZ805_A1_GL_ACR","CZ_75_P_07_DUTY","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","HandGrenade_West","HandGrenade_West","SmokeShell","SmokeShellRed","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203"};
		respawnWeapons[] = {"CZ805_A1_GL_ACR","CZ_75_P_07_DUTY","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","HandGrenade_West","SmokeShell","SmokeShellRed","15Rnd_9x19_M9","15Rnd_9x19_M9","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203"};
	};
	class CZ_Soldier_805g_Wdl_ACR: CZ_Soldier_805g_Dst_ACR
	{
		vehicleClass = "MenW";
		model = "\Ca\Characters_ACR\acr_wdl_805g";
	};
	class CZ_Soldier_Crew_Dst_ACR: CZ_Soldier_Base_ACR
	{
		scope = 2;
		displayName = "$STR_DN_CREW";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_crew"};
				speechPlural[] = {"veh_crews"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_crew_CZ"};
				speechPlural[] = {"veh_crews_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_crew_CZ4P"};
				speechPlural[] = {"veh_crews_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_crew_RU"};
				speechPlural[] = {"veh_crews_RU"};
			};
		};
		TextPlural = "$STR_DN_crews";
		TextSingular = "$STR_DN_crew";
		nameSound = "veh_crew";
		portrait = "\Ca\characters\data\portraits\comBarHead_usmc_crew_ca";
		model = "\Ca\Characters_ACR\acr_dst_crew";
		accuracy = 3.4;
		weaponSlots = "1	 + 	4	 + 8*		256	 + 2*	4096	 + 	2	 + 4*	16  + 12*131072";
		weapons[] = {"Evo_mrad_ACR","CZ_75_D_COMPACT","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"20Rnd_9x19_EVO","20Rnd_9x19_EVO","20Rnd_9x19_EVO","20Rnd_9x19_EVO","20Rnd_9x19_EVO","20Rnd_9x19_EVO","20Rnd_9x19_EVO","20Rnd_9x19_EVO","HandGrenade_West","HandGrenade_West","SmokeShell","SmokeShellRed","10Rnd_9x19_Compact","10Rnd_9x19_Compact","10Rnd_9x19_Compact","10Rnd_9x19_Compact","10Rnd_9x19_Compact","10Rnd_9x19_Compact","10Rnd_9x19_Compact","10Rnd_9x19_Compact"};
		respawnWeapons[] = {"Evo_mrad_ACR","CZ_75_D_COMPACT","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"20Rnd_9x19_EVO","20Rnd_9x19_EVO","20Rnd_9x19_EVO","20Rnd_9x19_EVO","HandGrenade_West","SmokeShell","SmokeShellRed","10Rnd_9x19_Compact","10Rnd_9x19_Compact","10Rnd_9x19_Compact","10Rnd_9x19_Compact"};
	};
	class CZ_Soldier_Crew_Wdl_ACR: CZ_Soldier_Crew_Dst_ACR
	{
		vehicleClass = "MenW";
		displayName = "$STR_DN_CREW";
		model = "\Ca\Characters_ACR\acr_wdl_crew";
		portrait = "\Ca\characters\data\portraits\comBarHead_common_crew_ca";
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor = 0.6;
			};
			class HitBody: HitBody
			{
				armor = 0.8;
				passThrough = 1;
			};
		};
	};
	class CZ_Soldier_SL_DES_EP1: CZ_Soldier_base_EP1
	{
		icon = "\Ca\characters2\data\icon\i_leader_CA";
		weapons[] = {"Sa58V_CCO_EP1","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular_Vector","glock17_EP1"};
		magazines[] = {"30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","HandGrenade_West","HandGrenade_West","IR_Strobe_Target","SmokeShellRed","17Rnd_9x19_glock17","17Rnd_9x19_glock17","17Rnd_9x19_glock17","17Rnd_9x19_glock17"};
		respawnWeapons[] = {"Sa58V_CCO_EP1","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular_Vector","glock17_EP1"};
		respawnMagazines[] = {"30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","HandGrenade_West","IR_Strobe_Target","SmokeShellRed","17Rnd_9x19_glock17","17Rnd_9x19_glock17"};
	};
	class CZ_Soldier_Leader_Wdl_ACR: CZ_Soldier_Base_ACR
	{
		scope = 2;
		vehicleClass = "MenW";
		displayName = "$STR_EP1_DN_CZ_Soldier_SL_DES_EP1";
		picture = "\Ca\characters\data\Ico\i_sleader_CA";
		icon = "\Ca\characters2\data\icon\i_leader_CA";
		model = "\Ca\Characters_ACR\acr_wdl_leader";
		accuracy = 3.6;
		cost = 500000;
		enableGPS = 1;
		backpack = "CZ_VestPouch_M4_EP1";
		weapons[] = {"CZ805_A1_ACR","CZ_75_P_07_DUTY","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS","Binocular_Vector"};
		magazines[] = {"30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","HandGrenade_West","HandGrenade_West","SmokeShell","SmokeShellRed","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9"};
		respawnWeapons[] = {"CZ805_A2_ACR","CZ_75_P_07_DUTY","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS","Binocular_Vector"};
		respawnMagazines[] = {"30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","HandGrenade_West","SmokeShell","SmokeShellRed","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9"};
	};
	class CZ_Soldier_medik_DES_EP1: CZ_Soldier_DES_EP1
	{
		weapons[] = {"Sa58V_CCO_EP1","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","SmokeShell","SmokeShell"};
		respawnWeapons[] = {"Sa58V_CCO_EP1","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","SmokeShell"};
	};
	class CZ_Soldier_Medic_Wdl_ACR: CZ_Soldier_Base_ACR
	{
		scope = 2;
		vehicleClass = "MenW";
		displayName = "$STR_EP1_DN_US_Soldier_Medic_EP1";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_Medic"};
				speechPlural[] = {"veh_Medics"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_Medic_CZ"};
				speechPlural[] = {"veh_Medics_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_Medic_CZ4P"};
				speechPlural[] = {"veh_Medics_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_Medic_RU"};
				speechPlural[] = {"veh_Medics_RU"};
			};
		};
		TextPlural = "$STR_DN_Medics";
		TextSingular = "$STR_DN_Medic";
		nameSound = "veh_Medic";
		picture = "\Ca\characters\data\Ico\i_Med_CA";
		icon = "\Ca\characters2\data\icon\i_medic_CA";
		model = "\Ca\Characters_ACR\acr_wdl_medic";
		accuracy = 3.7;
		cost = 100000;
		attendant = 1;
		canCarryBackPack = 0;
		weaponSlots = "1	 + 	4	 + 8*		256	 + 2*	4096	 + 	2	 + 4*	16  + 12*131072";
		weapons[] = {"CZ805_A2_ACR","CZ_75_D_COMPACT","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","HandGrenade_West","HandGrenade_West","SmokeShell","SmokeShellRed","10Rnd_9x19_Compact","10Rnd_9x19_Compact","10Rnd_9x19_Compact","10Rnd_9x19_Compact","10Rnd_9x19_Compact","10Rnd_9x19_Compact","10Rnd_9x19_Compact","10Rnd_9x19_Compact"};
		respawnWeapons[] = {"CZ805_A2_ACR","CZ_75_D_COMPACT","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","HandGrenade_West","SmokeShell","SmokeShellRed","10Rnd_9x19_Compact","10Rnd_9x19_Compact","10Rnd_9x19_Compact","10Rnd_9x19_Compact"};
	};
	class CZ_Soldier_MG_DES_EP1: CZ_Soldier_base_EP1
	{
		weapons[] = {"UK59_ACR","CZ_75_SP_01_PHANTOM","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"100Rnd_762x54_PK","100Rnd_762x54_PK","100Rnd_762x54_PK","100Rnd_762x54_PK","HandGrenade_West","HandGrenade_West","SmokeShell","SmokeShellRed","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9"};
		respawnWeapons[] = {"UK59_ACR","CZ_75_SP_01_PHANTOM","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"100Rnd_762x54_PK","100Rnd_762x54_PK","HandGrenade_West","SmokeShell","SmokeShellRed","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9"};
		accuracy = 3.7;
		cost = 130000;
	};
	class CZ_Soldier_MG_Wdl_ACR: CZ_Soldier_Base_ACR
	{
		scope = 2;
		vehicleClass = "MenW";
		displayName = "$STR_EP1_DN_CZ_Soldier_MG_DES_EP1";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_mgunner"};
				speechPlural[] = {"veh_mgunners"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_mgunner_CZ"};
				speechPlural[] = {"veh_mgunners_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_mgunner_CZ4P"};
				speechPlural[] = {"veh_mgunners_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_mgunner_RU"};
				speechPlural[] = {"veh_mgunners_RU"};
			};
		};
		TextPlural = "$STR_DN_mgunners";
		TextSingular = "$STR_DN_mgunner";
		nameSound = "veh_mgunner";
		picture = "\Ca\characters\data\Ico\i_null_CA";
		icon = "\Ca\characters2\data\icon\i_machinegunner_CA";
		model = "\Ca\Characters_ACR\acr_wdl_mg";
		accuracy = 3.7;
		cost = 130000;
		threat[] = {1,0.1,0.6};
		weapons[] = {"UK59_ACR","CZ_75_SP_01_PHANTOM","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"100Rnd_762x54_PK","100Rnd_762x54_PK","100Rnd_762x54_PK","100Rnd_762x54_PK","HandGrenade_West","HandGrenade_West","SmokeShell","SmokeShellRed","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9"};
		respawnWeapons[] = {"UK59_ACR","CZ_75_SP_01_PHANTOM","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"100Rnd_762x54_PK","100Rnd_762x54_PK","HandGrenade_West","SmokeShell","SmokeShellRed","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9"};
	};
	class CZ_Soldier_MG2_Wdl_ACR: CZ_Soldier_MG_Wdl_ACR
	{
		displayName = "$STR_DN_ARMAN";
		cost = 100000;
		weapons[] = {"M249_m145_EP1","CZ_75_SP_01_PHANTOM","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"100Rnd_556x45_M249","100Rnd_556x45_M249","100Rnd_556x45_M249","100Rnd_556x45_M249","HandGrenade_West","HandGrenade_West","SmokeShell","SmokeShellRed","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9"};
		respawnWeapons[] = {"M249_m145_EP1","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"100Rnd_556x45_M249","100Rnd_556x45_M249","HandGrenade_West","SmokeShell","SmokeShellRed","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9"};
	};
	class CZ_Soldier_MG2_Dst_ACR: CZ_Soldier_MG2_Wdl_ACR
	{
		vehicleClass = "Men";
		model = "\Ca\Characters_ACR\acr_dst_mg";
	};
	class CZ_Soldier_Office_DES_EP1: CZ_Soldier_base_EP1
	{
		portrait = "\Ca\characters\data\portraits\comBarHead_ru_spec_com_ca";
		accuracy = 3.6;
		camouflage = 1.6;
		cost = 750000;
		enableGPS = 1;
		weapons[] = {"Sa58V_EP1","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS","Binocular_Vector","glock17_EP1"};
		magazines[] = {"30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","IR_Strobe_Target","SmokeShellRed","17Rnd_9x19_glock17","17Rnd_9x19_glock17","17Rnd_9x19_glock17","17Rnd_9x19_glock17"};
		respawnWeapons[] = {"Sa58V_EP1","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS","Binocular_Vector","glock17_EP1"};
		respawnMagazines[] = {"30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","IR_Strobe_Target","SmokeShellRed","17Rnd_9x19_glock17","17Rnd_9x19_glock17"};
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor = 0.6;
			};
			class HitBody: HitBody
			{
				armor = 0.8;
				passThrough = 1;
			};
		};
	};
	class CZ_Soldier_Officer_Wdl_ACR: CZ_Soldier_Base_ACR
	{
		scope = 2;
		vehicleClass = "MenW";
		displayName = "$STR_EP1_DN_CZ_Soldier_Office_DES_EP1";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_officer"};
				speechPlural[] = {"veh_officers"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_officer_CZ"};
				speechPlural[] = {"veh_officers_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_officer_CZ4P"};
				speechPlural[] = {"veh_officers_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_officer_RU"};
				speechPlural[] = {"veh_officers_RU"};
			};
		};
		TextPlural = "$STR_DN_officers";
		TextSingular = "$STR_DN_officer";
		nameSound = "veh_officer";
		portrait = "\Ca\characters\data\portraits\comBarHead_ru_spec_com_ca";
		picture = "\Ca\characters\data\Ico\i_off_CA";
		icon = "\Ca\characters2\data\icon\i_officer_CA";
		model = "\Ca\Characters_ACR\acr_wdl_officer";
		accuracy = 3.6;
		camouflage = 1.6;
		cost = 750000;
		enableGPS = 1;
		weaponSlots = "1	 + 	4	 + 6*		256	 + 2*	4096	 + 	2	 + 4*	16  + 12*131072";
		weapons[] = {"CZ_75_SP_01_PHANTOM","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS","Binocular_Vector"};
		magazines[] = {"15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","HandGrenade_West","HandGrenade_West","SmokeShell","SmokeShellRed","IR_Strobe_Target"};
		respawnWeapons[] = {"CZ_75_SP_01_PHANTOM","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS","Binocular_Vector"};
		respawnMagazines[] = {"15Rnd_9x19_M9","15Rnd_9x19_M9","HandGrenade_West","SmokeShell","SmokeShellRed","IR_Strobe_Target"};
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor = 0.6;
			};
			class HitBody: HitBody
			{
				armor = 0.8;
				passThrough = 1;
			};
		};
	};
	class CZ_Soldier_Pilot_EP1: CZ_Soldier_base_EP1
	{
		enableGPS = 1;
		weapons[] = {"Sa58V_EP1","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS"};
		magazines[] = {"30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","HandGrenade_West","HandGrenade_West","SmokeShell","SmokeShellRed"};
		respawnWeapons[] = {"Sa58V_EP1","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS"};
		respawnMagazines[] = {"30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","HandGrenade_West","SmokeShellRed"};
	};
	class CZ_Soldier_Pilot_Wdl_ACR: CZ_Soldier_Base_ACR
	{
		scope = 2;
		vehicleClass = "MenW";
		displayName = "$STR_EP1_DN_CZ_Soldier_Pilot_EP1";
		portrait = "\Ca\characters\data\portraits\comBarHead_usmc_pilot_ca";
		model = "\Ca\Characters_ACR\acr_wdl_pilot";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_pilot"};
				speechPlural[] = {"veh_pilots"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_pilot_CZ"};
				speechPlural[] = {"veh_pilots_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_pilot_CZ4P"};
				speechPlural[] = {"veh_pilots_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_pilot_RU"};
				speechPlural[] = {"veh_pilots_RU"};
			};
		};
		TextPlural = "$STR_DN_pilots";
		TextSingular = "$STR_DN_pilot";
		nameSound = "veh_pilot";
		accuracy = 3.2;
		camouflage = 1.6;
		cost = 20000;
		enableGPS = 1;
		weaponSlots = "1	 + 	4	 + 6*		256	 + 2*	4096	 + 	2	 + 4*	16  + 12*131072";
		weapons[] = {"Evo_ACR","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS"};
		magazines[] = {"20Rnd_9x19_EVO","20Rnd_9x19_EVO","20Rnd_9x19_EVO","20Rnd_9x19_EVO","20Rnd_9x19_EVO","20Rnd_9x19_EVO","20Rnd_9x19_EVO","20Rnd_9x19_EVO","HandGrenade_West","HandGrenade_West","SmokeShell","SmokeShellRed"};
		respawnWeapons[] = {"Evo_ACR","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS"};
		respawnMagazines[] = {"20Rnd_9x19_EVO","20Rnd_9x19_EVO","20Rnd_9x19_EVO","20Rnd_9x19_EVO","HandGrenade_West","SmokeShell","SmokeShellRed"};
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor = 0.7;
			};
			class HitBody: HitBody
			{
				armor = 0.8;
				passThrough = 1;
			};
		};
	};
	class CZ_Soldier_Wdl_ACR: CZ_Soldier_Base_ACR
	{
		scope = 2;
		vehicleClass = "MenW";
		displayName = "$STR_EP1_DN_CZ_SOLDIER_DES_EP1";
		model = "\Ca\Characters_ACR\acr_wdl_soldier";
		backpack = "CZ_VestPouch_Sa58_EP1";
		weapons[] = {"Sa58P_EP1","CZ_75_P_07_DUTY","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","HandGrenade_West","HandGrenade_West","SmokeShell","SmokeShellRed","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9"};
		respawnWeapons[] = {"Sa58P_EP1","CZ_75_P_07_DUTY","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","HandGrenade_West","SmokeShell","SmokeShellRed","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9"};
	};
	class CZ_Soldier_Light_DES_EP1: CZ_Soldier_base_EP1
	{
		weapons[] = {"Sa58P_EP1","CZ_75_P_07_DUTY","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","HandGrenade_West","HandGrenade_West","SmokeShell","SmokeShellRed","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9"};
		respawnWeapons[] = {"Sa58P_EP1","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","HandGrenade_West","SmokeShell","SmokeShellRed","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9"};
	};
	class CZ_Special_Forces_Scout_DES_EP1: CZ_Soldier_base_EP1
	{
		camouflage = 0.8;
		backpack = "CZ_VestPouch_Sa58_EP1";
		enableGPS = 1;
		weapons[] = {"Sa58V_CCO_EP1","glock17_EP1","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS","Binocular_Vector"};
		magazines[] = {"30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","HandGrenade_West","HandGrenade_West","IR_Strobe_Target","SmokeShell","SmokeShellRed","17Rnd_9x19_glock17","17Rnd_9x19_glock17","17Rnd_9x19_glock17","17Rnd_9x19_glock17","17Rnd_9x19_glock17","17Rnd_9x19_glock17","17Rnd_9x19_glock17","17Rnd_9x19_glock17"};
		respawnWeapons[] = {"Sa58V_CCO_EP1","glock17_EP1","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS","Binocular_Vector"};
		respawnMagazines[] = {"30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","HandGrenade_West","IR_Strobe_Target","SmokeShell","SmokeShellRed","17Rnd_9x19_glock17","17Rnd_9x19_glock17","17Rnd_9x19_glock17","17Rnd_9x19_glock17"};
	};
	class CZ_Special_Forces_MG_DES_EP1: CZ_Soldier_base_EP1
	{
		enableGPS = 1;
		weapons[] = {"M60A4_EP1","glock17_EP1","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular_Vector","itemGPS"};
		magazines[] = {"100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","HandGrenade_West","IR_Strobe_Target","SmokeShell","SmokeShellRed","17Rnd_9x19_glock17","17Rnd_9x19_glock17","17Rnd_9x19_glock17","17Rnd_9x19_glock17","17Rnd_9x19_glock17","17Rnd_9x19_glock17","17Rnd_9x19_glock17","17Rnd_9x19_glock17"};
		respawnWeapons[] = {"M60A4_EP1","glock17_EP1","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular_Vector","itemGPS"};
		respawnMagazines[] = {"100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","HandGrenade_West","IR_Strobe_Target","SmokeShell","SmokeShellRed","17Rnd_9x19_glock17","17Rnd_9x19_glock17","17Rnd_9x19_glock17","17Rnd_9x19_glock17"};
	};
	class CZ_Special_Forces_DES_EP1: CZ_Soldier_base_EP1
	{
		portrait = "\Ca\characters\data\portraits\comBarHead_fr_soldier_ca";
		camouflage = 0.8;
		enableGPS = 1;
		weapons[] = {"M4A3_CCO_EP1","CZ_75_SP_01_PHANTOM","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular_Vector","itemGPS"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade_West","HandGrenade_West","IR_Strobe_Target","SmokeShell","SmokeShellRed","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9"};
		respawnWeapons[] = {"M4A3_CCO_EP1","CZ_75_SP_01_PHANTOM","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular_Vector","itemGPS"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade_West","IR_Strobe_Target","SmokeShell","SmokeShellRed","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9"};
	};
	class CZ_Special_Forces_TL_DES_EP1: CZ_Soldier_base_EP1
	{
		portrait = "\Ca\characters\data\portraits\comBarHead_fr_soldier_ca";
		camouflage = 0.8;
		backpack = "CZ_VestPouch_M4_EP1";
		enableGPS = 1;
		weapons[] = {"CZ805_B_GL_ACR","CZ_75_P_07_DUTY","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","LRTV_ACR","itemGPS"};
		magazines[] = {"20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","HandGrenade_West","IR_Strobe_Target","SmokeShellRed","SmokeShellGreen","LaserBatteries","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9"};
		respawnWeapons[] = {"CZ805_B_GL_ACR","CZ_75_P_07_DUTY","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","LRTV_ACR","itemGPS"};
		respawnMagazines[] = {"20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","HandGrenade_West","IR_Strobe_Target","SmokeShellGreen","LaserBatteries","1Rnd_HE_M203","1Rnd_HE_M203","15Rnd_9x19_M9","15Rnd_9x19_M9"};
	};
	class CZ_Special_Forces_GL_DES_EP1: CZ_Soldier_base_EP1
	{
		portrait = "\Ca\characters\data\portraits\comBarHead_fr_soldier_ca";
		camouflage = 0.8;
		backpack = "CZ_VestPouch_M4_EP1";
		enableGPS = 1;
		weapons[] = {"CZ805_B_GL_ACR","CZ_75_P_07_DUTY","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular_Vector","itemGPS"};
		magazines[] = {"20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","HandGrenade_West","HandGrenade_West","IR_Strobe_Target","SmokeShell","SmokeShellRed","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9"};
		respawnWeapons[] = {"CZ805_B_GL_ACR","CZ_75_P_07_DUTY","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular_Vector","itemGPS"};
		respawnMagazines[] = {"20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","HandGrenade_West","IR_Strobe_Target","SmokeShell","SmokeShellRed","1Rnd_HE_M203","1Rnd_HE_M203","15Rnd_9x19_M9","15Rnd_9x19_M9"};
	};
	class CZ_Soldier_Recon_Wdl_ACR: CZ_Soldier_Base_ACR
	{
		scope = 2;
		vehicleClass = "MenSpecialForces";
		displayName = "$STR_DN_BLACKOP_LASER";
		model = "\Ca\Characters_ACR\acr_wdl_rec1";
		portrait = "\Ca\characters_E\data\portraits\delta_soldier_CA";
		accuracy = 3.9;
		canHideBodies = 1;
		camouflage = 0.8;
		enableGPS = 1;
		weapons[] = {"CZ805_B_GL_ACR","CZ_75_P_07_DUTY","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","LRTV_ACR","itemGPS"};
		magazines[] = {"20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","HandGrenade_West","IR_Strobe_Target","SmokeShell","SmokeShellRed","LaserBatteries","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9"};
		respawnWeapons[] = {"CZ805_B_GL_ACR","CZ_75_P_07_DUTY","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","LRTV_ACR","itemGPS"};
		respawnMagazines[] = {"20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","HandGrenade_West","IR_Strobe_Target","SmokeShell","SmokeShellRed","LaserBatteries","1Rnd_HE_M203","1Rnd_HE_M203","15Rnd_9x19_M9","15Rnd_9x19_M9"};
	};
	class CZ_Soldier_Spec1_Wdl_ACR: CZ_Soldier_Base_ACR
	{
		scope = 2;
		vehicleClass = "MenSpecialForces";
		displayName = "$STR_EP1_DN_US_Soldier_TL_EP1";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_SpecialForce"};
				speechPlural[] = {"veh_SpecialForces"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_SpecialForce_CZ"};
				speechPlural[] = {"veh_SpecialForces_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_SpecialForce_CZ4P"};
				speechPlural[] = {"veh_SpecialForces_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_SpecialForce_RU"};
				speechPlural[] = {"veh_SpecialForces_RU"};
			};
		};
		TextPlural = "$STR_DN_SpecialForces";
		TextSingular = "$STR_DN_SpecialForce";
		nameSound = "veh_SpecialForce";
		model = "\Ca\Characters_ACR\acr_wdl_spec1";
		portrait = "\Ca\characters\data\portraits\comBarHead_fr_soldier_ca";
		accuracy = 3.9;
		canHideBodies = 1;
		camouflage = 0.8;
		enableGPS = 1;
		weapons[] = {"M4A3_CCO_EP1","CZ_75_SP_01_PHANTOM","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular_Vector","itemGPS"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade_West","HandGrenade_West","IR_Strobe_Target","SmokeShell","SmokeShellRed","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9"};
		respawnWeapons[] = {"M4A3_CCO_EP1","CZ_75_SP_01_PHANTOM","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular_Vector","itemGPS"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade_West","IR_Strobe_Target","SmokeShell","SmokeShellRed","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9"};
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor = 0.6;
			};
		};
	};
	class CZ_Soldier_Spec2_Wdl_ACR: CZ_Soldier_Spec1_Wdl_ACR
	{
		displayName = "$STR_DN_SCOUT";
		model = "\Ca\Characters_ACR\acr_wdl_spec2";
		portrait = "\Ca\characters\data\portraits\comBarHead_fr_soldier_ca";
		accuracy = 3.9;
		canHideBodies = 1;
		camouflage = 0.8;
		enableGPS = 1;
		weapons[] = {"CZ805_B_GL_ACR","CZ_75_P_07_DUTY","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","LRTV_ACR","itemGPS"};
		magazines[] = {"20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","HandGrenade_West","IR_Strobe_Target","SmokeShell","SmokeShellRed","LaserBatteries","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9"};
		respawnWeapons[] = {"CZ805_B_GL_ACR","CZ_75_P_07_DUTY","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","LRTV_ACR","itemGPS"};
		respawnMagazines[] = {"20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","HandGrenade_West","IR_Strobe_Target","SmokeShell","SmokeShellRed","LaserBatteries","1Rnd_HE_M203","1Rnd_HE_M203","15Rnd_9x19_M9","15Rnd_9x19_M9"};
	};
	class CZ_Soldier_Spec3_Wdl_ACR: CZ_Soldier_Spec1_Wdl_ACR
	{
		vehicleClass = "MenSpecialForces";
		displayName = "$STR_EP1_DN_CZ_Soldier_MG_DES_EP1";
		model = "\Ca\Characters_ACR\acr_wdl_spec3";
		portrait = "\Ca\characters\data\portraits\comBarHead_fr_soldier_ca";
		icon = "\Ca\characters2\data\icon\i_machinegunner_CA";
		weapons[] = {"M60A4_EP1","glock17_EP1","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular_Vector","itemGPS"};
		magazines[] = {"100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","HandGrenade_West","IR_Strobe_Target","SmokeShell","SmokeShellRed","17Rnd_9x19_glock17","17Rnd_9x19_glock17","17Rnd_9x19_glock17","17Rnd_9x19_glock17","17Rnd_9x19_glock17","17Rnd_9x19_glock17","17Rnd_9x19_glock17","17Rnd_9x19_glock17"};
		respawnWeapons[] = {"M60A4_EP1","glock17_EP1","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular_Vector","itemGPS"};
		respawnMagazines[] = {"100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","HandGrenade_West","IR_Strobe_Target","SmokeShell","SmokeShellRed","17Rnd_9x19_glock17","17Rnd_9x19_glock17","17Rnd_9x19_glock17","17Rnd_9x19_glock17"};
	};
	class CZ_Soldier_Spec_Demo_Wdl_ACR: CZ_Soldier_Recon_Wdl_ACR
	{
		vehicleClass = "MenSpecialForces";
		displayName = "$STR_DN_BLACKOP";
		canDeactivateMines = 1;
		engineer = 1;
		backpack = "CZ_Backpack_Specops_EP1";
		weapons[] = {"evo_sd_ACR","CZ_75_SP_01_PHANTOM_SD","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS","Binocular_Vector"};
		magazines[] = {"20Rnd_9x19_EVOSD","20Rnd_9x19_EVOSD","20Rnd_9x19_EVOSD","20Rnd_9x19_EVOSD","20Rnd_9x19_EVOSD","HandGrenade_West","SmokeShell","SmokeShellRed","Mine","Mine","18Rnd_9x19_PhantomSD","18Rnd_9x19_PhantomSD","18Rnd_9x19_PhantomSD","18Rnd_9x19_PhantomSD"};
		respawnWeapons[] = {"evo_sd_ACR","CZ_75_SP_01_PHANTOM_SD","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS","Binocular_Vector"};
		respawnMagazines[] = {"20Rnd_9x19_EVOSD","20Rnd_9x19_EVOSD","20Rnd_9x19_EVOSD","HandGrenade_West","SmokeShell","Mine","18Rnd_9x19_PhantomSD","18Rnd_9x19_PhantomSD"};
	};
	class CZ_Soldier_Spec_Demo_Dst_ACR: CZ_Soldier_Spec_Demo_Wdl_ACR
	{
		vehicleClass = "MenSpecial";
		model = "\Ca\Characters_ACR\acr_dst_spec3";
		backpack = "CZ_Assault_Pack_Explosives_ACR";
	};
	class CZ_Soldier_AT_DES_EP1: CZ_Soldier_base_EP1
	{
		cost = 200000;
		accuracy = 3.6;
		weapons[] = {"Sa58V_CCO_EP1","MAAWS","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","MAAWS_HEAT","MAAWS_HEDP","HandGrenade_West","HandGrenade_West"};
		respawnWeapons[] = {"Sa58V_CCO_EP1","MAAWS","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","MAAWS_HEDP","HandGrenade_West"};
	};
	class CZ_Soldier_AT_Wdl_ACR: CZ_Soldier_Base_ACR
	{
		scope = 2;
		vehicleClass = "MenW";
		displayName = "$STR_EP1_DN_CZ_Soldier_AT_DES_EP1";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_launcherSoldier"};
				speechPlural[] = {"veh_launcherSoldiers"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_launcherSoldier_CZ"};
				speechPlural[] = {"veh_launcherSoldiers_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_launcherSoldier_CZ4P"};
				speechPlural[] = {"veh_launcherSoldiers_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_launcherSoldier_RU"};
				speechPlural[] = {"veh_launcherSoldiers_RU"};
			};
		};
		TextPlural = "$STR_DN_launcherSoldiers";
		TextSingular = "$STR_DN_launcherSoldier";
		nameSound = "veh_launcherSoldier";
		icon = "\Ca\characters2\data\icon\i_launcher_CA";
		model = "\Ca\Characters_ACR\acr_wdl_soldier";
		cost = 200000;
		accuracy = 3.6;
		threat[] = {1,0.8,0.1};
		weapons[] = {"CZ805_A2_ACR","CZ_75_P_07_DUTY","MAAWS","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","MAAWS_HEAT","MAAWS_HEDP","HandGrenade_West","HandGrenade_West","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9"};
		respawnWeapons[] = {"CZ805_A2_ACR","CZ_75_P_07_DUTY","MAAWS","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","MAAWS_HEDP","HandGrenade_West","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9"};
	};
	class CZ_Soldier_RPG_Dst_ACR: CZ_Soldier_Base_ACR
	{
		scope = 2;
		displayName = "$STR_ACR_DN_RPG";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_launcherSoldier"};
				speechPlural[] = {"veh_launcherSoldiers"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_launcherSoldier_CZ"};
				speechPlural[] = {"veh_launcherSoldiers_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_launcherSoldier_CZ4P"};
				speechPlural[] = {"veh_launcherSoldiers_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_launcherSoldier_RU"};
				speechPlural[] = {"veh_launcherSoldiers_RU"};
			};
		};
		TextPlural = "$STR_DN_launcherSoldiers";
		TextSingular = "$STR_DN_launcherSoldier";
		nameSound = "veh_launcherSoldier";
		icon = "\Ca\characters2\data\icon\i_launcher_CA";
		model = "\Ca\Characters_ACR\acr_dst_805";
		cost = 150000;
		accuracy = 3.5;
		threat[] = {1,0.6,0.1};
		weapons[] = {"Sa58V_EP1","CZ_75_P_07_DUTY","RPG7V","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","PG7VR","PG7VL","PG7VL","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9"};
		respawnWeapons[] = {"Sa58V_EP1","CZ_75_P_07_DUTY","RPG7V","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","PG7VL","PG7VL","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9"};
	};
	class CZ_Soldier_RPG_Wdl_ACR: CZ_Soldier_RPG_Dst_ACR
	{
		vehicleClass = "MenW";
		model = "\Ca\Characters_ACR\acr_wdl_soldier";
	};
	class CZ_Soldier_Engineer_Dst_ACR: CZ_Soldier_Base_ACR
	{
		scope = 2;
		displayName = "$STR_DN_ENGINEER";
		picture = "\Ca\characters_E\data\Ico\i_eng_ca";
		model = "\Ca\Characters_ACR\acr_dst_805";
		cost = 60000;
		accuracy = 3.9;
		threat[] = {1,0.5,0.1};
		canDeactivateMines = 1;
		engineer = 1;
		backpack = "CZ_Assault_Pack_Explosives_ACR";
		weapons[] = {"evo_mrad_ACR","CZ_75_P_07_DUTY","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"20Rnd_9x19_EVO","20Rnd_9x19_EVO","20Rnd_9x19_EVO","20Rnd_9x19_EVO","20Rnd_9x19_EVO","20Rnd_9x19_EVO","Mine","Mine","HandGrenade_West","SmokeShell","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9"};
		respawnWeapons[] = {"evo_mrad_ACR","CZ_75_P_07_DUTY","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"20Rnd_9x19_EVO","20Rnd_9x19_EVO","20Rnd_9x19_EVO","Mine","HandGrenade_West","SmokeShell","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9"};
	};
	class CZ_Soldier_Engineer_Wdl_ACR: CZ_Soldier_Engineer_Dst_ACR
	{
		vehicleClass = "MenW";
		model = "\Ca\Characters_ACR\acr_wdl_soldier";
		backpack = "CZ_Backpack_Specops_EP1";
	};
	class CZ_Soldier_Sniper_ACR: CZ_Soldier_Base_ACR
	{
		scope = 2;
		vehicleClass = "MenW";
		displayName = "$STR_DN_SNIPER";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_Sniper"};
				speechPlural[] = {"veh_Snipers"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_Sniper_CZ"};
				speechPlural[] = {"veh_Snipers_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_Sniper_CZ4P"};
				speechPlural[] = {"veh_Snipers_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_Sniper_RU"};
				speechPlural[] = {"veh_Snipers_RU"};
			};
		};
		TextPlural = "$STR_DN_Snipers";
		TextSingular = "$STR_DN_Sniper";
		nameSound = "veh_Sniper";
		portrait = "\Ca\characters\data\portraits\comBarHead_common_sniper_ca";
		model = "\Ca\Characters_ACR\Ghillie_Overall";
		accuracy = 3.9;
		camouflage = 0.5;
		cost = 350000;
		threat[] = {1,0.3,0.3};
		enableGPS = 1;
		weapons[] = {"CZ_750_S1_ACR","CZ_75_SP_01_PHANTOM_SD","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular_Vector","itemGPS"};
		magazines[] = {"10Rnd_762x51_CZ750","10Rnd_762x51_CZ750","10Rnd_762x51_CZ750","10Rnd_762x51_CZ750","HandGrenade_West","HandGrenade_West","IR_Strobe_Target","smokeshellred","18Rnd_9x19_PhantomSD","18Rnd_9x19_PhantomSD","18Rnd_9x19_PhantomSD","18Rnd_9x19_PhantomSD"};
		respawnWeapons[] = {"CZ_750_S1_ACR","CZ_75_SP_01_PHANTOM_SD","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular_Vector","itemGPS"};
		respawnMagazines[] = {"10Rnd_762x51_CZ750","10Rnd_762x51_CZ750","HandGrenade_West","IR_Strobe_Target","smokeshellred","18Rnd_9x19_PhantomSD","18Rnd_9x19_PhantomSD"};
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor = 0.6;
			};
			class HitBody: HitBody
			{
				armor = 0.8;
				passThrough = 1;
			};
		};
	};
	class CZ_Soldier_Spotter_ACR: CZ_Soldier_Sniper_ACR
	{
		displayName = "$STR_EP1_DN_US_SOLDIER_SPOTTER_EP1";
		weapons[] = {"CZ805_A2_SD_ACR","CZ_75_SP_01_PHANTOM_SD","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular_Vector","itemGPS"};
		magazines[] = {"30Rnd_556x45_G36SD","30Rnd_556x45_G36SD","30Rnd_556x45_G36SD","30Rnd_556x45_G36SD","30Rnd_556x45_G36SD","30Rnd_556x45_G36SD","30Rnd_556x45_G36SD","30Rnd_556x45_G36SD","HandGrenade_West","HandGrenade_West","IR_Strobe_Target","smokeshellred","18Rnd_9x19_PhantomSD","18Rnd_9x19_PhantomSD","18Rnd_9x19_PhantomSD","18Rnd_9x19_PhantomSD"};
		respawnWeapons[] = {"CZ805_A2_SD_ACR","CZ_75_SP_01_PHANTOM_SD","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular_Vector","itemGPS"};
		respawnMagazines[] = {"30Rnd_556x45_G36SD","30Rnd_556x45_G36SD","30Rnd_556x45_G36SD","30Rnd_556x45_G36SD","HandGrenade_West","IR_Strobe_Target","smokeshellred","18Rnd_9x19_PhantomSD","18Rnd_9x19_PhantomSD"};
	};
	class CZ_Soldier_Light_Wdl_ACR: CZ_Soldier_Base_ACR
	{
		scope = 2;
		vehicleClass = "MenW";
		displayName = "$STR_EP1_DN_CZ_Soldier_Light_DES_EP1";
		model = "\Ca\Characters_ACR\acr_wdl_light";
		portrait = "\Ca\characters\data\portraits\comBarHead_civ_man_ca";
		weaponSlots = "1	 + 	4	 + 6*		256	 + 2*	4096	 + 	2	 + 4*	16  + 6*131072";
		weapons[] = {"Throw","Put","ItemMap","ItemCompass","ItemWatch"};
		magazines[] = {};
		respawnWeapons[] = {"Throw","Put","ItemMap","ItemCompass","ItemWatch"};
		respawnMagazines[] = {};
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor = 0.6;
			};
			class HitBody: HitBody
			{
				armor = 0.8;
				passThrough = 1;
			};
		};
	};
	class CZ_Soldier_RPG_Ass_Dst_ACR: CZ_Soldier_Base_ACR
	{
		scope = 2;
		displayName = "$STR_EP1_DN_US_SOLDIER_AAT_EP1";
		model = "\Ca\Characters_ACR\acr_dst_soldier";
		backpack = "CZ_Backpack_RPG_ACR";
		weapons[] = {"Sa58V_EP1","CZ_75_P_07_DUTY","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","PG7VR","PG7VL","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9"};
		respawnWeapons[] = {"Sa58V_EP1","CZ_75_P_07_DUTY","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","30Rnd_762x39_SA58","PG7VL","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9"};
	};
	class CZ_Soldier_RPG_Ass_Wdl_ACR: CZ_Soldier_RPG_Ass_Dst_ACR
	{
		vehicleClass = "MenW";
		model = "\Ca\Characters_ACR\acr_wdl_805";
		weapons[] = {"CZ805_A1_ACR","CZ_75_P_07_DUTY","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","HandGrenade_West","HandGrenade_West","SmokeShell","SmokeShellRed","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9"};
		respawnWeapons[] = {"CZ805_A1_ACR","CZ_75_P_07_DUTY","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","HandGrenade_West","SmokeShell","SmokeShellRed","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9"};
	};
	class CZ_Sharpshooter_DES_ACR: CZ_Soldier_base_EP1
	{
		scope = 2;
		displayName = "$STR_ACR_DN_SHARPSHOOTER";
		model = "\Ca\Characters_ACR\acr_dst_soldier";
		accuracy = 3.9;
		weapons[] = {"SVD","CZ_75_P_07_DUTY","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"10Rnd_762x54_SVD","10Rnd_762x54_SVD","10Rnd_762x54_SVD","10Rnd_762x54_SVD","10Rnd_762x54_SVD","10Rnd_762x54_SVD","10Rnd_762x54_SVD","10Rnd_762x54_SVD","HandGrenade_West","HandGrenade_West","HandGrenade_West","HandGrenade_West","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9"};
		respawnWeapons[] = {"SVD","CZ_75_P_07_DUTY","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"10Rnd_762x54_SVD","10Rnd_762x54_SVD","10Rnd_762x54_SVD","10Rnd_762x54_SVD","HandGrenade_West","HandGrenade_West","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9"};
	};
	class CZ_Sharpshooter_Wdl_ACR: CZ_Sharpshooter_DES_ACR
	{
		model = "\Ca\Characters_ACR\acr_wdl_soldier";
		vehicleClass = "MenW";
	};
};
//};

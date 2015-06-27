////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:02:17 2014 : Source 'file' date Fri Oct 31 06:02:17 2014
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

//Class CHARACTERS_PMC : config.bin{
class CfgFaces
{
	class Default;
	class Man: Default
	{
		class Default;
		class FacePoet: Default
		{
			expansion = 4;
			name = "Brian F.";
			texture = "CA\characters_PMC\Heads\Data\hhl_BrianFrost_co.paa";
			disabled = 0;
			identityTypes[] = {"PMC_Frost"};
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
		};
		class FaceStranger: Default
		{
			expansion = 4;
			name = "Mark R.";
			texture = "CA\characters_PMC\Heads\Data\hhl_MarkReynolds_co.paa";
			disabled = 0;
			identityTypes[] = {"PMC_Reynolds"};
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
		};
		class FaceTanny: Default
		{
			expansion = 4;
			name = "Tanny R.";
			texture = "CA\characters_PMC\Heads\Data\hhl_Tanny_co.paa";
			disabled = 0;
			identityTypes[] = {"PMC_Tanny"};
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
		};
	};
};
class CfgPatches
{
	class CACharacters_PMC
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.54;
		requiredAddons[] = {"CA_PMC","CAWeapons_PMC_XM8"};
	};
};
class cfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class HitPoints;
	};
	class SoldierGB: CAManBase
	{
		class TalkTopics;
		class HitPoints: HitPoints
		{
			class HitHead;
			class HitBody;
		};
	};
	class Soldier_Base_PMC: SoldierGB
	{
		expansion = 4;
		vehicleClass = "Men";
		model = "\Ca\Characters_PMC\PMC_soldier\PMC_soldier.p3d";
		portrait = "\Ca\characters\data\portraits\comBarHead_civ_man_ca.paa";
		icon = "\Ca\characters2\data\icon\i_soldier_CA.paa";
		faction = "PMC_BAF";
		accuracy = 2;
		identityTypes[] = {"Language_EN_EP1","Head_CIV","PMC_Glasses_PMC"};
		canCarryBackPack = 1;
		languages[] = {"EN","TK"};
		class TalkTopics: TalkTopics
		{
			core_en = "Core_Full_E";
		};
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor = 0.6;
			};
			class HitBody: HitBody
			{
				armor = 1;
				passThrough = 0.8;
			};
		};
		weapons[] = {"m8_carbine","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade_West","HandGrenade_West","HandGrenade_West","SmokeShell"};
		respawnWeapons[] = {"m8_carbine","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade_West","SmokeShell"};
		class EventHandlers;
	};
	class Soldier_PMC: Soldier_Base_PMC
	{
		scope = 2;
		displayName = "$STR_PMC_DN_SECURITY_CONTRACTOR_XM8";
		model = "\Ca\Characters_PMC\PMC_soldier\PMC_soldier.p3d";
		HiddenSelections[] = {"camo1","camo2","camo3"};
		HiddenSelectionsTextures[] = {"ca\characters_pmc\pmc_soldier\data\bauer_co.paa","ca\characters_pmc\pmc_soldier\data\bauer_gear_co.paa","ca\characters_pmc\pmc_soldier\data\headgear_co.paa"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setObjectTexture [0,[""\Ca\Characters_PMC\PMC_soldier\Data\bauer_2_co.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\bauer_3_co.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\bauer_4_co.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\bauer_5_co.paa""] select floor random 4]; (_this select 0) setObjectTexture [1,[""ca\characters_pmc\pmc_soldier\data\bauer_gear_co.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\Bauer_Gear_1_co.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\Bauer_Gear_2_co.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\Bauer_Gear_3_co.paa""] select floor random 4]; (_this select 0) setObjectTexture [2,[""\Ca\Characters_PMC\PMC_soldier\Data\HeadGear_CO.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\HeadGear_1_CO.paa""] select floor random 2]";
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"Ca\Characters_PMC\PMC_soldier\Data\acr_equip.rvmat","Ca\Characters_PMC\PMC_soldier\Data\w1_acr_equip.rvmat","Ca\Characters_PMC\PMC_soldier\Data\w2_acr_equip.rvmat","Ca\Characters_PMC\PMC_soldier\Data\Bauer.rvmat","Ca\Characters_PMC\PMC_soldier\Data\w1_Bauer.rvmat","Ca\Characters_PMC\PMC_soldier\Data\w2_Bauer.rvmat","Ca\Characters_PMC\PMC_soldier\Data\Bauer_Gear.rvmat","Ca\Characters_PMC\PMC_soldier\Data\w1_Bauer_Gear.rvmat","Ca\Characters_PMC\PMC_soldier\Data\w2_Bauer_Gear.rvmat","Ca\Characters_PMC\PMC_soldier\Data\HeadGear.rvmat","Ca\Characters_PMC\PMC_soldier\Data\w1_HeadGear.rvmat","Ca\Characters_PMC\PMC_soldier\Data\w2_HeadGear.rvmat"};
		};
	};
	class Soldier_M4A3_PMC: Soldier_PMC
	{
		displayName = "$STR_PMC_DN_SECURITY_CONTRACTOR_M4A3";
		weapons[] = {"M4A3_CCO_EP1","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade_West","HandGrenade_West","HandGrenade_West","SmokeShell"};
		respawnWeapons[] = {"M4A3_CCO_EP1","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade_West","SmokeShell"};
	};
	class Soldier_Engineer_PMC: Soldier_Base_PMC
	{
		scope = 2;
		displayName = "$STR_PMC_DN_FIELD_TECHNICIAN";
		cost = 60000;
		accuracy = 3.9;
		picture = "\Ca\characters_E\data\Ico\i_eng_ca.paa";
		engineer = 1;
		canDeactivateMines = 1;
		canCarryBackpack = 0;
		threat[] = {1,0.5,0.1};
		weapons[] = {"m8_compact","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","PipeBomb","Mine","HandGrenade_West","SmokeShell"};
		respawnWeapons[] = {"m8_compact","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","PipeBomb","Mine","HandGrenade_West","SmokeShell"};
		model = "\Ca\Characters_PMC\Frost\Frost.p3d";
		HiddenSelections[] = {"camo"};
		HiddenSelectionsTextures[] = {"ca\characters_pmc\frost\data\frost_co.paa"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setObjectTexture [0,[""\Ca\Characters_PMC\Frost\Data\Frost_1_co.paa"",""\Ca\Characters_PMC\Frost\Data\Frost_2_co.paa"",""\Ca\Characters_PMC\Frost\Data\Frost_3_co.paa""] select floor random 3];";
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"Ca\Characters_PMC\Frost\Data\frost.rvmat","Ca\Characters_PMC\Frost\Data\w1_frost.rvmat","Ca\Characters_PMC\Frost\Data\w2_frost.rvmat"};
		};
	};
	class Soldier_Crew_PMC: Soldier_Base_PMC
	{
		scope = 2;
		displayName = "$STR_PMC_DN_TACTICAL_DRIVER";
		cost = 20000;
		accuracy = 3.4;
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
		weaponSlots = "1	 + 	4	 + 8 * 		256	 + 2 * 	4096	 + 	2	 + 4*	16  + 12*131072";
		weapons[] = {"m8_compact","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade_West","HandGrenade_West"};
		respawnWeapons[] = {"m8_compact","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade_West"};
		model = "\Ca\Characters_PMC\Frost\Frost.p3d";
		HiddenSelections[] = {"camo"};
		HiddenSelectionsTextures[] = {"ca\characters_pmc\frost\data\frost_co.paa"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setObjectTexture [0,[""\Ca\Characters_PMC\Frost\Data\Frost_1_co.paa"",""\Ca\Characters_PMC\Frost\Data\Frost_2_co.paa"",""\Ca\Characters_PMC\Frost\Data\Frost_3_co.paa""] select floor random 3];";
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"Ca\Characters_PMC\Frost\Data\frost.rvmat","Ca\Characters_PMC\Frost\Data\w1_frost.rvmat","Ca\Characters_PMC\Frost\Data\w2_frost.rvmat"};
		};
	};
	class Soldier_Medic_PMC: Soldier_Base_PMC
	{
		scope = 2;
		displayName = "$STR_PMC_DN_FIELD_MEDIC";
		picture = "\Ca\characters\data\Ico\i_Med_CA.paa";
		icon = "\Ca\characters2\data\icon\i_medic_CA.paa";
		accuracy = 3.7;
		cost = 100000;
		attendant = 1;
		canCarryBackPack = 0;
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
		weaponSlots = "1	 + 	4	 + 8 * 		256	 + 2 * 	4096	 + 	2	 + 4*	16  + 12*131072";
		weapons[] = {"m8_compact","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShell"};
		respawnWeapons[] = {"m8_compact","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell"};
		model = "\Ca\Characters_PMC\Frost\Frost.p3d";
		HiddenSelections[] = {"camo"};
		HiddenSelectionsTextures[] = {"ca\characters_pmc\frost\data\frost_co.paa"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setObjectTexture [0,[""\Ca\Characters_PMC\Frost\Data\Frost_1_co.paa"",""\Ca\Characters_PMC\Frost\Data\Frost_2_co.paa"",""\Ca\Characters_PMC\Frost\Data\Frost_3_co.paa""] select floor random 3];";
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"Ca\Characters_PMC\Frost\Data\frost.rvmat","Ca\Characters_PMC\Frost\Data\w1_frost.rvmat","Ca\Characters_PMC\Frost\Data\w2_frost.rvmat"};
		};
	};
	class Soldier_TL_PMC: Soldier_Base_PMC
	{
		scope = 2;
		displayName = "$STR_PMC_DN_TEAM_COORDINATOR";
		Picture = "\Ca\characters\data\Ico\i_tleader_CA.paa";
		Icon = "\Ca\characters2\data\icon\i_leader_CA.paa";
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
		accuracy = 3.6;
		cost = 400000;
		enableGPS = 1;
		weapons[] = {"m8_carbine","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular_Vector","ItemGPS"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","IR_Strobe_Target","SmokeShellRed","HandGrenade_West","HandGrenade_West"};
		respawnWeapons[] = {"m8_carbine","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular_Vector","ItemGPS"};
		respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","IR_Strobe_Target","SmokeShellRed","HandGrenade_West"};
		model = "\Ca\Characters_PMC\Gracenko\Gracenko.p3d";
		HiddenSelections[] = {"camo"};
		HiddenSelectionsTextures[] = {"ca\characters_pmc\gracenko\data\gracenko_co.paa"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setObjectTexture [0,[""\Ca\Characters_PMC\Gracenko\Data\Gracenko_1_co.paa"",""\Ca\Characters_PMC\Gracenko\Data\Gracenko_2_co.paa"",""\Ca\Characters_PMC\Gracenko\Data\Gracenko_3_co.paa"",""\Ca\Characters_PMC\Gracenko\Data\Gracenko_4_co.paa""] select floor random 4];";
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"Ca\Characters_PMC\Gracenko\Data\gracenko.rvmat","Ca\Characters_PMC\Gracenko\Data\w1_gracenko.rvmat","Ca\Characters_PMC\Gracenko\Data\w2_gracenko.rvmat"};
		};
	};
	class Soldier_Pilot_PMC: Soldier_Base_PMC
	{
		scope = 2;
		displayName = "$STR_PMC_DN_TACTICAL_PILOT";
		model = "\Ca\Characters_PMC\PMC_Pilot\PMC_Pilot.p3d";
		HiddenSelections[] = {"camo1","camo3"};
		HiddenSelectionsTextures[] = {"ca\characters_pmc\asano\data\tex1_co.paa","ca\characters_pmc\asano\data\tex2_co.paa"};
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
		cost = 20000;
		enableGPS = 1;
		weapons[] = {"m8_compact","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade_West","HandGrenade_West","SmokeShell","SmokeShellRed"};
		respawnWeapons[] = {"m8_compact","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade_West","SmokeShellRed"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"Ca\Characters_PMC\Asano\Data\tex1.rvmat","Ca\Characters_PMC\Asano\Data\w1_tex1.rvmat","Ca\Characters_PMC\Asano\Data\w2_tex1.rvmat","Ca\Characters_PMC\Asano\Data\tex2.rvmat","Ca\Characters_PMC\Asano\Data\w1_tex2.rvmat","Ca\Characters_PMC\Asano\Data\w2_tex2.rvmat"};
		};
	};
	class Soldier_MG_PMC: Soldier_Base_PMC
	{
		scope = 2;
		displayName = "$STR_PMC_DN_FIELD_SPECIALIST_XM8";
		Picture = "\Ca\characters\data\Ico\i_null_CA.paa";
		Icon = "\Ca\characters2\data\icon\i_machinegunner_CA.paa";
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
		cost = 130000;
		accuracy = 3.7;
		threat[] = {1,0.1,0.6};
		weapons[] = {"m8_SAW","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"100Rnd_556x45_BetaCMag","100Rnd_556x45_BetaCMag","100Rnd_556x45_BetaCMag","100Rnd_556x45_BetaCMag","100Rnd_556x45_BetaCMag","HandGrenade_West","HandGrenade_West"};
		respawnWeapons[] = {"m8_SAW","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"100Rnd_556x45_BetaCMag","100Rnd_556x45_BetaCMag","100Rnd_556x45_BetaCMag","HandGrenade_West"};
		model = "\Ca\Characters_PMC\Asano\Asano.p3d";
		HiddenSelections[] = {"camo1","camo2","camo3"};
		HiddenSelectionsTextures[] = {"ca\characters_pmc\asano\data\tex1_co.paa","ca\characters_pmc\pmc_soldier\data\headgear_co.paa","ca\characters_pmc\asano\data\tex2_co.paa"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setObjectTexture [0,[""\Ca\Characters_PMC\Asano\Data\tex1_1_co.paa"",""\Ca\Characters_PMC\Asano\Data\tex1_2_co.paa"",""\Ca\Characters_PMC\Asano\Data\tex1_3_co.paa"",""\Ca\Characters_PMC\Asano\Data\tex1_4_co.paa"",""\Ca\Characters_PMC\Asano\Data\tex1_5_co.paa""] select floor random 5];(_this select 0) setObjectTexture [1,[""ca\characters_pmc\pmc_soldier\data\headgear_co.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\HeadGear_1_CO.paa""] select floor random 2];(_this select 0) setObjectTexture [2,[""ca\characters_pmc\asano\data\tex2_co.paa"",""ca\characters_pmc\asano\data\tex2_1_co.paa""] select floor random 2]";
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"Ca\Characters_PMC\Asano\Data\tex1.rvmat","Ca\Characters_PMC\Asano\Data\w1_tex1.rvmat","Ca\Characters_PMC\Asano\Data\w2_tex1.rvmat","Ca\Characters_PMC\Asano\Data\tex2.rvmat","Ca\Characters_PMC\Asano\Data\w1_tex2.rvmat","Ca\Characters_PMC\Asano\Data\w2_tex2.rvmat"};
		};
	};
	class Soldier_MG_PKM_PMC: Soldier_MG_PMC
	{
		displayName = "$STR_PMC_DN_FIELD_SPECIALIST_PKM";
		weapons[] = {"PK","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"100Rnd_762x54_PK","100Rnd_762x54_PK","100Rnd_762x54_PK","100Rnd_762x54_PK","100Rnd_762x54_PK","HandGrenade_West","HandGrenade_West"};
		respawnWeapons[] = {"PK","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"100Rnd_762x54_PK","100Rnd_762x54_PK","100Rnd_762x54_PK","HandGrenade_West"};
	};
	class Soldier_Sniper_PMC: Soldier_Base_PMC
	{
		scope = 2;
		displayName = "$STR_PMC_DN_DEFENSIVE_MARKSMAN";
		picture = "\Ca\characters\data\Ico\i_null_CA.paa";
		portrait = "\Ca\characters\data\portraits\comBarHead_civ_man_ca.paa";
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
		accuracy = 3.9;
		cost = 350000;
		threat[] = {1,0.3,0.3};
		weapons[] = {"m8_sharpshooter","NVGoggles","Binocular_Vector","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade_West","HandGrenade_West","smokeshell","smokeshellgreen"};
		respawnWeapons[] = {"m8_sharpshooter","NVGoggles","Binocular_Vector","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade_West","smokeshellgreen"};
		model = "\Ca\Characters_PMC\PMC_soldier\PMC_soldier.p3d";
		HiddenSelections[] = {"camo1","camo2","camo3"};
		HiddenSelectionsTextures[] = {"ca\characters_pmc\pmc_soldier\data\bauer_co.paa","ca\characters_pmc\pmc_soldier\data\bauer_gear_co.paa","ca\characters_pmc\pmc_soldier\data\headgear_co.paa"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setObjectTexture [0,[""\Ca\Characters_PMC\PMC_soldier\Data\bauer_2_co.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\bauer_3_co.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\bauer_4_co.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\bauer_5_co.paa""] select floor random 4]; (_this select 0) setObjectTexture [1,[""ca\characters_pmc\pmc_soldier\data\bauer_gear_co.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\Bauer_Gear_1_co.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\Bauer_Gear_2_co.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\Bauer_Gear_3_co.paa""] select floor random 4]; (_this select 0) setObjectTexture [2,[""\Ca\Characters_PMC\PMC_soldier\Data\HeadGear_CO.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\HeadGear_1_CO.paa""] select floor random 2]";
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"Ca\Characters_PMC\PMC_soldier\Data\acr_equip.rvmat","Ca\Characters_PMC\PMC_soldier\Data\w1_acr_equip.rvmat","Ca\Characters_PMC\PMC_soldier\Data\w2_acr_equip.rvmat","Ca\Characters_PMC\PMC_soldier\Data\Bauer.rvmat","Ca\Characters_PMC\PMC_soldier\Data\w1_Bauer.rvmat","Ca\Characters_PMC\PMC_soldier\Data\w2_Bauer.rvmat","Ca\Characters_PMC\PMC_soldier\Data\Bauer_Gear.rvmat","Ca\Characters_PMC\PMC_soldier\Data\w1_Bauer_Gear.rvmat","Ca\Characters_PMC\PMC_soldier\Data\w2_Bauer_Gear.rvmat","Ca\Characters_PMC\PMC_soldier\Data\HeadGear.rvmat","Ca\Characters_PMC\PMC_soldier\Data\w1_HeadGear.rvmat","Ca\Characters_PMC\PMC_soldier\Data\w2_HeadGear.rvmat"};
		};
	};
	class Soldier_Sniper_KSVK_PMC: Soldier_Sniper_PMC
	{
		scope = 2;
		displayName = "$STR_PMC_DN_TACTICAL_SPECIALIST_KSVK";
		threat[] = {1,0.6,0.6};
		weapons[] = {"KSVK","NVGoggles","Binocular_Vector","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS"};
		magazines[] = {"5Rnd_127x108_KSVK","5Rnd_127x108_KSVK","5Rnd_127x108_KSVK","5Rnd_127x108_KSVK","5Rnd_127x108_KSVK","5Rnd_127x108_KSVK","5Rnd_127x108_KSVK","5Rnd_127x108_KSVK","HandGrenade_West","HandGrenade_West","smokeshell","smokeshellgreen"};
		respawnWeapons[] = {"KSVK","NVGoggles","Binocular_Vector","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS"};
		respawnMagazines[] = {"5Rnd_127x108_KSVK","5Rnd_127x108_KSVK","5Rnd_127x108_KSVK","5Rnd_127x108_KSVK","5Rnd_127x108_KSVK","5Rnd_127x108_KSVK","HandGrenade_West","smokeshellgreen"};
	};
	class Soldier_GL_PMC: Soldier_Base_PMC
	{
		scope = 2;
		displayName = "$STR_PMC_DN_SECURITY_CONTRACTOR_XM8_GL";
		picture = "\Ca\characters\data\Ico\i_null_CA.paa";
		icon = "\Ca\characters2\data\icon\i_soldier_CA.paa";
		cost = 60000;
		accuracy = 3.9;
		weapons[] = {"m8_carbineGL","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade_West","HandGrenade_West","SmokeShell","SmokeShell","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203"};
		respawnWeapons[] = {"m8_carbineGL","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade_West","SmokeShell","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203"};
		model = "\Ca\Characters_PMC\Asano\Asano.p3d";
		HiddenSelections[] = {"camo1","camo2","camo3"};
		HiddenSelectionsTextures[] = {"ca\characters_pmc\asano\data\tex1_co.paa","ca\characters_pmc\pmc_soldier\data\headgear_co.paa","ca\characters_pmc\asano\data\tex2_co.paa"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setObjectTexture [0,[""\Ca\Characters_PMC\Asano\Data\tex1_1_co.paa"",""\Ca\Characters_PMC\Asano\Data\tex1_2_co.paa"",""\Ca\Characters_PMC\Asano\Data\tex1_3_co.paa"",""\Ca\Characters_PMC\Asano\Data\tex1_4_co.paa"",""\Ca\Characters_PMC\Asano\Data\tex1_5_co.paa""] select floor random 5];(_this select 0) setObjectTexture [1,[""ca\characters_pmc\pmc_soldier\data\headgear_co.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\HeadGear_1_CO.paa""] select floor random 2];(_this select 0) setObjectTexture [2,[""ca\characters_pmc\asano\data\tex2_co.paa"",""ca\characters_pmc\asano\data\tex2_1_co.paa""] select floor random 2]";
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"Ca\Characters_PMC\Asano\Data\tex1.rvmat","Ca\Characters_PMC\Asano\Data\w1_tex1.rvmat","Ca\Characters_PMC\Asano\Data\w2_tex1.rvmat","Ca\Characters_PMC\Asano\Data\tex2.rvmat","Ca\Characters_PMC\Asano\Data\w1_tex2.rvmat","Ca\Characters_PMC\Asano\Data\w2_tex2.rvmat"};
		};
	};
	class Soldier_GL_M16A2_PMC: Soldier_GL_PMC
	{
		displayName = "$STR_PMC_DN_SECURITY_CONTRACTOR_M16A2_GL";
		weapons[] = {"M16A2GL","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade_West","HandGrenade_West","SmokeShell","SmokeShell","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203"};
		respawnWeapons[] = {"M16A2GL","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade_West","SmokeShell","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203"};
	};
	class Soldier_Bodyguard_M4_PMC: Soldier_Base_PMC
	{
		scope = 2;
		displayName = "$STR_PMC_DN_BODYGUARD_M4A1";
		model = "\ca\characters_E\Civil\Hladik\european_man_02.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ca\characters_e\Civil\Hladik\Data\european-man_02_co.paa"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"Ca\characters_e\civil\hladik\data\european-man_02.rvmat","Ca\characters_E\Civil\Hladik\Data\w1_european-man_02.rvmat","Ca\characters_E\Civil\Hladik\Data\w2_european-man_02.rvmat"};
		};
		weapons[] = {"M4A1","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade_West","HandGrenade_West","SmokeShellRed","SmokeShell"};
		respawnWeapons[] = {"M4A1","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade_West","SmokeShellRed"};
	};
	class Soldier_Bodyguard_AA12_PMC: Soldier_Base_PMC
	{
		scope = 2;
		displayName = "$STR_PMC_DN_BODYGUARD_AA12";
		threat[] = {1,0.2,0.1};
		weapons[] = {"AA12_PMC","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"20Rnd_B_AA12_Pellets","20Rnd_B_AA12_Pellets","20Rnd_B_AA12_Pellets","20Rnd_B_AA12_Pellets","20Rnd_B_AA12_Pellets","20Rnd_B_AA12_Pellets","20Rnd_B_AA12_Pellets","20Rnd_B_AA12_Pellets","HandGrenade_West","HandGrenade_West","SmokeShellRed","SmokeShell"};
		respawnWeapons[] = {"AA12_PMC","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"20Rnd_B_AA12_Pellets","20Rnd_B_AA12_Pellets","20Rnd_B_AA12_Pellets","20Rnd_B_AA12_Pellets","HandGrenade_West","SmokeShellRed"};
		model = "\Ca\Characters_PMC\Dixon\Dixon.p3d";
		HiddenSelections[] = {"camo1","camo2","camo3"};
		HiddenSelectionsTextures[] = {"ca\characters_E\Civil\Harris\Data\european-man_01_co.paa","ca\characters_pmc\dixon\data\dix_co.paa","ca\characters_E\Delta\Data\DO_Equip_CO.paa"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setObjectTexture [0,[""ca\characters_pmc\dixon\data\european-man_02_co.paa"",""ca\characters_pmc\dixon\data\european-man_03_co.paa"",""ca\characters_pmc\dixon\data\european-man_04_co.paa"",""ca\characters_pmc\dixon\data\european-man_05_co.paa""] select floor random 4]; (_this select 0) setObjectTexture [1,[""Ca\Characters_PMC\Dixon\Data\Dix_1_CO.paa"",""Ca\Characters_PMC\Dixon\Data\Dix_2_CO.paa"",""Ca\Characters_PMC\Dixon\Data\Dix_3_CO.paa"",""Ca\Characters_PMC\Dixon\Data\Dix_4_CO.paa"",""Ca\Characters_PMC\Dixon\Data\Dix_4_CO.paa""] select floor random 5]";
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"Ca\Characters_PMC\Dixon\Data\dix.rvmat","Ca\Characters_PMC\Dixon\Data\w1_dix.rvmat","Ca\Characters_PMC\Dixon\Data\w2_dix.rvmat","Ca\Characters_PMC\Dixon\Data\do_equip.rvmat","Ca\Characters_PMC\Dixon\Data\w1_do_equip.rvmat","Ca\Characters_PMC\Dixon\Data\w2_do_equip.rvmat","Ca\Characters_PMC\Dixon\Data\european-man_01.rvmat","Ca\Characters_PMC\Dixon\Data\w1_european-man_01.rvmat","Ca\Characters_PMC\Dixon\Data\w2_european-man_01.rvmat"};
		};
	};
	class Soldier_AA_PMC: Soldier_Base_PMC
	{
		scope = 2;
		displayName = "$STR_PMC_DN_TACTICAL_SPECIALIST_STINGER";
		icon = "\Ca\characters2\data\icon\i_launcher_CA.paa";
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
		threat[] = {1,0.1,1};
		weapons[] = {"FN_FAL","Stinger","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","HandGrenade_West","HandGrenade_West","Stinger"};
		respawnWeapons[] = {"FN_FAL","Stinger","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","HandGrenade_West","Stinger"};
		model = "\Ca\Characters_PMC\Asano\Asano.p3d";
		HiddenSelections[] = {"camo1","camo2","camo3"};
		HiddenSelectionsTextures[] = {"ca\characters_pmc\asano\data\tex1_co.paa","ca\characters_pmc\pmc_soldier\data\headgear_co.paa","ca\characters_pmc\asano\data\tex2_co.paa"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setObjectTexture [0,[""\Ca\Characters_PMC\Asano\Data\tex1_1_co.paa"",""\Ca\Characters_PMC\Asano\Data\tex1_2_co.paa"",""\Ca\Characters_PMC\Asano\Data\tex1_3_co.paa"",""\Ca\Characters_PMC\Asano\Data\tex1_4_co.paa"",""\Ca\Characters_PMC\Asano\Data\tex1_5_co.paa""] select floor random 5];(_this select 0) setObjectTexture [1,[""ca\characters_pmc\pmc_soldier\data\headgear_co.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\HeadGear_1_CO.paa""] select floor random 2];(_this select 0) setObjectTexture [2,[""ca\characters_pmc\asano\data\tex2_co.paa"",""ca\characters_pmc\asano\data\tex2_1_co.paa""] select floor random 2]";
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"Ca\Characters_PMC\Asano\Data\tex1.rvmat","Ca\Characters_PMC\Asano\Data\w1_tex1.rvmat","Ca\Characters_PMC\Asano\Data\w2_tex1.rvmat","Ca\Characters_PMC\Asano\Data\tex2.rvmat","Ca\Characters_PMC\Asano\Data\w1_tex2.rvmat","Ca\Characters_PMC\Asano\Data\w2_tex2.rvmat"};
		};
	};
	class Soldier_AT_PMC: Soldier_Base_PMC
	{
		scope = 2;
		displayName = "$STR_PMC_DN_FIELD_SPECIALIST_RPG18";
		icon = "\Ca\characters2\data\icon\i_launcher_CA.paa";
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
		threat[] = {1,0.9,0.1};
		cost = 150000;
		weapons[] = {"FN_FAL","RPG18","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","HandGrenade_West","HandGrenade_West","RPG18"};
		respawnWeapons[] = {"FN_FAL","RPG18","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","HandGrenade_West","RPG18"};
		model = "\Ca\Characters_PMC\Asano\Asano.p3d";
		HiddenSelections[] = {"camo1","camo2","camo3"};
		HiddenSelectionsTextures[] = {"ca\characters_pmc\asano\data\tex1_co.paa","ca\characters_pmc\pmc_soldier\data\headgear_co.paa","ca\characters_pmc\asano\data\tex2_co.paa"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setObjectTexture [0,[""\Ca\Characters_PMC\Asano\Data\tex1_1_co.paa"",""\Ca\Characters_PMC\Asano\Data\tex1_2_co.paa"",""\Ca\Characters_PMC\Asano\Data\tex1_3_co.paa"",""\Ca\Characters_PMC\Asano\Data\tex1_4_co.paa"",""\Ca\Characters_PMC\Asano\Data\tex1_5_co.paa""] select floor random 5];(_this select 0) setObjectTexture [1,[""ca\characters_pmc\pmc_soldier\data\headgear_co.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\HeadGear_1_CO.paa""] select floor random 2];(_this select 0) setObjectTexture [2,[""ca\characters_pmc\asano\data\tex2_co.paa"",""ca\characters_pmc\asano\data\tex2_1_co.paa""] select floor random 2]";
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"Ca\Characters_PMC\Asano\Data\tex1.rvmat","Ca\Characters_PMC\Asano\Data\w1_tex1.rvmat","Ca\Characters_PMC\Asano\Data\w2_tex1.rvmat","Ca\Characters_PMC\Asano\Data\tex2.rvmat","Ca\Characters_PMC\Asano\Data\w1_tex2.rvmat","Ca\Characters_PMC\Asano\Data\w2_tex2.rvmat"};
		};
	};
	class Special_Character_Base_PMC: Soldier_Base_PMC
	{
		vehicleClass = "MenSpecial";
	};
	class Poet_PMC: Special_Character_Base_PMC
	{
		scope = 2;
		displayName = "$STR_PMC_DN_FROST";
		model = "\Ca\Characters_PMC\Frost\Frost.p3d";
		portrait = "Ca\Characters_PMC\data\ui\comBarHead_pmcFrost_ca.paa";
		weapons[] = {"m8_carbine_pmc","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade_West","HandGrenade_West","SmokeShell","SmokeShellRed"};
		respawnWeapons[] = {"m8_carbine_pmc","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade_West","SmokeShellRed"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"Ca\Characters_PMC\Frost\Data\frost.rvmat","Ca\Characters_PMC\Frost\Data\w1_frost.rvmat","Ca\Characters_PMC\Frost\Data\w2_frost.rvmat"};
		};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setidentity ""PMC_Poet""";
			HandleIdentity = "true";
		};
		class Library
		{
			libTextDesc = "$STR_PMC_LIB_POET";
		};
	};
	class Ry_PMC: Special_Character_Base_PMC
	{
		scope = 2;
		displayName = "$STR_PMC_DN_ASANO";
		model = "\Ca\Characters_PMC\Asano\Asano.p3d";
		portrait = "Ca\Characters_PMC\data\ui\comBarHead_pmcAsano_ca.paa";
		weapons[] = {"m8_sharpshooter","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade_West","HandGrenade_West","SmokeShell","SmokeShellRed"};
		respawnWeapons[] = {"m8_sharpshooter","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade_West","SmokeShellRed"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"Ca\Characters_PMC\Asano\Data\tex1.rvmat","Ca\Characters_PMC\Asano\Data\w1_tex1.rvmat","Ca\Characters_PMC\Asano\Data\w2_tex1.rvmat","Ca\Characters_PMC\Asano\Data\tex2.rvmat","Ca\Characters_PMC\Asano\Data\w1_tex2.rvmat","Ca\Characters_PMC\Asano\Data\w2_tex2.rvmat"};
		};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setidentity ""PMC_Ry""";
			HandleIdentity = "true";
		};
		class Library
		{
			libTextDesc = "$STR_PMC_LIB_RY";
		};
	};
	class Reynolds_PMC: Special_Character_Base_PMC
	{
		scope = 2;
		displayName = "$STR_PMC_DN_REYNOLDS";
		model = "\Ca\Characters_PMC\Gracenko\Gracenko.p3d";
		portrait = "Ca\Characters_PMC\data\ui\comBarHead_pmcReynolds_ca.paa";
		weapons[] = {"m8_compact_pmc","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade_West","HandGrenade_West","SmokeShell","SmokeShellRed"};
		respawnWeapons[] = {"m8_compact_pmc","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade_West","SmokeShellRed"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"Ca\Characters_PMC\Gracenko\Data\gracenko.rvmat","Ca\Characters_PMC\Gracenko\Data\w1_gracenko.rvmat","Ca\Characters_PMC\Gracenko\Data\w2_gracenko.rvmat"};
		};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setidentity ""PMC_Reynolds_NoGlasses""";
			HandleIdentity = "true";
		};
		class Library
		{
			libTextDesc = "$STR_PMC_LIB_REYNOLDS";
		};
	};
	class Tanny_PMC: Special_Character_Base_PMC
	{
		scope = 2;
		displayName = "$STR_PMC_DN_TANNY";
		model = "\Ca\Characters_PMC\PMC_soldier\PMC_soldier.p3d";
		portrait = "Ca\Characters_PMC\data\ui\comBarHead_pmcTanny_ca.paa";
		weapons[] = {"m8_tws","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade_West","HandGrenade_West","SmokeShell","SmokeShellRed"};
		respawnWeapons[] = {"m8_tws","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade_West","SmokeShellRed"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"Ca\Characters_PMC\PMC_soldier\Data\acr_equip.rvmat","Ca\Characters_PMC\PMC_soldier\Data\w1_acr_equip.rvmat","Ca\Characters_PMC\PMC_soldier\Data\w2_acr_equip.rvmat","Ca\Characters_PMC\PMC_soldier\Data\Bauer.rvmat","Ca\Characters_PMC\PMC_soldier\Data\w1_Bauer.rvmat","Ca\Characters_PMC\PMC_soldier\Data\w2_Bauer.rvmat","Ca\Characters_PMC\PMC_soldier\Data\Bauer_Gear.rvmat","Ca\Characters_PMC\PMC_soldier\Data\w1_Bauer_Gear.rvmat","Ca\Characters_PMC\PMC_soldier\Data\w2_Bauer_Gear.rvmat","Ca\Characters_PMC\PMC_soldier\Data\HeadGear.rvmat","Ca\Characters_PMC\PMC_soldier\Data\w1_HeadGear.rvmat","Ca\Characters_PMC\PMC_soldier\Data\w2_HeadGear.rvmat"};
		};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setidentity ""PMC_Tanny""";
			HandleIdentity = "true";
		};
		class Library
		{
			libTextDesc = "$STR_PMC_LIB_TANNY";
		};
	};
	class Dixon_PMC: Special_Character_Base_PMC
	{
		scope = 2;
		displayName = "$STR_PMC_DN_DIXON";
		model = "\Ca\Characters_PMC\Dixon\Dixon.p3d";
		portrait = "Ca\Characters_PMC\data\ui\comBarHead_pmcDixon_ca.paa";
		weapons[] = {"AA12_PMC","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		magazines[] = {"20Rnd_B_AA12_Pellets","20Rnd_B_AA12_Pellets","20Rnd_B_AA12_Pellets","20Rnd_B_AA12_Pellets","20Rnd_B_AA12_Pellets","20Rnd_B_AA12_Pellets","20Rnd_B_AA12_Pellets","20Rnd_B_AA12_Pellets","HandGrenade_West","HandGrenade_West","SmokeShell","SmokeShellRed"};
		respawnWeapons[] = {"AA12_PMC","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnMagazines[] = {"20Rnd_B_AA12_Pellets","20Rnd_B_AA12_Pellets","20Rnd_B_AA12_Pellets","20Rnd_B_AA12_Pellets","HandGrenade_West","SmokeShellRed"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"Ca\Characters_PMC\Dixon\Data\dix.rvmat","Ca\Characters_PMC\Dixon\Data\w1_dix.rvmat","Ca\Characters_PMC\Dixon\Data\w2_dix.rvmat","Ca\Characters_PMC\Dixon\Data\do_equip.rvmat","Ca\Characters_PMC\Dixon\Data\w1_do_equip.rvmat","Ca\Characters_PMC\Dixon\Data\w2_do_equip.rvmat","Ca\Characters_PMC\Dixon\Data\european-man_01.rvmat","Ca\Characters_PMC\Dixon\Data\w1_european-man_01.rvmat","Ca\Characters_PMC\Dixon\Data\w2_european-man_01.rvmat"};
		};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setidentity ""PMC_Dixon""";
			HandleIdentity = "true";
		};
		class Library
		{
			libTextDesc = "$STR_PMC_LIB_DIXON";
		};
	};
};
//};

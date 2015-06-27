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

//Class weapons_e : AmmoBoxes\config.bin{
class CfgPatches
{
	class CAWeapons_E_AmmoBoxes
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAWeapons"};
	};
};
class cfgVehicles
{
	class ReammoBox;
	class ReammoBox_EP1: ReammoBox
	{
		expansion = 1;
	};
	class Bag_Base_EP1: ReammoBox_EP1
	{
		scope = 0;
		class TransportMagazines{};
		class TransportWeapons{};
		transportMaxMagazines = 0;
		transportMaxWeapons = 0;
		isbackpack = 1;
		reversed = 1;
		vehicleClass = "Backpacks";
		class DestructionEffects{};
	};
	class USBasicBag: Bag_Base_EP1
	{
		scope = 2;
		displayName = "$STR_EP1_DN_USBasicBag";
		model = "\ca\weapons_E\AmmoBoxes\US_Bag.p3d";
		picture = "\CA\weapons_E\Data\icons\backpack_US_ASSAULT_CA.paa";
		icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
	};
	class Tripod_Bag: Bag_Base_EP1
	{
		scope = 2;
		displayName = "$STR_EP1_DN_Tripod_Bag";
		class TransportMagazines{};
		class TransportWeapons{};
		transportMaxMagazines = 0;
		transportMaxWeapons = 0;
		model = "\ca\weapons_e\AmmoBoxes\StaticY.p3d";
		picture = "\ca\weapons_e\data\icons\staticY_CA.paa";
		icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {};
			displayName = "";
		};
	};
	class Weapon_Bag_Base_EP1: Bag_Base_EP1
	{
		model = "\ca\weapons_e\AmmoBoxes\StaticX.p3d";
		picture = "\ca\weapons_e\data\icons\staticX_CA.paa";
		icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
		class assembleInfo
		{
			primary = 1;
			base = "Tripod_Bag";
			assembleTo = "";
			dissasembleTo[] = {};
			displayName = "";
		};
	};
	class M2StaticMG_US_Bag_EP1: Weapon_Bag_Base_EP1
	{
		scope = 2;
		displayName = "$STR_EP1_DN_M2StaticMG_US_Bag_EP1";
		class assembleInfo: assembleInfo
		{
			displayName = "$STR_EP1_DN_M2StaticMG_US_Bag_EP1_assembleInfo";
			assembleTo = "M2StaticMG_US_EP1";
		};
	};
	class M2HD_mini_TriPod_US_Bag_EP1: Weapon_Bag_Base_EP1
	{
		scope = 2;
		displayName = "$STR_EP1_DN_M2HD_mini_TriPod_US_Bag_EP1";
		class assembleInfo: assembleInfo
		{
			displayName = "$STR_EP1_DN_M2HD_mini_TriPod_US_Bag_EP1_assembleInfo";
			assembleTo = "M2HD_mini_TriPod_US_EP1";
		};
	};
	class DSHKM_TK_GUE_Bag_EP1: Weapon_Bag_Base_EP1
	{
		scope = 2;
		displayName = "$STR_EP1_DN_DSHKM_TK_GUE_Bag_EP1";
		class assembleInfo: assembleInfo
		{
			displayName = "$STR_EP1_DN_DSHKM_TK_GUE_Bag_EP1_assembleInfo";
			assembleTo = "DSHKM_TK_GUE_EP1";
		};
	};
	class DSHKM_TK_INS_Bag_EP1: DSHKM_TK_GUE_Bag_EP1
	{
		displayName = "$STR_EP1_DN_DSHKM_TK_INS_Bag_EP1";
		class assembleInfo: assembleInfo
		{
			assembleTo = "DSHKM_TK_INS_EP1";
		};
	};
	class DSHkM_Mini_TriPod_TK_GUE_Bag_EP1: Weapon_Bag_Base_EP1
	{
		scope = 2;
		displayName = "$STR_EP1_DN_DSHkM_Mini_TriPod_TK_GUE_Bag_EP1";
		class assembleInfo: assembleInfo
		{
			displayName = "$STR_EP1_DN_DSHkM_Mini_TriPod_TK_GUE_Bag_EP1_assembleInfo";
			assembleTo = "DSHkM_Mini_TriPod_TK_GUE_EP1";
		};
	};
	class DSHkM_Mini_TriPod_TK_INS_Bag_EP1: DSHkM_Mini_TriPod_TK_GUE_Bag_EP1
	{
		displayName = "$STR_EP1_DN_DSHkM_Mini_TriPod_TK_INS_Bag_EP1";
		class assembleInfo: assembleInfo
		{
			assembleTo = "DSHkM_Mini_TriPod_TK_INS_EP1";
		};
	};
	class KORD_high_TK_Bag_EP1: Weapon_Bag_Base_EP1
	{
		scope = 2;
		displayName = "$STR_EP1_DN_KORD_high_TK_Bag_EP1";
		class assembleInfo: assembleInfo
		{
			displayName = "$STR_EP1_DN_KORD_high_TK_Bag_EP1_assembleInfo";
			assembleTo = "KORD_high_TK_EP1";
		};
	};
	class KORD_high_UN_Bag_EP1: KORD_high_TK_Bag_EP1
	{
		displayName = "$STR_EP1_DN_KORD_high_UN_Bag_EP1";
		class assembleInfo: assembleInfo
		{
			assembleTo = "KORD_high_UN_EP1";
		};
	};
	class KORD_TK_Bag_EP1: Weapon_Bag_Base_EP1
	{
		scope = 2;
		displayName = "$STR_EP1_DN_KORD_TK_Bag_EP1";
		class assembleInfo: assembleInfo
		{
			displayName = "$STR_EP1_DN_KORD_TK_Bag_EP1_assembleInfo";
			assembleTo = "KORD_TK_EP1";
		};
	};
	class KORD_UN_Bag_EP1: KORD_TK_Bag_EP1
	{
		displayName = "$STR_EP1_DN_KORD_UN_Bag_EP1";
		class assembleInfo: assembleInfo
		{
			assembleTo = "KORD_UN_EP1";
		};
	};
	class MK19_TriPod_US_Bag_EP1: Weapon_Bag_Base_EP1
	{
		scope = 2;
		displayName = "$STR_EP1_DN_MK19_TriPod_US_Bag_EP1";
		class assembleInfo: assembleInfo
		{
			displayName = "$STR_EP1_DN_MK19_TriPod_US_Bag_EP1_assembleInfo";
			assembleTo = "MK19_TriPod_US_EP1";
		};
	};
	class AGS_TK_Bag_EP1: Weapon_Bag_Base_EP1
	{
		scope = 2;
		displayName = "$STR_EP1_DN_AGS_TK_Bag_EP1";
		class assembleInfo: assembleInfo
		{
			displayName = "$STR_EP1_DN_AGS_TK_Bag_EP1_assembleInfo";
			assembleTo = "AGS_TK_EP1";
		};
	};
	class AGS_TK_GUE_Bag_EP1: AGS_TK_Bag_EP1
	{
		displayName = "$STR_EP1_DN_AGS_TK_GUE_Bag_EP1";
		class assembleInfo: assembleInfo
		{
			assembleTo = "AGS_TK_GUE_EP1";
		};
	};
	class AGS_TK_INS_Bag_EP1: AGS_TK_Bag_EP1
	{
		displayName = "$STR_EP1_DN_AGS_TK_INS_Bag_EP1";
		class assembleInfo: assembleInfo
		{
			assembleTo = "AGS_TK_INS_EP1";
		};
	};
	class AGS_UN_Bag_EP1: AGS_TK_Bag_EP1
	{
		displayName = "$STR_EP1_DN_AGS_UN_Bag_EP1";
		class assembleInfo: assembleInfo
		{
			assembleTo = "AGS_UN_EP1";
		};
	};
	class M252_US_Bag_EP1: Weapon_Bag_Base_EP1
	{
		scope = 2;
		displayName = "$STR_EP1_DN_M252_US_Bag_EP1";
		class assembleInfo: assembleInfo
		{
			displayName = "$STR_EP1_DN_M252_US_Bag_EP1_assembleInfo";
			assembleTo = "M252_US_EP1";
		};
	};
	class 2b14_82mm_TK_Bag_EP1: Weapon_Bag_Base_EP1
	{
		scope = 2;
		displayName = "$STR_EP1_DN_2b14_82mm_TK_Bag_EP1";
		class assembleInfo: assembleInfo
		{
			displayName = "$STR_EP1_DN_2b14_82mm_TK_Bag_EP1_assembleInfo";
			assembleTo = "2b14_82mm_TK_EP1";
		};
	};
	class 2b14_82mm_TK_GUE_Bag_EP1: 2b14_82mm_TK_Bag_EP1
	{
		displayName = "$STR_EP1_DN_2b14_82mm_TK_GUE_Bag_EP1";
		class assembleInfo: assembleInfo
		{
			assembleTo = "2b14_82mm_TK_GUE_EP1";
		};
	};
	class 2b14_82mm_TK_INS_Bag_EP1: 2b14_82mm_TK_Bag_EP1
	{
		displayName = "$STR_EP1_DN_2b14_82mm_TK_INS_Bag_EP1";
		class assembleInfo: assembleInfo
		{
			assembleTo = "2b14_82mm_TK_INS_EP1";
		};
	};
	class Metis_TK_Bag_EP1: Weapon_Bag_Base_EP1
	{
		scope = 2;
		displayName = "$STR_EP1_DN_Metis_TK_Bag_EP1";
		class assembleInfo: assembleInfo
		{
			displayName = "$STR_EP1_DN_Metis_TK_Bag_EP1_assembleInfo";
			assembleTo = "Metis_TK_EP1";
		};
	};
	class TOW_TriPod_US_Bag_EP1: Weapon_Bag_Base_EP1
	{
		scope = 2;
		displayName = "$STR_EP1_DN_TOW_TriPod_US_Bag_EP1";
		class assembleInfo: assembleInfo
		{
			displayName = "$STR_EP1_DN_TOW_TriPod_US_Bag_EP1_assembleInfo";
			assembleTo = "TOW_TriPod_US_EP1";
		};
	};
	class SPG9_TK_GUE_Bag_EP1: Weapon_Bag_Base_EP1
	{
		scope = 2;
		displayName = "$STR_EP1_DN_SPG9_TK_GUE_Bag_EP1";
		class assembleInfo: assembleInfo
		{
			displayName = "$STR_EP1_DN_SPG9_TK_GUE_Bag_EP1_assembleInfo";
			assembleTo = "SPG9_TK_GUE_EP1";
		};
	};
	class SPG9_TK_INS_Bag_EP1: SPG9_TK_GUE_Bag_EP1
	{
		displayName = "$STR_EP1_DN_SPG9_TK_INS_Bag_EP1";
		class assembleInfo: assembleInfo
		{
			assembleTo = "SPG9_TK_INS_EP1";
		};
	};
	class US_UAV_Pack_EP1: Bag_Base_EP1
	{
		scope = 2;
		displayName = "$STR_EP1_DN_US_UAV_Pack_EP1";
		picture = "\ca\weapons_e\data\icons\backpack_US_ASSAULT_CA.paa";
		icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
		mapSize = 2;
		model = "\ca\weapons_e\AmmoBoxes\backpack_us_AUV";
		transportMaxWeapons = 0;
		transportMaxMagazines = 0;
	};
	class US_Assault_Pack_EP1: Bag_Base_EP1
	{
		scope = 2;
		displayName = "$STR_EP1_DN_US_Assault_Pack_EP1";
		picture = "\ca\weapons_e\data\icons\backpack_US_ASSAULT_CA.paa";
		icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
		mapSize = 2;
		model = "\ca\weapons_e\AmmoBoxes\backpack_us_assault.p3d";
		transportMaxWeapons = 0;
		transportMaxMagazines = 8;
	};
	class US_Assault_Pack_Ammo_EP1: US_Assault_Pack_EP1
	{
		scope = 1;
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
	class US_Assault_Pack_AmmoSAW_EP1: US_Assault_Pack_EP1
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_100Rnd_556x45_M249
			{
				magazine = "100Rnd_556x45_M249";
				count = 3;
			};
			class _xx_HandGrenade_West
			{
				magazine = "HandGrenade_West";
				count = 2;
			};
		};
	};
	class US_Assault_Pack_AT_EP1: US_Assault_Pack_EP1
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_MAAWS_HEAT
			{
				magazine = "MAAWS_HEAT";
				count = 1;
			};
			class _xx_MAAWS_HEDP
			{
				magazine = "MAAWS_HEDP";
				count = 1;
			};
		};
	};
	class US_Assault_Pack_Explosives_EP1: US_Assault_Pack_EP1
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
	class US_Patrol_Pack_EP1: Bag_Base_EP1
	{
		scope = 2;
		displayName = "$STR_EP1_DN_US_Patrol_Pack_EP1";
		picture = "\ca\weapons_e\data\icons\backpack_US_ASSAULT_COYOTE_CA.paa";
		icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
		mapsize = 2;
		model = "\ca\weapons_e\AmmoBoxes\backpack_us_assault_Coyote.p3d";
		transportMaxWeapons = 0;
		transportMaxMagazines = 8;
	};
	class US_Patrol_Pack_Ammo_EP1: US_Patrol_Pack_EP1
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_20rnd_762x51_B_SCAR
			{
				magazine = "20rnd_762x51_B_SCAR";
				count = 2;
			};
			class _xx_20rnd_762x51_SB_SCAR
			{
				magazine = "20rnd_762x51_SB_SCAR";
				count = 1;
			};
			class _xx_10Rnd_127x99_m107
			{
				magazine = "10Rnd_127x99_m107";
				count = 2;
			};
			class _xx_1Rnd_HE_M203
			{
				magazine = "1Rnd_HE_M203";
				count = 2;
			};
			class _xx_1Rnd_SmokeRed_M203
			{
				magazine = "1Rnd_SmokeRed_M203";
				count = 1;
			};
		};
	};
	class US_Patrol_Pack_Specops_EP1: US_Patrol_Pack_EP1
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_20rnd_762x51_B_SCAR
			{
				magazine = "20rnd_762x51_B_SCAR";
				count = 2;
			};
			class _xx_20rnd_762x51_SB_SCAR
			{
				magazine = "20rnd_762x51_SB_SCAR";
				count = 2;
			};
			class _xx_HandGrenade_West
			{
				magazine = "HandGrenade_West";
				count = 2;
			};
			class _xx_SmokeShellRed
			{
				magazine = "SmokeShellRed";
				count = 1;
			};
			class _xx_IR_Strobe_Target
			{
				magazine = "IR_Strobe_Target";
				count = 1;
			};
		};
	};
	class US_Backpack_EP1: Bag_Base_EP1
	{
		scope = 2;
		displayName = "$STR_EP1_DN_US_Backpack_EP1";
		picture = "\ca\weapons_e\data\icons\backpack_US_CA.paa";
		icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
		mapsize = 2;
		model = "\ca\weapons_e\AmmoBoxes\backpack_us.p3d";
		transportMaxWeapons = 1;
		transportMaxMagazines = 12;
	};
	class US_Backpack_AmmoMG_EP1: US_Backpack_EP1
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_100Rnd_762x51_M240
			{
				magazine = "100Rnd_762x51_M240";
				count = 4;
			};
			class _xx_HandGrenade_West
			{
				magazine = "HandGrenade_West";
				count = 4;
			};
		};
	};
	class US_Backpack_AT_EP1: US_Backpack_EP1
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Javelin
			{
				magazine = "Javelin";
				count = 2;
			};
		};
	};
	class US_Backpack_Specops_EP1: US_Backpack_EP1
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_1Rnd_HE_M203
			{
				magazine = "1Rnd_HE_M203";
				count = 2;
			};
			class _xx_1Rnd_SmokeRed_M203
			{
				magazine = "1Rnd_SmokeRed_M203";
				count = 2;
			};
			class _xx_PipeBomb
			{
				magazine = "PipeBomb";
				count = 1;
			};
			class _xx_HandGrenade_West
			{
				magazine = "HandGrenade_West";
				count = 2;
			};
			class _xx_SmokeShellRed
			{
				magazine = "SmokeShellRed";
				count = 2;
			};
			class _xx_Laserbatteries
			{
				magazine = "Laserbatteries";
				count = 1;
			};
			class _xx_IR_Strobe_Target
			{
				magazine = "IR_Strobe_Target";
				count = 1;
			};
		};
	};
	class DE_Backpack_Specops_EP1: US_Backpack_EP1
	{
		scope = 1;
		displayName = "$STR_EP1_DN_DE_Backpack_Specops_EP1";
		transportMaxWeapons = 1;
		transportMaxMagazines = 14;
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_G36
			{
				magazine = "30Rnd_556x45_G36";
				count = 4;
			};
			class _xx_30Rnd_556x45_G36SD
			{
				magazine = "30Rnd_556x45_G36SD";
				count = 4;
			};
			class _xx_PipeBomb
			{
				magazine = "PipeBomb";
				count = 2;
			};
			class _xx_Laserbatteries
			{
				magazine = "Laserbatteries";
				count = 1;
			};
			class _xx_IR_Strobe_Target
			{
				magazine = "IR_Strobe_Target";
				count = 1;
			};
		};
	};
	class CZ_Backpack_EP1: Bag_Base_EP1
	{
		scope = 2;
		displayName = "$STR_EP1_DN_CZ_Backpack_EP1";
		picture = "\ca\weapons_e\data\icons\backpack_ACR_CA.paa";
		icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
		mapsize = 2;
		model = "\ca\weapons_e\AmmoBoxes\backpack_acr.p3d";
		transportMaxWeapons = 1;
		transportMaxMagazines = 14;
	};
	class CZ_Backpack_Ammo_EP1: CZ_Backpack_EP1
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_30Rnd_762x39_SA58
			{
				magazine = "30Rnd_762x39_SA58";
				count = 6;
			};
			class _xx_PipeBomb
			{
				magazine = "PipeBomb";
				count = 1;
			};
			class _xx_HandGrenade_West
			{
				magazine = "HandGrenade_West";
				count = 3;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
			class _xx_SmokeShellRed
			{
				magazine = "SmokeShellRed";
				count = 1;
			};
		};
	};
	class CZ_Backpack_Specops_EP1: CZ_Backpack_EP1
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 6;
			};
			class _xx_Laserbatteries
			{
				magazine = "Laserbatteries";
				count = 1;
			};
			class _xx_PipeBomb
			{
				magazine = "PipeBomb";
				count = 2;
			};
			class _xx_HandGrenade_West
			{
				magazine = "HandGrenade_West";
				count = 1;
			};
			class _xx_IR_Strobe_Target
			{
				magazine = "IR_Strobe_Target";
				count = 1;
			};
		};
	};
	class CZ_Backpack_AmmoMG_EP1: CZ_Backpack_EP1
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_100Rnd_762x51_M240
			{
				magazine = "100Rnd_762x51_M240";
				count = 5;
			};
			class _xx_HandGrenade_West
			{
				magazine = "HandGrenade_West";
				count = 4;
			};
		};
	};
	class CZ_VestPouch_EP1: Bag_Base_EP1
	{
		scope = 2;
		displayName = "$STR_EP1_DN_CZ_VestPouch_EP1";
		picture = "\ca\weapons_e\data\icons\backpack_ACR_small_CA.paa";
		icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
		mapsize = 2;
		model = "\ca\weapons_e\AmmoBoxes\backpack_acr_small.p3d";
		transportMaxWeapons = 0;
		transportMaxMagazines = 6;
	};
	class CZ_VestPouch_Sa58_EP1: CZ_VestPouch_EP1
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_30Rnd_762x39_SA58
			{
				magazine = "30Rnd_762x39_SA58";
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
	class CZ_VestPouch_M4_EP1: CZ_VestPouch_EP1
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
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
	class TK_RPG_Backpack_EP1: Bag_Base_EP1
	{
		scope = 2;
		displayName = "$STR_EP1_DN_TK_RPG_Backpack_EP1";
		picture = "\ca\weapons_e\data\icons\backpack_RPG_CA.paa";
		icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
		mapsize = 2;
		model = "\ca\weapons_e\AmmoBoxes\backpack_rpg.p3d";
		transportMaxWeapons = 0;
		transportMaxMagazines = 8;
		class TransportMagazines
		{
			class _xx_PG7VL
			{
				magazine = "PG7VL";
				count = 2;
			};
			class _xx_PG7V
			{
				magazine = "PG7V";
				count = 2;
			};
		};
	};
	class TK_ALICE_Pack_EP1: Bag_Base_EP1
	{
		scope = 2;
		displayName = "$STR_EP1_DN_TK_ALICE_Pack_EP1";
		picture = "\ca\weapons_e\data\icons\backpack_TK_ALICE_CA.paa";
		icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
		mapsize = 2;
		model = "\ca\weapons_e\AmmoBoxes\backpack_tk_alice.p3d";
		transportMaxWeapons = 1;
		transportMaxMagazines = 12;
	};
	class TK_ALICE_Pack_Explosives_EP1: TK_ALICE_Pack_EP1
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_mineE
			{
				magazine = "mineE";
				count = 3;
			};
			class _xx_PipeBomb
			{
				magazine = "PipeBomb";
				count = 3;
			};
		};
	};
	class TK_ALICE_Pack_AmmoMG_EP1: TK_ALICE_Pack_EP1
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_100Rnd_762x54_PK
			{
				magazine = "100Rnd_762x54_PK";
				count = 5;
			};
			class _xx_HandGrenade_East
			{
				magazine = "HandGrenade_East";
				count = 2;
			};
		};
	};
	class TKA_ALICE_Pack_Ammo_EP1: TK_ALICE_Pack_EP1
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 6;
			};
			class _xx_1Rnd_HE_M203
			{
				magazine = "1Rnd_HE_M203";
				count = 4;
			};
			class _xx_smokeshellOrange
			{
				magazine = "smokeshellOrange";
				count = 2;
			};
		};
	};
	class TKG_ALICE_Pack_AmmoAK47_EP1: TK_ALICE_Pack_EP1
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_30Rnd_762x39_AK47
			{
				magazine = "30Rnd_762x39_AK47";
				count = 6;
			};
			class _xx_HandGrenade_East
			{
				magazine = "HandGrenade_East";
				count = 4;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 1;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 1;
			};
		};
	};
	class TKG_ALICE_Pack_AmmoAK74_EP1: TK_ALICE_Pack_EP1
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_30Rnd_545x39_AK
			{
				magazine = "30Rnd_545x39_AK";
				count = 6;
			};
			class _xx_1Rnd_HE_GP25
			{
				magazine = "1Rnd_HE_GP25";
				count = 2;
			};
			class _xx_HandGrenade_East
			{
				magazine = "HandGrenade_East";
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
	class TK_Assault_Pack_EP1: Bag_Base_EP1
	{
		scope = 2;
		displayName = "$STR_EP1_DN_TK_Assault_Pack_EP1";
		picture = "\ca\weapons_e\data\icons\backpack_CIVIL_ASSAULT_CA.paa";
		icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
		mapsize = 2;
		model = "\ca\weapons_e\AmmoBoxes\backpack_civil_assault.p3d";
		transportMaxWeapons = 0;
		transportMaxMagazines = 8;
	};
	class TK_Assault_Pack_RPK_EP1: TK_Assault_Pack_EP1
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_75Rnd_545x39_RPK
			{
				magazine = "75Rnd_545x39_RPK";
				count = 3;
			};
			class _xx_HandGrenade_East
			{
				magazine = "HandGrenade_East";
				count = 2;
			};
		};
	};
	class TKA_Assault_Pack_Ammo_EP1: TK_Assault_Pack_EP1
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_20Rnd_762x51_FNFAL
			{
				magazine = "20Rnd_762x51_FNFAL";
				count = 2;
			};
			class _xx_10Rnd_762x54_SVD
			{
				magazine = "10Rnd_762x54_SVD";
				count = 2;
			};
			class _xx_1Rnd_HE_M203
			{
				magazine = "1Rnd_HE_M203";
				count = 2;
			};
			class _xx_HandGrenade_East
			{
				magazine = "HandGrenade_East";
				count = 2;
			};
		};
	};
	class USBasicAmmunitionBox_EP1: ReammoBox_EP1
	{
		scope = 2;
		accuracy = 1000;
		displayName = "$STR_EP1_DN_USBasicAmmunitionBox_EP1";
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
			class _xx_20Rnd_556x45_Stanag
			{
				magazine = "20Rnd_556x45_Stanag";
				count = 20;
			};
			class _xx_100Rnd_762x51_M240
			{
				magazine = "100Rnd_762x51_M240";
				count = 50;
			};
			class _xx_30Rnd_9x19_MP5SD
			{
				magazine = "30Rnd_9x19_MP5SD";
				count = 30;
			};
			class _xx_30Rnd_9x19_MP5
			{
				magazine = "30Rnd_9x19_MP5";
				count = 90;
			};
			class _xx_M136
			{
				magazine = "M136";
				count = 20;
			};
			class _xx_5Rnd_762x51_M24
			{
				magazine = "5Rnd_762x51_M24";
				count = 30;
			};
			class _xx_20Rnd_762x51_DMR
			{
				magazine = "20Rnd_762x51_DMR";
				count = 30;
			};
			class _xx_10Rnd_127x99_m107
			{
				magazine = "10Rnd_127x99_m107";
				count = 30;
			};
			class _xx_15Rnd_9x19_M9
			{
				magazine = "15Rnd_9x19_M9";
				count = 30;
			};
			class _xx_15Rnd_9x19_M9SD
			{
				magazine = "15Rnd_9x19_M9SD";
				count = 20;
			};
			class _xx_7Rnd_45ACP_1911
			{
				magazine = "7Rnd_45ACP_1911";
				count = 30;
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
			class _xx_20Rnd_762x51_B_SCAR
			{
				magazine = "20Rnd_762x51_B_SCAR";
				count = 100;
			};
			class _xx_20Rnd_762x51_SB_SCAR
			{
				magazine = "20Rnd_762x51_SB_SCAR";
				count = 100;
			};
			class _xx_100Rnd_556x45_M249
			{
				magazine = "100Rnd_556x45_M249";
				count = 50;
			};
			class _xx_17Rnd_9x19_glock17
			{
				magazine = "17Rnd_9x19_glock17";
				count = 50;
			};
			class _xx_Laserbatteries
			{
				magazine = "Laserbatteries";
				count = 10;
			};
		};
		class TransportWeapons
		{
			class _xx_SCAR_L_STD_HOLO
			{
				weapon = "SCAR_L_STD_HOLO";
				count = 4;
			};
			class _xx_M9
			{
				weapon = "M9";
				count = 4;
			};
		};
	};
	class USBasicWeapons_EP1: ReammoBox_EP1
	{
		scope = 2;
		accuracy = 1000;
		displayName = "$STR_EP1_DN_USBasicWeapons_EP1";
		model = "\ca\weapons\AmmoBoxes\USBasicWeapons.p3d";
		class TransportMagazines
		{
			class _xx_20Rnd_762x51_B_SCAR
			{
				magazine = "20Rnd_762x51_B_SCAR";
				count = 100;
			};
			class _xx_20Rnd_762x51_SB_SCAR
			{
				magazine = "20Rnd_762x51_SB_SCAR";
				count = 100;
			};
			class _xx_30Rnd_556x45_StanagSD
			{
				magazine = "30Rnd_556x45_StanagSD";
				count = 20;
			};
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
			class _xx_7Rnd_45ACP_1911
			{
				magazine = "7Rnd_45ACP_1911";
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
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 200;
			};
		};
		class TransportWeapons
		{
			class _xx_SCAR_L_STD_EGLM_TWS
			{
				weapon = "SCAR_L_STD_EGLM_TWS";
				count = 4;
			};
			class _xx_SCAR_L_CQC
			{
				weapon = "SCAR_L_CQC";
				count = 4;
			};
			class _xx_SCAR_L_CQC_Holo
			{
				weapon = "SCAR_L_CQC_Holo";
				count = 4;
			};
			class _xx_SCAR_L_CQC_EGLM_Holo
			{
				weapon = "SCAR_L_CQC_EGLM_Holo";
				count = 4;
			};
			class _xx_SCAR_L_CQC_CCO_SD
			{
				weapon = "SCAR_L_CQC_CCO_SD";
				count = 4;
			};
			class _xx_SCAR_L_STD_EGLM_RCO
			{
				weapon = "SCAR_L_STD_EGLM_RCO";
				count = 4;
			};
			class _xx_SCAR_L_STD_Mk4CQT
			{
				weapon = "SCAR_L_STD_Mk4CQT";
				count = 4;
			};
			class _xx_SCAR_L_STD_HOLO
			{
				weapon = "SCAR_L_STD_HOLO";
				count = 4;
			};
			class _xx_M249_EP1
			{
				weapon = "M249_EP1";
				count = 2;
			};
			class _xx_M249_m145_EP1
			{
				weapon = "M249_m145_EP1";
				count = 2;
			};
			class _xx_M249_TWS_EP1
			{
				weapon = "M249_TWS_EP1";
				count = 2;
			};
			class _xx_m240_scoped_EP1
			{
				weapon = "m240_scoped_EP1";
				count = 2;
			};
			class _xx_Mk_48_DES_EP1
			{
				weapon = "Mk_48_DES_EP1";
				count = 2;
			};
			class _xx_M9
			{
				weapon = "M9";
				count = 2;
			};
			class _xx_M9SD
			{
				weapon = "M9SD";
				count = 2;
			};
			class _xx_Colt1911
			{
				weapon = "Colt1911";
				count = 2;
			};
		};
	};
	class USSpecialWeapons_EP1: ReammoBox_EP1
	{
		scope = 2;
		accuracy = 1000;
		displayName = "$STR_EP1_DN_USSpecialWeapons_EP1";
		model = "\ca\weapons\AmmoBoxes\USSpecialWeapons.p3d";
		class TransportMagazines
		{
			class _xx_20Rnd_762x51_B_SCAR
			{
				magazine = "20Rnd_762x51_B_SCAR";
				count = 100;
			};
			class _xx_20Rnd_762x51_SB_SCAR
			{
				magazine = "20Rnd_762x51_SB_SCAR";
				count = 100;
			};
			class _xx_30Rnd_556x45_StanagSD
			{
				magazine = "30Rnd_556x45_StanagSD";
				count = 20;
			};
			class _xx_20Rnd_762x51_DMR
			{
				magazine = "20Rnd_762x51_DMR";
				count = 100;
			};
			class _xx_10Rnd_127x99_m107
			{
				magazine = "10Rnd_127x99_m107";
				count = 50;
			};
			class _xx_17Rnd_9x19_glock17
			{
				magazine = "17Rnd_9x19_glock17";
				count = 50;
			};
			class _xx_5Rnd_762x51_M24
			{
				magazine = "5Rnd_762x51_M24";
				count = 50;
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
			class _xx_Laserbatteries
			{
				magazine = "Laserbatteries";
				count = 10;
			};
			class _xx_1Rnd_HE_M203
			{
				magazine = "1Rnd_HE_M203";
				count = 30;
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
		};
		class TransportWeapons
		{
			class _xx_SCAR_H_CQC_CCO_SD
			{
				weapon = "SCAR_H_CQC_CCO_SD";
				count = 4;
			};
			class _xx_SCAR_H_STD_TWS_SD
			{
				weapon = "SCAR_H_STD_TWS_SD";
				count = 4;
			};
			class _xx_SCAR_H_CQC_CCO
			{
				weapon = "SCAR_H_CQC_CCO";
				count = 4;
			};
			class _xx_SCAR_H_STD_EGLM_Spect
			{
				weapon = "SCAR_H_STD_EGLM_Spect";
				count = 4;
			};
			class _xx_SCAR_H_LNG_Sniper
			{
				weapon = "SCAR_H_LNG_Sniper";
				count = 4;
			};
			class _xx_SCAR_H_LNG_Sniper_SD
			{
				weapon = "SCAR_H_LNG_Sniper_SD";
				count = 4;
			};
			class _xx_M24_des_EP1
			{
				weapon = "M24_des_EP1";
				count = 4;
			};
			class _xx_M14_EP1
			{
				weapon = "M14_EP1";
				count = 4;
			};
			class _xx_M110_TWS_EP1
			{
				weapon = "M110_TWS_EP1";
				count = 2;
			};
			class _xx_M110_NVG_EP1
			{
				weapon = "M110_NVG_EP1";
				count = 2;
			};
			class _xx_m107_TWS_EP1
			{
				weapon = "m107_TWS_EP1";
				count = 2;
			};
			class _xx_m107
			{
				weapon = "m107";
				count = 2;
			};
			class _xx_glock17_EP1
			{
				weapon = "glock17_EP1";
				count = 4;
			};
			class _xx_Laserdesignator
			{
				weapon = "Laserdesignator";
				count = 2;
			};
		};
	};
	class USLaunchers_EP1: ReammoBox_EP1
	{
		scope = 2;
		accuracy = 1000;
		displayName = "$STR_EP1_DN_USLaunchers_EP1";
		model = "\ca\weapons\AmmoBoxes\USLaunchers.p3d";
		class TransportMagazines
		{
			class _xx_M136
			{
				magazine = "M136";
				count = 20;
			};
			class _xx_Javelin
			{
				magazine = "Javelin";
				count = 5;
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
			class _xx_Stinger
			{
				magazine = "Stinger";
				count = 10;
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
		class TransportWeapons
		{
			class _xx_M136
			{
				weapon = "M136";
				count = 2;
			};
			class _xx_Javelin
			{
				weapon = "Javelin";
				count = 1;
			};
			class _xx_MAAWS
			{
				weapon = "MAAWS";
				count = 2;
			};
			class _xx_Stinger
			{
				weapon = "Stinger";
				count = 2;
			};
			class _xx_M32_EP1
			{
				weapon = "M32_EP1";
				count = 2;
			};
			class _xx_Mk13_EP1
			{
				weapon = "Mk13_EP1";
				count = 4;
			};
		};
	};
	class USVehicleBox_EP1: USBasicAmmunitionBox_EP1
	{
		displayName = "$STR_EP1_DN_USVehicleBox_EP1";
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
	class USOrdnanceBox_EP1: USBasicAmmunitionBox_EP1
	{
		displayName = "$STR_EP1_DN_USOrdnanceBox_EP1";
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
			class _xx_HandGrenade_West
			{
				magazine = "HandGrenade_West";
				count = 50;
			};
		};
		class TransportWeapons{};
	};
	class CZBasicWeapons_EP1: ReammoBox_EP1
	{
		scope = 2;
		accuracy = 1000;
		displayName = "$STR_EP1_DN_CZBasicWeapons_EP1";
		model = "\ca\weapons\AmmoBoxes\RUBasicWeapons.p3d";
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 200;
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
			class _xx_1Rnd_HE_M203
			{
				magazine = "1Rnd_HE_M203";
				count = 30;
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
			class _xx_10Rnd_762x54_SVD
			{
				magazine = "10Rnd_762x54_SVD";
				count = 50;
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
		};
	};
	class GERBasicWeapons_EP1: ReammoBox_EP1
	{
		scope = 2;
		accuracy = 1000;
		displayName = "$STR_EP1_DN_GERBasicWeapons_EP1";
		model = "\ca\weapons\AmmoBoxes\USBasicWeapons.p3d";
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_G36
			{
				magazine = "30Rnd_556x45_G36";
				count = 100;
			};
			class _xx_30Rnd_556x45_G36SD
			{
				magazine = "30Rnd_556x45_G36SD";
				count = 100;
			};
			class _xx_100Rnd_556x45_BetaCMag
			{
				magazine = "100Rnd_556x45_BetaCMag";
				count = 50;
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
		class TransportWeapons
		{
			class _xx_G36C_camo
			{
				weapon = "G36C_camo";
				count = 4;
			};
			class _xx_G36_C_SD_camo
			{
				weapon = "G36_C_SD_camo";
				count = 4;
			};
			class _xx_G36a_camo
			{
				weapon = "G36a_camo";
				count = 4;
			};
			class _xx_G36K_camo
			{
				weapon = "G36K_camo";
				count = 4;
			};
			class _xx_MG36_camo
			{
				weapon = "MG36_camo";
				count = 2;
			};
		};
	};
	class TKBasicAmmunitionBox_EP1: ReammoBox_EP1
	{
		scope = 2;
		accuracy = 1000;
		displayName = "$STR_EP1_DN_TKBasicAmmunitionBox_EP1";
		model = "\ca\weapons\AmmoBoxes\RUBasicAmmo.p3d";
		class TransportMagazines
		{
			class _xx_FlareWhite_GP25
			{
				magazine = "FlareWhite_GP25";
				count = 2;
			};
			class _xx_FlareGreen_GP25
			{
				magazine = "FlareGreen_GP25";
				count = 2;
			};
			class _xx_FlareRed_GP25
			{
				magazine = "FlareRed_GP25";
				count = 2;
			};
			class _xx_FlareYellow_GP25
			{
				magazine = "FlareYellow_GP25";
				count = 2;
			};
			class _xx_1Rnd_HE_GP25
			{
				magazine = "1Rnd_HE_GP25";
				count = 80;
			};
			class _xx_1Rnd_Smoke_GP25
			{
				magazine = "1Rnd_Smoke_GP25";
				count = 2;
			};
			class _xx_1Rnd_SmokeRed_GP25
			{
				magazine = "1Rnd_SmokeRed_GP25";
				count = 2;
			};
			class _xx_1Rnd_SmokeGreen_GP25
			{
				magazine = "1Rnd_SmokeGreen_GP25";
				count = 2;
			};
			class _xx_1Rnd_SmokeYellow_GP25
			{
				magazine = "1Rnd_SmokeYellow_GP25";
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
			class _xx_1Rnd_HE_M203
			{
				magazine = "1Rnd_HE_M203";
				count = 80;
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
			class _xx_20Rnd_762x51_FNFAL
			{
				magazine = "20Rnd_762x51_FNFAL";
				count = 100;
			};
			class _xx_30Rnd_545x39_AK
			{
				magazine = "30Rnd_545x39_AK";
				count = 100;
			};
			class _xx_30Rnd_545x39_AKSD
			{
				magazine = "30Rnd_545x39_AKSD";
				count = 20;
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
			class _xx_RPG18
			{
				magazine = "RPG18";
				count = 10;
			};
			class _xx_10x_303
			{
				magazine = "10x_303";
				count = 50;
			};
			class _xx_10Rnd_762x54_SVD
			{
				magazine = "10Rnd_762x54_SVD";
				count = 50;
			};
			class _xx_75Rnd_545x39_RPK
			{
				magazine = "75Rnd_545x39_RPK";
				count = 100;
			};
			class _xx_100Rnd_762x54_PK
			{
				magazine = "100Rnd_762x54_PK";
				count = 100;
			};
			class _xx_8Rnd_9x18_Makarov
			{
				magazine = "8Rnd_9x18_Makarov";
				count = 20;
			};
			class _xx_8Rnd_9x18_MakarovSD
			{
				magazine = "8Rnd_9x18_MakarovSD";
				count = 20;
			};
			class _xx_HandGrenade_East
			{
				magazine = "HandGrenade_East";
				count = 50;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 2;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 2;
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
			class _xx_5Rnd_127x108_KSVK
			{
				magazine = "5Rnd_127x108_KSVK";
				count = 100;
			};
			class _xx_30Rnd_762x39_AK47
			{
				magazine = "30Rnd_762x39_AK47";
				count = 100;
			};
			class _xx_30Rnd_9x19_UZI
			{
				magazine = "30Rnd_9x19_UZI";
				count = 100;
			};
			class _xx_30Rnd_9x19_UZI_SD
			{
				magazine = "30Rnd_9x19_UZI_SD";
				count = 100;
			};
			class _xx_20Rnd_B_765x17_Ball
			{
				magazine = "20Rnd_B_765x17_Ball";
				count = 100;
			};
			class _xx_6Rnd_45ACP
			{
				magazine = "6Rnd_45ACP";
				count = 100;
			};
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 200;
			};
			class _xx_Igla
			{
				magazine = "Igla";
				count = 10;
			};
		};
		class TransportWeapons
		{
			class _xx_FN_FAL
			{
				weapon = "FN_FAL";
				count = 4;
			};
			class _xx_Makarov
			{
				weapon = "Makarov";
				count = 4;
			};
		};
	};
	class TKBasicWeapons_EP1: ReammoBox_EP1
	{
		scope = 2;
		accuracy = 1000;
		displayName = "$STR_EP1_DN_TKBasicWeapons_EP1";
		model = "\ca\weapons\AmmoBoxes\RUBasicWeapons.p3d";
		class TransportMagazines
		{
			class _xx_FlareWhite_GP25
			{
				magazine = "FlareWhite_GP25";
				count = 2;
			};
			class _xx_FlareGreen_GP25
			{
				magazine = "FlareGreen_GP25";
				count = 2;
			};
			class _xx_FlareRed_GP25
			{
				magazine = "FlareRed_GP25";
				count = 2;
			};
			class _xx_FlareYellow_GP25
			{
				magazine = "FlareYellow_GP25";
				count = 2;
			};
			class _xx_1Rnd_HE_GP25
			{
				magazine = "1Rnd_HE_GP25";
				count = 80;
			};
			class _xx_1Rnd_Smoke_GP25
			{
				magazine = "1Rnd_Smoke_GP25";
				count = 2;
			};
			class _xx_1Rnd_SmokeRed_GP25
			{
				magazine = "1Rnd_SmokeRed_GP25";
				count = 2;
			};
			class _xx_1Rnd_SmokeGreen_GP25
			{
				magazine = "1Rnd_SmokeGreen_GP25";
				count = 2;
			};
			class _xx_1Rnd_SmokeYellow_GP25
			{
				magazine = "1Rnd_SmokeYellow_GP25";
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
			class _xx_1Rnd_HE_M203
			{
				magazine = "1Rnd_HE_M203";
				count = 80;
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
			class _xx_20Rnd_762x51_FNFAL
			{
				magazine = "20Rnd_762x51_FNFAL";
				count = 100;
			};
			class _xx_30Rnd_545x39_AK
			{
				magazine = "30Rnd_545x39_AK";
				count = 100;
			};
			class _xx_10x_303
			{
				magazine = "10x_303";
				count = 50;
			};
			class _xx_10Rnd_762x54_SVD
			{
				magazine = "10Rnd_762x54_SVD";
				count = 50;
			};
			class _xx_75Rnd_545x39_RPK
			{
				magazine = "75Rnd_545x39_RPK";
				count = 100;
			};
			class _xx_100Rnd_762x54_PK
			{
				magazine = "100Rnd_762x54_PK";
				count = 100;
			};
			class _xx_8Rnd_9x18_Makarov
			{
				magazine = "8Rnd_9x18_Makarov";
				count = 20;
			};
			class _xx_8Rnd_9x18_MakarovSD
			{
				magazine = "8Rnd_9x18_MakarovSD";
				count = 20;
			};
			class _xx_HandGrenade_East
			{
				magazine = "HandGrenade_East";
				count = 50;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 2;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 2;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 5;
			};
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 200;
			};
		};
		class TransportWeapons
		{
			class _xx_FN_FAL
			{
				weapon = "FN_FAL";
				count = 4;
			};
			class _xx_AK_74_GL
			{
				weapon = "AK_74_GL";
				count = 4;
			};
			class _xx_AK_74
			{
				weapon = "AK_74";
				count = 4;
			};
			class _xx_AK_74_GL_kobra
			{
				weapon = "AK_74_GL_kobra";
				count = 4;
			};
			class _xx_AKS_74
			{
				weapon = "AKS_74";
				count = 4;
			};
			class _xx_AKS_74_kobra
			{
				weapon = "AKS_74_kobra";
				count = 4;
			};
			class _xx_AKS_74_pso
			{
				weapon = "AKS_74_pso";
				count = 4;
			};
			class _xx_AKS_74_U
			{
				weapon = "AKS_74_U";
				count = 4;
			};
			class _xx_RPK_74
			{
				weapon = "RPK_74";
				count = 2;
			};
			class _xx_PK
			{
				weapon = "PK";
				count = 2;
			};
			class _xx_Makarov
			{
				weapon = "Makarov";
				count = 4;
			};
			class _xx_MakarovSD
			{
				weapon = "MakarovSD";
				count = 2;
			};
			class _xx_LeeEnfield
			{
				weapon = "LeeEnfield";
				count = 2;
			};
			class _xx_M16A2GL
			{
				weapon = "M16A2GL";
				count = 4;
			};
			class _xx_AKS_74_NSPU
			{
				weapon = "AKS_74_NSPU";
				count = 2;
			};
			class _xx_FN_FAL_ANPVS4
			{
				weapon = "FN_FAL_ANPVS4";
				count = 2;
			};
		};
	};
	class TKSpecialWeapons_EP1: ReammoBox_EP1
	{
		scope = 2;
		accuracy = 1000;
		displayName = "$STR_EP1_DN_TKSpecialWeapons_EP1";
		model = "\ca\weapons\AmmoBoxes\RUSpecialWeapons.p3d";
		class TransportMagazines
		{
			class _xx_FlareWhite_GP25
			{
				magazine = "FlareWhite_GP25";
				count = 2;
			};
			class _xx_FlareGreen_GP25
			{
				magazine = "FlareGreen_GP25";
				count = 2;
			};
			class _xx_FlareRed_GP25
			{
				magazine = "FlareRed_GP25";
				count = 2;
			};
			class _xx_FlareYellow_GP25
			{
				magazine = "FlareYellow_GP25";
				count = 2;
			};
			class _xx_1Rnd_HE_GP25
			{
				magazine = "1Rnd_HE_GP25";
				count = 80;
			};
			class _xx_1Rnd_Smoke_GP25
			{
				magazine = "1Rnd_Smoke_GP25";
				count = 2;
			};
			class _xx_1Rnd_SmokeRed_GP25
			{
				magazine = "1Rnd_SmokeRed_GP25";
				count = 2;
			};
			class _xx_1Rnd_SmokeGreen_GP25
			{
				magazine = "1Rnd_SmokeGreen_GP25";
				count = 2;
			};
			class _xx_1Rnd_SmokeYellow_GP25
			{
				magazine = "1Rnd_SmokeYellow_GP25";
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
			class _xx_1Rnd_HE_M203
			{
				magazine = "1Rnd_HE_M203";
				count = 80;
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
			class _xx_10Rnd_762x54_SVD
			{
				magazine = "10Rnd_762x54_SVD";
				count = 100;
			};
			class _xx_5Rnd_127x108_KSVK
			{
				magazine = "5Rnd_127x108_KSVK";
				count = 100;
			};
			class _xx_30Rnd_762x39_AK47
			{
				magazine = "30Rnd_762x39_AK47";
				count = 100;
			};
			class _xx_30Rnd_545x39_AK
			{
				magazine = "30Rnd_545x39_AK";
				count = 100;
			};
			class _xx_30Rnd_9x19_UZI
			{
				magazine = "30Rnd_9x19_UZI";
				count = 100;
			};
			class _xx_30Rnd_9x19_UZI_SD
			{
				magazine = "30Rnd_9x19_UZI_SD";
				count = 100;
			};
			class _xx_20Rnd_B_765x17_Ball
			{
				magazine = "20Rnd_B_765x17_Ball";
				count = 100;
			};
			class _xx_6Rnd_45ACP
			{
				magazine = "6Rnd_45ACP";
				count = 100;
			};
			class _xx_HandGrenade_East
			{
				magazine = "HandGrenade_East";
				count = 50;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 2;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
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
			class _xx_SVD
			{
				weapon = "SVD";
				count = 2;
			};
			class _xx_KSVK
			{
				weapon = "KSVK";
				count = 2;
			};
			class _xx_Sa61_EP1
			{
				weapon = "Sa61_EP1";
				count = 4;
			};
			class _xx_UZI_EP1
			{
				weapon = "UZI_EP1";
				count = 4;
			};
			class _xx_UZI_SD_EP1
			{
				weapon = "UZI_SD_EP1";
				count = 4;
			};
			class _xx_revolver_EP1
			{
				weapon = "revolver_EP1";
				count = 4;
			};
			class _xx_revolver_gold_EP1
			{
				weapon = "revolver_gold_EP1";
				count = 4;
			};
			class _xx_SVD_des_EP1
			{
				weapon = "SVD_des_EP1";
				count = 2;
			};
			class _xx_SVD_NSPU_EP1
			{
				weapon = "SVD_NSPU_EP1";
				count = 2;
			};
			class _xx_AKS_74_GOSHAWK
			{
				weapon = "AKS_74_GOSHAWK";
				count = 2;
			};
		};
	};
	class TKLaunchers_EP1: ReammoBox_EP1
	{
		scope = 2;
		accuracy = 1000;
		displayName = "$STR_EP1_DN_TKLaunchers_EP1";
		model = "\ca\weapons\AmmoBoxes\RULaunchers.p3d";
		class TransportMagazines
		{
			class _xx_FlareWhite_GP25
			{
				magazine = "FlareWhite_GP25";
				count = 2;
			};
			class _xx_FlareGreen_GP25
			{
				magazine = "FlareGreen_GP25";
				count = 2;
			};
			class _xx_FlareRed_GP25
			{
				magazine = "FlareRed_GP25";
				count = 2;
			};
			class _xx_FlareYellow_GP25
			{
				magazine = "FlareYellow_GP25";
				count = 2;
			};
			class _xx_1Rnd_HE_GP25
			{
				magazine = "1Rnd_HE_GP25";
				count = 80;
			};
			class _xx_1Rnd_Smoke_GP25
			{
				magazine = "1Rnd_Smoke_GP25";
				count = 2;
			};
			class _xx_1Rnd_SmokeRed_GP25
			{
				magazine = "1Rnd_SmokeRed_GP25";
				count = 2;
			};
			class _xx_1Rnd_SmokeGreen_GP25
			{
				magazine = "1Rnd_SmokeGreen_GP25";
				count = 2;
			};
			class _xx_1Rnd_SmokeYellow_GP25
			{
				magazine = "1Rnd_SmokeYellow_GP25";
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
			class _xx_1Rnd_HE_M203
			{
				magazine = "1Rnd_HE_M203";
				count = 80;
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
			class _xx_PG7VL
			{
				magazine = "PG7VL";
				count = 20;
			};
			class _xx_RPG18
			{
				magazine = "RPG18";
				count = 20;
			};
			class _xx_Strela
			{
				magazine = "Strela";
				count = 20;
			};
			class _xx_AT13
			{
				magazine = "AT13";
				count = 5;
			};
			class _xx_HandGrenade_East
			{
				magazine = "HandGrenade_East";
				count = 50;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 2;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 2;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 5;
			};
			class _xx_Igla
			{
				magazine = "Igla";
				count = 10;
			};
		};
		class TransportWeapons
		{
			class _xx_RPG7V
			{
				weapon = "RPG7V";
				count = 2;
			};
			class _xx_RPG18
			{
				weapon = "RPG18";
				count = 2;
			};
			class _xx_M79_EP1
			{
				weapon = "M79_EP1";
				count = 2;
			};
			class _xx_Strela
			{
				weapon = "Strela";
				count = 2;
			};
			class _xx_MetisLauncher
			{
				weapon = "MetisLauncher";
				count = 2;
			};
			class _xx_Igla
			{
				weapon = "Igla";
				count = 2;
			};
		};
	};
	class TKOrdnanceBox_EP1: TKBasicAmmunitionBox_EP1
	{
		displayName = "$STR_EP1_DN_TKOrdnanceBox_EP1";
		model = "\ca\weapons\AmmoBoxes\RUOrdnance.p3d";
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
			class _xx_HandGrenade_East
			{
				magazine = "HandGrenade_East";
				count = 30;
			};
		};
		class TransportWeapons{};
	};
	class TKVehicleBox_EP1: TKBasicAmmunitionBox_EP1
	{
		displayName = "$STR_EP1_DN_TKVehicleBox_EP1";
		model = "\ca\weapons\AmmoBoxes\RUVehicleAmmo.p3d";
		class TransportMagazines
		{
			class _xx_100Rnd_762x54_PK
			{
				magazine = "100Rnd_762x54_PK";
				count = 50;
			};
		};
		class TransportWeapons{};
		transportAmmo = 100000;
		supplyRadius = 3;
	};
	class GuerillaCacheBox_EP1: ReammoBox_EP1
	{
		scope = 2;
		accuracy = 1000;
		displayName = "$STR_DN_GUERILLACACHEBOX";
		model = "\ca\weapons_e\AmmoBoxes\GuerillaCache.p3d";
		class TransportMagazines
		{
			class _xx_30Rnd_762x39_AK47
			{
				magazine = "30Rnd_762x39_AK47";
				count = 120;
			};
			class _xx_100Rnd_762x54_PK
			{
				magazine = "100Rnd_762x54_PK";
				count = 20;
			};
			class _xx_10Rnd_762x54_SVD
			{
				magazine = "10Rnd_762x54_SVD";
				count = 8;
			};
			class _xx_PG7V
			{
				magazine = "PG7V";
				count = 6;
			};
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 80;
			};
			class _xx_1Rnd_HE_M203
			{
				magazine = "1Rnd_HE_M203";
				count = 20;
			};
			class _xx_10x_303
			{
				magazine = "10x_303";
				count = 50;
			};
			class _xx_Stinger
			{
				magazine = "Stinger";
				count = 10;
			};
			class _xx_Dragon_EP1
			{
				magazine = "Dragon_EP1";
				count = 10;
			};
			class _xx_75Rnd_545x39_RPK
			{
				magazine = "75Rnd_545x39_RPK";
				count = 20;
			};
		};
		class TransportWeapons
		{
			class _xx_AK_47_M
			{
				weapon = "AK_47_M";
				count = 4;
			};
			class _xx_AK_47_S
			{
				weapon = "AK_47_S";
				count = 4;
			};
			class _xx_PK
			{
				weapon = "PK";
				count = 2;
			};
			class _xx_SVD
			{
				weapon = "SVD";
				count = 1;
			};
			class _xx_RPG7V
			{
				weapon = "RPG7V";
				count = 2;
			};
			class _xx_M16A2
			{
				weapon = "M16A2";
				count = 4;
			};
			class _xx_M16A2GL
			{
				weapon = "M16A2GL";
				count = 2;
			};
			class _xx_LeeEnfield
			{
				weapon = "LeeEnfield";
				count = 2;
			};
			class _xx_RPK_74
			{
				weapon = "RPK_74";
				count = 2;
			};
			class _xx_Stinger
			{
				weapon = "Stinger";
				count = 2;
			};
			class _xx_M47Launcher_EP1
			{
				weapon = "M47Launcher_EP1";
				count = 2;
			};
		};
	};
	class UNBasicAmmunitionBox_EP1: ReammoBox_EP1
	{
		scope = 2;
		accuracy = 1000;
		displayName = "$STR_EP1_DN_UNBasicAmmunitionBox_EP1";
		model = "\ca\weapons\AmmoBoxes\LocalBasicAmmo.p3d";
		class TransportMagazines
		{
			class _xx_30Rnd_762x39_AK47
			{
				magazine = "30Rnd_762x39_AK47";
				count = 80;
			};
			class _xx_30Rnd_545x39_AK
			{
				magazine = "30Rnd_545x39_AK";
				count = 200;
			};
			class _xx_10Rnd_762x54_SVD
			{
				magazine = "10Rnd_762x54_SVD";
				count = 30;
			};
			class _xx_8Rnd_9x18_Makarov
			{
				magazine = "8Rnd_9x18_Makarov";
				count = 25;
			};
			class _xx_PG7V
			{
				magazine = "PG7V";
				count = 20;
			};
			class _xx_75Rnd_545x39_RPK
			{
				magazine = "75Rnd_545x39_RPK";
				count = 30;
			};
			class _xx_100Rnd_762x54_PK
			{
				magazine = "100Rnd_762x54_PK";
				count = 30;
			};
			class _xx_HandGrenade_East
			{
				magazine = "HandGrenade_East";
				count = 20;
			};
		};
		class TransportWeapons
		{
			class _xx_AK_47_S
			{
				weapon = "AK_47_S";
				count = 4;
			};
			class _xx_AK_74
			{
				weapon = "AK_74";
				count = 4;
			};
		};
	};
	class UNBasicWeapons_EP1: ReammoBox_EP1
	{
		scope = 2;
		accuracy = 1000;
		displayName = "$STR_EP1_DN_UNBasicWeapons_EP1";
		model = "\ca\weapons\AmmoBoxes\LocalBasicWeapons.p3d";
		class TransportMagazines
		{
			class _xx_30Rnd_762x39_AK47
			{
				magazine = "30Rnd_762x39_AK47";
				count = 40;
			};
			class _xx_30Rnd_545x39_AK
			{
				magazine = "30Rnd_545x39_AK";
				count = 100;
			};
			class _xx_10Rnd_762x54_SVD
			{
				magazine = "10Rnd_762x54_SVD";
				count = 15;
			};
			class _xx_8Rnd_9x18_Makarov
			{
				magazine = "8Rnd_9x18_Makarov";
				count = 25;
			};
			class _xx_PG7VL
			{
				magazine = "PG7VL";
				count = 10;
			};
			class _xx_75Rnd_545x39_RPK
			{
				magazine = "75Rnd_545x39_RPK";
				count = 20;
			};
			class _xx_100Rnd_762x54_PK
			{
				magazine = "100Rnd_762x54_PK";
				count = 12;
			};
			class _xx_HandGrenade_East
			{
				magazine = "HandGrenade_East";
				count = 20;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 10;
			};
			class _xx_SmokeShellRed
			{
				magazine = "SmokeShellRed";
				count = 5;
			};
		};
		class TransportWeapons
		{
			class _xx_AK_74
			{
				weapon = "AK_74";
				count = 4;
			};
			class _xx_AK_47_S
			{
				weapon = "AK_47_S";
				count = 4;
			};
			class _xx_AK_74_GL
			{
				weapon = "AK_74_GL";
				count = 5;
			};
			class _xx_AKS_74_pso
			{
				weapon = "AKS_74_pso";
				count = 3;
			};
			class _xx_AKS_74_U
			{
				weapon = "AKS_74_U";
				count = 4;
			};
			class _xx_AK_74_GL_kobra
			{
				weapon = "AK_74_GL_kobra";
				count = 4;
			};
			class _xx_SVD
			{
				weapon = "SVD";
				count = 2;
			};
			class _xx_RPG7V
			{
				weapon = "RPG7V";
				count = 2;
			};
			class _xx_RPK_74
			{
				weapon = "RPK_74";
				count = 2;
			};
			class _xx_PK
			{
				weapon = "PK";
				count = 2;
			};
			class _xx_Makarov
			{
				weapon = "Makarov";
				count = 5;
			};
		};
	};
};
//};

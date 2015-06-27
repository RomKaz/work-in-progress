////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:13:57 2014 : Source 'file' date Fri Oct 31 06:13:57 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : Editor_AddedAllWeaponSlotsInfantryVariants\config.bin{
class cfgPatches
{
	class CA_CommunityConfigurationProject_E_Editor_AddedAllWeaponSlotsInfantryVariants
	{
		units[] = {"USMC_Soldier_Light_AllWeaponSlots","USMC_Soldier_Officer_AllWeaponSlots","USMC_Soldier_Medic_AllWeaponSlots","USMC_Soldier_Crew_AllWeaponSlots","RU_Soldier_Light_AllWeaponSlots","RU_Commander_AllWeaponSlots","RU_Soldier_Medic_AllWeaponSlots","GUE_Worker2_AllWeaponSlots","GUE_Woodlander1_AllWeaponSlots","GUE_Woodlander2_AllWeaponSlots","GUE_Woodlander3_AllWeaponSlots","GUE_Villager3_AllWeaponSlots","GUE_Villager4_AllWeaponSlots","Ins_Commander_AllWeaponSlots","Ins_Soldier_Medic_AllWeaponSlots","Ins_Worker2_AllWeaponSlots","Ins_Woodlander1_AllWeaponSlots","Ins_Woodlander2_AllWeaponSlots","Ins_Woodlander3_AllWeaponSlots","Ins_Villager3_AllWeaponSlots","Ins_Villager4_AllWeaponSlots","Ins_Lopotev_AllWeaponSlots","Ins_Bardak_AllWeaponSlots","Ins_Soldier_Pilot_AllWeaponSlots","CDF_Soldier_Light_AllWeaponSlots","CDF_Soldier_Medic_AllWeaponSlots","CDF_Commander_AllWeaponSlots","CZ_Soldier_DES_AllWeaponSlots_EP1","CZ_Soldier_medik_DES_AllWeaponSlots_EP1","CZ_Soldier_Office_DES_AllWeaponSlots_EP1","CZ_Soldier_Light_DES_AllWeaponSlots_EP1","US_Soldier_Light_AllWeaponSlots_EP1","US_Soldier_Officer_AllWeaponSlots_EP1","US_Soldier_Medic_AllWeaponSlots_EP1","US_Soldier_Crew_AllWeaponSlots_EP1","US_Pilot_Light_AllWeaponSlots_EP1","Herrera_AllWeaponSlots","Herrera_Light_AllWeaponSlots","TK_Soldier_Medic_AllWeaponSlots_EP1","GER_Soldier_Medic_AllWeaponSlots_EP1","Soldier_Crew_AllWeaponSlots_PMC","Soldier_Medic_AllWeaponSlots_PMC"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CA_CommunityConfigurationProject_E"};
	};
};
class CfgVehicles
{
	class SoldierWB;
	class SoldierEB;
	class SoldierGB;
	class USMC_Soldier_Base: SoldierWB{};
	class USMC_Soldier_Light: USMC_Soldier_Base{};
	class USMC_Soldier_Officer: USMC_Soldier_Base{};
	class USMC_Soldier_Medic: USMC_Soldier_Base{};
	class USMC_Soldier_Crew: USMC_Soldier_Base{};
	class RU_Soldier_Base: SoldierEB{};
	class RU_Soldier_Light: RU_Soldier_Base{};
	class RU_Commander: RU_Soldier_Base{};
	class RU_Soldier_Medic: RU_Soldier_Base{};
	class GUE_Soldier_Base: SoldierGB{};
	class GUE_Worker2: GUE_Soldier_Base{};
	class GUE_Woodlander1: GUE_Soldier_Base{};
	class GUE_Woodlander2: GUE_Woodlander1{};
	class GUE_Woodlander3: GUE_Woodlander1{};
	class GUE_Villager3: GUE_Soldier_Base{};
	class GUE_Villager4: GUE_Villager3{};
	class Ins_Soldier_Base: SoldierEB{};
	class Ins_Commander: Ins_Soldier_Base{};
	class Ins_Soldier_Medic: Ins_Soldier_Base{};
	class Ins_Worker2: Ins_Soldier_Base{};
	class Ins_Woodlander1: Ins_Soldier_Base{};
	class Ins_Woodlander2: Ins_Woodlander1{};
	class Ins_Woodlander3: Ins_Woodlander1{};
	class Ins_Villager3: Ins_Soldier_Base{};
	class Ins_Villager4: Ins_Villager3{};
	class Ins_Lopotev: Ins_Commander{};
	class Ins_Bardak: Ins_Commander{};
	class Ins_Soldier_Pilot: Ins_Soldier_Base{};
	class CDF_Soldier_Base: SoldierWB{};
	class CDF_Soldier_Light: CDF_Soldier_Base{};
	class CDF_Soldier_Medic: CDF_Soldier_Base{};
	class CDF_Commander: CDF_Soldier_Base{};
	class CZ_Soldier_base_EP1: SoldierWB{};
	class CZ_Soldier_DES_EP1: CZ_Soldier_base_EP1{};
	class CZ_Soldier_medik_DES_EP1: CZ_Soldier_DES_EP1{};
	class CZ_Soldier_Office_DES_EP1: CZ_Soldier_base_EP1{};
	class CZ_Soldier_Light_DES_EP1: CZ_Soldier_base_EP1{};
	class US_Soldier_Base_EP1: SoldierWB{};
	class US_Soldier_Light_EP1: US_Soldier_Base_EP1{};
	class US_Soldier_Officer_EP1: US_Soldier_Base_EP1{};
	class US_Soldier_Medic_EP1: US_Soldier_Base_EP1{};
	class US_Soldier_Crew_EP1: US_Soldier_Base_EP1{};
	class US_Pilot_Light_EP1: US_Soldier_Base_EP1{};
	class Herrera: US_Soldier_Crew_EP1{};
	class Herrera_Light: Herrera{};
	class TK_Soldier_base_EP1: SoldierEB{};
	class TK_Soldier_Medic_EP1: TK_Soldier_base_EP1{};
	class GER_Soldier_base_EP1: SoldierWB{};
	class GER_Soldier_Medic_EP1: GER_Soldier_base_EP1{};
	class Soldier_Base_PMC: SoldierGB{};
	class Soldier_Crew_PMC: Soldier_Base_PMC{};
	class Soldier_Medic_PMC: Soldier_Base_PMC{};
	class USMC_Soldier_Light_AllWeaponSlots: USMC_Soldier_Light
	{
		scope = 1;
		weaponslots = "1 + 2 + 4 + 8 * 16 + 12 * 256 + 2 * 4096 + 12 * 131072";
		class Armory{};
	};
	class USMC_Soldier_Officer_AllWeaponSlots: USMC_Soldier_Officer
	{
		scope = 1;
		weaponslots = "1 + 2 + 4 + 8 * 16 + 12 * 256 + 2 * 4096 + 12 * 131072";
		class Armory{};
	};
	class USMC_Soldier_Medic_AllWeaponSlots: USMC_Soldier_Medic
	{
		scope = 1;
		weaponslots = "1 + 2 + 4 + 8 * 16 + 12 * 256 + 2 * 4096 + 12 * 131072";
		class Armory{};
	};
	class USMC_Soldier_Crew_AllWeaponSlots: USMC_Soldier_Crew
	{
		scope = 1;
		weaponslots = "1 + 2 + 4 + 8 * 16 + 12 * 256 + 2 * 4096 + 12 * 131072";
		class Armory{};
	};
	class RU_Soldier_Light_AllWeaponSlots: RU_Soldier_Light
	{
		scope = 1;
		weaponslots = "1 + 2 + 4 + 8 * 16 + 12 * 256 + 2 * 4096 + 12 * 131072";
		class Armory{};
	};
	class RU_Commander_AllWeaponSlots: RU_Commander
	{
		scope = 1;
		weaponslots = "1 + 2 + 4 + 8 * 16 + 12 * 256 + 2 * 4096 + 12 * 131072";
		class Armory{};
	};
	class RU_Soldier_Medic_AllWeaponSlots: RU_Soldier_Medic
	{
		scope = 1;
		weaponslots = "1 + 2 + 4 + 8 * 16 + 12 * 256 + 2 * 4096 + 12 * 131072";
		class Armory{};
	};
	class GUE_Worker2_AllWeaponSlots: GUE_Worker2
	{
		scope = 1;
		weaponslots = "1 + 2 + 4 + 8 * 16 + 12 * 256 + 2 * 4096 + 12 * 131072";
		class Armory{};
	};
	class GUE_Woodlander1_AllWeaponSlots: GUE_Woodlander1
	{
		scope = 1;
		weaponslots = "1 + 2 + 4 + 8 * 16 + 12 * 256 + 2 * 4096 + 12 * 131072";
		class Armory{};
	};
	class GUE_Woodlander2_AllWeaponSlots: GUE_Woodlander2
	{
		scope = 1;
		weaponslots = "1 + 2 + 4 + 8 * 16 + 12 * 256 + 2 * 4096 + 12 * 131072";
		class Armory{};
	};
	class GUE_Woodlander3_AllWeaponSlots: GUE_Woodlander3
	{
		scope = 1;
		weaponslots = "1 + 2 + 4 + 8 * 16 + 12 * 256 + 2 * 4096 + 12 * 131072";
		class Armory{};
	};
	class GUE_Villager3_AllWeaponSlots: GUE_Villager3
	{
		scope = 1;
		weaponslots = "1 + 2 + 4 + 8 * 16 + 12 * 256 + 2 * 4096 + 12 * 131072";
		class Armory{};
	};
	class GUE_Villager4_AllWeaponSlots: GUE_Villager4
	{
		scope = 1;
		weaponslots = "1 + 2 + 4 + 8 * 16 + 12 * 256 + 2 * 4096 + 12 * 131072";
		class Armory{};
	};
	class Ins_Commander_AllWeaponSlots: Ins_Commander
	{
		scope = 1;
		weaponslots = "1 + 2 + 4 + 8 * 16 + 12 * 256 + 2 * 4096 + 12 * 131072";
		class Armory{};
	};
	class Ins_Soldier_Medic_AllWeaponSlots: Ins_Soldier_Medic
	{
		scope = 1;
		weaponslots = "1 + 2 + 4 + 8 * 16 + 12 * 256 + 2 * 4096 + 12 * 131072";
		class Armory{};
	};
	class Ins_Worker2_AllWeaponSlots: Ins_Worker2
	{
		scope = 1;
		weaponslots = "1 + 2 + 4 + 8 * 16 + 12 * 256 + 2 * 4096 + 12 * 131072";
		class Armory{};
	};
	class Ins_Woodlander1_AllWeaponSlots: Ins_Woodlander1
	{
		scope = 1;
		weaponslots = "1 + 2 + 4 + 8 * 16 + 12 * 256 + 2 * 4096 + 12 * 131072";
		class Armory{};
	};
	class Ins_Woodlander2_AllWeaponSlots: Ins_Woodlander2
	{
		scope = 1;
		weaponslots = "1 + 2 + 4 + 8 * 16 + 12 * 256 + 2 * 4096 + 12 * 131072";
		class Armory{};
	};
	class Ins_Woodlander3_AllWeaponSlots: Ins_Woodlander3
	{
		scope = 1;
		weaponslots = "1 + 2 + 4 + 8 * 16 + 12 * 256 + 2 * 4096 + 12 * 131072";
		class Armory{};
	};
	class Ins_Villager3_AllWeaponSlots: Ins_Villager3
	{
		scope = 1;
		weaponslots = "1 + 2 + 4 + 8 * 16 + 12 * 256 + 2 * 4096 + 12 * 131072";
		class Armory{};
	};
	class Ins_Villager4_AllWeaponSlots: Ins_Villager4
	{
		scope = 1;
		weaponslots = "1 + 2 + 4 + 8 * 16 + 12 * 256 + 2 * 4096 + 12 * 131072";
		class Armory{};
	};
	class Ins_Lopotev_AllWeaponSlots: Ins_Lopotev
	{
		scope = 1;
		weaponslots = "1 + 2 + 4 + 8 * 16 + 12 * 256 + 2 * 4096 + 12 * 131072";
		class Armory{};
	};
	class Ins_Bardak_AllWeaponSlots: Ins_Bardak
	{
		scope = 1;
		weaponslots = "1 + 2 + 4 + 8 * 16 + 12 * 256 + 2 * 4096 + 12 * 131072";
		class Armory{};
	};
	class Ins_Soldier_Pilot_AllWeaponSlots: Ins_Soldier_Pilot
	{
		scope = 1;
		weaponslots = "1 + 2 + 4 + 8 * 16 + 12 * 256 + 2 * 4096 + 12 * 131072";
		class Armory{};
	};
	class CDF_Soldier_Light_AllWeaponSlots: CDF_Soldier_Light
	{
		scope = 1;
		weaponslots = "1 + 2 + 4 + 8 * 16 + 12 * 256 + 2 * 4096 + 12 * 131072";
		class Armory{};
	};
	class CDF_Soldier_Medic_AllWeaponSlots: CDF_Soldier_Medic
	{
		scope = 1;
		weaponslots = "1 + 2 + 4 + 8 * 16 + 12 * 256 + 2 * 4096 + 12 * 131072";
		class Armory{};
	};
	class CDF_Commander_AllWeaponSlots: CDF_Commander
	{
		scope = 1;
		weaponslots = "1 + 2 + 4 + 8 * 16 + 12 * 256 + 2 * 4096 + 12 * 131072";
		class Armory{};
	};
	class CZ_Soldier_DES_AllWeaponSlots_EP1: CZ_Soldier_DES_EP1
	{
		scope = 1;
		weaponslots = "1 + 2 + 4 + 8 * 16 + 12 * 256 + 2 * 4096 + 12 * 131072";
		class Armory{};
	};
	class CZ_Soldier_medik_DES_AllWeaponSlots_EP1: CZ_Soldier_medik_DES_EP1
	{
		scope = 1;
		weaponslots = "1 + 2 + 4 + 8 * 16 + 12 * 256 + 2 * 4096 + 12 * 131072";
		class Armory{};
	};
	class CZ_Soldier_Office_DES_AllWeaponSlots_EP1: CZ_Soldier_Office_DES_EP1
	{
		scope = 1;
		weaponslots = "1 + 2 + 4 + 8 * 16 + 12 * 256 + 2 * 4096 + 12 * 131072";
		class Armory{};
	};
	class CZ_Soldier_Light_DES_AllWeaponSlots_EP1: CZ_Soldier_Light_DES_EP1
	{
		scope = 1;
		weaponslots = "1 + 2 + 4 + 8 * 16 + 12 * 256 + 2 * 4096 + 12 * 131072";
		class Armory{};
	};
	class US_Soldier_Light_AllWeaponSlots_EP1: US_Soldier_Light_EP1
	{
		scope = 1;
		weaponslots = "1 + 2 + 4 + 8 * 16 + 12 * 256 + 2 * 4096 + 12 * 131072";
		class Armory{};
	};
	class US_Soldier_Officer_AllWeaponSlots_EP1: US_Soldier_Officer_EP1
	{
		scope = 1;
		weaponslots = "1 + 2 + 4 + 8 * 16 + 12 * 256 + 2 * 4096 + 12 * 131072";
		class Armory{};
	};
	class US_Soldier_Medic_AllWeaponSlots_EP1: US_Soldier_Medic_EP1
	{
		scope = 1;
		weaponslots = "1 + 2 + 4 + 8 * 16 + 12 * 256 + 2 * 4096 + 12 * 131072";
		class Armory{};
	};
	class US_Soldier_Crew_AllWeaponSlots_EP1: US_Soldier_Crew_EP1
	{
		scope = 1;
		weaponslots = "1 + 2 + 4 + 8 * 16 + 12 * 256 + 2 * 4096 + 12 * 131072";
		class Armory{};
	};
	class US_Pilot_Light_AllWeaponSlots_EP1: US_Pilot_Light_EP1
	{
		scope = 1;
		weaponslots = "1 + 2 + 4 + 8 * 16 + 12 * 256 + 2 * 4096 + 12 * 131072";
		class Armory{};
	};
	class Herrera_AllWeaponSlots: Herrera
	{
		scope = 1;
		weaponslots = "1 + 2 + 4 + 8 * 16 + 12 * 256 + 2 * 4096 + 12 * 131072";
		class Armory{};
	};
	class Herrera_Light_AllWeaponSlots: Herrera_Light
	{
		scope = 1;
		weaponslots = "1 + 2 + 4 + 8 * 16 + 12 * 256 + 2 * 4096 + 12 * 131072";
		class Armory{};
	};
	class TK_Soldier_Medic_AllWeaponSlots_EP1: TK_Soldier_Medic_EP1
	{
		scope = 1;
		weaponslots = "1 + 2 + 4 + 8 * 16 + 12 * 256 + 2 * 4096 + 12 * 131072";
		class Armory{};
	};
	class GER_Soldier_Medic_AllWeaponSlots_EP1: GER_Soldier_Medic_EP1
	{
		scope = 1;
		weaponslots = "1 + 2 + 4 + 8 * 16 + 12 * 256 + 2 * 4096 + 12 * 131072";
		class Armory{};
	};
	class Soldier_Crew_AllWeaponSlots_PMC: Soldier_Crew_PMC
	{
		scope = 1;
		weaponslots = "1 + 2 + 4 + 8 * 16 + 12 * 256 + 2 * 4096 + 12 * 131072";
		class Armory{};
	};
	class Soldier_Medic_AllWeaponSlots_PMC: Soldier_Medic_PMC
	{
		scope = 1;
		weaponslots = "1 + 2 + 4 + 8 * 16 + 12 * 256 + 2 * 4096 + 12 * 131072";
		class Armory{};
	};
};
//};

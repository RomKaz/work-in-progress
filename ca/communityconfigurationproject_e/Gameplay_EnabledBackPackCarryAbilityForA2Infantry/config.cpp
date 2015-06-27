////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:14:01 2014 : Source 'file' date Fri Oct 31 06:14:01 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : Gameplay_EnabledBackPackCarryAbilityForA2Infantry\config.bin{
class cfgPatches
{
	class CA_CommunityConfigurationProject_E_Gameplay_EnabledBackPackCarryAbilityForA2Infantry
	{
		units[] = {};
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
	class USMC_Soldier_Base: SoldierWB
	{
		canCarryBackPack = 1;
	};
	class USMC_Soldier_Medic: USMC_Soldier_Base
	{
		canCarryBackPack = 0;
	};
	class FR_Base: SoldierWB
	{
		canCarryBackPack = 1;
	};
	class FR_Corpsman: FR_Base
	{
		canCarryBackPack = 0;
	};
	class RU_Soldier_Base: SoldierEB
	{
		canCarryBackPack = 1;
	};
	class RU_Soldier_Medic: RU_Soldier_Base
	{
		canCarryBackPack = 0;
	};
	class RUS_Soldier_Base: SoldierEB
	{
		canCarryBackPack = 1;
	};
	class MVD_Soldier_Base: SoldierEB
	{
		canCarryBackPack = 1;
	};
	class GUE_Soldier_Base: SoldierGB
	{
		canCarryBackPack = 1;
	};
	class GUE_Soldier_Medic: GUE_Soldier_Base
	{
		canCarryBackPack = 0;
	};
	class Ins_Soldier_Base: SoldierEB
	{
		canCarryBackPack = 1;
	};
	class Ins_Soldier_Medic: Ins_Soldier_Base
	{
		canCarryBackPack = 0;
	};
	class CDF_Soldier_Base: SoldierWB
	{
		canCarryBackPack = 1;
	};
	class CDF_Soldier_Medic: CDF_Soldier_Base
	{
		canCarryBackPack = 0;
	};
};
//};

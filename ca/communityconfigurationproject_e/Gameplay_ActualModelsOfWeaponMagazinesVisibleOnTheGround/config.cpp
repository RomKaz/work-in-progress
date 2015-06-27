////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:13:58 2014 : Source 'file' date Fri Oct 31 06:13:58 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround\config.bin{
class cfgPatches
{
	class CA_CommunityConfigurationProject_E_Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CA_CommunityConfigurationProject_E"};
	};
};
class CfgMagazines
{
	class CA_LauncherMagazine;
	class CA_Magazine;
	class 8Rnd_9x18_Makarov: CA_Magazine
	{
		model = "\ca\CommunityConfigurationProject_E\Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround\p3d\8Rnd_9x18_Makarov.p3d";
	};
	class 15Rnd_9x19_M9: CA_Magazine
	{
		model = "\ca\CommunityConfigurationProject_E\Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround\p3d\15Rnd_9x19_M9.p3d";
	};
	class 30Rnd_9x19_MP5: CA_Magazine
	{
		model = "\ca\CommunityConfigurationProject_E\Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround\p3d\30Rnd_9x19_MP5.p3d";
	};
	class 30Rnd_545x39_AK: CA_Magazine
	{
		model = "\ca\CommunityConfigurationProject_E\Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround\p3d\30Rnd_545x39_AK.p3d";
	};
	class 20Rnd_556x45_Stanag: CA_Magazine
	{
		model = "\ca\CommunityConfigurationProject_E\Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround\p3d\20Rnd_556x45_Stanag.p3d";
	};
	class 30Rnd_556x45_Stanag: 20Rnd_556x45_Stanag
	{
		model = "\ca\CommunityConfigurationProject_E\Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround\p3d\30Rnd_556x45_Stanag.p3d";
	};
	class 30Rnd_556x45_G36: 30Rnd_556x45_Stanag
	{
		model = "\ca\CommunityConfigurationProject_E\Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround\p3d\30Rnd_556x45_G36.p3d";
	};
	class 200Rnd_556x45_M249: CA_Magazine
	{
		model = "\ca\CommunityConfigurationProject_E\Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround\p3d\200Rnd_556x45_M249.p3d";
	};
	class 5Rnd_762x51_M24: CA_Magazine
	{
		model = "\ca\CommunityConfigurationProject_E\Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround\p3d\5Rnd_762x51_M24.p3d";
	};
	class 100Rnd_762x51_M240: CA_Magazine
	{
		model = "\ca\CommunityConfigurationProject_E\Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround\p3d\100Rnd_762x51_M240.p3d";
	};
	class 10Rnd_762x54_SVD: CA_Magazine
	{
		model = "\ca\CommunityConfigurationProject_E\Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround\p3d\10Rnd_762x54_SVD.p3d";
	};
	class 100Rnd_762x54_PK: CA_Magazine
	{
		model = "\ca\CommunityConfigurationProject_E\Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround\p3d\100Rnd_762x54_PK.p3d";
	};
	class 5Rnd_127x108_KSVK: CA_Magazine
	{
		model = "\ca\CommunityConfigurationProject_E\Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround\p3d\5Rnd_127x108_KSVK.p3d";
	};
	class 10Rnd_127x99_m107: CA_Magazine
	{
		model = "\ca\CommunityConfigurationProject_E\Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround\p3d\10Rnd_127x99_m107.p3d";
	};
	class 30Rnd_9x19_UZI_SD: CA_Magazine{};
	class 30Rnd_9x19_UZI: CA_Magazine{};
	class 6Rnd_45ACP: CA_Magazine{};
	class 17Rnd_9x19_glock17: CA_Magazine{};
	class 60Rnd_762x54_DT: 100Rnd_762x54_PK{};
	class 64Rnd_9x19_Bizon: CA_Magazine{};
	class 64Rnd_9x19_SD_Bizon: CA_Magazine{};
	class 10Rnd_9x39_SP5_VSS: CA_Magazine{};
	class 20Rnd_9x39_SP5_VSS: CA_Magazine{};
	class 8Rnd_B_Saiga12_74Slug: CA_Magazine{};
	class 8Rnd_B_Beneli_74Slug: CA_Magazine{};
	class 100Rnd_556x45_BetaCMag: CA_Magazine{};
	class 75Rnd_545x39_RPK: CA_Magazine{};
	class 30Rnd_762x39_AK47: CA_Magazine{};
	class 7Rnd_45ACP_1911: CA_Magazine{};
	class 20Rnd_762x51_DMR: CA_Magazine{};
	class 5x_22_LR_17_HMR: CA_Magazine{};
	class 5Rnd_127x99_as50: CA_Magazine{};
	class 5Rnd_86x70_L115A1: CA_Magazine{};
	class 10Rnd_B_765x17_Ball: CA_Magazine{};
	class 20Rnd_762x51_B_SCAR: CA_Magazine{};
	class 20Rnd_762x51_SB_SCAR: CA_Magazine{};
	class 30Rnd_762x39_SA58: CA_Magazine{};
	class 20Rnd_762x51_FNFAL: CA_Magazine{};
	class 10x_303: CA_Magazine{};
	class 1Rnd_HE_M203: CA_Magazine{};
	class FlareWhite_M203: CA_Magazine{};
	class 1Rnd_HE_GP25: CA_Magazine{};
	class FlareWhite_GP25: CA_Magazine{};
	class Laserbatteries: CA_Magazine{};
	class TimeBomb: CA_Magazine{};
	class IR_Strobe_Target: CA_Magazine{};
	class HandGrenade: CA_Magazine
	{
		model = "\ca\CommunityConfigurationProject_E\Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround\p3d\HandGrenade.p3d";
	};
	class SmokeShell: HandGrenade
	{
		model = "\ca\CommunityConfigurationProject_E\Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround\p3d\SmokeShell.p3d";
	};
	class SmokeShellGreen: SmokeShell
	{
		model = "\ca\CommunityConfigurationProject_E\Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround\p3d\SmokeShellGreen.p3d";
	};
	class SmokeShellRed: SmokeShell
	{
		model = "\ca\CommunityConfigurationProject_E\Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround\p3d\SmokeShellRed.p3d";
	};
	class Mine: TimeBomb
	{
		model = "\ca\CommunityConfigurationProject_E\Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround\p3d\Mine.p3d";
	};
	class MineE: TimeBomb
	{
		model = "\ca\CommunityConfigurationProject_E\Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround\p3d\MineE.p3d";
	};
	class M136: CA_LauncherMagazine{};
	class Javelin: CA_LauncherMagazine{};
	class Dragon_EP1: CA_LauncherMagazine{};
	class AT13: CA_LauncherMagazine{};
	class PG7V: CA_LauncherMagazine{};
	class PG7VL: PG7V{};
	class PG7VR: PG7V{};
	class OG7: CA_LauncherMagazine{};
	class PG9_AT: CA_LauncherMagazine{};
	class OG9_HE: CA_LauncherMagazine{};
	class Stinger: CA_LauncherMagazine{};
	class Strela: CA_LauncherMagazine{};
	class RPG18: CA_LauncherMagazine{};
	class SMAW_HEDP: CA_LauncherMagazine{};
	class MAAWS_HEDP: CA_LauncherMagazine
	{
		model = "\Ca\weapons_E\magazine_maaws\magazine_maaws.p3d";
	};
	class Igla: Strela{};
	class NLAW: CA_LauncherMagazine{};
};
//};

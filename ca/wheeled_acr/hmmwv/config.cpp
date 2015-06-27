////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:07:19 2014 : Source 'file' date Fri Oct 31 06:07:19 2014
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

//Class wheeled_acr : hmmwv\config.bin{
class _xx_100Rnd_762x54_PK
{
	magazine = "100Rnd_762x54_PK";
	count = "5*x";
};
class _xx_HandGrenade_West
{
	magazine = "HandGrenade_West";
	count = "6*x";
};
class _xx_SmokeShell
{
	magazine = "SmokeShell";
	count = "6*x";
};
class _xx_SmokeShellRed
{
	magazine = "SmokeShellRed";
	count = "2*x";
};
class CfgPatches
{
	class CAWheeled_ACR_HMMWV
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.5;
		requiredAddons[] = {"CAWheeled_ACR"};
	};
};
class WeaponCloudsMGun;
class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class Turrets;
	};
	class HMMWV_base: Car
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class HMMWV_M1151_M2_DES_Base_EP1: HMMWV_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
		class AnimationSources;
	};
	class M1114_AGS_ACR: HMMWV_M1151_M2_DES_Base_EP1
	{
		expansion = 3;
		scope = 2;
		displayName = "$STR_ACR_DN_HMMWV_AGS";
		model = "\Ca\Wheeled_ACR\HMMWV\M1114_AGS_ACR.p3d";
		faction = "BIS_CZ";
		crew = "CZ_Soldier_DES_EP1";
		typicalCargo[] = {"CZ_Soldier_DES_EP1","CZ_Soldier_DES_EP1","CZ_Soldier_DES_EP1"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"AGS30"};
				magazines[] = {"29Rnd_30mm_AGS30","29Rnd_30mm_AGS30","29Rnd_30mm_AGS30","29Rnd_30mm_AGS30","29Rnd_30mm_AGS30","29Rnd_30mm_AGS30"};
				gunnerAction = "LR_Gunner01_EP1";
				gunnerOpticsModel = "\ca\weapons\optika_AGS30.p3d";
				class GunFire: WeaponCloudsMGun
				{
					interval = 0.01;
				};
				class ViewOptics: ViewOptics
				{
					initFov = 0.2;
					minFov = 0.058;
					maxFov = 0.2;
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "AGS30";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "AGS30";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "AGS30";
			};
		};
		class TransportWeapons
		{
			class _xx_Sa58P_EP1
			{
				weapon = "Sa58P_EP1";
				count = 1;
			};
			class _xx_CZ805_A1_ACR
			{
				weapon = "CZ805_A1_ACR";
				count = "2*1";
			};
			class _xx_UK59_ACR
			{
				weapon = "UK59_ACR";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_762x39_SA58
			{
				magazine = "30Rnd_762x39_SA58";
				count = "15*1";
			};
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = "30*1";
			};
		};
	};
	class M1114_DSK_ACR: HMMWV_M1151_M2_DES_Base_EP1
	{
		expansion = 3;
		scope = 2;
		displayName = "$STR_ACR_DN_HMMWV_DSHKM";
		model = "\Ca\Wheeled_ACR\HMMWV\M1114_DSK_ACR.p3d";
		faction = "BIS_CZ";
		crew = "CZ_Soldier_DES_EP1";
		typicalCargo[] = {"CZ_Soldier_DES_EP1","CZ_Soldier_DES_EP1","CZ_Soldier_DES_EP1"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerOpticsModel = "\ca\Weapons\optika_empty.p3d";
				weapons[] = {"DShKM"};
				magazines[] = {"50Rnd_127x107_DSHKM","50Rnd_127x107_DSHKM","50Rnd_127x107_DSHKM","50Rnd_127x107_DSHKM","50Rnd_127x107_DSHKM","50Rnd_127x107_DSHKM"};
			};
		};
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "DShKM";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "DShKM";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "DShKM";
			};
		};
		class TransportWeapons
		{
			class _xx_Sa58P_EP1
			{
				weapon = "Sa58P_EP1";
				count = 1;
			};
			class _xx_CZ805_A1_ACR
			{
				weapon = "CZ805_A1_ACR";
				count = "2*1";
			};
			class _xx_UK59_ACR
			{
				weapon = "UK59_ACR";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_762x39_SA58
			{
				magazine = "30Rnd_762x39_SA58";
				count = "15*1";
			};
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = "30*1";
			};
		};
	};
};
//};

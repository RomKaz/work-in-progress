////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:14:02 2014 : Source 'file' date Fri Oct 31 06:14:02 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : Gameplay_MadePilotsControlUnguidedRockets\config.bin{
class cfgPatches
{
	class CA_CommunityConfigurationProject_E_Gameplay_MadePilotsControlUnguidedRockets
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CA_CommunityConfigurationProject_E"};
	};
};
class CfgVehicles
{
	class Air;
	class Helicopter: Air
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class Plane: Air
	{
		class NewTurret;
	};
	class AW159_Lynx_BAF: Helicopter
	{
		weapons[] = {"CRV7_PG","M621","CMFlareLauncher"};
		magazines[] = {"12Rnd_CRV7","1200Rnd_20mm_M621","120Rnd_CMFlareMagazine"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"Laserdesignator_mounted"};
				magazines[] = {"Laserbatteries"};
			};
		};
	};
	class Mi24_Base: Helicopter
	{
		weapons[] = {"S8Launcher","CMFlareLauncher"};
		magazines[] = {"80Rnd_80mm","120Rnd_CMFlareMagazine"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"YakB","AT6Launcher"};
				magazines[] = {"1470Rnd_127x108_YakB","4Rnd_AT6_Mi24V"};
			};
		};
	};
	class Mi24_Base_RU: Mi24_Base{};
	class Mi24_P: Mi24_Base_RU
	{
		weapons[] = {"GSh302","80mmLauncher","CMFlareLauncher"};
		magazines[] = {"750Rnd_30mm_GSh301","40Rnd_80mm","120Rnd_CMFlareMagazine"};
		memoryPointGun = "machinegun";
		gunBeg = "muzzle_1";
		gunEnd = "chamber_1";
		selectionFireAnim = "zasleh";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"HeliBombLauncher","AT9Launcher"};
				magazines[] = {"2Rnd_FAB_250","4Rnd_AT9_Mi24P"};
				selectionFireAnim = "";
			};
		};
	};
	class Mi24_Base_CDF: Mi24_Base{};
	class Mi24_D: Mi24_Base_CDF
	{
		weapons[] = {"57mmLauncher_128","CMFlareLauncher"};
		magazines[] = {"128Rnd_57mm","120Rnd_CMFlareMagazine"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"YakB","AT2Launcher"};
				magazines[] = {"1470Rnd_127x108_YakB","4Rnd_AT2_Mi24D"};
			};
		};
	};
	class Mi24_Base_TK_EP1: Mi24_Base{};
	class Mi24_D_Base_TK_EP1: Mi24_Base_TK_EP1
	{
		weapons[] = {"57mmLauncher_128","CMFlareLauncher"};
		magazines[] = {"128Rnd_57mm","120Rnd_CMFlareMagazine"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"YakB","AT2Launcher"};
				magazines[] = {"1470Rnd_127x108_YakB","4Rnd_AT2_Mi24D"};
			};
		};
	};
	class Mi24_Base_CZ_ACR: Mi24_Base{};
	class Mi24_D_Base_CZ_ACR: Mi24_Base_CZ_ACR
	{
		weapons[] = {"80mmLauncher","CMFlareLauncher"};
		magazines[] = {"40Rnd_80mm","120Rnd_CMFlareMagazine"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"YakB","AT9Launcher"};
				magazines[] = {"1470Rnd_127x108_YakB","8Rnd_AT9_Mi24V"};
			};
		};
	};
	class Kamov_Base: Helicopter{};
	class Ka52: Kamov_Base
	{
		weapons[] = {"80mmLauncher","CMFlareLauncher"};
		magazines[] = {"40Rnd_80mm","120Rnd_CMFlare_Chaff_Magazine"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"2A42","VikhrLauncher"};
				magazines[] = {"230Rnd_30mmHE_2A42","230Rnd_30mmAP_2A42","12Rnd_Vikhr_KA50"};
			};
		};
	};
	class AH1_Base: Helicopter{};
	class AH1Z: AH1_Base
	{
		weapons[] = {"FFARLauncher","CMFlareLauncher"};
		magazines[] = {"38Rnd_FFAR","120Rnd_CMFlareMagazine"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"M197","HellfireLauncher","SidewinderLaucher_AH1Z"};
				magazines[] = {"750Rnd_M197_AH1","8Rnd_Hellfire","2Rnd_Sidewinder_AH1Z"};
			};
		};
	};
	class AH64_base_EP1: Helicopter{};
	class AH64D: AH64_base_EP1
	{
		weapons[] = {"FFARLauncher","CMFlareLauncher"};
		magazines[] = {"38Rnd_FFAR","60Rnd_CMFlareMagazine"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"M230","HellfireLauncher"};
				magazines[] = {"1200Rnd_30x113mm_M789_HEDP","8Rnd_Hellfire"};
			};
		};
	};
	class AH64D_Sidewinders: AH64D
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"M230","SidewinderLaucher_AH64"};
				magazines[] = {"1200Rnd_30x113mm_M789_HEDP","8Rnd_Sidewinder_AH64"};
			};
		};
	};
	class AH64D_EP1: AH64_base_EP1
	{
		weapons[] = {"FFARLauncher","CMFlareLauncher"};
		magazines[] = {"38Rnd_FFAR","60Rnd_CMFlareMagazine"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"M230","HellfireLauncher"};
				magazines[] = {"1200Rnd_30x113mm_M789_HEDP","8Rnd_Hellfire"};
			};
		};
	};
	class BAF_Apache_AH1_D: AH64D_EP1
	{
		weapons[] = {"CRV7_HEPD","CRV7_FAT","CMFlareLauncher"};
		magazines[] = {"6Rnd_CRV7_HEPD","6Rnd_CRV7_FAT","60Rnd_CMFlareMagazine"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"M230","HellfireLauncher"};
				magazines[] = {"1200Rnd_30x113mm_M789_HEDP","8Rnd_Hellfire"};
			};
		};
	};
	class Su34: Plane
	{
		weapons[] = {"80mmLauncher","CMFlareLauncher"};
		magazines[] = {"40Rnd_S8T","120Rnd_CMFlare_Chaff_Magazine"};
		class Turrets
		{
			class MainTurret: NewTurret
			{
				weapons[] = {"GSh301","Ch29Launcher_Su34","R73Launcher"};
				magazines[] = {"180Rnd_30mm_GSh301","6Rnd_Ch29","4Rnd_R73"};
			};
		};
	};
};
//};

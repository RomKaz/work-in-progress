////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:06:54 2014 : Source 'file' date Fri Oct 31 06:06:54 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class weapons : Static\config.bin{
class CfgMovesBasic
{
	class ManActions
	{
		NestMG_Gunner = "NestMG_Gunner";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class NestMG_Gunner: Crew
		{
			file = "\CA\weapons\Static\data\Anim\nestMG_Gunner";
			interpolateTo[] = {};
		};
	};
};
class CfgMovesWomen: CfgMovesBasic
{
	class ManActions
	{
		NestMG_Gunner = "";
	};
};
class CfgPatches
{
	class CAWeapons_Warfare_weapons
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAData","CA_Anims_Char","CAWeapons","CACharacters2"};
	};
};
class CfgVehicleClasses
{
	class WarfareBuildingsClassname
	{
		displayName = "$STR_CFG_WARFAREBUILDINGS";
	};
};
class WeaponCloudsMGun;
class CfgVehicles
{
	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		class Turrets;
	};
	class StaticAAWeapon: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class StaticCanon: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class StaticATWeapon: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class StaticMGWeapon: StaticWeapon
	{
		class AnimationSources;
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class StaticGrenadeLauncher: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class DSHKM_base: StaticMGWeapon{};
	class M2StaticMG_base: StaticMGWeapon{};
	class WarfareBMGNest_M240_base: StaticMGWeapon
	{
		armor = 450;
		model = "\CA\weapons\Static\M240_nest";
		vehicleClass = "WarfareBuildingsClassname";
		displayName = "$STR_DN_WARFAREBMGNEST";
		accuracy = 1000;
		picture = "\ca\Weapons\data\ico\mg_nest_CA.paa";
		icon = "\Ca\weapons\Data\map_ico\icomap_mg_nest_CA.paa";
		mapSize = 7;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minElev = -3;
				maxElev = 20;
				initElev = 0;
				minTurn = -65;
				maxTurn = 65;
				initTurn = 0;
				weapons[] = {"M240_veh_MG_Nest"};
				magazines[] = {"100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240"};
				gunnerAction = "NestMG_Gunner";
				gunnerOpticsShowCursor = 0;
				memoryPointGunnerOptics = "eye";
				hideWeaponsGunner = 1;
			};
		};
		class AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "M240_veh_MG_Nest";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "M240_veh_MG_Nest";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "M240_veh_MG_Nest";
			};
		};
	};
	class WarfareBMGNest_PK_Base: StaticMGWeapon
	{
		scope = 0;
		armor = 450;
		side = 0;
		faction = "INS";
		crew = "Ins_Soldier_1";
		vehicleClass = "WarfareBuildingsClassname";
		accuracy = 1000;
		picture = "\ca\Weapons\data\ico\mg_nest_CA.paa";
		icon = "\Ca\weapons\Data\map_ico\icomap_Mg_nest_CA.paa";
		mapSize = 7;
		typicalCargo[] = {"Ins_Soldier_1"};
		model = "\CA\weapons\Static\PK_nest";
		displayName = "$STR_DN_WARFAREBMGNEST_PK";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minElev = -3;
				maxElev = 20;
				initElev = 0;
				minTurn = -65;
				maxTurn = 65;
				initTurn = 0;
				weapons[] = {"PKT_MG_Nest"};
				magazines[] = {"100Rnd_762x54_PK","100Rnd_762x54_PK","100Rnd_762x54_PK","100Rnd_762x54_PK"};
				gunnerAction = "NestMG_Gunner";
				memoryPointGunnerOptics = "eye";
			};
		};
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "PKT_MG_Nest";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "PKT_MG_Nest";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "PKT_MG_Nest";
			};
		};
	};
	class DSHkM_Mini_TriPod: DSHKM_base
	{
		model = "\CA\weapons\Static\DShKM_mg2";
		displayName = "$STR_DN_DSHKM_MINITRIPOD";
		scope = 0;
		side = 0;
		faction = "INS";
		crew = "Ins_Soldier_1";
		typicalCargo[] = {"Ins_Soldier_1"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerAction = "LowTripod_Gunner";
				minTurn = -90;
				maxTurn = 90;
				initTurn = 0;
			};
		};
	};
	class M2HD_mini_TriPod: M2StaticMG_base
	{
		model = "\CA\weapons\Static\M2_mg2";
		displayName = "$STR_DN_M2HD_MINITRIPOD";
		scope = 0;
		side = 1;
		faction = "USMC";
		crew = "USMC_Soldier";
		typicalCargo[] = {"USMC_Soldier"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerAction = "LowTripod_Gunner";
				minTurn = -90;
				maxTurn = 90;
				initTurn = 0;
			};
		};
	};
	class MK19_TriPod: StaticGrenadeLauncher
	{
		scope = 0;
		side = 1;
		faction = "USMC";
		crew = "USMC_Soldier";
		typicalCargo[] = {"USMC_Soldier"};
		model = "\CA\weapons\Static\mk19_stat";
		displayName = "$STR_DN_MK19_TRIPOD";
		picture = "\ca\Weapons\data\ico\mk19_stat_CA.paa";
		icon = "\Ca\weapons\Data\map_ico\icomap_mk19_stat_CA.paa";
		mapSize = 2.5;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerOpticsModel = "\ca\Weapons\optika_empty";
				minElev = -10;
				minTurn = -90;
				maxTurn = 90;
				initTurn = 0;
				weapons[] = {"MK19"};
				magazines[] = {"48Rnd_40mm_MK19","48Rnd_40mm_MK19","48Rnd_40mm_MK19","48Rnd_40mm_MK19"};
				gunnerAction = "LowTripod_Gunner";
				class GunFire: WeaponCloudsMGun
				{
					interval = 0.01;
				};
			};
		};
	};
	class Stinger_Pod_base: StaticAAWeapon
	{
		model = "\CA\weapons\Static\FIM92_static";
		picture = "\ca\Weapons\data\ico\FIM92_static_CA.paa";
		icon = "\Ca\weapons\Data\map_ico\icomap_FIM92_static_CA.paa";
		mapSize = 3;
		sound[] = {"Ca\sounds\Weapons\cannon\Javelin1",31.622776,1,1200};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerOpticsModel = "\ca\weapons\2Dscope_Avenger";
				gunnerOpticsEffect[] = {"OpticsCHAbera1","OpticsBlur2"};
				minElev = -10;
				maxElev = 120;
				weapons[] = {"StingerLauncher_twice"};
				magazines[] = {"2Rnd_Stinger","2Rnd_Stinger","2Rnd_Stinger","2Rnd_Stinger","2Rnd_Stinger","2Rnd_Stinger","2Rnd_Stinger","2Rnd_Stinger","2Rnd_Stinger","2Rnd_Stinger"};
				gunnerAction = "Mi17_Cargo02";
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.155;
					minFov = 0.047;
					maxFov = 0.155;
				};
			};
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
				gunnerOpticsModel = "\ca\weapons\optika_TOW";
				gunnerOpticsEffect[] = {"OpticsCHAbera1","OpticsBlur2"};
				minElev = -10;
				weapons[] = {"TOWLauncherSingle"};
				magazines[] = {"6Rnd_TOW_HMMWV"};
				gunnerAction = "TOW_Gunner";
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
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.054;
					minFov = 0.054;
					maxFov = 0.054;
				};
			};
		};
	};
	class Igla_AA_pod_East: StaticAAWeapon
	{
		scope = 0;
		displayName = "$STR_DN_IGLA_AA_POD_EAST";
		model = "\ca\weapons\Static\igla_AA_pod";
		side = 0;
		faction = "RU";
		crew = "RU_Soldier";
		typicalCargo[] = {"RU_Soldier"};
		picture = "\ca\Weapons\data\ico\igla_aa_pod_CA.paa";
		icon = "\Ca\weapons\Data\map_ico\icomap_igla_aa_pod_CA.paa";
		mapSize = 2.8;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerOpticsModel = "\ca\weapons\optika_TOW";
				gunnerOpticsEffect[] = {"OpticsCHAbera1","OpticsBlur2"};
				minElev = -10;
				maxElev = 120;
				weapons[] = {"Igla_twice"};
				magazines[] = {"2Rnd_Igla","2Rnd_Igla","2Rnd_Igla","2Rnd_Igla","2Rnd_Igla","2Rnd_Igla","2Rnd_Igla","2Rnd_Igla","2Rnd_Igla","2Rnd_Igla"};
				gunnerAction = "Mi17_Cargo02";
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.155;
					minFov = 0.047;
					maxFov = 0.155;
				};
			};
		};
	};
};
//};

////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:06:53 2014 : Source 'file' date Fri Oct 31 06:06:53 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class weapons : KORD\config.bin{
class CfgPatches
{
	class CAWeapons_Kord
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {"CAData","CA_Anims_Char","CAWeapons","CACharacters"};
	};
};
class CfgVehicles
{
	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		class Turrets;
	};
	class StaticMGWeapon: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class KORD_Base: StaticMGWeapon
	{
		model = "\ca\Weapons\kord\kord";
		picture = "\ca\Weapons\data\ico\kord_CA.paa";
		icon = "\Ca\weapons\Data\map_ico\icomap_kord_CA.paa";
		mapSize = 3;
		begin1[] = {"Ca\sounds\Weapons\cannon\m2hb",0.56234133,1,1100};
		begin2[] = {"Ca\sounds\Weapons\cannon\m2hb",0.56234133,1,1100};
		soundBegin[] = {"begin1",0.5,"begin2",0.5};
		reloadMagazineSound[] = {"Ca\sounds\Weapons\cannon\m2gun_inout",0.031622775,1,25};
		displayName = "$STR_DN_KORD_LOW";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minElev = -20;
				weapons[] = {"KORD"};
				magazines[] = {"50Rnd_127x108_KORD","50Rnd_127x108_KORD","50Rnd_127x108_KORD","50Rnd_127x108_KORD"};
				gunnerAction = "LowKORD_Gunner";
				minTurn = -60;
				maxTurn = 60;
				initTurn = 0;
			};
		};
		class AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "KORD";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "KORD";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "KORD";
			};
		};
		soundGetOut[] = {"Ca\sounds\Weapons\cannon\m2gun_inout",0.001,1,25};
		soundGetIn[] = {"Ca\sounds\Weapons\cannon\m2gun_inout",0.00031622776,1,25};
		armorStructural = 10.0;
		class Library
		{
			libTextDesc = "$STR_LIB_KORD";
		};
	};
	class KORD: KORD_Base
	{
		scope = 0;
		crew = "RU_Soldier";
		faction = "RU";
		typicalCargo[] = {"RU_Soldier"};
		side = 0;
	};
	class KORD_high: KORD
	{
		displayName = "$STR_DN_KORD";
		model = "\ca\Weapons\kord\KORD_6u16sp";
		picture = "\ca\Weapons\data\ico\kord6u16sp_CA.paa";
		icon = "\Ca\weapons\Data\map_ico\icomap_kord6u16sp_CA.paa";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minElev = -7;
				gunnerAction = "KORD_Gunner";
				minTurn = -180;
				maxTurn = 180;
				initTurn = 0;
			};
		};
	};
	class DSHKM_RU: KORD
	{
		scope = 1;
	};
};
//};

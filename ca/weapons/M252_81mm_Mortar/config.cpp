////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:06:53 2014 : Source 'file' date Fri Oct 31 06:06:53 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class weapons : M252_81mm_Mortar\config.bin{
class CfgPatches
{
	class CAWeapons_M252_81mm_Mortar
	{
		units[] = {"M252"};
		weapons[] = {"M252"};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAWeapons"};
	};
};
class CfgWeapons
{
	class CannonCore;
	class M252: CannonCore
	{
		scope = 1;
		displayname = "$STR_DN_M252";
		nameSound = "CannonCore";
		cursor = "\ca\UI\data\cursor_w_tank_gs";
		cursorAim = "\ca\Weapons\Data\clear_empty";
		cursorSize = 1;
		sound[] = {"\Ca\sounds\Weapons\cannon\mortar1_fire",22.387213,1,500};
		reloadSound[] = {"\Ca\sounds\Weapons\cannon\mortar_load",1.1220185,1,12};
		soundServo[] = {"",0.0001,1.0};
		magazines[] = {};
		minRange = 100;
		minRangeProbab = 0.7;
		midRange = 2500;
		midRangeProbab = 0.7;
		maxRange = 5675;
		maxRangeProbab = 0.1;
		reloadTime = 3;
		magazineReloadTime = 5;
		maxLeadSpeed = 100;
		autoReload = 1;
		canLock = 0;
	};
};
class CfgVehicles
{
	class Land;
	class LandVehicle: Land
	{
		class NewTurret;
	};
	class StaticWeapon: LandVehicle
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class StaticMortar: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
	};
	class M252: StaticMortar
	{
		displayname = "$STR_DN_M252";
		model = "\ca\weapons\M252_81mm_Mortar\81mortar.p3d";
		transportSoldier = 1;
		cargoAction[] = {"D30_Cargo"};
		class Library
		{
			libTextDesc = "$STR_LIB_M252";
		};
		picture = "\Ca\weapons\data\ico\mortar_m251_CA.paa";
		icon = "\Ca\weapons\data\map_ico\icomap_mortar_m251_CA.paa";
		mapSize = 3;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
				gunnerAction = "D30_Cargo";
				weapons[] = {"M252"};
				magazines[] = {};
				initElev = 0;
				initTurn = 0;
				minElev = -15;
				maxElev = 35;
			};
		};
		class Eventhandlers
		{
			init = "_scr = _this execVM ""\ca\Data\ParticleEffects\SCRIPTS\init.sqf"";";
			fired = "_this call BIS_Effects_EH_Fired;";
		};
	};
};
//};

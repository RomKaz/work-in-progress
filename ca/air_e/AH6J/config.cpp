////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:07:35 2014 : Source 'file' date Fri Oct 31 06:07:35 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=8
enum {
	stabilizedinaxisx = 1,
	compartment1 = 1,
	stabilizedinaxisy = 2,
	compartment2 = 2,
	stabilizedinaxesboth = 3,
	compartment3 = 4,
	compartment4 = 8,
	stabilizedinaxesnone = 0
};

//Class air_e : AH6J\config.bin{
class CfgPatches
{
	class CAAir_E_AH6J
	{
		units[] = {"AH6J_EP1","MH6J_EP1","AH6X_EP1"};
		weapons[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {"CAAir_E"};
	};
};
class DefaultEventhandlers;
class CfgVehicles
{
	class Air;
	class Helicopter: Air
	{
		class Turrets
		{
			class MainTurret;
		};
		class HitPoints
		{
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
		};
		class AnimationSources;
	};
	class AH6_Base_EP1: Helicopter
	{
		expansion = 1;
		scope = 0;
		model = "\ca\Air_E\AH6J\ah6j";
		picture = "\ca\air_e\data\UI\Picture_ah6j_CA.paa";
		icon = "\ca\air_e\data\UI\Icon_ah6j_CA.paa";
		mapSize = 9;
		displayName = "$STR_EP1_DN_AH6_Base";
		destrType = "DestructWreck";
		accuracy = 0.5;
		occludeSoundsWhenIn = 0.56234133;
		obstructSoundsWhenIn = 0.31622776;
		driverAction = "AH6j_Pilot_EP1";
		cargoIsCoDriver[] = {0};
		cargoAction[] = {"AH6j_Cargo_EP1"};
		gunnerUsesPilotView = 1;
		castCargoShadow = 1;
		extCameraPosition[] = {0,2,-15};
		transportSoldier = 1;
		maxSpeed = 235;
		class ViewOptics
		{
			initAngleX = 0;
			minAngleX = -30;
			maxAngleX = 30;
			initAngleY = 0;
			minAngleY = -86;
			maxAngleY = 86;
			initFov = 0.1;
			minFov = 0.03;
			maxFov = 1.2;
		};
		armor = 25;
		damageResistance = 0.01039;
		cost = 10000000;
		soundGetIn[] = {"Ca\Sounds_E\Air_E\AH6\close",0.31622776,1};
		soundGetOut[] = {"Ca\Sounds_E\Air_E\AH6\open",0.31622776,1,40};
		soundDammage[] = {"ca\Sounds\Air\Noises\alarm_loop1",0.56234133,1};
		soundEngineOnInt[] = {"Ca\Sounds_E\Air_E\AH6\ah6_start_ext",0.056234132,1.0};
		soundEngineOnExt[] = {"Ca\Sounds_E\Air_E\AH6\ah6_start_ext",0.056234132,1.0,500};
		soundEngineOffInt[] = {"Ca\Sounds_E\Air_E\AH6\ah6_stop_ext",0.056234132,1.0};
		soundEngineOffExt[] = {"Ca\Sounds_E\Air_E\AH6\ah6_stop_ext",0.056234132,1.0,500};
		class Sounds
		{
			class Engine
			{
				sound[] = {"Ca\Sounds_E\Air_E\AH6\ah6_engine_ext_1",3.1622777,1.0,1000};
				frequency = "rotorSpeed";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorLowOut
			{
				sound[] = {"Ca\Sounds_E\Air_E\AH6\ah6_rotor_ext_1",3.1622777,1.0,1200};
				frequency = "rotorSpeed";
				volume = "camPos*(0 max (rotorSpeed-0.1))";
				cone[] = {1.8,3.14,2.0,0.9};
			};
			class RotorHighOut
			{
				sound[] = {"Ca\Sounds_E\Air_E\AH6\ah6_rotor_ext_high_1",1.7782794,1.0,1300};
				frequency = "rotorSpeed";
				volume = "camPos*10*(0 max (rotorThrust-0.95))";
				cone[] = {1.8,3.14,2.0,0.9};
			};
			class EngineIn
			{
				sound[] = {"Ca\Sounds_E\Air_E\AH6\ah6_engine_ext_1",1.2589254,1.0};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorLowIn
			{
				sound[] = {"Ca\Sounds_E\Air_E\AH6\ah6_rotor_ext_1",1.2589254,1.0};
				frequency = "rotorSpeed";
				volume = "2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
			};
			class RotorHighIn
			{
				sound[] = {"Ca\Sounds_E\Air_E\AH6\ah6_rotor_ext_high_1",1.9952624,1.0};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*3*(rotorThrust-0.9)";
			};
		};
		class Reflectors
		{
			class Light
			{
				color[] = {0.8,0.8,1.0,1.0};
				ambient[] = {0.07,0.07,0.07,1.0};
				position = "L svetlo";
				direction = "konec l svetla";
				hitpoint = "svetlo L";
				selection = "L svetlo";
				size = 1;
				brightness = 1.0;
			};
		};
		class Library
		{
			libTextDesc = "$STR_LIB_AH6";
		};
		class HitPoints: HitPoints
		{
			class HitGlass1: HitGlass1
			{
				armor = 0.5;
			};
			class HitGlass2: HitGlass2
			{
				armor = 0.5;
			};
			class HitGlass3: HitGlass3
			{
				armor = 0.5;
			};
			class HitGlass4: HitGlass4
			{
				armor = 0.5;
			};
			class HitGlass5: HitGlass5
			{
				armor = 0.5;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\Air_E\AH6J\Data\ah6_merge1.rvmat","ca\Air_E\AH6J\Data\ah6_merge1.rvmat","ca\Air_E\AH6J\Data\ah6_merge1_destruct.rvmat","ca\Air_E\AH6J\Data\ah6_merge2.rvmat","ca\Air_E\AH6J\Data\ah6_merge2.rvmat","ca\Air_E\AH6J\Data\ah6_merge2_destruct.rvmat","ca\data\data\default.rvmat","ca\data\data\default.rvmat","ca\Air_E\AH6J\Data\default_destruct.rvmat","ca\Air_E\AH6J\Data\mh6_skla.rvmat","ca\Air_E\AH6J\Data\mh6_skla_damage.rvmat","ca\Air_E\AH6J\Data\mh6_skla_damage.rvmat","ca\Air_E\AH6J\Data\mh6_skla_in.rvmat","ca\Air_E\AH6J\Data\mh6_skla_in_damage.rvmat","ca\Air_E\AH6J\Data\mh6_skla_in_damage.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"60Rnd_CMFlareMagazine"};
		LockDetectionSystem = 8;
		IncommingMisslieDetectionSystem = 0;
		irScanRangeMin = 500;
		irScanRangeMax = 1000;
		irScanToEyeFactor = 2;
	};
	class AH6J_EP1: AH6_Base_EP1
	{
		expansion = 1;
		scope = 2;
		side = 1;
		faction = "BIS_US";
		displayName = "$STR_EP1_DN_AH6J";
		crew = "US_Soldier_Pilot_EP1";
		typicalCargo[] = {"US_Soldier_Pilot_EP1"};
		weapons[] = {"FFARLauncher_14","TwinM134","CMFlareLauncher"};
		magazines[] = {"14Rnd_FFAR","4000Rnd_762x51_M134","60Rnd_CMFlareMagazine"};
		threat[] = {0.6,0.4,0.1};
		gunBeg[] = {"muzzle_1","muzzle_2"};
		gunEnd[] = {"chamber_1","chamber_2"};
		radarType = 4;
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 30;
			};
			class _xx_HandGrenade_West
			{
				magazine = "HandGrenade_West";
				count = 5;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 2;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
		};
		class TransportWeapons{};
		class Turrets{};
		class AnimationSources: AnimationSources
		{
			class Gatling_1
			{
				source = "revolving";
				weapon = "TwinM134";
			};
			class Gatling_2
			{
				source = "revolving";
				weapon = "TwinM134";
			};
		};
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_AH6J";
		};
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"ca\air_e\ah6j\data\ah6_merge1_co.paa","ca\air_e\ah6j\data\default_co.paa"};
	};
	class AH6X_EP1: AH6_Base_EP1
	{
		expansion = 1;
		isUav = 1;
		accuracy = 2;
		scope = 2;
		displayName = "$STR_EP1_DN_AH6X";
		model = "\ca\air_e\ah6j\ah6x";
		picture = "\ca\air_e\data\UI\Picture_ah6x_CA.paa";
		icon = "\ca\air_e\data\UI\Icon_ah6x_CA.paa";
		side = 1;
		faction = "BIS_US";
		memoryPointLRocket = "Rocket_1";
		memoryPointRRocket = "Rocket_2";
		selectionFireAnim = "muzzleflash";
		radarType = 4;
		camouflage = 4;
		audible = 6;
		sensitivity = 2;
		threat[] = {0,0,0};
		transportMaxBackpacks = 5;
		crew = "US_Soldier_Pilot_EP1";
		typicalCargo[] = {"US_Soldier_Pilot_EP1"};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 30;
			};
			class _xx_HandGrenade_West
			{
				magazine = "HandGrenade_West";
				count = 5;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 2;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
		};
		class TransportWeapons{};
		enableManualFire = 0;
		weapons[] = {};
		magazines[] = {};
		class Turrets: Turrets
		{
			class ObserverTurret: MainTurret
			{
				proxyIndex = 2;
				startEngine = 0;
				hasgunner = 1;
				body = "FLIR_turret";
				gun = "FLIR_gun";
				animationSourceBody = "FLIR_turret";
				animationSourceGun = "FLIR_gun";
				gunBeg = "FLIR_end";
				gunEnd = "FLIR_begin";
				memoryPointGun = "FLIR_end";
				class Viewoptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					minFov = "0.01";
					initFov = "0.50";
					maxFov = "0.80";
					visionMode[] = {"Normal","Ti"};
					thermalMode[] = {0,1};
				};
				gunnerOpticsModel = "\ca\weapons\2Dscope_UAV.p3d";
				gunnerForceOptics = 1;
				soundServo[] = {"",0.01,1.0};
				commanding = -1;
				gunnerAction = "AH6_Gunner";
				gunnerInAction = "AH6_Gunner";
				gunnerGetInAction = "";
				gunnerGetOutAction = "";
				minElev = -90;
				maxElev = 30;
				initElev = 0;
				minTurn = -180;
				maxTurn = 180;
				initTurn = 0;
				weapons[] = {};
				magazines[] = {};
			};
			class FakePilot: MainTurret
			{
				body = "";
				gun = "";
				animationSourceBody = "";
				animationSourceGun = "";
				gunnerName = "Pilot (fake)";
				commanding = -1;
				hasgunner = 1;
				gunnerAction = "AH6_Gunner";
				gunnerInAction = "AH6_Gunner";
				gunnerForceOptics = 1;
				memoryPointGunnerOptics = "fake_pilotview";
				gunnerOpticsModel = "\ca\weapons\optika_empty.p3d";
				class Viewoptics
				{
					initFov = 1;
					minFov = 0.3;
					maxFov = 1.2;
					initAngleX = 10;
					minAngleX = -65;
					maxAngleX = 85;
					initAngleY = 0;
					minAngleY = -150;
					maxAngleY = 150;
				};
				gunnerCompartments = "Compartment4";
			};
		};
		class EventHandlers: DefaultEventhandlers
		{
			init = "_scr = _this execVM ""\ca\Data\ParticleEffects\SCRIPTS\init.sqf"";(_this select 0) lockturret [[0],true];(_this select 0) lockturret [[1],true];";
		};
		class Reflectors{};
		class MarkerLights{};
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_AH6X";
		};
		irScanRangeMin = 500;
		irScanRangeMax = 2000;
		irScanToEyeFactor = 2;
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"ca\air_e\ah6j\data\ah6_merge1_co.paa"};
	};
	class MH6J_EP1: AH6_Base_EP1
	{
		expansion = 1;
		scope = 2;
		displayName = "$STR_EP1_DN_MH6J";
		model = "\ca\air_e\ah6j\mh6j";
		picture = "\ca\air_e\data\UI\Picture_mh6j_CA.paa";
		icon = "\ca\air_e\data\UI\Icon_mh6j_CA.paa";
		side = 1;
		faction = "BIS_US";
		transportSoldier = 5;
		crew = "US_Soldier_Pilot_EP1";
		typicalCargo[] = {"US_Soldier_Pilot_EP1","US_Soldier_EP1","US_Soldier_EP1","US_Soldier_GL_EP1","US_Soldier_LAT_EP1","US_Soldier_AR_EP1"};
		cargoAction[] = {"AH6j_Cargo_EP1","MH6_Cargo01","MH6_Cargo02","MH6_Cargo02","MH6_Cargo02","MH6_Cargo03"};
		ejectDeadCargo = 1;
		cargoIsCoDriver[] = {1,0};
		threat[] = {0,0,0};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 30;
			};
			class _xx_HandGrenade_West
			{
				magazine = "HandGrenade_West";
				count = 5;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 2;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
		};
		class TransportWeapons{};
		class Turrets{};
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_MH6J";
		};
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"ca\air_e\ah6j\data\ah6_merge1_co.paa","ca\air_e\ah6j\data\default_co.paa"};
	};
};
//};

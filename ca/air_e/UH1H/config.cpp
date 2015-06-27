////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:07:38 2014 : Source 'file' date Fri Oct 31 06:07:38 2014
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

//Class air_e : UH1H\config.bin{
class CfgPatches
{
	class CAAir_E_UH1H_EP1
	{
		units[] = {"UH1H_TK_EP1","UH1H_TK_GUE_EP1"};
		weapons[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {"CAAir_E"};
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
	class UH1H_base: Helicopter
	{
		expansion = 1;
		picture = "\ca\air_e\data\UI\Picture_uh1h_CA.paa";
		icon = "\ca\air_e\data\UI\Icon_uh1h_CA.paa";
		mapSize = 14;
		model = "Ca\air_E\UH1H\UH1H.p3d";
		displayName = "$STR_EP1_DN_UH1H_base";
		destrType = "DestructWreck";
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_UH1H";
		};
		cargoAction[] = {"UH1H_Cargo_EP1","UH1Y_Cargo03","UH1Y_Cargo03","UH1Y_Cargo02","UH1Y_Cargo01","UH1Y_Cargo01","UH1Y_Cargo01"};
		cargoIsCoDriver[] = {0,0};
		transportSoldier = 5;
		driverAction = "UH1H_Pilot_EP1";
		driverInAction = "UH1H_Pilot_EP1";
		driverOpticsModel = "";
		gunnerOpticsModel = "";
		threat[] = {0.4,0,0};
		mainRotorSpeed = 1.2;
		backRotorSpeed = 6.1;
		soundGetIn[] = {"Ca\Sounds_E\Air_E\UH1H\open_close",0.31622776,1};
		soundGetOut[] = {"Ca\Sounds_E\Air_E\UH1H\open_close",0.31622776,1,40};
		soundEngineOnInt[] = {"Ca\Sounds_E\Air_E\UH1H\UH1H_start_int",0.4466836,1.0};
		soundEngineOnExt[] = {"Ca\Sounds_E\Air_E\UH1H\UH1H_start_ext",0.4466836,1.0,700};
		soundEngineOffInt[] = {"Ca\Sounds_E\Air_E\UH1H\UH1H_stop_int",0.4466836,1.0};
		soundEngineOffExt[] = {"Ca\Sounds_E\Air_E\UH1H\UH1H_stop_ext",0.4466836,1.0,700};
		enableManualFire = 0;
		class Sounds
		{
			class Engine
			{
				sound[] = {"Ca\Sounds_E\Air_E\UH1H\UH1H_engine_ext_2",1.0,1.0,800};
				frequency = "rotorSpeed";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorLowOut
			{
				sound[] = {"Ca\Sounds_E\Air_E\UH1H\UH1H_rotor_ext_1",2.5118864,1.0,1400};
				frequency = "rotorSpeed";
				volume = "camPos*(0 max (rotorSpeed-0.1))";
				cone[] = {1.6,3.14,2.0,0.5};
			};
			class RotorHighOut
			{
				sound[] = {"Ca\Sounds_E\Air_E\UH1H\UH1H_rotor_high_ext_1",2.5118864,1.0,1600};
				frequency = "rotorSpeed";
				volume = "camPos*10*(0 max (rotorThrust-0.9))";
				cone[] = {1.6,3.14,2.0,0.5};
			};
			class EngineIn
			{
				sound[] = {"Ca\Sounds_E\Air_E\UH1H\UH1H_engine_int_1",1.0,1.0};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorLowIn
			{
				sound[] = {"Ca\Sounds_E\Air_E\UH1H\UH1H_rotor_int_1",1.7782794,1.0};
				frequency = "rotorSpeed";
				volume = "2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
			};
			class RotorHighIn
			{
				sound[] = {"Ca\Sounds_E\Air_E\UH1H\UH1H_rotor_high_int_1",3.1622777,1.0};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*3*(rotorThrust-0.9)";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				body = "mainTurret";
				gun = "mainGun";
				minElev = -60;
				maxElev = 30;
				initElev = -30;
				minTurn = -173;
				maxTurn = -3;
				initTurn = -70;
				soundServo[] = {"",0.01,1.0};
				stabilizedInAxes = "StabilizedInAxesNone";
				weapons[] = {"M240_veh"};
				magazines[] = {"100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240"};
				gunBeg = "muzzle";
				gunEnd = "chamber";
				gunnerName = "$STR_POSITION_DOORGUNNER";
				memoryPointsGetInGunner = "pos Gunner";
				memoryPointsGetInGunnerDir = "pos Gunner dir";
				gunnerOpticsModel = "\ca\weapons\optika_empty";
				memoryPointGunnerOptics = "gunnerview";
				gunnerOutOpticsShowCursor = 1;
				gunnerOpticsShowCursor = 0;
				gunnerAction = "UH1Y_Gunner";
				gunnerInAction = "UH1Y_Gunner";
				commanding = -3;
				primaryGunner = 0;
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
				gunnerCompartments = "Compartment2";
				LODTurnedOut = 1000;
				LODTurnedIn = 1000;
			};
			class LeftDoorGun: MainTurret
			{
				body = "Turret_2";
				gun = "Gun_2";
				animationSourceBody = "Turret_2";
				animationSourceGun = "Gun_2";
				weapons[] = {"M240_veh_2"};
				gunBeg = "muzzle_2";
				gunEnd = "chamber_2";
				memoryPointsGetInGunner = "pos Gunner";
				memoryPointsGetInGunnerDir = "pos Gunner dir";
				proxyIndex = 2;
				memoryPointGunnerOptics = "gunnerview_2";
				selectionFireAnim = "zasleh_1";
				gunnerName = "$STR_POSITION_CREWCHIEF";
				commanding = -2;
				minElev = -50;
				maxElev = 30;
				initElev = -30;
				minTurn = 3;
				maxTurn = 173;
				initTurn = 80;
				primaryGunner = 1;
			};
		};
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "M240_veh";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "M240_veh";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "M240_veh";
			};
			class ReloadAnim_2
			{
				source = "reload";
				weapon = "M240_veh_2";
			};
			class ReloadMagazine_2
			{
				source = "reloadmagazine";
				weapon = "M240_veh_2";
			};
			class Revolving_2
			{
				source = "revolving";
				weapon = "M240_veh_2";
			};
		};
		armor = 25;
		damageResistance = 0.00394;
		class HitPoints: HitPoints
		{
			class HitGlass1: HitGlass1
			{
				armor = 0.25;
			};
			class HitGlass2: HitGlass2
			{
				armor = 0.25;
			};
			class HitGlass3: HitGlass3
			{
				armor = 0.25;
			};
			class HitGlass4: HitGlass4
			{
				armor = 0.25;
			};
			class HitGlass5: HitGlass5
			{
				armor = 0.25;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\Air_E\UH1H\Data\UH1D.rvmat","ca\Air_E\UH1H\Data\UH1D.rvmat","ca\Air_E\UH1H\Data\UH1D_destruct.rvmat","ca\Air_E\UH1H\Data\UH1D_cockpit1.rvmat","ca\Air_E\UH1H\Data\UH1D_cockpit1.rvmat","ca\Air_E\UH1H\Data\UH1D_cockpit1_destruct.rvmat","ca\Air_E\UH1H\Data\UH1D_cockpit2.rvmat","ca\Air_E\UH1H\Data\UH1D_cockpit2.rvmat","ca\Air_E\UH1H\Data\UH1D_cockpit2_destruct.rvmat","ca\Air_E\UH1H\Data\UH1D_cockpit3.rvmat","ca\Air_E\UH1H\Data\UH1D_cockpit3.rvmat","ca\Air_E\UH1H\Data\UH1D_cockpit3_destruct.rvmat","ca\Air_E\UH1H\Data\UH1D_glass.rvmat","ca\Air_E\UH1H\Data\UH1D_glass_damage.rvmat","ca\Air_E\UH1H\Data\UH1D_glass_damage.rvmat","ca\Air_E\UH1H\Data\UH1D_in.rvmat","ca\Air_E\UH1H\Data\UH1D_in.rvmat","ca\Air_E\UH1H\Data\UH1D_in_destruct.rvmat","ca\Air_E\UH1H\Data\UH1D_instruments.rvmat","ca\Air_E\UH1H\Data\UH1D_instruments.rvmat","ca\Air_E\UH1H\Data\UH1D_instruments_destruct.rvmat","ca\Air_E\UH1H\Data\UH1D_rotor.rvmat","ca\Air_E\UH1H\Data\UH1D_rotor.rvmat","ca\Air_E\UH1H\Data\UH1D_rotor_destruct.rvmat","ca\data\data\default.rvmat","ca\data\data\default.rvmat","ca\Air_E\UH1H\Data\default_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
		hiddenSelections[] = {"Camo1","Camo2","Camo_mlod"};
		irScanRangeMin = 100;
		irScanRangeMax = 1000;
		irScanToEyeFactor = 2;
	};
	class UH1H_TK_EP1: UH1H_base
	{
		scope = 2;
		side = 0;
		faction = "BIS_TK";
		crew = "TK_Soldier_Pilot_EP1";
		typicalCargo[] = {"TK_Soldier_Pilot_EP1"};
		class TransportMagazines
		{
			class _xx_20Rnd_762x51_FNFAL
			{
				magazine = "20Rnd_762x51_FNFAL";
				count = 30;
			};
			class _xx_HandGrenade_East
			{
				magazine = "HandGrenade_East";
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
		hiddenSelectionsTextures[] = {"ca\air_E\UH1H\data\UH1D_TKA_CO.paa","ca\air_E\UH1H\data\UH1D_in_TKA_CO.paa","ca\air_E\UH1H\data\default_TKA_co.paa"};
	};
	class UH1H_TK_GUE_EP1: UH1H_base
	{
		scope = 2;
		side = 2;
		faction = "BIS_TK_GUE";
		crew = "TK_GUE_Soldier_EP1";
		typicalCargo[] = {"TK_GUE_Soldier_EP1"};
		hiddenSelections[] = {};
		class TransportMagazines
		{
			class _xx_30Rnd_762x39_AK47
			{
				magazine = "30Rnd_762x39_AK47";
				count = 15;
			};
			class _xx_30Rnd_545x39_AK
			{
				magazine = "30Rnd_545x39_AK";
				count = 15;
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
	};
};
//};

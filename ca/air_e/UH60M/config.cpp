////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:07:40 2014 : Source 'file' date Fri Oct 31 06:07:40 2014
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

//Class air_e : UH60M\config.bin{
class CfgPatches
{
	class CAAir_E_UH60M
	{
		units[] = {"UH60M_EP1","UH60M_MEV_EP1"};
		weapons[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {"CaAir_E"};
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
	class UH60_Base: Helicopter
	{
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"60Rnd_CMFlareMagazine"};
		lockDetectionSystem = "8 + 4";
		incommingMisslieDetectionSystem = 0;
	};
	class MH60S: UH60_Base
	{
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"60Rnd_CMFlareMagazine"};
	};
	class UH60M_base_EP1: UH60_Base
	{
		expansion = 1;
		scope = 0;
		model = "\Ca\Air_E\UH60M\UH60M.p3d";
		displayName = "$STR_EP1_DN_UH60_base";
		destrType = "DestructWreck";
		picture = "\ca\air_e\data\UI\Picture_uh60m_CA.paa";
		icon = "\ca\air_e\data\UI\Icon_uh60m_CA.paa";
		mapSize = 17;
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_UH60M";
		};
		crew = "US_Soldier_Pilot_EP1";
		typicalCargo[] = {"US_Soldier_Pilot_EP1","US_Soldier_Pilot_EP1"};
		gunnerAction = "ManActTestDriver";
		transportMaxBackpacks = 10;
		transportSoldier = 13;
		fuelCapacity = 600;
		maxSpeed = 295;
		mainRotorSpeed = 1.2;
		backRotorSpeed = 6.1;
		memoryPointsGetInGunner = "pos gunner";
		memoryPointsGetInGunnerDir = "pos gunner dir";
		memoryPointsGetInCargo[] = {"pos codriver","pos cargo"};
		memoryPointsGetInCargoDir[] = {"pos codriver dir","pos cargo dir"};
		cargoIsCoDriver[] = {0,0};
		threat[] = {0.8,0.1,0.3};
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
		radarType = 4;
		soundGetIn[] = {"Ca\Sounds_E\Air_E\UH1H\open_close",0.31622776,1};
		soundGetOut[] = {"Ca\Sounds_E\Air_E\UH1H\open_close",0.31622776,1,40};
		soundEngineOnInt[] = {"Ca\Sounds_E\Air_E\UH1H\UH1H_start_int",0.4466836,1.0};
		soundEngineOnExt[] = {"Ca\Sounds_E\Air_E\UH1H\UH1H_start_ext",0.4466836,1.0,700};
		soundEngineOffInt[] = {"Ca\Sounds_E\Air_E\UH1H\UH1H_stop_int",0.4466836,1.0};
		soundEngineOffExt[] = {"Ca\Sounds_E\Air_E\UH1H\UH1H_stop_ext",0.4466836,1.0,700};
		class Sounds
		{
			class Engine
			{
				sound[] = {"Ca\Sounds_E\Air_E\UH1H\UH1H_engine_ext_2",1.0,0.8,800};
				frequency = "rotorSpeed";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorLowOut
			{
				sound[] = {"Ca\Sounds_E\Air_E\UH1H\UH1H_rotor_ext_1",2.5118864,1.1,1400};
				frequency = "rotorSpeed";
				volume = "camPos*(0 max (rotorSpeed-0.1))";
				cone[] = {1.6,3.14,2.0,0.5};
			};
			class RotorHighOut
			{
				sound[] = {"Ca\Sounds_E\Air_E\UH1H\UH1H_rotor_high_ext_1",2.5118864,1.1,1600};
				frequency = "rotorSpeed";
				volume = "camPos*10*(0 max (rotorThrust-0.9))";
				cone[] = {1.6,3.14,2.0,0.5};
			};
			class EngineIn
			{
				sound[] = {"Ca\Sounds_E\Air_E\UH1H\UH1H_engine_int_1",1.0,0.8};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorLowIn
			{
				sound[] = {"Ca\Sounds_E\Air_E\UH1H\UH1H_rotor_int_1",1.7782794,1.1};
				frequency = "rotorSpeed";
				volume = "2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
			};
			class RotorHighIn
			{
				sound[] = {"Ca\Sounds_E\Air_E\UH1H\UH1H_rotor_high_int_1",3.1622777,1.1};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*3*(rotorThrust-0.9)";
			};
		};
		driverInAction = "UH60M_Pilot_EP1";
		driverAction = "UH60M_Pilot_EP1";
		cargoAction[] = {"UH60_Cargo02","UH60_Cargo02","UH60_Cargo02","UH60_Cargo02","UH60_Cargo02","UH60_Cargo02","UH60_Cargo02","UH60_Cargo02","UH60_Cargo02","UH60_Cargo02","UH60_Cargo02","UH60_Cargo02","UH60_Cargo02"};
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
		class AnimationSources: AnimationSources{};
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\Air_E\UH60M\Data\uh60m_dust_filter.rvmat","ca\Air_E\UH60M\Data\uh60m_dust_filter.rvmat","ca\Air_E\UH60M\Data\uh60m_dust_filter_destruct.rvmat","ca\Air_E\UH60M\Data\uh60m_engine.rvmat","ca\Air_E\UH60M\Data\uh60m_engine.rvmat","ca\Air_E\UH60M\Data\uh60m_engine_destruct.rvmat","ca\Air_E\UH60M\Data\uh60m_fuselage.rvmat","ca\Air_E\UH60M\Data\uh60m_fuselage.rvmat","ca\Air_E\UH60M\Data\uh60m_fuselage_destruct.rvmat","ca\Air_E\UH60M\Data\uh60m_interior.rvmat","ca\Air_E\UH60M\Data\uh60m_interior.rvmat","ca\Air_E\UH60M\Data\uh60m_interior_destruct.rvmat","ca\Air_E\UH60M\Data\uh60m_navijak.rvmat","ca\Air_E\UH60M\Data\uh60m_navijak.rvmat","ca\Air_E\UH60M\Data\uh60m_navijak_destruct.rvmat","ca\Air_E\UH60M\Data\uh60m_glass.rvmat","ca\Air_E\UH60M\Data\uh60m_glass_damage.rvmat","ca\Air_E\UH60M\Data\uh60m_glass_damage.rvmat","ca\data\data\default.rvmat","ca\data\data\default.rvmat","ca\Air_E\UH60M\Data\default_destruct.rvmat","ca\Air_E\UH60M\Data\uh60m_engine_MEV.rvmat","ca\Air_E\UH60M\Data\uh60m_engine_MEV.rvmat","ca\Air_E\UH60M\Data\uh60m_engine_MEV_destruct.rvmat","ca\Air_E\UH60M\Data\uh60m_fuselage_MEV.rvmat","ca\Air_E\UH60M\Data\uh60m_fuselage_MEV.rvmat","ca\Air_E\UH60M\Data\uh60m_fuselage_MEV_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"60Rnd_CMFlareMagazine"};
		lockDetectionSystem = "8 + 4";
		incommingMisslieDetectionSystem = 0;
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"ca\air_e\uh60m\data\uh60m_fuselage_co.paa","ca\air_e\uh60m\data\uh60m_engine_co.paa","ca\air_e\uh60m\data\default_co.paa"};
	};
	class UH60M_US_base_EP1: UH60M_base_EP1
	{
		side = 1;
		faction = "BIS_US";
	};
	class UH60M_EP1: UH60M_US_base_EP1
	{
		scope = 2;
		accuracy = 1.5;
		displayName = "$STR_EP1_DN_UH60M";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				body = "mainTurret";
				gun = "mainGun";
				minElev = -60;
				maxElev = 30;
				initElev = 0;
				minTurn = -7;
				maxTurn = 183;
				initTurn = 0;
				soundServo[] = {"",0.01,1.0};
				animationSourceHatch = "";
				stabilizedInAxes = "StabilizedInAxesNone";
				gunBeg = "muzzle_1";
				gunEnd = "chamber_1";
				weapons[] = {"M134"};
				magazines[] = {"2000Rnd_762x51_M134"};
				gunnerName = "$STR_POSITION_CREWCHIEF";
				gunnerOpticsModel = "\ca\weapons\optika_empty";
				gunnerOutOpticsShowCursor = 1;
				gunnerOpticsShowCursor = 1;
				gunnerAction = "UH60M_Gunner_EP1";
				gunnerInAction = "UH60M_Gunner_EP1";
				commanding = -2;
				primaryGunner = 1;
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
			};
			class RightDoorGun: MainTurret
			{
				body = "Turret_2";
				gun = "Gun_2";
				animationSourceBody = "Turret_2";
				animationSourceGun = "Gun_2";
				weapons[] = {"M134_2"};
				magazines[] = {"2000Rnd_762x51_M134"};
				stabilizedInAxes = "StabilizedInAxesNone";
				selectionFireAnim = "zasleh_1";
				proxyIndex = 2;
				gunnerName = "$STR_POSITION_DOORGUNNER";
				commanding = -3;
				minElev = -60;
				maxElev = 30;
				initElev = 0;
				minTurn = -183;
				maxTurn = 7;
				initTurn = 0;
				gunBeg = "muzzle_2";
				gunEnd = "chamber_2";
				primaryGunner = 0;
				memoryPointGun = "machinegun_1";
				memoryPointGunnerOptics = "gunnerview_2";
			};
		};
		class AnimationSources: AnimationSources
		{
			class Gatling_1
			{
				source = "revolving";
				weapon = "M134";
			};
			class Gatling_2
			{
				source = "revolving";
				weapon = "M134_2";
			};
		};
	};
	class UH60M_MEV_EP1: UH60M_US_base_EP1
	{
		scope = 2;
		accuracy = 1.5;
		model = "\Ca\Air_E\UH60M\UH60M_MEV.p3d";
		displayName = "$STR_EP1_DN_UH60M_MEV";
		attendant = 1;
		memoryPointSupply = "pos Codriver dir";
		transportSoldier = 7;
		vehicleClass = "Support";
		threat[] = {0,0,0};
		class Turrets{};
		cargoAction[] = {"UH60_Cargo02","UH60_Cargo02","UH60_Cargo02","UH60_Cargo02","UH60M_Gunner_EP1","UH60M_Gunner_EP1","UH60M_Pilot_EP1"};
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"ca\air_e\uh60m\data\uh60m_fuselage_mev_co.paa","ca\air_e\uh60m\data\uh60m_engine_mev_co.paa","ca\air_e\uh60m\data\default_co.paa"};
	};
};
//};

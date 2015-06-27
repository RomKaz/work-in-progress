////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:00:45 2014 : Source 'file' date Fri Oct 31 06:00:45 2014
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

//Class AIR_PMC : ka137\config.bin{
class CfgPatches
{
	class CAAir_PMC_KA137
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.54;
		requiredAddons[] = {"CAAir_PMC"};
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
		class AnimationSources;
	};
	class Ka137_Base_PMC: Helicopter
	{
		expansion = 4;
		displayName = "$STR_PMC_DN_KA137";
		destrType = "DestructWreck";
		icon = "\Ca\Air_PMC\data\ui\Icon_ka137_PMC_ca.paa";
		picture = "\Ca\Air_PMC\data\ui\picture_ka137_PMC_ca.paa";
		crew = "Soldier_PMC";
		mainRotorSpeed = 1.0;
		backRotorSpeed = -1.0;
		soundGetIn[] = {"",0.31622776,1};
		soundGetOut[] = {"",0.31622776,1,40};
		soundDammage[] = {"",0.56234133,1};
		soundEngineOnInt[] = {"Ca\Sounds_PMC\Air_PMC\Ka_157_start_int",0.1,1.0};
		soundEngineOnExt[] = {"Ca\Sounds_PMC\Air_PMC\Ka_157_start",0.56234133,1.0,800};
		soundEngineOffInt[] = {"Ca\Sounds_PMC\Air_PMC\Ka_157_stop_int",0.1,1.0};
		soundEngineOffExt[] = {"Ca\Sounds_PMC\Air_PMC\Ka_157_stop",0.56234133,1.0,800};
		class Sounds
		{
			class Engine
			{
				sound[] = {"Ca\Sounds_PMC\Air_PMC\Ka_157_engi",3.1622777,1.4,600};
				frequency = "rotorSpeed";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorLowOut
			{
				sound[] = {"Ca\Sounds_PMC\Air_PMC\Ka_157_rotor",3.1622777,1.0,700};
				frequency = "rotorSpeed";
				volume = "camPos*(0 max (rotorSpeed-0.1))";
				cone[] = {1.8,3.14,2.0,0.9};
			};
			class RotorHighOut
			{
				sound[] = {"Ca\Sounds_PMC\Air_PMC\Ka_157_rotor_swist",5.623413,1.0,800};
				frequency = "rotorSpeed";
				volume = "camPos*10*(0 max (rotorThrust-0.95))";
				cone[] = {1.1,3.14,2.0,0.9};
			};
			class EngineIn
			{
				sound[] = {"Ca\Sounds_PMC\Air_PMC\Ka_157_engi_int",3.1622777,1.0};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorLowIn
			{
				sound[] = {"Ca\Sounds_PMC\Air_PMC\Ka_157_rotor",0.56234133,1.0};
				frequency = "rotorSpeed";
				volume = "2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
			};
			class RotorHighIn
			{
				sound[] = {"Ca\Sounds_PMC\Air_PMC\Ka_157_rotor_swist_int",0.31622776,1.0};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*3*(rotorThrust-0.9)";
			};
		};
		accuracy = 0.5;
		class Reflectors{};
		class AnimationSources: AnimationSources
		{
			class HideTurret
			{
				source = "user";
				animPeriod = 1e-007;
				initPhase = 1;
			};
		};
		model = "\Ca\Air_PMC\Ka137\Ka137.p3d";
		maxSpeed = 290;
		armor = 1;
		isUav = 1;
		camouflage = 4;
		audible = 6;
		sensitivity = 2;
		threat[] = {0.6,0,0.1};
		enableManualFire = 0;
		irScanRangeMin = 100;
		irScanRangeMax = 1000;
		irScanToEyeFactor = 2;
		driverForceOptics = 1;
		radarType = 4;
		driverAction = "ManActTestDriver";
		class Library
		{
			libTextDesc = "$STR_PMC_LIB_KA137";
		};
	};
	class Ka137_PMC: Ka137_Base_PMC
	{
		scope = 2;
		accuracy = 2;
		side = 2;
		faction = "PMC_BAF";
		class Turrets{};
		class AnimationSources: AnimationSources
		{
			class MainTurret
			{
				source = "user";
				animPeriod = 1e-007;
				initPhase = 0;
			};
			class MainGun
			{
				source = "user";
				animPeriod = 1e-007;
				initPhase = 0;
			};
		};
	};
	class Ka137_MG_PMC: Ka137_Base_PMC
	{
		scope = 2;
		accuracy = 2;
		side = 2;
		faction = "PMC_BAF";
		enableManualFire = 0;
		icon = "\Ca\Air_PMC\data\ui\Icon_ka137pk_PMC_ca.paa";
		picture = "\Ca\Air_PMC\data\ui\picture_ka137_PKMG_PMC_ca.paa";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minElev = -80;
				maxElev = 15;
				initElev = 0;
				minTurn = -180;
				maxTurn = 180;
				initTurn = 0;
				weapons[] = {"PKT_high_AI_dispersion"};
				magazines[] = {"200Rnd_762x54_PKT","200Rnd_762x54_PKT"};
				turretInfoType = "RscWeaponRangeZeroing";
				discreteDistance[] = {300,400,500,600,700,800};
				discreteDistanceInitIndex = 0;
				enableManualFire = 1;
				gunnerOpticsModel = "\ca\air\optika_AH1Z";
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.5;
					minFov = 0.1;
					maxFov = 0.5;
					visionMode[] = {"Normal","Ti"};
					thermalMode[] = {0,1};
				};
				gunnerForceOptics = 1;
			};
		};
		displayName = "$STR_PMC_DN_KA137_MG";
		class AnimationSources: AnimationSources
		{
			class HideTurret: HideTurret
			{
				initPhase = 0;
			};
		};
		class Library
		{
			libTextDesc = "$STR_PMC_LIB_KA137_MG";
		};
	};
};
//};

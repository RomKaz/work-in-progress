////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:06:27 2014 : Source 'file' date Fri Oct 31 06:06:27 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=12
enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	stabilizedinaxisx = 1,
	stabilizedinaxisy = 2,
	destructno = 0,
	stabilizedinaxesboth = 3,
	stabilizedinaxesnone = 0,
	destructman = 5,
	destructbuilding = 1
};

//Class tracked_acr : t72m4cz\config.bin{
class CfgPatches
{
	class CATracked_ACR_T72M4CZ
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.5;
		requiredAddons[] = {"CAWheeled_ACR","CATracked_ACR"};
	};
};
class CfgVehicles
{
	class Land;
	class LandVehicle: Land
	{
		class NewTurret;
	};
	class Tank: LandVehicle
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
	};
	class T72_Base: Tank
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						class ViewOptics;
					};
				};
			};
		};
		class AnimationSources;
	};
	class T72_ACR: T72_Base
	{
		expansion = 3;
		scope = 2;
		vehicleClass = "ArmouredW";
		model = "\Ca\Tracked_ACR\T72M4CZ\T72_ACR.p3d";
		displayName = "$STR_ACR_DN_T72CZ";
		class Library
		{
			libTextDesc = "$STR_ACR_LIB_T72CZ";
		};
		side = 1;
		faction = "BIS_CZ";
		crew = "CZ_Soldier_Crew_Wdl_ACR";
		typicalCargo[] = {"CZ_Soldier_Crew_Wdl_ACR"};
		LockDetectionSystem = 4;
		IncommingMisslieDetectionSystem = 16;
		hiddenSelectionsTextures[] = {"\ca\Tracked_ACR\T72M4CZ\Data\T72_1_co.paa","\ca\Tracked_ACR\T72M4CZ\Data\T72_2_co.paa","\ca\Tracked_ACR\T72M4CZ\Data\T72_3_co.paa"};
		armor = 745;
		damageResistance = 0.005;
		maxSpeed = 70;
		cost = 1200000;
		insideSoundCoef = 0.9;
		soundGear[] = {"",5.6234134e-005,1};
		soundGetIn[] = {"ca\Sounds_ACR\tracked\T72_inside_door1",0.56234133,1};
		soundGetOut[] = {"ca\Sounds_ACR\tracked\T72_inside_door1",0.56234133,1,60};
		soundEngineOnInt[] = {"ca\Sounds_ACR\tracked\T72_inside_start1",1.0,1.0};
		soundEngineOnExt[] = {"ca\Sounds_ACR\tracked\T72_outside-m_start1",2.5118864,1.0,500};
		soundEngineOffInt[] = {"ca\Sounds_ACR\tracked\T72_inside_stop1",1.0,1.0};
		soundEngineOffExt[] = {"ca\Sounds_ACR\tracked\T72_outside-m_stop1",1.0,1.0,500};
		buildCrash0[] = {"Ca\sounds\Vehicles\Crash\tank_building_01",0.70794576,1,150};
		buildCrash1[] = {"Ca\sounds\Vehicles\Crash\tank_building_02",0.70794576,1,150};
		buildCrash2[] = {"Ca\sounds\Vehicles\Crash\tank_building_03",0.70794576,1,150};
		buildCrash3[] = {"Ca\sounds\Vehicles\Crash\tank_building_04",0.70794576,1,150};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"Ca\sounds\Vehicles\Crash\tank_wood_01",0.70794576,1,150};
		WoodCrash1[] = {"Ca\sounds\Vehicles\Crash\tank_wood_02",0.70794576,1,150};
		WoodCrash2[] = {"Ca\sounds\Vehicles\Crash\tank_wood_03",0.70794576,1,150};
		WoodCrash3[] = {"Ca\sounds\Vehicles\Crash\tank_wood_04",0.70794576,1,150};
		soundWoodCrash[] = {"woodCrash0",0.25,"woodCrash1",0.25,"woodCrash2",0.25,"woodCrash3",0.25};
		ArmorCrash0[] = {"Ca\sounds\Vehicles\Crash\tank_vehicle_01",0.70794576,1,150};
		ArmorCrash1[] = {"Ca\sounds\Vehicles\Crash\tank_vehicle_02",0.70794576,1,150};
		ArmorCrash2[] = {"Ca\sounds\Vehicles\Crash\tank_vehicle_03",0.70794576,1,150};
		ArmorCrash3[] = {"Ca\sounds\Vehicles\Crash\tank_vehicle_04",0.70794576,1,150};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		class SoundEvents
		{
			class AccelerationIn
			{
				sound[] = {"ca\Sounds_ACR\tracked\T72_inside_acceleration1",1.7782794,1.0};
				limit = "0.15";
				expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
			class AccelerationOut
			{
				sound[] = {"ca\Sounds_ACR\tracked\T72_outside-d_acceleration1",1.7782794,1.0,650};
				limit = "0.15";
				expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
		};
		class Sounds
		{
			class Engine
			{
				sound[] = {"ca\Sounds_ACR\tracked\T72_outside-m_high1",1.7782794,1.0,1000};
				frequency = "(randomizer*0.05+0.8)*rpm";
				volume = "engineOn*camPos*(rpm factor[0.4, 0.9])";
			};
			class IdleOut
			{
				sound[] = {"ca\Sounds_ACR\tracked\T72_outside-m_idle1",0.56234133,1.0,300};
				frequency = "1";
				volume = "engineOn*camPos*(rpm factor[0.6, 0.15])";
			};
			class NoiseOut
			{
				sound[] = {"ca\Sounds_ACR\tracked\noise-outside",1.0,1.0,150};
				frequency = "1";
				volume = "camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsOutH0
			{
				sound[] = {"ca\Sounds_ACR\tracked\ext_treads_hard_01",1.0,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsOutH1
			{
				sound[] = {"ca\Sounds_ACR\tracked\ext_treads_hard_02",1.0,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsOutH2
			{
				sound[] = {"ca\Sounds_ACR\tracked\ext_treads_hard_03",1.0,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsOutH3
			{
				sound[] = {"ca\Sounds_ACR\tracked\ext_treads_hard_04",1.0,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsOutH4
			{
				sound[] = {"ca\Sounds_ACR\tracked\ext_treads_hard_05",1.0,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
			class ThreadsOutS0
			{
				sound[] = {"ca\Sounds_ACR\tracked\ext_treads_soft_01",1.0,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsOutS1
			{
				sound[] = {"ca\Sounds_ACR\tracked\ext_treads_soft_02",1.0,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsOutS2
			{
				sound[] = {"ca\Sounds_ACR\tracked\ext_treads_soft_03",1.0,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsOutS3
			{
				sound[] = {"ca\Sounds_ACR\tracked\ext_treads_soft_04",1.0,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsOutS4
			{
				sound[] = {"ca\Sounds_ACR\tracked\ext_treads_soft_05",1.0,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
			class Movement
			{
				sound[] = {"",1.0,1.0};
				frequency = "0";
				volume = "0";
			};
			class EngineIn
			{
				sound[] = {"ca\Sounds_ACR\tracked\T72_inside_high1",1.0,1.0};
				frequency = "(randomizer*0.05+0.8)*rpm";
				volume = "engineOn*(1-camPos)*(rpm factor[0.4, 1])";
			};
			class IdleIn
			{
				sound[] = {"ca\Sounds_ACR\tracked\T72_inside_idle1",1.7782794,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(rpm factor[0.6, 0.15])";
			};
			class NoiseIn
			{
				sound[] = {"ca\Sounds_ACR\tracked\noise-inside",0.15848932,1.0};
				frequency = "1";
				volume = "(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsInH0
			{
				sound[] = {"ca\Sounds_ACR\tracked\int_treads_hard_01",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsInH1
			{
				sound[] = {"ca\Sounds_ACR\tracked\int_treads_hard_02",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsInH2
			{
				sound[] = {"ca\Sounds_ACR\tracked\int_treads_hard_03",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsInH3
			{
				sound[] = {"ca\Sounds_ACR\tracked\int_treads_hard_04",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsInH4
			{
				sound[] = {"ca\Sounds_ACR\tracked\int_treads_hard_05",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
			class ThreadsInS0
			{
				sound[] = {"ca\Sounds_ACR\tracked\int_treads_soft_01",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsInS1
			{
				sound[] = {"ca\Sounds_ACR\tracked\int_treads_soft_02",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsInS2
			{
				sound[] = {"ca\Sounds_ACR\tracked\int_treads_soft_03",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsInS3
			{
				sound[] = {"ca\Sounds_ACR\tracked\int_treads_soft_04",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsInS4
			{
				sound[] = {"ca\Sounds_ACR\tracked\int_treads_soft_05",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\Tracked_ACR\T72M4CZ\Data\t72_track.rvmat","Ca\Tracked_ACR\T72M4CZ\Data\t72_track_damage.rvmat","Ca\Tracked_ACR\T72M4CZ\Data\t72_track_destruct.rvmat","Ca\Tracked_ACR\T72M4CZ\Data\t72_1.rvmat","Ca\Tracked_ACR\T72M4CZ\Data\t72_1_damage.rvmat","Ca\Tracked_ACR\T72M4CZ\Data\t72_1_destruct.rvmat","Ca\Tracked_ACR\T72M4CZ\Data\t72_2.rvmat","Ca\Tracked_ACR\T72M4CZ\Data\t72_2_damage.rvmat","Ca\Tracked_ACR\T72M4CZ\Data\t72_2_destruct.rvmat","Ca\Tracked_ACR\T72M4CZ\Data\t72_3.rvmat","Ca\Tracked_ACR\T72M4CZ\Data\t72_3_damage.rvmat","Ca\Tracked_ACR\T72M4CZ\Data\t72_3_destruct.rvmat","ca\weapons_e\dshkm\data\dshk.rvmat","Ca\weapons\Data\dshk_damage.rvmat","Ca\weapons\Data\dshk_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"D81CZ","PKT"};
				magazines[] = {"22Rnd_125mmSABOT_IMI","15Rnd_125mmHE_T72CZ","2000Rnd_762x54_PKT"};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						discreteDistance[] = {100,200,300,400,500,600,700,800};
						discreteDistanceInitIndex = 2;
						stabilizedInAxes = "StabilizedInAxesBoth";
						maxHorizontalRotSpeed = 2.0;
						maxVerticalRotSpeed = 2.0;
						gunnerOpticsModel = "\ca\Weapons\2Dscope_RWS";
						gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
						class ViewOptics: ViewOptics
						{
							visionMode[] = {"Normal","NVG","Ti"};
							thermalMode[] = {0,1};
						};
						weapons[] = {"KORD","SmokeLauncher"};
						magazines[] = {"150Rnd_127x108_KORD","150Rnd_127x108_KORD","150Rnd_127x108_KORD","150Rnd_127x108_KORD","SmokeLauncherMag","SmokeLauncherMag"};
					};
				};
			};
		};
		class AnimationSources: AnimationSources
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
		class TransportWeapons
		{
			class _xx_Sa58V_EP1
			{
				weapon = "Sa58V_EP1";
				count = "2*1";
			};
			class _xx_Sa58V_CCO_EP1
			{
				weapon = "Sa58V_CCO_EP1";
				count = 1;
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
				count = "30*1";
			};
			class _xx_100Rnd_762x54_PK
			{
				magazine = "100Rnd_762x54_PK";
				count = "5*1";
			};
			class _xx_HandGrenade_West
			{
				magazine = "HandGrenade_West";
				count = "6*1";
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = "6*1";
			};
			class _xx_SmokeShellRed
			{
				magazine = "SmokeShellRed";
				count = "2*1";
			};
		};
		class NVGMarkers
		{
			class NVGMarker01
			{
				name = "nvg_marker";
				color[] = {0.03,0.003,0.003,1};
				ambient[] = {0.003,0.0003,0.0003,1};
				brightness = 0.001;
				blinking = 1;
			};
		};
	};
};
//};

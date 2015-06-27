////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:13:12 2014 : Source 'file' date Fri Oct 31 06:13:12 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=4
enum {
	stabilizedinaxisx = 1,
	stabilizedinaxisy = 2,
	stabilizedinaxesboth = 3,
	stabilizedinaxesnone = 0
};

//Class tracked_e : M113\config.bin{
class CfgPatches
{
	class CATracked_E_M113
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {"CATracked_E"};
	};
};
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class CfgVehicles
{
	class LandVehicle;
	class Tank: LandVehicle
	{
		class Turrets
		{
			class MainTurret;
		};
		class AnimationSources;
	};
	class M113_Base: Tank
	{
		brakeDistance = 9.0;
		htMin = 60;
		htMax = 1800;
		afMax = 200;
		mfMax = 100;
		mFact = 1;
		tBody = 250;
		driverForceOptics = 0;
		LODTurnedOut = 1200;
		radarType = 4;
		crewVulnerable = 0;
		viewDriverInExternal = 1;
		tracksSpeed = 3;
		scope = 0;
		picture = "\ca\tracked_e\Data\ui\Picture_m113_CA.paa";
		Icon = "\Ca\tracked_e\Data\ui\Icon_m113_CA.paa";
		mapSize = 5;
		displayName = "$STR_DN_M113";
		accuracy = 0.3;
		armor = 105;
		damageResistance = 0.03249;
		cost = 100000;
		maxSpeed = 66;
		hasGunner = 1;
		hasCommander = 0;
		viewCargoShadow = 1;
		viewCargoShadowDiff = 0.05;
		viewCargoShadowAmb = 0.5;
		transportSoldier = 11;
		irScanRangeMin = 0;
		irScanRangeMax = 0;
		supplyRadius = 1.8;
		class TransportMagazines
		{
			class _xx_30Rnd_545x39_AK
			{
				magazine = "30Rnd_545x39_AK";
				count = "30*1";
			};
			class _xx_100Rnd_762x54_PK
			{
				magazine = "100Rnd_762x54_PK";
				count = "5*1";
			};
			class _xx_8Rnd_9x18_Makarov
			{
				magazine = "8Rnd_9x18_Makarov";
				count = "20*1";
			};
			class _xx_HandGrenade_east
			{
				magazine = "HandGrenade_east";
				count = "10*1";
			};
			class _xx_10Rnd_762x54_SVD
			{
				magazine = "10Rnd_762x54_SVD";
				count = "10*1";
			};
			class _xx_PG7VR
			{
				magazine = "PG7VR";
				count = "3*1";
			};
			class _xx_1Rnd_HE_GP25
			{
				magazine = "1Rnd_HE_GP25";
				count = "3*1";
			};
		};
		transportAmmo = 0;
		gunnerHasFlares = 0;
		weapons[] = {"SmokeLauncher"};
		magazines[] = {"SmokeLauncherMag"};
		outsideSoundFilter = 1;
		insideSoundCoef = 0.9;
		soundGear[] = {"",5.6234134e-005,1};
		soundGetIn[] = {"ca\SOUNDS\Vehicles\Tracked\T72\int\int-tank-diesel-door-1",0.56234133,1};
		soundGetOut[] = {"ca\SOUNDS\Vehicles\Tracked\T72\ext\ext-tank-diesel-door-1",0.56234133,1,60};
		soundEngineOnInt[] = {"ca\sounds\Vehicles\Tracked\T72\int\int-tank-diesel-start-2",1.0,1.0};
		soundEngineOnExt[] = {"ca\SOUNDS\Vehicles\Tracked\T72\ext\ext-tank-diesel-start-2",2.5118864,1.0,500};
		soundEngineOffInt[] = {"ca\sounds\vehicles\Tracked\T72\int\int-tank-diesel-stop-1",1.0,1.0};
		soundEngineOffExt[] = {"ca\sounds\vehicles\Tracked\T72\ext\ext-tank-diesel-stop-1",1.0,0.8,500};
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
				sound[] = {"ca\Sounds_E\Tracked_E\BVP2\BVP2_int_acceleration1",1.7782794,1.0};
				limit = "0.15";
				expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
			class AccelerationOut
			{
				sound[] = {"ca\Sounds_E\Tracked_E\BVP2\BVP2_ext_acceleration1",1.7782794,1.0,650};
				limit = "0.15";
				expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
		};
		class Sounds
		{
			class Engine
			{
				sound[] = {"ca\Sounds_E\Tracked_E\BVP2\BVP2_ext_high",1.7782794,1.0,600};
				frequency = "(randomizer*0.05+0.8)*rpm";
				volume = "engineOn*camPos*(rpm factor[0.3, 0.9])";
			};
			class IdleOut
			{
				sound[] = {"ca\Sounds_E\Tracked_E\BVP2\BVP2_ext_idle",0.56234133,1.0,300};
				frequency = "1";
				volume = "engineOn*camPos*(rpm factor[0.6, 0.15])";
			};
			class NoiseOut
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\ext\noise2",1.0,1.0,150};
				frequency = "1";
				volume = "camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsOutH0
			{
				sound[] = {"ca\Sounds_E\Tracked_E\Treads\ext_treads_hard_01",1.0,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsOutH1
			{
				sound[] = {"ca\Sounds_E\Tracked_E\Treads\ext_treads_hard_02",1.0,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsOutH2
			{
				sound[] = {"ca\Sounds_E\Tracked_E\Treads\ext_treads_hard_03",1.0,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsOutH3
			{
				sound[] = {"ca\Sounds_E\Tracked_E\Treads\ext_treads_hard_04",1.0,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsOutH4
			{
				sound[] = {"ca\Sounds_E\Tracked_E\Treads\ext_treads_hard_05",1.0,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
			class ThreadsOutS0
			{
				sound[] = {"ca\Sounds_E\Tracked_E\Treads\ext_treads_soft_01",1.0,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsOutS1
			{
				sound[] = {"ca\Sounds_E\Tracked_E\Treads\ext_treads_soft_02",1.0,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsOutS2
			{
				sound[] = {"ca\Sounds_E\Tracked_E\Treads\ext_treads_soft_03",1.0,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsOutS3
			{
				sound[] = {"ca\Sounds_E\Tracked_E\Treads\ext_treads_soft_04",1.0,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsOutS4
			{
				sound[] = {"ca\Sounds_E\Tracked_E\Treads\ext_treads_soft_05",1.0,1.0,200};
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
				sound[] = {"ca\Sounds_E\Tracked_E\BVP2\BVP2_ext_high",1.0,1.0};
				frequency = "(randomizer*0.05+0.8)*rpm";
				volume = "engineOn*(1-camPos)*(rpm factor[0.3, 0.9])";
			};
			class IdleIn
			{
				sound[] = {"ca\Sounds_E\Tracked_E\BVP2\BVP2_ext_idle",1.7782794,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(rpm factor[0.6, 0.15])";
			};
			class NoiseIn
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\int\noise2",0.15848932,1.0};
				frequency = "1";
				volume = "(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsInH0
			{
				sound[] = {"ca\Sounds_E\Tracked_E\Treads\int_treads_hard_01",0.17782794,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsInH1
			{
				sound[] = {"ca\Sounds_E\Tracked_E\Treads\int_treads_hard_02",0.17782794,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsInH2
			{
				sound[] = {"ca\Sounds_E\Tracked_E\Treads\int_treads_hard_03",0.17782794,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsInH3
			{
				sound[] = {"ca\Sounds_E\Tracked_E\Treads\int_treads_hard_04",0.17782794,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsInH4
			{
				sound[] = {"ca\Sounds_E\Tracked_E\Treads\int_treads_hard_05",0.17782794,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
			class ThreadsInS0
			{
				sound[] = {"ca\Sounds_E\Tracked_E\Treads\int_treads_soft_01",0.17782794,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsInS1
			{
				sound[] = {"ca\Sounds_E\Tracked_E\Treads\int_treads_soft_02",0.17782794,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsInS2
			{
				sound[] = {"ca\Sounds_E\Tracked_E\Treads\int_treads_soft_03",0.17782794,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsInS3
			{
				sound[] = {"ca\Sounds_E\Tracked_E\Treads\int_treads_soft_04",0.17782794,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsInS4
			{
				sound[] = {"ca\Sounds_E\Tracked_E\Treads\int_treads_soft_05",0.17782794,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
		};
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "M2";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "M2";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "M2";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				outGunnerMayFire = 1;
				forceHideGunner = 1;
				viewGunnerInExternal = 1;
				gunnerHasFlares = 0;
				gunnerAction = "M113_Gunner_EP1";
				gunnerInAction = "M113_Gunner_EP1";
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				minElev = -25;
				maxElev = 60;
				initElev = 0;
				soundServo[] = {"\ca\Weapons\Data\Sound\gun_elevate2",0.001,1.0};
				weapons[] = {"M2"};
				magazines[] = {"100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2"};
				gunnerOpticsModel = "\ca\Weapons\optika_empty";
				gunnerForceOptics = 0;
				gunnerOpticsShowCursor = 0;
				gunnerOutOpticsShowCursor = 0;
				class Turrets{};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.42;
					minFov = 0.22;
					maxFov = 0.64;
				};
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\Tracked_E\M113\Data\m113_track.rvmat","Ca\Tracked_E\M113\Data\m113_track.rvmat","Ca\Tracked_E\M113\Data\m113_track_destruct.rvmat","Ca\Tracked_E\M113\Data\m113_01.rvmat","Ca\Tracked_E\M113\Data\m113_01.rvmat","Ca\Tracked_E\M113\Data\m113_01_destruct.rvmat","Ca\Tracked_E\M113\Data\m113_02.rvmat","Ca\Tracked_E\M113\Data\m113_02.rvmat","Ca\Tracked_E\M113\Data\m113_02_destruct.rvmat","Ca\Tracked_E\M113\Data\cargo.rvmat","Ca\Tracked_E\M113\Data\cargo.rvmat","Ca\Tracked_E\M113\Data\cargo_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
		driverAction = "M113_Driver_EP1";
		driverInAction = "M113_Driver_EP1";
		getInAction = "GetInHigh";
		getOutAction = "GetOutHigh";
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
		cargoAction[] = {"M113_Cargo01_EP1","M113_Cargo03_EP1","M113_Cargo02_EP1","M113_Cargo02_EP1","M113_Cargo02_EP1","M113_Cargo02_EP1","M113_Cargo03_EP1","M113_Cargo01_EP1","M113_Cargo03_EP1","M113_Cargo03_EP1","M113_Cargo01_EP1"};
		model = "\ca\Tracked_E\m113\m113";
		canFloat = 1;
		initCargoAngleY = 90;
		threat[] = {0.9,0.6,0.6};
		transportMaxMagazines = 100;
		transportMaxWeapons = 20;
		class Library
		{
			libTextDesc = "$STR_LIB_M113";
		};
		hiddenSelections[] = {"Camo"};
	};
	class M113Ambul_Base: M113_Base
	{
		accuracy = 1000;
		vehicleClass = "Support";
		picture = "\ca\tracked_e\Data\ui\Picture_m113_amb_CA.paa";
		Icon = "\Ca\tracked_e\Data\ui\Icon_m113_amb_CA.paa";
		mapSize = 5;
		scope = 0;
		displayName = "$STR_DN_M113_AMB";
		class TransportMagazines{};
		attendant = 1;
		hasGunner = 0;
		class Turrets{};
		model = "\ca\Tracked_e\m113\M113_ambulance";
		transportSoldier = 3;
		threat[] = {0.0,0.0,0.0};
		cargoAction[] = {"M113_Cargo02_EP1","M113_Cargo04_EP1","M113_Cargo04_EP1"};
		cargoIsCoDriver[] = {0};
		transportMaxMagazines = 0;
		transportMaxWeapons = 0;
		LODTurnedOut = 1100;
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\Tracked_E\M113\Data\m113_track.rvmat","Ca\Tracked_E\M113\Data\m113_track.rvmat","Ca\Tracked_E\M113\Data\m113_track_destruct.rvmat","Ca\Tracked_E\M113\Data\m113_01.rvmat","Ca\Tracked_E\M113\Data\m113_01.rvmat","Ca\Tracked_E\M113\Data\m113_01_destruct.rvmat","Ca\Tracked_E\M113\Data\m113_02.rvmat","Ca\Tracked_E\M113\Data\m113_02.rvmat","Ca\Tracked_E\M113\Data\m113_02_destruct.rvmat","Ca\Tracked_E\M113\Data\cargo.rvmat","Ca\Tracked_E\M113\Data\cargo.rvmat","Ca\Tracked_E\M113\Data\cargo_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
		class Library
		{
			libTextDesc = "$STR_LIB_M113_AMB";
		};
	};
	class M113Ambul_UN_EP1: M113Ambul_Base
	{
		expansion = 1;
		scope = 2;
		side = 2;
		faction = "BIS_UN";
		crew = "UN_CDF_Soldier_Crew_EP1";
		typicalCargo[] = {"UN_CDF_Soldier_Crew_EP1","UN_CDF_Soldier_Crew_EP1"};
		hiddenSelectionsTextures[] = {"\ca\Tracked_E\M113\Data\m113a3_01_UN_co.paa"};
	};
	class M113_UN_EP1: M113_Base
	{
		expansion = 1;
		scope = 2;
		side = 2;
		faction = "BIS_UN";
		crew = "UN_CDF_Soldier_Crew_EP1";
		typicalCargo[] = {"UN_CDF_Soldier_Crew_EP1","UN_CDF_Soldier_Crew_EP1"};
		hiddenSelectionsTextures[] = {"\ca\Tracked_E\M113\Data\m113a3_01_UN_co.paa"};
		class TransportMagazines
		{
			class _xx_30Rnd_545x39_AK
			{
				magazine = "30Rnd_545x39_AK";
				count = 30;
			};
			class _xx_1Rnd_HE_GP25
			{
				magazine = "1Rnd_HE_GP25";
				count = 5;
			};
			class _xx_HandGrenade_East
			{
				magazine = "HandGrenade_East";
				count = 10;
			};
			class _xx_100Rnd_762x54_PK
			{
				magazine = "100Rnd_762x54_PK";
				count = 5;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 2;
			};
		};
		class TransportWeapons
		{
			class _xx_AK_74
			{
				weapon = "AK_74";
				count = 2;
			};
		};
	};
	class M113Ambul_TK_EP1: M113Ambul_Base
	{
		expansion = 1;
		scope = 2;
		side = 0;
		faction = "BIS_TK";
		crew = "TK_Soldier_Crew_EP1";
		typicalCargo[] = {"TK_Soldier_Crew_EP1"};
		hiddenSelectionsTextures[] = {"\ca\Tracked_E\M113\Data\m113a3_01_TK_co.paa"};
	};
	class M113_TK_EP1: M113_Base
	{
		expansion = 1;
		scope = 2;
		side = 0;
		faction = "BIS_TK";
		crew = "TK_Soldier_Crew_EP1";
		typicalCargo[] = {"TK_Soldier_Crew_EP1"};
		hiddenSelectionsTextures[] = {"\ca\Tracked_E\M113\Data\m113a3_01_TK_co.paa"};
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
				count = 10;
			};
			class _xx_100Rnd_762x54_PK
			{
				magazine = "100Rnd_762x54_PK";
				count = 5;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 2;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
		};
		class TransportWeapons
		{
			class _xx_FN_FAL
			{
				weapon = "FN_FAL";
				count = 2;
			};
		};
	};
};
//};

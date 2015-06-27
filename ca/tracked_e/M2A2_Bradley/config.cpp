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

//Class tracked_e : M2A2_Bradley\config.bin{
class CfgPatches
{
	class CATracked_E_M2A2_Bradley
	{
		units[] = {"M2A2_EP1","M2A3_EP1","M6_EP1"};
		weapons[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {"CATracked_E"};
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
		class AnimationSources;
		class ViewPilot;
		class HeadLimits;
	};
	class M2A2_Base: Tank
	{
		scope = 0;
		model = "\ca\Tracked_E\M2A2_Bradley\M2A2";
		picture = "\CA\Tracked_E\Data\UI\Picture_m2a2_CA.paa";
		Icon = "\CA\Tracked_E\Data\UI\Icon_m2a2_CA.paa";
		MapSize = 7;
		displayName = "$STR_EP1_DN_M2A2_Base";
		accuracy = 0.3;
		tracksSpeed = 10;
		maxSpeed = 61;
		viewCargoShadow = 1;
		viewCargoShadowDiff = 0.05;
		viewCargoShadowAmb = 0.5;
		transportSoldier = 6;
		getInAction = "GetInHigh";
		getOutAction = "GetOutHigh";
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
		hiddenSelections[] = {"camo1","camo2","camo3","selection_stinger","selection_tow"};
		hiddenSelectionsTextures[] = {"\ca\tracked_e\m2a2_bradley\data\base_co.paa","\ca\tracked_e\m2a2_bradley\data\a3_co.paa","\ca\tracked_e\m2a2_bradley\data\ultralp_co.paa","\ca\tracked_e\m2a2_bradley\data\base_co.paa","\ca\tracked_e\m2a2_bradley\data\base_co.paa"};
		DriverForceOptics = 0;
		radarType = 4;
		LockDetectionSystem = 4;
		IncommingMisslieDetectionSystem = 16;
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = "30*1";
			};
			class _xx_200Rnd_556x45_M249
			{
				magazine = "200Rnd_556x45_M249";
				count = "5*1";
			};
			class _xx_HandGrenade_west
			{
				magazine = "HandGrenade_west";
				count = "10*1";
			};
			class _xx_5Rnd_762x51_M24
			{
				magazine = "5Rnd_762x51_M24";
				count = "10*1";
			};
			class _xx_15rnd_9x19_M9
			{
				magazine = "15rnd_9x19_M9";
				count = "15*1";
			};
			class _xx_M136
			{
				magazine = "M136";
				count = "3*1";
			};
			class _xx_1Rnd_HE_M203
			{
				magazine = "1Rnd_HE_M203";
				count = "3*1";
			};
		};
		threat[] = {0.9,0.9,0.4};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				turretInfoType = "RscWeaponRangeZeroing";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
				discreteDistanceInitIndex = 5;
				gunnerHasFlares = 0;
				gunnerAction = "M2A2_GunnerOut_EP1";
				gunnerInAction = "M2A2_Commander_EP1";
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				minElev = -9;
				maxElev = 59;
				initElev = 0;
				soundServo[] = {"\ca\Weapons\Data\Sound\gun_elevate2",0.001,1.0};
				weapons[] = {"M242BC","M240BC_veh","TOWLauncher"};
				magazines[] = {"1200Rnd_762x51_M240","2Rnd_TOW2","2Rnd_TOW2","2Rnd_TOW2","2Rnd_TOW2","2Rnd_TOW2","210Rnd_25mm_M242_APDS","210Rnd_25mm_M242_HEI","210Rnd_25mm_M242_APDS","210Rnd_25mm_M242_HEI"};
				class OpticsIn
				{
					class Wide
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.117;
						minFov = 0.117;
						maxFov = 0.117;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsModel = "\ca\tracked_e\gunnerOptics_M2A2";
						gunnerOpticsEffect[] = {};
					};
					class Narrow: Wide
					{
						gunnerOpticsModel = "\ca\tracked_e\gunnerOptics_M2A2_2";
						initFov = 0.039;
						minFov = 0.039;
						maxFov = 0.039;
					};
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						minElev = -25;
						maxElev = 60;
						initElev = 0;
						minTurn = -360;
						maxTurn = 360;
						initTurn = 0;
						weapons[] = {"SmokeLauncher"};
						magazines[] = {"SmokeLauncherMag","SmokeLauncherMag"};
						turretInfoType = "RscWeaponRangeFinder";
						gunnerAction = "M2A2_CommanderOut_EP1";
						gunnerInAction = "M2A2_Commander_EP1";
						gunnerGetInAction = "GetInHigh";
						gunnerGetOutAction = "GetOutHigh";
						gunnerOpticsModel = "\ca\weapons\2Dscope_com2";
						gunnerOpticsEffect[] = {};
						class ViewOptics
						{
							initAngleX = 0;
							minAngleX = -30;
							maxAngleX = 30;
							initAngleY = 0;
							minAngleY = -100;
							maxAngleY = 100;
							initFov = 0.155;
							minFov = 0.067;
							maxFov = 0.155;
						};
						startEngine = 0;
						gunnerHasFlares = 1;
					};
				};
			};
		};
		driverAction = "M2A2_DriverOut_EP1";
		driverInAction = "M2A2_Driver_EP1";
		cargoAction[] = {"M113_Cargo03_EP1","M113_Cargo03_EP1","M113_Cargo03_EP1","M113_Cargo02_EP1","M113_Cargo02_EP1","M113_Cargo02_EP1"};
		insideSoundCoef = 0.9;
		soundGear[] = {"",5.6234134e-005,1};
		soundGetIn[] = {"ca\SOUNDS\Vehicles\Tracked\Other\int\int-tracked-getin-01",0.56234133,1};
		soundGetOut[] = {"ca\SOUNDS\Vehicles\Tracked\Other\ext\ext-tracked-getout-01",0.56234133,1,50};
		soundEngineOnInt[] = {"ca\sounds\Vehicles\Tracked\Other\int\int-tracked-start-01",1.0,1.0};
		soundEngineOnExt[] = {"ca\SOUNDS\Vehicles\Tracked\Other\ext\ext-tracked-start-01",2.5118864,1.0,400};
		soundEngineOffInt[] = {"ca\sounds\vehicles\Tracked\Other\int\int-tracked-stop-02.wss",1.0,1.0};
		soundEngineOffExt[] = {"ca\sounds\vehicles\Tracked\Other\ext\ext-tracked-stop-02.wss",1.2589254,0.8,400};
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
				sound[] = {"ca\Sounds_E\Tracked_E\M2a2\M2A2_int_acceleration",1.0,1.0};
				limit = "0.15";
				expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
			class AccelerationOut
			{
				sound[] = {"ca\Sounds_E\Tracked_E\M2a2\M2A2_ext_acceleration",1.0,1.0,700};
				limit = "0.15";
				expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
		};
		class Sounds
		{
			class Engine
			{
				sound[] = {"ca\Sounds_E\Tracked_E\M2a2\M2A2_ext_high",1.0,1.0,1000};
				frequency = "(randomizer*0.05+0.8)*rpm";
				volume = "engineOn*camPos*(rpm factor[0.4, 0.9])";
			};
			class IdleOut
			{
				sound[] = {"ca\Sounds_E\Tracked_E\M2a2\M2A2_ext_idle",0.56234133,1.0,450};
				frequency = "1";
				volume = "engineOn*camPos*(rpm factor[0.6, 0.2])";
			};
			class NoiseOut
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\noise2",1.0,1.0,100};
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
				sound[] = {"ca\Sounds_E\Tracked_E\M2a2\M2A2_int_high",1.0,1.0};
				frequency = "(randomizer*0.05+0.8)*rpm";
				volume = "engineOn*(1-camPos)*(rpm factor[0.4, 1])";
			};
			class IdleIn
			{
				sound[] = {"ca\Sounds_E\Tracked_E\M2a2\M2A2_int_idle",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(rpm factor[0.6, 0.15])";
			};
			class NoiseIn
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\noise2",0.19952624,1.0};
				frequency = "1";
				volume = "(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsInH0
			{
				sound[] = {"ca\Sounds_E\Tracked_E\Treads\int_treads_hard_01",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsInH1
			{
				sound[] = {"ca\Sounds_E\Tracked_E\Treads\int_treads_hard_02",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsInH2
			{
				sound[] = {"ca\Sounds_E\Tracked_E\Treads\int_treads_hard_03",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsInH3
			{
				sound[] = {"ca\Sounds_E\Tracked_E\Treads\int_treads_hard_04",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsInH4
			{
				sound[] = {"ca\Sounds_E\Tracked_E\Treads\int_treads_hard_05",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
			class ThreadsInS0
			{
				sound[] = {"ca\Sounds_E\Tracked_E\Treads\int_treads_soft_01",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsInS1
			{
				sound[] = {"ca\Sounds_E\Tracked_E\Treads\int_treads_soft_02",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsInS2
			{
				sound[] = {"ca\Sounds_E\Tracked_E\Treads\int_treads_soft_03",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsInS3
			{
				sound[] = {"ca\Sounds_E\Tracked_E\Treads\int_treads_soft_04",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsInS4
			{
				sound[] = {"ca\Sounds_E\Tracked_E\Treads\int_treads_soft_05",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
		};
	};
	class M2A2_EP1: M2A2_Base
	{
		expansion = 1;
		scope = 2;
		displayName = "$STR_EP1_DN_M2A2_EP1";
		side = 1;
		faction = "BIS_US";
		crew = "US_Soldier_Crew_EP1";
		typicalCargo[] = {"US_Soldier_Crew_EP1","US_Soldier_Crew_EP1","US_Soldier_Crew_EP1"};
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_M2A2";
		};
		model = "\ca\Tracked_E\M2A2_Bradley\M2A2";
		armor = 300;
		damageResistance = 0.01189;
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 30;
			};
			class _xx_1Rnd_HE_M203
			{
				magazine = "1Rnd_HE_M203";
				count = 5;
			};
			class _xx_HandGrenade_West
			{
				magazine = "HandGrenade_West";
				count = 10;
			};
			class _xx_100Rnd_556x45_M249
			{
				magazine = "100Rnd_556x45_M249";
				count = 5;
			};
			class _xx_MAAWS_HEDP
			{
				magazine = "MAAWS_HEDP";
				count = 2;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 5;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
		};
		class TransportWeapons
		{
			class _xx_SCAR_L_STD_HOLO
			{
				weapon = "SCAR_L_STD_HOLO";
				count = 2;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\Tracked_E\M2A2_Bradley\data\brad_UV1.rvmat","Ca\Tracked_E\M2A2_Bradley\data\brad_UV1_damage.rvmat","Ca\Tracked_E\M2A2_Bradley\data\brad_UV1_destruct.rvmat","Ca\Tracked_E\M2A2_Bradley\data\brad_UV2.rvmat","Ca\Tracked_E\M2A2_Bradley\data\brad_UV2_damage.rvmat","Ca\Tracked_E\M2A2_Bradley\data\brad_UV2_destruct.rvmat","Ca\Tracked_E\M2A2_Bradley\data\brad_UV2_ERAon.rvmat","Ca\Tracked_E\M2A2_Bradley\data\brad_UV2_ERAon_damage.rvmat","Ca\Tracked_E\M2A2_Bradley\data\brad_UV2_ERAon_destruct.rvmat","Ca\Tracked_E\M2A2_Bradley\data\M2_tracks.rvmat","Ca\Tracked_E\M2A2_Bradley\data\M2_tracks_damage.rvmat","Ca\Tracked_E\M2A2_Bradley\data\M2_tracks_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
		class AnimationSources
		{
			class recoil_source
			{
				source = "reload";
				weapon = "M242BC";
			};
			class Select_TOW
			{
				source = "user";
				animPeriod = 1e-007;
				initPhase = 0;
			};
			class Select_Stinger: Select_TOW
			{
				initPhase = 1;
			};
		};
	};
	class M2A3_EP1: M2A2_EP1
	{
		displayName = "$STR_EP1_DN_M2A3_EP1";
		model = "\ca\Tracked_E\M2A2_Bradley\M2A2_ERA";
		armor = 400;
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\ca\tracked_e\m2a2_bradley\data\base_co.paa","\ca\tracked_e\m2a2_bradley\data\a3_co.paa","\ca\tracked_e\m2a2_bradley\data\ultralp_co.paa"};
		damageResistance = 0.01101;
		class AnimationSources
		{
			class recoil_source
			{
				source = "reload";
				weapon = "M242BC";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						stabilizedInAxes = "StabilizedInAxesBoth";
						gunnerOpticsModel = "\ca\tracked_e\comTI_M2A2";
						gunnerOpticsEffect[] = {};
						class ViewOptics: ViewOptics
						{
							initFov = 0.466;
							minFov = 0.015;
							maxFov = 0.466;
							visionMode[] = {"Normal","NVG","Ti"};
							thermalMode[] = {0,1};
						};
					};
				};
			};
		};
	};
	class M6_EP1: M2A2_Base
	{
		expansion = 1;
		scope = 2;
		displayName = "$STR_EP1_DN_M6_EP1";
		side = 1;
		faction = "BIS_US";
		crew = "US_Soldier_Crew_EP1";
		typicalCargo[] = {"US_Soldier_Crew_EP1","US_Soldier_Crew_EP1","US_Soldier_Crew_EP1"};
		armor = 300;
		damageResistance = 0.01101;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"M242BC","M240BC_veh","StingerLaucher_4x"};
				magazines[] = {"1200Rnd_762x51_M240","4Rnd_Stinger","4Rnd_Stinger","4Rnd_Stinger","210Rnd_25mm_M242_APDS","210Rnd_25mm_M242_HEI","210Rnd_25mm_M242_APDS","210Rnd_25mm_M242_HEI"};
			};
		};
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_M6";
		};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 30;
			};
			class _xx_1Rnd_HE_M203
			{
				magazine = "1Rnd_HE_M203";
				count = 5;
			};
			class _xx_HandGrenade_West
			{
				magazine = "HandGrenade_West";
				count = 10;
			};
			class _xx_100Rnd_556x45_M249
			{
				magazine = "100Rnd_556x45_M249";
				count = 5;
			};
			class _xx_MAAWS_HEDP
			{
				magazine = "MAAWS_HEDP";
				count = 2;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 5;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
		};
		class TransportWeapons
		{
			class _xx_SCAR_L_STD_HOLO
			{
				weapon = "SCAR_L_STD_HOLO";
				count = 2;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\Tracked_E\M2A2_Bradley\data\brad_UV1.rvmat","Ca\Tracked_E\M2A2_Bradley\data\brad_UV1_damage.rvmat","Ca\Tracked_E\M2A2_Bradley\data\brad_UV1_destruct.rvmat","Ca\Tracked_E\M2A2_Bradley\data\brad_UV2.rvmat","Ca\Tracked_E\M2A2_Bradley\data\brad_UV2_damage.rvmat","Ca\Tracked_E\M2A2_Bradley\data\brad_UV2_destruct.rvmat","Ca\Tracked_E\M2A2_Bradley\data\M2_tracks.rvmat","Ca\Tracked_E\M2A2_Bradley\data\M2_tracks_damage.rvmat","Ca\Tracked_E\M2A2_Bradley\data\M2_tracks_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
		class AnimationSources: AnimationSources
		{
			class recoil_source
			{
				source = "reload";
				weapon = "M242BC";
			};
			class Select_TOW
			{
				source = "user";
				animPeriod = 1e-007;
				initPhase = 1;
			};
			class Select_Stinger: Select_TOW
			{
				initPhase = 0;
			};
		};
		threat[] = {0.9,0.3,1};
	};
};
//};

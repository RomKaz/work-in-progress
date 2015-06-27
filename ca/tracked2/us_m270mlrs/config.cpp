////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:06:26 2014 : Source 'file' date Fri Oct 31 06:06:26 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class tracked2 : us_m270mlrs\config.bin{
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		MLRS_Driver = "MLRS_Driver";
		MLRS_Gunner = "MLRS_Gunner";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class KIA_MLRS_Driver: DefaultDie
		{
			actions = "DeadActions";
			file = "\Ca\tracked2\us_m270mlrs\data\anims\MLRS_DriverKIA.rtm";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
		};
		class MLRS_Driver: Crew
		{
			file = "\Ca\tracked2\us_m270mlrs\data\anims\MLRS_Driver.rtm";
			connectTo[] = {"KIA_MLRS_Driver",1};
		};
		class KIA_MLRS_Gunner: DefaultDie
		{
			actions = "DeadActions";
			file = "\Ca\tracked2\us_m270mlrs\data\anims\MLRS_GunnerKIA.rtm";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
		};
		class MLRS_Gunner: Crew
		{
			file = "\Ca\tracked2\us_m270mlrs\data\anims\MLRS_Gunner.rtm";
			connectTo[] = {"KIA_MLRS_Gunner",1};
		};
	};
};
class CfgMovesWomen: CfgMovesBasic
{
	class ManActions
	{
		MLRS_Driver = "";
		MLRS_Gunner = "";
	};
};
class CfgPatches
{
	class CATracked2_us_m270mlrs
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {"CATracked2","CACharacters2"};
	};
};
class CfgVehicles
{
	class LandVehicle;
	class Tank: LandVehicle
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class MLRS: Tank
	{
		scope = 0;
		side = 1;
		faction = "USMC";
		displayName = "$STR_DN_MLRS";
		vehicleClass = "Armored";
		model = "\ca\tracked2\us_m270mlrs\MLRS";
		icon = "\Ca\tracked2\Data\UI\Icon_mlrs_ca.paa";
		picture = "\Ca\tracked2\Data\UI\Picture_m270mlrs_ca.paa";
		mapSize = 9;
		accuracy = 0.7;
		wheelCircumference = 1.991;
		threat[] = {1,1,0.3};
		armor = 160;
		damageResistance = 0.02552;
		cost = 4000000;
		maxSpeed = 72;
		supplyRadius = 5;
		tracksSpeed = -0.5;
		commanding = 2;
		crew = "USMC_Soldier_Crew";
		cargoAction[] = {"HMMWV_Cargo01"};
		typicalCargo[] = {"USMC_Soldier_Crew","USMC_Soldier_Crew","USMC_Soldier_Crew"};
		transportSoldier = 1;
		getInAction = "GetInHigh";
		getOutAction = "GetOutHigh";
		cargoGetInAction[] = {"GetInHigh"};
		cargoGetOutAction[] = {"GetOutHigh"};
		hideWeaponsCargo = 1;
		driverAction = "MLRS_Driver";
		driverInAction = "MLRS_Driver";
		driverForceOptics = 0;
		driverOpticsModel = "\ca\Tracked\optika_tank_driver_west";
		class Exhausts
		{
			class Exhaust1
			{
				position = "vyfuk start";
				direction = "vyfuk konec";
				effect = "ExhaustsEffectBig";
			};
		};
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\ca\tracked2\us_m270mlrs\data\mlrs_hull_woodland_co.paa"};
		insideSoundCoef = 0.9;
		soundCrash[] = {"\ca\Tracked\Data\Sound\crash1",10.0,1};
		soundGear[] = {"",5.6234134e-005,1};
		soundGetIn[] = {"ca\SOUNDS\Vehicles\Tracked\Other\int\int-tracked-getin-01",0.56234133,1};
		soundGetOut[] = {"ca\SOUNDS\Vehicles\Tracked\Other\ext\ext-tracked-getout-01",0.56234133,1,60};
		soundEngineOnInt[] = {"ca\sounds\Vehicles\Tracked\Other\int\int-tracked-start-01",0.56234133,1.0};
		soundEngineOnExt[] = {"ca\SOUNDS\Vehicles\Tracked\Other\ext\ext-tracked-start-01",0.56234133,1.0,500};
		soundEngineOffInt[] = {"ca\sounds\vehicles\Tracked\Other\int\int-tracked-stop-02.wss",0.56234133,1.0};
		soundEngineOffExt[] = {"ca\sounds\vehicles\Tracked\Other\ext\ext-tracked-stop-02.wss",0.56234133,0.8,500};
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
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\int-tracked-acce-02",1.1220185,1.0};
				limit = "0.15";
				expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
			class AccelerationOut
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\ext-tracked-acce-02",1.0,1.0,600};
				limit = "0.15";
				expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
		};
		class Sounds
		{
			class Engine
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\ext-tracked-engine-02",1.4125376,1.0,1000};
				frequency = "(randomizer*0.05+0.8)*rpm";
				volume = "engineOn*camPos*(rpm factor[0.4, 0.9])";
			};
			class IdleOut
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\ext-tracked-idle-02",0.7943282,1.0,350};
				frequency = "1";
				volume = "engineOn*camPos*(rpm factor[0.6, 0.15])";
			};
			class NoiseOut
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\noise2",0.31622776,1.0,150};
				frequency = "1";
				volume = "camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsOutH0
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\sherman_05",1.1220185,1.0,250};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsOutH1
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\sherman_04",1.2589254,1.0,250};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsOutH2
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\sherman_03",1.4125376,1.0,280};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsOutH3
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\sherman_02",1.5848932,1.0,300};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsOutH4
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\sherman_01",1.7782794,1.0,330};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
			class ThreadsOutS0
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\sherman_05",1.0,1.0,250};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsOutS1
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\sherman_04",1.1220185,1.0,250};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsOutS2
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\sherman_03",1.2589254,1.0,250};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsOutS3
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\sherman_02",1.5848932,1.0,280};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsOutS4
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\sherman_01",1.7782794,1.0,300};
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
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\int-tracked-engine-02",1.0,1.0};
				frequency = "(randomizer*0.05+0.8)*rpm";
				volume = "engineOn*(1-camPos)*(rpm factor[0.4, 1])";
			};
			class IdleIn
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\int-tracked-idle-02",0.70794576,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(rpm factor[0.6, 0.15])";
			};
			class NoiseIn
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\noise2",0.31622776,1.0};
				frequency = "1";
				volume = "(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsInH0
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\sherman_05",0.56234133,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsInH1
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\sherman_04",0.63095737,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsInH2
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\sherman_03",0.70794576,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsInH3
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\sherman_02",0.7943282,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsInH4
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\sherman_01",0.8912509,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
			class ThreadsInS0
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\sherman_05",0.56234133,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsInS1
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\sherman_04",0.63095737,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsInS2
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\sherman_03",0.70794576,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsInS3
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\sherman_02",0.7943282,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsInS4
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\sherman_01",0.8912509,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"MLRS"};
				magazines[] = {"12Rnd_MLRS"};
				gunnerAction = "HMMWV_Cargo01";
				gunnerInAction = "HMMWV_Cargo01";
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				commanding = 1;
				minElev = 0;
				maxElev = 77;
				initElev = 0;
				startEngine = 0;
				class Turrets{};
				gunnerOpticsModel = "\ca\Weapons\optika_empty";
				gunnerOutOpticsModel = "\ca\Weapons\optika_empty";
				stabilizedInAxes = 0;
				lockWhenVehicleSpeed = 5;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\tracked2\us_m270mlrs\data\MLRS_glass.rvmat","ca\tracked2\us_m270mlrs\data\mlrs_glass_damage.rvmat","ca\tracked2\us_m270mlrs\data\mlrs_glass_destruct.rvmat","ca\tracked2\us_m270mlrs\data\MLRS_hull.rvmat","ca\tracked2\us_m270mlrs\data\mlrs_hull_damage.rvmat","ca\tracked2\us_m270mlrs\data\mlrs_hull_destruct.rvmat","ca\tracked2\us_m270mlrs\data\MLRS_interior.rvmat","ca\tracked2\us_m270mlrs\data\mlrs_interior_damage.rvmat","ca\tracked2\us_m270mlrs\data\mlrs_interior_destruct.rvmat","ca\tracked2\us_m270mlrs\data\MLRS_tracks.rvmat","ca\tracked2\us_m270mlrs\data\mlrs_tracks_damage.rvmat","ca\tracked2\us_m270mlrs\data\mlrs_tracks_destruct.rvmat"};
		};
		class Library
		{
			libTextDesc = "$STR_LIB_MLRS";
		};
	};
};
//};

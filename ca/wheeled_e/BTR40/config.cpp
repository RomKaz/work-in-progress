////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:13:32 2014 : Source 'file' date Fri Oct 31 06:13:32 2014
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

//Class wheeled_e : BTR40\config.bin{
class CfgPatches
{
	class CAWheeled_E_BTR40
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.04;
		requiredAddons[] = {"CAWheeled_E"};
	};
};
class CfgVehicles
{
	class Land;
	class LandVehicle: Land
	{
		class NewTurret;
	};
	class Car: LandVehicle
	{
		class HitPoints
		{
			class HitLFWheel;
			class HitLBWheel;
			class HitRFWheel;
			class HitRBWheel;
		};
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
			};
		};
		class AnimationSources;
	};
	class Wheeled_APC: Car{};
	class BTR40_MG_base_EP1: Wheeled_APC
	{
		brakeDistance = 7.0;
		htMin = 60;
		htMax = 1800;
		afMax = 200;
		mfMax = 100;
		mFact = 0;
		tBody = 0;
		expansion = 1;
		scope = 0;
		armor = 40;
		damageResistance = 0.03241;
		vehicleClass = "Armored";
		model = "Ca\wheeled_E\BTR40\btr40_dskm";
		displayName = "$STR_EP1_DN_BTR40_MG_base_EP1";
		picture = "\CA\wheeled_e\Data\UI\Picture_btr40_dshk_CA.paa";
		Icon = "\CA\wheeled_e\Data\UI\Icon_btr40_dshk_CA.paa";
		mapSize = 5.5;
		wheelCircumference = 2.532;
		maxSpeed = 90;
		steerAheadPlan = 0.2;
		terrainCoef = 2.5;
		damperSize = 0.1;
		damperForce = 1;
		class TransportMagazines{};
		transportSoldier = 6;
		driverAction = "BTR40_driver_EP1";
		cargoAction[] = {"BTR40_Cargo_EP1","UAZ_Cargo01","UAZ_Cargo01","UAZ_Cargo01","UAZ_Cargo01","UAZ_Cargo01","UAZ_Cargo01"};
		castDriverShadow = 1;
		castCargoShadow = 1;
		gunnerOpticsShowCursor = 1;
		threat[] = {1,0.6,0.6};
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "DShKM";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "DShKM";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "DShKM";
			};
			class HatchAction
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				body = "mainTurret";
				gun = "mainGun";
				outGunnerMayFire = 1;
				castGunnerShadow = 1;
				viewGunnerInExternal = 1;
				weapons[] = {"DShKM"};
				soundServo[] = {};
				stabilizedInAxes = 0;
				magazines[] = {"50Rnd_127x107_DSHKM","50Rnd_127x107_DSHKM","50Rnd_127x107_DSHKM","50Rnd_127x107_DSHKM","50Rnd_127x107_DSHKM","50Rnd_127x107_DSHKM"};
				gunnerAction = "BTR40_Gunner_EP1";
				gunnerInAction = "BTR40_Gunner_EP1";
				ejectDeadGunner = 1;
				minElev = -18;
				maxElev = 60;
				minTurn = -60;
				maxTurn = 60;
				initTurn = 0;
			};
		};
		DriverOutOptics = "Driverview";
		DriverOptics = "Driverview";
		driverOpticsModel = "CA\Tracked_E\driverOptics";
		driverOpticsOutModel = "CA\Tracked_E\driverOptics";
		driverForceOptics = 0;
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\wheeled_e\btr40\data\btr40ext.rvmat","ca\wheeled_e\btr40\data\btr40ext_damage.rvmat","ca\wheeled_e\btr40\data\btr40ext_destruct.rvmat","ca\wheeled_e\btr40\data\btr40int.rvmat","ca\wheeled_e\btr40\data\btr40int_damage.rvmat","ca\wheeled_e\btr40\data\btr40int_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
		class HitPoints: HitPoints
		{
			class HitEngine
			{
				armor = 2;
				material = 60;
				name = "NEmotor";
				visual = "motor";
				passThrough = 0;
			};
			class HitFuel
			{
				armor = 1;
				material = 51;
				name = "NEpalivo";
				passThrough = 0;
			};
			class HitLFWheel: HitLFWheel
			{
				armor = 0.4;
			};
			class HitLBWheel: HitLBWheel
			{
				armor = 0.4;
			};
			class HitRFWheel: HitRFWheel
			{
				armor = 0.4;
			};
			class HitRBWheel: HitRBWheel
			{
				armor = 0.4;
			};
		};
		hiddenSelections[] = {"camo"};
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_BTR40_MG";
		};
		outsideSoundFilter = 0;
		insideSoundCoef = 0.99;
		soundGear[] = {"",5.6234134e-005,1};
		soundGetIn[] = {"\ca\Sounds_E\Wheeled_E\BTR60\btr_door",1.0,1};
		soundGetOut[] = {"\ca\Sounds_E\Wheeled_E\BTR60\btr_door",1.0,1,30};
		soundEngineOnInt[] = {"\ca\Sounds_E\Wheeled_E\BTR60\btr60_ext_on",1.0,1.0};
		soundEngineOnExt[] = {"\ca\Sounds_E\Wheeled_E\BTR60\btr60_ext_on",1.0,1.0,100};
		soundEngineOffInt[] = {"\ca\Sounds_E\Wheeled_E\BTR60\btr60_ext_off",1.0,1.0};
		soundEngineOffExt[] = {"\ca\Sounds_E\Wheeled_E\BTR60\btr60_ext_off",1.0,1.0,100};
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
				sound[] = {"\ca\Sounds_E\Wheeled_E\BTR60\btr60_ext_acceleration",0.56234133,1.0};
				limit = "0.15";
				expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
			class AccelerationOut
			{
				sound[] = {"\ca\Sounds_E\Wheeled_E\BTR60\btr60_ext_acceleration",1.0,1.0,300};
				limit = "0.15";
				expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
		};
		class Sounds
		{
			class Engine
			{
				sound[] = {"\ca\Sounds_E\Wheeled_E\BTR60\btr60_ext_mid",1.4125376,0.7,250};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "camPos*engineOn*((rpm factor[0.3, 0.4]) min (rpm factor[0.7, 0.5]))";
			};
			class EngineHighOut
			{
				sound[] = {"\ca\Sounds_E\Wheeled_E\BTR60\btr60_ext_high",1.4125376,0.8,350};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "camPos*engineOn*(rpm factor[0.5, 0.8])";
			};
			class IdleOut
			{
				sound[] = {"\ca\Sounds_E\Wheeled_E\BTR60\btr60_ext_idle",1.0,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*(rpm factor[0.4, 0])";
			};
			class TiresRockOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2",0.31622776,1.0,80};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2",0.31622776,1.0,80};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3",0.31622776,1.0,80};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2",0.31622776,1.0,80};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2",0.31622776,1.0,80};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3",0.31622776,1.0,50};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise3",0.56234133,1.0,50};
				frequency = "1";
				volume = "camPos*(damper0 max 0.04)*(speed factor[0, 8])";
			};
			class EngineLowIn
			{
				sound[] = {"\ca\Sounds_E\Wheeled_E\BTR60\btr60_ext_mid",1.4125376,0.7};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "(1-camPos)*engineOn*((rpm factor[0.3, 0.4]) min (rpm factor[0.7, 0.5]))";
			};
			class EngineHighIn
			{
				sound[] = {"\ca\Sounds_E\Wheeled_E\BTR60\btr60_ext_high",1.4125376,0.8};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "(1-camPos)*engineOn*(rpm factor[0.5, 0.8])";
			};
			class IdleIn
			{
				sound[] = {"\ca\Sounds_E\Wheeled_E\BTR60\btr60_ext_idle",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(rpm factor[0.4, 0])*(1-camPos)";
			};
			class TiresRockIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2",0.17782794,1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2",0.17782794,1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3",0.17782794,1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2",0.17782794,1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2",0.17782794,1.0};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3",0.17782794,1.0};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise4",0.56234133,1.0};
				frequency = "1";
				volume = "(damper0 max 0.04)*(speed factor[0, 8])*(1-camPos)";
			};
			class Movement
			{
				sound = "soundEnviron";
				frequency = "1";
				volume = "0";
			};
		};
	};
	class BTR40_base_EP1: BTR40_MG_base_EP1
	{
		model = "Ca\wheeled_E\BTR40\btr40";
		displayName = "$STR_EP1_DN_BTR40_base_EP1";
		picture = "\CA\wheeled_e\Data\UI\Picture_btr40_CA.paa";
		Icon = "\CA\wheeled_e\Data\UI\Icon_btr40_CA.paa";
		weapons[] = {"CarHorn"};
		magazines[] = {};
		threat[] = {0,0,0};
		class Turrets{};
		class AnimationSources: AnimationSources
		{
			delete ReloadAnim;
			delete ReloadMagazine;
			delete Revolving;
		};
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_BTR40";
		};
	};
	class BTR40_MG_TK_GUE_EP1: BTR40_MG_base_EP1
	{
		scope = 2;
		side = 2;
		faction = "BIS_TK_GUE";
		crew = "TK_GUE_Soldier_EP1";
		typicalCargo[] = {"TK_GUE_Soldier_EP1","TK_GUE_Soldier_EP1","TK_GUE_Soldier_EP1","TK_GUE_Soldier_EP1"};
		hiddenSelectionsTextures[] = {"ca\wheeled_e\btr40\data\btr40ext_co.paa"};
	};
	class BTR40_TK_GUE_EP1: BTR40_base_EP1
	{
		scope = 2;
		side = 2;
		faction = "BIS_TK_GUE";
		crew = "TK_GUE_Soldier_EP1";
		typicalCargo[] = {"TK_GUE_Soldier_EP1","TK_GUE_Soldier_EP1","TK_GUE_Soldier_EP1","TK_GUE_Soldier_EP1"};
		hiddenSelectionsTextures[] = {"ca\wheeled_e\btr40\data\btr40ext_co.paa"};
	};
	class BTR40_MG_TK_INS_EP1: BTR40_MG_base_EP1
	{
		scope = 2;
		side = 0;
		faction = "BIS_TK_INS";
		crew = "TK_INS_Soldier_EP1";
		typicalCargo[] = {"TK_INS_Soldier_EP1","TK_INS_Soldier_EP1","TK_INS_Soldier_EP1","TK_INS_Soldier_EP1"};
		hiddenSelectionsTextures[] = {"ca\wheeled_e\btr40\data\btr40extcamo_co.paa"};
	};
	class BTR40_TK_INS_EP1: BTR40_base_EP1
	{
		scope = 2;
		side = 0;
		faction = "BIS_TK_INS";
		crew = "TK_INS_Soldier_EP1";
		typicalCargo[] = {"TK_INS_Soldier_EP1","TK_INS_Soldier_EP1","TK_INS_Soldier_EP1","TK_INS_Soldier_EP1"};
		hiddenSelectionsTextures[] = {"ca\wheeled_e\btr40\data\btr40extcamo_co.paa"};
	};
};
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		BTR40driver = "BTR40driver";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class BTR40driver: Crew
		{
			file = "\ca\wheeled_E\BTR40\Anims\btr40_driver.rtm";
		};
	};
};
//};

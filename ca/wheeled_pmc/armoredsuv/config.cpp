////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:07:21 2014 : Source 'file' date Fri Oct 31 06:07:21 2014
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

//Class WHEELED_PMC : armoredsuv\config.bin{
class CfgPatches
{
	class CAWheeled_PMC_ArmoredSUV
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.54;
		requiredAddons[] = {"CAWheeled_PMC"};
	};
};
class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class HitPoints
		{
			class HitLFWheel;
			class HitLBWheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitFuel;
			class HitEngine;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
		};
		class Turrets
		{
			class Mainturret;
		};
	};
	class ArmoredSUV_Base_PMC: Car
	{
		htMin = 60;
		htMax = 1800;
		afMax = 200;
		mfMax = 100;
		mFact = 1;
		tBody = 200;
		expansion = 4;
		displayName = "$STR_PMC_DN_SUV_ARMORED";
		model = "\Ca\Wheeled_PMC\ArmoredSUV\armoredSUV_PMC.p3d";
		icon = "\ca\Wheeled_PMC\data\ui\Icon_suv_minigun_PMC.paa";
		picture = "\ca\Wheeled_PMC\data\ui\Picture_suv_minigun_PMC_ca.paa";
		mapSize = 7;
		maxSpeed = 230;
		accuracy = 0.2;
		armor = 120;
		damageResistance = 0.03099;
		transportSoldier = 3;
		fuelCapacity = 130;
		weapons[] = {"MiniCarHorn"};
		driverAction = "SUV_Driver_EP1";
		cargoAction[] = {"SUV_Cargo_EP1","SUV_Cargo02_EP1","SUV_Cargo01_EP1"};
		outsideSoundFilter = 1;
		insideSoundCoef = 0.8;
		soundGear[] = {"",5.6234134e-005,1};
		soundGetIn[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_door",0.56234133,1};
		soundGetOut[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_door",0.56234133,1,20};
		soundEngineOnInt[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_int_start",0.17782794,1.0};
		soundEngineOnExt[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_start",0.17782794,1.0,100};
		soundEngineOffInt[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_int_stop",0.17782794,1.0};
		soundEngineOffExt[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_stop",0.17782794,1.0,100};
		buildCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_building_01",0.70794576,1,200};
		buildCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_building_02",0.70794576,1,200};
		buildCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_building_03",0.70794576,1,200};
		buildCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_building_04",0.70794576,1,200};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_01",0.70794576,1,200};
		WoodCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_02",0.70794576,1,200};
		WoodCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_03",0.70794576,1,200};
		WoodCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_04",0.70794576,1,200};
		WoodCrash4[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_05",0.70794576,1,200};
		WoodCrash5[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_06",0.70794576,1,200};
		soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166,"woodCrash4",0.166,"woodCrash5",0.166};
		ArmorCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_01",0.70794576,1,200};
		ArmorCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_02",0.70794576,1,200};
		ArmorCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_03",0.70794576,1,200};
		ArmorCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_04",0.70794576,1,200};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		class SoundEvents
		{
			class AccelerationIn
			{
				sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_int_accelerate_3_x",0.56234133,1.0};
				limit = "0.4";
				expression = "(engineOn*(1-camPos))*gmeterZ";
			};
			class AccelerationOut
			{
				sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_accelerate_3",0.56234133,1.0,200};
				limit = "0.4";
				expression = "(engineOn*camPos)*gmeterZ";
			};
		};
		class Sounds
		{
			class Engine
			{
				sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_low",0.17782794,1.4,100};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "camPos*engineOn*((rpm factor[0.3, 0.4]) min (rpm factor[0.7, 0.5]))";
			};
			class EngineHighOut
			{
				sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_high",1.0,0.8,300};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "camPos*engineOn*(rpm factor[0.5, 0.8])";
			};
			class IdleOut
			{
				sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_idle",0.56234133,1.0,100};
				frequency = "1";
				volume = "engineOn*camPos*(rpm factor[0.4, 0])";
			};
			class TiresRockOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2",0.31622776,1.0,30};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2",0.31622776,1.0,30};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass2",0.31622776,1.0,30};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2",0.31622776,1.0,30};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2",0.31622776,1.0,30};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3",0.31622776,1.0,30};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise2",0.1,1.0,30};
				frequency = "1";
				volume = "camPos*(damper0 max 0.03)*(speed factor[0, 8])";
			};
			class EngineLowIn
			{
				sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_int_low_x",0.31622776,1.4};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "(1-camPos)*engineOn*((rpm factor[0.3, 0.4]) min (rpm factor[0.7, 0.45]))";
			};
			class EngineHighIn
			{
				sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_int_high_x",1.0,0.8};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "(1-camPos)*engineOn*(rpm factor[0.5, 0.8])";
			};
			class IdleIn
			{
				sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_int_idle_x",0.31622776,1.0};
				frequency = "1";
				volume = "engineOn*(rpm factor[0.4, 0])*(1-camPos)";
			};
			class TiresRockIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2",0.31622776,1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2",0.31622776,1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass2",0.31622776,1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2",0.31622776,1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2",0.31622776,1.0};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3",0.31622776,1.0};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\int\noise2",0.17782794,1.0};
				frequency = "1";
				volume = "(damper0 max 0.03)*(speed factor[0, 8])*(1-camPos)";
			};
			class Movement
			{
				sound = "soundEnviron";
				frequency = "1";
				volume = "0";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: Mainturret
			{
				class ViewOptics;
			};
		};
		class AnimationSources;
		class HitPoints: HitPoints
		{
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
			class HitFuel: HitFuel
			{
				armor = 1;
				passThrough = 1;
			};
			class HitEngine: HitEngine
			{
				armor = 1;
				passThrough = 1;
			};
			class HitGlass1: HitGlass1
			{
				armor = 1;
			};
			class HitGlass2: HitGlass2
			{
				armor = 1;
			};
			class HitGlass3: HitGlass3
			{
				armor = 1;
			};
			class HitGlass4: HitGlass4
			{
				armor = 1;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\Wheeled_PMC\ArmoredSUV\data\SUV_body.rvmat","Ca\Wheeled_PMC\ArmoredSUV\data\SUV_body_damage.rvmat","Ca\Wheeled_PMC\ArmoredSUV\data\SUV_body_destruct.rvmat","Ca\Wheeled_PMC\ArmoredSUV\data\SUV_chrom.rvmat","Ca\Wheeled_PMC\ArmoredSUV\data\SUV_chrom_damage.rvmat","Ca\Wheeled_PMC\ArmoredSUV\data\SUV_chrom_destruct.rvmat","Ca\Wheeled_PMC\ArmoredSUV\data\SUV_glass.rvmat","Ca\Wheeled_PMC\ArmoredSUV\data\SUV_glass_damage.rvmat","Ca\Wheeled_PMC\ArmoredSUV\data\SUV_glass_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
		class Library
		{
			libTextDesc = "$STR_PMC_LIB_ARMOREDSUV";
		};
	};
	class ArmoredSUV_PMC: ArmoredSUV_Base_PMC
	{
		scope = 2;
		side = 2;
		faction = "PMC_BAF";
		crew = "Soldier_PMC";
		typicalCargo[] = {"Soldier_PMC","Soldier_PMC","Soldier_PMC","Soldier_PMC","Soldier_PMC"};
		transportMaxWeapons = 5000;
		transportMaxMagazines = 20000;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				body = "mainTurret";
				gun = "mainGun";
				viewGunnerInExternal = 1;
				minElev = -30;
				maxElev = 45;
				initElev = 0;
				soundServo[] = {"",0.01,1.0};
				animationSourceHatch = "";
				stabilizedInAxes = "StabilizedInAxesNone";
				gunBeg = "muzzle_1";
				gunEnd = "chamber_1";
				weapons[] = {"M134"};
				maxHorizontalRotSpeed = 1.8;
				maxVerticalRotSpeed = 1.8;
				magazines[] = {"2000Rnd_762x51_M134"};
				gunnerAction = "ArmoredSUV_Gunner_PMC";
			};
		};
		class AnimationSources: AnimationSources
		{
			class Revolving
			{
				source = "revolving";
				weapon = "M134";
			};
			class HideGun_01
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1.2;
			};
			class HideGun_02: HideGun_01{};
			class HideGun_03: HideGun_01{};
			class HideGun_04: HideGun_01{};
			class CloseCover1
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.7;
			};
			class CloseCover2: CloseCover1{};
		};
	};
	class ArmoredSUV_GunNotCommanding_PMC: ArmoredSUV_PMC
	{
		scope = 1;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				commanding = -2;
			};
		};
	};
};
//};

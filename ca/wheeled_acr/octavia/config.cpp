////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:07:19 2014 : Source 'file' date Fri Oct 31 06:07:19 2014
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

//Class wheeled_acr : octavia\config.bin{
class CfgPatches
{
	class CAWheeled_ACR_Octavia
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAWheeled_ACR"};
	};
};
class CfgVehicles
{
	class Land;
	class LandVehicle: Land
	{
		class HitPoints;
	};
	class Car: LandVehicle
	{
		class HitPoints
		{
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
		};
	};
	class Octavia_ACR: Car
	{
		scope = 2;
		model = "\CA\Wheeled_ACR\Octavia\Octavia_ACR.p3d";
		displayName = "$STR_ACR_DN_OCTAVIA";
		icon = "\Ca\Wheeled_ACR\Data\UI\Icon_Octavia_CA.paa";
		picture = "\Ca\Wheeled_ACR\Data\UI\Picture_Octavia_CA.paa";
		class Library
		{
			libTextDesc = "$STR_ACR_LIB_OCTAVIA";
		};
		side = 3;
		faction = "CIV";
		vehicleClass = "Car";
		crew = "Citizen1";
		typicalCargo[] = {"Citizen1","Citizen2","Citizen3","Citizen4"};
		DriverAction = "Golf_Driver";
		cargoAction[] = {"Golf_Cargo01","Golf_Cargo02","Golf_Cargo02"};
		cargoIsCoDriver[] = {0};
		transportSoldier = 3;
		weapons[] = {"SportCarHorn"};
		magazines[] = {};
		class Turrets{};
		maxSpeed = 200;
		terrainCoef = 6.0;
		turnCoef = 2;
		steerAheadPlan = 0.15;
		wheelCircumference = 2.02;
		rarityUrban = 0.9;
		armor = 20;
		damageResistance = 0.01511;
		cost = 5000;
		fuelCapacity = 50;
		HiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Ca\Wheeled_ACR\Octavia\Data\car_body_co.paa"};
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				armor = 0.3;
				name = "wheel_1_1_steering";
			};
			class HitLBWheel: HitLBWheel
			{
				armor = 0.3;
			};
			class HitRFWheel: HitRFWheel
			{
				armor = 0.3;
				name = "wheel_2_1_steering";
			};
			class HitRBWheel: HitRBWheel
			{
				armor = 0.3;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"CA\Wheeled_ACR\Octavia\Data\car_body1.rvmat","CA\Wheeled_ACR\Octavia\Data\car_body1_damage.rvmat","CA\Wheeled_ACR\Octavia\Data\car_body1_destruct.rvmat","CA\Wheeled_ACR\Octavia\Data\car_body.rvmat","CA\Wheeled_ACR\Octavia\Data\car_body_damage.rvmat","CA\Wheeled_ACR\Octavia\Data\car_body_destruct.rvmat","CA\Wheeled_ACR\Octavia\Data\car_chrom.rvmat","CA\Wheeled_ACR\Octavia\Data\car_chrom_damage.rvmat","CA\Wheeled_ACR\Octavia\Data\car_chrom_destruct.rvmat","CA\Wheeled_ACR\Octavia\Data\car_glass.rvmat","CA\Wheeled_ACR\Octavia\Data\car_glass_damage.rvmat","CA\Wheeled_ACR\Octavia\Data\car_glass_destruct.rvmat","CA\Wheeled_ACR\Octavia\Data\car_interier.rvmat","CA\Wheeled_ACR\Octavia\Data\car_interier_damage.rvmat","CA\Wheeled_ACR\Octavia\Data\car_interier_destruct.rvmat"};
		};
		soundGear[] = {"",0.00017782794,1};
		insideSoundCoef = 0.9;
		SoundGetIn[] = {"ca\Sounds_ACR\wheeled\Skoda\dvere",0.56234133,1};
		SoundGetOut[] = {"ca\Sounds_ACR\wheeled\Skoda\dvere",0.56234133,1,40};
		soundEngineOnInt[] = {"ca\Sounds_ACR\wheeled\Skoda\skoda_int_start",0.56234133,1.0};
		soundEngineOnExt[] = {"ca\Sounds_ACR\wheeled\Skoda\skoda_ext_start",0.56234133,1.0,250};
		soundEngineOffInt[] = {"ca\Sounds_ACR\wheeled\Skoda\skoda_int_stop",0.56234133,1.0};
		soundEngineOffExt[] = {"ca\Sounds_ACR\wheeled\Skoda\skoda_ext_stop",0.56234133,1.0,250};
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
				sound[] = {"ca\Sounds_ACR\wheeled\Skoda\skoda_int_acce2",1.0,1.0};
				limit = "0.15";
				expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
			class AccelerationOut
			{
				sound[] = {"ca\Sounds_ACR\wheeled\Skoda\skoda_ext_acce2",1.0,1.0,200};
				limit = "0.15";
				expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
		};
		class Sounds
		{
			class Engine
			{
				sound[] = {"ca\Sounds_ACR\wheeled\Skoda\skoda_ext_mid2",1.0,1.0,200};
				frequency = "(1.0+rpm)*0.3";
				volume = "engineOn*camPos*((rpm factor[0.3, 0.4])+ (rpm factor[0.8, 0.5]))";
			};
			class EngineHighOut
			{
				sound[] = {"ca\Sounds_ACR\wheeled\Skoda\skoda_ext_high",1.0,1.0,250};
				frequency = "(1.0+rpm)*0.3";
				volume = "engineOn*camPos*(rpm factor[0.3, 0.8])";
			};
			class IdleOut
			{
				sound[] = {"ca\Sounds_ACR\wheeled\Skoda\skoda_ext_idle",1.0,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*(rpm factor[0.4, 0.0])";
			};
			class TiresRockOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2",0.056234132,1.0,40};
				frequency = "1";
				volume = "camPos*rock*(speed factor[4, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2",0.056234132,1.0,40};
				frequency = "1";
				volume = "camPos*sand*(speed factor[4, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3",0.056234132,1.0,40};
				frequency = "1";
				volume = "camPos*grass*(speed factor[4, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2",0.056234132,1.0,40};
				frequency = "1";
				volume = "camPos*mud*(speed factor[4, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2",0.056234132,1.0,40};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[4, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3",0.056234132,1.0,40};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[4, 20])";
			};
			class NoiseOut
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\Noises\ext\noise2",0.017782794,1.0,40};
				frequency = "1";
				volume = "camPos*(damper0 max 0.036)*(speed factor[0, 8])";
			};
			class EngineLowIn
			{
				sound[] = {"ca\Sounds_ACR\wheeled\Skoda\skoda_int_mid2",0.70794576,1.0};
				frequency = "(1.0+rpm)*0.3";
				volume = "(1-camPos)*engineOn*((rpm factor[0.3, 0.4])+ (rpm factor[0.8, 0.5]))";
			};
			class EngineHighIn
			{
				sound[] = {"ca\Sounds_ACR\wheeled\Skoda\skoda_int_high",0.70794576,1.0};
				frequency = "(1.0+rpm)*0.3";
				volume = "(1-camPos)*engineOn*(rpm factor[0.3, 0.8])";
			};
			class IdleIn
			{
				sound[] = {"ca\Sounds_ACR\wheeled\Skoda\skoda_int_idle",1.0,1.0};
				frequency = "1";
				volume = "(1-camPos)*engineOn*(rpm factor[0.4, 0.0])";
			};
			class TiresRockIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2",0.017782794,1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2",0.017782794,1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass3",0.017782794,1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2",0.017782794,1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2",0.017782794,1.0};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3",0.017782794,1.0};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\Noises\int\noise3",0.017782794,1.0};
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
	};
};
//};

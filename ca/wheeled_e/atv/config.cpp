////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:13:31 2014 : Source 'file' date Fri Oct 31 06:13:31 2014
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

//Class wheeled_e : atv\config.bin{
class CfgPatches
{
	class CAWheeled_E_ATV
	{
		units[] = {"ATV_US_EP1","ATV_CZ_EP1"};
		weapons[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {"CAWheeled_E"};
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
	class ATV_Base_EP1: Car
	{
		expansion = 1;
		brakeDistance = 8.5;
		htMin = 60;
		htMax = 1800;
		afMax = 100;
		mfMax = 80;
		mFact = 0;
		tBody = 0;
		scope = 0;
		displayName = "$STR_EP1_DN_ATV_Base_EP1";
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_ATV";
		};
		model = "\ca\wheeled_e\ATV\ATV.p3d";
		armor = 30;
		damageResistance = 0.00913;
		threat[] = {0.0,0.0,0.0};
		HiddenSelections[] = {"camo1","camo2"};
		HiddenSelectionsTextures[] = {"ca\wheeled_e\atv\data\atv_co.paa","ca\wheeled_e\atv\data\atv_detail_co.paa"};
		outsideSoundFilter = 0;
		insideSoundCoef = 1;
		soundGear[] = {"",5.6234134e-005,1};
		soundGetIn[] = {"ca\Sounds_E\Wheeled_E\ATV\ATV_ext_gearshift",0.56234133,1};
		soundGetOut[] = {"ca\Sounds_E\Wheeled_E\ATV\ATV_ext_gearshift",0.56234133,1,20};
		soundEngineOnInt[] = {"ca\Sounds_E\Wheeled_E\ATV\ATV_ext_start",0.17782794,1.0};
		soundEngineOnExt[] = {"ca\Sounds_E\Wheeled_E\ATV\ATV_ext_start",0.17782794,1.0,100};
		soundEngineOffInt[] = {"ca\Sounds_E\Wheeled_E\ATV\ATV_ext_stop",0.17782794,1.0};
		soundEngineOffExt[] = {"ca\Sounds_E\Wheeled_E\ATV\ATV_ext_stop",0.17782794,1.0,100};
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
				sound[] = {"ca\Sounds_E\Wheeled_E\ATV\ATV_ext_acceleration_1",1.0,1.0};
				limit = "0.4";
				expression = "(engineOn*(1-camPos))*gmeterZ";
			};
			class AccelerationOut
			{
				sound[] = {"ca\Sounds_E\Wheeled_E\ATV\ATV_ext_acceleration_1",1.0,1.0,200};
				limit = "0.4";
				expression = "(engineOn*camPos)*gmeterZ";
			};
		};
		class Sounds
		{
			class Engine
			{
				sound[] = {"ca\Sounds_E\Wheeled_E\ATV\ATV_ext_high_1",1.0,1.2,200};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "camPos*engineOn*((rpm factor[0.3, 0.4]) min (rpm factor[0.6, 0.45]))";
			};
			class EngineHighOut
			{
				sound[] = {"ca\Sounds_E\Wheeled_E\ATV\ATV_ext_high",1.0,1.0,400};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "camPos*engineOn*(rpm factor[0.5, 0.8])";
			};
			class IdleOut
			{
				sound[] = {"ca\Sounds_E\Wheeled_E\ATV\ATV_ext_idle_2",0.56234133,1.0,100};
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
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise2",0.17782794,1.0,30};
				frequency = "1";
				volume = "camPos*(damper0 max 0.03)*(speed factor[0, 8])";
			};
			class EngineLowIn
			{
				sound[] = {"ca\Sounds_E\Wheeled_E\ATV\ATV_ext_high_1",0.31622776,1.2};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "(1-camPos)*engineOn*((rpm factor[0.3, 0.5]) min (rpm factor[0.6, 0.45]))";
			};
			class EngineHighIn
			{
				sound[] = {"ca\Sounds_E\Wheeled_E\ATV\ATV_ext_high",1.0,0.9};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "(1-camPos)*engineOn*(rpm factor[0.45, 0.8])";
			};
			class IdleIn
			{
				sound[] = {"ca\Sounds_E\Wheeled_E\ATV\ATV_ext_idle_2",0.31622776,1.0};
				frequency = "1";
				volume = "engineOn*(rpm factor[0.4, 0])*(1-camPos)";
			};
			class TiresRockIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2",1.0,1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2",1.0,1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass2",1.0,1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2",1.0,1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2",1.0,1.0};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3",1.0,1.0};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise2",0.4466836,1.0};
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
		transportSoldier = 1;
		icon = "\CA\wheeled_e\Data\UI\Icon_atv_CA.paa";
		picture = "\CA\wheeled_e\Data\UI\Picture_atv_CA.paa";
		mapSize = 2.5;
		wheelSteeringSensitivity = 0.8;
		fuelCapacity = 30;
		turnCoef = 1.5;
		ejectDeadCargo = 1;
		ejectDeadDriver = 1;
		class Turrets{};
		hideWeaponsDriver = 0;
		hideWeaponsCargo = 0;
		weapons[] = {"MiniCarHorn"};
		magazines[] = {};
		maxSpeed = 100;
		damperSize = 0.05;
		damperForce = 3;
		driverAction = "ATV_Driver_EP1";
		CargoAction[] = {"ATV_Cargo_EP1"};
		extCameraPosition[] = {0,1,-4.5};
		class HitPoints: HitPoints
		{
			class HitEngine
			{
				armor = 2;
				material = -1;
				name = "motor";
				visual = "motor";
				passThrough = 0;
			};
			class HitFuel
			{
				armor = 1;
				material = -1;
				name = "palivo";
				passThrough = 0;
			};
			class HitLFWheel: HitLFWheel
			{
				armor = 1;
			};
			class HitLBWheel: HitLBWheel
			{
				armor = 1;
			};
			class HitRFWheel: HitRFWheel
			{
				armor = 1;
			};
			class HitRBWheel: HitRBWheel
			{
				armor = 1;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat","Ca\wheeled_E\ATV\data\ATV_body.rvmat","Ca\wheeled_E\ATV\data\ATV_body_damage.rvmat","Ca\wheeled_E\ATV\data\ATV_body_destruct.rvmat","Ca\wheeled_E\ATV\data\ATV_detail.rvmat","Ca\wheeled_E\ATV\data\ATV_detail_damage.rvmat","Ca\wheeled_E\ATV\data\ATV_detail_destruct.rvmat"};
		};
	};
	class ATV_US_EP1: ATV_Base_EP1
	{
		scope = 2;
		side = 1;
		faction = "BIS_US";
		crew = "US_Soldier_EP1";
		typicalCargo[] = {"US_Soldier_EP1","US_Soldier_EP1"};
	};
	class ATV_CZ_EP1: ATV_Base_EP1
	{
		scope = 2;
		side = 1;
		faction = "BIS_CZ";
		crew = "CZ_Soldier_DES_EP1";
		typicalCargo[] = {"CZ_Soldier_DES_EP1","CZ_Soldier_DES_EP1"};
	};
};
//};

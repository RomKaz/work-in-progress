////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:13:37 2014 : Source 'file' date Fri Oct 31 06:13:37 2014
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

//Class wheeled_e : s1203\config.bin{
class CfgPatches
{
	class CAWheeled_E_s1203
	{
		units[] = {"s1203","s1203_ambulance","s1203_funeral"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAWheeled2","CACharacters2","CAWeapons"};
	};
};
class CfgVehicles
{
	class Land;
	class LandVehicle: Land
	{
		class Reflectors
		{
			class Left;
			class Right;
		};
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
	};
	class S1203_TK_CIV_EP1: Car
	{
		brakeDistance = 8.5;
		expansion = 1;
		htMin = 60;
		htMax = 1800;
		afMax = 200;
		mfMax = 100;
		mFact = 0;
		tBody = 0;
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				armor = 0.2;
			};
			class HitLBWheel: HitLBWheel
			{
				armor = 0.2;
			};
			class HitRFWheel: HitRFWheel
			{
				armor = 0.2;
			};
			class HitRBWheel: HitRBWheel
			{
				armor = 0.2;
			};
		};
		wheelCircumference = 2.02;
		scope = 2;
		model = "\ca\wheeled_E\s1203\s1203.p3d";
		icon = "\ca\wheeled_e\data\UI\Icon_s1203_CA.paa";
		picture = "\ca\wheeled_e\data\UI\Picture_s1203_CA.paa";
		displayname = "$STR_EP1_DN_S1203_TK_CIV_EP1";
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_S1203_TK_CIV";
		};
		side = 3;
		faction = "BIS_TK_CIV";
		vehicleClass = "Car";
		crew = "TK_CIV_Takistani01_EP1";
		typicalCargo[] = {"TK_CIV_Takistani01_EP1"};
		maxSpeed = 105;
		terrainCoef = 3.0;
		turnCoef = 2;
		steerAheadPlan = 0.15;
		transportSoldier = 5;
		threat[] = {0.0,0.0,0.0};
		weapons[] = {"CarHorn"};
		magazines[] = {};
		class Turrets{};
		armor = 20;
		damageResistance = 0.01511;
		cost = 3000;
		fuelCapacity = 60;
		memoryPointsGetInCargo[] = {"pos cargo 1","pos cargo 2","pos cargo 3","pos cargo 4","pos cargo 5"};
		memoryPointsGetInCargoDir[] = {"pos cargo dir 1","pos cargo dir 2","pos cargo dir 3","pos cargo dir 4","pos cargo dir 5"};
		DriverAction = "S1203_driver_EP1";
		cargoAction[] = {"S1203_Cargo_EP1","S1203_Cargo02_EP1","S1203_Cargo01_EP1","S1203_cargo03_EP1"};
		cargoIsCoDriver[] = {0};
		outsideSoundFilter = 1;
		insideSoundCoef = 0.85;
		soundGear[] = {"",5.6234134e-005,1};
		soundGetIn[] = {"\ca\Sounds_E\Wheeled_E\lada\lada_door",1.0,1};
		soundGetOut[] = {"\ca\Sounds_E\Wheeled_E\lada\lada_door",1.0,1,30};
		soundEngineOnInt[] = {"\ca\Sounds_E\Wheeled_E\lada\lada_int_start",1.0,1.0};
		soundEngineOnExt[] = {"\ca\Sounds_E\Wheeled_E\lada\lada_ext_start",1.0,1.0,100};
		soundEngineOffInt[] = {"\ca\Sounds_E\Wheeled_E\lada\lada_int_stop",1.0,1.0};
		soundEngineOffExt[] = {"\ca\Sounds_E\Wheeled_E\lada\lada_ext_stop",1.0,1.0,100};
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
				sound[] = {"\ca\Sounds_E\Wheeled_E\lada\lada_int_acceleration",0.56234133,1.0};
				limit = "0.15";
				expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
			class AccelerationOut
			{
				sound[] = {"\ca\Sounds_E\Wheeled_E\lada\lada_ext_acceleration",0.56234133,1.0,300};
				limit = "0.15";
				expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
		};
		class Sounds
		{
			class Engine
			{
				sound[] = {"\ca\Sounds_E\Wheeled_E\lada\lada_ext_low",1.4125376,0.6,200};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "camPos*engineOn*((rpm factor[0.3, 0.4]) min (rpm factor[0.7, 0.5]))";
			};
			class EngineHighOut
			{
				sound[] = {"\ca\Sounds_E\Wheeled_E\lada\lada_ext_mid",1.4125376,0.6,300};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "camPos*engineOn*(rpm factor[0.5, 0.8])";
			};
			class IdleOut
			{
				sound[] = {"\ca\Sounds_E\Wheeled_E\lada\lada_ext_idle",0.56234133,1.0,100};
				frequency = "1";
				volume = "engineOn*camPos*(rpm factor[0.4, 0])";
			};
			class TiresRockOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2",0.1,1.0,50};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2",0.1,1.0,50};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3",0.1,1.0,50};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2",0.1,1.0,50};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2",0.1,1.0,50};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3",0.1,1.0,50};
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
				sound[] = {"\ca\Sounds_E\Wheeled_E\lada\lada_int_low",1.4125376,0.6};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "(1-camPos)*engineOn*((rpm factor[0.3, 0.4]) min (rpm factor[0.7, 0.5]))";
			};
			class EngineHighIn
			{
				sound[] = {"\ca\Sounds_E\Wheeled_E\lada\lada_int_mid",1.4125376,0.6};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "(1-camPos)*engineOn*(rpm factor[0.5, 0.8])";
			};
			class IdleIn
			{
				sound[] = {"\ca\Sounds_E\Wheeled_E\lada\lada_int_idle",0.7943282,1.0};
				frequency = "1";
				volume = "engineOn*(rpm factor[0.4, 0])*(1-camPos)";
			};
			class TiresRockIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2",0.1,1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2",0.1,1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass3",0.1,1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2",0.1,1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2",0.1,1.0};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3",0.1,1.0};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\int\noise4",0.31622776,1.0};
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
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\wheeled_E\s1203\Data\s1203_mat.rvmat","ca\wheeled_E\s1203\Data\s1203_mat_damage.rvmat","ca\wheeled_E\s1203\Data\s1203_mat_destruct.rvmat","ca\wheeled_E\s1203\Data\s1203_glass.rvmat","ca\wheeled_E\s1203\Data\s1203_glass_damage.rvmat","ca\wheeled_E\s1203\Data\s1203_glass_damage.rvmat","ca\wheeled_E\s1203\Data\s1203_glass_in.rvmat","ca\wheeled_E\s1203\Data\s1203_glass_in_damage.rvmat","ca\wheeled_E\s1203\Data\s1203_glass_in_damage.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
		rarityUrban = 0.9;
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"ca\wheeled_e\s1203\data\s1203_co.paa","ca\wheeled_e\s1203\data\s1203_glass_ca.paa"};
	};
	class S1203_ambulance_EP1: S1203_TK_CIV_EP1
	{
		wheelCircumference = 2.02;
		scope = 2;
		model = "\ca\wheeled_E\s1203\s1203_ambulance.p3d";
		icon = "\ca\wheeled_e\data\UI\Icon_s1203_amb_CA.paa";
		displayname = "$STR_EP1_DN_S1203_ambulance_EP1";
		side = 3;
		faction = "BIS_TK_CIV";
		vehicleClass = "Support";
		crew = "TK_CIV_Takistani01_EP1";
		typicalCargo[] = {"TK_CIV_Takistani01_EP1"};
		cargoAction[] = {"S1203_Cargo_EP1","BMP2_Cargo04"};
		transportSoldier = 3;
		attendant = 1;
		memoryPointSupply = "pos cargo dir 4";
		class Reflectors: Reflectors
		{
			class Left: Left{};
			class Right: Right{};
			class Majak1
			{
				color[] = {0.1,0.2,0.8,1.0};
				ambient[] = {0.01,0.01,0.1,1.0};
				position = "majak ligth 1 start";
				direction = "majak ligth 1 end";
				hitpoint = "";
				selection = "";
				size = 0.5;
				brightness = 0.5;
			};
			class Majak2: Majak1
			{
				position = "majak ligth 2 start";
				direction = "majak ligth 2 end";
				hitpoint = "";
				selection = "";
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\wheeled_E\s1203\Data\s1203_mat.rvmat","ca\wheeled_E\s1203\Data\s1203_mat_damage.rvmat","ca\wheeled_E\s1203\Data\s1203_mat_destruct.rvmat","ca\wheeled_E\s1203\Data\s1203_glass.rvmat","ca\wheeled_E\s1203\Data\s1203_glass_damage.rvmat","ca\wheeled_E\s1203\Data\s1203_glass_damage.rvmat","ca\wheeled_E\s1203\Data\s1203_glass_in.rvmat","ca\wheeled_E\s1203\Data\s1203_glass_in_damage.rvmat","ca\wheeled_E\s1203\Data\s1203_glass_in_damage.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
		hiddenSelectionsTextures[] = {"ca\wheeled_e\s1203\data\s1203_ambulance_co.paa","ca\wheeled_e\s1203\data\s1203_glass3_ca.paa"};
	};
};
//};

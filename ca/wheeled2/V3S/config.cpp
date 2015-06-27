////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:07:15 2014 : Source 'file' date Fri Oct 31 06:07:15 2014
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

//Class wheeled2 : V3S\config.bin{
class CfgPatches
{
	class CAWheeled2_V3S
	{
		units[] = {"V3S_Civ","V3S_Gue"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAWheeled2","CACharacters2","CAWeapons"};
	};
};
class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class HitPoints;
	};
	class Truck: Car
	{
		class HitPoints: HitPoints
		{
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
		};
	};
	class V3S_Base: Truck
	{
		scope = 0;
		model = "\ca\wheeled2\V3S\V3S.p3d";
		icon = "\ca\wheeled2\data\UI\Icon_V3S_CA.paa";
		picture = "\ca\wheeled2\data\UI\Picture_V3S_CA.paa";
		displayname = "$STR_DN_V3S";
		class Library
		{
			libTextDesc = "$STR_LIB_V3S";
		};
		mapSize = 9;
		maxSpeed = 80;
		wheelCircumference = 2.94;
		turnCoef = 3.7;
		steerAheadSimul = 0.5;
		steerAheadPlan = 0.38;
		accuracy = 0.3;
		transportAmmo = 0;
		transportRepair = 0;
		armor = 40;
		damageResistance = 0.00231;
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				armor = 0.15;
				name = "wheel_1_1_steering";
			};
			class HitLBWheel: HitLBWheel
			{
				armor = 0.15;
			};
			class HitLMWheel: HitLMWheel
			{
				armor = 0.15;
			};
			class HitRFWheel: HitRFWheel
			{
				armor = 0.15;
				name = "wheel_2_1_steering";
			};
			class HitRBWheel: HitRBWheel
			{
				armor = 0.15;
			};
			class HitRMWheel: HitRMWheel
			{
				armor = 0.15;
			};
		};
		enableGPS = 0;
		weapons[] = {"TruckHorn"};
		magazines[] = {};
		transportSoldier = 13;
		DriverAction = "V3S_Driver";
		cargoAction[] = {"V3S_Cargo01","Truck_Cargo04","Truck_Cargo01","Truck_Cargo01","Truck_Cargo04","Truck_Cargo02","Truck_Cargo02","Truck_Cargo04","Truck_Cargo01","Truck_Cargo01","Truck_Cargo02","Truck_Cargo02","Truck_Cargo04"};
		cargoIsCoDriver[] = {1,0,0};
		getInAction = "GetInHigh";
		getOutAction = "GetOutHigh";
		insideSoundCoef = 0.9;
		soundGear[] = {"",5.6234134e-005,1};
		soundEngineOnInt[] = {"ca\sounds\vehicles\Wheeled\V3S\int\int-V3S-start-1",0.56234133,1.0};
		soundEngineOnExt[] = {"ca\sounds\vehicles\Wheeled\V3S\ext\ext-V3S-start-1",0.56234133,1.0,300};
		soundEngineOffInt[] = {"ca\sounds\vehicles\Wheeled\V3S\int\int-V3S-stop-1",0.56234133,1.0};
		soundEngineOffExt[] = {"ca\sounds\vehicles\Wheeled\V3S\ext\ext-V3S-stop-1",0.56234133,1.0,300};
		soundGetIn[] = {"ca\sounds\vehicles\Wheeled\V3S\ext\ext-V3S-getout-1",0.4466836,1};
		soundGetOut[] = {"ca\sounds\vehicles\Wheeled\V3S\ext\ext-V3S-getout-1",0.4466836,1,40};
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
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\V3S\int\int-V3S-acce-1",0.7943282,1.0};
				limit = "0.15";
				expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
			class AccelerationOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\V3S\ext\ext-V3S-acce-1",0.7943282,1.0,350};
				limit = "0.15";
				expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
		};
		class Sounds
		{
			class Engine
			{
				sound[] = {"\ca\sounds\Vehicles\Wheeled\V3S\ext\ext-V3S-low-1",0.70794576,1.0,400};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "camPos*engineOn*((rpm factor[0.2, 0.6]) min (rpm factor[0.6, 0.2]))";
			};
			class EngineHighOut
			{
				sound[] = {"\ca\sounds\Vehicles\Wheeled\V3S\ext\ext-V3S-high-1",0.70794576,0.9,500};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "camPos*engineOn*(rpm factor[0.5, 0.9])";
			};
			class IdleOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\V3S\ext\ext-V3S-idle-2",0.70794576,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*(rpm factor[0.4, 0])";
			};
			class TiresRockOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2",0.1,1.0,40};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2",0.1,1.0,40};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3",0.1,1.0,40};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2",0.1,1.0,40};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2",0.1,1.0,40};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3",0.1,1.0,40};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise2",0.1,1.0,40};
				frequency = "1";
				volume = "camPos*(damper0 max 0.04)*(speed factor[0, 8])";
			};
			class EngineLowIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\V3S\int\int-V3S-low-1",0.39810717,1.0};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "(1-camPos)*engineOn*((rpm factor[0.2, 0.4]) min (rpm factor[0.7, 0.5]))";
			};
			class EngineHighIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\V3S\int\int-V3S-high-1",0.39810717,0.8};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "(1-camPos)*engineOn*(rpm factor[0.5, 0.8])";
			};
			class IdleIn
			{
				sound[] = {"\ca\sounds\Vehicles\Wheeled\V3S\int\int-V3S-idle-2",0.39810717,1.0};
				frequency = "1";
				volume = "(1-camPos)*engineOn*(rpm factor[0.35, 0])";
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
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\int\noise2",0.1,1.0};
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
		class Turrets{};
		class Reflectors
		{
			class Left
			{
				color[] = {0.9,0.8,0.8,1.0};
				ambient[] = {0.1,0.1,0.1,1.0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
				brightness = 0.5;
			};
			class Right
			{
				color[] = {0.9,0.8,0.8,1.0};
				ambient[] = {0.1,0.1,0.1,1.0};
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 0.5;
				brightness = 0.5;
			};
		};
		memoryPointExhaust = "vyfuk 1 start";
		memoryPointExhaustDir = "vyfuk 1 konec";
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\wheeled2\v3s\data\v3s_intkor.rvmat","ca\wheeled2\v3s\data\v3s_intkor_damage.rvmat","ca\wheeled2\v3s\data\v3s_intkor_destruct.rvmat","ca\wheeled2\v3s\data\v3s_kabpar.rvmat","ca\wheeled2\v3s\data\v3s_kabpar_damage.rvmat","ca\wheeled2\v3s\data\v3s_kabpar_destruct.rvmat","ca\wheeled2\v3s\data\auta_skla.rvmat","ca\wheeled2\v3s\data\auta_skla_damage.rvmat","ca\wheeled2\v3s\data\auta_skla_damage.rvmat","ca\wheeled2\v3s\data\auta_skla_in.rvmat","ca\wheeled2\v3s\data\auta_skla_in_damage.rvmat","ca\wheeled2\v3s\data\auta_skla_in_damage.rvmat","ca\wheeled2\v3s\data\v3s_kabpar_destruct.rvmat","ca\wheeled2\v3s\data\v3s_koloint02_damage.rvmat","ca\wheeled2\v3s\data\v3s_koloint02_destruct.rvmat"};
		};
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\ca\wheeled2\v3s\data\v3s_kabpar_co.paa","\ca\wheeled2\v3s\data\v3s_intkor_co.paa"};
		rarityUrban = -1;
	};
};
//};

////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:07:12 2014 : Source 'file' date Fri Oct 31 06:07:12 2014
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

//Class wheeled2 : Ikarus\config.bin{
class CfgPatches
{
	class CAWheeled2_Ikarus
	{
		units[] = {"Ikarus"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAWheeled2"};
	};
};
class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class HitPoints
		{
			class HitGlass1;
		};
		class AnimationSources
		{
			class HitGlass1;
		};
	};
	class Ikarus: Car
	{
		wheelCircumference = 3.233;
		weapons[] = {"TruckHorn2"};
		scope = 0;
		faction = "CIV";
		side = 3;
		model = "\ca\Wheeled2\ikarus\ikarus";
		picture = "\Ca\wheeled\data\ico\bus_city_CA.paa";
		Icon = "\Ca\wheeled\data\map_ico\icomap_Bus_CA.paa";
		mapSize = 11;
		crew = "Citizen1";
		typicalCargo[] = {"Profiteer2"};
		displayName = "$STR_DN_BUS_CITY";
		class Library
		{
			libTextDesc = "$STR_LIB_BUS_CITY";
		};
		class HitPoints: HitPoints
		{
			class HitGlass5: HitGlass1
			{
				name = "glass5";
				visual = "glass5";
			};
			class HitGlass6: HitGlass1
			{
				name = "glass6";
				visual = "glass6";
			};
		};
		class AnimationSources: AnimationSources
		{
			class HitGlass5: HitGlass1
			{
				hitpoint = "HitGlass5";
			};
			class HitGlass6: HitGlass1
			{
				hitpoint = "HitGlass6";
			};
		};
		insideSoundCoef = 0.9;
		soundGear[] = {"",5.6234134e-005,1};
		soundGetIn[] = {"ca\sounds\vehicles\Wheeled\BUS\ext\ext-bus-getout-1",1.0,1};
		soundGetOut[] = {"ca\sounds\vehicles\Wheeled\BUS\ext\ext-bus-getout-1",1.0,1,40};
		soundEngineOnInt[] = {"ca\sounds\vehicles\Wheeled\BUS\int\int-bus-start-1",0.56234133,1.0};
		soundEngineOnExt[] = {"ca\sounds\vehicles\Wheeled\BUS\ext\ext-bus-start-1",0.56234133,1.0,280};
		soundEngineOffInt[] = {"ca\sounds\vehicles\Wheeled\BUS\int\int-bus-stop-1",0.56234133,1.0};
		soundEngineOffExt[] = {"ca\sounds\vehicles\Wheeled\BUS\ext\ext-bus-stop-1",0.56234133,1.0,280};
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
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\BUS\int\int-bus-acce-1",0.56234133,1.0};
				limit = "0.15";
				expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
			class AccelerationOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\BUS\ext\ext-bus-acce-1",0.56234133,1.0,280};
				limit = "0.15";
				expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
		};
		class Sounds
		{
			class Engine
			{
				sound[] = {"\ca\sounds\Vehicles\Wheeled\BUS\ext\ext-bus-low-2",1.0,1.0,350};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "engineOn*camPos*(thrust factor[0.7, 0.2])";
			};
			class EngineHighOut
			{
				sound[] = {"\ca\sounds\Vehicles\Wheeled\BUS\ext\ext-bus-high-4",1.0,1.0,450};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "engineOn*camPos*(thrust factor[0.5, 0.9])";
			};
			class IdleOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\BUS\ext\ext-bus-idle-1",0.31622776,1.0,150};
				frequency = "1";
				volume = "engineOn*camPos*(rpm factor[0.4, 0])";
			};
			class TiresRockOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2",0.17782794,1.0,30};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2",0.17782794,1.0,30};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3",0.17782794,1.0,30};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2",0.17782794,1.0,30};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2",0.17782794,1.0,30};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3",0.056234132,1.0,30};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\ext-noise3",0.17782794,1.0,30};
				frequency = "1";
				volume = "camPos*(damper0 max 0.04)*(speed factor[0, 8])";
			};
			class EngineLowIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\BUS\int\int-bus-low-2",1.0,1.0};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "((engineOn*thrust) factor[0.65, 0.2])*(1-camPos)";
			};
			class EngineHighIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\BUS\int\int-bus-high-4",1.0,0.95};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "((engineOn*thrust) factor[0.55, 1.0])*(1-camPos)";
			};
			class IdleIn
			{
				sound[] = {"\ca\sounds\Vehicles\Wheeled\BUS\int\int-bus-idle-1",0.56234133,1.0};
				frequency = "1";
				volume = "engineOn*(rpm factor[0.3, 0])*(1-camPos)";
			};
			class TiresRockIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2",0.17782794,1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2",0.17782794,1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass3",0.17782794,1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2",0.17782794,1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2",0.17782794,1.0};
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
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\int\int-noise3",0.31622776,1.0};
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
		maxSpeed = 80;
		turnCoef = 3.7;
		steerAheadSimul = 0.5;
		steerAheadPlan = 0.38;
		driverAction = "Ikarus_Driver";
		terrainCoef = 5.0;
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\wheeled2\Ikarus\Data\Bus_exterior.rvmat","ca\wheeled2\Ikarus\Data\Bus_exterior_damage.rvmat","ca\wheeled2\Ikarus\Data\Bus_exterior_destruct.rvmat","ca\wheeled2\Ikarus\Data\Bus_interior.rvmat","ca\wheeled2\Ikarus\Data\Bus_interior_damage.rvmat","ca\wheeled2\Ikarus\Data\Bus_interior_destruct.rvmat","ca\wheeled2\Ikarus\Data\Bus_windows.rvmat","ca\wheeled2\Ikarus\Data\Bus_windows_damage.rvmat","ca\wheeled2\Ikarus\Data\Bus_windows_damage.rvmat","ca\wheeled2\Ikarus\Data\Bus_windows_in.rvmat","ca\wheeled2\Ikarus\Data\Bus_windows_in_damage.rvmat","ca\wheeled2\Ikarus\Data\Bus_windows_in_damage.rvmat"};
		};
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\ca\wheeled2\ikarus\data\bus_exterior_co.paa"};
		cargoAction[] = {"Truck_Cargo01","Truck_Cargo01","Truck_Cargo01","Truck_Cargo01","Truck_Cargo01","Truck_Cargo01","Truck_Cargo01","Truck_Cargo01","Truck_Cargo02","Truck_Cargo02","Truck_Cargo02","Truck_Cargo02","Truck_Cargo03","Truck_Cargo03","Truck_Cargo04","Truck_Cargo04","Truck_Cargo04","Truck_Cargo04","Truck_Cargo04","Ikarus_Cargo","Ikarus_Cargo","Ikarus_Cargo","Ikarus_Cargo"};
		transportSoldier = 23;
		hasGunner = 0;
		class Turrets{};
		rarityUrban = 0.9;
	};
};
//};

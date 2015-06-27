////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:07:14 2014 : Source 'file' date Fri Oct 31 06:07:14 2014
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

//Class wheeled2 : Lada\config.bin{
class CfgPatches
{
	class CAWheeled2_LADA
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.02;
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
		class HitPoints;
	};
	class Lada_base: Car
	{
		wheelCircumference = 1.866;
		scope = 1;
		model = "\CA\wheeled2\Lada\Lada.p3d";
		picture = "\Ca\wheeled2\data\UI\Picture_lada_ca.paa";
		displayname = "$STR_DN_LADA";
		class Library
		{
			libTextDesc = "$STR_LIB_LADA";
		};
		side = 3;
		faction = "CIV";
		vehicleClass = "Car";
		crew = "Citizen1";
		typicalCargo[] = {"Citizen1"};
		maxSpeed = 120;
		terrainCoef = 6.0;
		turnCoef = 2;
		steerAheadPlan = 0.15;
		transportSoldier = 3;
		weapons[] = {"CarHorn"};
		magazines[] = {};
		class Turrets{};
		armor = 20;
		damageResistance = 0.01511;
		cost = 3000;
		fuelCapacity = 50;
		memoryPointsGetInCargo[] = {"pos cargo 1","pos cargo 2","pos cargo 3","pos cargo 4"};
		memoryPointsGetInCargoDir[] = {"pos cargo dir 1","pos cargo dir 2","pos cargo dir 3","pos cargo dir 4"};
		DriverAction = "Golf_Driver";
		cargoAction[] = {"Golf_Cargo01","Golf_Cargo02","Golf_Cargo02"};
		cargoIsCoDriver[] = {0};
		soundGear[] = {"",0.0005623413,1};
		SoundGetIn[] = {"\ca\sounds\vehicles\wheeled\offroad\ext\ext-offroad-getout-1",0.25118864,1};
		SoundGetOut[] = {"\ca\sounds\vehicles\wheeled\offroad\ext\ext-offroad-getout-1",0.25118864,1,30};
		soundEngineOnInt[] = {"ca\sounds\Vehicles\Wheeled\offroad\int\int-offroad-start-1",0.31622776,1.0};
		soundEngineOnExt[] = {"ca\sounds\Vehicles\Wheeled\offroad\ext\ext-offroad-start-1",0.31622776,1.0,250};
		soundEngineOffInt[] = {"ca\sounds\Vehicles\Wheeled\offroad\int\int-offroad-stop-1",0.31622776,1.0};
		soundEngineOffExt[] = {"ca\sounds\Vehicles\Wheeled\offroad\ext\ext-offroad-stop-1",0.31622776,1.0,250};
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
				sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\int\int-offroad-acce-1",0.31622776,1.0};
				limit = "0.7";
				expression = "(engineOn*(1-camPos))*gmeterZ*(speed factor[2.5, 4])";
			};
			class AccelerationOut
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\ext\ext-offroad-acce-1",0.31622776,1.0,280};
				limit = "0.7";
				expression = "(engineOn*camPos)*gmeterZ*(speed factor[2.5, 4])";
			};
		};
		class Sounds
		{
			class Engine
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\ext\ext-offroad-low-1",0.56234133,1.2,300};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "camPos*engineOn*((rpm factor[0.21, 0.5]) min (rpm factor[0.7, 0.3]))";
			};
			class EngineHighOut
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\ext\ext-offroad-high-2",0.56234133,1.0,400};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "camPos*engineOn*(rpm factor[0.5, 0.99])";
			};
			class IdleOut
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\ext\ext-offroad-idle-5",0.17782794,1.0,200};
				frequency = "1";
				volume = "camPos*engineOn*(rpm factor[0.4, 0])";
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
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3",0.31622776,1.0,30};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\UAZ\ext\ext-noise",0.31622776,1.0,30};
				frequency = "1";
				volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class EngineLowIn
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\int\int-offroad-low-1",0.56234133,1.2};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "(1-camPos)*engineOn*((rpm factor[0.2, 0.4]) min (rpm factor[0.7, 0.3]))";
			};
			class EngineHighIn
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\int\int-offroad-high-2",0.56234133,1.0};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "(1-camPos)*engineOn*(rpm factor[0.56, 0.9])";
			};
			class IdleIn
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\int\int-offroad-idle-5",0.25118864,1.0};
				frequency = "1";
				volume = "(1-camPos)*engineOn*(rpm factor[0.4, 0])";
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
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3",0.17782794,1.0};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\int\int-offroad-noise-1",0.17782794,1.0};
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
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\wheeled2\Lada\Data\Lada_chrome.rvmat","ca\wheeled2\Lada\Data\Lada_chrome_damage.rvmat","ca\wheeled2\Lada\Data\Lada_chrome_destruct.rvmat","ca\wheeled2\Lada\Data\Lada_glass.rvmat","ca\wheeled2\Lada\Data\Lada_glass_damage.rvmat","ca\wheeled2\Lada\Data\Lada_glass_damage.rvmat","ca\wheeled2\Lada\Data\Lada_glass_in.rvmat","ca\wheeled2\Lada\Data\Lada_glass_in_damage.rvmat","ca\wheeled2\Lada\Data\Lada_glass_in_damage.rvmat","ca\wheeled2\Lada\Data\Lada_mat.rvmat","ca\wheeled2\Lada\Data\Lada_mat_damage.rvmat","ca\wheeled2\Lada\Data\Lada_mat_destruct.rvmat"};
		};
		rarityUrban = 0.5;
	};
};
//};

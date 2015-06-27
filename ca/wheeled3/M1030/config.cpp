////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:07:17 2014 : Source 'file' date Fri Oct 31 06:07:17 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class wheeled3 : M1030\config.bin{
class CfgPatches
{
	class CAWheeled3_M1030
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {"CAWheeled3"};
	};
};
class CfgVehicles
{
	class Motorcycle;
	class M1030: Motorcycle
	{
		model = "\ca\wheeled3\m1030\m1030";
		icon = "\ca\wheeled3\data\UI\Icon_TT650_M1030_CA.paa";
		picture = "\ca\wheeled3\data\UI\Picture_M1030_CA.paa";
		mapSize = 3;
		displayName = "$STR_DN_M1030";
		vehicleClass = "Car";
		weapons[] = {"MiniCarHorn"};
		turnCoef = 2.0;
		wheelCircumference = 2.202;
		soundGear[] = {"",0.0005623413,1};
		SoundGetIn[] = {"",0.017782794,1};
		SoundGetOut[] = {"",0.017782794,1};
		soundEngineOnInt[] = {"ca\sounds\Vehicles\Wheeled\motorcycles\int\int-m1030-start-1",0.35481337,1.0};
		soundEngineOnExt[] = {"ca\sounds\Vehicles\Wheeled\motorcycles\ext\ext-m1030-start-1",0.35481337,1.0,300};
		soundEngineOffInt[] = {"ca\sounds\Vehicles\Wheeled\motorcycles\int\int-m1030-stop-1",0.35481337,1.0};
		soundEngineOffExt[] = {"ca\sounds\Vehicles\Wheeled\motorcycles\ext\ext-m1030-stop-1",0.35481337,1.0,300};
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
				sound[] = {"ca\sounds\Vehicles\Wheeled\motorcycles\int\int-m1030-acce-1",0.56234133,1.0};
				limit = "0.2";
				expression = "(engineOn*(1-camPos))*thrust";
			};
			class AccelerationOut
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\motorcycles\ext\ext-m1030-acce-1",0.56234133,1.0,350};
				limit = "0.2";
				expression = "(engineOn*camPos)*thrust";
			};
		};
		class Sounds
		{
			class Engine
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\motorcycles\ext\ext-m1030-low-1",0.56234133,1.0,400};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "camPos*engineOn*((rpm factor[0.5, 0.85]) min (rpm factor[0.85, 0.5]))";
			};
			class EngineHighOut
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\motorcycles\ext\ext-m1030-low-2",0.56234133,1.0,500};
				frequency = "(randomizer*0.05+1.0)*rpm";
				volume = "camPos*engineOn*(rpm factor[0.7, 1.0])";
			};
			class IdleOut
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\motorcycles\ext\ext-m1030-idle-2",0.31622776,1.0,250};
				frequency = "1";
				volume = "camPos*engineOn*(rpm factor[0.6, 0])";
			};
			class TiresRockOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2",0.1,1.0,30};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2",0.1,1.0,30};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3",0.1,1.0,30};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2",0.1,1.0,30};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2",0.1,1.0,30};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3",0.1,1.0,30};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\Noises\ext\noise2",0.56234133,1.0,60};
				frequency = "1";
				volume = "camPos*(damper0 max 0.036)*(speed factor[0, 8])";
			};
			class EngineLowIn
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\motorcycles\int\int-m1030-low-1",0.7943282,1.0};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "(1-camPos)*engineOn*((rpm factor[0.5, 0.85]) min (rpm factor[0.85, 0.5]))";
			};
			class EngineHighIn
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\motorcycles\int\int-m1030-low-2",0.7943282,1.0};
				frequency = "(randomizer*0.05+1.0)*rpm";
				volume = "(1-camPos)*engineOn*(rpm factor[0.8, 1.0])";
			};
			class IdleIn
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\motorcycles\int\int-m1030-idle-2",0.31622776,1.0};
				frequency = "1";
				volume = "(1-camPos)*engineOn*(rpm factor[0.6, 0])";
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
				sound[] = {"ca\sounds\Vehicles\Wheeled\Noises\ext\noise2",0.56234133,1.0};
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
		extCameraPosition[] = {0,0,-3};
		driverAction = "Bike_Driver";
		cargoAction[] = {"Bike_Cargo"};
		damperDamping = 3;
		damperSize = 0.05;
		armor = 50;
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\wheeled3\m1030\data\m1030.rvmat","ca\wheeled3\m1030\data\m1030_damage.rvmat","ca\wheeled3\m1030\data\m1030_destruct.rvmat"};
		};
	};
};
//};

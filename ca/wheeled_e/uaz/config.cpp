////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:13:43 2014 : Source 'file' date Fri Oct 31 06:13:43 2014
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

//Class wheeled_e : uaz\config.bin{
class CfgPatches
{
	class CAWheeled_E_UAZ
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.04;
		requiredAddons[] = {"CAWheeled_E","CAWheeled"};
	};
};
class CfgVehicles
{
	class Land;
	class LandVehicle: Land
	{
		class Sounds;
	};
	class Car: LandVehicle
	{
		class AnimationSources;
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
	};
	class UAZ_Base: Car
	{
		model = "\ca\wheeled_E\UAZ\uaz_mg";
		transportMaxBackpacks = 3;
		outsideSoundFilter = 1;
		insideSoundCoef = 0.8;
		soundGear[] = {"",5.6234134e-005,1};
		soundGetIn[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_door",0.56234133,1};
		soundGetOut[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_door",0.56234133,1,20};
		soundEngineOnInt[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_int_start1",0.17782794,1.0};
		soundEngineOnExt[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_start1",0.17782794,1.0,100};
		soundEngineOffInt[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_int_stop1",0.17782794,1.0};
		soundEngineOffExt[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_stop1",0.17782794,1.0,100};
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
				sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_int_acceleration",0.56234133,1.0};
				limit = "0.4";
				expression = "(engineOn*(1-camPos))*gmeterZ";
			};
			class AccelerationOut
			{
				sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_acceleration",0.56234133,1.0,200};
				limit = "0.4";
				expression = "(engineOn*camPos)*gmeterZ";
			};
		};
		class Sounds: Sounds
		{
			class Engine: Engine
			{
				sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_low1",0.17782794,0.9,100};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "camPos*engineOn*((rpm factor[0.3, 0.5]) min (rpm factor[0.7, 0.55]))";
			};
			class EngineHighOut
			{
				sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_high1",1.0,0.8,300};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "camPos*engineOn*(rpm factor[0.6, 1.0])";
			};
			class IdleOut
			{
				sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_idle",0.56234133,1.0,100};
				frequency = "1";
				volume = "engineOn*camPos*(rpm factor[0.5, 0])";
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
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise2",0.31622776,1.0,30};
				frequency = "1";
				volume = "camPos*(damper0 max 0.03)*(speed factor[0, 8])";
			};
			class EngineLowIn
			{
				sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_int_low1",0.31622776,0.7};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "(1-camPos)*engineOn*((rpm factor[0.3, 0.5]) min (rpm factor[0.7, 0.55]))";
			};
			class EngineHighIn
			{
				sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_int_high1",1.0,0.8};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "(1-camPos)*engineOn*(rpm factor[0.6, 1.0])";
			};
			class IdleIn
			{
				sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_int_idle",0.31622776,1.0};
				frequency = "1";
				volume = "engineOn*(rpm factor[0.5, 0])*(1-camPos)";
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
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\int\noise2",0.56234133,1.0};
				frequency = "1";
				volume = "(damper0 max 0.03)*(speed factor[0, 8])*(1-camPos)";
			};
			class Movement: Movement
			{
				sound = "soundEnviron";
				frequency = "1";
				volume = "0";
			};
		};
	};
	class UAZ_MG_Base: UAZ_Base
	{
		model = "\ca\wheeled_E\UAZ\uaz_mg";
		outsideSoundFilter = 1;
		insideSoundCoef = 0.8;
		soundGear[] = {"",5.6234134e-005,1};
		soundGetIn[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_door",0.56234133,1};
		soundGetOut[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_door",0.56234133,1,20};
		soundEngineOnInt[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_int_start1",0.17782794,1.0};
		soundEngineOnExt[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_start1",0.17782794,1.0,100};
		soundEngineOffInt[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_int_stop1",0.17782794,1.0};
		soundEngineOffExt[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_stop1",0.17782794,1.0,100};
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
				sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_acceleration",0.56234133,1.0};
				limit = "0.4";
				expression = "(engineOn*(1-camPos))*gmeterZ";
			};
			class AccelerationOut
			{
				sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_acceleration",0.56234133,1.0,200};
				limit = "0.4";
				expression = "(engineOn*camPos)*gmeterZ";
			};
		};
		class Sounds: Sounds
		{
			class Engine: Engine
			{
				sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_low1",0.17782794,0.9,100};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "camPos*engineOn*((rpm factor[0.3, 0.5]) min (rpm factor[0.7, 0.55]))";
			};
			class EngineHighOut
			{
				sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_high1",1.0,0.8,300};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "camPos*engineOn*(rpm factor[0.6, 1.0])";
			};
			class IdleOut
			{
				sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_idle",0.56234133,1.0,100};
				frequency = "1";
				volume = "engineOn*camPos*(rpm factor[0.5, 0])";
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
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise2",0.31622776,1.0,30};
				frequency = "1";
				volume = "camPos*(damper0 max 0.03)*(speed factor[0, 8])";
			};
			class EngineLowIn
			{
				sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_low1",0.31622776,0.7};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "(1-camPos)*engineOn*((rpm factor[0.3, 0.5]) min (rpm factor[0.7, 0.55]))";
			};
			class EngineHighIn
			{
				sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_high1",1.0,0.8};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "(1-camPos)*engineOn*(rpm factor[0.6, 1.0])";
			};
			class IdleIn
			{
				sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_idle",0.31622776,1.0};
				frequency = "1";
				volume = "engineOn*(rpm factor[0.5, 0])*(1-camPos)";
			};
			class TiresRockIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2",0.31622776,1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2",0.31622776,1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass2",0.31622776,1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2",0.31622776,1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2",0.31622776,1.0};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3",0.31622776,1.0};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise2",0.56234133,1.0};
				frequency = "1";
				volume = "(damper0 max 0.03)*(speed factor[0, 8])*(1-camPos)";
			};
			class Movement: Movement
			{
				sound = "soundEnviron";
				frequency = "1";
				volume = "0";
			};
		};
	};
	class UAZ_AGS30_Base: UAZ_Base
	{
		model = "\ca\wheeled_E\UAZ\uaz_granade";
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "AGS30";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "AGS30";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "AGS30";
			};
		};
		outsideSoundFilter = 1;
		insideSoundCoef = 0.8;
		soundGear[] = {"",5.6234134e-005,1};
		soundGetIn[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_door",0.56234133,1};
		soundGetOut[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_door",0.56234133,1,20};
		soundEngineOnInt[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_int_start1",0.17782794,1.0};
		soundEngineOnExt[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_start1",0.17782794,1.0,100};
		soundEngineOffInt[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_int_stop1",0.17782794,1.0};
		soundEngineOffExt[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_stop1",0.17782794,1.0,100};
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
				sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_acceleration",0.56234133,1.0};
				limit = "0.4";
				expression = "(engineOn*(1-camPos))*gmeterZ";
			};
			class AccelerationOut
			{
				sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_acceleration",0.56234133,1.0,200};
				limit = "0.4";
				expression = "(engineOn*camPos)*gmeterZ";
			};
		};
		class Sounds: Sounds
		{
			class Engine: Engine
			{
				sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_low1",0.17782794,0.9,100};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "camPos*engineOn*((rpm factor[0.3, 0.5]) min (rpm factor[0.7, 0.55]))";
			};
			class EngineHighOut
			{
				sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_high1",1.0,0.8,300};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "camPos*engineOn*(rpm factor[0.6, 1.0])";
			};
			class IdleOut
			{
				sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_idle",0.56234133,1.0,100};
				frequency = "1";
				volume = "engineOn*camPos*(rpm factor[0.5, 0])";
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
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise2",0.31622776,1.0,30};
				frequency = "1";
				volume = "camPos*(damper0 max 0.03)*(speed factor[0, 8])";
			};
			class EngineLowIn
			{
				sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_low1",0.31622776,0.7};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "(1-camPos)*engineOn*((rpm factor[0.3, 0.5]) min (rpm factor[0.7, 0.55]))";
			};
			class EngineHighIn
			{
				sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_high1",1.0,0.8};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "(1-camPos)*engineOn*(rpm factor[0.6, 1.0])";
			};
			class IdleIn
			{
				sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_idle",0.31622776,1.0};
				frequency = "1";
				volume = "engineOn*(rpm factor[0.5, 0])*(1-camPos)";
			};
			class TiresRockIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2",0.31622776,1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2",0.31622776,1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass2",0.31622776,1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2",0.31622776,1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2",0.31622776,1.0};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3",0.31622776,1.0};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise2",0.56234133,1.0};
				frequency = "1";
				volume = "(damper0 max 0.03)*(speed factor[0, 8])*(1-camPos)";
			};
			class Movement: Movement
			{
				sound = "soundEnviron";
				frequency = "1";
				volume = "0";
			};
		};
	};
	class UAZ_SPG9_Base: UAZ_Base
	{
		outsideSoundFilter = 1;
		insideSoundCoef = 0.8;
		soundGear[] = {"",5.6234134e-005,1};
		soundGetIn[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_door",0.56234133,1};
		soundGetOut[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_door",0.56234133,1,20};
		soundEngineOnInt[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_int_start1",0.17782794,1.0};
		soundEngineOnExt[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_start1",0.17782794,1.0,100};
		soundEngineOffInt[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_int_stop1",0.17782794,1.0};
		soundEngineOffExt[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_stop1",0.17782794,1.0,100};
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
				sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_acceleration",0.56234133,1.0};
				limit = "0.4";
				expression = "(engineOn*(1-camPos))*gmeterZ";
			};
			class AccelerationOut
			{
				sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_acceleration",0.56234133,1.0,200};
				limit = "0.4";
				expression = "(engineOn*camPos)*gmeterZ";
			};
		};
		class Sounds: Sounds
		{
			class Engine: Engine
			{
				sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_low1",0.17782794,0.9,100};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "camPos*engineOn*((rpm factor[0.3, 0.5]) min (rpm factor[0.7, 0.55]))";
			};
			class EngineHighOut
			{
				sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_high1",1.0,0.8,300};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "camPos*engineOn*(rpm factor[0.6, 1.0])";
			};
			class IdleOut
			{
				sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_idle",0.56234133,1.0,100};
				frequency = "1";
				volume = "engineOn*camPos*(rpm factor[0.5, 0])";
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
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise2",0.31622776,1.0,30};
				frequency = "1";
				volume = "camPos*(damper0 max 0.03)*(speed factor[0, 8])";
			};
			class EngineLowIn
			{
				sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_low1",0.31622776,0.7};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "(1-camPos)*engineOn*((rpm factor[0.3, 0.5]) min (rpm factor[0.7, 0.55]))";
			};
			class EngineHighIn
			{
				sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_high1",1.0,0.8};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "(1-camPos)*engineOn*(rpm factor[0.6, 1.0])";
			};
			class IdleIn
			{
				sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_idle",0.31622776,1.0};
				frequency = "1";
				volume = "engineOn*(rpm factor[0.5, 0])*(1-camPos)";
			};
			class TiresRockIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2",0.31622776,1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2",0.31622776,1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass2",0.31622776,1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2",0.31622776,1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2",0.31622776,1.0};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3",0.31622776,1.0};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise2",0.56234133,1.0};
				frequency = "1";
				volume = "(damper0 max 0.03)*(speed factor[0, 8])*(1-camPos)";
			};
			class Movement: Movement
			{
				sound = "soundEnviron";
				frequency = "1";
				volume = "0";
			};
		};
	};
	class UAZ_Unarmed_Base: UAZ_Base
	{
		transportMaxBackpacks = 7;
		model = "\ca\wheeled_E\UAZ\uaz";
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\wheeled_E\UAZ\Data\uaz_main_metal.rvmat","Ca\wheeled_E\UAZ\Data\uaz_main_metal_damage.rvmat","Ca\wheeled_E\UAZ\Data\uaz_main_metal_destruct.rvmat","Ca\wheeled_E\UAZ\Data\uaz_other_metal.rvmat","Ca\wheeled_E\UAZ\Data\uaz_other_metal_damage.rvmat","Ca\wheeled_E\UAZ\Data\uaz_other_metal_destruct.rvmat","Ca\wheeled_E\UAZ\Data\uaz_skla.rvmat","Ca\wheeled_E\Data\auta_skla_damage.rvmat","Ca\wheeled_E\Data\auta_skla_damage.rvmat","Ca\wheeled_E\UAZ\Data\uaz_skla_in.rvmat","Ca\wheeled_E\Data\auta_skla_in_damage.rvmat","Ca\wheeled_E\Data\auta_skla_in_damage.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
	};
};
//};

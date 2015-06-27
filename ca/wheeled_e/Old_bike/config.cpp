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

//Class wheeled_e : Old_bike\config.bin{
class CfgPatches
{
	class CAWheeled_E_Old_bike
	{
		units[] = {"Old_bike_TK_CIV_EP1","Old_bike_TK_INS_EP1"};
		weapons[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {"CAWheeled_E"};
	};
};
class NoDust{};
class CfgVehicles
{
	class Bicycle;
	class Old_bike_base_EP1: Bicycle
	{
		expansion = 1;
		htMin = 60;
		htMax = 1800;
		afMax = 100;
		mfMax = 80;
		mFact = 0;
		tBody = 0;
		scope = 0;
		weapons[] = {"BikeHorn"};
		wheelCircumference = 2.28;
		model = "\ca\wheeled_E\old_bike\old_bike";
		displayName = "$STR_EP1_DN_Old_bike_base_EP1";
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_Old_bike";
		};
		vehicleClass = "Car";
		rarityUrban = -1;
		class DestructionEffects{};
		Picture = "\Ca\wheeled2\data\UI\Picture_MMT_CA.paa";
		Icon = "\Ca\wheeled2\data\UI\Icon_MMT_CA.paa";
		mapSize = 3;
		maxSpeed = 35;
		isBicycle = 1;
		extCameraPosition[] = {0,0,-3};
		class HitPoints
		{
			class HitRGlass
			{
				armor = 0.3;
				material = -1;
				name = "sklo predni P";
				passThrough = 0;
			};
			class HitLGlass
			{
				armor = 0.3;
				material = -1;
				name = "sklo predni L";
				passThrough = 0;
			};
			class HitBody
			{
				armor = 1;
				material = 51;
				name = "karoserie";
				visual = "";
				passThrough = 1;
			};
			class HitFuel
			{
				armor = 0.3;
				material = 51;
				name = "palivo";
				passThrough = 0;
			};
			class HitFWheel
			{
				armor = 1;
				material = -1;
				name = "wheel_1_damper";
				visual = "wheel_1";
				passThrough = 0;
			};
			class HitBWheel
			{
				armor = 1;
				material = -1;
				name = "wheel_2_damper";
				visual = "wheel_2";
				passThrough = 0;
			};
			class HitEngine
			{
				armor = 0.4;
				material = -1;
				name = "motor";
				visual = "";
				passThrough = 0;
			};
		};
		class AnimationSources
		{
			class Hit_wheel_1
			{
				source = "Hit";
				hitpoint = "HitFWheel";
				raw = 1;
			};
			class Hit_wheel_2: Hit_wheel_1
			{
				hitpoint = "HitBWheel";
			};
		};
		threat[] = {0.0,0.0,0.0};
		armor = 5;
		turnCoef = 2;
		driverAction = "MMT_Driver";
		transportSoldier = 0;
		driverInAction = "MMT_Driver";
		cargoAction[] = {"MMT_Driver"};
		secondaryExplosion = 0;
		leftDustEffect = "NoDust";
		rightDustEffect = "NoDust";
		outsideSoundFilter = 0;
		soundGear[] = {"",0.0005623413,1};
		SoundGetIn[] = {"",0.017782794,1};
		SoundGetOut[] = {"",0.017782794,1};
		soundEngineOnInt[] = {"",0.35481337,1.0};
		soundEngineOnExt[] = {"",0.35481337,1.0};
		soundEngineOffInt[] = {"",0.35481337,1.0};
		soundEngineOffExt[] = {"",0.35481337,1.0};
		buildCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_bicycle_01",0.70794576,1,40};
		buildCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_bicycle_02",0.70794576,1,40};
		buildCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_bicycle_03",0.70794576,1,40};
		buildCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_bicycle_04",0.70794576,1,40};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_wood_small_01",0.70794576,1,40};
		WoodCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_wood_small_02",0.70794576,1,40};
		WoodCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_wood_small_03",0.70794576,1,40};
		WoodCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_wood_small_04",0.70794576,1,40};
		soundWoodCrash[] = {"woodCrash0",0.25,"woodCrash1",0.25,"woodCrash2",0.25,"woodCrash3",0.25};
		ArmorCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_bicycle_06",0.70794576,1,40};
		ArmorCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_bicycle_05",0.70794576,1,40};
		ArmorCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_bicycle_04",0.70794576,1,40};
		ArmorCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_bicycle_03",0.70794576,1,40};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		class SoundEvents
		{
			class AccelerationIn
			{
				sound[] = {"",0.56234133,1.0};
				limit = "0.2";
				expression = "(engineOn*(1-camPos))*thrust";
			};
			class AccelerationOut
			{
				sound[] = {"",0.56234133,1.0};
				limit = "0.2";
				expression = "(engineOn*camPos)*thrust";
			};
		};
		class Sounds
		{
			class Engine
			{
				sound[] = {"Ca\sounds\Vehicles\Wheeled\MMT\low1",0.17782794,1.0,35};
				frequency = "(randomizer*0.01+1.0)*rpm";
				volume = "camPos*engineOn*((speed factor[0.1, 0.6]) min (speed factor[0.6, 0.1]))";
			};
			class EngineHighOut
			{
				sound[] = {"Ca\sounds\Vehicles\Wheeled\MMT\high1",0.17782794,1.0,50};
				frequency = "(randomizer*0.05+1.0)*rpm";
				volume = "camPos*engineOn*(speed factor[0.4, 0.9])";
			};
			class IdleOut
			{
				sound[] = {"Ca\sounds\Vehicles\Wheeled\MMT\idle",0.17782794,1.0,35};
				frequency = "1";
				volume = "camPos*engineOn*(speed factor[0.05, 0.9])";
			};
			class TiresRockOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2",0.031622775,1.0,8};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2",0.031622775,1.0,8};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3",0.031622775,1.0,8};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2",0.031622775,1.0,8};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2",0.031622775,1.0,8};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3",0.031622775,1.0,8};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\Noises\ext\noise2",0.001,1.0,8};
				frequency = "1";
				volume = "camPos*(damper0 max 0.036)*(speed factor[0, 8])";
			};
			class EngineLowIn
			{
				sound[] = {"Ca\sounds\Vehicles\Wheeled\MMT\low1",0.31622776,1.0};
				frequency = "(randomizer*0.1+1)*speed";
				volume = "(1-camPos)*engineOn*((speed factor[0.1, 0.6]) min (speed factor[0.6, 0.1]))";
			};
			class EngineHighIn
			{
				sound[] = {"Ca\sounds\Vehicles\Wheeled\MMT\high1",0.31622776,1.0};
				frequency = "(randomizer*0.05+1.0)*rpm";
				volume = "(1-camPos)*engineOn*(speed factor[0.4, 0.9])";
			};
			class IdleIn
			{
				sound[] = {"Ca\sounds\Vehicles\Wheeled\MMT\idle",0.31622776,1.0};
				frequency = "1";
				volume = "(1-camPos)*engineOn*(speed factor[0.05, 0.9])";
			};
			class TiresRockIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2",0.031622775,1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2",0.031622775,1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass3",0.031622775,1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2",0.031622775,1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2",0.031622775,1.0};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3",0.031622775,1.0};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\Noises\ext\noise2",0.001,1.0};
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
		soundEngine[] = {"",1,1};
		soundEnviron[] = {"",1,1};
		transportMaxMagazines = 0;
		transportMaxWeapons = 0;
		class Reflectors{};
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"ca\wheeled_e\old_bike\data\old_bike_co.paa","ca\wheeled_e\old_bike\data\old_bike_alfa_co.paa"};
	};
	class Old_bike_TK_CIV_EP1: Old_bike_base_EP1
	{
		scope = 2;
		side = 3;
		faction = "BIS_TK_CIV";
		crew = "TK_CIV_Takistani01_EP1";
		typicalCargo[] = {"TK_CIV_Takistani01_EP1"};
	};
	class Old_bike_TK_INS_EP1: Old_bike_base_EP1
	{
		scope = 2;
		side = 0;
		faction = "BIS_TK_INS";
		crew = "TK_INS_Soldier_EP1";
		typicalCargo[] = {"TK_INS_Soldier_EP1"};
	};
};
//};

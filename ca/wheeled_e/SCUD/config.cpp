////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:13:38 2014 : Source 'file' date Fri Oct 31 06:13:38 2014
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

//Class wheeled_e : SCUD\config.bin{
class CfgPatches
{
	class CAWheeled_E_SCUD
	{
		units[] = {"MAZ_543_SCUD_TK_EP1"};
		weapons[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {"CA_E","CAWheeled_E","CACharacters_E"};
	};
};
class CfgVehicles
{
	class Truck;
	class MAZ_543_SCUD_Base_EP1: Truck
	{
		expansion = 1;
		htMin = 60;
		htMax = 1800;
		afMax = 200;
		mfMax = 100;
		mFact = 0;
		tBody = 0;
		model = "\ca\wheeled_E\SCUD\MAZ_543_SCUD";
		scudModel = "\ca\wheeled_E\SCUD\data\scud_rocket";
		scudModelFire = "\ca\wheeled_E\SCUD\data\scud_rocket";
		displayname = "$STR_EP1_DN_MAZ_543_SCUD_Base_EP1";
		Icon = "\CA\wheeled_e\Data\UI\Icon_scud_CA.paa";
		Picture = "\CA\wheeled_e\Data\UI\Picture_scud_CA.paa";
		MapSize = 12;
		threat[] = {0.0,0.0,0.0};
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_MAZ_543_SCUD";
		};
		armor = 30;
		damageResistance = 0.00685;
		maxSpeed = 90;
		terrainCoef = 3.0;
		turnCoef = 3;
		wheelCircumference = 3.8;
		transportSoldier = 3;
		weapons[] = {"SportCarHorn"};
		magazines[] = {};
		outsideSoundFilter = 1;
		insideSoundCoef = 0.9;
		soundGear[] = {"",5.6234134e-005,1};
		soundGetIn[] = {"\ca\Sounds_E\Wheeled_E\stryker\stryker_door",1.0,1};
		soundGetOut[] = {"\ca\Sounds_E\Wheeled_E\stryker\stryker_door",1.0,1,30};
		soundEngineOnInt[] = {"\ca\Sounds_E\Wheeled_E\stryker\stryker_int_on",1.0,1.0};
		soundEngineOnExt[] = {"\ca\Sounds_E\Wheeled_E\stryker\stryker_ext_on",1.0,1.0,100};
		soundEngineOffInt[] = {"\ca\Sounds_E\Wheeled_E\stryker\stryker_int_off",1.0,1.0};
		soundEngineOffExt[] = {"\ca\Sounds_E\Wheeled_E\stryker\stryker_ext_off",1.0,1.0,100};
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
				sound[] = {"\ca\Sounds_E\Wheeled_E\stryker\stryker_int_acceleration",0.56234133,1.0};
				limit = "0.15";
				expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
			class AccelerationOut
			{
				sound[] = {"\ca\Sounds_E\Wheeled_E\stryker\stryker_ext_acceleration",0.56234133,1.0,300};
				limit = "0.15";
				expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
		};
		class Sounds
		{
			class Engine
			{
				sound[] = {"\ca\Sounds_E\Wheeled_E\stryker\stryker_ext_low",1.4125376,0.6,200};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "camPos*engineOn*((rpm factor[0.25, 0.4]) min (rpm factor[0.7, 0.5]))";
			};
			class EngineHighOut
			{
				sound[] = {"\ca\Sounds_E\Wheeled_E\stryker\stryker_ext_mid",1.4125376,0.6,300};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "camPos*engineOn*(rpm factor[0.5, 0.8])";
			};
			class IdleOut
			{
				sound[] = {"\ca\Sounds_E\Wheeled_E\stryker\stryker_ext_idle",1.4125376,0.8,100};
				frequency = "1";
				volume = "engineOn*camPos*(rpm factor[0.4, 0])";
			};
			class TiresRockOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2",0.31622776,1.0,50};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2",0.31622776,1.0,50};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3",0.31622776,1.0,50};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2",0.31622776,1.0,50};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2",0.31622776,1.0,50};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3",0.31622776,1.0,50};
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
				sound[] = {"\ca\Sounds_E\Wheeled_E\stryker\stryker_int_low",1.4125376,0.6};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "(1-camPos)*engineOn*((rpm factor[0.25, 0.4]) min (rpm factor[0.7, 0.5]))";
			};
			class EngineHighIn
			{
				sound[] = {"\ca\Sounds_E\Wheeled_E\stryker\stryker_int_mid",1.4125376,0.6};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "(1-camPos)*engineOn*(rpm factor[0.5, 0.8])";
			};
			class IdleIn
			{
				sound[] = {"\ca\Sounds_E\Wheeled_E\stryker\stryker_int_idle",1.4125376,0.8};
				frequency = "1";
				volume = "engineOn*(rpm factor[0.4, 0])*(1-camPos)";
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
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\int\noise4",0.56234133,1.0};
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
		driverAction = "SCUD_Driver_EP1";
		getInAction = "GetInMedium";
		getOutAction = "GetOutMedium";
		cargoAction[] = {"SCUD_Cargo01_EP1","SCUD_Cargo01_EP1","SCUD_Cargo01_EP1"};
		cargoIsCoDriver[] = {1,0,0};
		cargoGetInAction[] = {"GetInMedium","GetInMedium","GetInMedium"};
		cargoGetOutAction[] = {"GetOutMedium","GetOutMedium","GetOutMedium"};
		memoryPointsGetInCargo[] = {"pos codriver","pos cargo 01","pos cargo 02"};
		memoryPointsGetInCargoDir[] = {"pos codriver dir","pos cargo 01 dir","pos cargo 02 dir"};
		class Turrets{};
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\wheeled_E\SCUD\data\scud_01.rvmat","Ca\wheeled_E\SCUD\data\scud_01_damage.rvmat","Ca\wheeled_E\SCUD\data\scud_01_destruct.rvmat","Ca\wheeled_E\SCUD\data\scud_02.rvmat","Ca\wheeled_E\SCUD\data\scud_02_damage.rvmat","Ca\wheeled_E\SCUD\data\scud_02_destruct.rvmat","Ca\wheeled_E\SCUD\data\scud_03.rvmat","Ca\wheeled_E\SCUD\data\scud_03_damage.rvmat","Ca\wheeled_E\SCUD\data\scud_03_destruct.rvmat","Ca\wheeled_E\SCUD\data\scud_04.rvmat","Ca\wheeled_E\SCUD\data\scud_04_damage.rvmat","Ca\wheeled_E\SCUD\data\scud_04_destruct.rvmat","Ca\wheeled_E\SCUD\data\scud_05.rvmat","Ca\wheeled_E\SCUD\data\scud_05_damage.rvmat","Ca\wheeled_E\SCUD\data\scud_05_destruct.rvmat","Ca\wheeled_E\SCUD\data\scud_glass.rvmat","Ca\wheeled_E\SCUD\data\scud_glass_damage.rvmat","Ca\wheeled_E\SCUD\data\scud_glass_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
		scudSoundElevate[] = {"Ca\wheeled\data\Sound\gun_elevate.wss",0.31622776,1,100};
		scudSound[] = {"Ca\sounds\Weapons\cannon\rocket_fly_x1.wss",316.22775,1,1000};
		hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
		hiddenSelectionsTextures[] = {"ca\wheeled_e\scud\data\scud_01_co.paa","ca\wheeled_e\scud\data\scud_02_co.paa","ca\wheeled_e\scud\data\scud_03_co.paa","ca\wheeled_e\scud\data\scud_04_co.paa"};
	};
	class MAZ_543_SCUD_TK_EP1: MAZ_543_SCUD_Base_EP1
	{
		scope = 2;
		side = 0;
		faction = "BIS_TK";
		crew = "TK_Soldier_EP1";
		typicalCargo[] = {"TK_Soldier_EP1","TK_Soldier_EP1"};
	};
};
class CfgNonAIVehicles
{
	class ProxyWeapon;
	class ProxySCUD_rocket: ProxyWeapon
	{
		model = "\ca\wheeled_E\SCUD\data\scud_rocket";
		simulation = "scud";
	};
};
//};

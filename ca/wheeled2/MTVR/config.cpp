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

//Class wheeled2 : MTVR\config.bin{
class CfgPatches
{
	class CAWheeled2_MTVR
	{
		units[] = {"MTVR","MtvrRepair","MtvrRefuel","MtvrReammo"};
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
		class DestructionEffects;
	};
	class MTVR: Truck
	{
		scope = 0;
		model = "\ca\wheeled2\MTVR\MTVR.p3d";
		picture = "\Ca\wheeled2\data\UI\Picture_MTVR_CA.paa";
		Icon = "\Ca\wheeled2\data\UI\Icon_MTVR_CA.paa";
		mapSize = 8;
		displayname = "$STR_DN_MTVR";
		vehicleClass = "Car";
		class Library
		{
			libTextDesc = "$STR_LIB_MTVR";
		};
		side = 1;
		faction = "USMC";
		crew = "USMC_Soldier";
		fuelCapacity = 303;
		maxSpeed = 105;
		wheelCircumference = 4.172;
		cost = 70000;
		terrainCoef = 2.0;
		turnCoef = 3.7;
		steerAheadSimul = 0.5;
		steerAheadPlan = 0.38;
		armor = 32;
		damageResistance = 0.00243;
		enableGPS = 0;
		weapons[] = {"TruckHorn"};
		magazines[] = {};
		threat[] = {1,0.1,0.4};
		class DestructionEffects: DestructionEffects{};
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				armor = 0.3;
			};
			class HitLBWheel: HitLBWheel
			{
				armor = 0.3;
			};
			class HitLMWheel: HitLMWheel
			{
				armor = 0.3;
			};
			class HitRFWheel: HitRFWheel
			{
				armor = 0.3;
			};
			class HitRBWheel: HitRBWheel
			{
				armor = 0.3;
			};
			class HitRMWheel: HitRMWheel
			{
				armor = 0.3;
			};
			class HitFuel
			{
				armor = 1.4;
				material = -1;
				name = "palivo";
				visual = "";
				passThrough = 1;
			};
		};
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		transportSoldier = 12;
		driverAction = "MTVR_Driver";
		cargoAction[] = {"Truck_Cargo01","Truck_Cargo01","Truck_Cargo04","Truck_Cargo04","Truck_Cargo02","Truck_Cargo03","Truck_Cargo04","Truck_Cargo02","Truck_Cargo04","Truck_Cargo04","Truck_Cargo04","Truck_Cargo04"};
		typicalCargo[] = {"USMC_Soldier","USMC_Soldier","USMC_Soldier_AT","USMC_Soldier_AT"};
		initCargoAngleY = 185;
		getInAction = "GetInHigh";
		getOutAction = "GetOutHigh";
		cargoIsCoDriver[] = {1,1,0};
		viewCargoShadow = 1;
		SoundGear[] = {"",0.0017782794,1};
		soundGetIn[] = {"ca\sounds\vehicles\Wheeled\MTVR\ext\ext-truck-getin",0.70794576,1};
		soundGetOut[] = {"ca\sounds\vehicles\Wheeled\MTVR\ext\ext-truck-getout",0.56234133,1,50};
		soundEngineOnInt[] = {"ca\sounds\Vehicles\Wheeled\MTVR\int\int-mtvr-start",0.56234133,1.0};
		soundEngineOnExt[] = {"ca\SOUNDS\Vehicles\Wheeled\MTVR\ext\ext-mtvr-start1",0.56234133,1.0,350};
		soundEngineOffInt[] = {"ca\sounds\vehicles\Wheeled\MTVR\int\int-mtvr-stop",0.56234133,1.0};
		soundEngineOffExt[] = {"ca\sounds\vehicles\Wheeled\MTVR\ext\ext-truck-stop",0.56234133,1.0,350};
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
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\MTVR\int\int-mtvr-acceleration1",0.39810717,1.0};
				limit = "0.15";
				expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
			class AccelerationOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\MTVR\ext\ext-mtvr-acceleration1",0.56234133,1.0,390};
				limit = "0.15";
				expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
		};
		class Sounds
		{
			class Engine
			{
				sound[] = {"\ca\sounds\Vehicles\Wheeled\MTVR\ext\ext-truck-low2",1.0,1.0,450};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "engineOn*camPos*(thrust factor[0.7, 0.2])";
			};
			class EngineHighOut
			{
				sound[] = {"\ca\sounds\Vehicles\Wheeled\MTVR\ext\ext-truck-high",1.0,0.9,550};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "engineOn*camPos*(thrust factor[0.5, 0.95])";
			};
			class IdleOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\MTVR\ext\ext-mtvr-idle",0.56234133,1.0,350};
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
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise2",0.1,1.0,50};
				frequency = "1";
				volume = "camPos*(damper0 max 0.04)*(speed factor[0, 8])";
			};
			class EngineLowIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\MTVR\int\int-mtvr-low2",1.0,1.0};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "((engineOn*thrust) factor[0.65, 0.2])*(1-camPos)";
			};
			class EngineHighIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\MTVR\int\int-mtvr-high2",1.0,0.9};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "((engineOn*thrust) factor[0.4, 1.0])*(1-camPos)";
			};
			class IdleIn
			{
				sound[] = {"\ca\sounds\Vehicles\Wheeled\MTVR\int\int-mtvr-idle1",0.39810717,1.0};
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
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3",0.17782794,1.0};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\int\noise2",0.17782794,1.0};
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
		memoryPointExhaust = "vyfuk start";
		memoryPointExhaustDir = "vyfuk konec";
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\wheeled2\mtvr\data\mtvr_body.rvmat","ca\wheeled2\mtvr\data\mtvr_body_damage.rvmat","ca\wheeled2\mtvr\data\mtvr_body_destruct.rvmat","ca\wheeled2\mtvr\data\mtvr_body2.rvmat","ca\wheeled2\mtvr\data\mtvr_body2_damage.rvmat","ca\wheeled2\mtvr\data\mtvr_body2_destruct.rvmat","ca\wheeled2\mtvr\data\mtvr_interier.rvmat","ca\wheeled2\mtvr\data\mtvr_interier_damage.rvmat","ca\wheeled2\mtvr\data\mtvr_interier_destruct.rvmat","ca\wheeled\data\detailmapy\auta_skla.rvmat","ca\wheeled\data\detailmapy\auta_skla_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_in.rvmat","ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat","ca\wheeled2\MTVR\Data\MTVR_tarp.rvmat","ca\wheeled2\MTVR\Data\mtvr_tarp_damage.rvmat","ca\wheeled2\MTVR\Data\mtvr_tarp_destruct.rvmat","ca\wheeled2\MTVR\Data\mtvr_fuel.rvmat","ca\wheeled2\MTVR\Data\mtvr_fuel_damage.rvmat","ca\wheeled2\MTVR\Data\mtvr_fuel_destruct.rvmat","ca\wheeled\data\detailmapy\Ural_repair.rvmat","ca\wheeled\data\detailmapy\ural_repair_damage.rvmat","ca\wheeled\data\detailmapy\ural_repair_destruct.rvmat"};
		};
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {"\ca\wheeled2\mtvr\data\mtvr_body_co.paa","\ca\wheeled2\mtvr\data\mtvr_body2_co.paa","\ca\wheeled2\mtvr\data\mtvr_interier_co.paa","\ca\wheeled2\mtvr\data\mtvr_tarp_co.paa"};
	};
	class MtvrReammo: MTVR
	{
		model = "\ca\wheeled2\MTVR\mtvr_Ammunition";
		displayName = "$STR_DN_MTVR_REAMMO";
		vehicleClass = "Support";
		picture = "\Ca\wheeled2\data\UI\Picture_MTVR_ammo_CA.paa";
		Icon = "\Ca\wheeled2\data\UI\Icon_MTVR_ammo_CA.paa";
		mapSize = 8;
		weapons[] = {"TruckHorn"};
		magazines[] = {};
		accuracy = 0.9;
		type = 0;
		transportAmmo = 300000;
		threat[] = {0.0,0.0,0.0};
		transportSoldier = 2;
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = "30*1";
			};
			class _xx_200Rnd_556x45_M249
			{
				magazine = "200Rnd_556x45_M249";
				count = "5*1";
			};
			class _xx_HandGrenade_East
			{
				magazine = "HandGrenade_East";
				count = "10*1";
			};
			class _xx_5Rnd_762x51_M24
			{
				magazine = "5Rnd_762x51_M24";
				count = "10*1";
			};
			class _xx_15rnd_9x19_M9
			{
				magazine = "15rnd_9x19_M9";
				count = "15*1";
			};
			class _xx_10Rnd_127x99_m107
			{
				magazine = "10Rnd_127x99_m107";
				count = "10*1";
			};
			class _xx_M136
			{
				magazine = "M136";
				count = "3*1";
			};
			class _xx_1Rnd_HE_M203
			{
				magazine = "1Rnd_HE_M203";
				count = "3*1";
			};
			class _xx_FlareWhite_M203
			{
				magazine = "FlareWhite_M203";
				count = "3*1";
			};
			class _xx_FlareGreen_M203
			{
				magazine = "FlareGreen_M203";
				count = "3*1";
			};
			class _xx_FlareRed_M203
			{
				magazine = "FlareRed_M203";
				count = "3*1";
			};
			class _xx_FlareYellow_M203
			{
				magazine = "FlareYellow_M203";
				count = "3*1";
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = "3*1";
			};
			class _xx_SmokeShellRed
			{
				magazine = "SmokeShellRed";
				count = "3*1";
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = "3*1";
			};
		};
		cargoAction[] = {"Truck_Cargo01"};
		class Library
		{
			libTextDesc = "$STR_LIB_MTVR_REAMMO";
		};
	};
	class MtvrRefuel: MTVR
	{
		model = "\ca\wheeled2\MTVR\mtvr_Fuel";
		displayName = "$STR_DN_MTVR_REFUEL";
		vehicleClass = "Support";
		picture = "\Ca\wheeled2\data\UI\Picture_MTVR_fuel_CA.paa";
		Icon = "\Ca\wheeled2\data\UI\Icon_MTVR_fuel_CA.paa";
		mapSize = 8;
		weapons[] = {"TruckHorn"};
		magazines[] = {};
		accuracy = 0.8;
		transportFuel = 3000;
		transportAmmo = 0;
		supplyRadius = 6.3;
		type = 0;
		threat[] = {0.0,0.0,0.0};
		transportSoldier = 2;
		cargoAction[] = {"Truck_Cargo01"};
		hiddenSelectionsTextures[] = {"\ca\wheeled2\mtvr\data\mtvr_body_co.paa","\ca\wheeled2\mtvr\data\mtvr_body2_co.paa","\ca\wheeled2\mtvr\data\mtvr_interier_co.paa","\ca\wheeled2\mtvr\data\mtvr_fuel_co.paa"};
		class Library
		{
			libTextDesc = "$STR_LIB_MTVR_REFUEL";
		};
	};
	class MtvrRepair: MTVR
	{
		model = "\ca\wheeled2\MTVR\mtvr_Repair";
		displayName = "$STR_DN_MTVR_REPAIR";
		vehicleClass = "Support";
		picture = "\Ca\wheeled2\data\UI\Picture_MTVR_repair_CA.paa";
		Icon = "\Ca\wheeled2\data\UI\Icon_MTVR_repair_CA.paa";
		mapSize = 8;
		transportRepair = 200000000;
		supplyRadius = 7.5;
		weapons[] = {"TruckHorn"};
		magazines[] = {};
		transportMaxMagazines = 50;
		transportMaxWeapons = 10;
		type = 0;
		threat[] = {0.0,0.0,0.0};
		transportSoldier = 2;
		cargoAction[] = {"Truck_Cargo01"};
		hiddenSelectionsTextures[] = {"\ca\wheeled2\mtvr\data\mtvr_body_co.paa","\ca\wheeled2\mtvr\data\mtvr_body2_co.paa","\ca\wheeled2\mtvr\data\mtvr_interier_co.paa","\ca\wheeled\data\ural_repair_usmc_co.paa"};
		class Library
		{
			libTextDesc = "$STR_LIB_MTVR_REPAIR";
		};
	};
};
//};

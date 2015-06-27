////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:13:33 2014 : Source 'file' date Fri Oct 31 06:13:33 2014
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

//Class wheeled_e : BTR60\config.bin{
class CfgPatches
{
	class CAWheeled_E_BTR60
	{
		units[] = {"BTR60_TK_EP1"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAWheeled_E"};
	};
};
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class CfgVehicles
{
	class LandVehicle;
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
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class HitPoints;
			};
		};
		class ViewPilot;
		class AnimationSources;
	};
	class Wheeled_APC: Car{};
	class BRDM2_Base: Wheeled_APC{};
	class BTR60_TK_EP1: BRDM2_Base
	{
		htMin = 60;
		htMax = 1800;
		afMax = 200;
		mfMax = 100;
		mFact = 0;
		tBody = 0;
		expansion = 1;
		damageResistance = 0.01849;
		scope = 2;
		side = 0;
		faction = "BIS_TK";
		crew = "TK_Soldier_Crew_EP1";
		typicalCargo[] = {"TK_Soldier_Crew_EP1","TK_Soldier_Crew_EP1","TK_Soldier_Crew_EP1"};
		wheelCircumference = 3.585;
		Picture = "\CA\wheeled_e\Data\UI\Picture_btr60_CA.paa";
		Icon = "\CA\wheeled_e\Data\UI\Icon_btr60_CA.paa";
		mapSize = 7;
		model = "\ca\wheeled_E\BTR60\BTR60";
		displayName = "$STR_EP1_DN_BTR60_TK_EP1";
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_BTR60_TK";
		};
		threat[] = {1.0,0.6,0.6};
		outsideSoundFilter = 1;
		insideSoundCoef = 0.8;
		soundGear[] = {"",5.6234134e-005,1};
		soundGetIn[] = {"\ca\Sounds_E\Wheeled_E\BTR60\btr_door",1.0,1};
		soundGetOut[] = {"\ca\Sounds_E\Wheeled_E\BTR60\btr_door",1.0,1,30};
		soundEngineOnInt[] = {"\ca\Sounds_E\Wheeled_E\BTR60\btr60_int_on",1.0,1.0};
		soundEngineOnExt[] = {"\ca\Sounds_E\Wheeled_E\BTR60\btr60_ext_on",1.0,1.0,100};
		soundEngineOffInt[] = {"\ca\Sounds_E\Wheeled_E\BTR60\btr60_int_off",1.0,1.0};
		soundEngineOffExt[] = {"\ca\Sounds_E\Wheeled_E\BTR60\btr60_ext_off",1.0,1.0,100};
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
				sound[] = {"\ca\Sounds_E\Wheeled_E\BTR60\btr60_int_acceleration",0.56234133,1.0};
				limit = "0.15";
				expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
			class AccelerationOut
			{
				sound[] = {"\ca\Sounds_E\Wheeled_E\BTR60\btr60_ext_acceleration",0.56234133,1.0,300};
				limit = "0.15";
				expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
		};
		class Sounds
		{
			class Engine
			{
				sound[] = {"\ca\Sounds_E\Wheeled_E\BTR60\btr60_ext_mid",1.4125376,0.7,200};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "camPos*engineOn*((rpm factor[0.3, 0.4]) min (rpm factor[0.7, 0.5]))";
			};
			class EngineHighOut
			{
				sound[] = {"\ca\Sounds_E\Wheeled_E\BTR60\btr60_ext_high",1.4125376,0.8,300};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "camPos*engineOn*(rpm factor[0.5, 0.8])";
			};
			class IdleOut
			{
				sound[] = {"\ca\Sounds_E\Wheeled_E\BTR60\btr60_ext_idle",0.56234133,1.0,100};
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
				sound[] = {"\ca\Sounds_E\Wheeled_E\BTR60\btr60_int_mid",1.4125376,0.7};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "(1-camPos)*engineOn*((rpm factor[0.3, 0.4]) min (rpm factor[0.7, 0.5]))";
			};
			class EngineHighIn
			{
				sound[] = {"\ca\Sounds_E\Wheeled_E\BTR60\btr60_int_high",1.4125376,0.8};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "(1-camPos)*engineOn*(rpm factor[0.5, 0.8])";
			};
			class IdleIn
			{
				sound[] = {"\ca\Sounds_E\Wheeled_E\BTR60\btr60_int_idle",0.39810717,1.0};
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
		class HitPoints: HitPoints
		{
			class HitEngine
			{
				armor = 2;
				material = -1;
				name = "NEmotor";
				visual = "motor";
				passThrough = 0.2;
			};
			class HitFuel
			{
				armor = 1;
				material = -1;
				name = "NEpalivo";
				passThrough = 0;
			};
			class HitLFWheel: HitLFWheel
			{
				armor = 0.4;
			};
			class HitLBWheel: HitLBWheel
			{
				armor = 0.4;
			};
			class HitLMWheel: HitLMWheel
			{
				armor = 0.4;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor = 0.4;
			};
			class HitRFWheel: HitRFWheel
			{
				armor = 0.4;
			};
			class HitRBWheel: HitRBWheel
			{
				armor = 0.4;
			};
			class HitRMWheel: HitRMWheel
			{
				armor = 0.4;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor = 0.4;
			};
		};
		turnCoef = 4.0;
		steerAheadSimul = 0.6;
		steerAheadPlan = 0.4;
		commanderCanSee = 31;
		gunnerCanSee = 30;
		hascommander = 1;
		weapons[] = {};
		magazines[] = {};
		driverOpticsModel = "CA\Tracked_E\driverOptics";
		driverOpticsOutModel = "CA\Tracked_E\driverOptics";
		driverForceOptics = 0;
		radarType = 4;
		class ViewOptics
		{
			initAngleX = 0;
			minAngleX = -30;
			maxAngleX = 30;
			initAngleY = 0;
			minAngleY = -100;
			maxAngleY = 100;
			initFov = 0.466;
			minFov = 0.466;
			maxFov = 0.466;
		};
		class ViewPilot
		{
			initAngleX = 10;
			minAngleX = -65;
			maxAngleX = 85;
			initAngleY = 20;
			minAngleY = -150;
			maxAngleY = 150;
			initFov = 1.5;
			minFov = 1.0;
			maxFov = 1.8;
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				body = "mainTurret";
				gun = "mainGun";
				weapons[] = {"KPVT","PKT"};
				soundServo[] = {"\ca\sounds\vehicles\servos\turret-1",0.1,1.0,15};
				magazines[] = {"500Rnd_145x115_KPVT","1500Rnd_762x54_PKT"};
				gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.2;
					minFov = 0.058;
					maxFov = 0.2;
					visionMode[] = {"Normal","NVG"};
				};
				gunnerAction = "BTR60_Gunner_EP1";
				gunnerInAction = "BTR60_Gunner_EP1";
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				gunnerOpticsModel = "\ca\weapons\2Dscope_BMPgun";
				gunnerForceOptics = 1;
				startEngine = 0;
				stabilizedInAxes = "StabilizedInAxesNone";
				commanding = -1;
				primaryGunner = 1;
				primaryObserver = 0;
				class HitPoints: HitPoints
				{
					class HitTurret
					{
						armor = 0.8;
						material = -1;
						name = "vez";
						visual = "vez";
						passThrough = 1;
					};
				};
			};
			class CommanderTurret: MainTurret
			{
				body = "ObsTurret";
				gun = "ObsGun";
				proxyType = "CPCommander";
				proxyIndex = 1;
				gunnerName = "$STR_POSITION_COMMANDER";
				primaryGunner = 0;
				primaryObserver = 1;
				gunnerOpticsShowCursor = 0;
				LODTurnedIn = 1200;
				LODTurnedOut = 0.0;
				animationSourceBody = "obsTurret";
				animationSourceGun = "obsGun";
				animationSourceHatch = "hatchCommander";
				minElev = -10;
				maxElev = 20;
				initElev = 0;
				minTurn = -90;
				maxTurn = 90;
				initTurn = 0;
				weapons[] = {};
				soundServo[] = {"",0.0031622776,1.0};
				magazines[] = {};
				gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.3;
					minFov = 0.093;
					maxFov = 0.466;
					visionMode[] = {"Normal","NVG"};
				};
				gunnerAction = "BTR60_Commander_EP1";
				gunnerInAction = "BTR60_Commander_EP1";
				gunnerOpticsModel = "\ca\weapons\2Dscope_com3";
				gunnerOutOpticsModel = "";
				gunnerOutOpticsColor[] = {0,0,0,1};
				gunnerForceOptics = 0;
				gunnerOutForceOptics = 0;
				gunnerOutOpticsShowCursor = 0;
				startEngine = 0;
				stabilizedInAxes = "StabilizedInAxesNone";
				commanding = 1;
				memoryPointGunnerOutOptics = "commander_weapon_view";
				memoryPointGunnerOptics = "commanderview";
				memoryPointsGetInGunner = "pos commander";
				memoryPointsGetInGunnerDir = "pos commander dir";
			};
		};
		transportSoldier = 8;
		driverAction = "BTR60_Driver_EP1";
		driverInAction = "BTR60_Driver_EP1";
		cargoAction[] = {"BTR60_Cargo01_EP1","BTR60_Cargo01_EP1","BTR60_Cargo02_EP1","BTR60_Cargo03_EP1","BTR60_Cargo04_EP1","BTR60_Cargo02_EP1","BTR60_Cargo03_EP1","BTR60_Cargo04_EP1"};
		viewCargoShadow = 1;
		viewCargoShadowDiff = 0.05;
		transportAmmo = 0;
		supplyRadius = 1.7;
		transportMaxMagazines = 100;
		transportMaxWeapons = 10;
		class Reflectors
		{
			class Left
			{
				color[] = {0.7,0.6,0.6,1.0};
				ambient[] = {0.1,0.1,0.1,1.0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.4;
				brightness = 0.4;
			};
			class Right: Left
			{
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
			};
			class commander_light: Left
			{
				color[] = {0.9,0.8,0.8,1.0};
				ambient[] = {0.1,0.1,0.1,1.0};
				size = 0.6;
				brightness = 0.6;
				position = "svetlo commnader";
				direction = "svetlo commander konec";
				hitpoint = "svetlo commnader";
				selection = "svetlo commnader";
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position = "vyfuk start";
				direction = "vyfuk konec";
				effect = "ExhaustsEffect";
			};
			class Exhaust2: Exhaust1
			{
				position = "vyfuk2 start";
				direction = "vyfuk2 konec";
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\wheeled_E\BTR60\Data\btr60_body.rvmat","Ca\wheeled_E\BTR60\Data\btr60_body_damage.rvmat","Ca\wheeled_E\BTR60\Data\btr60_body_destruct.rvmat","Ca\wheeled_E\BTR60\Data\btr60_details.rvmat","Ca\wheeled_E\BTR60\Data\btr60_details_damage.rvmat","Ca\wheeled_E\BTR60\Data\btr60_details_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {"\CA\wheeled_e\BTR60\Data\btr60_body_co.paa","\CA\wheeled_e\BTR60\Data\btr60_details_co.paa"};
	};
};
//};

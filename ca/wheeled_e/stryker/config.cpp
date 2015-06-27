////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:13:41 2014 : Source 'file' date Fri Oct 31 06:13:41 2014
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

//Class wheeled_e : stryker\config.bin{
class CfgPatches
{
	class CAWheeled_E_stryker
	{
		units[] = {"M1126_ICV_mk19_EP1","M1130_CV_EP1","M1129_MC_EP1","M1135_ATGMV_EP1","M1128_MGS_EP1","M1133_MEV_EP1"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAWheeled_E"};
	};
};
class WeaponCloudsMGun;
class CfgVehicles
{
	class Land;
	class LandVehicle: Land
	{
		class HitPoints;
	};
	class car: LandVehicle
	{
		class ViewOptics;
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
				class ViewGunner;
				class ViewOptics;
			};
		};
		class AnimationSources;
	};
	class Wheeled_APC: car{};
	class StrykerBase_EP1: Wheeled_APC
	{
		expansion = 1;
		class AnimationSources;
		htMin = 60;
		htMax = 1800;
		afMax = 200;
		mfMax = 100;
		mFact = 1;
		tBody = 250;
		scope = 0;
		displayName = "$STR_DN_STRYKER";
		faction = "BIS_US";
		picture = "\Ca\wheeled_e\data\UI\Picture_stryker_cv_CA.paa";
		Icon = "\Ca\wheeled_e\data\UI\Icon_stryker_cv_CA.paa";
		mapSize = 8;
		vehicleClass = "Armored";
		radarType = 4;
		commanderCanSee = 31;
		gunnerCanSee = 31;
		driverCanSee = 31;
		driverOpticsModel = "\ca\weapons\2Dscope_com1";
		class ViewOptics: ViewOptics
		{
			visionMode[] = {"Normal","NVG","Ti"};
			thermalMode[] = {0,1};
		};
		wheelCircumference = 3.656706;
		outsideSoundFilter = 1;
		insideSoundCoef = 0.8;
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
				sound[] = {"\ca\Sounds_E\Wheeled_E\stryker\stryker_ext_low",1.4125376,0.8,200};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "camPos*engineOn*((rpm factor[0.25, 0.4]) min (rpm factor[0.7, 0.5]))";
			};
			class EngineHighOut
			{
				sound[] = {"\ca\Sounds_E\Wheeled_E\stryker\stryker_ext_mid",1.4125376,0.9,300};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "camPos*engineOn*(rpm factor[0.5, 0.8])";
			};
			class IdleOut
			{
				sound[] = {"\ca\Sounds_E\Wheeled_E\stryker\stryker_ext_idle",1.4125376,1.0,100};
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
				sound[] = {"\ca\Sounds_E\Wheeled_E\stryker\stryker_int_low",1.4125376,0.8};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "(1-camPos)*engineOn*((rpm factor[0.25, 0.4]) min (rpm factor[0.7, 0.5]))";
			};
			class EngineHighIn
			{
				sound[] = {"\ca\Sounds_E\Wheeled_E\stryker\stryker_int_mid",1.4125376,0.9};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "(1-camPos)*engineOn*(rpm factor[0.5, 0.8])";
			};
			class IdleIn
			{
				sound[] = {"\ca\Sounds_E\Wheeled_E\stryker\stryker_int_idle",1.4125376,1.0};
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
		memoryPointsGetInDriver = "pos driver";
		memoryPointsGetInDriverDir = "pos driver dir";
		memoryPointsGetInCommander = "pos commander";
		memoryPointsGetInCommanderDir = "pos commander dir";
		memoryPointsGetInCargo = "pos cargo";
		memoryPointsGetInCargoDir = "pos cargo dir";
		memoryPointsGetInCoDriver = "pos codriver";
		memoryPointsGetInCoDriverDir = "pos codriver dir";
		getInAction = "GetInHigh";
		getOutAction = "GetOutHigh";
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
		memoryPointSupply = "supply";
		selectionFireAnim = "zasleh";
		memoryPointExhaust = "exhaust_start";
		memoryPointExhaustDir = "exhaust_end";
		smokeLauncherGrenadeCount = 6;
		smokeLauncherVelocity = 15;
		smokeLauncherOnTurret = 1;
		smokeLauncherAngle = 120;
		damperSize = 0.1;
		damperForce = 1;
		turnCoef = 4.0;
		steerAheadSimul = 0.2;
		steerAheadPlan = 0.3;
		enableGPS = 1;
		transportSoldier = 0;
		side = 1;
		crew = "US_Soldier_Crew_EP1";
		fuelCapacity = 246;
		armor = 150;
		damageResistance = 0.01199;
		crewVulnerable = 0;
		maxSpeed = 100;
		threat[] = {1,0.5,0.5};
		viewCargoShadow = 1;
		viewCargoShadowDiff = 0.05;
		viewDriverShadowDiff = 0.05;
		viewGunnerShadowDiff = 0.05;
		hideProxyInCombat = 1;
		driverIsCommander = 0;
		weapons[] = {};
		magazines[] = {};
		driverForceOptics = 1;
		driverAction = "Stryker_DriverOut_EP1";
		driverInAction = "Stryker_Driver_EP1";
		cargoAction[] = {"Stryker_Cargo01"};
		typicalCargo[] = {"US_Soldier_Crew_EP1","US_Soldier_Crew_EP1","US_Soldier_Crew_EP1","US_Soldier_Crew_EP1"};
		gunnerHasFlares = 1;
		LODTurnedOut = 1100;
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
			class HitLF2Wheel: HitLF2Wheel
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
			class HitRF2Wheel: HitRF2Wheel
			{
				armor = 0.3;
			};
			class HitFuel
			{
				armor = 0.14;
				material = -1;
				name = "palivo";
				visual = "";
				passThrough = 1;
			};
			class HitEngine
			{
				armor = 0.5;
				material = -1;
				name = "motor";
				visual = "";
				passThrough = 1;
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				body = "mainTurret";
				gun = "mainGun";
				gunnerAction = "Stryker_GunnerOut";
				gunnerInAction = "Stryker_Gunner";
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				gunBeg = "muzzle";
				gunEnd = "chamber";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				memoryPointGun = "machinegun";
				selectionFireAnim = "zasleh";
				gunnerForceOptics = 1;
				outGunnerMayFire = 0;
				forcehidegunner = 1;
				memoryPointGunnerOptics = "gunnerview";
				gunnerOpticsModel = "\ca\Weapons\2Dscope_RWS";
				memoryPointGunnerOutOptics = "";
				gunnerOutOpticsModel = "";
				hasGunner = 1;
				castGunnerShadow = 1;
				minElev = -25;
				maxElev = 60;
				minTurn = -360;
				maxTurn = 360;
				initElev = 0;
				initTurn = 0;
				gunnerFireAlsoInInternalCamera = 1;
				gunnerOpticsEffect[] = {};
				class ViewOptics: ViewOptics
				{
					visionMode[] = {"Normal","NVG","Ti"};
					thermalMode[] = {0,1};
				};
			};
		};
		class NVGMarkers
		{
			class NVGMarker01
			{
				name = "nvg_marker";
				color[] = {0.03,0.003,0.003,1};
				ambient[] = {0.003,0.0003,0.0003,1};
				brightness = 0.001;
				blinking = 1;
			};
		};
		class Library
		{
			libTextDesc = "$STR_LIB_STRYKER";
		};
	};
	class M1126_ICV_BASE_EP1: StrykerBase_EP1
	{
		scope = 0;
		displayName = "$STR_EP1_DN_M1126_ICV_BASE_EP1";
		armor = 160;
		damageResistance = 0.0082;
		transportSoldier = 9;
		class Turrets: Turrets
		{
			class ObsTurret: NewTurret
			{
				body = "ObsTurret";
				gun = "ObsGun";
				animationSourceBody = "ObsTurret";
				animationSourceGun = "ObsGun";
				proxyType = "CPCommander";
				proxyIndex = 1;
				gunnerName = "$STR_POSITION_GUNNER";
				primaryGunner = 1;
				primaryObserver = 1;
				gunBeg = "gun_muzzle";
				gunEnd = "gun_chamber";
				animationSourceHatch = "hatchCommander";
				minElev = -15;
				maxElev = 20;
				initElev = 0;
				commanding = 2;
				outGunnerMayFire = 0;
				gunnerOpticsModel = "\ca\Weapons\2Dscope_RWS";
				gunnerForceOptics = 1;
				memoryPointGunnerOptics = "gunnerview";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				gunnerAction = "Stryker_CommanderOut_EP1";
				gunnerInAction = "Stryker_Commander_EP1";
				gunnerOpticsEffect[] = {};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.3;
					minFov = 0.015;
					maxFov = 0.3;
					visionMode[] = {"Normal","NVG","Ti"};
					thermalMode[] = {0,1};
				};
				soundServo[] = {"\ca\wheeled\Data\Sound\servo3",0.017782794,1.0};
			};
		};
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "m2bc";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "m2bc";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "m2bc";
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 30;
			};
			class _xx_1Rnd_HE_M203
			{
				magazine = "1Rnd_HE_M203";
				count = 5;
			};
			class _xx_HandGrenade_West
			{
				magazine = "HandGrenade_West";
				count = 10;
			};
			class _xx_200Rnd_556x45_M249
			{
				magazine = "200Rnd_556x45_M249";
				count = 5;
			};
			class _xx_MAAWS_HEDP
			{
				magazine = "MAAWS_HEDP";
				count = 2;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 2;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
		};
		class TransportWeapons
		{
			class _xx_SCAR_L_STD_HOLO
			{
				weapon = "SCAR_L_STD_HOLO";
				count = 2;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\wheeled_E\stryker\Data\ICV.rvmat","Ca\wheeled_E\stryker\Data\ICV_damage.rvmat","Ca\wheeled_E\stryker\Data\ICV_destruct.rvmat","Ca\wheeled_E\stryker\Data\stryker_body1_green.rvmat","Ca\wheeled_E\stryker\Data\stryker_body1_green_damage.rvmat","Ca\wheeled_E\stryker\Data\stryker_body1_green_destruct.rvmat","Ca\wheeled_E\stryker\Data\stryker_body2_green.rvmat","Ca\wheeled_E\stryker\Data\stryker_body2_green_damage.rvmat","Ca\wheeled_E\stryker\Data\stryker_body2_green_destruct.rvmat","Ca\wheeled_E\stryker\Data\stryker_alfa_green.rvmat","Ca\wheeled_E\stryker\Data\stryker_alfa_green_damage.rvmat","Ca\wheeled_E\stryker\Data\stryker_alfa_green_destruct.rvmat","Ca\wheeled_E\stryker\Data\stryker_interior1.rvmat","Ca\wheeled_E\stryker\Data\stryker_interior1_damage.rvmat","Ca\wheeled_E\stryker\Data\stryker_interior1_destruct.rvmat","Ca\wheeled_E\stryker\Data\stryker_command_green.rvmat","Ca\wheeled_E\stryker\Data\stryker_command_green_damage.rvmat","Ca\wheeled_E\stryker\Data\stryker_command_green_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
	};
	class M1126_ICV_M2_EP1: M1126_ICV_BASE_EP1
	{
		scope = 2;
		displayName = "$STR_EP1_DN_M1126_ICV_M2_EP1";
		model = "\ca\wheeled_E\stryker\M1126_ICV_m2";
		Icon = "\Ca\wheeled_e\data\UI\Icon_stryker_cv_CA.paa";
		class Turrets: Turrets
		{
			class ObsTurret: ObsTurret
			{
				weapons[] = {"M2BC","SmokeLauncher"};
				turretInfoType = "RscWeaponRangeZeroing";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
				discreteDistanceInitIndex = 5;
				magazines[] = {"100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2","SmokeLauncherMag","SmokeLauncherMag"};
			};
		};
		HiddenSelections[] = {"camo","camo1"};
		HiddenSelectionsTextures[] = {"ca\wheeled_e\stryker\data\stryker_body1_des_co.paa","ca\wheeled_e\stryker\data\stryker_body2_des_co.paa"};
	};
	class M1126_ICV_mk19_EP1: M1126_ICV_BASE_EP1
	{
		scope = 2;
		model = "\ca\wheeled_E\stryker\M1126_ICV_mk19";
		picture = "\Ca\wheeled_e\data\UI\Picture_stryker_cv_CA.paa";
		Icon = "\Ca\wheeled_e\data\UI\Icon_stryker_cv_CA.paa";
		displayName = "$STR_EP1_DN_M1126_ICV_mk19_EP1";
		threat[] = {1,0.5,0};
		class Turrets: Turrets
		{
			class ObsTurret: ObsTurret
			{
				weapons[] = {"MK19BC","SmokeLauncher"};
				turretInfoType = "RscWeaponRangeZeroing";
				discreteDistance[] = {100,200,300,400,500,600};
				discreteDistanceInitIndex = 1;
				magazines[] = {"48Rnd_40mm_MK19","48Rnd_40mm_MK19","48Rnd_40mm_MK19","48Rnd_40mm_MK19","SmokeLauncherMag","SmokeLauncherMag"};
				class GunFire: WeaponCloudsMGun
				{
					interval = 0.01;
				};
			};
		};
		HiddenSelections[] = {"camo","camo1"};
		HiddenSelectionsTextures[] = {"ca\wheeled_e\stryker\data\stryker_body1_des_co.paa","ca\wheeled_e\stryker\data\stryker_body2_des_co.paa"};
	};
	class M1130_CV_EP1: M1126_ICV_M2_EP1
	{
		scope = 2;
		model = "\ca\wheeled_E\stryker\M1130_CV";
		picture = "\Ca\wheeled_e\data\UI\Picture_stryker_cv_CA.paa";
		Icon = "\Ca\wheeled_e\data\UI\Icon_stryker_cv_CA.paa";
		displayName = "$STR_EP1_DN_M1130_CV_EP1";
		transportSoldier = 0;
		HiddenSelections[] = {"camo","camo1"};
		HiddenSelectionsTextures[] = {"ca\wheeled_e\stryker\data\stryker_body1_des_co.paa","ca\wheeled_e\stryker\data\stryker_body2_des_co.paa"};
	};
	class M1129_MC_EP1: M1126_ICV_mk19_EP1
	{
		scope = 2;
		model = "\ca\wheeled_E\stryker\M1129_MC";
		picture = "\Ca\wheeled_e\data\UI\Picture_stryker_mc_CA.paa";
		Icon = "\Ca\wheeled_e\data\UI\Icon_stryker_mc_CA.paa";
		displayName = "$STR_EP1_DN_M1129_MC_EP1";
		transportSoldier = 0;
		threat[] = {1,0.5,0};
		artilleryScanner = 1;
		ARTY_IsArtyVehicle = 0;
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\wheeled_E\stryker\Data\ICV.rvmat","Ca\wheeled_E\stryker\Data\ICV_damage.rvmat","Ca\wheeled_E\stryker\Data\ICV_destruct.rvmat","Ca\wheeled_E\stryker\Data\stryker_body1_green.rvmat","Ca\wheeled_E\stryker\Data\stryker_body1_green_damage.rvmat","Ca\wheeled_E\stryker\Data\stryker_body1_green_destruct.rvmat","Ca\wheeled_E\stryker\Data\stryker_body2_green.rvmat","Ca\wheeled_E\stryker\Data\stryker_body2_green_damage.rvmat","Ca\wheeled_E\stryker\Data\stryker_body2_green_destruct.rvmat","Ca\wheeled_E\stryker\Data\stryker_alfa_green.rvmat","Ca\wheeled_E\stryker\Data\stryker_alfa_green_damage.rvmat","Ca\wheeled_E\stryker\Data\stryker_alfa_green_destruct.rvmat","Ca\wheeled_E\stryker\Data\stryker_command_green.rvmat","Ca\wheeled_E\stryker\Data\stryker_command_green_damage.rvmat","Ca\wheeled_E\stryker\Data\stryker_command_green_destruct.rvmat","Ca\wheeled_E\stryker\Data\stryker_body1_mortar_green.rvmat","Ca\wheeled_E\stryker\Data\stryker_body1_mortar_green_damage.rvmat","Ca\wheeled_E\stryker\Data\stryker_body1_mortar_green_destruct.rvmat","Ca\wheeled_E\stryker\Data\stryker_interior1_mortar_green.rvmat","Ca\wheeled_E\stryker\Data\stryker_interior1_mortar_green_damage.rvmat","Ca\wheeled_E\stryker\Data\stryker_interior1_mortar_green_destruct.rvmat","Ca\wheeled_E\stryker\Data\stryker_interior2.rvmat","Ca\wheeled_E\stryker\Data\stryker_interior2_damage.rvmat","Ca\wheeled_E\stryker\Data\stryker_interior2_destruct.rvmat","Ca\wheeled_E\stryker\Data\stryker_interior3_mortar.rvmat","Ca\wheeled_E\stryker\Data\stryker_interior3_mortar_damage.rvmat","Ca\wheeled_E\stryker\Data\stryker_interior3_mortar_destruct.rvmat","Ca\wheeled_E\stryker\Data\stryker_interior4_mortar.rvmat","Ca\wheeled_E\stryker\Data\stryker_interior4_mortar_damage.rvmat","Ca\wheeled_E\stryker\Data\stryker_interior4_mortar_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"M120"};
				turretInfoType = "RscWeaponRangeFinder";
				soundServo[] = {"\ca\wheeled\Data\Sound\servo3",0.017782794,1.0};
				magazines[] = {"24Rnd_120mmHE_M120_02"};
				gunnerOpticsModel = "\ca\weapons\optika_empty";
				memoryPointGunnerOptics = "gunnerview";
				visionMode[] = {};
				minTurn = -100;
				maxTurn = 100;
				initTurn = 0;
				minElev = -5;
				maxElev = 35;
				initElev = 0;
				gunBeg = "muzzle";
				gunEnd = "chamber";
				outGunnerMayFire = 0;
				inGunnerMayFire = 1;
			};
			class ObsTurret: ObsTurret
			{
				gunnerName = "$STR_POSITION_COMMANDER";
				memoryPointGunnerOptics = "commanderview";
			};
		};
		HiddenSelections[] = {"camo","camo1"};
		HiddenSelectionsTextures[] = {"ca\wheeled_e\stryker\data\stryker_body1_mortar_des_co.paa","ca\wheeled_e\stryker\data\stryker_body2_des_co.paa"};
	};
	class M1135_ATGMV_EP1: StrykerBase_EP1
	{
		scope = 2;
		model = "\ca\wheeled_E\stryker\M1135_ATGMV";
		picture = "\Ca\wheeled_e\data\UI\Picture_stryker_atg_mv_CA.paa";
		Icon = "\Ca\wheeled_e\data\UI\Icon_stryker_atgmv_CA.paa";
		mapSize = 8;
		displayName = "$STR_EP1_DN_M1135_ATGMV_EP1";
		transportSoldier = 0;
		memoryPointMissile[] = {"rocket_begin",""};
		memoryPointMissileDir[] = {"rocket_end",""};
		armor = 160;
		damageResistance = 0.0082;
		threat[] = {0,1,0};
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\wheeled_E\stryker\Data\stryker_tow_green.rvmat","Ca\wheeled_E\stryker\Data\stryker_tow_green_damage.rvmat","Ca\wheeled_E\stryker\Data\stryker_tow_green_destruct.rvmat","Ca\wheeled_E\stryker\Data\stryker_body1_green.rvmat","Ca\wheeled_E\stryker\Data\stryker_body1_green_damage.rvmat","Ca\wheeled_E\stryker\Data\stryker_body1_green_destruct.rvmat","Ca\wheeled_E\stryker\Data\stryker_body2_green.rvmat","Ca\wheeled_E\stryker\Data\stryker_body2_green_damage.rvmat","Ca\wheeled_E\stryker\Data\stryker_body2_green_destruct.rvmat","Ca\wheeled_E\stryker\Data\stryker_alfa_green.rvmat","Ca\wheeled_E\stryker\Data\stryker_alfa_green_damage.rvmat","Ca\wheeled_E\stryker\Data\stryker_alfa_green_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunBeg = "rocket_end";
				gunEnd = "rocket_begin";
				weapons[] = {"TOWLauncher","SmokeLauncher"};
				soundServo[] = {"\ca\wheeled\Data\Sound\servo3",0.017782794,1.0};
				magazines[] = {"2Rnd_TOW","2Rnd_TOW","2Rnd_TOW","2Rnd_TOW","2Rnd_TOW","SmokeLauncherMag","SmokeLauncherMag"};
				gunnerOpticsModel = "\ca\weapons_e\TOW_TI";
				gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
				gunnerForceOptics = 1;
				animationSourceHatch = "hatchCommander";
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.2;
					minFov = 0.025;
					maxFov = 0.2;
					visionMode[] = {"Normal","Ti"};
					thermalMode[] = {0,1};
				};
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 30;
			};
			class _xx_1Rnd_HE_M203
			{
				magazine = "1Rnd_HE_M203";
				count = 5;
			};
			class _xx_HandGrenade_West
			{
				magazine = "HandGrenade_West";
				count = 10;
			};
			class _xx_200Rnd_556x45_M249
			{
				magazine = "200Rnd_556x45_M249";
				count = 5;
			};
			class _xx_MAAWS_HEDP
			{
				magazine = "MAAWS_HEDP";
				count = 2;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 2;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
		};
		class TransportWeapons
		{
			class _xx_SCAR_L_STD_HOLO
			{
				weapon = "SCAR_L_STD_HOLO";
				count = 2;
			};
		};
		HiddenSelections[] = {"camo","camo1"};
		HiddenSelectionsTextures[] = {"ca\wheeled_e\stryker\data\stryker_body1_des_co.paa","ca\wheeled_e\stryker\data\stryker_body2_des_co.paa"};
	};
	class M1128_MGS_EP1: StrykerBase_EP1
	{
		scope = 2;
		model = "\ca\wheeled_E\stryker\M1128_MGS";
		picture = "\Ca\wheeled_e\data\UI\Picture_stryker_mgs_CA.paa";
		Icon = "\Ca\wheeled_e\data\UI\Icon_stryker_mgs_CA.paa";
		mapSize = 8;
		displayName = "$STR_EP1_DN_M1128_MGS_EP1";
		threat[] = {1,1,0.3};
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\wheeled_E\stryker\Data\ICV.rvmat","Ca\wheeled_E\stryker\Data\ICV_damage.rvmat","Ca\wheeled_E\stryker\Data\ICV_destruct.rvmat","Ca\wheeled_E\stryker\Data\stryker_mgs_body1_green.rvmat","Ca\wheeled_E\stryker\Data\stryker_mgs_body1_green_damage.rvmat","Ca\wheeled_E\stryker\Data\stryker_mgs_body1_green_destruct.rvmat","Ca\wheeled_E\stryker\Data\stryker_body2_green.rvmat","Ca\wheeled_E\stryker\Data\stryker_body2_green_damage.rvmat","Ca\wheeled_E\stryker\Data\stryker_body2_green_destruct.rvmat","Ca\wheeled_E\stryker\Data\stryker_mgs_green.rvmat","Ca\wheeled_E\stryker\Data\stryker_mgs_green_damage.rvmat","Ca\wheeled_E\stryker\Data\stryker_mgs_green_destruct.rvmat","Ca\wheeled_E\stryker\Data\stryker_alfa_green.rvmat","Ca\wheeled_E\stryker\Data\stryker_alfa_green_damage.rvmat","Ca\wheeled_E\stryker\Data\stryker_alfa_green_destruct.rvmat","Ca\wheeled_E\stryker\Data\stryker_interior1.rvmat","Ca\wheeled_E\stryker\Data\stryker_interior1_damage.rvmat","Ca\wheeled_E\stryker\Data\stryker_interior1_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "M2";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "M2";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "M2";
			};
			class recoil_source
			{
				source = "reload";
				weapon = "M68";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"M68","M2","SmokeLauncher"};
				magazines[] = {"6RND_105mm_APDS","12Rnd_105mm_HESH","100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2","SmokeLauncherMag","SmokeLauncherMag"};
				soundServo[] = {"\ca\wheeled\Data\Sound\servo3",0.017782794,1.0};
				minElev = -5;
				maxElev = 50;
				initElev = 0;
				memoryPointGun = "machinegun";
				selectionFireAnim = "zasleh_1";
				gunBeg = "konec hlavne";
				gunEnd = "usti hlavne";
				body = "MainTurret";
				gun = "MainGun";
				animationSourceBody = "MainTurret";
				animationSourceGun = "MainGun";
				gunnerForceOptics = 1;
				outGunnerMayFire = 0;
				startEngine = 1;
				primaryGunner = 0;
				primaryObserver = 1;
				commanding = 1;
				gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
				class OpticsIn
				{
					class Wide
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.155;
						minFov = 0.155;
						maxFov = 0.155;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsModel = "CA\Tracked_E\gunnerOptics_M1A1";
						gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
					};
					class Narrow: Wide
					{
						gunnerOpticsModel = "CA\Tracked_E\gunnerOptics_M1A1_2";
						gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
						initFov = 0.047;
						minFov = 0.047;
						maxFov = 0.047;
					};
				};
				class Turrets{};
			};
		};
		HiddenSelections[] = {"camo","camo1","camo2"};
		HiddenSelectionsTextures[] = {"ca\wheeled_e\stryker\data\stryker_mgs_body1_des_co.paa","ca\wheeled_e\stryker\data\stryker_body2_des_co.paa","ca\wheeled_e\stryker\data\stryker_mgs_des_co.paa"};
	};
	class M1133_MEV_EP1: StrykerBase_EP1
	{
		scope = 2;
		model = "\ca\wheeled_E\stryker\M1133_MEV";
		picture = "\Ca\wheeled_e\data\UI\Picture_stryker_mev_CA.paa";
		Icon = "\Ca\wheeled_e\data\UI\Icon_stryker_mev_CA.paa";
		mapSize = 8;
		displayName = "$STR_EP1_DN_M1133_MEV_EP1";
		vehicleClass = "Support";
		armor = 160;
		damageResistance = 0.0082;
		threat[] = {0,0,0};
		attendant = 1;
		memoryPointSupply = "ramp";
		transportSoldier = 4;
		class Turrets{};
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\wheeled_E\stryker\Data\stryker_body1_green.rvmat","Ca\wheeled_E\stryker\Data\stryker_body1_green_damage.rvmat","Ca\wheeled_E\stryker\Data\stryker_body1_green_destruct.rvmat","Ca\wheeled_E\stryker\Data\stryker_body2_green.rvmat","Ca\wheeled_E\stryker\Data\stryker_body2_green_damage.rvmat","Ca\wheeled_E\stryker\Data\stryker_body2_green_destruct.rvmat","Ca\wheeled_E\stryker\Data\stryker_alfa_green.rvmat","Ca\wheeled_E\stryker\Data\stryker_alfa_green_damage.rvmat","Ca\wheeled_E\stryker\Data\stryker_alfa_green_destruct.rvmat","Ca\wheeled_E\stryker\Data\stryker_medevac_green.rvmat","Ca\wheeled_E\stryker\Data\stryker_medevac_green_damage.rvmat","Ca\wheeled_E\stryker\Data\stryker_medevac_green_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
		HiddenSelections[] = {"camo","camo1"};
		HiddenSelectionsTextures[] = {"ca\wheeled_e\stryker\data\stryker_body1_des_co.paa","ca\wheeled_e\stryker\data\stryker_body2_des_co.paa"};
		dammageHalf[] = {};
		dammageFull[] = {};
	};
};
//};

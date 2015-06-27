////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:13:36 2014 : Source 'file' date Fri Oct 31 06:13:36 2014
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

//Class wheeled_e : LR\config.bin{
class CfgPatches
{
	class CAWheeled_E_LandRover
	{
		units[] = {"LandRover_CZ_EP1","LandRover_TK_CIV_EP1","LandRover_MG_TK_INS_EP1","LandRover_MG_TK_EP1","LandRover_Special_CZ_EP1","LandRover_SPG9_TK_INS_EP1","LandRover_SPG9_TK_EP1"};
		weapons[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {"CA_E","CAWheeled_E","CACharacters_E"};
	};
};
class WeaponCloudsMGun;
class CfgVehicles
{
	class Land;
	class LandVehicle: Land
	{
		class NewTurret;
	};
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
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
		};
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
			};
		};
		class AnimationSources;
	};
	class LandRover_Base: Car
	{
		brakeDistance = 12.5;
		expansion = 1;
		enableManualFire = 0;
		htMin = 60;
		htMax = 1800;
		afMax = 100;
		mfMax = 80;
		mFact = 1;
		tBody = 250;
		scope = 0;
		displayname = "$STR_EP1_DN_LandRover_Base";
		maxSpeed = 150;
		terrainCoef = 3.0;
		turnCoef = 3;
		armor = 30;
		damageResistance = 0.00719;
		model = "\ca\wheeled_E\LR\LR";
		Picture = "\CA\wheeled_e\Data\UI\Picture_lr_CA.paa";
		Icon = "\CA\wheeled_e\Data\UI\Icon_lr_transport_CA.paa";
		MapSize = 6;
		outsideSoundFilter = 1;
		insideSoundCoef = 0.9;
		soundGear[] = {"",5.6234134e-005,1};
		soundGetIn[] = {"\ca\Sounds_E\Wheeled_E\LandRover\LRover_door",1.0,1};
		soundGetOut[] = {"\ca\Sounds_E\Wheeled_E\LandRover\LRover_door",1.0,1,30};
		soundEngineOnInt[] = {"\ca\Sounds_E\Wheeled_E\LandRover\LRover_int_start",1.0,1.0};
		soundEngineOnExt[] = {"\ca\Sounds_E\Wheeled_E\LandRover\LRover_ext_start",1.0,1.0,100};
		soundEngineOffInt[] = {"\ca\Sounds_E\Wheeled_E\LandRover\LRover_int_stop",1.0,1.0};
		soundEngineOffExt[] = {"\ca\Sounds_E\Wheeled_E\LandRover\LRover_ext_stop",1.0,1.0,100};
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
				sound[] = {"\ca\Sounds_E\Wheeled_E\LandRover\LRover_int_acceleration",0.56234133,1.0};
				limit = "0.15";
				expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
			class AccelerationOut
			{
				sound[] = {"\ca\Sounds_E\Wheeled_E\LandRover\LRover_ext_acceleration",0.56234133,1.0,300};
				limit = "0.15";
				expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
		};
		class Sounds
		{
			class Engine
			{
				sound[] = {"\ca\Sounds_E\Wheeled_E\LandRover\LRover_ext_low",1.4125376,0.6,200};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "camPos*engineOn*((rpm factor[0.3, 0.4]) min (rpm factor[0.7, 0.5]))";
			};
			class EngineHighOut
			{
				sound[] = {"\ca\Sounds_E\Wheeled_E\LandRover\LRover_ext_high",1.4125376,0.6,300};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "camPos*engineOn*(rpm factor[0.5, 0.8])";
			};
			class IdleOut
			{
				sound[] = {"\ca\Sounds_E\Wheeled_E\LandRover\LRover_ext_idle",0.56234133,1.0,100};
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
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise3",0.56234133,1.0,50};
				frequency = "1";
				volume = "camPos*(damper0 max 0.04)*(speed factor[0, 8])";
			};
			class EngineLowIn
			{
				sound[] = {"\ca\Sounds_E\Wheeled_E\LandRover\LRover_int_low",1.4125376,0.6};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "(1-camPos)*engineOn*((rpm factor[0.3, 0.4]) min (rpm factor[0.7, 0.5]))";
			};
			class EngineHighIn
			{
				sound[] = {"\ca\Sounds_E\Wheeled_E\LandRover\LRover_int_high",1.4125376,0.6};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "(1-camPos)*engineOn*(rpm factor[0.5, 0.8])";
			};
			class IdleIn
			{
				sound[] = {"\ca\Sounds_E\Wheeled_E\LandRover\LRover_int_idle",0.7943282,1.0};
				frequency = "1";
				volume = "engineOn*(rpm factor[0.4, 0])*(1-camPos)";
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
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\int\noise4",0.31622776,1.0};
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
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_LandRover";
		};
		transportSoldier = 7;
		driverAction = "LR_Driver_EP1";
		cargoAction[] = {"LR_Cargo01_EP1","LR_Cargo02_EP1","LR_Cargo03_EP1","LR_Cargo05_EP1","LR_Cargo04_EP1","LR_Cargo02_EP1","LR_Cargo03_EP1"};
		cargoIsCoDriver[] = {1,0};
		class HitPoints: HitPoints
		{
			class HitEngine
			{
				armor = 2;
				material = -1;
				name = "motor";
				passThrough = 0;
			};
			class HitFuel
			{
				armor = 1;
				material = -1;
				name = "palivo";
				passThrough = 0;
			};
			class HitLFWheel: HitLFWheel
			{
				armor = 0.5;
			};
			class HitLBWheel: HitLBWheel
			{
				armor = 0.5;
			};
			class HitRFWheel: HitRFWheel
			{
				armor = 0.5;
			};
			class HitRBWheel: HitRBWheel
			{
				armor = 0.5;
			};
		};
		hiddenSelections[] = {};
		threat[] = {0.0,0.0,0.0};
	};
	class LandRover_CZ_EP1: LandRover_Base
	{
		scope = 2;
		side = 1;
		faction = "BIS_CZ";
		crew = "CZ_Soldier_DES_EP1";
		typicalCargo[] = {"CZ_Soldier_DES_EP1","CZ_Soldier_DES_EP1"};
		class Turrets{};
		class HitPoints: HitPoints
		{
			class HitGlass1: HitGlass1
			{
				armor = 0.15;
			};
			class HitGlass2: HitGlass2
			{
				armor = 0.1;
			};
			class HitGlass3: HitGlass3
			{
				armor = 0.1;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\wheeled_E\LR\Data\LR_base.rvmat","ca\wheeled_E\LR\Data\LR_base_damage.rvmat","ca\wheeled_E\LR\Data\LR_base_destruct.rvmat","ca\wheeled_E\LR\Data\LR_glass.rvmat","ca\wheeled_E\LR\Data\LR_glass_damage.rvmat","ca\wheeled_E\LR\Data\LR_glass_destruct.rvmat","ca\wheeled_E\LR\Data\LR_Special.rvmat","ca\wheeled_E\LR\Data\LR_Special_damage.rvmat","ca\wheeled_E\LR\Data\LR_Special_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_762x39_AK47
			{
				magazine = "30Rnd_762x39_AK47";
				count = 15;
			};
			class _xx_HandGrenade_West
			{
				magazine = "HandGrenade_West";
				count = 2;
			};
		};
		class TransportWeapons{};
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
	};
	class LandRover_TK_CIV_EP1: LandRover_CZ_EP1
	{
		scope = 2;
		side = 3;
		faction = "BIS_TK_CIV";
		crew = "TK_CIV_Takistani01_EP1";
		typicalCargo[] = {"TK_CIV_Takistani01_EP1","TK_CIV_Takistani01_EP1"};
		class Turrets{};
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\ca\wheeled_E\LR\Data\LR_Base_red_CO.paa"};
		class NVGMarkers{};
	};
	class LandRover_MG_Base_EP1: LandRover_Base
	{
		model = "\ca\wheeled_E\LR\LR_MG";
		displayname = "$STR_EP1_DN_LandRover_MG_Base_EP1";
		Picture = "\CA\wheeled_e\Data\UI\Picture_lr_mg_CA.paa";
		Icon = "\CA\wheeled_e\Data\UI\Icon_lr_mg_CA.paa";
		transportSoldier = 1;
		cargoAction[] = {"LR_Cargo01_EP1"};
		threat[] = {1,0.1,0.3};
		class HitPoints: HitPoints
		{
			class HitGlass1: HitGlass1
			{
				armor = 0.51;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\wheeled_E\LR\Data\LR_base.rvmat","ca\wheeled_E\LR\Data\LR_base_damage.rvmat","ca\wheeled_E\LR\Data\LR_base_destruct.rvmat","ca\wheeled_E\LR\Data\LR_glass.rvmat","ca\wheeled_E\LR\Data\LR_glass_damage.rvmat","ca\wheeled_E\LR\Data\LR_glass_destruct.rvmat","ca\wheeled_E\LR\Data\LR_MG-SPG9.rvmat","ca\wheeled_E\LR\Data\LR_MG-SPG9_damage.rvmat","ca\wheeled_E\LR\Data\LR_MG-SPG9_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				body = "mainTurret";
				gun = "mainGun";
				hasGunner = 1;
				weapons[] = {"M2"};
				minElev = -25;
				maxElev = 60;
				soundServo[] = {"\ca\wheeled\Data\Sound\servo3",1e-006,1.0};
				magazines[] = {"100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2"};
				gunnerAction = "LR_Gunner_EP1";
				ejectDeadGunner = 1;
				castGunnerShadow = 1;
				stabilizedInAxes = "StabilizedInAxesNone";
			};
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
		};
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_LandRover_MG";
		};
	};
	class LandRover_MG_TK_INS_EP1: LandRover_MG_Base_EP1
	{
		scope = 2;
		side = 0;
		faction = "BIS_TK_INS";
		crew = "TK_INS_Soldier_EP1";
		typicalCargo[] = {"TK_INS_Soldier_EP1","TK_INS_Soldier_EP1"};
	};
	class LandRover_MG_TK_EP1: LandRover_MG_Base_EP1
	{
		scope = 2;
		side = 0;
		faction = "BIS_TK";
		crew = "TK_Soldier_EP1";
		typicalCargo[] = {"TK_Soldier_EP1","TK_Soldier_EP1"};
		class TransportMagazines
		{
			class _xx_20Rnd_762x51_FNFAL
			{
				magazine = "20Rnd_762x51_FNFAL";
				count = 15;
			};
			class _xx_HandGrenade_East
			{
				magazine = "HandGrenade_East";
				count = 2;
			};
		};
		class TransportWeapons{};
	};
	class LandRover_Special_CZ_EP1: LandRover_Base
	{
		scope = 2;
		side = 1;
		faction = "BIS_CZ";
		crew = "CZ_Soldier_DES_EP1";
		typicalCargo[] = {"CZ_Soldier_DES_EP1","CZ_Soldier_DES_EP1"};
		model = "\ca\wheeled_E\LR\LR_Special";
		displayname = "$STR_EP1_DN_LandRover_Special_CZ_EP1";
		Picture = "\CA\wheeled_e\Data\UI\Picture_lr_special_CA.paa";
		Icon = "\CA\wheeled_e\Data\UI\Icon_lr_special_CA.paa";
		transportSoldier = 2;
		cargoIsCoDriver[] = {0};
		cargoAction[] = {"LR_Cargo03_EP1","LR_Cargo02_EP1"};
		threat[] = {1,0.2,0.3};
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\wheeled_E\LR\Data\LR_base.rvmat","ca\wheeled_E\LR\Data\LR_base_damage.rvmat","ca\wheeled_E\LR\Data\LR_base_destruct.rvmat","ca\wheeled_E\LR\Data\LR_glass.rvmat","ca\wheeled_E\LR\Data\LR_glass_damage.rvmat","ca\wheeled_E\LR\Data\LR_glass_destruct.rvmat","ca\wheeled_E\LR\Data\LR_Special.rvmat","ca\wheeled_E\LR\Data\LR_Special_damage.rvmat","ca\wheeled_E\LR\Data\LR_Special_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
		class Turrets: Turrets
		{
			class AGS30_Turret: MainTurret
			{
				body = "mainTurret";
				gun = "mainGun";
				gunnerForceOptics = 0;
				gunnerOutOpticsShowCursor = 0;
				weapons[] = {"AGS30"};
				magazines[] = {"29Rnd_30mm_AGS30","29Rnd_30mm_AGS30","29Rnd_30mm_AGS30","29Rnd_30mm_AGS30","29Rnd_30mm_AGS30","29Rnd_30mm_AGS30"};
				soundServo[] = {"\ca\sounds\vehicles\servos\turret-1",0.031622775,1.0,15};
				gunnerAction = "LR_Gunner01_EP1";
				gunnerInAction = "LR_Gunner01_EP1";
				ejectDeadGunner = 1;
				gunnerOpticsModel = "\ca\weapons\optika_AGS30";
				class GunFire: WeaponCloudsMGun
				{
					interval = 0.01;
				};
				class ViewOptics: ViewOptics
				{
					initFov = 0.2;
					minFov = 0.058;
					maxFov = 0.2;
				};
				stabilizedInAxes = "StabilizedInAxesNone";
				minElev = -18;
			};
			class PK_Turret: MainTurret
			{
				gunnerName = "$STR_POSITION_COMMANDER";
				primaryGunner = 0;
				primaryObserver = 1;
				commanding = 2;
				body = "mainTurret_2";
				gun = "mainGun_2";
				animationSourceBody = "mainTurret_2";
				animationSourceGun = "mainGun_2";
				proxyIndex = 2;
				gunBeg = "usti hlavne_2";
				gunEnd = "konec hlavne_2";
				memoryPointGunnerOptics = "gunnerview_2";
				minElev = -18;
				maxElev = 40;
				minTurn = -45;
				maxTurn = 45;
				initTurn = 0;
				gunnerOpticsModel = "\ca\Weapons\optika_empty";
				gunnerForceOptics = 0;
				weapons[] = {"PKT"};
				magazines[] = {"100Rnd_762x54_PK","100Rnd_762x54_PK","100Rnd_762x54_PK","100Rnd_762x54_PK"};
				soundServo[] = {};
				gunnerAction = "LR_Gunner02_EP1";
				gunnerInAction = "LR_Gunner02_EP1";
				ejectDeadGunner = 1;
				stabilizedInAxes = "StabilizedInAxesNone";
				memoryPointsGetInGunner = "pos codriver";
				memoryPointsGetInGunnerDir = "pos codriver dir";
			};
		};
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
			class ReloadAnim_2
			{
				source = "reload";
				weapon = "PKT";
			};
			class ReloadMagazine_2
			{
				source = "reloadmagazine";
				weapon = "PKT";
			};
			class Revolving_2
			{
				source = "revolving";
				weapon = "PKT";
			};
		};
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_LandRover_Special_CZ";
		};
		class TransportMagazines
		{
			class _xx_30Rnd_762x39_AK47
			{
				magazine = "30Rnd_762x39_AK47";
				count = 15;
			};
			class _xx_HandGrenade_West
			{
				magazine = "HandGrenade_West";
				count = 2;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 2;
			};
		};
		class TransportWeapons{};
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
	};
	class LandRover_SPG9_Base_EP1: LandRover_Base
	{
		transportSoldier = 1;
		model = "\ca\wheeled_E\LR\LR_SPG9";
		displayname = "$STR_EP1_DN_LandRover_SPG9_Base_EP1";
		Picture = "\CA\wheeled_e\Data\UI\Picture_lr_spg9_CA.paa";
		Icon = "\CA\wheeled_e\Data\UI\Icon_lr_spg9_CA.paa";
		cargoAction[] = {"LR_Cargo01_EP1"};
		class HitPoints: HitPoints
		{
			class HitGlass1: HitGlass1
			{
				armor = 0.51;
			};
		};
		threat[] = {0.6,0.6,0.1};
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\wheeled_E\LR\Data\LR_base.rvmat","ca\wheeled_E\LR\Data\LR_base_damage.rvmat","ca\wheeled_E\LR\Data\LR_base_destruct.rvmat","ca\wheeled_E\LR\Data\LR_glass.rvmat","ca\wheeled_E\LR\Data\LR_glass_damage.rvmat","ca\wheeled_E\LR\Data\LR_glass_destruct.rvmat","ca\wheeled_E\LR\Data\LR_MG-SPG9.rvmat","ca\wheeled_E\LR\Data\LR_MG-SPG9_damage.rvmat","ca\wheeled_E\LR\Data\LR_MG-SPG9_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				body = "mainTurret";
				gun = "mainGun";
				hasGunner = 1;
				minElev = -25;
				maxElev = 60;
				soundServo[] = {"\ca\wheeled\Data\Sound\servo3",1e-006,1.0};
				gunnerAction = "LR_gunner03_EP1";
				ejectDeadGunner = 1;
				castGunnerShadow = 1;
				gunnerOpticsModel = "\ca\weapons\2Dscope_SPG_4";
				class ViewOptics: ViewOptics
				{
					initFov = 0.2;
					minFov = 0.058;
					maxFov = 0.2;
				};
				weapons[] = {"SPG9"};
				magazines[] = {"PG9_AT","OG9_HE","PG9_AT","OG9_HE","PG9_AT","OG9_HE","PG9_AT","OG9_HE","PG9_AT","OG9_HE","PG9_AT","OG9_HE","PG9_AT","OG9_HE","PG9_AT","OG9_HE"};
				stabilizedInAxes = "StabilizedInAxesNone";
			};
		};
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_LandRover_SPG9";
		};
	};
	class LandRover_SPG9_TK_INS_EP1: LandRover_SPG9_Base_EP1
	{
		scope = 2;
		side = 0;
		faction = "BIS_TK_INS";
		crew = "TK_INS_Soldier_EP1";
		typicalCargo[] = {"TK_INS_Soldier_EP1","TK_INS_Soldier_EP1"};
		class TransportMagazines
		{
			class _xx_20Rnd_762x51_FNFAL
			{
				magazine = "20Rnd_762x51_FNFAL";
				count = 15;
			};
			class _xx_HandGrenade_East
			{
				magazine = "HandGrenade_East";
				count = 2;
			};
		};
		class TransportWeapons{};
	};
	class LandRover_SPG9_TK_EP1: LandRover_SPG9_Base_EP1
	{
		scope = 2;
		side = 0;
		faction = "BIS_TK";
		crew = "TK_Soldier_EP1";
		typicalCargo[] = {"TK_Soldier_EP1","TK_Soldier_EP1"};
		class TransportMagazines
		{
			class _xx_20Rnd_762x51_FNFAL
			{
				magazine = "20Rnd_762x51_FNFAL";
				count = 15;
			};
			class _xx_HandGrenade_East
			{
				magazine = "HandGrenade_East";
				count = 2;
			};
		};
		class TransportWeapons{};
	};
};
//};

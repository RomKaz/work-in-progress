////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:07:18 2014 : Source 'file' date Fri Oct 31 06:07:18 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=8
enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	destructno = 0,
	destructman = 5,
	destructbuilding = 1
};

//Class wheeled_acr : dingo\config.bin{
class _xx_100Rnd_762x54_PK
{
	magazine = "100Rnd_762x54_PK";
	count = "5*x";
};
class _xx_HandGrenade_West
{
	magazine = "HandGrenade_West";
	count = "6*x";
};
class _xx_SmokeShell
{
	magazine = "SmokeShell";
	count = "6*x";
};
class _xx_SmokeShellRed
{
	magazine = "SmokeShellRed";
	count = "2*x";
};
class CfgPatches
{
	class CAWheeled_ACR_Dingo
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.5;
		requiredAddons[] = {"CAWheeled_ACR"};
	};
};
class CfgVehicles
{
	class Land;
	class LandVehicle: Land
	{
		class NewTurret;
		class Sounds;
	};
	class Car: LandVehicle
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
			};
		};
		class AnimationSources;
		class HitPoints
		{
			class HitLFWheel;
			class HitLBWheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
	};
	class Dingo_Base_ACR: Car
	{
		expansion = 3;
		scope = 0;
		side = 1;
		accuracy = 0.3;
		faction = "USMC";
		wheelCircumference = 3.5168;
		model = "\CA\Wheeled_ACR\Dingo\AMT_Dingo2a2_MG";
		Picture = "\Ca\Wheeled_ACR\Data\UI\Picture_Dingo2MG_CA.paa";
		Icon = "\Ca\Wheeled_ACR\Data\UI\Icon_Dingo2_CA.paa";
		mapSize = 5;
		displayName = "$STR_ACR_DN_DINGO_MG";
		crew = "CZ_Soldier_805_Wdl_ACR";
		typicalCargo[] = {"CZ_Soldier_805_Wdl_ACR","CZ_Soldier_805_Wdl_ACR","CZ_Soldier_805_Wdl_ACR"};
		damperSize = 0.2;
		damperForce = 1;
		damperDamping = 1;
		htMin = 60;
		htMax = 1800;
		afMax = 200;
		mfMax = 100;
		mFact = 1;
		tBody = 200;
		armor = 40;
		armorGlass = 0.05;
		armorWheels = 0.1;
		damageResistance = 0.00562;
		turnCoef = 4;
		steerAheadPlan = 0.2;
		steerAheadSimul = 0.4;
		predictTurnPlan = 0.9;
		predictTurnSimul = 0.5;
		brakeDistance = 8.5;
		terrainCoef = 2.0;
		enableGPS = 1;
		type = 1;
		cost = 100000;
		soundServo[] = {"\Ca\sounds\Vehicles\Servos\turret-1",0.01,1.0,10};
		soundEnviron[] = {"",0.56234133,1};
		transportSoldier = 4;
		transportMaxBackpacks = 6;
		class Library
		{
			libTextDesc = "$STR_ACR_LIB_DINGO";
		};
		driverAction = "HMMWV_Driver_EP1";
		cargoAction[] = {"HMMWV_Cargo_EP1","HMMWV_Cargo02_EP1"};
		cargoIsCoDriver[] = {1,0};
		castDriverShadow = 0;
		radarType = 4;
		unitInfoType = "UnitInfoShip";
		threat[] = {1,0.1,0.4};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gun = "mainGun";
				body = "mainTurret";
				hasGunner = 1;
				weapons[] = {"MG3A1_veh_ACR"};
				magazines[] = {"100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240"};
				minElev = -25;
				maxElev = 60;
				gunnerAction = "HMMWV_Gunner04_EP1";
				viewGunnerInExternal = 0;
				castGunnerShadow = 1;
				stabilizedInAxes = "StabilizedInAxesBoth";
				turretInfoType = "RscWeaponRangeZeroing";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
				discreteDistanceInitIndex = 5;
				gunnerOpticsModel = "\ca\Weapons\2Dscope_RWS";
				gunnerForceOptics = 1;
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 60;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.3;
					minFov = 0.015;
					maxFov = 0.3;
					visionMode[] = {"Normal","NVG","Ti"};
					thermalMode[] = {0,1};
				};
				soundServo[] = {"\Ca\sounds\Vehicles\Servos\turret-1",0.01,1.0,10};
			};
		};
		class AnimationSources: AnimationSources
		{
			class HitGlass1;
			class HitGlass5: HitGlass1
			{
				hitpoint = "HitGlass5";
			};
		};
		class HitPoints: HitPoints
		{
			class HitEngine
			{
				armor = 0.5;
				material = -1;
				name = "engine";
				visual = "";
				passThrough = 1;
			};
			class HitGlass1: HitGlass1
			{
				armor = 1;
			};
			class HitGlass2: HitGlass2
			{
				armor = 1;
			};
			class HitGlass3: HitGlass3
			{
				armor = 1;
			};
			class HitGlass4: HitGlass4
			{
				armor = 1;
			};
			class HitGlass5: HitGlass4
			{
				name = "glass5";
				visual = "glass5";
			};
			class HitLFWheel: HitLFWheel
			{
				armor = 0.15;
			};
			class HitLBWheel: HitLBWheel
			{
				armor = 0.15;
			};
			class HitRFWheel: HitRFWheel
			{
				armor = 0.15;
			};
			class HitRBWheel: HitRBWheel
			{
				armor = 0.15;
			};
			class HitFuel
			{
				armor = 0.14;
				material = -1;
				name = "fueltank";
				visual = "";
				passThrough = 1;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"CA\Wheeled_ACR\Dingo\Data\karrosse.rvmat","CA\Wheeled_ACR\Dingo\Data\karrosse_dam.rvmat","CA\Wheeled_ACR\Dingo\Data\karrosse_des.rvmat","CA\Wheeled_ACR\Dingo\Data\karrosse_innen.rvmat","CA\Wheeled_ACR\Dingo\Data\karrosse_innen.rvmat","CA\Wheeled_ACR\Dingo\Data\karrosse_innen_des.rvmat","CA\Wheeled_ACR\Dingo\Data\teile.rvmat","CA\Wheeled_ACR\Dingo\Data\teile_dam.rvmat","CA\Wheeled_ACR\Dingo\Data\teile_des.rvmat","CA\Wheeled_ACR\Dingo\Data\teile_innen.rvmat","CA\Wheeled_ACR\Dingo\Data\teile_innen.rvmat","CA\Wheeled_ACR\Dingo\Data\teile_innen_des.rvmat","CA\Wheeled_ACR\Dingo\Data\FLW200.rvmat","CA\Wheeled_ACR\Dingo\Data\FLW200_dam.rvmat","CA\Wheeled_ACR\Dingo\Data\FLW200_des.rvmat","CA\Wheeled_ACR\Dingo\Data\plane.rvmat","CA\Wheeled_ACR\Dingo\Data\plane_dam.rvmat","CA\Wheeled_ACR\Dingo\Data\FLW200_des.rvmat","CA\Wheeled_ACR\Dingo\Data\alpha_glass.rvmat","CA\Wheeled_ACR\Dingo\Data\alpha_glass_dam.rvmat","CA\Wheeled_ACR\Dingo\Data\alpha_glass_des.rvmat"};
		};
		HiddenSelections[] = {"camo1","camo2","camo5","camo6"};
		HiddenSelectionsTextures[] = {"\ca\wheeled_acr\dingo\data\acr_karosse_wdl_co","\ca\wheeled_acr\dingo\data\a_teile_co","\ca\wheeled_acr\dingo\data\FLW100_co","\ca\wheeled_acr\dingo\data\FLW200_co"};
		soundGear[] = {"",0.00017782794,1};
		insideSoundCoef = 0.8;
		SoundGetIn[] = {"ca\Sounds_ACR\wheeled\Dingo\door",0.56234133,1};
		SoundGetOut[] = {"ca\Sounds_ACR\wheeled\Dingo\door",0.56234133,1,40};
		soundEngineOnInt[] = {"ca\Sounds_ACR\wheeled\Dingo\Dingo_int_start",0.56234133,1.0};
		soundEngineOnExt[] = {"ca\Sounds_ACR\wheeled\Dingo\Dingo_ext_start",0.56234133,1.0,250};
		soundEngineOffInt[] = {"ca\Sounds_ACR\wheeled\Dingo\Dingo_int_stop",0.56234133,1.0};
		soundEngineOffExt[] = {"ca\Sounds_ACR\wheeled\Dingo\Dingo_ext_stop",0.56234133,1.0,250};
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
				sound[] = {"ca\Sounds_ACR\wheeled\Dingo\Dingo_int_acce",0.1,1.0};
				limit = "0.15";
				expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
			class AccelerationOut
			{
				sound[] = {"ca\Sounds_ACR\wheeled\Dingo\Dingo_ext_acce",0.1,1.0,200};
				limit = "0.15";
				expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
		};
		class Sounds
		{
			class Engine
			{
				sound[] = {"ca\Sounds_ACR\wheeled\Dingo\Dingo_ext_mid",1.0,1.5,200};
				frequency = "(1.0+rpm)*0.3";
				volume = "engineOn*camPos*((rpm factor[0.2, 0.4])+ (rpm factor[0.8, 0.5]))";
			};
			class EngineHighOut
			{
				sound[] = {"ca\Sounds_ACR\wheeled\Dingo\Dingo_ext_high",1.0,1.5,250};
				frequency = "(1.0+rpm)*0.3";
				volume = "engineOn*camPos*(rpm factor[0.3, 0.9])";
			};
			class IdleOut
			{
				sound[] = {"ca\Sounds_ACR\wheeled\Dingo\Dingo_ext_idle",1.0,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*(rpm factor[0.6, 0.05])";
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
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise2",0.056234132,1.0,30};
				frequency = "1";
				volume = "camPos*(damper0 max 0.03)*(speed factor[0, 8])";
			};
			class EngineLowIn
			{
				sound[] = {"ca\Sounds_ACR\wheeled\Dingo\Dingo_int_mid",1.0,1.0,200};
				frequency = "(1.0+rpm)*0.3";
				volume = "engineOn*(1-camPos)*((rpm factor[0.4, 0.2])+ (rpm factor[0.8, 0.5]))";
			};
			class EngineHighIn
			{
				sound[] = {"ca\Sounds_ACR\wheeled\Dingo\Dingo_int_high",1.0,1.0,250};
				frequency = "(1.0+rpm)*0.3";
				volume = "engineOn*(1-camPos)*(rpm factor[0.3, 0.9])";
			};
			class IdleIn
			{
				sound[] = {"ca\Sounds_ACR\wheeled\Dingo\Dingo_int_idle",1.0,1.0,200};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(rpm factor[0.3, 0.05])";
			};
			class TiresRockIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2",1.0,1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2",1.0,1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass2",1.0,1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2",1.0,1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2",1.0,1.0};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3",1.0,1.0};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\int\noise2",0.0056234132,1.0};
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
	};
	class Dingo_WDL_ACR: Dingo_Base_ACR
	{
		scope = 2;
		side = 1;
		faction = "BIS_CZ";
		vehicleClass = "ArmouredW";
		class TransportMagazines{};
		class TransportWeapons{};
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "MG3A1_veh_ACR";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "MG3A1_veh_ACR";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "MG3A1_veh_ACR";
			};
		};
	};
	class Dingo_DST_ACR: Dingo_WDL_ACR
	{
		vehicleClass = "Armored";
		HiddenSelectionsTextures[] = {"\ca\wheeled_acr\dingo\data\ACR_karosse_des_co","\ca\wheeled_acr\dingo\data\ACR_DES_a_teile_co","\ca\wheeled_acr\dingo\data\FLW100_DES_co","\ca\wheeled_acr\dingo\data\FLW200_DES_co"};
		crew = "CZ_Soldier805_DES_ACR";
		typicalCargo[] = {"CZ_Soldier805_DES_ACR","CZ_Soldier805_DES_ACR","CZ_Soldier805_DES_ACR"};
	};
	class Dingo_GL_Wdl_ACR: Dingo_Base_ACR
	{
		scope = 2;
		side = 1;
		faction = "BIS_CZ";
		vehicleClass = "ArmouredW";
		displayname = "$STR_ACR_DN_DINGO_GL";
		model = "\CA\Wheeled_ACR\Dingo\AMT_Dingo2a2";
		Picture = "\Ca\Wheeled_ACR\Data\UI\Picture_Dingo2_CA.paa";
		class TransportMagazines{};
		class TransportWeapons{};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gun = "mainGun";
				body = "mainTurret";
				hasGunner = 1;
				weapons[] = {"GMG_veh_ACR"};
				magazines[] = {"48Rnd_40mm_MK19","48Rnd_40mm_MK19","48Rnd_40mm_MK19","48Rnd_40mm_MK19"};
				minElev = -25;
				maxElev = 60;
				gunnerAction = "HMMWV_Gunner04_EP1";
				viewGunnerInExternal = 0;
				castGunnerShadow = 1;
				stabilizedInAxes = "StabilizedInAxesBoth";
				turretInfoType = "RscWeaponRangeZeroing";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
				discreteDistanceInitIndex = 5;
				gunnerOpticsModel = "\ca\Weapons\2Dscope_RWS";
				gunnerForceOptics = 1;
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 60;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.3;
					minFov = 0.015;
					maxFov = 0.3;
					visionMode[] = {"Normal","NVG","Ti"};
					thermalMode[] = {0,1};
				};
				soundServo[] = {"\Ca\sounds\Vehicles\Servos\turret-1",0.01,1.0,10};
			};
		};
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "GMG_veh_ACR";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "GMG_veh_ACR";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "GMG_veh_ACR";
			};
		};
	};
	class Dingo_GL_DST_ACR: Dingo_GL_Wdl_ACR
	{
		vehicleClass = "Armored";
		HiddenSelectionsTextures[] = {"\ca\wheeled_acr\dingo\data\ACR_karosse_des_co","\ca\wheeled_acr\dingo\data\ACR_DES_a_teile_co","\ca\wheeled_acr\dingo\data\FLW100_DES_co","\ca\wheeled_acr\dingo\data\FLW200_DES_co"};
		crew = "CZ_Soldier805_DES_ACR";
		typicalCargo[] = {"CZ_Soldier805_DES_ACR","CZ_Soldier805_DES_ACR","CZ_Soldier805_DES_ACR"};
	};
};
//};

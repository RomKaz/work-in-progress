////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:13:12 2014 : Source 'file' date Fri Oct 31 06:13:12 2014
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

//Class tracked_e : T55\config.bin{
class CfgPatches
{
	class CATracked_E_T55
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {"CATracked_E"};
	};
};
class CfgVehicles
{
	class Land;
	class LandVehicle: Land
	{
		class NewTurret;
		class ViewOptics;
	};
	class Tank: LandVehicle
	{
		class HitPoints;
		class Turrets
		{
			class MainTurret;
		};
		class ViewOptics: ViewOptics{};
	};
	class T55_Base: Tank
	{
		displayName = "$STR_EP1_DN_T55";
		model = "\ca\tracked_e\T55\T55";
		picture = "\ca\tracked_e\Data\UI\Picture_t55_CA.paa";
		Icon = "\ca\tracked_e\Data\UI\Icon_t55_CA.paa";
		mapSize = 10;
		driverForceOptics = 1;
		driverAction = "M113_DriverOut_EP1";
		driverInAction = "M113_Driver_EP1";
		forceNVG = 1;
		tracksSpeed = 0.25;
		scope = 0;
		accuracy = 0.8;
		armor = 450;
		damageResistance = 0.00843;
		cost = 1500000;
		class HitPoints: HitPoints
		{
			class HitHull
			{
				armor = 0.85;
				material = -1;
				name = "telo";
				visual = "telo";
				passThrough = 1;
			};
		};
		maxSpeed = 55;
		supplyRadius = 5;
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust";
				direction = "exhaust_dir";
				effect = "ExhaustsEffectBig";
			};
			class Exhaust2
			{
				position = "exhaust_1";
				direction = "exhaust_1_dir";
				effect = "ExhaustsEffectBig";
			};
		};
		insideSoundCoef = 0.9;
		soundGear[] = {"",5.6234134e-005,1};
		soundGetIn[] = {"ca\SOUNDS\Vehicles\Tracked\T72\int\int-tank-diesel-door-1",0.56234133,1};
		soundGetOut[] = {"ca\SOUNDS\Vehicles\Tracked\T72\ext\ext-tank-diesel-door-1",0.56234133,1,60};
		soundEngineOnInt[] = {"ca\sounds\Vehicles\Tracked\T72\int\int-tank-diesel-start-2",1.0,1.0};
		soundEngineOnExt[] = {"ca\SOUNDS\Vehicles\Tracked\T72\ext\ext-tank-diesel-start-2",2.5118864,1.0,500};
		soundEngineOffInt[] = {"ca\sounds\vehicles\Tracked\T72\int\int-tank-diesel-stop-1",1.0,1.0};
		soundEngineOffExt[] = {"ca\sounds\vehicles\Tracked\T72\ext\ext-tank-diesel-stop-1",1.0,0.8,500};
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
				sound[] = {"ca\Sounds_E\Tracked_E\T_xx\T_xx_int_acceleration_2",1.7782794,1.0};
				limit = "0.15";
				expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
			class AccelerationOut
			{
				sound[] = {"ca\Sounds_E\Tracked_E\T_xx\T_xx_ext_acceleration_2",1.7782794,1.0,650};
				limit = "0.15";
				expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
		};
		class Sounds
		{
			class Engine
			{
				sound[] = {"ca\Sounds_E\Tracked_E\T_xx\T_xx_ext_high",1.7782794,1.0,1000};
				frequency = "(randomizer*0.05+0.8)*rpm";
				volume = "engineOn*camPos*(rpm factor[0.4, 0.9])";
			};
			class IdleOut
			{
				sound[] = {"ca\Sounds_E\Tracked_E\T_xx\T_xx_ext_idle",0.56234133,1.0,300};
				frequency = "1";
				volume = "engineOn*camPos*(rpm factor[0.6, 0.15])";
			};
			class NoiseOut
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\ext\noise2",1.0,1.0,150};
				frequency = "1";
				volume = "camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsOutH0
			{
				sound[] = {"ca\Sounds_E\Tracked_E\Treads\ext_treads_hard_01",1.0,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsOutH1
			{
				sound[] = {"ca\Sounds_E\Tracked_E\Treads\ext_treads_hard_02",1.0,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsOutH2
			{
				sound[] = {"ca\Sounds_E\Tracked_E\Treads\ext_treads_hard_03",1.0,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsOutH3
			{
				sound[] = {"ca\Sounds_E\Tracked_E\Treads\ext_treads_hard_04",1.0,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsOutH4
			{
				sound[] = {"ca\Sounds_E\Tracked_E\Treads\ext_treads_hard_05",1.0,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
			class ThreadsOutS0
			{
				sound[] = {"ca\Sounds_E\Tracked_E\Treads\ext_treads_soft_01",1.0,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsOutS1
			{
				sound[] = {"ca\Sounds_E\Tracked_E\Treads\ext_treads_soft_02",1.0,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsOutS2
			{
				sound[] = {"ca\Sounds_E\Tracked_E\Treads\ext_treads_soft_03",1.0,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsOutS3
			{
				sound[] = {"ca\Sounds_E\Tracked_E\Treads\ext_treads_soft_04",1.0,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsOutS4
			{
				sound[] = {"ca\Sounds_E\Tracked_E\Treads\ext_treads_soft_05",1.0,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
			class Movement
			{
				sound[] = {"",1.0,1.0};
				frequency = "0";
				volume = "0";
			};
			class EngineIn
			{
				sound[] = {"ca\Sounds_E\Tracked_E\T_xx\T_xx_int_high",1.0,1.0};
				frequency = "(randomizer*0.05+0.8)*rpm";
				volume = "engineOn*(1-camPos)*(rpm factor[0.4, 1])";
			};
			class IdleIn
			{
				sound[] = {"ca\Sounds_E\Tracked_E\T_xx\T_xx_int_idle",1.7782794,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(rpm factor[0.6, 0.15])";
			};
			class NoiseIn
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\int\noise2",0.15848932,1.0};
				frequency = "1";
				volume = "(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsInH0
			{
				sound[] = {"ca\Sounds_E\Tracked_E\Treads\int_treads_hard_01",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsInH1
			{
				sound[] = {"ca\Sounds_E\Tracked_E\Treads\int_treads_hard_02",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsInH2
			{
				sound[] = {"ca\Sounds_E\Tracked_E\Treads\int_treads_hard_03",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsInH3
			{
				sound[] = {"ca\Sounds_E\Tracked_E\Treads\int_treads_hard_04",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsInH4
			{
				sound[] = {"ca\Sounds_E\Tracked_E\Treads\int_treads_hard_05",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
			class ThreadsInS0
			{
				sound[] = {"ca\Sounds_E\Tracked_E\Treads\int_treads_soft_01",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsInS1
			{
				sound[] = {"ca\Sounds_E\Tracked_E\Treads\int_treads_soft_02",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsInS2
			{
				sound[] = {"ca\Sounds_E\Tracked_E\Treads\int_treads_soft_03",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsInS3
			{
				sound[] = {"ca\Sounds_E\Tracked_E\Treads\int_treads_soft_04",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsInS4
			{
				sound[] = {"ca\Sounds_E\Tracked_E\Treads\int_treads_soft_05",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
		};
		radarType = 4;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerAction = "T55_Gunner_EP1";
				gunnerInAction = "T55_Gunner_EP1";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				gunnerGetInAction = "GetInMedium";
				gunnerGetOutAction = "GetOutMedium";
				weapons[] = {"D10","SGMT"};
				selectionFireAnim = "zasleh";
				magazines[] = {"21Rnd_100mmHEAT_D10","22Rnd_100mm_HE_2A70","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90"};
				soundServo[] = {"\Ca\sounds\Vehicles\Tracked\Other\int\int-servo",0.17782794,1.0};
				gunnerOpticsModel = "\ca\weapons\2Dscope_T90gun12";
				gunnerOutOpticsModel = "";
				gunnerOutOpticsEffect[] = {};
				stabilizedInAxes = 0;
				gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur3","OpticsCHAbera3"};
				visionMode[] = {"Normal","NVG"};
				turretInfoType = "RscWeaponZeroing";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
				discreteDistanceInitIndex = 5;
				minElev = -6;
				maxElev = 14;
				initElev = 0;
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
				};
				class Turrets: Turrets
				{
					class CommanderOptics: NewTurret
					{
						weapons[] = {};
						magazines[] = {};
						gunBeg = "gun_muzzle";
						gunEnd = "gun_chamber";
						body = "ObsTurret";
						gun = "ObsGun";
						gunnerAction = "T55_Commander_EP1";
						gunnerInAction = "T55_Commander_EP1";
						gunnerGetInAction = "GetInMedium";
						gunnerGetOutAction = "GetOutMedium";
						stabilizedInAxes = 0;
						minElev = -25;
						maxElev = 60;
						initElev = 0;
						minTurn = -360;
						maxTurn = 360;
						initTurn = 0;
						gunnerOpticsModel = "\ca\weapons\2Dscope_com3";
						gunnerOutOpticsModel = "\ca\Weapons\optika_empty";
						forceNVG = 1;
						gunnerOutOpticsColor[] = {0,0,0,1};
						gunnerOutForceOptics = 0;
						gunnerOutOpticsShowCursor = 0;
						gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur3","OpticsCHAbera3"};
						startEngine = 0;
						memoryPointGunnerOutOptics = "CommanderViewOut";
						memoryPointGunnerOptics = "commanderview";
						memoryPointsGetInGunner = "pos commander";
						memoryPointsGetInGunnerDir = "pos commander dir";
						memoryPointGun = "gun_muzzle";
						selectionFireAnim = "zasleh_2";
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
						};
						class ViewGunner
						{
							initAngleX = 5;
							minAngleX = -30;
							maxAngleX = 30;
							initAngleY = 0;
							minAngleY = -100;
							maxAngleY = 100;
							initFov = 0.7;
							minFov = 0.25;
							maxFov = 1.1;
						};
						soundServo[] = {"\Ca\sounds\Vehicles\Tracked\Other\int\int-servo",0.17782794,1.0};
						outGunnerMayFire = 1;
						inGunnerMayFire = 1;
						proxyType = "CPCommander";
						proxyIndex = 1;
						gunnerName = "$STR_POSITION_COMMANDER";
						primaryGunner = 0;
						primaryObserver = 1;
						animationSourceBody = "obsTurret";
						animationSourceGun = "obsGun";
						animationSourceHatch = "hatchCommander";
						commanding = 2;
						viewGunnerInExternal = 0;
					};
				};
			};
		};
		class AnimationSources
		{
			class recoil_source
			{
				source = "reload";
				weapon = "D10";
			};
		};
		type = 1;
		threat[] = {0.4,0.4,0.0};
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\Tracked_E\T55\data\t55_body.rvmat","Ca\Tracked_E\T55\data\t55_body_damage.rvmat","Ca\Tracked_E\T55\data\t55_body_destruct.rvmat","Ca\Tracked_E\T55\data\t55_tower.rvmat","Ca\Tracked_E\T55\data\t55_tower_damage.rvmat","Ca\Tracked_E\T55\data\t55_tower_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
		class Reflectors
		{
			class LeftLight
			{
				color[] = {0.8,0.8,1.0,1.0};
				ambient[] = {0.07,0.07,0.07,1.0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				brightness = 1.0;
			};
			class RightLight: LeftLight
			{
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
			};
			class CommanderLight: LeftLight
			{
				position = "COM svetlo";
				direction = "konec COM svetla";
				hitpoint = "COM svetlo";
				selection = "COM svetlo";
			};
		};
		aggregateReflectors[] = {{ "CommanderLight" },{ "LeftLight" },{ "RightLight" }};
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_T55";
		};
	};
	class T55_TK_EP1: T55_Base
	{
		expansion = 1;
		scope = 2;
		side = 0;
		faction = "BIS_TK";
		crew = "TK_Soldier_Crew_EP1";
		typicalCargo[] = {"TK_Soldier_Crew_EP1"};
	};
	class T55_TK_GUE_EP1: T55_Base
	{
		expansion = 1;
		scope = 2;
		side = 2;
		faction = "BIS_TK_GUE";
		crew = "TK_GUE_Soldier_EP1";
		typicalCargo[] = {"TK_GUE_Soldier_EP1"};
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\ca\Tracked_E\T55\data\t55_body_TKG_co","\ca\Tracked_E\T55\data\t55_tower_TKG_co"};
	};
};
//};

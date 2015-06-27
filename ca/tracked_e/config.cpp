////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:13:11 2014 : Source 'file' date Fri Oct 31 06:13:11 2014
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

//Class tracked_e : config.bin{
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		M113_Cargo01_EP1 = "M113_Cargo01_EP1";
		M113_Cargo02_EP1 = "M113_Cargo02_EP1";
		M113_Cargo03_EP1 = "M113_Cargo03_EP1";
		M113_Cargo04_EP1 = "M113_Cargo04_EP1";
		M113_Driver_EP1 = "M113_Driver_EP1";
		M113_DriverOut_EP1 = "M113_DriverOut_EP1";
		M113_Gunner_EP1 = "M113_Gunner_EP1";
		M2A2_Gunner_EP1 = "M2A2_Gunner_EP1";
		M2A2_GunnerOut_EP1 = "M2A2_GunnerOut_EP1";
		M2A2_Commander_EP1 = "M2A2_Commander_EP1";
		M2A2_CommanderOut_EP1 = "M2A2_CommanderOut_EP1";
		M2A2_Driver_EP1 = "M2A2_Driver_EP1";
		M2A2_DriverOut_EP1 = "M2A2_DriverOut_EP1";
		T55_Gunner_EP1 = "T55_Gunner_EP1";
		T55_Commander_EP1 = "T55_Commander_EP1";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class M113_Cargo01_EP1: Crew
		{
			file = "\ca\tracked_E\Data\Anim\M113_Cargo01";
			interpolateTo[] = {"M113_KIA_Cargo01_EP1",0.1};
			connectTo[] = {"M113_Cargo01_EP1",0.1,"M113_Cargo01_V1_EP1",0.1,"M113_Cargo01_V2_EP1",0.1,"M113_Cargo01_V3_EP1",0.1,"M113_Cargo01_V4_EP1",0.1,"M113_Cargo01_V5_EP1",0.1};
			equivalentTo = "M113_Cargo01_EP1";
			variantsAI[] = {"M113_Cargo01_EP1",0.5,"M113_Cargo01_V1_EP1",0.12,"M113_Cargo01_V2_EP1",0.11,"M113_Cargo01_V3_EP1",0.1,"M113_Cargo01_V4_EP1",0.09,"M113_Cargo01_V5_EP1",0.08};
			variantAfter[] = {5,10,20};
			speed = 1e+010;
		};
		class M113_Cargo01_V1_EP1: M113_Cargo01_EP1
		{
			file = "\ca\tracked_E\Data\Anim\M113_Cargo01_V1.rtm";
			connectTo[] = {"M113_Cargo01_EP1",0.1};
			speed = 0.245902;
			variantAfter[] = {5,5,5};
		};
		class M113_Cargo01_V2_EP1: M113_Cargo01_EP1
		{
			file = "\ca\tracked_E\Data\Anim\M113_Cargo01_V2.rtm";
			connectTo[] = {"M113_Cargo01_EP1",0.1};
			speed = 0.410959;
			variantAfter[] = {5,5,5};
		};
		class M113_Cargo01_V3_EP1: M113_Cargo01_EP1
		{
			file = "\ca\tracked_E\Data\Anim\M113_Cargo01_V3.rtm";
			connectTo[] = {"M113_Cargo01_EP1",0.1};
			speed = 0.333333;
			variantAfter[] = {5,5,5};
		};
		class M113_Cargo01_V4_EP1: M113_Cargo01_EP1
		{
			file = "\ca\tracked_E\Data\Anim\M113_Cargo01_V4.rtm";
			connectTo[] = {"M113_Cargo01_EP1",0.1};
			speed = 0.410959;
			variantAfter[] = {5,5,5};
		};
		class M113_Cargo01_V5_EP1: M113_Cargo01_EP1
		{
			file = "\ca\tracked_E\Data\Anim\M113_Cargo01_V5.rtm";
			connectTo[] = {"M113_Cargo01_EP1",0.1};
			speed = 0.177515;
			variantAfter[] = {5,5,5};
		};
		class M113_KIA_Cargo01_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\tracked_E\Data\Anim\M113_KIA_Cargo01";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class M113_Cargo02_EP1: Crew
		{
			file = "\ca\tracked_E\Data\Anim\M113_Cargo02";
			interpolateTo[] = {"M113_KIA_Cargo01_EP1",0.1};
			connectTo[] = {"M113_Cargo02_EP1",0.1,"M113_Cargo02_V1_EP1",0.1,"M113_Cargo02_V2_EP1",0.1,"M113_Cargo02_V3_EP1",0.1,"M113_Cargo02_V4_EP1",0.1,"M113_Cargo02_V5_EP1",0.1};
			equivalentTo = "M113_Cargo02_EP1";
			variantsAI[] = {"M113_Cargo02_EP1",0.5,"M113_Cargo02_V1_EP1",0.12,"M113_Cargo02_V2_EP1",0.11,"M113_Cargo02_V3_EP1",0.1,"M113_Cargo02_V4_EP1",0.09,"M113_Cargo02_V5_EP1",0.08};
			variantAfter[] = {5,10,20};
			speed = 1e+010;
		};
		class M113_Cargo02_V1_EP1: M113_Cargo02_EP1
		{
			file = "\ca\tracked_E\Data\Anim\M113_Cargo02_V1.rtm";
			connectTo[] = {"M113_Cargo02_EP1",0.1};
			speed = 0.37037;
			variantAfter[] = {5,5,5};
		};
		class M113_Cargo02_V2_EP1: M113_Cargo02_EP1
		{
			file = "\ca\tracked_E\Data\Anim\M113_Cargo02_V2.rtm";
			connectTo[] = {"M113_Cargo02_EP1",0.1};
			speed = 0.410959;
			variantAfter[] = {5,5,5};
		};
		class M113_Cargo02_V3_EP1: M113_Cargo02_EP1
		{
			file = "\ca\tracked_E\Data\Anim\M113_Cargo02_V3.rtm";
			connectTo[] = {"M113_Cargo02_EP1",0.1};
			speed = 0.333333;
			variantAfter[] = {5,5,5};
		};
		class M113_Cargo02_V4_EP1: M113_Cargo02_EP1
		{
			file = "\ca\tracked_E\Data\Anim\M113_Cargo02_V4.rtm";
			connectTo[] = {"M113_Cargo02_EP1",0.1};
			speed = 0.410959;
			variantAfter[] = {5,5,5};
		};
		class M113_Cargo02_V5_EP1: M113_Cargo02_EP1
		{
			file = "\ca\tracked_E\Data\Anim\M113_Cargo02_V5.rtm";
			connectTo[] = {"M113_Cargo02_EP1",0.1};
			speed = 0.535714;
			variantAfter[] = {5,5,5};
		};
		class M113_Cargo03_EP1: Crew
		{
			file = "\ca\tracked_E\Data\Anim\M113_Cargo03";
			interpolateTo[] = {"M113_KIA_Cargo01_EP1",0.1};
			connectTo[] = {"M113_Cargo03_EP1",0.1,"M113_Cargo03_V1_EP1",0.1,"M113_Cargo03_V2_EP1",0.1,"M113_Cargo03_V3_EP1",0.1,"M113_Cargo03_V4_EP1",0.1};
			equivalentTo = "M113_Cargo03_EP1";
			variantsAI[] = {"M113_Cargo03_EP1",0.5,"M113_Cargo03_V1_EP1",0.15,"M113_Cargo03_V2_EP1",0.13,"M113_Cargo03_V3_EP1",0.11,"M113_Cargo03_V4_EP1",0.11};
			variantAfter[] = {5,10,20};
			speed = 1e+010;
		};
		class M113_Cargo03_V1_EP1: M113_Cargo03_EP1
		{
			file = "\ca\tracked_E\Data\Anim\M113_Cargo03_V1.rtm";
			connectTo[] = {"M113_Cargo03_EP1",0.1};
			speed = 0.29703;
			variantAfter[] = {5,5,5};
		};
		class M113_Cargo03_V2_EP1: M113_Cargo03_EP1
		{
			file = "\ca\tracked_E\Data\Anim\M113_Cargo03_V2.rtm";
			connectTo[] = {"M113_Cargo03_EP1",0.1};
			speed = 0.410959;
			variantAfter[] = {5,5,5};
		};
		class M113_Cargo03_V3_EP1: M113_Cargo03_EP1
		{
			file = "\ca\tracked_E\Data\Anim\M113_Cargo03_V3.rtm";
			connectTo[] = {"M113_Cargo03_EP1",0.1};
			speed = 0.625;
			variantAfter[] = {5,5,5};
		};
		class M113_Cargo03_V4_EP1: M113_Cargo03_EP1
		{
			file = "\ca\tracked_E\Data\Anim\M113_Cargo03_V4.rtm";
			connectTo[] = {"M113_Cargo03_EP1",0.1};
			speed = 0.535714;
			variantAfter[] = {5,5,5};
		};
		class M113_Cargo04_EP1: Crew
		{
			file = "\ca\tracked_E\Data\Anim\M113_Cargo04";
			interpolateTo[] = {"M113_KIA_Cargo01_EP1",0.1};
			connectTo[] = {"M113_Cargo04_EP1",0.1,"M113_Cargo04_V1_EP1",0.1,"M113_Cargo04_V2_EP1",0.1,"M113_Cargo04_V3_EP1",0.1,"M113_Cargo04_V4_EP1",0.1,"M113_Cargo04_V5_EP1",0.1};
			equivalentTo = "M113_Cargo04_EP1";
			variantsAI[] = {"M113_Cargo04_EP1",0.5,"M113_Cargo04_V1_EP1",0.12,"M113_Cargo04_V2_EP1",0.11,"M113_Cargo04_V3_EP1",0.1,"M113_Cargo04_V4_EP1",0.09,"M113_Cargo04_V5_EP1",0.08};
			variantAfter[] = {5,10,20};
			speed = 1e+010;
		};
		class M113_Cargo04_V1_EP1: M113_Cargo04_EP1
		{
			file = "\ca\tracked_E\Data\Anim\M113_Cargo04_V1.rtm";
			connectTo[] = {"M113_Cargo04_EP1",0.1};
			speed = 0.410959;
			variantAfter[] = {5,5,5};
		};
		class M113_Cargo04_V2_EP1: M113_Cargo04_EP1
		{
			file = "\ca\tracked_E\Data\Anim\M113_Cargo04_V2.rtm";
			connectTo[] = {"M113_Cargo04_EP1",0.1};
			speed = 0.37037;
			variantAfter[] = {5,5,5};
		};
		class M113_Cargo04_V3_EP1: M113_Cargo04_EP1
		{
			file = "\ca\tracked_E\Data\Anim\M113_Cargo04_V3.rtm";
			connectTo[] = {"M113_Cargo04_EP1",0.1};
			speed = 0.333333;
			variantAfter[] = {5,5,5};
		};
		class M113_Cargo04_V4_EP1: M113_Cargo04_EP1
		{
			file = "\ca\tracked_E\Data\Anim\M113_Cargo04_V4.rtm";
			connectTo[] = {"M113_Cargo04_EP1",0.1};
			speed = 0.410959;
			variantAfter[] = {5,5,5};
		};
		class M113_Cargo04_V5_EP1: M113_Cargo04_EP1
		{
			file = "\ca\tracked_E\Data\Anim\M113_Cargo04_V5.rtm";
			connectTo[] = {"M113_Cargo04_EP1",0.1};
			speed = 0.535714;
			variantAfter[] = {5,5,5};
		};
		class M113_Driver_EP1: Crew
		{
			file = "\ca\tracked_E\Data\Anim\M113_Driver";
			connectTo[] = {"M113_KIA_Driver_EP1",1};
			speed = 1e+010;
		};
		class M113_KIA_Driver_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\tracked_E\Data\Anim\M113_KIA_Driver";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class M113_DriverOut_EP1: Crew
		{
			file = "\ca\tracked_E\Data\Anim\M113_DriverOut";
			connectTo[] = {"M113_KIA_DriverOut_EP1",1};
			speed = 1e+010;
		};
		class M113_KIA_DriverOut_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\tracked_E\Data\Anim\M113_KIA_DriverOut";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class M113_Gunner_EP1: Crew
		{
			file = "\ca\tracked_E\Data\Anim\M113_Gunner";
			connectTo[] = {"M113_KIA_Gunner_EP1",1};
			speed = 1e+010;
		};
		class M113_KIA_Gunner_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\tracked_E\Data\Anim\M113_KIA_Gunner";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class M2A2_Gunner_EP1: Crew
		{
			file = "\ca\tracked_E\Data\Anim\M2A2_Gunner";
			connectTo[] = {"M2A2_KIA_Gunner_EP1",1};
			speed = 1e+010;
		};
		class M2A2_KIA_Gunner_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\tracked_E\Data\Anim\M2A2_KIA_Gunner";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class M2A2_GunnerOut_EP1: Crew
		{
			file = "\ca\tracked_E\Data\Anim\M2A2_GunnerOut";
			connectTo[] = {"M2A2_KIA_GunnerOut_EP1",1};
			speed = 1e+010;
		};
		class M2A2_KIA_GunnerOut_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\tracked_E\Data\Anim\M2A2_KIA_GunnerOut";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class M2A2_Commander_EP1: Crew
		{
			file = "\ca\tracked_E\Data\Anim\M2A2_Commander";
			connectTo[] = {"M2A2_KIA_CommanderOut_EP1",1};
			speed = 1e+010;
		};
		class M2A2_CommanderOut_EP1: Crew
		{
			file = "\ca\tracked_E\Data\Anim\M2A2_CommanderOut";
			connectTo[] = {"M2A2_KIA_CommanderOut_EP1",1};
			speed = 1e+010;
		};
		class M2A2_KIA_CommanderOut_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\tracked_E\Data\Anim\M2A2_KIA_CommanderOut";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class M2A2_Driver_EP1: Crew
		{
			file = "\ca\tracked_E\Data\Anim\M2A2_Driver";
			connectTo[] = {"M2A2_KIA_Driver_EP1",1};
			speed = 1e+010;
		};
		class M2A2_KIA_Driver_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\tracked_E\Data\Anim\M2A2_KIA_Driver";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class M2A2_DriverOut_EP1: Crew
		{
			file = "\ca\tracked_E\Data\Anim\M2A2_DriverOut";
			connectTo[] = {"M2A2_KIA_DriverOut_EP1",1};
			speed = 1e+010;
		};
		class M2A2_KIA_DriverOut_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\tracked_E\Data\Anim\M2A2_KIA_DriverOut";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class T55_Gunner_EP1: Crew
		{
			file = "\ca\tracked_E\Data\Anim\T55_Gunner";
			connectTo[] = {"T55_KIA_Gunner_EP1",1};
			speed = 1e+010;
		};
		class T55_KIA_Gunner_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\tracked_E\Data\Anim\T55_KIA_Gunner";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class T55_Commander_EP1: Crew
		{
			file = "\ca\tracked_E\Data\Anim\T55_Commander";
			connectTo[] = {"T55_KIA_Commander_EP1",1};
			speed = 1e+010;
		};
		class T55_KIA_Commander_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\tracked_E\Data\Anim\T55_KIA_Commander";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
	};
};
class CfgMovesWomen: CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		M113_Cargo01_EP1 = "";
		M113_Cargo02_EP1 = "";
		M113_Cargo03_EP1 = "";
		M113_Cargo04_EP1 = "";
		M113_Driver_EP1 = "";
		M113_DriverOut_EP1 = "";
		M2A2_Gunner_EP1 = "";
		M2A2_GunnerOut_EP1 = "";
		M2A2_Commander_EP1 = "";
		M2A2_CommanderOut_EP1 = "";
		M2A2_Driver_EP1 = "";
		M2A2_DriverOut_EP1 = "";
		T55_Gunner_EP1 = "";
		T55_Commander_EP1 = "";
	};
};
class CfgPatches
{
	class CATracked_E
	{
		units[] = {"BMP2_UN_EP1","BMP2_TK_EP1","BMP2_HQ_TK_EP1","T34_TK_EP1","T34_TK_GUE_EP1","M1A1_US_DES_EP1","M1A2_US_TUSK_MG_EP1","MLRS_DES_EP1","ZSU_TK_EP1","T72_TK_EP1"};
		weapons[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {"CACharacters_E","CAWeapons_E","CA_Anims_Char","CATracked","CATracked2_us_m270mlrs","CATracked2_T34","CATracked2_2S6M_Tunguska"};
	};
};
class CfgVehicles
{
	class Land;
	class LandVehicle: Land
	{
		class NewTurret;
	};
	class Tank: LandVehicle
	{
		htMin = 60;
		htMax = 1800;
		afMax = 200;
		mfMax = 100;
		mFact = 1;
		tBody = 250;
		class HitPoints
		{
			class HitHull
			{
				armor = 1;
				material = -1;
				name = "NEtelo";
				visual = "telo";
				passThrough = 1;
				minimalHit = 0.03;
			};
			class HitLTrack
			{
				armor = 0.15;
				material = -1;
				name = "pas_L";
				visual = "pas_L";
				passThrough = 0.3;
			};
			class HitRTrack
			{
				armor = 0.15;
				material = -1;
				name = "pas_P";
				visual = "pas_P";
				passThrough = 0.3;
			};
			class HitEngine
			{
				armor = 0.35;
				material = -1;
				name = "motor";
				visual = "motor";
				passThrough = 0.2;
				minimalHit = 0.02;
			};
		};
		commanderCanSee = 31;
		gunnerCanSee = 31;
		driverCanSee = 31;
		driverOpticsModel = "CA\Tracked_E\driverOptics";
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class Turrets
				{
					class CommanderOptics: NewTurret
					{
						class ViewOptics;
					};
				};
			};
		};
		radarType = 4;
		steerAheadSimul = 0.5;
		steerAheadPlan = 0.4;
		predictTurnSimul = 1.2;
		predictTurnPlan = 1.0;
		brakeDistance = 7.0;
	};
	class Tracked_APC: Tank
	{
		transportMaxBackpacks = 5;
	};
	class BMP2_Base: Tracked_APC
	{
		brakeDistance = 9.0;
		radarType = 4;
		viewDriverInExternal = 1;
		driverOpticsModel = "CA\Tracked_E\driverOptics";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				viewGunnerInExternal = 1;
				gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};
				class ViewOptics: ViewOptics
				{
					visionMode[] = {"Normal","NVG"};
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						gunnerOpticsEffect[] = {};
						maxHorizontalRotSpeed = 2.0;
						maxVerticalRotSpeed = 2.0;
						class ViewOptics: ViewOptics
						{
							visionMode[] = {"Normal","NVG"};
						};
					};
				};
			};
		};
		outsideSoundFilter = 1;
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
				sound[] = {"ca\Sounds_E\Tracked_E\BVP2\BVP2_int_acceleration1",1.7782794,1.0};
				limit = "0.15";
				expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
			class AccelerationOut
			{
				sound[] = {"ca\Sounds_E\Tracked_E\BVP2\BVP2_ext_acceleration1",1.7782794,1.0,650};
				limit = "0.15";
				expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
		};
		class Sounds
		{
			class Engine
			{
				sound[] = {"ca\Sounds_E\Tracked_E\BVP2\BVP2_ext_high",1.7782794,1.0,600};
				frequency = "(randomizer*0.05+0.8)*rpm";
				volume = "engineOn*camPos*(rpm factor[0.3, 0.9])";
			};
			class IdleOut
			{
				sound[] = {"ca\Sounds_E\Tracked_E\BVP2\BVP2_ext_idle",0.56234133,1.0,300};
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
				sound[] = {"ca\Sounds_E\Tracked_E\BVP2\BVP2_ext_high",1.0,1.0};
				frequency = "(randomizer*0.05+0.8)*rpm";
				volume = "engineOn*(1-camPos)*(rpm factor[0.3, 0.9])";
			};
			class IdleIn
			{
				sound[] = {"ca\Sounds_E\Tracked_E\BVP2\BVP2_ext_idle",1.7782794,1.0};
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
				sound[] = {"ca\Sounds_E\Tracked_E\Treads\int_treads_hard_01",0.17782794,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsInH1
			{
				sound[] = {"ca\Sounds_E\Tracked_E\Treads\int_treads_hard_02",0.17782794,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsInH2
			{
				sound[] = {"ca\Sounds_E\Tracked_E\Treads\int_treads_hard_03",0.17782794,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsInH3
			{
				sound[] = {"ca\Sounds_E\Tracked_E\Treads\int_treads_hard_04",0.17782794,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsInH4
			{
				sound[] = {"ca\Sounds_E\Tracked_E\Treads\int_treads_hard_05",0.17782794,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
			class ThreadsInS0
			{
				sound[] = {"ca\Sounds_E\Tracked_E\Treads\int_treads_soft_01",0.17782794,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsInS1
			{
				sound[] = {"ca\Sounds_E\Tracked_E\Treads\int_treads_soft_02",0.17782794,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsInS2
			{
				sound[] = {"ca\Sounds_E\Tracked_E\Treads\int_treads_soft_03",0.17782794,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsInS3
			{
				sound[] = {"ca\Sounds_E\Tracked_E\Treads\int_treads_soft_04",0.17782794,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsInS4
			{
				sound[] = {"ca\Sounds_E\Tracked_E\Treads\int_treads_soft_05",0.17782794,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\Tracked_E\BMP\data\BMP2_01.rvmat","Ca\Tracked_E\BMP\data\BMP2_01_damage.rvmat","Ca\Tracked_E\BMP\data\BMP2_01_destruct.rvmat","Ca\Tracked_E\BMP\data\BMP2_02.rvmat","Ca\Tracked_E\BMP\data\BMP2_02_damage.rvmat","Ca\Tracked_E\BMP\data\BMP2_02_destruct.rvmat","Ca\Tracked_E\BMP\data\bmp2_pasy.rvmat","Ca\Tracked_E\BMP\data\bmp2_pasy_damage.rvmat","Ca\Tracked_E\BMP\data\bmp2_pasy_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
	};
	class BMP2_UN_EP1: BMP2_Base
	{
		expansion = 1;
		scope = 2;
		side = 2;
		faction = "BIS_UN";
		crew = "UN_CDF_Soldier_Crew_EP1";
		typicalCargo[] = {"UN_CDF_Soldier_Crew_EP1","UN_CDF_Soldier_Crew_EP1"};
		hiddenSelectionsTextures[] = {"\ca\Tracked_E\BMP\data\BMP2_01_UN_CO","\ca\Tracked_E\BMP\data\BMP2_02_UN_CO"};
		class TransportMagazines
		{
			class _xx_30Rnd_545x39_AK
			{
				magazine = "30Rnd_545x39_AK";
				count = 30;
			};
			class _xx_100Rnd_762x54_PK
			{
				magazine = "100Rnd_762x54_PK";
				count = 5;
			};
			class _xx_HandGrenade_East
			{
				magazine = "HandGrenade_East";
				count = 10;
			};
			class _xx_1Rnd_HE_GP25
			{
				magazine = "1Rnd_HE_GP25";
				count = 5;
			};
			class _xx_PG7VR
			{
				magazine = "PG7VR";
				count = 2;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 2;
			};
		};
		class TransportWeapons
		{
			class _xx_AK_74
			{
				weapon = "AK_74";
				count = 2;
			};
		};
	};
	class BMP2_TK_EP1: BMP2_Base
	{
		expansion = 1;
		scope = 2;
		side = 0;
		faction = "BIS_TK";
		crew = "TK_Soldier_Crew_EP1";
		typicalCargo[] = {"TK_Soldier_Crew_EP1"};
		hiddenSelectionsTextures[] = {"\ca\Tracked_E\BMP\data\BMP2_01_TKA_CO","\ca\Tracked_E\BMP\data\BMP2_02_TKA_CO"};
		class TransportMagazines
		{
			class _xx_20Rnd_762x51_FNFAL
			{
				magazine = "20Rnd_762x51_FNFAL";
				count = 30;
			};
			class _xx_100Rnd_762x54_PK
			{
				magazine = "100Rnd_762x54_PK";
				count = 5;
			};
			class _xx_HandGrenade_East
			{
				magazine = "HandGrenade_East";
				count = 10;
			};
			class _xx_1Rnd_HE_GP25
			{
				magazine = "1Rnd_HE_GP25";
				count = 5;
			};
			class _xx_PG7VR
			{
				magazine = "PG7VR";
				count = 2;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 2;
			};
		};
		class TransportWeapons
		{
			class _xx_FN_FAL
			{
				weapon = "FN_FAL";
				count = 2;
			};
		};
	};
	class BMP2_HQ_Base;
	class BMP2_HQ_TK_EP1: BMP2_HQ_Base
	{
		expansion = 1;
		scope = 2;
		side = 0;
		faction = "BIS_TK";
		crew = "TK_Soldier_Crew_EP1";
		typicalCargo[] = {"TK_Soldier_Crew_EP1"};
		hiddenSelectionsTextures[] = {"\ca\Tracked_E\BMP\data\BMP2_01_TKA_CO","\ca\Tracked_E\BMP\data\BMP2_02_TKA_CO"};
		radarType = 4;
		weapons[] = {"SmokeLauncher"};
		magazines[] = {"SmokeLauncherMag"};
		class TransportMagazines
		{
			class _xx_20Rnd_762x51_FNFAL
			{
				magazine = "20Rnd_762x51_FNFAL";
				count = 30;
			};
			class _xx_HandGrenade_East
			{
				magazine = "HandGrenade_East";
				count = 10;
			};
			class _xx_100Rnd_762x54_PK
			{
				magazine = "100Rnd_762x54_PK";
				count = 5;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
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
			class _xx_FN_FAL
			{
				weapon = "FN_FAL";
				count = 2;
			};
			class _xx_Binocular
			{
				weapon = "Binocular";
				count = 2;
			};
			class _xx_NVGoggles
			{
				weapon = "NVGoggles";
				count = 2;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\Tracked_E\BMP\data\BMP2_01.rvmat","Ca\Tracked_E\BMP\data\BMP2_01_damage.rvmat","Ca\Tracked_E\BMP\data\BMP2_01_destruct.rvmat","Ca\Tracked_E\BMP\data\BMP2_02.rvmat","Ca\Tracked_E\BMP\data\BMP2_02_damage.rvmat","Ca\Tracked_E\BMP\data\BMP2_02_destruct.rvmat","Ca\Tracked_E\BMP\data\bmp2_pasy.rvmat","Ca\Tracked_E\BMP\data\bmp2_pasy_damage.rvmat","Ca\Tracked_E\BMP\data\bmp2_pasy_destruct.rvmat","Ca\Tracked_E\BMP\data\bmp_hq.rvmat","Ca\Tracked_E\BMP\data\bmp_hq_damage.rvmat","Ca\Tracked_E\BMP\data\bmp_hq_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
	};
	class T34: Tank
	{
		radarType = 4;
		displayName = "$STR_EP1_dn_t34";
		class Library
		{
			libTextDesc = "$STR_EP1_lib_t34";
		};
		driverOpticsModel = "CA\Tracked_E\driverOptics";
		threat[] = {0.7,0.7,0};
		class Reflectors{};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur3","OpticsCHAbera3"};
				turretInfoType = "RscWeaponZeroing";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
				discreteDistanceInitIndex = 5;
				class Turrets: Turrets
				{
					class CommanderOptics: NewTurret
					{
						maxHorizontalRotSpeed = 2.0;
						maxVerticalRotSpeed = 2.0;
						gunnerOpticsEffect[] = {};
					};
				};
			};
			class FrontGunner: MainTurret
			{
				gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur3","OpticsCHAbera3"};
			};
		};
	};
	class T34_base: T34
	{
		scope = 0;
		side = 4;
		expansion = 1;
		crew = "Civilian";
		typicalCargo[] = {"Soldier"};
	};
	class T34_TK_EP1: T34_base
	{
		expansion = 1;
		scope = 2;
		side = 0;
		faction = "BIS_TK";
		crew = "TK_Soldier_Crew_EP1";
		typicalCargo[] = {"TK_Soldier_Crew_EP1"};
		hiddenSelectionsTextures[] = {"\CA\Tracked_E\T34\Data\T34_Body01_IND_CO.paa","\CA\Tracked_E\T34\Data\T34_Body02_IND_CO.paa","\CA\Tracked_E\T34\Data\T34_Turret_IND_CO.paa","\CA\Tracked_E\T34\Data\T34_Wheels_IND_CO.paa","\CA\Tracked_E\T34\Data\T34_Body03_IND_CO.paa"};
	};
	class T34_TK_GUE_EP1: T34_base
	{
		expansion = 1;
		scope = 2;
		side = 2;
		faction = "BIS_TK_GUE";
		crew = "TK_GUE_Soldier_EP1";
		typicalCargo[] = {"TK_GUE_Soldier_EP1"};
		hiddenSelections[] = {};
	};
	class M1A1: Tank
	{
		brakeDistance = 10.1;
		radarType = 4;
		driverOpticsModel = "CA\Tracked_E\driverOptics";
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
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				turretInfoType = "RscWeaponRangeZeroing";
				discreteDistance[] = {600,800,1000,1200,1400,1600,1800,2000};
				discreteDistanceInitIndex = 0;
				weapons[] = {"M256","M240BC_veh"};
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
						gunnerOpticsEffect[] = {};
					};
					class Narrow: Wide
					{
						gunnerOpticsModel = "CA\Tracked_E\gunnerOptics_M1A1_2";
						initFov = 0.047;
						minFov = 0.047;
						maxFov = 0.047;
					};
				};
				class Turrets: Turrets
				{
					discreteDistance[] = {100,200,300,400,500,600,700,800};
					discreteDistanceInitIndex = 2;
					class CommanderOptics: CommanderOptics
					{
						maxHorizontalRotSpeed = 2.0;
						maxVerticalRotSpeed = 2.0;
						stabilizedInAxes = "StabilizedInAxisY";
					};
				};
			};
		};
		class AnimationSources;
	};
	class M1A1_base: M1A1
	{
		scope = 0;
		side = 4;
		expansion = 1;
		crew = "Civilian";
		typicalCargo[] = {"Soldier"};
	};
	class M1A1_US_DES_EP1: M1A1_base
	{
		expansion = 1;
		scope = 2;
		side = 1;
		faction = "BIS_US";
		crew = "US_Soldier_Crew_EP1";
		typicalCargo[] = {"US_Soldier_Crew_EP1"};
		maxHorizontalRotSpeed = 0.001;
		maxVerticalRotSpeed = 0.0001;
		hiddenSelectionsTextures[] = {"\CA\Tracked_E\M1_Abrams\Data\m1abrams_01_desert_co.paa","\CA\Tracked_E\M1_Abrams\Data\m1abrams_02_desert_co.paa","\CA\Tracked_E\M1_Abrams\Data\m1abrams_03_desert_co.paa","\ca\tracked\data\m1abrams_mg_mount_co.paa"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						maxHorizontalRotSpeed = 2.0;
						maxVerticalRotSpeed = 2.0;
					};
				};
			};
		};
	};
	class M1A2_TUSK_MG: M1A1
	{
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "M2BC";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "M2BC";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "M2BC";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						maxHorizontalRotSpeed = 2.0;
						maxVerticalRotSpeed = 2.0;
						gunnerOpticsEffect[] = {};
						weapons[] = {"M2BC","SmokeLauncher"};
						turretInfoType = "RscWeaponRangeZeroing";
						discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
						discreteDistanceInitIndex = 5;
						class ViewOptics: ViewOptics
						{
							initFov = 0.466;
							minFov = 0.015;
							maxFov = 0.466;
							visionMode[] = {"Normal","NVG","Ti"};
							thermalMode[] = {0,1};
						};
					};
				};
			};
		};
	};
	class M1A2_TUSK_MG_base: M1A2_TUSK_MG
	{
		scope = 0;
		side = 4;
		expansion = 1;
		crew = "Civilian";
		typicalCargo[] = {"Soldier"};
	};
	class M1A2_US_TUSK_MG_EP1: M1A2_TUSK_MG_base
	{
		scope = 2;
		expansion = 1;
		side = 1;
		crew = "US_Soldier_Crew_EP1";
		typicalCargo[] = {"US_Soldier_Crew_EP1"};
		faction = "BIS_US";
		hiddenSelectionsTextures[] = {"\CA\Tracked_E\M1_Abrams\Data\m1abrams_01_desert_co.paa","\CA\Tracked_E\M1_Abrams\Data\m1abrams_02_desert_co.paa","\CA\Tracked_E\M1_Abrams\Data\m1abrams_03_desert_co.paa","\CA\Tracked_E\M1_Abrams\Data\m1a2_loader_desert_co.paa"};
	};
	class MLRS;
	class MLRS_base: MLRS
	{
		scope = 0;
		side = 4;
		expansion = 1;
		crew = "Civilian";
		typicalCargo[] = {"Soldier"};
	};
	class MLRS_DES_EP1: MLRS_base
	{
		htMin = 60;
		htMax = 1800;
		afMax = 200;
		mfMax = 100;
		mFact = 1;
		tBody = 250;
		scope = 2;
		expansion = 1;
		side = 1;
		hiddenSelectionsTextures[] = {"\ca\Tracked_E\us_m270mlrs\Data\MLRS_hull_desert_CO.paa"};
		faction = "BIS_US";
		crew = "US_Soldier_Crew_EP1";
		typicalCargo[] = {"US_Soldier_Crew_EP1"};
		threat[] = {1,0.5,0};
	};
	class ZSU_Base: Tank
	{
		radarType = 4;
		driverOpticsModel = "CA\Tracked_E\driverOptics";
		threat[] = {1,1,1};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				memoryPointGun[] = {"chase01","chase02","chase03","chase04"};
				gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};
				turretInfoType = "RscWeaponRangeZeroing";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
				discreteDistanceInitIndex = 5;
				class ViewOptics
				{
					visionMode[] = {"Normal","NVG"};
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						maxHorizontalRotSpeed = 2.0;
						maxVerticalRotSpeed = 2.0;
						gunnerOpticsEffect[] = {"TankCommanderOptics1"};
						class ViewOptics: ViewOptics
						{
							visionMode[] = {"Normal","NVG"};
						};
					};
				};
			};
		};
	};
	class ZSU_TK_EP1: ZSU_Base
	{
		expansion = 1;
		scope = 2;
		side = 0;
		faction = "BIS_TK";
		crew = "TK_Soldier_Crew_EP1";
		typicalCargo[] = {"TK_Soldier_Crew_EP1"};
		hiddenSelectionsTextures[] = {"\ca\Tracked_E\ZSU\Data\ZSU_01_TK_CO.paa","\ca\Tracked_E\ZSU\Data\ZSU_02_TK_CO.paa","\ca\Tracked_E\ZSU\Data\ZSU_03_TK_CO.paa"};
	};
	class T72_Base: Tank
	{
		brakeDistance = 9.0;
		radarType = 4;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};
				turretInfoType = "RscWeaponRangeZeroing";
				discreteDistance[] = {600,800,1000,1200,1400,1600,1800,2000};
				discreteDistanceInitIndex = 0;
				weapons[] = {"D81","PKTBC"};
				class ViewOptics
				{
					visionMode[] = {"Normal","NVG"};
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						maxHorizontalRotSpeed = 2.0;
						maxVerticalRotSpeed = 2.0;
						gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};
						class ViewOptics: ViewOptics
						{
							visionMode[] = {"Normal","NVG"};
						};
						stabilizedInAxes = "StabilizedInAxisY";
					};
				};
			};
		};
	};
	class T72_TK_EP1: T72_Base
	{
		expansion = 1;
		scope = 2;
		side = 0;
		faction = "BIS_TK";
		crew = "TK_Soldier_Crew_EP1";
		typicalCargo[] = {"TK_Soldier_Crew_EP1"};
		hiddenSelectionsTextures[] = {"\ca\Tracked_E\Data\T72_1_TK_CO.paa","\ca\Tracked_E\Data\T72_2_TK_CO.paa","\ca\Tracked_E\Data\T72_3_TK_CO.paa"};
		LockDetectionSystem = 4;
		IncommingMisslieDetectionSystem = 16;
	};
	class 2S6M_Tunguska: Tank
	{
		brakeDistance = 10.1;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				turretInfoType = "RscWeaponRangeZeroing";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
				discreteDistanceInitIndex = 5;
				memoryPointGun[] = {"2A38_3_Target","2A38_2_Target"};
			};
		};
	};
	class T90: Tank
	{
		brakeDistance = 9.0;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				turretInfoType = "RscWeaponRangeZeroing";
				discreteDistance[] = {600,800,1000,1200,1400,1600,1800,2000};
				discreteDistanceInitIndex = 0;
				weapons[] = {"2A46M","2A46MRocket","PKTBC"};
			};
		};
	};
	class BMP3: Tracked_APC
	{
		brakeDistance = 10.1;
	};
};
//};

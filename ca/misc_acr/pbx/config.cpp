////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:04:44 2014 : Source 'file' date Fri Oct 31 06:04:44 2014
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

//Class misc_acr : pbx\config.bin{
class DefaultEventhandlers;
class CfgPatches
{
	class CAMisc_ACR_PBX
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.5;
		requiredAddons[] = {"CAMisc_ACR"};
	};
};
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		PBX_Driver_ACR = "PBX_Driver_ACR";
		PBX_Cargo01_ACR = "PBX_Cargo01_ACR";
		PBX_Cargo02_ACR = "PBX_Cargo02_ACR";
		PBX_Cargo03_ACR = "PBX_Cargo03_ACR";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class PBX_Driver_ACR: Crew
		{
			file = "\Ca\Misc_ACR\PBX\Data\Anim\PBX_Driver.rtm";
			interpolateTo[] = {"KIA_RHIB_Cargo_ACR",1};
		};
		class PBX_Cargo01_ACR: Crew
		{
			file = "\Ca\Misc_ACR\PBX\Data\Anim\PBX_Cargo01.rtm";
			interpolateTo[] = {"KIA_RHIB_Cargo_ACR",1};
		};
		class PBX_Cargo02_ACR: Crew
		{
			file = "\Ca\Misc_ACR\PBX\Data\Anim\PBX_Cargo02.rtm";
			interpolateTo[] = {"KIA_RHIB_Cargo_ACR",1};
		};
		class PBX_Cargo03_ACR: Crew
		{
			file = "\Ca\Misc_ACR\PBX\Data\Anim\PBX_Cargo03.rtm";
			interpolateTo[] = {"KIA_RHIB_Cargo_ACR",1};
		};
		class KIA_RHIB_Cargo_ACR: DefaultDie
		{
			file = "\Ca\Misc_ACR\PBX\Data\Anim\KIA_RHIB_Cargo.rtm";
			actions = "DeadActions";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			connectTo[] = {"DeadState",0.1};
		};
	};
};
class CfgMovesWomen: CfgMovesBasic
{
	class ManActions
	{
		PBX_Driver_ACR = "";
		PBX_Cargo01_ACR = "amovpsqtmstpsnondnon";
		PBX_Cargo02_ACR = "amovpsqtmstpsnondnon";
		PBX_Cargo03_ACR = "amovpsqtmstpsnondnon";
	};
};
class CfgVehicles
{
	class AllVehicles;
	class Ship: AllVehicles
	{
		class ViewPilot;
		class NewTurret;
		class Turrets;
	};
	class PBX_ACR: Ship
	{
		expansion = 3;
		scope = 2;
		displayName = "$STR_DN_BOAT";
		model = "\ca\misc_acr\pbx\pbx_ACR";
		picture = "\ca\misc_acr\pbx\data\ico\pbx_CA.paa";
		Icon = "\ca\misc_acr\pbx\Data\map_ico\icomap_rubber_CA.paa";
		mapSize = 6;
		accuracy = 0.5;
		faction = "BIS_CZ";
		side = 1;
		transportSoldier = 3;
		crew = "CZ_Soldier_Wdl_ACR";
		typicalCargo[] = {"CZ_Soldier_Wdl_ACR","CZ_Soldier_Wdl_ACR"};
		driverAction = "PBX_Driver_ACR";
		cargoAction[] = {"PBX_Cargo01_ACR","PBX_Cargo02_ACR","PBX_Cargo03_ACR"};
		maxSpeed = 45;
		extCameraPosition[] = {0,1.5,-6};
		unitInfoType = "UnitInfoCar";
		enableGPS = 0;
		castDriverShadow = 1;
		castCargoShadow = 1;
		ejectDeadCargo = 1;
		ejectDeadDriver = 1;
		getInAction = "GetInLow";
		getOutAction = "GetOutLow";
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
		precision = 6;
		brakeDistance = 20;
		supplyRadius = 2;
		cost = 10000;
		armor = 20;
		class Turrets{};
		class HitPoints
		{
			class HitEngine
			{
				armor = 1.2;
				material = 60;
				name = "motor";
				visual = "motor";
				passThrough = 1;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\misc_acr\pbx\data\pbx_engine.rvmat","ca\misc_acr\pbx\data\pbx_engine.rvmat","ca\misc_acr\pbx\data\pbx_engine_destruct.rvmat","ca\misc_acr\pbx\data\pbx_01.rvmat","ca\misc_acr\pbx\data\pbx_01.rvmat","ca\misc_acr\pbx\data\pbx_01_destruct.rvmat","ca\misc_acr\pbx\data\pbx_02.rvmat","ca\misc_acr\pbx\data\pbx_02.rvmat","ca\misc_acr\pbx\data\pbx_02_destruct.rvmat"};
		};
		class MarkerLights
		{
			class RedStill
			{
				name = "cerveny pozicni";
				color[] = {1.0,0.1,0.1,1};
				ambient[] = {0.1,0.01,0.01,1};
				brightness = 0.01;
				blinking = 0;
			};
			class GreenStill
			{
				name = "zeleny pozicni";
				color[] = {0.1,1.0,0.1,1};
				ambient[] = {0.01,0.1,0.01,1};
				brightness = 0.01;
				blinking = 0;
			};
			class WhiteStill
			{
				name = "bily pozicni";
				color[] = {1.0,1.0,1.0,1};
				ambient[] = {0.1,0.1,0.1,1};
				brightness = 0.01;
				blinking = 0;
			};
		};
		class ViewPilot: ViewPilot
		{
			initFov = 0.7;
			minFov = 0.25;
			maxFov = 1.4;
		};
		class Eventhandlers: DefaultEventhandlers{};
		class DestructionEffects{};
		soundEnviron[] = {"",0.056234132,0.95};
		class SoundEvents{};
		soundEngineOnInt[] = {"\ca\sounds\Vehicles\Water\CRRC_PBX\ext-boat-engine-start-01",1.0,1.0};
		soundEngineOnExt[] = {"\ca\sounds\Vehicles\Water\CRRC_PBX\ext-boat-engine-start-01",1.0,1.0};
		soundEngineOffInt[] = {"ca\sounds\vehicles\Water\CRRC_PBX\ext-boat-engine-stop-01",1.0,1.0};
		soundEngineOffExt[] = {"ca\sounds\vehicles\Water\CRRC_PBX\ext-boat-engine-stop-01",1.0,1.0};
		class Sounds
		{
			class Engine
			{
				sound[] = {"\ca\sounds\Vehicles\Water\CRRC_PBX\ext-boat-engine-low-01",1.0,1.0};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "engineOn*camPos*(thrust factor[0.7, 0.05])*2";
			};
			class EngineHighOut
			{
				sound[] = {"\ca\sounds\Vehicles\Water\CRRC_PBX\ext-boat-engine-high-01",1.0,0.8};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "engineOn*camPos*(thrust factor[0.6, 2])*2";
			};
			class IdleOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Water\CRRC_PBX\ext-boat-engine-idle-01",0.56234133,1.0};
				frequency = "1";
				volume = "engineOn*camPos*(rpm factor[0.3, 0])*2";
			};
			class WaternoiseOutW0
			{
				sound[] = {"ca\sounds\vehicles\water\water_sfx\ext-water-noise-nospeed",0.39810717,1.0};
				frequency = "1";
				volume = "camPos*(speed factor[7, 0])";
			};
			class WaternoiseOutW1
			{
				sound[] = {"ca\sounds\vehicles\water\water_sfx\ext-boat-lospd-noise-02",0.39810717,1.0};
				frequency = "1";
				volume = "camPos*((speed factor[2, 12]) min (speed factor[12, 2]))";
			};
			class WaternoiseOutW2
			{
				sound[] = {"ca\sounds\vehicles\water\water_sfx\ext-boat-hispd-noise-02",0.39810717,1.0};
				frequency = "1";
				volume = "camPos*(speed factor[9, 18.7])";
			};
			class EngineLowIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Water\CRRC_PBX\ext-boat-engine-low-01",1.0,1.0};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "((engineOn*thrust) factor[0.7, 0.05])*(1-camPos)*2";
			};
			class EngineHighIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Water\CRRC_PBX\ext-boat-engine-high-01",1.0,0.8};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "((engineOn*thrust) factor[0.65, 2])*(1-camPos)*2";
			};
			class IdleIn
			{
				sound[] = {"\ca\sounds\Vehicles\Water\CRRC_PBX\ext-boat-engine-idle-01",0.56234133,1.0};
				frequency = "1";
				volume = "engineOn*(rpm factor[0.3, 0])*(1-camPos)*2";
			};
			class WaternoiseInW0
			{
				sound[] = {"ca\sounds\vehicles\water\water_sfx\ext-water-noise-nospeed",0.39810717,1.0};
				frequency = "1";
				volume = "(1-camPos)*(speed factor[7, 0])";
			};
			class WaternoiseInW1
			{
				sound[] = {"ca\sounds\vehicles\water\water_sfx\ext-boat-lospd-noise-02",0.39810717,1.0};
				frequency = "1";
				volume = "(1-camPos)*((speed factor[2, 12]) min (speed factor[12, 2]))";
			};
			class WaternoiseInW2
			{
				sound[] = {"ca\sounds\vehicles\water\water_sfx\ext-boat-hispd-noise-02",0.39810717,1.0};
				frequency = "1";
				volume = "(1-camPos)*(speed factor[9, 18.7])";
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position = "vyfuk start";
				direction = "vyfuk konec";
				effect = "";
			};
		};
		class Library
		{
			libTextDesc = "$STR_LIB_BOAT";
		};
	};
};
//};

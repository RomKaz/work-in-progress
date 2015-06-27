////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:00:38 2014 : Source 'file' date Fri Oct 31 06:00:38 2014
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

//Class a10 : config.bin{
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		A10_Pilot = "A10_Pilot";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class KIA_A10_Pilot: DefaultDie
		{
			actions = "DeadActions";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			file = "\ca\A10\Data\Anim\KIA_A10_Pilot.rtm";
			connectTo[] = {"DeadState",0.1};
		};
		class A10_Pilot: Crew
		{
			file = "\ca\A10\Data\Anim\A10_Pilot.rtm";
			interpolateTo[] = {"KIA_A10_Pilot",1};
		};
	};
};
class CfgMovesWomen: CfgMovesBasic
{
	class ManActions
	{
		A10_Pilot = "";
	};
};
class CfgPatches
{
	class CAA10
	{
		units[] = {"A10"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAAir","CACharacters2","CAWeapons"};
	};
};
class CfgVehicles
{
	class Air;
	class Plane: Air
	{
		class ViewPilot;
	};
	class A10: Plane
	{
		destrType = "DestructWreck";
		scope = 0;
		displayName = "$STR_DN_A10";
		vehicleClass = "Air";
		model = "\ca\A10\A10.p3d";
		picture = "\ca\A10\data\Picture_A10_CA.paa";
		icon = "\ca\A10\data\Icon_A10_CA.paa";
		mapSize = 17;
		side = 1;
		faction = "USMC";
		crew = "USMC_Soldier_Pilot";
		camouflage = 10;
		audible = 6;
		accuracy = 0.2;
		supplyRadius = 8;
		laserScanner = 1;
		minFireTime = 10;
		driverAction = "A10_Pilot";
		gunAimDown = 0.07;
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\ca\a10\data\a10_01_co.paa","\ca\a10\data\a10_02_co.paa"};
		weapons[] = {"GAU8","MaverickLauncher","SidewinderLaucher_AH1Z","BombLauncherA10","FFARLauncher_14"};
		magazines[] = {"1350Rnd_30mmAP_A10","2Rnd_Maverick_A10","2Rnd_Sidewinder_AH1Z","4Rnd_GBU12","14Rnd_FFAR"};
		soundGetIn[] = {"ca\sounds\Air\AV8\ext\ext-jetair-cabine-close1",0.056234132,1};
		soundGetOut[] = {"ca\sounds\Air\AV8\ext\ext-jetair-cabine-open1",0.056234132,1,40};
		soundDammage[] = {"ca\sounds\Air\AV8\int\alarm_loop1",0.01,1};
		soundEngineOnInt[] = {"ca\sounds\Air\AV8\int\int-av8b-start-1",0.56234133,1.0};
		soundEngineOnExt[] = {"ca\sounds\Air\AV8\ext\ext-jetair-start1",0.56234133,1.0,550};
		soundEngineOffInt[] = {"ca\sounds\Air\AV8\int\int-av8b-stop-1",0.56234133,1.0};
		soundEngineOffExt[] = {"ca\sounds\Air\AV8\ext\ext-jetair-stop1",0.56234133,1.0,550};
		class Sounds
		{
			class EngineLowOut
			{
				sound[] = {"ca\sounds\Air\AV8\ext\ext-jetair-engine-low1",2.2387211,1.2,700};
				frequency = "1.0 min (rpm + 0.5)";
				volume = "engineOn*(rpm factor[0.85, 0])";
			};
			class EngineHighOut
			{
				sound[] = {"ca\sounds\Air\AV8\ext\ext-jetair-engine-high3",2.2387211,1.6,700};
				frequency = "1";
				volume = "engineOn*(rpm factor[0.55, 1.0])";
			};
			class ForsageOut
			{
				sound[] = {"ca\sounds\Air\AV8\ext\ext-jetair-forsage1",2.2387211,1.1,1800};
				frequency = "1";
				volume = "engineOn*(thrust factor[0.5, 1.0])";
				cone[] = {3.14,3.92,2.0,0.5};
			};
			class WindNoiseOut
			{
				sound[] = {"ca\sounds\Air\AV8\ext\ext-jetair-wind1",0.56234133,1.0,100};
				frequency = "(0.1+(1.2*(speed factor[1, 150])))";
				volume = "(speed factor[1, 150])";
			};
			class EngineLowIn
			{
				sound[] = {"ca\sounds\Air\AV8\int\int-av8b-engine-low",0.31622776,1.0};
				frequency = "1.0 min (rpm + 0.5)";
				volume = "(1-camPos)*(engineOn*(rpm factor[0.85, 0]))";
			};
			class EngineHighIn
			{
				sound[] = {"ca\sounds\Air\AV8\int\int-av8b-engine",0.31622776,1.0};
				frequency = "1";
				volume = "(1-camPos)*(engineOn*(rpm factor[0.55, 1.0]))";
			};
			class ForsageIn
			{
				sound[] = {"ca\sounds\Air\AV8\int\int-av8b-forsage-1",0.31622776,1.1};
				frequency = "1";
				volume = "(1-camPos)*(engineOn*(thrust factor[0.5, 1.0]))";
			};
			class WindNoiseIn
			{
				sound[] = {"ca\sounds\Air\AV8\int\int-jetair-wind1",0.31622776,1.0};
				frequency = "(0.1+(1.2*(speed factor[1, 150])))";
				volume = "(1-camPos)*(speed factor[1, 150])";
			};
		};
		threat[] = {1,1,1};
		class Reflectors
		{
			class Left
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
		};
		class ViewPilot: ViewPilot
		{
			initFov = 1;
			minFov = 0.3;
			maxFov = 1.2;
			initAngleX = 0;
			minAngleX = -40;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -150;
			maxAngleY = 150;
		};
		HeadAimDown = 3;
		armor = 75;
		damageResistance = 0.00485;
		armorStructured = 1;
		maxSpeed = 720;
		landingAoa = "rad 10";
		landingSpeed = 220;
		flapsFrictionCoef = 0.3;
		aileronSensitivity = 1;
		elevatorSensitivity = 0.8;
		envelope[] = {0.0,0.1,0.65,2.2,3.7,5.3,6.0,5.5,5.6,4.8,3.6,1.8,0};
		gearUpTime = 4.5;
		gearDownTime = 3;
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\a10\data\a10_skla.rvmat","ca\a10\data\a10_skla_damage.rvmat","ca\a10\data\a10_skla_damage.rvmat","ca\a10\data\a10_cockpit_glass_in.rvmat","ca\a10\data\a10_cockpit_glass_in_damage.rvmat","ca\a10\data\a10_cockpit_glass_in_damage.rvmat","ca\a10\data\A10_01.rvmat","ca\a10\data\A10_01_damage.rvmat","ca\a10\data\A10_01_destruct.rvmat","ca\a10\data\A10_02.rvmat","ca\a10\data\A10_02_damage.rvmat","ca\a10\data\A10_02_destruct.rvmat"};
		};
		class Library
		{
			libEnable = 0;
			libTextDesc = "$STR_LIB_A10";
		};
		class Eventhandlers
		{
			init = "_scr = _this execVM ""\ca\Data\ParticleEffects\SCRIPTS\init.sqf"";";
			fired = "_this call BIS_Effects_EH_Fired;";
			killed = "_this call BIS_Effects_EH_Killed;";
		};
		class MFD
		{
			class AirplaneHUD
			{
				class Pos10Vector
				{
					type = "vector";
					pos0[] = {0.51,"0.27+0.09"};
					pos10[] = {1.31,1.24};
				};
				topLeft = "HUD LH";
				topRight = "HUD PH";
				bottomLeft = "HUD LD";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0,1,0,0.1};
				class Bones
				{
					class PlaneW
					{
						type = "fixed";
						pos[] = {0.51,"0.34+0.09"};
					};
					class WeaponAim: Pos10Vector
					{
						source = "weapon";
					};
					class Target: Pos10Vector
					{
						source = "target";
					};
					class Velocity: Pos10Vector
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0.5,"0.27+0.09"};
						pos10[] = {1.3,1.24};
					};
					class ILS_H
					{
						type = "ils";
						pos0[] = {0.5,"0.27+0.09"};
						pos3[] = {0.74,"0.27+0.09"};
					};
					class ILS_W: ILS_H
					{
						pos3[] = {0.5,0.624};
					};
					class Level0: Pos10Vector
					{
						pos0[] = {0.5,"0.34+0.09"};
						pos10[] = {1.3,1.31};
						type = "horizon";
						angle = 0;
					};
					class LevelP5: Level0
					{
						angle = 5;
					};
					class LevelM5: Level0
					{
						angle = -5;
					};
					class LevelP10: Level0
					{
						angle = 10;
					};
					class LevelM10: Level0
					{
						angle = -10;
					};
					class LevelP15: Level0
					{
						angle = 15;
					};
					class LevelM15: Level0
					{
						angle = -15;
					};
					class LevelP20: Level0
					{
						angle = 20;
					};
					class LevelM20: Level0
					{
						angle = -20;
					};
					class LevelP25: Level0
					{
						angle = 25;
					};
					class LevelM25: Level0
					{
						angle = -25;
					};
					class LevelP30: Level0
					{
						angle = 30;
					};
					class LevelM30: Level0
					{
						angle = -30;
					};
					class LevelP35: Level0
					{
						angle = 35;
					};
					class LevelM35: Level0
					{
						angle = -35;
					};
					class LevelP40: Level0
					{
						angle = 40;
					};
					class LevelM40: Level0
					{
						angle = -40;
					};
					class LevelP45: Level0
					{
						angle = 45;
					};
					class LevelM45: Level0
					{
						angle = -45;
					};
					class LevelP50: Level0
					{
						angle = 50;
					};
					class LevelM50: Level0
					{
						angle = -50;
					};
				};
				class Draw
				{
					alpha = 0.4;
					color[] = {0.0,0.3,0.05};
					condition = "on";
					class PlaneW
					{
						clipTL[] = {0.0,1.0};
						clipBR[] = {1.0,0.0};
						type = "line";
						points[] = {{ "PlaneW",{ -0.08,0 },1 },{ "PlaneW",{ -0.03,0 },1 },{ "PlaneW",{ -0.015,0.033 },1 },{ "PlaneW",{ 0.0,0 },1 },{ "PlaneW",{ 0.015,0.033 },1 },{ "PlaneW",{ 0.03,0 },1 },{ "PlaneW",{ 0.08,0 },1 }};
					};
					class PlaneHeading
					{
						clipTL[] = {0.0,1.0};
						clipBR[] = {1.0,0.0};
						type = "line";
						points[] = {{ "Velocity",{ 0,-0.022 },1 },{ "Velocity",{ 0.014,-0.0154 },1 },{ "Velocity",{ 0.02,0 },1 },{ "Velocity",{ 0.014,0.0154 },1 },{ "Velocity",{ 0,0.022 },1 },{ "Velocity",{ -0.014,0.0154 },1 },{ "Velocity",{ -0.02,0 },1 },{ "Velocity",{ -0.014,-0.0154 },1 },{ "Velocity",{ 0,-0.022 },1 },{  },{ "Velocity",{ 0.04,0 },1 },{ "Velocity",{ 0.02,0 },1 },{  },{ "Velocity",{ -0.04,0 },1 },{ "Velocity",{ -0.02,0 },1 },{  },{ "Velocity",{ 0,-0.044 },1 },{ "Velocity",{ 0,-0.022 },1 },{  }};
					};
					class Static
					{
						clipTL[] = {0.0,0.1};
						clipBR[] = {1.0,0.0};
						type = "line";
						points[] = {{ { 0.21,0.52 },1 },{ { 0.19,0.5 },1 },{ { 0.21,0.48 },1 },{  },{ { 0.18,0.2 },1 },{ { 0.18,0.85 },1 },{  },{ { 0.79,0.52 },1 },{ { 0.81,0.5 },1 },{ { 0.79,0.48 },1 },{  },{ { 0.82,0.2 },1 },{ { 0.82,0.85 },1 },{  },{ { 0.52,"0.08+0.01" },1 },{ { 0.5,"0.06+0.01" },1 },{ { 0.48,"0.08+0.01" },1 },{  },{ { 0.2,"0.055+0.01" },1 },{ { 0.8,"0.055+0.01" },1 },{  }};
					};
					class Horizont
					{
						clipTL[] = {0.0,0.0};
						clipBR[] = {1.0,1.0};
						class Dimmed
						{
							class Level0
							{
								type = "line";
								points[] = {{ "Level0",{ -0.2,0 },1 },{ "Level0",{ -0.05,0 },1 },{  },{ "Level0",{ 0.05,0 },1 },{ "Level0",{ 0.2,0 },1 }};
							};
							class VALM_1_0
							{
								type = "text";
								source = "static";
								text = 0;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"Level0",{ -0.23,-0.025 },1};
								right[] = {"Level0",{ -0.13,-0.025 },1};
								down[] = {"Level0",{ -0.23,0.025 },1};
							};
							class VALM_2_0: VALM_1_0
							{
								align = "right";
								pos[] = {"Level0",{ 0.22,-0.025 },1};
								right[] = {"Level0",{ 0.32,-0.025 },1};
								down[] = {"Level0",{ 0.22,0.025 },1};
							};
							class LevelM5: Level0
							{
								type = "line";
								points[] = {{ "LevelM5",{ -0.2,-0.03 },1 },{ "LevelM5",{ -0.2,0 },1 },{ "LevelM5",{ -0.15,0 },1 },{  },{ "LevelM5",{ -0.1,0 },1 },{ "LevelM5",{ -0.05,0 },1 },{  },{ "LevelM5",{ 0.05,0 },1 },{ "LevelM5",{ 0.1,0 },1 },{  },{ "LevelM5",{ 0.15,0 },1 },{ "LevelM5",{ 0.2,0 },1 },{ "LevelM5",{ 0.2,-0.03 },1 }};
							};
							class VALM_1_5
							{
								type = "text";
								source = "static";
								text = -5;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM5",{ -0.23,-0.085 },1};
								right[] = {"LevelM5",{ -0.13,-0.085 },1};
								down[] = {"LevelM5",{ -0.23,-0.035 },1};
							};
							class VALM_2_5: VALM_1_5
							{
								align = "right";
								pos[] = {"LevelM5",{ 0.22,-0.085 },1};
								right[] = {"LevelM5",{ 0.32,-0.085 },1};
								down[] = {"LevelM5",{ 0.22,-0.035 },1};
							};
							class LevelP5: Level0
							{
								type = "line";
								points[] = {{ "LevelP5",{ -0.2,0.03 },1 },{ "LevelP5",{ -0.2,0 },1 },{ "LevelP5",{ -0.05,0 },1 },{  },{ "LevelP5",{ 0.05,0 },1 },{ "LevelP5",{ 0.2,0 },1 },{ "LevelP5",{ 0.2,0.03 },1 }};
							};
							class VALP_1_5
							{
								type = "text";
								source = "static";
								text = "5";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP5",{ -0.23,0.035 },1};
								right[] = {"LevelP5",{ -0.13,0.035 },1};
								down[] = {"LevelP5",{ -0.23,0.085 },1};
							};
							class VALP_2_5: VALP_1_5
							{
								align = "right";
								pos[] = {"LevelP5",{ 0.22,0.035 },1};
								right[] = {"LevelP5",{ 0.32,0.035 },1};
								down[] = {"LevelP5",{ 0.22,0.085 },1};
							};
							class LevelM10: Level0
							{
								type = "line";
								points[] = {{ "LevelM10",{ -0.2,-0.03 },1 },{ "LevelM10",{ -0.2,0 },1 },{ "LevelM10",{ -0.15,0 },1 },{  },{ "LevelM10",{ -0.1,0 },1 },{ "LevelM10",{ -0.05,0 },1 },{  },{ "LevelM10",{ 0.05,0 },1 },{ "LevelM10",{ 0.1,0 },1 },{  },{ "LevelM10",{ 0.15,0 },1 },{ "LevelM10",{ 0.2,0 },1 },{ "LevelM10",{ 0.2,-0.03 },1 }};
							};
							class VALM_1_10
							{
								type = "text";
								source = "static";
								text = -10;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM10",{ -0.23,-0.085 },1};
								right[] = {"LevelM10",{ -0.13,-0.085 },1};
								down[] = {"LevelM10",{ -0.23,-0.035 },1};
							};
							class VALM_2_10: VALM_1_10
							{
								align = "right";
								pos[] = {"LevelM10",{ 0.22,-0.085 },1};
								right[] = {"LevelM10",{ 0.32,-0.085 },1};
								down[] = {"LevelM10",{ 0.22,-0.035 },1};
							};
							class LevelP10: Level0
							{
								type = "line";
								points[] = {{ "LevelP10",{ -0.2,0.03 },1 },{ "LevelP10",{ -0.2,0 },1 },{ "LevelP10",{ -0.05,0 },1 },{  },{ "LevelP10",{ 0.05,0 },1 },{ "LevelP10",{ 0.2,0 },1 },{ "LevelP10",{ 0.2,0.03 },1 }};
							};
							class VALP_1_10
							{
								type = "text";
								source = "static";
								text = "10";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP10",{ -0.23,0.035 },1};
								right[] = {"LevelP10",{ -0.13,0.035 },1};
								down[] = {"LevelP10",{ -0.23,0.085 },1};
							};
							class VALP_2_10: VALP_1_10
							{
								align = "right";
								pos[] = {"LevelP10",{ 0.22,0.035 },1};
								right[] = {"LevelP10",{ 0.32,0.035 },1};
								down[] = {"LevelP10",{ 0.22,0.085 },1};
							};
							class LevelM15: Level0
							{
								type = "line";
								points[] = {{ "LevelM15",{ -0.2,-0.03 },1 },{ "LevelM15",{ -0.2,0 },1 },{ "LevelM15",{ -0.15,0 },1 },{  },{ "LevelM15",{ -0.1,0 },1 },{ "LevelM15",{ -0.05,0 },1 },{  },{ "LevelM15",{ 0.05,0 },1 },{ "LevelM15",{ 0.1,0 },1 },{  },{ "LevelM15",{ 0.15,0 },1 },{ "LevelM15",{ 0.2,0 },1 },{ "LevelM15",{ 0.2,-0.03 },1 }};
							};
							class VALM_1_15
							{
								type = "text";
								source = "static";
								text = -15;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM15",{ -0.23,-0.085 },1};
								right[] = {"LevelM15",{ -0.13,-0.085 },1};
								down[] = {"LevelM15",{ -0.23,-0.035 },1};
							};
							class VALM_2_15: VALM_1_15
							{
								align = "right";
								pos[] = {"LevelM15",{ 0.22,-0.085 },1};
								right[] = {"LevelM15",{ 0.32,-0.085 },1};
								down[] = {"LevelM15",{ 0.22,-0.035 },1};
							};
							class LevelP15: Level0
							{
								type = "line";
								points[] = {{ "LevelP15",{ -0.2,0.03 },1 },{ "LevelP15",{ -0.2,0 },1 },{ "LevelP15",{ -0.05,0 },1 },{  },{ "LevelP15",{ 0.05,0 },1 },{ "LevelP15",{ 0.2,0 },1 },{ "LevelP15",{ 0.2,0.03 },1 }};
							};
							class VALP_1_15
							{
								type = "text";
								source = "static";
								text = "15";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP15",{ -0.23,0.035 },1};
								right[] = {"LevelP15",{ -0.13,0.035 },1};
								down[] = {"LevelP15",{ -0.23,0.085 },1};
							};
							class VALP_2_15: VALP_1_15
							{
								align = "right";
								pos[] = {"LevelP15",{ 0.22,0.035 },1};
								right[] = {"LevelP15",{ 0.32,0.035 },1};
								down[] = {"LevelP15",{ 0.22,0.085 },1};
							};
							class LevelM20: Level0
							{
								type = "line";
								points[] = {{ "LevelM20",{ -0.2,-0.03 },1 },{ "LevelM20",{ -0.2,0 },1 },{ "LevelM20",{ -0.15,0 },1 },{  },{ "LevelM20",{ -0.1,0 },1 },{ "LevelM20",{ -0.05,0 },1 },{  },{ "LevelM20",{ 0.05,0 },1 },{ "LevelM20",{ 0.1,0 },1 },{  },{ "LevelM20",{ 0.15,0 },1 },{ "LevelM20",{ 0.2,0 },1 },{ "LevelM20",{ 0.2,-0.03 },1 }};
							};
							class VALM_1_20
							{
								type = "text";
								source = "static";
								text = -20;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM20",{ -0.23,-0.085 },1};
								right[] = {"LevelM20",{ -0.13,-0.085 },1};
								down[] = {"LevelM20",{ -0.23,-0.035 },1};
							};
							class VALM_2_20: VALM_1_20
							{
								align = "right";
								pos[] = {"LevelM20",{ 0.22,-0.085 },1};
								right[] = {"LevelM20",{ 0.32,-0.085 },1};
								down[] = {"LevelM20",{ 0.22,-0.035 },1};
							};
							class LevelP20: Level0
							{
								type = "line";
								points[] = {{ "LevelP20",{ -0.2,0.03 },1 },{ "LevelP20",{ -0.2,0 },1 },{ "LevelP20",{ -0.05,0 },1 },{  },{ "LevelP20",{ 0.05,0 },1 },{ "LevelP20",{ 0.2,0 },1 },{ "LevelP20",{ 0.2,0.03 },1 }};
							};
							class VALP_1_20
							{
								type = "text";
								source = "static";
								text = "20";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP20",{ -0.23,0.035 },1};
								right[] = {"LevelP20",{ -0.13,0.035 },1};
								down[] = {"LevelP20",{ -0.23,0.085 },1};
							};
							class VALP_2_20: VALP_1_20
							{
								align = "right";
								pos[] = {"LevelP20",{ 0.22,0.035 },1};
								right[] = {"LevelP20",{ 0.32,0.035 },1};
								down[] = {"LevelP20",{ 0.22,0.085 },1};
							};
							class LevelM25: Level0
							{
								type = "line";
								points[] = {{ "LevelM25",{ -0.2,-0.03 },1 },{ "LevelM25",{ -0.2,0 },1 },{ "LevelM25",{ -0.15,0 },1 },{  },{ "LevelM25",{ -0.1,0 },1 },{ "LevelM25",{ -0.05,0 },1 },{  },{ "LevelM25",{ 0.05,0 },1 },{ "LevelM25",{ 0.1,0 },1 },{  },{ "LevelM25",{ 0.15,0 },1 },{ "LevelM25",{ 0.2,0 },1 },{ "LevelM25",{ 0.2,-0.03 },1 }};
							};
							class VALM_1_25
							{
								type = "text";
								source = "static";
								text = -25;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM25",{ -0.23,-0.085 },1};
								right[] = {"LevelM25",{ -0.13,-0.085 },1};
								down[] = {"LevelM25",{ -0.23,-0.035 },1};
							};
							class VALM_2_25: VALM_1_25
							{
								align = "right";
								pos[] = {"LevelM25",{ 0.22,-0.085 },1};
								right[] = {"LevelM25",{ 0.32,-0.085 },1};
								down[] = {"LevelM25",{ 0.22,-0.035 },1};
							};
							class LevelP25: Level0
							{
								type = "line";
								points[] = {{ "LevelP25",{ -0.2,0.03 },1 },{ "LevelP25",{ -0.2,0 },1 },{ "LevelP25",{ -0.05,0 },1 },{  },{ "LevelP25",{ 0.05,0 },1 },{ "LevelP25",{ 0.2,0 },1 },{ "LevelP25",{ 0.2,0.03 },1 }};
							};
							class VALP_1_25
							{
								type = "text";
								source = "static";
								text = "25";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP25",{ -0.23,0.035 },1};
								right[] = {"LevelP25",{ -0.13,0.035 },1};
								down[] = {"LevelP25",{ -0.23,0.085 },1};
							};
							class VALP_2_25: VALP_1_25
							{
								align = "right";
								pos[] = {"LevelP25",{ 0.22,0.035 },1};
								right[] = {"LevelP25",{ 0.32,0.035 },1};
								down[] = {"LevelP25",{ 0.22,0.085 },1};
							};
							class LevelM30: Level0
							{
								type = "line";
								points[] = {{ "LevelM30",{ -0.2,-0.03 },1 },{ "LevelM30",{ -0.2,0 },1 },{ "LevelM30",{ -0.15,0 },1 },{  },{ "LevelM30",{ -0.1,0 },1 },{ "LevelM30",{ -0.05,0 },1 },{  },{ "LevelM30",{ 0.05,0 },1 },{ "LevelM30",{ 0.1,0 },1 },{  },{ "LevelM30",{ 0.15,0 },1 },{ "LevelM30",{ 0.2,0 },1 },{ "LevelM30",{ 0.2,-0.03 },1 }};
							};
							class VALM_1_30
							{
								type = "text";
								source = "static";
								text = -30;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM30",{ -0.23,-0.085 },1};
								right[] = {"LevelM30",{ -0.13,-0.085 },1};
								down[] = {"LevelM30",{ -0.23,-0.035 },1};
							};
							class VALM_2_30: VALM_1_30
							{
								align = "right";
								pos[] = {"LevelM30",{ 0.22,-0.085 },1};
								right[] = {"LevelM30",{ 0.32,-0.085 },1};
								down[] = {"LevelM30",{ 0.22,-0.035 },1};
							};
							class LevelP30: Level0
							{
								type = "line";
								points[] = {{ "LevelP30",{ -0.2,0.03 },1 },{ "LevelP30",{ -0.2,0 },1 },{ "LevelP30",{ -0.05,0 },1 },{  },{ "LevelP30",{ 0.05,0 },1 },{ "LevelP30",{ 0.2,0 },1 },{ "LevelP30",{ 0.2,0.03 },1 }};
							};
							class VALP_1_30
							{
								type = "text";
								source = "static";
								text = "30";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP30",{ -0.23,0.035 },1};
								right[] = {"LevelP30",{ -0.13,0.035 },1};
								down[] = {"LevelP30",{ -0.23,0.085 },1};
							};
							class VALP_2_30: VALP_1_30
							{
								align = "right";
								pos[] = {"LevelP30",{ 0.22,0.035 },1};
								right[] = {"LevelP30",{ 0.32,0.035 },1};
								down[] = {"LevelP30",{ 0.22,0.085 },1};
							};
							class LevelM35: Level0
							{
								type = "line";
								points[] = {{ "LevelM35",{ -0.2,-0.03 },1 },{ "LevelM35",{ -0.2,0 },1 },{ "LevelM35",{ -0.15,0 },1 },{  },{ "LevelM35",{ -0.1,0 },1 },{ "LevelM35",{ -0.05,0 },1 },{  },{ "LevelM35",{ 0.05,0 },1 },{ "LevelM35",{ 0.1,0 },1 },{  },{ "LevelM35",{ 0.15,0 },1 },{ "LevelM35",{ 0.2,0 },1 },{ "LevelM35",{ 0.2,-0.03 },1 }};
							};
							class VALM_1_35
							{
								type = "text";
								source = "static";
								text = -35;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM35",{ -0.23,-0.085 },1};
								right[] = {"LevelM35",{ -0.13,-0.085 },1};
								down[] = {"LevelM35",{ -0.23,-0.035 },1};
							};
							class VALM_2_35: VALM_1_35
							{
								align = "right";
								pos[] = {"LevelM35",{ 0.22,-0.085 },1};
								right[] = {"LevelM35",{ 0.32,-0.085 },1};
								down[] = {"LevelM35",{ 0.22,-0.035 },1};
							};
							class LevelP35: Level0
							{
								type = "line";
								points[] = {{ "LevelP35",{ -0.2,0.03 },1 },{ "LevelP35",{ -0.2,0 },1 },{ "LevelP35",{ -0.05,0 },1 },{  },{ "LevelP35",{ 0.05,0 },1 },{ "LevelP35",{ 0.2,0 },1 },{ "LevelP35",{ 0.2,0.03 },1 }};
							};
							class VALP_1_35
							{
								type = "text";
								source = "static";
								text = "35";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP35",{ -0.23,0.035 },1};
								right[] = {"LevelP35",{ -0.13,0.035 },1};
								down[] = {"LevelP35",{ -0.23,0.085 },1};
							};
							class VALP_2_35: VALP_1_35
							{
								align = "right";
								pos[] = {"LevelP35",{ 0.22,0.035 },1};
								right[] = {"LevelP35",{ 0.32,0.035 },1};
								down[] = {"LevelP35",{ 0.22,0.085 },1};
							};
							class LevelM40: Level0
							{
								type = "line";
								points[] = {{ "LevelM40",{ -0.2,-0.03 },1 },{ "LevelM40",{ -0.2,0 },1 },{ "LevelM40",{ -0.15,0 },1 },{  },{ "LevelM40",{ -0.1,0 },1 },{ "LevelM40",{ -0.05,0 },1 },{  },{ "LevelM40",{ 0.05,0 },1 },{ "LevelM40",{ 0.1,0 },1 },{  },{ "LevelM40",{ 0.15,0 },1 },{ "LevelM40",{ 0.2,0 },1 },{ "LevelM40",{ 0.2,-0.03 },1 }};
							};
							class VALM_1_40
							{
								type = "text";
								source = "static";
								text = -40;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM40",{ -0.23,-0.085 },1};
								right[] = {"LevelM40",{ -0.13,-0.085 },1};
								down[] = {"LevelM40",{ -0.23,-0.035 },1};
							};
							class VALM_2_40: VALM_1_40
							{
								align = "right";
								pos[] = {"LevelM40",{ 0.22,-0.085 },1};
								right[] = {"LevelM40",{ 0.32,-0.085 },1};
								down[] = {"LevelM40",{ 0.22,-0.035 },1};
							};
							class LevelP40: Level0
							{
								type = "line";
								points[] = {{ "LevelP40",{ -0.2,0.03 },1 },{ "LevelP40",{ -0.2,0 },1 },{ "LevelP40",{ -0.05,0 },1 },{  },{ "LevelP40",{ 0.05,0 },1 },{ "LevelP40",{ 0.2,0 },1 },{ "LevelP40",{ 0.2,0.03 },1 }};
							};
							class VALP_1_40
							{
								type = "text";
								source = "static";
								text = "40";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP40",{ -0.23,0.035 },1};
								right[] = {"LevelP40",{ -0.13,0.035 },1};
								down[] = {"LevelP40",{ -0.23,0.085 },1};
							};
							class VALP_2_40: VALP_1_40
							{
								align = "right";
								pos[] = {"LevelP40",{ 0.22,0.035 },1};
								right[] = {"LevelP40",{ 0.32,0.035 },1};
								down[] = {"LevelP40",{ 0.22,0.085 },1};
							};
							class LevelM45: Level0
							{
								type = "line";
								points[] = {{ "LevelM45",{ -0.2,-0.03 },1 },{ "LevelM45",{ -0.2,0 },1 },{ "LevelM45",{ -0.15,0 },1 },{  },{ "LevelM45",{ -0.1,0 },1 },{ "LevelM45",{ -0.05,0 },1 },{  },{ "LevelM45",{ 0.05,0 },1 },{ "LevelM45",{ 0.1,0 },1 },{  },{ "LevelM45",{ 0.15,0 },1 },{ "LevelM45",{ 0.2,0 },1 },{ "LevelM45",{ 0.2,-0.03 },1 }};
							};
							class VALM_1_45
							{
								type = "text";
								source = "static";
								text = -45;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM45",{ -0.23,-0.085 },1};
								right[] = {"LevelM45",{ -0.13,-0.085 },1};
								down[] = {"LevelM45",{ -0.23,-0.035 },1};
							};
							class VALM_2_45: VALM_1_45
							{
								align = "right";
								pos[] = {"LevelM45",{ 0.22,-0.085 },1};
								right[] = {"LevelM45",{ 0.32,-0.085 },1};
								down[] = {"LevelM45",{ 0.22,-0.035 },1};
							};
							class LevelP45: Level0
							{
								type = "line";
								points[] = {{ "LevelP45",{ -0.2,0.03 },1 },{ "LevelP45",{ -0.2,0 },1 },{ "LevelP45",{ -0.05,0 },1 },{  },{ "LevelP45",{ 0.05,0 },1 },{ "LevelP45",{ 0.2,0 },1 },{ "LevelP45",{ 0.2,0.03 },1 }};
							};
							class VALP_1_45
							{
								type = "text";
								source = "static";
								text = "45";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP45",{ -0.23,0.035 },1};
								right[] = {"LevelP45",{ -0.13,0.035 },1};
								down[] = {"LevelP45",{ -0.23,0.085 },1};
							};
							class VALP_2_45: VALP_1_45
							{
								align = "right";
								pos[] = {"LevelP45",{ 0.22,0.035 },1};
								right[] = {"LevelP45",{ 0.32,0.035 },1};
								down[] = {"LevelP45",{ 0.22,0.085 },1};
							};
							class LevelM50: Level0
							{
								type = "line";
								points[] = {{ "LevelM50",{ -0.2,-0.03 },1 },{ "LevelM50",{ -0.2,0 },1 },{ "LevelM50",{ -0.15,0 },1 },{  },{ "LevelM50",{ -0.1,0 },1 },{ "LevelM50",{ -0.05,0 },1 },{  },{ "LevelM50",{ 0.05,0 },1 },{ "LevelM50",{ 0.1,0 },1 },{  },{ "LevelM50",{ 0.15,0 },1 },{ "LevelM50",{ 0.2,0 },1 },{ "LevelM50",{ 0.2,-0.03 },1 }};
							};
							class VALM_1_50
							{
								type = "text";
								source = "static";
								text = -50;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM50",{ -0.23,-0.085 },1};
								right[] = {"LevelM50",{ -0.13,-0.085 },1};
								down[] = {"LevelM50",{ -0.23,-0.035 },1};
							};
							class VALM_2_50: VALM_1_50
							{
								align = "right";
								pos[] = {"LevelM50",{ 0.22,-0.085 },1};
								right[] = {"LevelM50",{ 0.32,-0.085 },1};
								down[] = {"LevelM50",{ 0.22,-0.035 },1};
							};
							class LevelP50: Level0
							{
								type = "line";
								points[] = {{ "LevelP50",{ -0.2,0.03 },1 },{ "LevelP50",{ -0.2,0 },1 },{ "LevelP50",{ -0.05,0 },1 },{  },{ "LevelP50",{ 0.05,0 },1 },{ "LevelP50",{ 0.2,0 },1 },{ "LevelP50",{ 0.2,0.03 },1 }};
							};
							class VALP_1_50
							{
								type = "text";
								source = "static";
								text = "50";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP50",{ -0.23,0.035 },1};
								right[] = {"LevelP50",{ -0.13,0.035 },1};
								down[] = {"LevelP50",{ -0.23,0.085 },1};
							};
							class VALP_2_50: VALP_1_50
							{
								align = "right";
								pos[] = {"LevelP50",{ 0.22,0.035 },1};
								right[] = {"LevelP50",{ 0.32,0.035 },1};
								down[] = {"LevelP50",{ 0.22,0.085 },1};
							};
						};
					};
					class RadarTargets
					{
						type = "radar";
						pos0[] = {0.51,"0.27+0.09"};
						pos10[] = {1.31,1.24};
						points[] = {{ { -0.05,-0.055 },1 },{ { 0.05,-0.055 },1 },{ { 0.05,0.055 },1 },{ { -0.05,0.055 },1 },{ { -0.05,-0.055 },1 }};
					};
					class MGun
					{
						condition = "mgun";
						class Circle
						{
							type = "line";
							points[] = {{ "WeaponAim",{ 0.01,0 },1 },{ "WeaponAim",{ -0.01,0 },1 },{  },{ "WeaponAim",{ 0,0.011 },1 },{ "WeaponAim",{ 0,-0.011 },1 },{  },{ "WeaponAim",{ 0,-0.077 },1 },{ "WeaponAim",{ 0.049,-0.0539 },1 },{ "WeaponAim",{ 0.07,0 },1 },{ "WeaponAim",{ 0.049,0.0539 },1 },{ "WeaponAim",{ 0,0.077 },1 },{ "WeaponAim",{ -0.049,0.0539 },1 },{ "WeaponAim",{ -0.07,0 },1 },{ "WeaponAim",{ -0.049,-0.0539 },1 },{ "WeaponAim",{ 0,-0.077 },1 },{  },{ "WeaponAim",{ 0,-0.154 },1 },{ "WeaponAim",{ 0.07,-0.13398 },1 },{ "WeaponAim",{ 0.1218,-0.077 },1 },{ "WeaponAim",{ 0.14,0 },1 },{ "WeaponAim",{ 0.1218,0.077 },1 },{ "WeaponAim",{ 0.07,0.13398 },1 },{ "WeaponAim",{ 0,0.154 },1 },{ "WeaponAim",{ -0.07,0.13398 },1 },{ "WeaponAim",{ -0.1218,0.077 },1 },{ "WeaponAim",{ -0.14,0 },1 },{ "WeaponAim",{ -0.1218,-0.077 },1 },{ "WeaponAim",{ -0.07,-0.13398 },1 },{ "WeaponAim",{ 0,-0.154 },1 },{  },{ "WeaponAim",{ 0,-0.154 },1 },{ "WeaponAim",{ 0,-0.176 },1 },{  },{ "WeaponAim",{ -0.07,-0.133368 },1 },{ "WeaponAim",{ -0.08,-0.15242 },1 },{  },{ "WeaponAim",{ -0.121244,-0.077 },1 },{ "WeaponAim",{ -0.138564,-0.088 },1 },{  },{ "WeaponAim",{ -0.14,6.73155e-009 },1 },{ "WeaponAim",{ -0.16,7.6932e-009 },1 },{  },{ "WeaponAim",{ -0.121244,0.077 },1 },{ "WeaponAim",{ -0.138564,0.088 },1 },{  },{ "WeaponAim",{ -0.07,0.133368 },1 },{ "WeaponAim",{ -0.08,0.15242 },1 },{  },{ "WeaponAim",{ 1.22392e-008,0.154 },1 },{ "WeaponAim",{ 1.39876e-008,0.176 },1 },{  },{ "WeaponAim",{ 0.07,0.133368 },1 },{ "WeaponAim",{ 0.08,0.15242 },1 },{  },{ "WeaponAim",{ 0.121244,0.077 },1 },{ "WeaponAim",{ 0.138564,0.088 },1 },{  },{ "WeaponAim",{ 0.14,-1.83643e-009 },1 },{ "WeaponAim",{ 0.16,-2.09878e-009 },1 },{  },{ "WeaponAim",{ 0.121244,-0.077 },1 },{ "WeaponAim",{ 0.138564,-0.088 },1 },{  },{ "WeaponAim",{ 0.07,-0.133368 },1 },{ "WeaponAim",{ 0.08,-0.15242 },1 },{  }};
						};
					};
					class Bomb
					{
						condition = "bomb";
						class Circle
						{
							type = "line";
							points[] = {{ "WeaponAim",{ 0,-0.11 },1 },{ "WeaponAim",{ 0.05,-0.0957 },1 },{ "WeaponAim",{ 0.087,-0.055 },1 },{ "WeaponAim",{ 0.1,0 },1 },{ "WeaponAim",{ 0.087,0.055 },1 },{ "WeaponAim",{ 0.05,0.0957 },1 },{ "WeaponAim",{ 0,0.11 },1 },{ "WeaponAim",{ -0.05,0.0957 },1 },{ "WeaponAim",{ -0.087,0.055 },1 },{ "WeaponAim",{ -0.1,0 },1 },{ "WeaponAim",{ -0.087,-0.055 },1 },{ "WeaponAim",{ -0.05,-0.0957 },1 },{ "WeaponAim",{ 0,-0.11 },1 },{  },{ "Velocity",0.001,"WeaponAim",{ 0.0,0.0 },1 },{ "Velocity",{ 0.0,0.0 },1 },{  },{ "Target",{ 0,-0.077 },1 },{ "Target",{ 0.07,0 },1 },{ "Target",{ 0,0.077 },1 },{ "Target",{ -0.07,0 },1 },{ "Target",{ 0,-0.077 },1 }};
						};
					};
					class AAMissile
					{
						condition = "AAmissile";
						class Circle
						{
							type = "line";
							points[] = {{ "WeaponAim",{ 0,-0.275 },1 },{ "WeaponAim",{ 0.125,-0.23925 },1 },{ "WeaponAim",{ 0.2175,-0.1375 },1 },{ "WeaponAim",{ 0.25,0 },1 },{ "WeaponAim",{ 0.2175,0.1375 },1 },{ "WeaponAim",{ 0.125,0.23925 },1 },{ "WeaponAim",{ 0,0.275 },1 },{ "WeaponAim",{ -0.125,0.23925 },1 },{ "WeaponAim",{ -0.2175,0.1375 },1 },{ "WeaponAim",{ -0.25,0 },1 },{ "WeaponAim",{ -0.2175,-0.1375 },1 },{ "WeaponAim",{ -0.125,-0.23925 },1 },{ "WeaponAim",{ 0,-0.275 },1 },{  },{ "Target",{ 0,-0.077 },1 },{ "Target",{ 0.07,0 },1 },{ "Target",{ 0,0.077 },1 },{ "Target",{ -0.07,0 },1 },{ "Target",{ 0,-0.077 },1 }};
						};
					};
					class ATMissile
					{
						condition = "ATmissile";
						class Circle
						{
							type = "line";
							points[] = {{ "WeaponAim",{ 0,-0.198 },1 },{ "WeaponAim",{ 0.09,-0.17226 },1 },{ "WeaponAim",{ 0.1566,-0.099 },1 },{ "WeaponAim",{ 0.18,0 },1 },{ "WeaponAim",{ 0.1566,0.099 },1 },{ "WeaponAim",{ 0.09,0.17226 },1 },{ "WeaponAim",{ 0,0.198 },1 },{ "WeaponAim",{ -0.09,0.17226 },1 },{ "WeaponAim",{ -0.1566,0.099 },1 },{ "WeaponAim",{ -0.18,0 },1 },{ "WeaponAim",{ -0.1566,-0.099 },1 },{ "WeaponAim",{ -0.09,-0.17226 },1 },{ "WeaponAim",{ 0,-0.198 },1 },{  },{ "Target",{ 0,-0.077 },1 },{ "Target",{ 0.07,0 },1 },{ "Target",{ 0,0.077 },1 },{ "Target",{ -0.07,0 },1 },{ "Target",{ 0,-0.077 },1 }};
						};
					};
					class Rockets
					{
						condition = "Rocket";
						class Circle
						{
							type = "line";
							points[] = {{ "WeaponAim",{ 0.01,0 },1 },{ "WeaponAim",{ -0.01,0 },1 },{  },{ "WeaponAim",{ 0,0.011 },1 },{ "WeaponAim",{ 0,-0.011 },1 },{  },{ "WeaponAim",{ 0,-0.132 },1 },{ "WeaponAim",{ 0.06,-0.11484 },1 },{ "WeaponAim",{ 0.1044,-0.066 },1 },{ "WeaponAim",{ 0.12,0 },1 },{ "WeaponAim",{ 0.1044,0.066 },1 },{ "WeaponAim",{ 0.06,0.11484 },1 },{ "WeaponAim",{ 0,0.132 },1 },{ "WeaponAim",{ -0.06,0.11484 },1 },{ "WeaponAim",{ -0.1044,0.066 },1 },{ "WeaponAim",{ -0.12,0 },1 },{ "WeaponAim",{ -0.1044,-0.066 },1 },{ "WeaponAim",{ -0.06,-0.11484 },1 },{ "WeaponAim",{ 0,-0.132 },1 },{  }};
						};
					};
					class AltScale
					{
						type = "scale";
						scale = 1;
						source = "altitudeASL";
						sourceScale = 1;
						align = "right";
						pos[] = {0.86,0.82};
						right[] = {0.94,0.82};
						down[] = {0.86,0.87};
						lineXleft = 0.825;
						lineYright = 0.835;
						lineXleftMajor = 0.825;
						lineYrightMajor = 0.845;
						bottom = 0.2;
						top = 0.85;
						center = 0.5;
						step = 20;
						StepSize = "(0.85- 0.2)/20";
						horizontal = 0;
						min = "none";
						max = "none";
						numberEach = 5;
						majorLineEach = 5;
					};
					class SpeedScale
					{
						type = "scale";
						scale = 1;
						source = "speed";
						sourceScale = 3.6;
						align = "right";
						pos[] = {0.06,"0.82-0.85+0.2"};
						right[] = {0.14,"0.82-0.85+0.2"};
						down[] = {0.06,"0.87-0.85+0.2"};
						lineXleft = "0.18 + 0.82 - 0.825";
						lineYright = "0.18 + 0.82 - 0.835";
						lineXleftMajor = "0.18 + 0.82 - 0.825";
						lineYrightMajor = "0.18 + 0.82 - 0.845";
						bottom = 0.85;
						center = 0.5;
						top = 0.2;
						step = 20;
						StepSize = "(0.85- 0.2)/20";
						horizontal = 0;
						min = "none";
						max = "none";
						numberEach = 5;
						majorLineEach = 5;
					};
					class Gear
					{
						condition = "ils";
						class text
						{
							type = "text";
							source = "static";
							text = "GEAR";
							align = "right";
							scale = 0.5;
							sourceScale = 1;
							pos[] = {{ 0.84,0.88 },1};
							right[] = {{ 0.9,0.88 },1};
							down[] = {{ 0.84,0.92 },1};
						};
					};
					class Flaps
					{
						condition = "flaps";
						class text
						{
							type = "text";
							source = "static";
							text = "FLAPS";
							align = "right";
							scale = 0.5;
							sourceScale = 1;
							pos[] = {{ 0.84,0.93 },1};
							right[] = {{ 0.9,0.93 },1};
							down[] = {{ 0.84,0.97 },1};
						};
					};
					class weapons
					{
						type = "text";
						source = "weapon";
						align = "right";
						scale = 0.5;
						sourceScale = 1;
						pos[] = {{ 0.1,0.88 },1};
						right[] = {{ 0.16,0.88 },1};
						down[] = {{ 0.1,0.92 },1};
					};
					class ammo
					{
						type = "text";
						source = "ammo";
						align = "right";
						scale = 0.5;
						sourceScale = 1;
						pos[] = {{ 0.1,0.93 },1};
						right[] = {{ 0.16,0.93 },1};
						down[] = {{ 0.1,0.97 },1};
					};
					class VspeedNumber
					{
						type = "text";
						align = "right";
						scale = 1;
						source = "vspeed";
						sourceScale = 1;
						pos[] = {{ 0.86,"0.52-0.4" },1};
						right[] = {{ 0.94,"0.52-0.4" },1};
						down[] = {{ 0.86,"0.57-0.4" },1};
					};
					class HeadingScale
					{
						type = "scale";
						scale = 1;
						source = "Heading";
						sourceScale = 1;
						align = "center";
						pos[] = {"0.21-0.01",0.0};
						right[] = {"0.29-0.01",0.0};
						down[] = {"0.21-0.01",0.05};
						lineXleft = 0.06;
						lineYright = 0.05;
						lineXleftMajor = 0.06;
						lineYrightMajor = 0.04;
						bottom = 0.8;
						center = 0.5;
						top = 0.2;
						step = "18/9";
						StepSize = "(0.80- 0.2)/20";
						horizontal = 1;
						min = "none";
						max = "none";
						numberEach = 5;
						majorLineEach = 5;
					};
					class ILS
					{
						condition = "ils";
						class Glideslope
						{
							clipTL[] = {0.0,0.0};
							clipBR[] = {1.0,1.0};
							class ILS
							{
								type = "line";
								points[] = {{ "ILS_W",{ -0.24,0 },1 },{ "ILS_W",{ 0.24,0 },1 },{  },{ "ILS_W",{ 0,0.0264 },1 },{ "ILS_W",{ 0,-0.0264 },1 },{  },{ "ILS_W",{ 0.12,0.0264 },1 },{ "ILS_W",{ 0.12,-0.0264 },1 },{  },{ "ILS_W",{ 0.24,0.0264 },1 },{ "ILS_W",{ 0.24,-0.0264 },1 },{  },{ "ILS_W",{ -0.12,0.0264 },1 },{ "ILS_W",{ -0.12,-0.0264 },1 },{  },{ "ILS_W",{ -0.24,0.0264 },1 },{ "ILS_W",{ -0.24,-0.0264 },1 },{  },{ "ILS_H",{ 0,-0.264 },1 },{ "ILS_H",{ 0,0.264 },1 },{  },{ "ILS_H",{ 0.024,0 },1 },{ "ILS_H",{ -0.024,0 },1 },{  },{ "ILS_H",{ 0.024,0.132 },1 },{ "ILS_H",{ -0.024,0.132 },1 },{  },{ "ILS_H",{ 0.024,0.264 },1 },{ "ILS_H",{ -0.024,0.264 },1 },{  },{ "ILS_H",{ 0.024,-0.132 },1 },{ "ILS_H",{ -0.024,-0.132 },1 },{  },{ "ILS_H",{ 0.024,-0.264 },1 },{ "ILS_H",{ -0.024,-0.264 },1 }};
							};
						};
					};
				};
			};
		};
	};
	class PlaneWreck;
	class A10Wreck: PlaneWreck
	{
		scope = 1;
		class Armory
		{
			disabled = 1;
		};
		model = "\ca\A10\A10Wreck.p3d";
		typicalCargo[] = {};
		irTarget = 0;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		transportSoldier = 1;
		class Eventhandlers{};
	};
};
//};

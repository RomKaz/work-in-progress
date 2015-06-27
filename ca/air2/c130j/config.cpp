////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:00:42 2014 : Source 'file' date Fri Oct 31 06:00:42 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class air2 : c130j\config.bin{
class CfgPatches
{
	class CAAir2_C130J
	{
		units[] = {"C130J"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAAir2"};
	};
};
class CfgVehicles
{
	class Plane;
	class C130J: Plane
	{
		destrType = "DestructWreck";
		scope = 0;
		cabinOpening = "false";
		displayname = "$STR_DN_C130J";
		class Library
		{
			libTextDesc = "$STR_LIB_C130J";
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\air2\C130J\DATA\c130j_sklo.rvmat","ca\air2\C130J\DATA\c130j_sklo_damage.rvmat","ca\air2\C130J\DATA\c130j_sklo_damage.rvmat","ca\air2\C130J\DATA\c130j_sklo_in.rvmat","ca\air2\C130J\DATA\c130j_sklo_in_damage.rvmat","ca\air2\C130J\DATA\c130j_sklo_in_damage.rvmat","ca\air2\C130J\DATA\c130j_body.rvmat","ca\air2\C130J\DATA\c130j_body_damage.rvmat","ca\air2\C130J\DATA\c130j_body_destruct.rvmat","ca\air2\C130J\DATA\c130j_interior.rvmat","ca\air2\C130J\DATA\c130j_interior_damage.rvmat","ca\air2\C130J\DATA\c130j_interior_destruct.rvmat","ca\air2\C130J\DATA\c130j_wings.rvmat","ca\air2\C130J\DATA\c130j_wings_damage.rvmat","ca\air2\C130J\DATA\c130j_wings_destruct.rvmat"};
		};
		vehicleClass = "Air";
		model = "\ca\air2\c130j\c130j.p3d";
		picture = "\ca\air2\data\UI\picture_c130j_CA.paa";
		icon = "\ca\air2\data\UI\icon_c130j_CA.paa";
		mapSize = 25;
		maxSpeed = 648;
		accuracy = 0.15;
		cost = 20000;
		armor = 70;
		driverAction = "C130_Pilot";
		cargoAction[] = {"C130_Cargo","Mi17_Cargo02"};
		transportSoldier = 25;
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment1"};
		soundGetIn[] = {"ca\sounds\Air\C130\close",0.31622776,1};
		soundGetOut[] = {"ca\sounds\Air\C130\open",0.31622776,1,40};
		soundDammage[] = {"ca\sounds\Air\C130\int-alarm_loop",0.56234133,1};
		soundEngineOnInt[] = {"ca\sounds\Air\C130\int_start_1",0.39810717,1.0};
		soundEngineOnExt[] = {"ca\sounds\Air\C130\ext_start_1",0.39810717,1.0,700};
		soundEngineOffInt[] = {"ca\sounds\Air\C130\int_stop_1",0.39810717,1.0};
		soundEngineOffExt[] = {"ca\sounds\Air\C130\ext_stop_1",0.39810717,1.0,700};
		class Sounds
		{
			class EngineLowOut
			{
				sound[] = {"ca\sounds\Air\C130\ext_engine_low",1.7782794,1,900};
				frequency = "1.0 min (rpm + 0.5)";
				volume = "camPos*engineOn*(rpm factor[0.85, 0])";
			};
			class EngineHighOut
			{
				sound[] = {"ca\sounds\Air\C130\ext_engine_hi",1.7782794,1,1100};
				frequency = "1";
				volume = "camPos*engineOn*(rpm factor[0.55, 1.0])";
			};
			class ForsageOut
			{
				sound[] = {"ca\sounds\Air\C130\ext_forsage_1",1.4125376,1,1500};
				frequency = "1";
				volume = "camPos*engineOn*(thrust factor[0.5, 1.0])";
				cone[] = {1.14,3.92,2.0,0.4};
			};
			class WindNoiseOut
			{
				sound[] = {"ca\sounds\Air\C130\ext-wind1",0.001,0.6,150};
				frequency = "(0.1+(1.2*(speed factor[1, 100])))";
				volume = "camPos*(speed factor[1, 100])";
			};
			class EngineLowIn
			{
				sound[] = {"ca\sounds\Air\C130\int_engine_low",1.0,1.0};
				frequency = "1.0 min (rpm + 0.5)";
				volume = "(1-camPos)*(engineOn*(rpm factor[0.85, 0]))";
			};
			class EngineHighIn
			{
				sound[] = {"ca\sounds\Air\C130\int_engine_hi",1.0,1.0};
				frequency = "1";
				volume = "(1-camPos)*(engineOn*(rpm factor[0.55, 1.0]))";
			};
			class ForsageIn
			{
				sound[] = {"ca\sounds\Air\C130\int_forsage_1",1.4125376,1.1};
				frequency = "1";
				volume = "(1-camPos)*(engineOn*(thrust factor[0.5, 1.0]))";
			};
			class WindNoiseIn
			{
				sound[] = {"ca\sounds\Air\C130\int-wind1",0.001,0.6};
				frequency = "(0.1+(1.2*(speed factor[1, 100])))";
				volume = "(1-camPos)*(speed factor[1, 100])";
			};
		};
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
			class Right
			{
				color[] = {0.8,0.8,1.0,1.0};
				ambient[] = {0.07,0.07,0.07,1.0};
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 1;
				brightness = 1.0;
			};
			class Left2
			{
				color[] = {0.8,0.8,1.0,1.0};
				ambient[] = {0.07,0.07,0.07,1.0};
				position = "L2 svetlo";
				direction = "konec L2 svetla";
				hitpoint = "L2 svetlo";
				selection = "L2 svetlo";
				size = 1;
				brightness = 1.0;
			};
			class Right2
			{
				color[] = {0.8,0.8,1.0,1.0};
				ambient[] = {0.07,0.07,0.07,1.0};
				position = "P2 svetlo";
				direction = "konec P2 svetla";
				hitpoint = "P2 svetlo";
				selection = "P2 svetlo";
				size = 1;
				brightness = 1.0;
			};
		};
		weapons[] = {};
		magazines[] = {};
		threat[] = {0.1,0.5,0.8};
		ejectSpeed[] = {0,0,0};
		landingAoa = "rad 7";
		landingSpeed = 200;
		extCameraPosition[] = {0,5,-40};
		envelope[] = {0.0,0.1,0.5,1.5,3.1,4.3,4.9,5,4.4,2.8,1.6,0.8,0};
		flapsFrictionCoef = 2;
		wheelSteeringSensitivity = 2.0;
		aileronSensitivity = 1;
		elevatorSensitivity = 1;
		noseDownCoef = 1;
		gearUpTime = 4.5;
		gearDownTime = 3;
		class AnimationSources
		{
			class door_2_2
			{
				source = "user";
				animPeriod = 2.5;
			};
			class door_2_1: door_2_2{};
			class door_1: door_2_2{};
			class ramp_top: door_2_2{};
			class ramp_bottom: door_2_2{};
		};
		class MFD
		{
			class AirplaneHUD
			{
				class Pos10Vector
				{
					type = "vector";
					pos0[] = {0.5,0.3};
					pos10[] = {0.9,0.75};
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
						pos[] = {0.5,0.34};
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
						pos0[] = {0.5,0.3};
						pos10[] = {0.9,0.75};
					};
					class ILS_H
					{
						type = "ils";
						pos0[] = {0.5,0.3};
						pos3[] = {0.62,0.3};
					};
					class ILS_W: ILS_H
					{
						pos3[] = {0.5,0.435};
					};
					class Level0: Pos10Vector
					{
						pos0[] = {0.5,0.34};
						pos10[] = {0.9,0.79};
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
						points[] = {{ "PlaneW",{ -0.08,0 },1 },{ "PlaneW",{ -0.03,0 },1 },{ "PlaneW",{ -0.015,0.03375 },1 },{ "PlaneW",{ 0.0,0 },1 },{ "PlaneW",{ 0.015,0.03375 },1 },{ "PlaneW",{ 0.03,0 },1 },{ "PlaneW",{ 0.08,0 },1 }};
					};
					class PlaneHeading
					{
						clipTL[] = {0.0,1.0};
						clipBR[] = {1.0,0.0};
						type = "line";
						points[] = {{ "Velocity",{ 0,-0.0225 },1 },{ "Velocity",{ 0.014,-0.01575 },1 },{ "Velocity",{ 0.02,0 },1 },{ "Velocity",{ 0.014,0.01575 },1 },{ "Velocity",{ 0,0.0225 },1 },{ "Velocity",{ -0.014,0.01575 },1 },{ "Velocity",{ -0.02,0 },1 },{ "Velocity",{ -0.014,-0.01575 },1 },{ "Velocity",{ 0,-0.0225 },1 },{  },{ "Velocity",{ 0.04,0 },1 },{ "Velocity",{ 0.02,0 },1 },{  },{ "Velocity",{ -0.04,0 },1 },{ "Velocity",{ -0.02,0 },1 },{  },{ "Velocity",{ 0,-0.045 },1 },{ "Velocity",{ 0,-0.0225 },1 },{  }};
					};
					class Static
					{
						clipTL[] = {0.0,0.1};
						clipBR[] = {1.0,0.0};
						type = "line";
						points[] = {{ { 0.21,0.52 },1 },{ { 0.19,0.5 },1 },{ { 0.21,0.48 },1 },{  },{ { 0.18,0.2 },1 },{ { 0.18,0.85 },1 },{  },{ { 0.79,0.52 },1 },{ { 0.81,0.5 },1 },{ { 0.79,0.48 },1 },{  },{ { 0.82,0.2 },1 },{ { 0.82,0.85 },1 },{  },{ { 0.52,0.09 },1 },{ { 0.5,0.07 },1 },{ { 0.48,0.09 },1 },{  },{ { 0.2,0.065 },1 },{ { 0.8,0.065 },1 },{  }};
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
					class MGun
					{
						condition = "mgun";
						class Circle
						{
							type = "line";
							points[] = {{ "WeaponAim",{ 0.01,0 },1 },{ "WeaponAim",{ -0.01,0 },1 },{  },{ "WeaponAim",{ 0,0.01125 },1 },{ "WeaponAim",{ 0,-0.01125 },1 },{  },{ "WeaponAim",{ 0,-0.07875 },1 },{ "WeaponAim",{ 0.049,-0.055125 },1 },{ "WeaponAim",{ 0.07,0 },1 },{ "WeaponAim",{ 0.049,0.055125 },1 },{ "WeaponAim",{ 0,0.07875 },1 },{ "WeaponAim",{ -0.049,0.055125 },1 },{ "WeaponAim",{ -0.07,0 },1 },{ "WeaponAim",{ -0.049,-0.055125 },1 },{ "WeaponAim",{ 0,-0.07875 },1 },{  },{ "WeaponAim",{ 0,-0.1575 },1 },{ "WeaponAim",{ 0.07,-0.137025 },1 },{ "WeaponAim",{ 0.1218,-0.07875 },1 },{ "WeaponAim",{ 0.14,0 },1 },{ "WeaponAim",{ 0.1218,0.07875 },1 },{ "WeaponAim",{ 0.07,0.137025 },1 },{ "WeaponAim",{ 0,0.1575 },1 },{ "WeaponAim",{ -0.07,0.137025 },1 },{ "WeaponAim",{ -0.1218,0.07875 },1 },{ "WeaponAim",{ -0.14,0 },1 },{ "WeaponAim",{ -0.1218,-0.07875 },1 },{ "WeaponAim",{ -0.07,-0.137025 },1 },{ "WeaponAim",{ 0,-0.1575 },1 },{  },{ "WeaponAim",{ 0,-0.1575 },1 },{ "WeaponAim",{ 0,-0.18 },1 },{  },{ "WeaponAim",{ -0.07,-0.136399 },1 },{ "WeaponAim",{ -0.08,-0.155885 },1 },{  },{ "WeaponAim",{ -0.121244,-0.07875 },1 },{ "WeaponAim",{ -0.138564,-0.09 },1 },{  },{ "WeaponAim",{ -0.14,6.88454e-009 },1 },{ "WeaponAim",{ -0.16,7.86805e-009 },1 },{  },{ "WeaponAim",{ -0.121244,0.07875 },1 },{ "WeaponAim",{ -0.138564,0.09 },1 },{  },{ "WeaponAim",{ -0.07,0.136399 },1 },{ "WeaponAim",{ -0.08,0.155885 },1 },{  },{ "WeaponAim",{ 1.22392e-008,0.1575 },1 },{ "WeaponAim",{ 1.39876e-008,0.18 },1 },{  },{ "WeaponAim",{ 0.07,0.136399 },1 },{ "WeaponAim",{ 0.08,0.155885 },1 },{  },{ "WeaponAim",{ 0.121244,0.07875 },1 },{ "WeaponAim",{ 0.138564,0.09 },1 },{  },{ "WeaponAim",{ 0.14,-1.87817e-009 },1 },{ "WeaponAim",{ 0.16,-2.14648e-009 },1 },{  },{ "WeaponAim",{ 0.121244,-0.07875 },1 },{ "WeaponAim",{ 0.138564,-0.09 },1 },{  },{ "WeaponAim",{ 0.07,-0.136399 },1 },{ "WeaponAim",{ 0.08,-0.155885 },1 },{  }};
						};
					};
					class Bomb
					{
						condition = "bomb";
						class Circle
						{
							type = "line";
							points[] = {{ "WeaponAim",{ 0,-0.1125 },1 },{ "WeaponAim",{ 0.05,-0.097875 },1 },{ "WeaponAim",{ 0.087,-0.05625 },1 },{ "WeaponAim",{ 0.1,0 },1 },{ "WeaponAim",{ 0.087,0.05625 },1 },{ "WeaponAim",{ 0.05,0.097875 },1 },{ "WeaponAim",{ 0,0.1125 },1 },{ "WeaponAim",{ -0.05,0.097875 },1 },{ "WeaponAim",{ -0.087,0.05625 },1 },{ "WeaponAim",{ -0.1,0 },1 },{ "WeaponAim",{ -0.087,-0.05625 },1 },{ "WeaponAim",{ -0.05,-0.097875 },1 },{ "WeaponAim",{ 0,-0.1125 },1 },{  },{ "Velocity",0.001,"WeaponAim",{ 0.0,0.0 },1 },{ "Velocity",{ 0.0,0.0 },1 },{  },{ "Target",{ 0,-0.07875 },1 },{ "Target",{ 0.07,0 },1 },{ "Target",{ 0,0.07875 },1 },{ "Target",{ -0.07,0 },1 },{ "Target",{ 0,-0.07875 },1 }};
						};
					};
					class AAMissile
					{
						condition = "AAmissile";
						class Circle
						{
							type = "line";
							points[] = {{ "WeaponAim",{ 0,-0.28125 },1 },{ "WeaponAim",{ 0.125,-0.244687 },1 },{ "WeaponAim",{ 0.2175,-0.140625 },1 },{ "WeaponAim",{ 0.25,0 },1 },{ "WeaponAim",{ 0.2175,0.140625 },1 },{ "WeaponAim",{ 0.125,0.244687 },1 },{ "WeaponAim",{ 0,0.28125 },1 },{ "WeaponAim",{ -0.125,0.244687 },1 },{ "WeaponAim",{ -0.2175,0.140625 },1 },{ "WeaponAim",{ -0.25,0 },1 },{ "WeaponAim",{ -0.2175,-0.140625 },1 },{ "WeaponAim",{ -0.125,-0.244687 },1 },{ "WeaponAim",{ 0,-0.28125 },1 },{  },{ "Target",{ 0,-0.07875 },1 },{ "Target",{ 0.07,0 },1 },{ "Target",{ 0,0.07875 },1 },{ "Target",{ -0.07,0 },1 },{ "Target",{ 0,-0.07875 },1 }};
						};
					};
					class ATMissile
					{
						condition = "ATmissile";
						class Circle
						{
							type = "line";
							points[] = {{ "WeaponAim",{ 0,-0.2025 },1 },{ "WeaponAim",{ 0.09,-0.176175 },1 },{ "WeaponAim",{ 0.1566,-0.10125 },1 },{ "WeaponAim",{ 0.18,0 },1 },{ "WeaponAim",{ 0.1566,0.10125 },1 },{ "WeaponAim",{ 0.09,0.176175 },1 },{ "WeaponAim",{ 0,0.2025 },1 },{ "WeaponAim",{ -0.09,0.176175 },1 },{ "WeaponAim",{ -0.1566,0.10125 },1 },{ "WeaponAim",{ -0.18,0 },1 },{ "WeaponAim",{ -0.1566,-0.10125 },1 },{ "WeaponAim",{ -0.09,-0.176175 },1 },{ "WeaponAim",{ 0,-0.2025 },1 },{  },{ "Target",{ 0,-0.07875 },1 },{ "Target",{ 0.07,0 },1 },{ "Target",{ 0,0.07875 },1 },{ "Target",{ -0.07,0 },1 },{ "Target",{ 0,-0.07875 },1 }};
						};
					};
					class Rockets
					{
						condition = "Rocket";
						class Circle
						{
							type = "line";
							points[] = {{ "WeaponAim",{ 0.01,0 },1 },{ "WeaponAim",{ -0.01,0 },1 },{  },{ "WeaponAim",{ 0,0.01125 },1 },{ "WeaponAim",{ 0,-0.01125 },1 },{  },{ "WeaponAim",{ 0,-0.135 },1 },{ "WeaponAim",{ 0.06,-0.11745 },1 },{ "WeaponAim",{ 0.1044,-0.0675 },1 },{ "WeaponAim",{ 0.12,0 },1 },{ "WeaponAim",{ 0.1044,0.0675 },1 },{ "WeaponAim",{ 0.06,0.11745 },1 },{ "WeaponAim",{ 0,0.135 },1 },{ "WeaponAim",{ -0.06,0.11745 },1 },{ "WeaponAim",{ -0.1044,0.0675 },1 },{ "WeaponAim",{ -0.12,0 },1 },{ "WeaponAim",{ -0.1044,-0.0675 },1 },{ "WeaponAim",{ -0.06,-0.11745 },1 },{ "WeaponAim",{ 0,-0.135 },1 },{  }};
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
						StepSize = 0.0325;
						horizontal = "false";
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
						pos[] = {0.06,0.17};
						right[] = {0.14,0.17};
						down[] = {0.06,0.22};
						lineXleft = 0.175;
						lineYright = 0.165;
						lineXleftMajor = 0.175;
						lineYrightMajor = 0.155;
						bottom = 0.85;
						center = 0.5;
						top = 0.2;
						step = 20;
						StepSize = 0.0325;
						horizontal = "false";
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
						pos[] = {{ 0.86,0.12 },1};
						right[] = {{ 0.94,0.12 },1};
						down[] = {{ 0.86,0.17 },1};
					};
					class HeadingScale
					{
						type = "scale";
						scale = 1;
						source = "Heading";
						sourceScale = 1;
						align = "center";
						pos[] = {0.2,0.0};
						right[] = {0.28,0.0};
						down[] = {0.2,0.05};
						lineXleft = 0.06;
						lineYright = 0.05;
						lineXleftMajor = 0.06;
						lineYrightMajor = 0.04;
						bottom = 0.8;
						center = 0.5;
						top = 0.2;
						step = 2;
						StepSize = 0.03;
						horizontal = "true";
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
								points[] = {{ "ILS_W",{ -0.24,0 },1 },{ "ILS_W",{ 0.24,0 },1 },{  },{ "ILS_W",{ 0,0.027 },1 },{ "ILS_W",{ 0,-0.027 },1 },{  },{ "ILS_W",{ 0.12,0.027 },1 },{ "ILS_W",{ 0.12,-0.027 },1 },{  },{ "ILS_W",{ 0.24,0.027 },1 },{ "ILS_W",{ 0.24,-0.027 },1 },{  },{ "ILS_W",{ -0.12,0.027 },1 },{ "ILS_W",{ -0.12,-0.027 },1 },{  },{ "ILS_W",{ -0.24,0.027 },1 },{ "ILS_W",{ -0.24,-0.027 },1 },{  },{ "ILS_H",{ 0,-0.27 },1 },{ "ILS_H",{ 0,0.27 },1 },{  },{ "ILS_H",{ 0.024,0 },1 },{ "ILS_H",{ -0.024,0 },1 },{  },{ "ILS_H",{ 0.024,0.135 },1 },{ "ILS_H",{ -0.024,0.135 },1 },{  },{ "ILS_H",{ 0.024,0.27 },1 },{ "ILS_H",{ -0.024,0.27 },1 },{  },{ "ILS_H",{ 0.024,-0.135 },1 },{ "ILS_H",{ -0.024,-0.135 },1 },{  },{ "ILS_H",{ 0.024,-0.27 },1 },{ "ILS_H",{ -0.024,-0.27 },1 }};
							};
						};
					};
				};
			};
		};
	};
};
//};

////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:14:00 2014 : Source 'file' date Fri Oct 31 06:14:00 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : Gameplay_AddedMFDForAH1Z\config.bin{
class CfgPatches
{
	class CA_CommunityConfigurationProject_E_Gameplay_AddedMFDForAH1Z
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CA_CommunityConfigurationProject_E"};
	};
};
class CfgVehicles
{
	class AH1_Base;
	class AH1Z: AH1_Base
	{
		class MFD
		{
			class AirplaneHUD
			{
				class Pos10Vector
				{
					type = "vector";
					pos0[] = {0.5,"0.27+0.23"};
					pos10[] = {0.85,0.85};
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
						pos[] = {0.5,"0.34+0.23"};
					};
					class WeaponAim: Pos10Vector
					{
						source = "weapon";
					};
					class GunnerAim: Pos10Vector
					{
						source = "weapon";
						pos0[] = {0,-0.0025};
						pos10[] = {0.01,0.0025};
					};
					class Target: Pos10Vector
					{
						source = "target";
					};
					class Velocity: Pos10Vector
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0.5,"0.27+0.23"};
						pos10[] = {0.85,0.85};
					};
					class ILS_H
					{
						type = "ils";
						pos0[] = {0.5,"0.27+0.23"};
						pos3[] = {0.605,"0.27+0.23"};
					};
					class ILS_W: ILS_H
					{
						pos3[] = {0.5,0.605};
					};
					class Level0: Pos10Vector
					{
						pos0[] = {0.5,"0.34+0.23"};
						pos10[] = {0.85,0.92};
						type = "horizon";
						angle = 0;
					};
					class LevelP10: Level0
					{
						angle = 10;
					};
					class LevelM10: Level0
					{
						angle = -10;
					};
					class LevelP20: Level0
					{
						angle = 20;
					};
					class LevelM20: Level0
					{
						angle = -20;
					};
					class LevelP30: Level0
					{
						angle = 30;
					};
					class LevelM30: Level0
					{
						angle = -30;
					};
					class LevelP40: Level0
					{
						angle = 40;
					};
					class LevelM40: Level0
					{
						angle = -40;
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
					alpha = 0.6;
					color[] = {0,0.5,0.05};
					condition = "on";
					class PlaneW
					{
						clipTL[] = {0,1};
						clipBR[] = {1,0};
						type = "line";
						width = 4;
						points[] = {{ "PlaneW",{ 0,-0.02 },1 },{ "PlaneW",{ 0.014,-0.014 },1 },{ "PlaneW",{ 0.02,0 },1 },{ "PlaneW",{ 0.014,0.014 },1 },{ "PlaneW",{ 0,0.02 },1 },{ "PlaneW",{ -0.014,0.014 },1 },{ "PlaneW",{ -0.02,0 },1 },{ "PlaneW",{ -0.014,-0.014 },1 },{ "PlaneW",{ 0,-0.02 },1 },{  }};
					};
					class PlaneHeading
					{
						clipTL[] = {0,1};
						clipBR[] = {1,0};
						type = "line";
						width = 4;
						points[] = {{ "Velocity",{ 0,-0.02 },1 },{ "Velocity",{ 0.014,-0.014 },1 },{ "Velocity",{ 0.02,0 },1 },{ "Velocity",{ 0.014,0.014 },1 },{ "Velocity",{ 0,0.02 },1 },{ "Velocity",{ -0.014,0.014 },1 },{ "Velocity",{ -0.02,0 },1 },{ "Velocity",{ -0.014,-0.014 },1 },{ "Velocity",{ 0,-0.02 },1 },{  },{ "Velocity",{ 0.04,0 },1 },{ "Velocity",{ 0.02,0 },1 },{  },{ "Velocity",{ -0.04,0 },1 },{ "Velocity",{ -0.02,0 },1 },{  },{ "Velocity",{ 0,-0.04 },1 },{ "Velocity",{ 0,-0.02 },1 },{  }};
					};
					class Static
					{
						clipTL[] = {0,0.1};
						clipBR[] = {1,0};
						type = "line";
						width = 4;
						points[] = {{ { 0.79,0.52 },1 },{ { 0.81,0.5 },1 },{ { 0.79,0.48 },1 },{  },{ { 0.52,"0.08+0.06" },1 },{ { 0.5,"0.06+0.06" },1 },{ { 0.48,"0.08+0.06" },1 },{  },{ { "0.5-0.1","0.9-0.04" },1 },{ { "0.5-0.1","0.9+0.04" },1 },{ { "0.5+0.1","0.9+0.04" },1 },{ { "0.5+0.1","0.9-0.04" },1 },{ { "0.5-0.1","0.9-0.04" },1 },{  },{ { "0.5-0.1",0.9 },1 },{ { "0.5-0.092",0.9 },1 },{  },{ { "0.5+0.1",0.9 },1 },{ { "0.5+0.092",0.9 },1 },{  },{ { 0.5,"0.9-0.04" },1 },{ { 0.5,"0.9-0.032" },1 },{  },{ { 0.5,"0.9+0.04" },1 },{ { 0.5,"0.9+0.032" },1 },{  }};
					};
					class Gunner
					{
						type = "line";
						width = 4;
						points[] = {{ "GunnerAim",{ "0.5-0.015","0.9-0.008" },1 },{ "GunnerAim",{ "0.5-0.015","0.9+0.008" },1 },{ "GunnerAim",{ "0.5+0.015","0.9+0.008" },1 },{ "GunnerAim",{ "0.5+0.015","0.9-0.008" },1 },{ "GunnerAim",{ "0.5-0.015","0.9-0.008" },1 }};
					};
					class MGun
					{
						condition = "mgun";
						class Circle
						{
							type = "line";
							width = 4;
							points[] = {{ "WeaponAim",{ 0.05,0 },1 },{ "WeaponAim",{ 0.015,0 },1 },{  },{ "WeaponAim",{ 0,0.05 },1 },{ "WeaponAim",{ 0,0.015 },1 },{  },{ "WeaponAim",{ -0.05,0 },1 },{ "WeaponAim",{ -0.015,0 },1 },{  },{ "WeaponAim",{ 0,-0.05 },1 },{ "WeaponAim",{ 0,-0.015 },1 },{  }};
						};
					};
					class Bomb
					{
						condition = "bomb";
						class Circle
						{
							type = "line";
							width = 4;
							points[] = {{ "WeaponAim",{ 0,-0.1 },1 },{ "WeaponAim",{ 0.05,-0.087 },1 },{ "WeaponAim",{ 0.087,-0.05 },1 },{ "WeaponAim",{ 0.1,0 },1 },{ "WeaponAim",{ 0.087,0.05 },1 },{ "WeaponAim",{ 0.05,0.087 },1 },{ "WeaponAim",{ 0,0.1 },1 },{ "WeaponAim",{ -0.05,0.087 },1 },{ "WeaponAim",{ -0.087,0.05 },1 },{ "WeaponAim",{ -0.1,0 },1 },{ "WeaponAim",{ -0.087,-0.05 },1 },{ "WeaponAim",{ -0.05,-0.087 },1 },{ "WeaponAim",{ 0,-0.1 },1 },{  },{ "Velocity",0.001,"WeaponAim",{ 0,0 },1 },{ "Velocity",{ 0,0 },1 },{  },{ "Target",{ 0,-0.07 },1 },{ "Target",{ 0.07,0 },1 },{ "Target",{ 0,0.07 },1 },{ "Target",{ -0.07,0 },1 },{ "Target",{ 0,-0.07 },1 }};
						};
					};
					class AAMissile
					{
						condition = "AAmissile";
						class Circle
						{
							type = "line";
							width = 4;
							points[] = {{ "WeaponAim",{ 0,-0.25 },1 },{ "WeaponAim",{ 0.125,-0.2175 },1 },{ "WeaponAim",{ 0.2175,-0.125 },1 },{ "WeaponAim",{ 0.25,0 },1 },{ "WeaponAim",{ 0.2175,0.125 },1 },{ "WeaponAim",{ 0.125,0.2175 },1 },{ "WeaponAim",{ 0,0.25 },1 },{ "WeaponAim",{ -0.125,0.2175 },1 },{ "WeaponAim",{ -0.2175,0.125 },1 },{ "WeaponAim",{ -0.25,0 },1 },{ "WeaponAim",{ -0.2175,-0.125 },1 },{ "WeaponAim",{ -0.125,-0.2175 },1 },{ "WeaponAim",{ 0,-0.25 },1 },{  },{ "Target",{ 0,-0.07 },1 },{ "Target",{ 0.07,0 },1 },{ "Target",{ 0,0.07 },1 },{ "Target",{ -0.07,0 },1 },{ "Target",{ 0,-0.07 },1 }};
						};
					};
					class ATMissile
					{
						condition = "ATmissile";
						class Circle
						{
							type = "line";
							width = 4;
							points[] = {{ "WeaponAim",{ -0.15,-0.15 },1 },{ "WeaponAim",{ -0.15,"-0.15+0.02" },1 },{  },{ "WeaponAim",{ -0.15,0.15 },1 },{ "WeaponAim",{ -0.15,"+0.15-0.02" },1 },{  },{ "WeaponAim",{ 0.15,-0.15 },1 },{ "WeaponAim",{ 0.15,"-0.15+0.02" },1 },{  },{ "WeaponAim",{ 0.15,0.15 },1 },{ "WeaponAim",{ 0.15,"+0.15-0.02" },1 },{  },{ "WeaponAim",{ -0.15,-0.15 },1 },{ "WeaponAim",{ "-0.15+0.02",-0.15 },1 },{  },{ "WeaponAim",{ -0.15,0.15 },1 },{ "WeaponAim",{ "-0.15+0.02",0.15 },1 },{  },{ "WeaponAim",{ 0.15,-0.15 },1 },{ "WeaponAim",{ "0.15-0.02",-0.15 },1 },{  },{ "WeaponAim",{ 0.15,0.15 },1 },{ "WeaponAim",{ "0.15-0.02",0.15 },1 },{  }};
						};
					};
					class Rockets
					{
						condition = "Rocket";
						class Circle
						{
							type = "line";
							width = 4;
							points[] = {{ "WeaponAim",{ -0.25,-0.25 },1 },{ "WeaponAim",{ -0.25,"-0.25+0.05" },1 },{  },{ "WeaponAim",{ -0.25,0.25 },1 },{ "WeaponAim",{ -0.25,"+0.25-0.05" },1 },{  },{ "WeaponAim",{ 0.25,-0.25 },1 },{ "WeaponAim",{ 0.25,"-0.25+0.05" },1 },{  },{ "WeaponAim",{ 0.25,0.25 },1 },{ "WeaponAim",{ 0.25,"+0.25-0.05" },1 },{  },{ "WeaponAim",{ -0.25,-0.25 },1 },{ "WeaponAim",{ "-0.25+0.05",-0.25 },1 },{  },{ "WeaponAim",{ -0.25,0.25 },1 },{ "WeaponAim",{ "-0.25+0.05",0.25 },1 },{  },{ "WeaponAim",{ 0.25,-0.25 },1 },{ "WeaponAim",{ "0.25-0.05",-0.25 },1 },{  },{ "WeaponAim",{ 0.25,0.25 },1 },{ "WeaponAim",{ "0.25-0.05",0.25 },1 },{  }};
						};
					};
					class SpeedNumber
					{
						type = "text";
						align = "right";
						scale = 1;
						source = "speed";
						sourceScale = 3.6;
						pos[] = {{ 0.06,0.47 },1};
						right[] = {{ "0.14-0.02",0.47 },1};
						down[] = {{ 0.06,0.52 },1};
					};
					class AltNumber: SpeedNumber
					{
						source = "altitudeAGL";
						sourceScale = 1;
						pos[] = {{ "0.86-0.15",0.47 },1};
						right[] = {{ "0.94-0.15-0.02",0.47 },1};
						down[] = {{ "0.86-0.15",0.52 },1};
					};
					class AltScale
					{
						type = "scale";
						scale = 1;
						source = "altitudeAGL";
						sourceScale = 1;
						align = "right";
						width = 4;
						pos[] = {0.86,0.82};
						right[] = {"0.94-0.02",0.82};
						down[] = {0.86,0.87};
						lineXleft = 0.825;
						lineYright = 0.835;
						lineXleftMajor = 0.825;
						lineYrightMajor = 0.845;
						bottom = 0.2;
						top = 0.85;
						center = 0.5;
						step = 20;
						stepSize = "(0.85- 0.2)/20";
						horizontal = 0;
						min = "none";
						max = "none";
						numberEach = 5;
						majorLineEach = 5;
					};
					class weapons
					{
						type = "text";
						source = "weapon";
						align = "right";
						scale = 0.5;
						sourceScale = 1;
						pos[] = {{ 0.06,0.8 },1};
						right[] = {{ 0.1,0.8 },1};
						down[] = {{ 0.06,0.84 },1};
					};
					class ammo
					{
						type = "text";
						source = "ammo";
						align = "right";
						scale = 0.5;
						sourceScale = 1;
						pos[] = {{ 0.06,0.85 },1};
						right[] = {{ 0.1,0.85 },1};
						down[] = {{ 0.06,0.89 },1};
					};
					class HeadingScale
					{
						type = "scale";
						scale = 1;
						source = "Heading";
						sourceScale = 1;
						align = "center";
						width = 4;
						pos[] = {"0.32-0.01","0.0+0.05"};
						right[] = {"0.38-0.01","0.0+0.05"};
						down[] = {"0.32-0.01","0.04+0.05"};
						lineXleft = "0.06+0.05";
						lineYright = "0.05+0.05";
						lineXleftMajor = "0.07+0.05";
						lineYrightMajor = "0.04+0.05";
						bottom = 0.7;
						center = 0.5;
						top = 0.3;
						step = 10;
						stepSize = "(0.70- 0.3)/15";
						horizontal = 1;
						min = "none";
						max = "none";
						numberEach = 3;
						majorLineEach = 3;
					};
					class HorizontalLine
					{
						clipTL[] = {0.2,0.12};
						clipBR[] = {0.8,0.96};
						class HorizontalLineDraw
						{
							type = "line";
							source = "Level0";
							points[] = {{ "Level0",{ "-6*0.075/2",0.02 },1 },{ "Level0",{ "-5*0.075/2",0.02 },1 },{  },{ "Level0",{ "-4*0.075/2",0.02 },1 },{ "Level0",{ "-3*0.075/2",0.02 },1 },{  },{ "Level0",{ "-2*0.075/2",0.02 },1 },{ "Level0",{ "-1*0.075/2",0.02 },1 },{  },{ "Level0",{ "1*0.075/2",0.02 },1 },{ "Level0",{ "2*0.075/2",0.02 },1 },{  },{ "Level0",{ "3*0.075/2",0.02 },1 },{ "Level0",{ "4*0.075/2",0.02 },1 },{  },{ "Level0",{ "5*0.075/2",0.02 },1 },{ "Level0",{ "6*0.075/2",0.02 },1 }};
						};
					};
				};
				helmetMountedDisplay = 1;
				helmetPosition[] = {-0.025,0.025,0.1};
				helmetRight[] = {0.05,0,0};
				helmetDown[] = {0,-0.05,0};
			};
		};
	};
};
//};

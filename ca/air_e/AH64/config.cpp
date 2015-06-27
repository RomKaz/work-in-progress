////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:07:34 2014 : Source 'file' date Fri Oct 31 06:07:34 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=8
enum {
	stabilizedinaxisx = 1,
	compartment1 = 1,
	stabilizedinaxisy = 2,
	compartment2 = 2,
	stabilizedinaxesboth = 3,
	compartment3 = 4,
	compartment4 = 8,
	stabilizedinaxesnone = 0
};

//Class air_e : AH64\config.bin{
class CfgPatches
{
	class CAAir_E_AH64D
	{
		units[] = {"AH64D_EP1"};
		weapons[] = {};
		requiredVersion = 0.7;
		requiredAddons[] = {"CAAir_E","CA_AH64D"};
	};
};
class CfgVehicles
{
	class Air;
	class Helicopter: Air
	{
		class NewTurret;
		class Turrets
		{
			class MainTurret;
		};
		class HitPoints
		{
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
		};
	};
	class AH64_base_EP1: Helicopter
	{
		displayName = "$STR_EP1_DN_AH64_base";
		side = 1;
		accuracy = 0.5;
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_AH64";
		};
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
					color[] = {0.0,0.5,0.05};
					condition = "on";
					class PlaneW
					{
						clipTL[] = {0.0,1.0};
						clipBR[] = {1.0,0.0};
						type = "line";
						width = 4.0;
						points[] = {{ "PlaneW",{ 0,-0.02 },1 },{ "PlaneW",{ 0.014,-0.014 },1 },{ "PlaneW",{ 0.02,0 },1 },{ "PlaneW",{ 0.014,0.014 },1 },{ "PlaneW",{ 0,0.02 },1 },{ "PlaneW",{ -0.014,0.014 },1 },{ "PlaneW",{ -0.02,0 },1 },{ "PlaneW",{ -0.014,-0.014 },1 },{ "PlaneW",{ 0,-0.02 },1 },{  }};
					};
					class PlaneHeading
					{
						clipTL[] = {0.0,1.0};
						clipBR[] = {1.0,0.0};
						type = "line";
						width = 4.0;
						points[] = {{ "Velocity",{ 0,-0.02 },1 },{ "Velocity",{ 0.014,-0.014 },1 },{ "Velocity",{ 0.02,0 },1 },{ "Velocity",{ 0.014,0.014 },1 },{ "Velocity",{ 0,0.02 },1 },{ "Velocity",{ -0.014,0.014 },1 },{ "Velocity",{ -0.02,0 },1 },{ "Velocity",{ -0.014,-0.014 },1 },{ "Velocity",{ 0,-0.02 },1 },{  },{ "Velocity",{ 0.04,0 },1 },{ "Velocity",{ 0.02,0 },1 },{  },{ "Velocity",{ -0.04,0 },1 },{ "Velocity",{ -0.02,0 },1 },{  },{ "Velocity",{ 0,-0.04 },1 },{ "Velocity",{ 0,-0.02 },1 },{  }};
					};
					class Static
					{
						clipTL[] = {0.0,0.1};
						clipBR[] = {1.0,0.0};
						type = "line";
						width = 4.0;
						points[] = {{ { 0.79,0.52 },1 },{ { 0.81,0.5 },1 },{ { 0.79,0.48 },1 },{  },{ { 0.52,"0.08+0.06" },1 },{ { 0.5,"0.06+0.06" },1 },{ { 0.48,"0.08+0.06" },1 },{  },{ { "0.5-0.1","0.9-0.04" },1 },{ { "0.5-0.1","0.9+0.04" },1 },{ { "0.5+0.1","0.9+0.04" },1 },{ { "0.5+0.1","0.9-0.04" },1 },{ { "0.5-0.1","0.9-0.04" },1 },{  },{ { "0.5-0.1",0.9 },1 },{ { "0.5-0.092",0.9 },1 },{  },{ { "0.5+0.1",0.9 },1 },{ { "0.5+0.092",0.9 },1 },{  },{ { 0.5,"0.9-0.04" },1 },{ { 0.5,"0.9-0.032" },1 },{  },{ { 0.5,"0.9+0.04" },1 },{ { 0.5,"0.9+0.032" },1 },{  }};
					};
					class Gunner
					{
						type = "line";
						width = 4.0;
						points[] = {{ "GunnerAim",{ "0.5-0.015","0.9-0.008" },1 },{ "GunnerAim",{ "0.5-0.015","0.9+0.008" },1 },{ "GunnerAim",{ "0.5+0.015","0.9+0.008" },1 },{ "GunnerAim",{ "0.5+0.015","0.9-0.008" },1 },{ "GunnerAim",{ "0.5-0.015","0.9-0.008" },1 }};
					};
					class MGun
					{
						condition = "mgun";
						class Circle
						{
							type = "line";
							width = 4.0;
							points[] = {{ "WeaponAim",{ 0.05,0 },1 },{ "WeaponAim",{ 0.015,0 },1 },{  },{ "WeaponAim",{ 0,0.05 },1 },{ "WeaponAim",{ 0,0.015 },1 },{  },{ "WeaponAim",{ -0.05,0 },1 },{ "WeaponAim",{ -0.015,0 },1 },{  },{ "WeaponAim",{ 0,-0.05 },1 },{ "WeaponAim",{ 0,-0.015 },1 },{  }};
						};
					};
					class Bomb
					{
						condition = "bomb";
						class Circle
						{
							type = "line";
							width = 4.0;
							points[] = {{ "WeaponAim",{ 0,-0.1 },1 },{ "WeaponAim",{ 0.05,-0.087 },1 },{ "WeaponAim",{ 0.087,-0.05 },1 },{ "WeaponAim",{ 0.1,0 },1 },{ "WeaponAim",{ 0.087,0.05 },1 },{ "WeaponAim",{ 0.05,0.087 },1 },{ "WeaponAim",{ 0,0.1 },1 },{ "WeaponAim",{ -0.05,0.087 },1 },{ "WeaponAim",{ -0.087,0.05 },1 },{ "WeaponAim",{ -0.1,0 },1 },{ "WeaponAim",{ -0.087,-0.05 },1 },{ "WeaponAim",{ -0.05,-0.087 },1 },{ "WeaponAim",{ 0,-0.1 },1 },{  },{ "Velocity",0.001,"WeaponAim",{ 0.0,0.0 },1 },{ "Velocity",{ 0.0,0.0 },1 },{  },{ "Target",{ 0,-0.07 },1 },{ "Target",{ 0.07,0 },1 },{ "Target",{ 0,0.07 },1 },{ "Target",{ -0.07,0 },1 },{ "Target",{ 0,-0.07 },1 }};
						};
					};
					class AAMissile
					{
						condition = "AAmissile";
						class Circle
						{
							type = "line";
							width = 4.0;
							points[] = {{ "WeaponAim",{ 0,-0.25 },1 },{ "WeaponAim",{ 0.125,-0.2175 },1 },{ "WeaponAim",{ 0.2175,-0.125 },1 },{ "WeaponAim",{ 0.25,0 },1 },{ "WeaponAim",{ 0.2175,0.125 },1 },{ "WeaponAim",{ 0.125,0.2175 },1 },{ "WeaponAim",{ 0,0.25 },1 },{ "WeaponAim",{ -0.125,0.2175 },1 },{ "WeaponAim",{ -0.2175,0.125 },1 },{ "WeaponAim",{ -0.25,0 },1 },{ "WeaponAim",{ -0.2175,-0.125 },1 },{ "WeaponAim",{ -0.125,-0.2175 },1 },{ "WeaponAim",{ 0,-0.25 },1 },{  },{ "Target",{ 0,-0.07 },1 },{ "Target",{ 0.07,0 },1 },{ "Target",{ 0,0.07 },1 },{ "Target",{ -0.07,0 },1 },{ "Target",{ 0,-0.07 },1 }};
						};
					};
					class ATMissile
					{
						condition = "ATmissile";
						class Circle
						{
							type = "line";
							width = 4.0;
							points[] = {{ "WeaponAim",{ -0.15,-0.15 },1 },{ "WeaponAim",{ -0.15,"-0.15+0.02" },1 },{  },{ "WeaponAim",{ -0.15,0.15 },1 },{ "WeaponAim",{ -0.15,"+0.15-0.02" },1 },{  },{ "WeaponAim",{ 0.15,-0.15 },1 },{ "WeaponAim",{ 0.15,"-0.15+0.02" },1 },{  },{ "WeaponAim",{ 0.15,0.15 },1 },{ "WeaponAim",{ 0.15,"+0.15-0.02" },1 },{  },{ "WeaponAim",{ -0.15,-0.15 },1 },{ "WeaponAim",{ "-0.15+0.02",-0.15 },1 },{  },{ "WeaponAim",{ -0.15,0.15 },1 },{ "WeaponAim",{ "-0.15+0.02",0.15 },1 },{  },{ "WeaponAim",{ 0.15,-0.15 },1 },{ "WeaponAim",{ "0.15-0.02",-0.15 },1 },{  },{ "WeaponAim",{ 0.15,0.15 },1 },{ "WeaponAim",{ "0.15-0.02",0.15 },1 },{  }};
						};
					};
					class Rockets
					{
						condition = "Rocket";
						class Circle
						{
							type = "line";
							width = 4.0;
							points[] = {{ "WeaponAim",{ -0.25,-0.25 },1 },{ "WeaponAim",{ -0.25,"-0.25+0.05" },1 },{  },{ "WeaponAim",{ -0.25,0.25 },1 },{ "WeaponAim",{ -0.25,"+0.25-0.05" },1 },{  },{ "WeaponAim",{ 0.25,-0.25 },1 },{ "WeaponAim",{ 0.25,"-0.25+0.05" },1 },{  },{ "WeaponAim",{ 0.25,0.25 },1 },{ "WeaponAim",{ 0.25,"+0.25-0.05" },1 },{  },{ "WeaponAim",{ -0.25,-0.25 },1 },{ "WeaponAim",{ "-0.25+0.05",-0.25 },1 },{  },{ "WeaponAim",{ -0.25,0.25 },1 },{ "WeaponAim",{ "-0.25+0.05",0.25 },1 },{  },{ "WeaponAim",{ 0.25,-0.25 },1 },{ "WeaponAim",{ "0.25-0.05",-0.25 },1 },{  },{ "WeaponAim",{ 0.25,0.25 },1 },{ "WeaponAim",{ "0.25-0.05",0.25 },1 },{  },{ "WeaponAim",{ 0.035,0.035 },1 },{ "WeaponAim",{ 0.01,0.01 },1 },{  },{ "WeaponAim",{ -0.035,0.035 },1 },{ "WeaponAim",{ -0.01,0.01 },1 },{  },{ "WeaponAim",{ -0.035,-0.035 },1 },{ "WeaponAim",{ -0.01,-0.01 },1 },{  },{ "WeaponAim",{ 0.035,-0.035 },1 },{ "WeaponAim",{ 0.01,-0.01 },1 },{  }};
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
						width = 4.0;
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
						StepSize = "(0.85- 0.2)/20";
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
						pos[] = {{ 0.1,0.88 },1};
						right[] = {{ "0.16-0.02",0.88 },1};
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
						right[] = {{ "0.16-0.02",0.93 },1};
						down[] = {{ 0.1,0.97 },1};
					};
					class HeadingScale
					{
						type = "scale";
						scale = 1;
						source = "Heading";
						sourceScale = 1;
						align = "center";
						width = 4.0;
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
						StepSize = "(0.70- 0.3)/15";
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
				helmetRight[] = {0.05,0.0,0.0};
				helmetDown[] = {-0.0,-0.05,0.0};
			};
		};
		memoryPointCM[] = {"flare_launcher1","flare_launcher2"};
		memoryPointCMDir[] = {"flare_launcher1_dir","flare_launcher2_dir"};
		radarType = 4;
		lockDetectionSystem = "8 + 4";
		incommingMisslieDetectionSystem = 16;
	};
	class AH64D: AH64_base_EP1
	{
		displayName = "$STR_EP1_DN_AH64D";
		model = "\ca\air_E\AH64\AH64D";
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"60Rnd_CMFlareMagazine"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerAction = "AH64_Gunner_EP1";
				gunnerInAction = "AH64_Gunner_EP1";
				minElev = -60;
				maxElev = 30;
				initElev = 0;
				turretInfoType = "RscUnitInfo_AH64D_gunner";
				discreteDistance[] = {300,400,500,600,700,800,900,1000,1100,1200};
				discreteDistanceInitIndex = 2;
				gunnerOpticsModel = "\ca\air_e\gunnerOptics_ah64";
				class OpticsIn
				{
					class Wide
					{
						opticsDisplayName = "W";
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.466;
						minFov = 0.466;
						maxFov = 0.466;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsModel = "\ca\air_e\gunnerOptics_ah64";
					};
					class Medium: Wide
					{
						opticsDisplayName = "M";
						initFov = 0.093;
						minFov = 0.093;
						maxFov = 0.093;
						gunnerOpticsModel = "\ca\air_e\gunnerOptics_ah64_2";
					};
					class Narrow: Wide
					{
						opticsDisplayName = "N";
						gunnerOpticsModel = "\ca\air_e\gunnerOptics_ah64_3";
						initFov = 0.029;
						minFov = 0.029;
						maxFov = 0.029;
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 1.1;
						minFov = 0.133;
						maxFov = 1.1;
						visionMode[] = {"Normal","NVG"};
						gunnerOpticsModel = "";
						gunnerOpticsEffect[] = {};
					};
				};
			};
		};
		soundGetIn[] = {"Ca\Sounds_E\Air_E\AH64\close",0.31622776,1};
		soundGetOut[] = {"Ca\Sounds_E\Air_E\AH64\open",0.31622776,1,40};
		soundDammage[] = {"ca\Sounds\Air\Noises\alarm_loop1",0.56234133,1};
		soundEngineOnInt[] = {"Ca\Sounds_E\Air_E\AH64\AH64_start_int",0.1,1.0};
		soundEngineOnExt[] = {"Ca\Sounds_E\Air_E\AH64\AH64_start_ext",0.56234133,1.0,800};
		soundEngineOffInt[] = {"Ca\Sounds_E\Air_E\AH64\AH64_stop_int",0.1,1.0};
		soundEngineOffExt[] = {"Ca\Sounds_E\Air_E\AH64\AH64_stop_ext",0.56234133,1.0,800};
		class Sounds
		{
			class Engine
			{
				sound[] = {"Ca\Sounds_E\Air_E\AH64\AH64_engine_1",3.1622777,1.0,1000};
				frequency = "rotorSpeed";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorLowOut
			{
				sound[] = {"Ca\Sounds_E\Air_E\AH64\AH64_rotor_ext2",3.1622777,1.0,1200};
				frequency = "rotorSpeed";
				volume = "camPos*(0 max (rotorSpeed-0.1))";
				cone[] = {1.8,3.14,2.0,0.9};
			};
			class RotorHighOut
			{
				sound[] = {"Ca\Sounds_E\Air_E\AH64\AH64_rotor_high_ext2",1.7782794,1.0,1300};
				frequency = "rotorSpeed";
				volume = "camPos*10*(0 max (rotorThrust-0.95))";
				cone[] = {1.8,3.14,2.0,0.9};
			};
			class EngineIn
			{
				sound[] = {"Ca\Sounds_E\Air_E\AH64\AH64_engine_int",1.7782794,1.0};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorLowIn
			{
				sound[] = {"Ca\Sounds_E\Air_E\AH64\AH64_rotor_int2",1.7782794,1.0};
				frequency = "rotorSpeed";
				volume = "2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
			};
			class RotorHighIn
			{
				sound[] = {"Ca\Sounds_E\Air_E\AH64\AH64_rotor_high_int2",1.7782794,1.0};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*3*(rotorThrust-0.9)";
			};
		};
		dammageHalf[] = {"\CA\Air_E\AH64\data\AH64D_mfd_normal_co.paa","\CA\Air_E\AH64\data\AH64D_mfd_malfc_co.paa"};
		dammageFull[] = {"\CA\Air_E\AH64\data\AH64D_mfd_normal_co.paa","\CA\Air_E\AH64\data\AH64D_mfd_malfc_co.paa"};
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\air_e\ah64\Data\AH64D_body.rvmat","ca\air_e\ah64\Data\AH64D_body_damage.rvmat","ca\air_e\ah64\Data\AH64D_body_destruct.rvmat","ca\air_e\ah64\Data\AH64D_details.rvmat","ca\air_e\ah64\Data\AH64D_details_damage.rvmat","ca\air_e\ah64\Data\AH64D_details_destruct.rvmat","ca\air_e\ah64\Data\AH64D_inter.rvmat","ca\air_e\ah64\Data\AH64D_inter_damage.rvmat","ca\air_e\ah64\Data\AH64D_inter_destruct.rvmat","ca\air_e\ah64\Data\AH64D_glass.rvmat","ca\air_e\ah64\Data\AH64D_glass_damage.rvmat","ca\air_e\ah64\Data\AH64D_glass_damage.rvmat","ca\air_e\ah64\Data\AH64D_glass_in.rvmat","ca\air_e\ah64\Data\AH64D_glass_in_damage.rvmat","ca\air_e\ah64\Data\AH64D_glass_in_damage.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
	};
	class AH64D_EP1: AH64_base_EP1
	{
		expansion = 1;
		side = 1;
		scope = 2;
		faction = "BIS_US";
		accuracy = 1000;
		cost = 10000000;
		model = "\ca\air_E\AH64\AH64D";
		armor = 60;
		damageResistance = 0.00555;
		vehicleClass = "Air";
		laserScanner = 1;
		MainRotorSpeed = -1.0;
		backRotorSpeed = 3.0;
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"60Rnd_CMFlareMagazine"};
		soundGetIn[] = {"Ca\Sounds_E\Air_E\AH64\close",0.31622776,1};
		soundGetOut[] = {"Ca\Sounds_E\Air_E\AH64\open",0.31622776,1,40};
		soundDammage[] = {"ca\Sounds\Air\Noises\alarm_loop1",0.56234133,1};
		soundEngineOnInt[] = {"Ca\Sounds_E\Air_E\AH64\AH64_start_int",0.1,1.0};
		soundEngineOnExt[] = {"Ca\Sounds_E\Air_E\AH64\AH64_start_ext",0.56234133,1.0,800};
		soundEngineOffInt[] = {"Ca\Sounds_E\Air_E\AH64\AH64_stop_int",0.1,1.0};
		soundEngineOffExt[] = {"Ca\Sounds_E\Air_E\AH64\AH64_stop_ext",0.56234133,1.0,800};
		class Sounds
		{
			class Engine
			{
				sound[] = {"Ca\Sounds_E\Air_E\AH64\AH64_engine_1",3.1622777,1.0,1000};
				frequency = "rotorSpeed";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorLowOut
			{
				sound[] = {"Ca\Sounds_E\Air_E\AH64\AH64_rotor_ext2",3.1622777,1.0,1200};
				frequency = "rotorSpeed";
				volume = "camPos*(0 max (rotorSpeed-0.1))";
				cone[] = {1.8,3.14,2.0,0.9};
			};
			class RotorHighOut
			{
				sound[] = {"Ca\Sounds_E\Air_E\AH64\AH64_rotor_high_ext2",1.7782794,1.0,1300};
				frequency = "rotorSpeed";
				volume = "camPos*10*(0 max (rotorThrust-0.95))";
				cone[] = {1.8,3.14,2.0,0.9};
			};
			class EngineIn
			{
				sound[] = {"Ca\Sounds_E\Air_E\AH64\AH64_engine_int",1.7782794,1.0};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorLowIn
			{
				sound[] = {"Ca\Sounds_E\Air_E\AH64\AH64_rotor_int2",1.7782794,1.0};
				frequency = "rotorSpeed";
				volume = "2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
			};
			class RotorHighIn
			{
				sound[] = {"Ca\Sounds_E\Air_E\AH64\AH64_rotor_high_int2",1.7782794,1.0};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*3*(rotorThrust-0.9)";
			};
		};
		picture = "\ca\air_e\data\UI\Picture_ah64d_CA.paa";
		icon = "\ca\air_e\data\UI\Icon_ah64d_CA.paa";
		mapSize = 15.5;
		maxSpeed = 293;
		displayName = "$STR_EP1_DN_AH64D";
		crew = "US_Soldier_Pilot_EP1";
		typicalCargo[] = {"US_Soldier_Pilot_EP1","US_Soldier_Pilot_EP1"};
		driverAction = "AH64_Pilot_EP1";
		GetInAction = "GetInHigh";
		GetOutAction = "GetOutHigh";
		threat[] = {1,1,0.5};
		destrType = "DestructWreck";
		memoryPointLMissile = "Rocket_1";
		memoryPointRMissile = "Rocket_2";
		selectionFireAnim = "zasleh";
		soundLocked[] = {"\ca\Tracked\Data\Sound\alarm_loop1",0.00031622776,2};
		soundIncommingMissile[] = {"\ca\Tracked\Data\Sound\alarm_loop1",0.00031622776,4};
		class HitPoints: HitPoints
		{
			class HitGlass1: HitGlass1
			{
				armor = 0.5;
			};
			class HitGlass2: HitGlass2
			{
				armor = 0.5;
			};
			class HitGlass3: HitGlass3
			{
				armor = 0.5;
			};
			class HitGlass4: HitGlass4
			{
				armor = 0.5;
			};
			class HitGlass5: HitGlass5
			{
				armor = 0.5;
			};
		};
		dammageHalf[] = {"\CA\Air_E\AH64\data\AH64D_mfd_normal_co.paa","\CA\Air_E\AH64\data\AH64D_mfd_malfc_co.paa"};
		dammageFull[] = {"\CA\Air_E\AH64\data\AH64D_mfd_normal_co.paa","\CA\Air_E\AH64\data\AH64D_mfd_malfc_co.paa"};
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\air_e\ah64\Data\AH64D_body.rvmat","ca\air_e\ah64\Data\AH64D_body_damage.rvmat","ca\air_e\ah64\Data\AH64D_body_destruct.rvmat","ca\air_e\ah64\Data\AH64D_details.rvmat","ca\air_e\ah64\Data\AH64D_details_damage.rvmat","ca\air_e\ah64\Data\AH64D_details_destruct.rvmat","ca\air_e\ah64\Data\AH64D_inter.rvmat","ca\air_e\ah64\Data\AH64D_inter_damage.rvmat","ca\air_e\ah64\Data\AH64D_inter_destruct.rvmat","ca\air_e\ah64\Data\AH64D_glass.rvmat","ca\air_e\ah64\Data\AH64D_glass_damage.rvmat","ca\air_e\ah64\Data\AH64D_glass_damage.rvmat","ca\air_e\ah64\Data\AH64D_glass_in.rvmat","ca\air_e\ah64\Data\AH64D_glass_in_damage.rvmat","ca\air_e\ah64\Data\AH64D_glass_in_damage.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerAction = "AH64_Gunner_EP1";
				gunnerInAction = "AH64_Gunner_EP1";
				minElev = -60;
				maxElev = 30;
				initElev = 0;
				minTurn = -120;
				maxTurn = 120;
				initTurn = 0;
				weapons[] = {"M230","FFARLauncher","HellfireLauncher"};
				magazines[] = {"1200Rnd_30x113mm_M789_HEDP","38Rnd_FFAR","8Rnd_Hellfire"};
				enableManualFire = 1;
				memoryPointsGetInGunner = "pos_gunner";
				memoryPointsGetInGunnerDir = "pos_gunner_dir";
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				memoryPointGun = "machinegun";
				turretInfoType = "RscUnitInfo_AH64D_gunner";
				discreteDistance[] = {300,400,500,600,700,800,900,1000,1100,1200};
				discreteDistanceInitIndex = 2;
				gunnerOpticsModel = "\ca\air_e\gunnerOptics_ah64";
				class OpticsIn
				{
					class Wide
					{
						opticsDisplayName = "W";
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.466;
						minFov = 0.466;
						maxFov = 0.466;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsModel = "\ca\air_e\gunnerOptics_ah64";
					};
					class Medium: Wide
					{
						opticsDisplayName = "M";
						initFov = 0.093;
						minFov = 0.093;
						maxFov = 0.093;
						gunnerOpticsModel = "\ca\air_e\gunnerOptics_ah64_2";
					};
					class Narrow: Wide
					{
						opticsDisplayName = "N";
						gunnerOpticsModel = "\ca\air_e\gunnerOptics_ah64_3";
						initFov = 0.029;
						minFov = 0.029;
						maxFov = 0.029;
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 1.1;
						minFov = 0.133;
						maxFov = 1.1;
						visionMode[] = {"Normal","NVG"};
						gunnerOpticsModel = "";
						gunnerOpticsEffect[] = {};
					};
				};
			};
		};
	};
};
class CfgAmmo
{
	class B_30mm_HE;
	class B_30x113mm_M789_HEDP: B_30mm_HE
	{
		hit = 67;
		indirectHit = 15;
		indirectHitRange = 1;
		model = "\ca\Weapons\Data\bullettracer\tracer_red";
		tracerScale = 2;
		tracerStartTime = 0.1;
		tracerEndTime = 2.3;
		explosive = 0.3;
		caliber = 2.5;
		airFriction = -0.00078;
	};
	class BulletBase;
};
class CfgMagazines
{
	class VehicleMagazine;
	class 1200Rnd_30x113mm_M789_HEDP: VehicleMagazine
	{
		scope = 1;
		displayName = "$STR_EP1_DN_1200Rnd_30x113mm_M789_HEDP";
		ammo = "B_30x113mm_M789_HEDP";
		count = 1200;
		initSpeed = 805;
		tracersEvery = 1;
		maxLeadSpeed = 500;
		nameSound = "cannon";
		airLock = 1;
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class CfgWeapons
{
	class CannonCore;
	class M230: CannonCore
	{
		scope = 1;
		displayName = "$STR_EP1_DN_M230";
		nameSound = "cannon";
		autoFire = 1;
		magazines[] = {"1200Rnd_30x113mm_M789_HEDP"};
		canLock = 2;
		flash = "gunfire";
		flashSize = 0.1;
		recoil = "Empty";
		ballisticsComputer = 1;
		aiDispersionCoefX = 6;
		ffMagnitude = 0.5;
		ffFrequency = 11;
		ffCount = 6;
		cursor = "Air_W_MG";
		cursorAim = "Air_Dot";
		cursorSize = 1;
		modes[] = {"manual","close","short","medium","far"};
		class manual: CannonCore
		{
			displayName = "$STR_EP1_DN_M230";
			autoFire = 1;
			sound[] = {"\Ca\sounds\Weapons\cannon\a10vulcanVII",10.0,1,1100};
			reloadTime = 0.096;
			dispersion = 0.002;
			soundContinuous = 0;
			initspeed = 820;
			showToPlayer = 1;
			burst = 1;
			multiplier = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.001;
			midRange = 2;
			midRangeProbab = 0.001;
			maxRange = 3;
			maxRangeProbab = 0.001;
			ffMagnitude = 0.5;
			ffFrequency = 11;
			ffCount = 6;
		};
		class close: manual
		{
			showToPlayer = 0;
			soundBurst = 0;
			burst = 15;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 400;
			minRange = 0;
			minRangeProbab = 0.04;
			midRange = 200;
			midRangeProbab = 0.2;
			maxRange = 400;
			maxRangeProbab = 0.1;
		};
		class short: close
		{
			burst = 10;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.1;
			midRange = 500;
			midRangeProbab = 0.2;
			maxRange = 800;
			maxRangeProbab = 0.1;
		};
		class medium: close
		{
			burst = 7;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 800;
			minRange = 600;
			minRangeProbab = 0.1;
			midRange = 800;
			midRangeProbab = 0.2;
			maxRange = 1000;
			maxRangeProbab = 0.1;
		};
		class far: close
		{
			burst = 4;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 1000;
			minRange = 800;
			minRangeProbab = 0.1;
			midRange = 1000;
			midRangeProbab = 0.2;
			maxRange = 1500;
			maxRangeProbab = 0.4;
		};
	};
};
//};

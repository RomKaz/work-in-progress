////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:00:44 2014 : Source 'file' date Fri Oct 31 06:00:44 2014
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

//Class air_acr : l159\config.bin{
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		L159_pilot_ACR = "L159_pilot_ACR";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class L159_pilot_ACR: Crew
		{
			file = "\CA\Air_ACR\L159\data\Anim\L159sed.rtm";
			connectTo[] = {"KIA_L159_pilot_ACR",1};
			speed = 1e+010;
			leaning = "crewShake_half";
		};
		class KIA_L159_pilot_ACR: DefaultDie
		{
			actions = "DeadActions";
			file = "\CA\Air_ACR\L159\data\Anim\L159smrt.rtm";
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
		L159_pilot_ACR = "";
	};
};
class CfgPatches
{
	class CAAir_ACR_L159
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.5;
		requiredAddons[] = {"CAAir_ACR"};
	};
};
class CfgVehicles
{
	class Plane;
	class L159_base: Plane
	{
		destrType = "DestructWreck";
		model = "Ca\Air_ACR\L159\L159_ACR.p3d";
		displayName = "$STR_ACR_DN_L159";
		viewDriverShadowDiff = 0.5;
		viewDriverShadowAmb = 0.5;
		class Library
		{
			libTextDesc = "$STR_ACR_LIB_L159";
		};
		weapons[] = {"ZPL_20","MaverickLauncher_ACR","SidewinderLaucher_AH1Z","CMFlareLauncher"};
		magazines[] = {"210Rnd_20mm_ZPL_20","4Rnd_Maverick_L159","2Rnd_Sidewinder_AH1Z","120Rnd_CMFlare_Chaff_Magazine"};
		radarType = 4;
		LockDetectionSystem = 8;
		IncommingMisslieDetectionSystem = 0;
		soundGetIn[] = {"ca\sounds\Air\AV8\ext\ext-jetair-cabine-close1",0.056234132,1};
		soundGetOut[] = {"ca\sounds\Air\AV8\ext\ext-jetair-cabine-open1",0.056234132,1,40};
		soundDammage[] = {"ca\sounds\Air\AV8\int\alarm_loop1",0.56234133,1};
		soundEngineOnInt[] = {"CA\Sounds_ACR\Air\alca-start_int",0.31622776,1.0};
		soundEngineOnExt[] = {"CA\Sounds_ACR\Air\alca-start_ext",0.56234133,1.0,500};
		soundEngineOffInt[] = {"CA\Sounds_ACR\Air\alca-stop_int",0.31622776,1.0};
		soundEngineOffExt[] = {"CA\Sounds_ACR\Air\alca-stop_ext",0.56234133,1.0,500};
		class Sounds
		{
			class EngineLowOut
			{
				sound[] = {"CA\Sounds_ACR\Air\alca_low_ext",2.5118864,1.0,1400};
				frequency = "1.0 min (rpm + 0.5)";
				volume = "camPos*2*(rpm factor[0.95, 0])*(rpm factor[0, 0.95])";
			};
			class EngineHighOut
			{
				sound[] = {"CA\Sounds_ACR\Air\alca_engi_ext",2.5118864,1.2,1800};
				frequency = "1";
				volume = "camPos*4*(rpm factor[0.2, 1.8])*(rpm factor[1.8, 0.2])";
			};
			class ForsageOut
			{
				sound[] = {"CA\Sounds_ACR\Air\alca-fors_ext",1.7782794,0.99,2000};
				frequency = "1";
				volume = "engineOn*camPos*(thrust factor[0.6, 1.0])";
				cone[] = {3.14,3.92,2.0,0.5};
			};
			class WindNoiseOut
			{
				sound[] = {"CA\Sounds_ACR\Air\noise",0.56234133,1.0,150};
				frequency = "(0.1+(1.2*(speed factor[1, 150])))";
				volume = "camPos*(speed factor[1, 150])";
			};
			class EngineLowIn
			{
				sound[] = {"CA\Sounds_ACR\Air\alca_low_int",1.0,1.0};
				frequency = "1.0 min (rpm + 0.5)";
				volume = "(1-camPos)*(engineOn*(rpm factor[0.95, 0]))";
			};
			class EngineHighIn
			{
				sound[] = {"CA\Sounds_ACR\Air\alca_engi_int",1.0,1.2};
				frequency = "1";
				volume = "(1-camPos)*(engineOn*(rpm factor[0.85, 1.0]))";
			};
			class ForsageIn
			{
				sound[] = {"CA\Sounds_ACR\Air\alca-fors_int",0.031622775,1.0};
				frequency = "1";
				volume = "(1-camPos)*(engineOn*(thrust factor[0.6, 1.0]))";
			};
			class WindNoiseIn
			{
				sound[] = {"CA\Sounds_ACR\Air\noise",0.031622775,1.0};
				frequency = "(0.1+(1.2*(speed factor[1, 150])))";
				volume = "(1-camPos)*(speed factor[1, 150])";
			};
		};
		driverAction = "L159_pilot_ACR";
		accuracy = 0.2;
		landingSpeed = 185;
		acceleration = 300;
		maxSpeed = 890;
		armor = 60;
		damageResistance = 0.004;
		armorStructured = 1;
		irScanRangeMin = 500;
		irScanRangeMax = 5000;
		irScanToEyeFactor = 2;
		aileronSensitivity = 1;
		elevatorSensitivity = 0.8;
		envelope[] = {0.0,0.15,1.1,3,5,5.83,6.0,5.85,5.5,4.8,3.6,1.8,0};
		landingAoa = "rad 10";
		laserScanner = 1;
		gunAimDown = 0.029;
		headAimDown = 0.0;
		memoryPointLRocket = "L raketa";
		memoryPointRRocket = "P raketa";
		flapsFrictionCoef = 0.32;
		minFireTime = 30;
		threat[] = {1,1,1};
		icon = "\ca\l39\Data\ui\icon_l39_ca.paa";
		mapSize = 20;
		picture = "\Ca\Air_ACR\L159\Data\UI\Picture_l159_CA.paa";
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
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\Air_ACR\L159\data\L159_body_1.rvmat","Ca\Air_ACR\L159\data\L159_body_1_damage.rvmat","Ca\Air_ACR\L159\data\L159_body_1_destruct.rvmat","Ca\Air_ACR\L159\data\L159_body_2.rvmat","Ca\Air_ACR\L159\data\L159_body_2_damage.rvmat","Ca\Air_ACR\L159\data\L159_body_2_destruct.rvmat","Ca\Air_ACR\L159\data\L159_glass.rvmat","Ca\Air_ACR\L159\data\L159_glass_damage.rvmat","Ca\Air_ACR\L159\data\L159_glass_destruct.rvmat","Ca\Air_ACR\L159\data\L159_glass_in.rvmat","Ca\Air_ACR\L159\data\L159_glass_damage.rvmat","Ca\Air_ACR\L159\data\L159_glass_destruct.rvmat"};
		};
		class MFD
		{
			class AirplaneHUD
			{
				enableParallax = 1;
				class Pos10Vector
				{
					type = "vector";
					pos0[] = {0.516,0.01};
					pos10[] = {1.486,1.11};
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
						pos[] = {0.516,0.2};
					};
					class center
					{
						type = "fixed";
						pos[] = {0.516,0.5};
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
						pos0[] = {0.5,0.01};
						pos10[] = {1.47,1.11};
					};
					class ILS_H
					{
						type = "ils";
						pos0[] = {0.5,0.01};
						pos3[] = {0.791,0.01};
					};
					class ILS_W: ILS_H
					{
						pos3[] = {0.5,0.34};
					};
					class Level0: Pos10Vector
					{
						pos0[] = {0.516,0.2};
						pos10[] = {1.486,1.3};
						type = "horizon";
						angle = 0;
					};
					class ASL_Instrument
					{
						type = "rotational";
						source = "altitudeASL";
						center[] = {0,0};
						min = 0;
						max = 10000;
						minAngle = 0;
						maxAngle = 36000;
						aspectRatio = 1.13402;
					};
					class HorizonBankRot
					{
						type = "rotational";
						source = "horizonBank";
						center[] = {0.516,0.4};
						min = -0.5236;
						max = 0.5236;
						minAngle = 159.25;
						maxAngle = 200.75;
						aspectRatio = 1;
					};
					class Speed_Instrument: ASL_Instrument
					{
						source = "speed";
						max = 277.778;
						maxAngle = 3600;
					};
					class ASL_Instrument_center
					{
						type = "fixed";
						pos[] = {0.85,0.226804};
					};
					class Speed_Instrument_center
					{
						type = "fixed";
						pos[] = {0.15,0.226804};
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
					class LevelP55: Level0
					{
						angle = 55;
					};
					class LevelM55: Level0
					{
						angle = -55;
					};
					class LevelP60: Level0
					{
						angle = 60;
					};
					class LevelM60: Level0
					{
						angle = -60;
					};
					class LevelP65: Level0
					{
						angle = 65;
					};
					class LevelM65: Level0
					{
						angle = -65;
					};
					class LevelP70: Level0
					{
						angle = 70;
					};
					class LevelM70: Level0
					{
						angle = -70;
					};
					class LevelP75: Level0
					{
						angle = 75;
					};
					class LevelM75: Level0
					{
						angle = -75;
					};
					class LevelP80: Level0
					{
						angle = 80;
					};
					class LevelM80: Level0
					{
						angle = -80;
					};
					class LevelP85: Level0
					{
						angle = 85;
					};
					class LevelM85: Level0
					{
						angle = -85;
					};
					class LevelP90: Level0
					{
						angle = 90;
					};
					class LevelM90: Level0
					{
						angle = -90;
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
						points[] = {{ "PlaneW",{ -0.03,0 },1 },{ "PlaneW",{ -0.01,0 },1 },{  },{ "PlaneW",{ 0.03,0 },1 },{ "PlaneW",{ 0.01,0 },1 },{  },{ "PlaneW",{ 0,-0.0340206 },1 },{ "PlaneW",{ 0,-0.0113402 },1 },{  },{ "PlaneW",{ 0,0.0340206 },1 },{ "PlaneW",{ 0,0.0113402 },1 },{  }};
					};
					class PlaneHeading
					{
						clipTL[] = {0.0,1.0};
						clipBR[] = {1.0,0.0};
						type = "line";
						points[] = {{ "Velocity",{ 0,-0.0226804 },1 },{ "Velocity",{ 0.014,-0.0158763 },1 },{ "Velocity",{ 0.02,0 },1 },{ "Velocity",{ 0.014,0.0158763 },1 },{ "Velocity",{ 0,0.0226804 },1 },{ "Velocity",{ -0.014,0.0158763 },1 },{ "Velocity",{ -0.02,0 },1 },{ "Velocity",{ -0.014,-0.0158763 },1 },{ "Velocity",{ 0,-0.0226804 },1 },{  },{ "Velocity",{ 0.04,0 },1 },{ "Velocity",{ 0.02,0 },1 },{  },{ "Velocity",{ -0.04,0 },1 },{ "Velocity",{ -0.02,0 },1 },{  },{ "Velocity",{ 0,-0.0453608 },1 },{ "Velocity",{ 0,-0.0226804 },1 },{  }};
					};
					class Static
					{
						clipTL[] = {0.0,0.1};
						clipBR[] = {1.0,0.0};
						type = "line";
						points[] = {{ { 0.8425,0.340206 },1 },{ { 0.8575,0.340206 },1 },{  },{ { 0.85,0.331701 },1 },{ { 0.85,0.348711 },1 },{  },{ { 0.901279,0.318548 },1 },{ { 0.916279,0.318548 },1 },{  },{ { 0.908779,0.310043 },1 },{ { 0.908779,0.327053 },1 },{  },{ { 0.937606,0.261847 },1 },{ { 0.952606,0.261847 },1 },{  },{ { 0.945106,0.253342 },1 },{ { 0.945106,0.270352 },1 },{  },{ { 0.937606,0.191761 },1 },{ { 0.952606,0.191761 },1 },{  },{ { 0.945106,0.183256 },1 },{ { 0.945106,0.200266 },1 },{  },{ { 0.901279,0.13506 },1 },{ { 0.916279,0.13506 },1 },{  },{ { 0.908779,0.126555 },1 },{ { 0.908779,0.143565 },1 },{  },{ { 0.8425,0.113402 },1 },{ { 0.8575,0.113402 },1 },{  },{ { 0.85,0.104897 },1 },{ { 0.85,0.121907 },1 },{  },{ { 0.783722,0.13506 },1 },{ { 0.798721,0.13506 },1 },{  },{ { 0.791221,0.126555 },1 },{ { 0.791221,0.143565 },1 },{  },{ { 0.747394,0.191761 },1 },{ { 0.762394,0.191761 },1 },{  },{ { 0.754894,0.183256 },1 },{ { 0.754894,0.200266 },1 },{  },{ { 0.747394,0.261847 },1 },{ { 0.762394,0.261847 },1 },{  },{ { 0.754894,0.253342 },1 },{ { 0.754894,0.270352 },1 },{  },{ { 0.783722,0.318548 },1 },{ { 0.798721,0.318548 },1 },{  },{ { 0.791221,0.310043 },1 },{ { 0.791221,0.327053 },1 },{  },{ { 0.1425,0.317526 },1 },{ { 0.1575,0.317526 },1 },{  },{ { 0.15,0.309021 },1 },{ { 0.15,0.326031 },1 },{  },{ { 0.189523,0.300199 },1 },{ { 0.204523,0.300199 },1 },{  },{ { 0.197023,0.291694 },1 },{ { 0.197023,0.308705 },1 },{  },{ { 0.218585,0.254839 },1 },{ { 0.233585,0.254839 },1 },{  },{ { 0.226085,0.246333 },1 },{ { 0.226085,0.263344 },1 },{  },{ { 0.218585,0.19877 },1 },{ { 0.233585,0.19877 },1 },{  },{ { 0.226085,0.190264 },1 },{ { 0.226085,0.207275 },1 },{  },{ { 0.189523,0.153409 },1 },{ { 0.204523,0.153409 },1 },{  },{ { 0.197023,0.144904 },1 },{ { 0.197023,0.161914 },1 },{  },{ { 0.1425,0.136082 },1 },{ { 0.1575,0.136082 },1 },{  },{ { 0.15,0.127577 },1 },{ { 0.15,0.144588 },1 },{  },{ { 0.0954772,0.153409 },1 },{ { 0.110477,0.153409 },1 },{  },{ { 0.102977,0.144904 },1 },{ { 0.102977,0.161914 },1 },{  },{ { 0.0664155,0.19877 },1 },{ { 0.0814155,0.19877 },1 },{  },{ { 0.0739155,0.190264 },1 },{ { 0.0739155,0.207275 },1 },{  },{ { 0.0664155,0.254839 },1 },{ { 0.0814155,0.254839 },1 },{  },{ { 0.0739155,0.246334 },1 },{ { 0.0739155,0.263344 },1 },{  },{ { 0.0954772,0.300199 },1 },{ { 0.110477,0.300199 },1 },{  },{ { 0.102977,0.291694 },1 },{ { 0.102977,0.308705 },1 },{  },{ "Speed_Instrument_center",1,"Speed_Instrument",{ 0,0.08 },1 },{ "Speed_Instrument_center",1,"Speed_Instrument",{ 0,0.04 },1 },{  },{ "ASL_Instrument_center",1,"ASL_Instrument",{ 0,0.05 },1 },{ "ASL_Instrument_center",1,"ASL_Instrument",{ 0,0.1 },1 },{  },{ { 0.5,0.0907216 },1 },{ { 0.505,0.113402 },1 },{ { 0.495,0.113402 },1 },{ { 0.5,0.0907216 },1 },{  },{ { 0.516,0.762887 },1 },{ { 0.516,0.796907 },1 },{  },{ { 0.638459,0.735263 },1 },{ { 0.649939,0.766694 },1 },{  },{ { 0.393541,0.735263 },1 },{ { 0.382061,0.766694 },1 },{  },{ { 0.559074,0.771025 },1 },{ { 0.561684,0.793512 },1 },{  },{ { 0.472926,0.771025 },1 },{ { 0.470316,0.793512 },1 },{  },{ { 0.60141,0.761475 },1 },{ { 0.606587,0.783383 },1 },{  },{ { 0.43059,0.761475 },1 },{ { 0.425413,0.783383 },1 },{  }};
					};
					class HorizonBankRot
					{
						type = "line";
						points[] = {{ "HorizonBankRot",{ 0,0.396907 },1 },{ "HorizonBankRot",{ 0.01,0.419588 },1 },{ "HorizonBankRot",{ -0.01,0.419588 },1 },{ "HorizonBankRot",{ 0,0.396907 },1 }};
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
								points[] = {{ "Level0",{ 1,0 },1 },{ "Level0",{ 0.08,0 },1 },{  },{ "Level0",{ -0.08,0 },1 },{ "Level0",{ -1,0 },1 },{  },{ "Level0",{ 1,0.001 },1 },{ "Level0",{ 0.08,0.001 },1 },{  },{ "Level0",{ -0.08,0.001 },1 },{ "Level0",{ -1,0.001 },1 }};
							};
							class LevelM5: Level0
							{
								type = "line";
								points[] = {{ "LevelM5",{ -0.2,0.005 },1 },{ "LevelM5",{ -0.17,0.004 },1 },{  },{ "LevelM5",{ -0.14,0.003 },1 },{ "LevelM5",{ -0.11,0.002 },1 },{  },{ "LevelM5",{ -0.08,0.001 },1 },{ "LevelM5",{ -0.05,0 },1 },{ "LevelM5",{ -0.05,-0.03 },1 },{  },{ "LevelM5",{ 0.05,-0.03 },1 },{ "LevelM5",{ 0.05,0 },1 },{ "LevelM5",{ 0.08,0.001 },1 },{  },{ "LevelM5",{ 0.11,0.002 },1 },{ "LevelM5",{ 0.14,0.003 },1 },{  },{ "LevelM5",{ 0.17,0.004 },1 },{ "LevelM5",{ 0.2,0.005 },1 }};
							};
							class VALM_1_5
							{
								type = "text";
								source = "static";
								text = -5;
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM5",{ -0.18,-0.082 },1};
								right[] = {"LevelM5",{ -0.1,-0.082 },1};
								down[] = {"LevelM5",{ -0.18,-0.032 },1};
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
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP5",{ -0.18,0.032 },1};
								right[] = {"LevelP5",{ -0.1,0.032 },1};
								down[] = {"LevelP5",{ -0.18,0.082 },1};
							};
							class LevelM10: Level0
							{
								type = "line";
								points[] = {{ "LevelM10",{ -0.2,0.01 },1 },{ "LevelM10",{ -0.17,0.008 },1 },{  },{ "LevelM10",{ -0.14,0.006 },1 },{ "LevelM10",{ -0.11,0.004 },1 },{  },{ "LevelM10",{ -0.08,0.002 },1 },{ "LevelM10",{ -0.05,0 },1 },{ "LevelM10",{ -0.05,-0.03 },1 },{  },{ "LevelM10",{ 0.05,-0.03 },1 },{ "LevelM10",{ 0.05,0 },1 },{ "LevelM10",{ 0.08,0.002 },1 },{  },{ "LevelM10",{ 0.11,0.004 },1 },{ "LevelM10",{ 0.14,0.006 },1 },{  },{ "LevelM10",{ 0.17,0.008 },1 },{ "LevelM10",{ 0.2,0.01 },1 }};
							};
							class VALM_1_10
							{
								type = "text";
								source = "static";
								text = -10;
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM10",{ -0.18,-0.082 },1};
								right[] = {"LevelM10",{ -0.1,-0.082 },1};
								down[] = {"LevelM10",{ -0.18,-0.032 },1};
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
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP10",{ -0.18,0.032 },1};
								right[] = {"LevelP10",{ -0.1,0.032 },1};
								down[] = {"LevelP10",{ -0.18,0.082 },1};
							};
							class LevelM15: Level0
							{
								type = "line";
								points[] = {{ "LevelM15",{ -0.2,0.015 },1 },{ "LevelM15",{ -0.17,0.012 },1 },{  },{ "LevelM15",{ -0.14,0.009 },1 },{ "LevelM15",{ -0.11,0.006 },1 },{  },{ "LevelM15",{ -0.08,0.003 },1 },{ "LevelM15",{ -0.05,0 },1 },{ "LevelM15",{ -0.05,-0.03 },1 },{  },{ "LevelM15",{ 0.05,-0.03 },1 },{ "LevelM15",{ 0.05,0 },1 },{ "LevelM15",{ 0.08,0.003 },1 },{  },{ "LevelM15",{ 0.11,0.006 },1 },{ "LevelM15",{ 0.14,0.009 },1 },{  },{ "LevelM15",{ 0.17,0.012 },1 },{ "LevelM15",{ 0.2,0.015 },1 }};
							};
							class VALM_1_15
							{
								type = "text";
								source = "static";
								text = -15;
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM15",{ -0.18,-0.082 },1};
								right[] = {"LevelM15",{ -0.1,-0.082 },1};
								down[] = {"LevelM15",{ -0.18,-0.032 },1};
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
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP15",{ -0.18,0.032 },1};
								right[] = {"LevelP15",{ -0.1,0.032 },1};
								down[] = {"LevelP15",{ -0.18,0.082 },1};
							};
							class LevelM20: Level0
							{
								type = "line";
								points[] = {{ "LevelM20",{ -0.2,0.02 },1 },{ "LevelM20",{ -0.17,0.016 },1 },{  },{ "LevelM20",{ -0.14,0.012 },1 },{ "LevelM20",{ -0.11,0.008 },1 },{  },{ "LevelM20",{ -0.08,0.004 },1 },{ "LevelM20",{ -0.05,0 },1 },{ "LevelM20",{ -0.05,-0.03 },1 },{  },{ "LevelM20",{ 0.05,-0.03 },1 },{ "LevelM20",{ 0.05,0 },1 },{ "LevelM20",{ 0.08,0.004 },1 },{  },{ "LevelM20",{ 0.11,0.008 },1 },{ "LevelM20",{ 0.14,0.012 },1 },{  },{ "LevelM20",{ 0.17,0.016 },1 },{ "LevelM20",{ 0.2,0.02 },1 }};
							};
							class VALM_1_20
							{
								type = "text";
								source = "static";
								text = -20;
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM20",{ -0.18,-0.082 },1};
								right[] = {"LevelM20",{ -0.1,-0.082 },1};
								down[] = {"LevelM20",{ -0.18,-0.032 },1};
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
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP20",{ -0.18,0.032 },1};
								right[] = {"LevelP20",{ -0.1,0.032 },1};
								down[] = {"LevelP20",{ -0.18,0.082 },1};
							};
							class LevelM25: Level0
							{
								type = "line";
								points[] = {{ "LevelM25",{ -0.2,0.025 },1 },{ "LevelM25",{ -0.17,0.02 },1 },{  },{ "LevelM25",{ -0.14,0.015 },1 },{ "LevelM25",{ -0.11,0.01 },1 },{  },{ "LevelM25",{ -0.08,0.005 },1 },{ "LevelM25",{ -0.05,0 },1 },{ "LevelM25",{ -0.05,-0.03 },1 },{  },{ "LevelM25",{ 0.05,-0.03 },1 },{ "LevelM25",{ 0.05,0 },1 },{ "LevelM25",{ 0.08,0.005 },1 },{  },{ "LevelM25",{ 0.11,0.01 },1 },{ "LevelM25",{ 0.14,0.015 },1 },{  },{ "LevelM25",{ 0.17,0.02 },1 },{ "LevelM25",{ 0.2,0.025 },1 }};
							};
							class VALM_1_25
							{
								type = "text";
								source = "static";
								text = -25;
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM25",{ -0.18,-0.082 },1};
								right[] = {"LevelM25",{ -0.1,-0.082 },1};
								down[] = {"LevelM25",{ -0.18,-0.032 },1};
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
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP25",{ -0.18,0.032 },1};
								right[] = {"LevelP25",{ -0.1,0.032 },1};
								down[] = {"LevelP25",{ -0.18,0.082 },1};
							};
							class LevelM30: Level0
							{
								type = "line";
								points[] = {{ "LevelM30",{ -0.2,0.03 },1 },{ "LevelM30",{ -0.17,0.024 },1 },{  },{ "LevelM30",{ -0.14,0.018 },1 },{ "LevelM30",{ -0.11,0.012 },1 },{  },{ "LevelM30",{ -0.08,0.006 },1 },{ "LevelM30",{ -0.05,0 },1 },{ "LevelM30",{ -0.05,-0.03 },1 },{  },{ "LevelM30",{ 0.05,-0.03 },1 },{ "LevelM30",{ 0.05,0 },1 },{ "LevelM30",{ 0.08,0.006 },1 },{  },{ "LevelM30",{ 0.11,0.012 },1 },{ "LevelM30",{ 0.14,0.018 },1 },{  },{ "LevelM30",{ 0.17,0.024 },1 },{ "LevelM30",{ 0.2,0.03 },1 }};
							};
							class VALM_1_30
							{
								type = "text";
								source = "static";
								text = -30;
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM30",{ -0.18,-0.082 },1};
								right[] = {"LevelM30",{ -0.1,-0.082 },1};
								down[] = {"LevelM30",{ -0.18,-0.032 },1};
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
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP30",{ -0.18,0.032 },1};
								right[] = {"LevelP30",{ -0.1,0.032 },1};
								down[] = {"LevelP30",{ -0.18,0.082 },1};
							};
							class LevelM35: Level0
							{
								type = "line";
								points[] = {{ "LevelM35",{ -0.2,0.035 },1 },{ "LevelM35",{ -0.17,0.028 },1 },{  },{ "LevelM35",{ -0.14,0.021 },1 },{ "LevelM35",{ -0.11,0.014 },1 },{  },{ "LevelM35",{ -0.08,0.007 },1 },{ "LevelM35",{ -0.05,0 },1 },{ "LevelM35",{ -0.05,-0.03 },1 },{  },{ "LevelM35",{ 0.05,-0.03 },1 },{ "LevelM35",{ 0.05,0 },1 },{ "LevelM35",{ 0.08,0.007 },1 },{  },{ "LevelM35",{ 0.11,0.014 },1 },{ "LevelM35",{ 0.14,0.021 },1 },{  },{ "LevelM35",{ 0.17,0.028 },1 },{ "LevelM35",{ 0.2,0.035 },1 }};
							};
							class VALM_1_35
							{
								type = "text";
								source = "static";
								text = -35;
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM35",{ -0.18,-0.082 },1};
								right[] = {"LevelM35",{ -0.1,-0.082 },1};
								down[] = {"LevelM35",{ -0.18,-0.032 },1};
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
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP35",{ -0.18,0.032 },1};
								right[] = {"LevelP35",{ -0.1,0.032 },1};
								down[] = {"LevelP35",{ -0.18,0.082 },1};
							};
							class LevelM40: Level0
							{
								type = "line";
								points[] = {{ "LevelM40",{ -0.2,0.04 },1 },{ "LevelM40",{ -0.17,0.032 },1 },{  },{ "LevelM40",{ -0.14,0.024 },1 },{ "LevelM40",{ -0.11,0.016 },1 },{  },{ "LevelM40",{ -0.08,0.008 },1 },{ "LevelM40",{ -0.05,0 },1 },{ "LevelM40",{ -0.05,-0.03 },1 },{  },{ "LevelM40",{ 0.05,-0.03 },1 },{ "LevelM40",{ 0.05,0 },1 },{ "LevelM40",{ 0.08,0.008 },1 },{  },{ "LevelM40",{ 0.11,0.016 },1 },{ "LevelM40",{ 0.14,0.024 },1 },{  },{ "LevelM40",{ 0.17,0.032 },1 },{ "LevelM40",{ 0.2,0.04 },1 }};
							};
							class VALM_1_40
							{
								type = "text";
								source = "static";
								text = -40;
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM40",{ -0.18,-0.082 },1};
								right[] = {"LevelM40",{ -0.1,-0.082 },1};
								down[] = {"LevelM40",{ -0.18,-0.032 },1};
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
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP40",{ -0.18,0.032 },1};
								right[] = {"LevelP40",{ -0.1,0.032 },1};
								down[] = {"LevelP40",{ -0.18,0.082 },1};
							};
							class LevelM45: Level0
							{
								type = "line";
								points[] = {{ "LevelM45",{ -0.2,0.045 },1 },{ "LevelM45",{ -0.17,0.036 },1 },{  },{ "LevelM45",{ -0.14,0.027 },1 },{ "LevelM45",{ -0.11,0.018 },1 },{  },{ "LevelM45",{ -0.08,0.009 },1 },{ "LevelM45",{ -0.05,0 },1 },{ "LevelM45",{ -0.05,-0.03 },1 },{  },{ "LevelM45",{ 0.05,-0.03 },1 },{ "LevelM45",{ 0.05,0 },1 },{ "LevelM45",{ 0.08,0.009 },1 },{  },{ "LevelM45",{ 0.11,0.018 },1 },{ "LevelM45",{ 0.14,0.027 },1 },{  },{ "LevelM45",{ 0.17,0.036 },1 },{ "LevelM45",{ 0.2,0.045 },1 }};
							};
							class VALM_1_45
							{
								type = "text";
								source = "static";
								text = -45;
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM45",{ -0.18,-0.082 },1};
								right[] = {"LevelM45",{ -0.1,-0.082 },1};
								down[] = {"LevelM45",{ -0.18,-0.032 },1};
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
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP45",{ -0.18,0.032 },1};
								right[] = {"LevelP45",{ -0.1,0.032 },1};
								down[] = {"LevelP45",{ -0.18,0.082 },1};
							};
							class LevelM50: Level0
							{
								type = "line";
								points[] = {{ "LevelM50",{ -0.2,0.05 },1 },{ "LevelM50",{ -0.17,0.04 },1 },{  },{ "LevelM50",{ -0.14,0.03 },1 },{ "LevelM50",{ -0.11,0.02 },1 },{  },{ "LevelM50",{ -0.08,0.01 },1 },{ "LevelM50",{ -0.05,0 },1 },{ "LevelM50",{ -0.05,-0.03 },1 },{  },{ "LevelM50",{ 0.05,-0.03 },1 },{ "LevelM50",{ 0.05,0 },1 },{ "LevelM50",{ 0.08,0.01 },1 },{  },{ "LevelM50",{ 0.11,0.02 },1 },{ "LevelM50",{ 0.14,0.03 },1 },{  },{ "LevelM50",{ 0.17,0.04 },1 },{ "LevelM50",{ 0.2,0.05 },1 }};
							};
							class VALM_1_50
							{
								type = "text";
								source = "static";
								text = -50;
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM50",{ -0.18,-0.082 },1};
								right[] = {"LevelM50",{ -0.1,-0.082 },1};
								down[] = {"LevelM50",{ -0.18,-0.032 },1};
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
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP50",{ -0.18,0.032 },1};
								right[] = {"LevelP50",{ -0.1,0.032 },1};
								down[] = {"LevelP50",{ -0.18,0.082 },1};
							};
							class LevelM55: Level0
							{
								type = "line";
								points[] = {{ "LevelM55",{ -0.2,0.055 },1 },{ "LevelM55",{ -0.17,0.044 },1 },{  },{ "LevelM55",{ -0.14,0.033 },1 },{ "LevelM55",{ -0.11,0.022 },1 },{  },{ "LevelM55",{ -0.08,0.011 },1 },{ "LevelM55",{ -0.05,0 },1 },{ "LevelM55",{ -0.05,-0.03 },1 },{  },{ "LevelM55",{ 0.05,-0.03 },1 },{ "LevelM55",{ 0.05,0 },1 },{ "LevelM55",{ 0.08,0.011 },1 },{  },{ "LevelM55",{ 0.11,0.022 },1 },{ "LevelM55",{ 0.14,0.033 },1 },{  },{ "LevelM55",{ 0.17,0.044 },1 },{ "LevelM55",{ 0.2,0.055 },1 }};
							};
							class VALM_1_55
							{
								type = "text";
								source = "static";
								text = -55;
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM55",{ -0.18,-0.082 },1};
								right[] = {"LevelM55",{ -0.1,-0.082 },1};
								down[] = {"LevelM55",{ -0.18,-0.032 },1};
							};
							class LevelP55: Level0
							{
								type = "line";
								points[] = {{ "LevelP55",{ -0.2,0.03 },1 },{ "LevelP55",{ -0.2,0 },1 },{ "LevelP55",{ -0.05,0 },1 },{  },{ "LevelP55",{ 0.05,0 },1 },{ "LevelP55",{ 0.2,0 },1 },{ "LevelP55",{ 0.2,0.03 },1 }};
							};
							class VALP_1_55
							{
								type = "text";
								source = "static";
								text = "55";
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP55",{ -0.18,0.032 },1};
								right[] = {"LevelP55",{ -0.1,0.032 },1};
								down[] = {"LevelP55",{ -0.18,0.082 },1};
							};
							class LevelM60: Level0
							{
								type = "line";
								points[] = {{ "LevelM60",{ -0.2,0.06 },1 },{ "LevelM60",{ -0.17,0.048 },1 },{  },{ "LevelM60",{ -0.14,0.036 },1 },{ "LevelM60",{ -0.11,0.024 },1 },{  },{ "LevelM60",{ -0.08,0.012 },1 },{ "LevelM60",{ -0.05,0 },1 },{ "LevelM60",{ -0.05,-0.03 },1 },{  },{ "LevelM60",{ 0.05,-0.03 },1 },{ "LevelM60",{ 0.05,0 },1 },{ "LevelM60",{ 0.08,0.012 },1 },{  },{ "LevelM60",{ 0.11,0.024 },1 },{ "LevelM60",{ 0.14,0.036 },1 },{  },{ "LevelM60",{ 0.17,0.048 },1 },{ "LevelM60",{ 0.2,0.06 },1 }};
							};
							class VALM_1_60
							{
								type = "text";
								source = "static";
								text = -60;
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM60",{ -0.18,-0.082 },1};
								right[] = {"LevelM60",{ -0.1,-0.082 },1};
								down[] = {"LevelM60",{ -0.18,-0.032 },1};
							};
							class LevelP60: Level0
							{
								type = "line";
								points[] = {{ "LevelP60",{ -0.2,0.03 },1 },{ "LevelP60",{ -0.2,0 },1 },{ "LevelP60",{ -0.05,0 },1 },{  },{ "LevelP60",{ 0.05,0 },1 },{ "LevelP60",{ 0.2,0 },1 },{ "LevelP60",{ 0.2,0.03 },1 }};
							};
							class VALP_1_60
							{
								type = "text";
								source = "static";
								text = "60";
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP60",{ -0.18,0.032 },1};
								right[] = {"LevelP60",{ -0.1,0.032 },1};
								down[] = {"LevelP60",{ -0.18,0.082 },1};
							};
							class LevelM65: Level0
							{
								type = "line";
								points[] = {{ "LevelM65",{ -0.2,0.065 },1 },{ "LevelM65",{ -0.17,0.052 },1 },{  },{ "LevelM65",{ -0.14,0.039 },1 },{ "LevelM65",{ -0.11,0.026 },1 },{  },{ "LevelM65",{ -0.08,0.013 },1 },{ "LevelM65",{ -0.05,0 },1 },{ "LevelM65",{ -0.05,-0.03 },1 },{  },{ "LevelM65",{ 0.05,-0.03 },1 },{ "LevelM65",{ 0.05,0 },1 },{ "LevelM65",{ 0.08,0.013 },1 },{  },{ "LevelM65",{ 0.11,0.026 },1 },{ "LevelM65",{ 0.14,0.039 },1 },{  },{ "LevelM65",{ 0.17,0.052 },1 },{ "LevelM65",{ 0.2,0.065 },1 }};
							};
							class VALM_1_65
							{
								type = "text";
								source = "static";
								text = -65;
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM65",{ -0.18,-0.082 },1};
								right[] = {"LevelM65",{ -0.1,-0.082 },1};
								down[] = {"LevelM65",{ -0.18,-0.032 },1};
							};
							class LevelP65: Level0
							{
								type = "line";
								points[] = {{ "LevelP65",{ -0.2,0.03 },1 },{ "LevelP65",{ -0.2,0 },1 },{ "LevelP65",{ -0.05,0 },1 },{  },{ "LevelP65",{ 0.05,0 },1 },{ "LevelP65",{ 0.2,0 },1 },{ "LevelP65",{ 0.2,0.03 },1 }};
							};
							class VALP_1_65
							{
								type = "text";
								source = "static";
								text = "65";
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP65",{ -0.18,0.032 },1};
								right[] = {"LevelP65",{ -0.1,0.032 },1};
								down[] = {"LevelP65",{ -0.18,0.082 },1};
							};
							class LevelM70: Level0
							{
								type = "line";
								points[] = {{ "LevelM70",{ -0.2,0.07 },1 },{ "LevelM70",{ -0.17,0.056 },1 },{  },{ "LevelM70",{ -0.14,0.042 },1 },{ "LevelM70",{ -0.11,0.028 },1 },{  },{ "LevelM70",{ -0.08,0.014 },1 },{ "LevelM70",{ -0.05,0 },1 },{ "LevelM70",{ -0.05,-0.03 },1 },{  },{ "LevelM70",{ 0.05,-0.03 },1 },{ "LevelM70",{ 0.05,0 },1 },{ "LevelM70",{ 0.08,0.014 },1 },{  },{ "LevelM70",{ 0.11,0.028 },1 },{ "LevelM70",{ 0.14,0.042 },1 },{  },{ "LevelM70",{ 0.17,0.056 },1 },{ "LevelM70",{ 0.2,0.07 },1 }};
							};
							class VALM_1_70
							{
								type = "text";
								source = "static";
								text = -70;
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM70",{ -0.18,-0.082 },1};
								right[] = {"LevelM70",{ -0.1,-0.082 },1};
								down[] = {"LevelM70",{ -0.18,-0.032 },1};
							};
							class LevelP70: Level0
							{
								type = "line";
								points[] = {{ "LevelP70",{ -0.2,0.03 },1 },{ "LevelP70",{ -0.2,0 },1 },{ "LevelP70",{ -0.05,0 },1 },{  },{ "LevelP70",{ 0.05,0 },1 },{ "LevelP70",{ 0.2,0 },1 },{ "LevelP70",{ 0.2,0.03 },1 }};
							};
							class VALP_1_70
							{
								type = "text";
								source = "static";
								text = "70";
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP70",{ -0.18,0.032 },1};
								right[] = {"LevelP70",{ -0.1,0.032 },1};
								down[] = {"LevelP70",{ -0.18,0.082 },1};
							};
							class LevelM75: Level0
							{
								type = "line";
								points[] = {{ "LevelM75",{ -0.2,0.075 },1 },{ "LevelM75",{ -0.17,0.06 },1 },{  },{ "LevelM75",{ -0.14,0.045 },1 },{ "LevelM75",{ -0.11,0.03 },1 },{  },{ "LevelM75",{ -0.08,0.015 },1 },{ "LevelM75",{ -0.05,0 },1 },{ "LevelM75",{ -0.05,-0.03 },1 },{  },{ "LevelM75",{ 0.05,-0.03 },1 },{ "LevelM75",{ 0.05,0 },1 },{ "LevelM75",{ 0.08,0.015 },1 },{  },{ "LevelM75",{ 0.11,0.03 },1 },{ "LevelM75",{ 0.14,0.045 },1 },{  },{ "LevelM75",{ 0.17,0.06 },1 },{ "LevelM75",{ 0.2,0.075 },1 }};
							};
							class VALM_1_75
							{
								type = "text";
								source = "static";
								text = -75;
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM75",{ -0.18,-0.082 },1};
								right[] = {"LevelM75",{ -0.1,-0.082 },1};
								down[] = {"LevelM75",{ -0.18,-0.032 },1};
							};
							class LevelP75: Level0
							{
								type = "line";
								points[] = {{ "LevelP75",{ -0.2,0.03 },1 },{ "LevelP75",{ -0.2,0 },1 },{ "LevelP75",{ -0.05,0 },1 },{  },{ "LevelP75",{ 0.05,0 },1 },{ "LevelP75",{ 0.2,0 },1 },{ "LevelP75",{ 0.2,0.03 },1 }};
							};
							class VALP_1_75
							{
								type = "text";
								source = "static";
								text = "75";
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP75",{ -0.18,0.032 },1};
								right[] = {"LevelP75",{ -0.1,0.032 },1};
								down[] = {"LevelP75",{ -0.18,0.082 },1};
							};
							class LevelM80: Level0
							{
								type = "line";
								points[] = {{ "LevelM80",{ -0.2,0.08 },1 },{ "LevelM80",{ -0.17,0.064 },1 },{  },{ "LevelM80",{ -0.14,0.048 },1 },{ "LevelM80",{ -0.11,0.032 },1 },{  },{ "LevelM80",{ -0.08,0.016 },1 },{ "LevelM80",{ -0.05,0 },1 },{ "LevelM80",{ -0.05,-0.03 },1 },{  },{ "LevelM80",{ 0.05,-0.03 },1 },{ "LevelM80",{ 0.05,0 },1 },{ "LevelM80",{ 0.08,0.016 },1 },{  },{ "LevelM80",{ 0.11,0.032 },1 },{ "LevelM80",{ 0.14,0.048 },1 },{  },{ "LevelM80",{ 0.17,0.064 },1 },{ "LevelM80",{ 0.2,0.08 },1 }};
							};
							class VALM_1_80
							{
								type = "text";
								source = "static";
								text = -80;
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM80",{ -0.18,-0.082 },1};
								right[] = {"LevelM80",{ -0.1,-0.082 },1};
								down[] = {"LevelM80",{ -0.18,-0.032 },1};
							};
							class LevelP80: Level0
							{
								type = "line";
								points[] = {{ "LevelP80",{ -0.2,0.03 },1 },{ "LevelP80",{ -0.2,0 },1 },{ "LevelP80",{ -0.05,0 },1 },{  },{ "LevelP80",{ 0.05,0 },1 },{ "LevelP80",{ 0.2,0 },1 },{ "LevelP80",{ 0.2,0.03 },1 }};
							};
							class VALP_1_80
							{
								type = "text";
								source = "static";
								text = "80";
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP80",{ -0.18,0.032 },1};
								right[] = {"LevelP80",{ -0.1,0.032 },1};
								down[] = {"LevelP80",{ -0.18,0.082 },1};
							};
							class LevelM85: Level0
							{
								type = "line";
								points[] = {{ "LevelM85",{ -0.2,0.085 },1 },{ "LevelM85",{ -0.17,0.068 },1 },{  },{ "LevelM85",{ -0.14,0.051 },1 },{ "LevelM85",{ -0.11,0.034 },1 },{  },{ "LevelM85",{ -0.08,0.017 },1 },{ "LevelM85",{ -0.05,0 },1 },{ "LevelM85",{ -0.05,-0.03 },1 },{  },{ "LevelM85",{ 0.05,-0.03 },1 },{ "LevelM85",{ 0.05,0 },1 },{ "LevelM85",{ 0.08,0.017 },1 },{  },{ "LevelM85",{ 0.11,0.034 },1 },{ "LevelM85",{ 0.14,0.051 },1 },{  },{ "LevelM85",{ 0.17,0.068 },1 },{ "LevelM85",{ 0.2,0.085 },1 }};
							};
							class VALM_1_85
							{
								type = "text";
								source = "static";
								text = -85;
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM85",{ -0.18,-0.082 },1};
								right[] = {"LevelM85",{ -0.1,-0.082 },1};
								down[] = {"LevelM85",{ -0.18,-0.032 },1};
							};
							class LevelP85: Level0
							{
								type = "line";
								points[] = {{ "LevelP85",{ -0.2,0.03 },1 },{ "LevelP85",{ -0.2,0 },1 },{ "LevelP85",{ -0.05,0 },1 },{  },{ "LevelP85",{ 0.05,0 },1 },{ "LevelP85",{ 0.2,0 },1 },{ "LevelP85",{ 0.2,0.03 },1 }};
							};
							class VALP_1_85
							{
								type = "text";
								source = "static";
								text = "85";
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP85",{ -0.18,0.032 },1};
								right[] = {"LevelP85",{ -0.1,0.032 },1};
								down[] = {"LevelP85",{ -0.18,0.082 },1};
							};
							class LevelM90: Level0
							{
								type = "line";
								points[] = {{ "LevelM90",{ -0.2,0.09 },1 },{ "LevelM90",{ -0.17,0.072 },1 },{  },{ "LevelM90",{ -0.14,0.054 },1 },{ "LevelM90",{ -0.11,0.036 },1 },{  },{ "LevelM90",{ -0.08,0.018 },1 },{ "LevelM90",{ -0.05,0 },1 },{ "LevelM90",{ -0.05,-0.03 },1 },{  },{ "LevelM90",{ 0.05,-0.03 },1 },{ "LevelM90",{ 0.05,0 },1 },{ "LevelM90",{ 0.08,0.018 },1 },{  },{ "LevelM90",{ 0.11,0.036 },1 },{ "LevelM90",{ 0.14,0.054 },1 },{  },{ "LevelM90",{ 0.17,0.072 },1 },{ "LevelM90",{ 0.2,0.09 },1 }};
							};
							class VALM_1_90
							{
								type = "text";
								source = "static";
								text = -90;
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM90",{ -0.18,-0.082 },1};
								right[] = {"LevelM90",{ -0.1,-0.082 },1};
								down[] = {"LevelM90",{ -0.18,-0.032 },1};
							};
							class LevelP90: Level0
							{
								type = "line";
								points[] = {{ "LevelP90",{ -0.2,0.03 },1 },{ "LevelP90",{ -0.2,0 },1 },{ "LevelP90",{ -0.05,0 },1 },{  },{ "LevelP90",{ 0.05,0 },1 },{ "LevelP90",{ 0.2,0 },1 },{ "LevelP90",{ 0.2,0.03 },1 }};
							};
							class VALP_1_90
							{
								type = "text";
								source = "static";
								text = "90";
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP90",{ -0.18,0.032 },1};
								right[] = {"LevelP90",{ -0.1,0.032 },1};
								down[] = {"LevelP90",{ -0.18,0.082 },1};
							};
						};
					};
					class RadarTargets
					{
						type = "radar";
						pos0[] = {0.516,0.01};
						pos10[] = {1.486,1.11};
						points[] = {{ { -0.05,-0.056701 },1 },{ { 0.05,-0.056701 },1 },{ { 0.05,0.056701 },1 },{ { -0.05,0.056701 },1 },{ { -0.05,-0.056701 },1 }};
					};
					class MGun
					{
						condition = "mgun";
						class Circle
						{
							type = "line";
							points[] = {};
						};
					};
					class Bomb
					{
						condition = "bomb";
						class Circle
						{
							type = "line";
							points[] = {{ "center",{ 0,-0.113402 },1 },{ "center",{ 0.05,-0.0986598 },1 },{ "center",{ 0.087,-0.056701 },1 },{ "center",{ 0.1,0 },1 },{ "center",{ 0.087,0.056701 },1 },{ "center",{ 0.05,0.0986598 },1 },{ "center",{ 0,0.113402 },1 },{ "center",{ -0.05,0.0986598 },1 },{ "center",{ -0.087,0.056701 },1 },{ "center",{ -0.1,0 },1 },{ "center",{ -0.087,-0.056701 },1 },{ "center",{ -0.05,-0.0986598 },1 },{ "center",{ 0,-0.113402 },1 },{  },{ "Velocity",0.001,"center",{ 0.0,0.0 },1 },{ "Velocity",{ 0.0,0.0 },1 },{  },{ "Target",{ 0,-0.0793814 },1 },{ "Target",{ 0.07,0 },1 },{ "Target",{ 0,0.0793814 },1 },{ "Target",{ -0.07,0 },1 },{ "Target",{ 0,-0.0793814 },1 }};
						};
					};
					class AAMissile
					{
						condition = "AAmissile";
						class Circle
						{
							type = "line";
							points[] = {{ "center",{ 0,0.226804 },1 },{ "center",{ 0.0517638,0.219076 },1 },{ "center",{ 0.1,0.196418 },1 },{ "center",{ 0.141421,0.160375 },1 },{ "center",{ 0.173205,0.113402 },1 },{ "center",{ 0.193185,0.0587012 },1 },{ "center",{ 0.2,-9.91392e-009 },1 },{ "center",{ 0.193185,-0.0587012 },1 },{ "center",{ 0.173205,-0.113402 },1 },{ "center",{ 0.141421,-0.160375 },1 },{ "center",{ 0.1,-0.196418 },1 },{ "center",{ 0.0517638,-0.219076 },1 },{ "center",{ -1.74846e-008,-0.226804 },1 },{ "center",{ -0.0517638,-0.219076 },1 },{ "center",{ -0.1,-0.196418 },1 },{ "center",{ -0.141421,-0.160375 },1 },{ "center",{ -0.173205,-0.113402 },1 },{ "center",{ -0.193185,-0.0587012 },1 },{ "center",{ -0.2,2.70461e-009 },1 },{ "center",{ -0.193185,0.0587012 },1 },{ "center",{ -0.173205,0.113402 },1 },{ "center",{ -0.141421,0.160375 },1 },{ "center",{ -0.1,0.196418 },1 },{ "center",{ -0.0517638,0.219076 },1 },{ "center",{ 3.49691e-008,0.226804 },1 },{  },{ "Target",{ 0,-0.0793814 },1 },{ "Target",{ 0.07,0 },1 },{ "Target",{ 0,0.0793814 },1 },{ "Target",{ -0.07,0 },1 },{ "Target",{ 0,-0.0793814 },1 }};
						};
					};
					class ATMissile
					{
						condition = "ATmissile";
						class Circle
						{
							type = "line";
							points[] = {{ "center",{ 0,0.181443 },1 },{ "center",{ 0.041411,0.175261 },1 },{ "center",{ 0.08,0.157135 },1 },{ "center",{ 0.113137,0.1283 },1 },{ "center",{ 0.138564,0.0907216 },1 },{ "center",{ 0.154548,0.046961 },1 },{ "center",{ 0.16,-7.93114e-009 },1 },{ "center",{ 0.154548,-0.046961 },1 },{ "center",{ 0.138564,-0.0907217 },1 },{ "center",{ 0.113137,-0.1283 },1 },{ "center",{ 0.08,-0.157135 },1 },{ "center",{ 0.0414111,-0.175261 },1 },{ "center",{ -1.39876e-008,-0.181443 },1 },{ "center",{ -0.041411,-0.175261 },1 },{ "center",{ -0.08,-0.157135 },1 },{ "center",{ -0.113137,-0.1283 },1 },{ "center",{ -0.138564,-0.0907216 },1 },{ "center",{ -0.154548,-0.046961 },1 },{ "center",{ -0.16,2.16369e-009 },1 },{ "center",{ -0.154548,0.046961 },1 },{ "center",{ -0.138564,0.0907216 },1 },{ "center",{ -0.113137,0.1283 },1 },{ "center",{ -0.08,0.157134 },1 },{ "center",{ -0.041411,0.175261 },1 },{ "center",{ 2.79753e-008,0.181443 },1 },{  },{ "Target",{ 0,-0.0793814 },1 },{ "Target",{ 0.07,0 },1 },{ "Target",{ 0,0.0793814 },1 },{ "Target",{ -0.07,0 },1 },{ "Target",{ 0,-0.0793814 },1 }};
						};
					};
					class Rockets
					{
						condition = "Rocket";
						class Circle
						{
							type = "line";
							points[] = {{ "WeaponAim",{ 0,-0.136082 },1 },{ "WeaponAim",{ 0.06,-0.118392 },1 },{ "WeaponAim",{ 0.1044,-0.0680412 },1 },{ "WeaponAim",{ 0.12,0 },1 },{ "WeaponAim",{ 0.1044,0.0680412 },1 },{ "WeaponAim",{ 0.06,0.118392 },1 },{ "WeaponAim",{ 0,0.136082 },1 },{ "WeaponAim",{ -0.06,0.118392 },1 },{ "WeaponAim",{ -0.1044,0.0680412 },1 },{ "WeaponAim",{ -0.12,0 },1 },{ "WeaponAim",{ -0.1044,-0.0680412 },1 },{ "WeaponAim",{ -0.06,-0.118392 },1 },{ "WeaponAim",{ 0,-0.136082 },1 },{  }};
						};
					};
					class SpeedNumber
					{
						type = "text";
						align = "center";
						scale = 1;
						source = "speed";
						sourceScale = 3.6;
						pos[] = {{ 0.138,0.198454 },1};
						right[] = {{ 0.218,0.198454 },1};
						down[] = {{ 0.138,0.255155 },1};
					};
					class AltNumber: SpeedNumber
					{
						source = "altitudeASL";
						sourceScale = 1;
						pos[] = {{ 0.831,0.198454 },1};
						right[] = {{ 0.911,0.198454 },1};
						down[] = {{ 0.831,0.255155 },1};
					};
					class AltNumberAGL
					{
						class text
						{
							type = "text";
							source = "static";
							text = "H";
							align = "right";
							scale = 0.5;
							sourceScale = 1;
							pos[] = {{ 0.75,0.385567 },1};
							right[] = {{ 0.83,0.385567 },1};
							down[] = {{ 0.75,0.442268 },1};
						};
						class BOX
						{
							type = "line";
							points[] = {{ { 0.8,0.442268 },1 },{ { 0.98,0.442268 },1 },{ { 0.98,0.385567 },1 },{ { 0.8,0.385567 },1 },{ { 0.8,0.442268 },1 }};
						};
						class AltNumber: SpeedNumber
						{
							source = "altitudeAGL";
							sourceScale = 1;
							align = "right";
							pos[] = {{ 0.87,0.385567 },1};
							right[] = {{ 0.95,0.385567 },1};
							down[] = {{ 0.87,0.442268 },1};
						};
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
							pos[] = {{ 0.84,0.884536 },1};
							right[] = {{ 0.9,0.884536 },1};
							down[] = {{ 0.84,0.924227 },1};
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
							pos[] = {{ 0.84,0.935567 },1};
							right[] = {{ 0.9,0.935567 },1};
							down[] = {{ 0.84,0.975258 },1};
						};
					};
					class weapons
					{
						type = "text";
						source = "weapon";
						align = "right";
						scale = 0.5;
						sourceScale = 1;
						pos[] = {{ 0.1,0.884536 },1};
						right[] = {{ 0.16,0.884536 },1};
						down[] = {{ 0.1,0.924227 },1};
					};
					class ammo
					{
						type = "text";
						source = "ammo";
						align = "right";
						scale = 0.5;
						sourceScale = 1;
						pos[] = {{ 0.1,0.935567 },1};
						right[] = {{ 0.16,0.935567 },1};
						down[] = {{ 0.1,0.975258 },1};
					};
					class HeadingScale
					{
						type = "scale";
						scale = 1;
						source = "Heading";
						sourceScale = 0.1;
						align = "center";
						pos[] = {0.2,0.0170103};
						right[] = {0.26,0.0170103};
						down[] = {0.2,0.0737113};
						lineXleft = 0.0880412;
						lineYright = 0.076701;
						lineXleftMajor = 0.0880412;
						lineYrightMajor = 0.0653608;
						bottom = 0.8;
						center = 0.5;
						top = 0.2;
						step = 0.2;
						StepSize = 0.03;
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
								points[] = {{ "ILS_W",{ -0.24,0 },1 },{ "ILS_W",{ 0.24,0 },1 },{  },{ "ILS_W",{ 0,0.0272165 },1 },{ "ILS_W",{ 0,-0.0272165 },1 },{  },{ "ILS_W",{ 0.12,0.0272165 },1 },{ "ILS_W",{ 0.12,-0.0272165 },1 },{  },{ "ILS_W",{ 0.24,0.0272165 },1 },{ "ILS_W",{ 0.24,-0.0272165 },1 },{  },{ "ILS_W",{ -0.12,0.0272165 },1 },{ "ILS_W",{ -0.12,-0.0272165 },1 },{  },{ "ILS_W",{ -0.24,0.0272165 },1 },{ "ILS_W",{ -0.24,-0.0272165 },1 },{  },{ "ILS_H",{ 0,-0.272165 },1 },{ "ILS_H",{ 0,0.272165 },1 },{  },{ "ILS_H",{ 0.024,0 },1 },{ "ILS_H",{ -0.024,0 },1 },{  },{ "ILS_H",{ 0.024,0.136082 },1 },{ "ILS_H",{ -0.024,0.136082 },1 },{  },{ "ILS_H",{ 0.024,0.272165 },1 },{ "ILS_H",{ -0.024,0.272165 },1 },{  },{ "ILS_H",{ 0.024,-0.136082 },1 },{ "ILS_H",{ -0.024,-0.136082 },1 },{  },{ "ILS_H",{ 0.024,-0.272165 },1 },{ "ILS_H",{ -0.024,-0.272165 },1 }};
							};
						};
					};
				};
			};
		};
	};
	class L159_ACR: L159_base
	{
		scope = 2;
		side = 1;
		faction = "BIS_CZ";
		crew = "CZ_Soldier_Pilot_EP1";
		typicalCargo[] = {"CZ_Soldier_Pilot_EP1"};
	};
	class PlaneWreck;
	class l39Wreck: PlaneWreck
	{
		scope = 1;
		class Armory
		{
			disabled = 1;
		};
		model = "\ca\l39\l39Wreck.p3d";
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

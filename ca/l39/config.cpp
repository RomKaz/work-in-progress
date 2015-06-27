////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:10:41 2014 : Source 'file' date Fri Oct 31 06:10:41 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class l39 : config.bin{
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		L39_pilot_EP1 = "L39_pilot_EP1";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class L39_pilot_EP1: Crew
		{
			file = "\ca\L39\Data\Anim\L139_pilot01.rtm";
			connectTo[] = {"KIA_L39_pilot_EP1",1};
			speed = 1e+010;
			leaning = "crewShake_half";
		};
		class KIA_L39_pilot_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\L39\Data\Anim\KIA_L139.rtm";
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
		L39_pilot_EP1 = "";
	};
};
class CfgPatches
{
	class CA_L39
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.04;
		requiredAddons[] = {"CAAir_E"};
	};
};
class CfgMagazines
{
	class VehicleMagazine;
	class 520Rnd_23mm_GSh23L;
	class 150Rnd_23mm_GSh23L: 520Rnd_23mm_GSh23L
	{
		count = 150;
	};
};
class CfgWeapons
{
	class M168;
	class GSh23L;
	class GSh23L_L39: GSh23L
	{
		magazines[] = {"150Rnd_23mm_GSh23L"};
	};
};
class CfgVehicles
{
	class Air;
	class Plane: Air
	{
		class NewTurret;
		class ViewPilot;
	};
	class L39_base: Plane
	{
		destrType = "DestructWreck";
		model = "\ca\L39\L39.p3d";
		displayName = "$STR_EP1_DN_L39_base";
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_L39_base_Library";
		};
		weapons[] = {"GSh23L_L39","57mmLauncher"};
		magazines[] = {"150Rnd_23mm_GSh23L","64Rnd_57mm"};
		radarType = 4;
		soundGetIn[] = {"ca\sounds\Air\AV8\ext\ext-jetair-cabine-close1",0.056234132,1};
		soundGetOut[] = {"ca\sounds\Air\AV8\ext\ext-jetair-cabine-open1",0.056234132,1,40};
		soundDammage[] = {"ca\sounds\Air\AV8\int\alarm_loop1",0.56234133,1};
		soundEngineOnInt[] = {"ca\sounds\Air\AV8\int\int-av8b-start-1",0.31622776,1.0};
		soundEngineOnExt[] = {"ca\sounds\Air\AV8\ext\ext-jetair-start1",0.56234133,1.0,500};
		soundEngineOffInt[] = {"ca\sounds\Air\AV8\int\int-av8b-stop-1",0.31622776,1.0};
		soundEngineOffExt[] = {"ca\sounds\Air\AV8\ext\ext-jetair-stop1",0.56234133,1.0,500};
		class Sounds
		{
			class EngineLowOut
			{
				sound[] = {"ca\sounds\Air\AV8\ext\ext-jetair-engine-low2",2.5118864,1.3,1400};
				frequency = "1.0 min (rpm + 0.5)";
				volume = "engineOn*camPos*(rpm factor[0.85, 0])";
			};
			class EngineHighOut
			{
				sound[] = {"ca\sounds\Air\AV8\ext\ext-jetair-engine-high2",2.5118864,1.3,1800};
				frequency = "1";
				volume = "engineOn*camPos*(rpm factor[0.55, 1.0])";
			};
			class ForsageOut
			{
				sound[] = {"ca\sounds\Air\AV8\ext\ext-jetair-forsage1",1.7782794,0.8,2000};
				frequency = "1";
				volume = "engineOn*camPos*(thrust factor[0.5, 1.0])";
				cone[] = {3.0,3.92,1.9,0.5};
			};
			class WindNoiseOut
			{
				sound[] = {"ca\sounds\Air\AV8\ext\ext-jetair-wind1",0.56234133,1.0,150};
				frequency = "(0.1+(1.2*(speed factor[1, 150])))";
				volume = "camPos*(speed factor[1, 150])";
			};
			class EngineLowIn
			{
				sound[] = {"ca\sounds\Air\AV8\int\int-av8b-engine-low",1.0,1.3};
				frequency = "1.0 min (rpm + 0.5)";
				volume = "(1-camPos)*(engineOn*(rpm factor[0.85, 0]))";
			};
			class EngineHighIn
			{
				sound[] = {"ca\sounds\Air\AV8\int\int-av8b-engine",1.0,1.3};
				frequency = "1";
				volume = "(1-camPos)*(engineOn*(rpm factor[0.55, 1.0]))";
			};
			class ForsageIn
			{
				sound[] = {"ca\sounds\Air\AV8\int\int-av8b-forsage-1",0.31622776,1.0};
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
		driverAction = "L39_pilot_EP1";
		accuracy = 0.2;
		landingSpeed = 166;
		acceleration = 250;
		maxSpeed = 750;
		side = 0;
		armor = 60;
		damageResistance = 0.004;
		armorStructured = 1;
		irScanRangeMin = 100;
		irScanRangeMax = 3000;
		irScanToEyeFactor = 2;
		aileronSensitivity = 1;
		elevatorSensitivity = 0.8;
		envelope[] = {0.0,0.1,0.95,2.7,4.5,5.65,6.0,5.85,5.5,4.8,3.6,1.8,0};
		landingAoa = "rad 10";
		laserScanner = 1;
		gunAimDown = 0.045;
		memoryPointLRocket = "L raketa";
		memoryPointRRocket = "P raketa";
		flapsFrictionCoef = 0.32;
		minFireTime = 30;
		threat[] = {1,1,1};
		icon = "ca\l39\Data\ui\icon_l39_ca.paa";
		mapSize = 20;
		picture = "ca\l39\Data\ui\picture_l39_ca.paa";
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
			mat[] = {"ca\l39\Data\l-39_body.rvmat","ca\l39\Data\l-39_body_damage.rvmat","ca\l39\Data\l-39_body_destruct.rvmat","ca\l39\Data\l-39_body_1.rvmat","ca\l39\Data\l-39_body_1_damage.rvmat","ca\l39\Data\l-39_body_1_destruct.rvmat","ca\l39\Data\l-39_glass.rvmat","ca\l39\Data\l-39_glass_damage.rvmat","ca\l39\Data\l-39_glass_destruct.rvmat","ca\l39\Data\l-39_glass_in.rvmat","ca\l39\Data\l-39_glass_damage.rvmat","ca\l39\Data\l-39_glass_destruct.rvmat"};
		};
		class MFD
		{
			class AirplaneHUD
			{
				enableParallax = 1;
				class Pos10Vector
				{
					type = "vector";
					pos0[] = {0.5,-0.25};
					pos10[] = {2.7,1.95};
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
					class ILS_H
					{
						type = "ils";
						pos0[] = {0.5,0.42};
						pos3[] = {1.16,"(0.42)"};
					};
					class ILS_W: ILS_H
					{
						pos3[] = {0.5,1.08};
					};
					class PlaneW
					{
						type = "fixed";
						pos[] = {0.5,0.42};
					};
					class HorizonBankMGun
					{
						type = "rotational";
						source = "HorizonBank";
						center[] = {0,0};
						min = -6.28319;
						max = 6.28319;
						minAngle = -360;
						maxAngle = 360;
						aspectRatio = 1;
					};
					class HorizonBankReverted
					{
						type = "rotational";
						source = "HorizonBank";
						center[] = {0,0};
						min = "-3.14159265*2";
						max = "3.14159265*2";
						minAngle = 360;
						maxAngle = -360;
						aspectRatio = 1;
					};
					class HorizonDive
					{
						source = "horizonDive";
						type = "linear";
						min = -1;
						max = 1;
						minPos[] = {0.0,0.92};
						maxPos[] = {0.0,-0.08};
					};
					class WeaponAim: Pos10Vector
					{
						source = "weapon";
					};
					class Target: Pos10Vector
					{
						source = "target";
					};
					class VelocityNotCenter: Pos10Vector
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0.0,0.0};
						pos10[] = {2.2,2.2};
					};
					class SpdMove2
					{
						source = "speed";
						min = 0;
						max = 200;
						type = "linear";
						minPos[] = {0.0,0.0};
						maxPos[] = {0.0,1.0};
					};
					class ASLMove1
					{
						type = "linear";
						source = "altitudeASL";
						min = 0;
						max = 500;
						minPos[] = {0.0,0.1};
						maxPos[] = {0.0,0.8};
					};
					class Heading
					{
						type = "linear";
						source = "Heading";
						min = -36;
						max = 36;
						minPos[] = {0.0,0.0};
						maxPos[] = {1.0,0.0};
					};
				};
				class Draw
				{
					alpha = 0.6;
					color[] = {0.0,0.3,0.05};
					condition = "on";
					class Static
					{
						clipTL[] = {0.0,0.1};
						clipBR[] = {1.0,0.0};
						type = "line";
						points[] = {{ "PlaneW",{ -0.21,9.17939e-009 },1 },{ "PlaneW",{ -0.28,1.22392e-008 },1 },{  },{ "PlaneW",{ 0.21,-2.50423e-009 },1 },{ "PlaneW",{ 0.28,-3.33897e-009 },1 },{  },{ "PlaneW",{ -0.105,0.181865 },1 },{ "PlaneW",{ -0.14,0.242487 },1 },{  },{ "PlaneW",{ 0.105,0.181865 },1 },{ "PlaneW",{ 0.14,0.242487 },1 },{  },{ "PlaneW",{ -0.181865,0.105 },1 },{ "PlaneW",{ -0.242487,0.14 },1 },{  },{ "PlaneW",{ 0.181865,0.105 },1 },{ "PlaneW",{ 0.242487,0.14 },1 },{  },{ "PlaneW",{ -0.202844,0.054352 },1 },{ "PlaneW",{ -0.270459,0.0724693 },1 },{  },{ "PlaneW",{ 0.202844,0.054352 },1 },{ "PlaneW",{ 0.270459,0.0724693 },1 },{  },{ "PlaneW",{ -0.209201,0.0183027 },1 },{ "PlaneW",{ -0.244068,0.0213532 },1 },{  },{ "PlaneW",{ -0.20681,0.0364661 },1 },{ "PlaneW",{ -0.241278,0.0425438 },1 },{  },{ "PlaneW",{ 0.20681,0.0364661 },1 },{ "PlaneW",{ 0.241278,0.0425438 },1 },{  },{ "PlaneW",{ 0.209201,0.0183027 },1 },{ "PlaneW",{ 0.244068,0.0213531 },1 },{  }};
					};
					class HorizonBank
					{
						clipTL[] = {0.0,0.1};
						clipBR[] = {1.0,0.9};
						type = "line";
						points[] = {{ "PlaneW",1,"HorizonBankReverted",{ 0.21,0.0 },1 },{ "PlaneW",1,"HorizonBankReverted",{ 0.07,0.0 },1 },{  },{ "PlaneW",1,"HorizonBankReverted",{ -0.21,0.0 },1 },{ "PlaneW",1,"HorizonBankReverted",{ -0.07,0.0 },1 },{  },{ "PlaneW",1,"HorizonBankReverted",{ 0.0,0.14 },1 },{ "PlaneW",1,"HorizonBankReverted",{ 0.0,0.07 },1 }};
					};
					class HorizonDive
					{
						clipTL[] = {0.0,0.1};
						clipBR[] = {1.0,0.0};
						type = "line";
						points[] = {{ "HorizonDive",{ 0.8,0 },1 },{ "HorizonDive",{ 0.2,0 },1 }};
					};
					class Missile
					{
						condition = "missile";
						class Target
						{
							type = "line";
							points[] = {{ "Target",{ 0,-0.1 },1 },{ "Target",{ 0.05,-0.087 },1 },{ "Target",{ 0.087,"-0.50*(0.10)*((2.2/2.2))" },1 },{ "Target",{ "+(0.10)",0 },1 },{ "Target",{ 0.087,0.05 },1 },{ "Target",{ 0.05,"+0.87*(0.10)*((2.2/2.2))" },1 },{ "Target",{ 0,0.1 },1 },{ "Target",{ -0.05,0.087 },1 },{ "Target",{ -0.087,"+0.50*(0.10)*((2.2/2.2))" },1 },{ "Target",{ "-(0.10)",0 },1 },{ "Target",{ -0.087,-0.05 },1 },{ "Target",{ -0.05,"-0.87*(0.10)*((2.2/2.2))" },1 },{ "Target",{ 0,-0.1 },1 }};
						};
					};
					class Cros
					{
						condition = "on";
						class Cros
						{
							type = "line";
							points[] = {{ "WeaponAim",{ 0.05,0 },1 },{ "WeaponAim",{ 0.015,0 },1 },{  },{ "WeaponAim",{ 0,0.05 },1 },{ "WeaponAim",{ 0,0.015 },1 },{  },{ "WeaponAim",{ -0.05,0 },1 },{ "WeaponAim",{ -0.015,0 },1 },{  },{ "WeaponAim",{ 0,-0.05 },1 },{ "WeaponAim",{ 0,-0.015 },1 }};
						};
					};
					class SpeedNumber
					{
						type = "text";
						align = "right";
						scale = 1;
						source = "speed";
						sourceScale = 3.6;
						pos[] = {{ 0.06,0.07 },1};
						right[] = {{ 0.14,0.07 },1};
						down[] = {{ 0.06,0.12 },1};
					};
					class AltNumber: SpeedNumber
					{
						source = "altitudeASL";
						sourceScale = 1;
						pos[] = {{ 0.86,0.07 },1};
						right[] = {{ 0.94,0.07 },1};
						down[] = {{ 0.86,0.12 },1};
					};
					class HeadingNumber: SpeedNumber
					{
						source = "HorizonDive";
						align = "right";
						sourceScale = 57.2958;
						pos[] = {"HorizonDive",{ 0.81,-0.05 },1};
						right[] = {"HorizonDive",{ 0.89,-0.05 },1};
						down[] = {"HorizonDive",{ 0.81,0.0 },1};
					};
					class MGun
					{
						condition = "mgun";
						class Lines
						{
							type = "line";
							points[] = {{ "VelocityNotCenter",0.001,"WeaponAim",1,"HorizonBankMGun",{ 0.2,0.0 },1 },{ "VelocityNotCenter",0.1,"WeaponAim",1,"HorizonBankMGun",{ 0.18,-0.01 },1 },{ "VelocityNotCenter",0.2,"WeaponAim",1,"HorizonBankMGun",{ 0.16,-0.03 },1 },{ "VelocityNotCenter",0.3,"WeaponAim",1,"HorizonBankMGun",{ 0.14,-0.06 },1 },{ "VelocityNotCenter",0.4,"WeaponAim",1,"HorizonBankMGun",{ 0.12,-0.1 },1 },{ "VelocityNotCenter",0.5,"WeaponAim",1,"HorizonBankMGun",{ 0.1,-0.15 },1 },{ "VelocityNotCenter",0.6,"WeaponAim",1,"HorizonBankMGun",{ 0.08,-0.21 },1 },{ "VelocityNotCenter",0.7,"WeaponAim",1,"HorizonBankMGun",{ 0.06,-0.28 },1 },{ "VelocityNotCenter",0.8,"WeaponAim",1,"HorizonBankMGun",{ 0.04,-0.4 },1 },{  },{ "VelocityNotCenter",0.001,"WeaponAim",1,"HorizonBankMGun",{ -0.2,0.0 },1 },{ "VelocityNotCenter",0.1,"WeaponAim",1,"HorizonBankMGun",{ -0.18,-0.01 },1 },{ "VelocityNotCenter",0.2,"WeaponAim",1,"HorizonBankMGun",{ -0.16,-0.03 },1 },{ "VelocityNotCenter",0.3,"WeaponAim",1,"HorizonBankMGun",{ -0.14,-0.06 },1 },{ "VelocityNotCenter",0.4,"WeaponAim",1,"HorizonBankMGun",{ -0.12,-0.1 },1 },{ "VelocityNotCenter",0.5,"WeaponAim",1,"HorizonBankMGun",{ -0.1,-0.15 },1 },{ "VelocityNotCenter",0.6,"WeaponAim",1,"HorizonBankMGun",{ -0.08,-0.21 },1 },{ "VelocityNotCenter",0.7,"WeaponAim",1,"HorizonBankMGun",{ -0.06,-0.28 },1 },{ "VelocityNotCenter",0.8,"WeaponAim",1,"HorizonBankMGun",{ -0.04,-0.4 },1 }};
						};
					};
					class weapons
					{
						type = "text";
						source = "weapon";
						align = "right";
						scale = 1;
						sourceScale = 1;
						pos[] = {{ 0.06,0.88 },1};
						right[] = {{ 0.12,0.88 },1};
						down[] = {{ 0.06,0.92 },1};
					};
					class ammo
					{
						type = "text";
						source = "ammo";
						align = "right";
						scale = 1;
						sourceScale = 1;
						pos[] = {{ 0.06,0.93 },1};
						right[] = {{ 0.12,0.93 },1};
						down[] = {{ 0.06,0.97 },1};
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
								points[] = {{ "ILS_W",{ -0.4,0 },1 },{ "ILS_W",{ 0.4,0 },1 },{  },{ "ILS_W",{ 0,0.04 },1 },{ "ILS_W",{ 0,-0.04 },1 },{  },{ "ILS_W",{ 0.2,0.04 },1 },{ "ILS_W",{ 0.2,-0.04 },1 },{  },{ "ILS_W",{ 0.4,0.04 },1 },{ "ILS_W",{ 0.4,-0.04 },1 },{  },{ "ILS_W",{ -0.2,0.04 },1 },{ "ILS_W",{ -0.2,-0.04 },1 },{  },{ "ILS_W",{ -0.4,0.04 },1 },{ "ILS_W",{ -0.4,-0.04 },1 },{  },{ "ILS_H",{ 0,-0.4 },1 },{ "ILS_H",{ 0,0.4 },1 },{  },{ "ILS_H",{ 0.04,0 },1 },{ "ILS_H",{ -0.04,0 },1 },{  },{ "ILS_H",{ 0.04,0.2 },1 },{ "ILS_H",{ -0.04,0.2 },1 },{  },{ "ILS_H",{ 0.04,0.4 },1 },{ "ILS_H",{ -0.04,0.4 },1 },{  },{ "ILS_H",{ 0.04,-0.2 },1 },{ "ILS_H",{ -0.04,-0.2 },1 },{  },{ "ILS_H",{ 0.04,-0.4 },1 },{ "ILS_H",{ -0.04,-0.4 },1 },{  }};
							};
						};
					};
				};
			};
		};
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
	class L39_TK_EP1: L39_base
	{
		scope = 2;
		side = 0;
		faction = "BIS_TK";
		crew = "TK_Soldier_Pilot_EP1";
		typicalCargo[] = {"TK_Soldier_Pilot_EP1"};
	};
};
//};

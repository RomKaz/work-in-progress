////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:00:43 2014 : Source 'file' date Fri Oct 31 06:00:43 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class air2 : su25\config.bin{
class CfgPatches
{
	class CA_AIR2_Su25
	{
		units[] = {};
		weapons = "{}";
		requiredVersion = 1.02;
		requiredAddons[] = {"CACharacters","CAWeapons","CA_Anims_Char","CAAir"};
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
	class Su25_base: Plane
	{
		destrType = "DestructWreck";
		model = "\ca\air2\su25\su25";
		displayName = "$STR_DN_SU25";
		class Library
		{
			libTextDesc = "$STR_LIB_SU25_CDF";
		};
		weapons[] = {"GSh301","AirBombLauncher","R73Launcher_2","S8Launcher"};
		magazines[] = {"180Rnd_30mm_GSh301","4Rnd_FAB_250","2Rnd_R73","80Rnd_S8T"};
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
				sound[] = {"ca\sounds\Air\AV8\ext\ext-jetair-engine-low2",2.5118864,1.0,1200};
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
				sound[] = {"ca\sounds\Air\AV8\int\int-av8b-engine-low",1.0,1.0};
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
		driverAction = "SU25_Pilot";
		accuracy = 0.2;
		landingSpeed = 220;
		acceleration = 250;
		maxSpeed = 900;
		side = 0;
		armor = 75;
		damageResistance = 0.00485;
		armorStructured = 1;
		irScanRangeMin = 100;
		irScanRangeMax = 10000;
		irScanToEyeFactor = 3;
		aileronSensitivity = 0.9;
		elevatorSensitivity = 0.8;
		envelope[] = {0.0,0.1,0.65,2.2,3.7,5.3,6.0,5.5,5.6,4.8,3.6,1.8,0};
		landingAoa = "rad 10";
		laserScanner = 1;
		gunAimDown = 0.045;
		memoryPointLRocket = "L raketa";
		memoryPointRRocket = "P raketa";
		flapsFrictionCoef = 0.32;
		minFireTime = 30;
		threat[] = {1,1,1};
		icon = "\ca\air2\su25\data\icomap_su25.paa";
		mapSize = 20;
		picture = "\ca\air2\su25\data\su25.paa";
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
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\Ca\air2\Su25\data\su25_body1_rus_co.paa","\Ca\air2\Su25\data\su25_body2_rus_co.paa"};
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\air2\Su25\data\su25_glass.rvmat","ca\air2\Su25\data\su25_glass_damage.rvmat","ca\air2\Su25\data\su25_glass_damage.rvmat","ca\air2\Su25\data\su25_glass_in.rvmat","ca\air2\Su25\data\su25_glass_in_damage.rvmat","ca\air2\Su25\data\su25_glass_in_damage.rvmat","ca\air2\Su25\data\su25_body1.rvmat","ca\air2\Su25\data\su25_body1_damage.rvmat","ca\air2\Su25\data\su25_body1_destruct.rvmat","ca\air2\Su25\data\su25_body2.rvmat","ca\air2\Su25\data\su25_body2_damage.rvmat","ca\air2\Su25\data\su25_body2_destruct.rvmat","ca\air2\Su25\data\su25_glass.rvmat","ca\air2\Su25\data\su25_glass_damage.rvmat","ca\air2\Su25\data\su25_glass_destruct.rvmat"};
		};
		class MFD
		{
			class AirplaneHUD
			{
				class Pos10Vector
				{
					type = "vector";
					pos0[] = {0.52,"0.03+0.06"};
					pos10[] = {2.02,1.29};
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
						pos0[] = {0.5,"0.5+0.06"};
						pos3[] = {0.95,"(0.5+0.06)"};
					};
					class ILS_W: ILS_H
					{
						pos3[] = {0.5,0.92};
					};
					class PlaneW
					{
						type = "fixed";
						pos[] = {0.5,"0.5+0.06"};
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
						aspectRatio = 0.8;
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
						aspectRatio = 0.8;
					};
					class HorizonDive
					{
						source = "horizonDive";
						type = "linear";
						min = -1;
						max = 1;
						minPos[] = {0.0,1.06};
						maxPos[] = {0.0,0.06};
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
						pos10[] = {1.5,1.2};
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
						points[] = {{ "PlaneW",{ -0.21,7.34351e-009 },1 },{ "PlaneW",{ -0.28,9.79135e-009 },1 },{  },{ "PlaneW",{ 0.21,-2.00338e-009 },1 },{ "PlaneW",{ 0.28,-2.67117e-009 },1 },{  },{ "PlaneW",{ -0.105,0.145492 },1 },{ "PlaneW",{ -0.14,0.19399 },1 },{  },{ "PlaneW",{ 0.105,0.145492 },1 },{ "PlaneW",{ 0.14,0.19399 },1 },{  },{ "PlaneW",{ -0.181865,0.084 },1 },{ "PlaneW",{ -0.242487,0.112 },1 },{  },{ "PlaneW",{ 0.181865,0.084 },1 },{ "PlaneW",{ 0.242487,0.112 },1 },{  },{ "PlaneW",{ -0.202844,0.0434816 },1 },{ "PlaneW",{ -0.270459,0.0579755 },1 },{  },{ "PlaneW",{ 0.202844,0.0434816 },1 },{ "PlaneW",{ 0.270459,0.0579755 },1 },{  },{ "PlaneW",{ -0.209201,0.0146422 },1 },{ "PlaneW",{ -0.244068,0.0170825 },1 },{  },{ "PlaneW",{ -0.20681,0.0291729 },1 },{ "PlaneW",{ -0.241278,0.034035 },1 },{  },{ "PlaneW",{ 0.20681,0.0291729 },1 },{ "PlaneW",{ 0.241278,0.034035 },1 },{  },{ "PlaneW",{ 0.209201,0.0146422 },1 },{ "PlaneW",{ 0.244068,0.0170825 },1 },{  }};
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
							points[] = {{ "Target",{ 0,-0.08 },1 },{ "Target",{ 0.05,-0.0696 },1 },{ "Target",{ 0.087,"-0.50*(0.10)*((1.2/1.5))" },1 },{ "Target",{ "+(0.10)",0 },1 },{ "Target",{ 0.087,0.04 },1 },{ "Target",{ 0.05,"+0.87*(0.10)*((1.2/1.5))" },1 },{ "Target",{ 0,0.08 },1 },{ "Target",{ -0.05,0.0696 },1 },{ "Target",{ -0.087,"+0.50*(0.10)*((1.2/1.5))" },1 },{ "Target",{ "-(0.10)",0 },1 },{ "Target",{ -0.087,-0.04 },1 },{ "Target",{ -0.05,"-0.87*(0.10)*((1.2/1.5))" },1 },{ "Target",{ 0,-0.08 },1 }};
						};
					};
					class Cros
					{
						condition = "on";
						class Cros
						{
							type = "line";
							points[] = {{ "WeaponAim",{ 0.05,0 },1 },{ "WeaponAim",{ 0.015,0 },1 },{  },{ "WeaponAim",{ 0,0.04 },1 },{ "WeaponAim",{ 0,0.012 },1 },{  },{ "WeaponAim",{ -0.05,0 },1 },{ "WeaponAim",{ -0.015,0 },1 },{  },{ "WeaponAim",{ 0,-0.04 },1 },{ "WeaponAim",{ 0,-0.012 },1 }};
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
		HeadAimDown = 4;
	};
};
//};

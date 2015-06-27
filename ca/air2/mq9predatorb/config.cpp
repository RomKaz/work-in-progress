////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:00:43 2014 : Source 'file' date Fri Oct 31 06:00:43 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class air2 : mq9predatorb\config.bin{
class CfgPatches
{
	class CAAir2_MQ9PredatorB
	{
		units[] = {"MQ9PredatorB"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAAir2","CAUI"};
	};
};
class CfgVehicles
{
	class Plane;
	class UAV: Plane
	{
		class NewTurret;
		class ViewPilot;
	};
	class MQ9PredatorB: UAV
	{
		hasgunner = 1;
		ejectDamageLimit = 1;
		unitinfotype = "RscUnitInfoUAV";
		wreck = "MQ9PredatorWreck";
		scope = 0;
		side = 1;
		faction = "USMC";
		crew = "USMC_Soldier";
		typicalCargo[] = {"USMC_Soldier"};
		displayName = "$STR_DN_MQ9";
		vehicleClass = "Air";
		soundGetIn[] = {"",0.056234132,1};
		soundGetOut[] = {"",0.056234132,1};
		soundDammage[] = {"",0.56234133,1};
		soundEngineOnInt[] = {"CA\SOUNDS\Air\MQ9\ext\mq9_start",0.1,1.0};
		soundEngineOnExt[] = {"CA\SOUNDS\Air\MQ9\ext\mq9_start",0.1,1.0,700};
		soundEngineOffInt[] = {"CA\SOUNDS\Air\MQ9\ext\mq9_stop",0.1,1.0};
		soundEngineOffExt[] = {"CA\SOUNDS\Air\MQ9\ext\mq9_stop",0.1,1.0,700};
		class Sounds
		{
			class EngineLowOut
			{
				sound[] = {"ca\sounds\Air\MQ9\ext\mq9_engine_low",0.56234133,1.0,800};
				frequency = "rpm";
				volume = "engineOn*(rpm factor[0.85, 0.4])";
			};
			class EngineHighOut
			{
				sound[] = {"ca\sounds\Air\MQ9\ext\mq9_engine_hi",0.56234133,1.1,1200};
				frequency = "rpm";
				volume = "engineOn*(rpm factor[0.55, 1.0])";
			};
			class WindNoiseOut
			{
				sound[] = {"ca\sounds\Air\MQ9\ext\ext-jetair-wind1",0.56234133,1.6,150};
				frequency = "(0.1+(1.2*(speed factor[1, 150])))";
				volume = "(speed factor[1, 150])";
			};
		};
		class Library
		{
			libTextDesc = "$STR_LIB_MQ9";
		};
		model = "\ca\air2\MQ9PredatorB\MQ9PredatorB.p3d";
		picture = "\ca\air2\data\UI\picture_MQ9PredatorB_CA.paa";
		icon = "\ca\air2\data\UI\icon_MQ9PredatorB_CA.paa";
		mapSize = 18.5;
		armor = 10;
		damageResistance = 0.00676;
		extCameraPosition[] = {0,2,-30};
		accuracy = 1.0;
		cost = 200000;
		maxSpeed = 482;
		fuelCapacity = 3600;
		class Reflectors{};
		driverAction = "ManActTestDriver";
		cargoAction[] = {};
		transportSoldier = 0;
		laserScanner = "true";
		threat[] = {0.5,1,0.1};
		aileronSensitivity = 0.5;
		elevatorSensitivity = 0.3;
		noseDownCoef = 0.025;
		landingAoa = "rad 7";
		gearRetracting = 1;
		ejectSpeed[] = {0,0,0};
		envelope[] = {0.0,0.0,0.3,1.0,2.5,3.3,3.5,3.2,2.5,2.0,1.5,1.0};
		landingSpeed = 160;
		wheelSteeringSensitivity = 0.5;
		animated = 1;
		gearAnimations[] = {};
		driverForceOptics = 1;
		memoryPointDriverOptics = "pilotview";
		driverOpticsModel = "";
		class ViewPilot
		{
			initFov = 0.8;
			minFov = 0.3;
			maxFov = 1;
			initAngleX = 0;
			minAngleX = 0;
			maxAngleX = 0;
			initAngleY = 0;
			minAngleY = 0;
			maxAngleY = 0;
		};
		class Viewoptics
		{
			initFov = 0.85;
			minFov = 0.95;
			maxFov = 0.35;
			initAngleX = 0;
			minAngleX = 0;
			maxAngleX = 0;
			initAngleY = 0;
			minAngleY = 0;
			maxAngleY = 0;
		};
		class Turrets
		{
			class MainTurret: NewTurret
			{
				minElev = -90;
				maxElev = 38.2;
				initElev = -45;
				minTurn = -180;
				maxTurn = 180;
				initTurn = 0;
				maxHorizontalRotSpeed = 100;
				maxVerticalRotSpeed = 100;
				startEngine = 0;
				body = "mainturret";
				gun = "maingun";
				animationSourceBody = "mainturret";
				animationSourceGun = "maingun";
				class Viewoptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					minFov = "0.20   /100";
					initFov = "0.20";
					maxFov = "0.20";
				};
				soundServo[] = {"",0.01,1.0};
				outGunnerMayFire = 1;
				commanding = -1;
				gunBeg = "laser_start";
				gunEnd = "laser_end";
				memoryPointGunnerOptics = "gunnerview";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				gunnerOpticsModel = "\ca\weapons\2Dscope_UAV.p3d";
				gunnerForceOptics = 1;
				weapons[] = {"Laserdesignator_mounted","HellfireLauncher"};
				magazines[] = {"Laserbatteries","8Rnd_Hellfire"};
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\air2\mq9predatorb\data\mq9predatorb.rvmat","ca\air2\mq9predatorb\data\mq9predatorb_damage.rvmat","ca\air2\mq9predatorb\data\mq9predatorb_destruct.rvmat","ca\air2\mq9predatorb\data\mq9predatorb_gearbox.rvmat","ca\air2\mq9predatorb\data\mq9predatorb_gearbox_damage.rvmat","ca\air2\mq9predatorb\data\mq9predatorb_gearbox_destruct.rvmat"};
		};
	};
};
//};

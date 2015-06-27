////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:06:22 2014 : Source 'file' date Fri Oct 31 06:06:22 2014
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

//Class tracked : config.bin{
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		Abrams_Commander = "Abrams_Commander";
		Abrams_CommanderOUT = "Abrams_CommanderOUT";
		Abrams_Driver = "Abrams_Driver";
		Abrams_DriverOUT = "Abrams_DriverOUT";
		Abrams_Gunner = "Abrams_Gunner";
		BMP2_Commander = "BMP2_Commander";
		BMP2_CommanderOUT = "BMP2_CommanderOUT";
		BMP2_Driver = "BMP2_Driver";
		BMP2_DriverOUT = "BMP2_DriverOUT";
		BMP2_Gunner = "BMP2_Gunner";
		BMP2_GunnerOUT = "BMP2_GunnerOUT";
		BMP2_Cargo04 = "BMP2_Cargo04";
		M113_Driver = "M113_Driver";
		M113_DriverOut = "M113_DriverOut";
		M113_Gunner = "M113_Gunner";
		M113_Cargo01 = "M113_Cargo01";
		M113_Cargo02 = "M113_Cargo02";
		M163_Gunner = "M163_Gunner";
		M163_GunnerOut = "M163_GunnerOut";
		T72_Commander = "T72_Commander";
		T72_CommanderOUT = "T72_CommanderOUT";
		T72_Driver = "T72_Driver";
		T72_DriverOUT = "T72_DriverOUT";
		T72_Gunner = "T72_Gunner";
		T72_GunnerOut = "T72_GunnerOut";
		ZSU_Commander = "ZSU_Commander";
		ZSU_CommanderOUT = "ZSU_CommanderOUT";
		ZSU_Gunner = "ZSU_Gunner";
		ZSU_GunnerOut = "ZSU_GunnerOut";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class KIA_Abrams_Commander: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\tracked\Data\Anim\KIA_Abrams_Commander.rtm";
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
			speed = 0.5;
			looped = 0;
		};
		class Abrams_Commander: Crew
		{
			file = "\ca\tracked\Data\Anim\Abrams_Commander.rtm";
			interpolateTo[] = {"KIA_Abrams_Commander",1};
		};
		class Abrams_CommanderOut: Abrams_Commander
		{
			file = "\ca\tracked\Data\Anim\Abrams_CommanderOut.rtm";
			interpolateTo[] = {"KIA_Abrams_Commander",1};
		};
		class KIA_Abrams_Driver: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\tracked\Data\Anim\KIA_Abrams_Driver.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class Abrams_Driver: Crew
		{
			file = "\ca\tracked\Data\Anim\Abrams_Driver.rtm";
			interpolateTo[] = {"KIA_Abrams_Driver",1};
		};
		class Abrams_DriverOut: Abrams_Driver
		{
			file = "\ca\tracked\Data\Anim\Abrams_DriverOut.rtm";
			interpolateTo[] = {"KIA_Abrams_Driver",1};
		};
		class KIA_Abrams_Gunner: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\tracked\Data\Anim\KIA_Abrams_Commander.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class Abrams_Gunner: Crew
		{
			file = "\ca\tracked\Data\Anim\Abrams_Commander.rtm";
			interpolateTo[] = {"KIA_Abrams_Gunner",1};
		};
		class KIA_BMP2_Commander: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\tracked\Data\Anim\KIA_BMP2_Commander.rtm";
			connectTo[] = {"DeadState",0.1};
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
		};
		class BMP2_Commander: Crew
		{
			file = "\ca\tracked\Data\Anim\BMP2_Commander.rtm";
			interpolateTo[] = {"KIA_BMP2_Commander",1};
		};
		class BMP2_CommanderOut: BMP2_Commander
		{
			file = "\ca\tracked\Data\Anim\BMP2_CommanderOut.rtm";
		};
		class KIA_BMP2_Driver: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\tracked\Data\Anim\KIA_BMP2_Driver.rtm";
			connectTo[] = {"DeadState",0.1};
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
		};
		class BMP2_Driver: Crew
		{
			file = "\ca\tracked\Data\Anim\BMP2_Driver.rtm";
			interpolateTo[] = {"KIA_BMP2_Driver",1};
		};
		class BMP2_DriverOut: BMP2_Driver
		{
			file = "\ca\tracked\Data\Anim\BMP2_DriverOut.rtm";
		};
		class KIA_BMP2_Gunner: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\tracked\Data\Anim\KIA_BMP2_Gunner.rtm";
			connectTo[] = {"DeadState",0.1};
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
		};
		class BMP2_Gunner: Crew
		{
			file = "\ca\tracked\Data\Anim\BMP2_Gunner.rtm";
			interpolateTo[] = {"KIA_BMP2_Gunner",1};
		};
		class BMP2_GunnerOut: BMP2_Gunner
		{
			file = "\ca\tracked\Data\Anim\BMP2_GunnerOut.rtm";
		};
		class KIA_BMP2_Cargo04: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\tracked\Data\Anim\KIA_BMP2_Cargo.rtm";
			connectTo[] = {"DeadState",0.1};
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
		};
		class BMP2_Cargo04: Crew
		{
			file = "\ca\tracked\Data\Anim\BMP2_Cargo04.rtm";
			interpolateTo[] = {"KIA_BMP2_Cargo04",1};
		};
		class KIA_M113_Driver: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\tracked\Data\Anim\KIA_M113_Driver.rtm";
			connectTo[] = {"DeadState",0.1};
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
		};
		class M113_Driver: Crew
		{
			file = "\ca\tracked\Data\Anim\M113_Driver.rtm";
			interpolateTo[] = {"KIA_M113_Driver",1};
		};
		class KIA_M113_DriverOut: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\tracked\Data\Anim\KIA_M113_DriverOut.rtm";
			connectTo[] = {"DeadState",0.1};
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
		};
		class M113_DriverOut: Crew
		{
			file = "\ca\tracked\Data\Anim\M113_DriverOut.rtm";
			interpolateTo[] = {"KIA_M113_DriverOut",1};
		};
		class KIA_M113_Gunner: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\tracked\Data\Anim\KIA_M113_Gunner.rtm";
			connectTo[] = {"DeadState",0.1};
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
		};
		class M113_Gunner: Crew
		{
			file = "\ca\tracked\Data\Anim\M113_Gunner.rtm";
			interpolateTo[] = {"KIA_M113_Gunner",1};
		};
		class KIA_M113_Cargo01: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\tracked\Data\Anim\KIA_M113_Cargo01.rtm";
			connectTo[] = {"DeadState",0.1};
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
		};
		class M113_Cargo01: Crew
		{
			file = "\ca\tracked\Data\Anim\M113_Cargo01.rtm";
			interpolateTo[] = {"KIA_M113_Cargo01",1};
		};
		class KIA_M113_Cargo02: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\tracked\Data\Anim\KIA_M113_Cargo02.rtm";
			connectTo[] = {"DeadState",0.1};
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
		};
		class M113_Cargo02: Crew
		{
			file = "\ca\tracked\Data\Anim\M113_Cargo02.rtm";
			interpolateTo[] = {"KIA_M113_Cargo02",1};
		};
		class KIA_M163_Gunner: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\tracked\Data\Anim\KIA_M163_Gunner.rtm";
			connectTo[] = {"DeadState",0.1};
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
		};
		class M163_Gunner: Crew
		{
			file = "\ca\tracked\Data\Anim\M163_Gunner.rtm";
			interpolateTo[] = {"KIA_M163_Gunner",1};
		};
		class M163_GunnerOut: M163_Gunner
		{
			file = "\ca\tracked\Data\Anim\M163_Gunner.rtm";
		};
		class KIA_T72_Commander: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\tracked\Data\Anim\KIA_T72_Commander.rtm";
			connectTo[] = {"DeadState",0.1};
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
		};
		class T72_Commander: Crew
		{
			file = "\ca\tracked\Data\Anim\T72_Commander.rtm";
			interpolateTo[] = {"KIA_T72_Commander",1};
		};
		class T72_CommanderOut: Crew
		{
			file = "\ca\tracked\Data\Anim\T72_CommanderOut.rtm";
			interpolateTo[] = {"KIA_T72_Commander",1};
		};
		class KIA_T72_Driver: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\tracked\Data\Anim\KIA_T72_Driver.rtm";
			connectTo[] = {"DeadState",0.1};
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
		};
		class T72_Driver: Crew
		{
			file = "\ca\tracked\Data\Anim\T72_Driver.rtm";
			interpolateTo[] = {"KIA_T72_Driver",1};
		};
		class T72_DriverOut: T72_Driver
		{
			file = "\ca\tracked\Data\Anim\T72_DriverOut.rtm";
		};
		class KIA_T72_Gunner: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\tracked\Data\Anim\KIA_T72_Gunner.rtm";
			connectTo[] = {"DeadState",0.1};
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
		};
		class T72_Gunner: Crew
		{
			file = "\ca\tracked\Data\Anim\T72_Gunner.rtm";
			interpolateTo[] = {"KIA_T72_Gunner",1};
		};
		class KIA_T72_GunnerOut: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\tracked\Data\Anim\KIA_T72_GunnerOut.rtm";
			connectTo[] = {"DeadState",0.1};
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
		};
		class T72_GunnerOut: Crew
		{
			file = "\ca\tracked\Data\Anim\T72_GunnerOut.rtm";
			interpolateTo[] = {"KIA_T72_GunnerOut",1};
		};
		class KIA_ZSU_Commander: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\tracked\Data\Anim\KIA_ZSU_Commander.rtm";
			connectTo[] = {"DeadState",0.1};
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
		};
		class ZSU_Commander: Crew
		{
			file = "\ca\tracked\Data\Anim\ZSU_Commander.rtm";
			interpolateTo[] = {"KIA_ZSU_Commander",1};
		};
		class ZSU_CommanderOut: ZSU_Commander
		{
			file = "\ca\tracked\Data\Anim\ZSU_CommanderOut.rtm";
		};
		class KIA_ZSU_Gunner: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\tracked\Data\Anim\KIA_ZSU_Gunner.rtm";
			connectTo[] = {"DeadState",0.1};
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
		};
		class ZSU_Gunner: Crew
		{
			file = "\ca\tracked\Data\Anim\ZSU_Gunner.rtm";
			interpolateTo[] = {"KIA_ZSU_Gunner",1};
		};
		class ZSU_GunnerOut: ZSU_Gunner
		{
			file = "\ca\tracked\Data\Anim\ZSU_GunnerOut.rtm";
		};
	};
};
class CfgMovesWomen: CfgMovesBasic
{
	class ManActions
	{
		Abrams_Commander = "";
		Abrams_CommanderOUT = "";
		Abrams_Driver = "";
		Abrams_DriverOUT = "";
		Abrams_Gunner = "";
		BMP2_Commander = "";
		BMP2_CommanderOUT = "";
		BMP2_Driver = "";
		BMP2_DriverOUT = "";
		BMP2_Gunner = "";
		BMP2_GunnerOUT = "";
		BMP2_Cargo04 = "Crew";
		M113_Driver = "";
		M113_DriverOut = "";
		M113_Gunner = "";
		M113_Cargo01 = "Crew";
		M113_Cargo02 = "Crew";
		M163_Gunner = "";
		M163_GunnerOut = "";
		T72_Commander = "";
		T72_CommanderOUT = "";
		T72_Driver = "";
		T72_DriverOUT = "";
		T72_Gunner = "";
		T72_GunnerOut = "";
		ZSU_Commander = "";
		ZSU_CommanderOUT = "";
		ZSU_Gunner = "";
		ZSU_GunnerOut = "";
	};
};
class DefaultEventhandlers;
class CfgPatches
{
	class CATracked
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {"CAData","CACharacters","CACharacters2","CAWeapons","CASounds"};
	};
};
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class CfgVehicles
{
	class Land;
	class LandVehicle: Land
	{
		class NewTurret;
		class ViewOptics;
		class ViewPilot;
		class HeadLimits;
		class Sounds;
	};
	class Tank: LandVehicle
	{
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		driverOpticsModel = "\ca\Tracked\optika_tank_driver";
		commanderCanSee = 31;
		gunnerCanSee = 30;
		getInAction = "GetInMedium";
		getOutAction = "GetOutMedium";
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
		audible = 18;
		sensitivityEar = "0.0075 /3";
		armorStructural = 2;
		class AnimationSources;
		turnCoef = 5.0;
		steerAheadPlan = 0.2;
		steerAheadSimul = 0.4;
		predictTurnPlan = 0.9;
		predictTurnSimul = 0.5;
		brakeDistance = 1.0;
		class HitPoints
		{
			class HitHull
			{
				armor = 1;
				material = -1;
				name = "NEtelo";
				visual = "telo";
				passThrough = 1;
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
			};
		};
		weapons[] = {};
		magazines[] = {};
		class Turrets
		{
			class MainTurret: NewTurret
			{
				gunnerAction = "ManActTestDriverOut";
				gunnerOpticsModel = "\ca\Tracked\optika_tank_gunner";
				gunnerOutOpticsModel = "\ca\Weapons\optika_empty";
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				viewGunnerInExternal = 0;
				primaryGunner = 1;
				gunnerOutOpticsEffect[] = {};
				gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
				class HitPoints
				{
					class HitTurret
					{
						armor = 1;
						material = -1;
						name = "vez";
						visual = "vez";
						passThrough = 1;
					};
					class HitGun
					{
						armor = 0.3;
						material = -1;
						name = "zbran";
						visual = "zbran";
						passThrough = 0;
					};
				};
				class Turrets
				{
					class CommanderOptics: NewTurret
					{
						proxyType = "CPCommander";
						proxyIndex = 1;
						gunnerName = "$STR_POSITION_COMMANDER";
						primaryGunner = 0;
						primaryObserver = 1;
						stabilizedInAxes = "StabilizedInAxesNone";
						body = "obsTurret";
						gun = "obsGun";
						animationSourceBody = "obsTurret";
						animationSourceGun = "obsGun";
						animationSourceHatch = "hatchCommander";
						soundServo[] = {"\ca\sounds\vehicles\servos\turret-1",0.01,1.0,10};
						gunBeg = "";
						gunEnd = "";
						minElev = -4;
						maxElev = 20;
						initElev = 0;
						minTurn = -360;
						maxTurn = 360;
						initTurn = 0;
						commanding = 2;
						outGunnerMayFire = 1;
						inGunnerMayFire = 1;
						viewGunnerInExternal = 0;
						gunnerOpticsModel = "\ca\Tracked\optika_tank_driver";
						gunnerOutOpticsModel = "\ca\Weapons\optika_empty";
						gunnerOutOpticsColor[] = {0,0,0,1};
						gunnerOutForceOptics = 0;
						gunnerOutOpticsShowCursor = 0;
						gunnerOpticsEffect[] = {};
						gunnerOutOpticsEffect[] = {};
						memoryPointGunnerOutOptics = "commander_weapon_view";
						memoryPointGunnerOptics = "commanderview";
						memoryPointsGetInGunner = "pos commander";
						memoryPointsGetInGunnerDir = "pos commander dir";
						gunnerGetInAction = "GetInHigh";
						gunnerGetOutAction = "GetOutHigh";
						memoryPointGun = "gun_muzzle";
						selectionFireAnim = "zasleh_1";
						class ViewOptics
						{
							initAngleX = 0;
							minAngleX = -30;
							maxAngleX = 30;
							initAngleY = 0;
							minAngleY = -100;
							maxAngleY = 100;
							initFov = 0.3;
							minFov = 0.015;
							maxFov = 0.3;
						};
						class ViewGunner
						{
							initAngleX = 5;
							minAngleX = -65;
							maxAngleX = 85;
							initAngleY = 0;
							minAngleY = -150;
							maxAngleY = 150;
							initFov = 0.7;
							minFov = 0.25;
							maxFov = 1.1;
						};
					};
				};
			};
		};
		soundDammage[] = {"\ca\Tracked\Data\Sound\alarm_loop1",0.00031622776,1};
		supplyRadius = 1.5;
		class ViewOptics: ViewOptics
		{
			initAngleX = 0;
			minAngleX = -30;
			maxAngleX = 30;
			initAngleY = 0;
			minAngleY = -100;
			maxAngleY = 100;
			initFov = 0.2;
			minFov = 0.025;
			maxFov = 0.2;
		};
		class Eventhandlers: DefaultEventhandlers{};
		smokeLauncherGrenadeCount = 6;
		smokeLauncherVelocity = 15;
		smokeLauncherOnTurret = 1;
		smokeLauncherAngle = 120;
	};
	class Tracked_APC: Tank
	{
		turnCoef = 5.0;
		steerAheadSimul = 0.2;
		steerAheadPlan = 0.3;
		predictTurnSimul = 0.9;
		predictTurnPlan = 1.0;
		brakeDistance = 3.0;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
	};
	class BMP2_Base: Tracked_APC
	{
		scope = 0;
		displayName = "$STR_DN_BMP2";
		vehicleClass = "Armored";
		wheelCircumference = 1.954;
		accuracy = 0.2;
		model = "\ca\tracked\bmp2";
		picture = "\ca\tracked\Data\ico\bmp2_CA.paa";
		Icon = "\Ca\tracked\Data\map_ico\icomap_bmp2_CA.paa";
		mapSize = 6.5;
		armor = 250;
		damageResistance = 0.01796;
		armorStructural = 4;
		class HitPoints: HitPoints
		{
			class HitLTrack
			{
				armor = 0.3;
				material = -1;
				name = "pas_L";
				visual = "pas_L";
				passThrough = 0.3;
			};
			class HitRTrack
			{
				armor = 0.3;
				material = -1;
				name = "pas_P";
				visual = "pas_P";
				passThrough = 0.3;
			};
			class HitEngine
			{
				armor = 1;
				material = -1;
				name = "motor";
				visual = "";
				passThrough = 0.2;
			};
		};
		maxSpeed = 65;
		transportSoldier = 7;
		class TransportMagazines
		{
			class _xx_30Rnd_545x39_AK
			{
				magazine = "30Rnd_545x39_AK";
				count = "30*1";
			};
			class _xx_100Rnd_762x54_PK
			{
				magazine = "100Rnd_762x54_PK";
				count = "5*1";
			};
			class _xx_8Rnd_9x18_Makarov
			{
				magazine = "8Rnd_9x18_Makarov";
				count = "20*1";
			};
			class _xx_HandGrenade_east
			{
				magazine = "HandGrenade_east";
				count = "10*1";
			};
			class _xx_10Rnd_762x54_SVD
			{
				magazine = "10Rnd_762x54_SVD";
				count = "10*1";
			};
			class _xx_PG7VR
			{
				magazine = "PG7VR";
				count = "3*1";
			};
			class _xx_1Rnd_HE_GP25
			{
				magazine = "1Rnd_HE_GP25";
				count = "3*1";
			};
		};
		transportAmmo = 0;
		supplyRadius = 1.7;
		cost = 150000;
		canFloat = 1;
		viewCargoShadow = 1;
		viewCargoShadowDiff = 0.05;
		threat[] = {0.5,0.5,1};
		class Exhausts
		{
			class Exhaust1
			{
				position = "vyfuk start";
				direction = "vyfuk konec";
				effect = "ExhaustsEffectBig";
			};
		};
		insideSoundCoef = 0.9;
		soundGear[] = {"",5.6234134e-005,1};
		soundGetIn[] = {"ca\SOUNDS\Vehicles\Tracked\Other\int\int-tracked-getin-01",0.56234133,1};
		soundGetOut[] = {"ca\SOUNDS\Vehicles\Tracked\Other\ext\ext-tracked-getout-01",0.56234133,1,50};
		soundEngineOnInt[] = {"ca\sounds\Vehicles\Tracked\Other\int\int-tracked-start-01",1.0,1.0};
		soundEngineOnExt[] = {"ca\SOUNDS\Vehicles\Tracked\Other\ext\ext-tracked-start-01",2.5118864,1.0,400};
		soundEngineOffInt[] = {"ca\sounds\vehicles\Tracked\Other\int\int-tracked-stop-02.wss",1.0,1.0};
		soundEngineOffExt[] = {"ca\sounds\vehicles\Tracked\Other\ext\ext-tracked-stop-02.wss",1.2589254,0.8,400};
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
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\int-tracked-acce-02",1.0,1.0};
				limit = "0.15";
				expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
			class AccelerationOut
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\ext-tracked-acce-02",1.0,1.0,700};
				limit = "0.15";
				expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
		};
		class Sounds
		{
			class Engine
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\ext-tracked-engine-02",1.0,1.0,1000};
				frequency = "(randomizer*0.05+0.8)*rpm";
				volume = "engineOn*camPos*(rpm factor[0.4, 0.9])";
			};
			class IdleOut
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\ext-tracked-idle-02",0.56234133,1.0,450};
				frequency = "1";
				volume = "engineOn*camPos*(rpm factor[0.6, 0.2])";
			};
			class NoiseOut
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\noise2",1.0,1.0,100};
				frequency = "1";
				volume = "camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsOutH0
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\ext_diesel_treads_hard_01",1.0,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsOutH1
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\ext_diesel_treads_hard_02",1.0,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsOutH2
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\ext_diesel_treads_hard_03",1.0,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsOutH3
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\ext_diesel_treads_hard_04",1.0,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsOutH4
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\ext_diesel_treads_hard_05",1.0,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
			class ThreadsOutS0
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\ext_diesel_treads_soft_01",1.0,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsOutS1
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\ext_diesel_treads_soft_02",1.0,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsOutS2
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\ext_diesel_treads_soft_03",1.0,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsOutS3
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\ext_diesel_treads_soft_04",1.0,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsOutS4
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\ext_diesel_treads_soft_05",1.0,1.0,200};
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
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\int-tracked-engine-02",1.0,1.0};
				frequency = "(randomizer*0.05+0.8)*rpm";
				volume = "engineOn*(1-camPos)*(rpm factor[0.4, 1])";
			};
			class IdleIn
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\int-tracked-idle-02",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(rpm factor[0.6, 0.15])";
			};
			class NoiseIn
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\noise2",0.19952624,1.0};
				frequency = "1";
				volume = "(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsInH0
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\int_diesel_treads_hard_01",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsInH1
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\int_diesel_treads_hard_02",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsInH2
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\int_diesel_treads_hard_03",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsInH3
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\int_diesel_treads_hard_04",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsInH4
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\int_diesel_treads_hard_05",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
			class ThreadsInS0
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\int_diesel_treads_soft_01",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsInS1
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\int_diesel_treads_soft_02",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsInS2
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\int_diesel_treads_soft_03",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsInS3
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\int_diesel_treads_soft_04",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsInS4
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\int_diesel_treads_soft_05",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
		};
		driverAction = "BMP2_DriverOut";
		driverInAction = "BMP2_Driver";
		cargoAction[] = {"Stryker_Cargo01"};
		driverForceOptics = 1;
		forceHideDriver = 0;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"2A42","PKT","AT5LauncherSingle"};
				magazines[] = {"250Rnd_30mmAP_2A42","250Rnd_30mmHE_2A42","2000Rnd_762x54_PKT","8Rnd_AT5_BMP2"};
				soundServo[] = {"\ca\sounds\vehicles\servos\turret-1",0.01,1.0,10};
				minElev = -4.5;
				maxElev = 74;
				minTurn = -360;
				maxTurn = 360;
				gunnerAction = "BMP2_GunnerOut";
				gunnerInAction = "BMP2_Gunner";
				gunnerGetInAction = "GetInMedium";
				gunnerGetOutAction = "GetOutMedium";
				forceHideGunner = 0;
				gunnerOpticsModel = "\ca\weapons\2Dscope_BMPgun";
				gunnerOutOpticsModel = "";
				gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};
				class ViewOptics: ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.2;
					minFov = 0.05;
					maxFov = 0.2;
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						gunBeg = "gun_muzzle";
						gunEnd = "gun_chamber";
						gunnerAction = "BMP2_CommanderOUT";
						gunnerInAction = "BMP2_Commander";
						gunnerGetInAction = "GetInMedium";
						gunnerGetOutAction = "GetOutMedium";
						gunnerOpticsModel = "\ca\weapons\2Dscope_com3";
						gunnerOutOpticsModel = "";
						weapons[] = {"SmokeLauncher"};
						magazines[] = {"SmokeLauncherMag","SmokeLauncherMag"};
						gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};
						class ViewOptics: ViewOptics
						{
							initAngleX = 0;
							minAngleX = -30;
							maxAngleX = 30;
							initAngleY = 0;
							minAngleY = -100;
							maxAngleY = 100;
							initFov = 0.3;
							minFov = 0.025;
							maxFov = 0.3;
						};
						startEngine = 0;
						outGunnerMayFire = 1;
					};
				};
				class HitPoints: HitPoints
				{
					class HitTurret
					{
						armor = 1;
						material = -1;
						name = "vez";
						visual = "vez";
						passThrough = 1;
					};
					class HitGun
					{
						armor = 0.3;
						material = -1;
						name = "zbran";
						visual = "zbran";
						passThrough = 0;
					};
				};
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\tracked\data\detailmapy\bmp2_01.rvmat","ca\tracked\data\detailmapy\bmp2_01_damage.rvmat","ca\tracked\data\detailmapy\bmp2_01_destruct.rvmat","ca\tracked\data\detailmapy\bmp2_02.rvmat","ca\tracked\data\detailmapy\bmp2_02_damage.rvmat","ca\tracked\data\detailmapy\bmp2_02_destruct.rvmat","ca\tracked\data\detailmapy\bmp_hq.rvmat","ca\tracked\data\detailmapy\bmp_hq_damage.rvmat","ca\tracked\data\detailmapy\bmp_hq_destruct.rvmat"};
		};
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\ca\tracked\data\bmp2_01_co.paa","\ca\tracked\data\bmp2_02_co.paa"};
		class Reflectors
		{
			class LeftLight
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
			class RightLight: LeftLight
			{
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
			};
			class GunnerLight: LeftLight
			{
				position = "gunner light";
				direction = "konec gunner light";
				hitpoint = "gunner light";
				selection = "gunner light";
			};
			class CommanderLight: LeftLight
			{
				position = "commander light";
				direction = "konec commander light";
				hitpoint = "commander light";
				selection = "commander light";
			};
		};
		class AnimationSources: AnimationSources
		{
			class recoil_source
			{
				source = "reload";
				weapon = "2A42";
			};
		};
		aggregateReflectors[] = {{ "CommanderLight" },{ "GunnerLight" },{ "LeftLight","RightLight" }};
		class Library
		{
			libTextDesc = "$STR_LIB_BMP2";
		};
		smokeLauncherGrenadeCount = 3;
		smokeLauncherVelocity = 14;
		smokeLauncherOnTurret = 1;
		smokeLauncherAngle = 70;
	};
	class BMP2_HQ_Base: BMP2_Base
	{
		accuracy = 0.23;
		unitInfoType = "UnitInfoCar";
		displayName = "$STR_DN_BMP_HQ";
		transportSoldier = 0;
		class TransportMagazines
		{
			class _xx_30Rnd_545x39_AK
			{
				magazine = "30Rnd_545x39_AK";
				count = "30*0";
			};
			class _xx_100Rnd_762x54_PK
			{
				magazine = "100Rnd_762x54_PK";
				count = "5*0";
			};
			class _xx_8Rnd_9x18_Makarov
			{
				magazine = "8Rnd_9x18_Makarov";
				count = "20*0";
			};
			class _xx_HandGrenade_east
			{
				magazine = "HandGrenade_east";
				count = "10*0";
			};
			class _xx_10Rnd_762x54_SVD
			{
				magazine = "10Rnd_762x54_SVD";
				count = "10*0";
			};
			class _xx_PG7VR
			{
				magazine = "PG7VR";
				count = "3*0";
			};
			class _xx_1Rnd_HE_GP25
			{
				magazine = "1Rnd_HE_GP25";
				count = "3*0";
			};
		};
		model = "\ca\tracked\BMP2_HQ";
		Icon = "\ca\tracked\data\map_ico\icomap_bmp2_hq_CA.paa";
		class Turrets: Turrets
		{
			class MainTurret: NewTurret
			{
				startEngine = 0;
				weapons[] = {"PKT"};
				magazines[] = {"100Rnd_762x54_PK","100Rnd_762x54_PK","100Rnd_762x54_PK","100Rnd_762x54_PK","100Rnd_762x54_PK"};
				gunnerOutOpticsModel = "\ca\Weapons\optika_empty";
				class Turrets{};
				outGunnerMayFire = 1;
				gunnerAction = "HMMWV_Gunner04";
				gunnerInAction = "HMMWV_Gunner04";
				memoryPointGun = "muzzle_1";
				gunBeg = "muzzle_1";
				gunEnd = "chamber_1";
				canHideGunner = 0;
				memoryPointGunnerOutOptics = "gunnerview";
				gunnerOpticsEffect[] = {};
				stabilizedInAxes = "StabilizedInAxesNone";
				LODTurnedOut = 1000;
				LODTurnedIn = 1000;
				castGunnerShadow = 0;
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.3;
					minFov = 0.025;
					maxFov = 0.3;
				};
				commanding = -1;
				primaryGunner = 1;
			};
		};
		threat[] = {0.5,0.0,0.2};
		class AnimationSources
		{
			class Antena1
			{
				source = "user";
				animPeriod = 6;
				initPhase = 0;
			};
			class Antena2: Antena1{};
			class Antena3: Antena1{};
			class Antena4: Antena1{};
			class Antena5: Antena1{};
			class Antena6: Antena1{};
			class Antena_wire: Antena1{};
		};
	};
	class BMP2_Ambul_Base: BMP2_Base
	{
		accuracy = 0.23;
		unitInfoType = "UnitInfoCar";
		vehicleClass = "Support";
		displayName = "$STR_DN_BMP_AMB";
		displayNameShort = "$STR_DN_AMB_SHORT";
		attendant = 1;
		transportSoldier = 3;
		class TransportMagazines
		{
			class _xx_30Rnd_545x39_AK
			{
				magazine = "30Rnd_545x39_AK";
				count = "30*0";
			};
			class _xx_100Rnd_762x54_PK
			{
				magazine = "100Rnd_762x54_PK";
				count = "5*0";
			};
			class _xx_8Rnd_9x18_Makarov
			{
				magazine = "8Rnd_9x18_Makarov";
				count = "20*0";
			};
			class _xx_HandGrenade_east
			{
				magazine = "HandGrenade_east";
				count = "10*0";
			};
			class _xx_10Rnd_762x54_SVD
			{
				magazine = "10Rnd_762x54_SVD";
				count = "10*0";
			};
			class _xx_PG7VR
			{
				magazine = "PG7VR";
				count = "3*0";
			};
			class _xx_1Rnd_HE_GP25
			{
				magazine = "1Rnd_HE_GP25";
				count = "3*0";
			};
		};
		model = "\ca\Tracked\BMP2_ambulance";
		picture = "\ca\tracked\Data\ico\BMP2_ambulance_CA.paa";
		Icon = "\Ca\tracked\Data\map_ico\icomap_bmp2_M_CA.paa";
		mapSize = 6.5;
		class Turrets{};
		threat[] = {0.0,0.0,0.0};
		cargoAction[] = {"Stryker_Cargo01","BMP2_Cargo04","BMP2_Cargo04"};
		cargoIsCoDriver[] = {0};
		class Library
		{
			libTextDesc = "$STR_LIB_BMP_AMB";
		};
	};
	class T72_Base: Tank
	{
		model = "\ca\Tracked\t72";
		picture = "\ca\tracked\Data\ico\t72_CA.paa";
		Icon = "\Ca\tracked\Data\map_ico\icomap_t72_CA.paa";
		mapSize = 9.5;
		wheelCircumference = 2.312;
		displayName = "$STR_DN_T72";
		vehicleClass = "Armored";
		accuracy = 0.2;
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"\ca\tracked\data\T72_1_co.paa","\ca\tracked\data\T72_2_co.paa","\ca\tracked\data\T72_3_co.paa"};
		armor = 690;
		damageResistance = 0.00544;
		armorStructural = 2;
		cost = 1000000;
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
		maxSpeed = 60;
		insideSoundCoef = 0.9;
		soundGear[] = {"",5.6234134e-005,1};
		soundGetIn[] = {"ca\SOUNDS\Vehicles\Tracked\T72\int\int-tank-diesel-door-1",0.56234133,1};
		soundGetOut[] = {"ca\SOUNDS\Vehicles\Tracked\T72\ext\ext-tank-diesel-door-1",0.56234133,1,50};
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
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\int\int-tank-diesel-acceleration-1",1.7782794,1.0};
				limit = "0.15";
				expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
			class AccelerationOut
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\ext\ext-tank-diesel-acceleration-1",1.7782794,1.0,800};
				limit = "0.15";
				expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
		};
		class Sounds
		{
			class Engine
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\ext\ext-tank-diesel-engine3",1.7782794,1.0,1000};
				frequency = "(randomizer*0.05+0.8)*rpm";
				volume = "engineOn*camPos*(rpm factor[0.4, 0.9])";
			};
			class IdleOut
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\ext\ext-tank-diesel-engine3",0.56234133,1.0,400};
				frequency = "1";
				volume = "engineOn*camPos*(rpm factor[0.6, 0.15])";
			};
			class NoiseOut
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\ext\noise2",1.0,1.0,100};
				frequency = "1";
				volume = "camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsOutH0
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\ext\ext_diesel_treads_hard_01",1.0,1.0,150};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsOutH1
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\ext\ext_diesel_treads_hard_02",1.0,1.0,150};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsOutH2
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\ext\ext_diesel_treads_hard_03",1.0,1.0,150};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsOutH3
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\ext\ext_diesel_treads_hard_04",1.0,1.0,150};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsOutH4
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\ext\ext_diesel_treads_hard_05",1.0,1.0,150};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
			class ThreadsOutS0
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\ext\ext_diesel_treads_soft_01",1.0,1.0,150};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsOutS1
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\ext\ext_diesel_treads_soft_02",1.0,1.0,150};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsOutS2
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\ext\ext_diesel_treads_soft_03",1.0,1.0,150};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsOutS3
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\ext\ext_diesel_treads_soft_04",1.0,1.0,150};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsOutS4
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\ext\ext_diesel_treads_soft_05",1.0,1.0,150};
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
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\int\int-tank-diesel-engine3",1.0,1.0};
				frequency = "(randomizer*0.05+0.8)*rpm";
				volume = "engineOn*(1-camPos)*(rpm factor[0.4, 1])";
			};
			class IdleIn
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\int\int-tank-diesel-engine3",1.0,1.0};
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
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\int\int_diesel_treads_hard_01",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsInH1
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\int\int_diesel_treads_hard_02",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsInH2
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\int\int_diesel_treads_hard_03",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsInH3
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\int\int_diesel_treads_hard_04",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsInH4
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\int\int_diesel_treads_hard_05",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
			class ThreadsInS0
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\int\int_diesel_treads_soft_01",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsInS1
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\int\int_diesel_treads_soft_02",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsInS2
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\int\int_diesel_treads_soft_03",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsInS3
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\int\int_diesel_treads_soft_04",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsInS4
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\int\int_diesel_treads_soft_05",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
		};
		forceHideDriver = 1;
		driverForceOptics = 1;
		driverAction = "T72_DriverOut";
		driverInAction = "T72_Driver";
		class Exhausts
		{
			class Exhaust1
			{
				position = "vyfuk start";
				direction = "vyfuk konec";
				effect = "ExhaustsEffectBig";
			};
		};
		class Reflectors
		{
			class LeftLight
			{
				color[] = {0.9,0.8,0.8,1.0};
				ambient[] = {0.1,0.1,0.1,1.0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
				brightness = 0.5;
			};
			class RightLight: LeftLight
			{
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				color[] = {0.9,0.8,0.8,0.1};
			};
			class GunnerLight: LeftLight
			{
				position = "gunner light";
				direction = "konec gunner light";
				hitpoint = "gunner light";
				selection = "gunner light";
				ambient[] = {0.1,0.1,0.1,0.1};
			};
		};
		aggregateReflectors[] = {{ "CommanderLight" },{ "LeftLight","RightLight" }};
		class AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "DSHKM";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "DSHKM";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "DSHKM";
			};
			class recoil_source
			{
				source = "reload";
				weapon = "D81";
			};
		};
		type = 1;
		threat[] = {0.9,0.8,0.2};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerAction = "T72_GunnerOut";
				gunnerInAction = "T72_Gunner";
				gunnerGetInAction = "GetInMedium";
				gunnerGetOutAction = "GetOutMedium";
				weapons[] = {"D81","PKT"};
				magazines[] = {"23Rnd_125mmSABOT_T72","22Rnd_125mmHE_T72","2000Rnd_762x54_PKT"};
				soundServo[] = {"\ca\Weapons\Data\Sound\gun_elevate2",0.01,1.0,10};
				gunnerOpticsModel = "\ca\weapons\2Dscope_T72gun8";
				gunnerOutOpticsModel = "";
				LODTurnedOut = 1000;
				minElev = -6;
				maxElev = 14;
				initElev = 0;
				gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.2;
					minFov = 0.025;
					maxFov = 0.2;
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						weapons[] = {"DSHKM","SmokeLauncher"};
						magazines[] = {"150Rnd_127x107_DSHKM","150Rnd_127x107_DSHKM","150Rnd_127x107_DSHKM","150Rnd_127x107_DSHKM","SmokeLauncherMag","SmokeLauncherMag"};
						gunBeg = "gun_muzzle";
						gunEnd = "gun_chamber";
						body = "ObsTurret";
						gun = "ObsGun";
						gunnerAction = "T72_CommanderOut";
						gunnerInAction = "T72_Commander";
						gunnerGetInAction = "GetInMedium";
						gunnerGetOutAction = "GetOutMedium";
						minElev = -25;
						maxElev = 60;
						initElev = 0;
						minTurn = -360;
						maxTurn = 360;
						initTurn = 0;
						soundServo[] = {"\ca\Weapons\Data\Sound\gun_elevate2",0.017782794,1.0,10};
						outGunnerMayFire = 1;
						inGunnerMayFire = 1;
						gunnerOpticsModel = "\ca\weapons\2Dscope_RUAA5";
						gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};
						class ViewOptics: ViewOptics
						{
							initAngleX = 0;
							minAngleX = -30;
							maxAngleX = 30;
							initAngleY = 0;
							minAngleY = -100;
							maxAngleY = 100;
							initFov = 0.3;
							minFov = 0.015;
							maxFov = 0.3;
						};
						startEngine = 0;
						LODTurnedOut = 1000;
					};
				};
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\tracked\data\t72_1.rvmat","ca\tracked\data\t72_1_damage.rvmat","ca\tracked\data\t72_1_destruct.rvmat","ca\tracked\data\t72_2.rvmat","ca\tracked\data\t72_2_damage.rvmat","ca\tracked\data\t72_2_destruct.rvmat","ca\tracked\data\t72_3.rvmat","ca\tracked\data\t72_3_damage.rvmat","ca\tracked\data\t72_3_destruct.rvmat","ca\weapons\data\dshk.rvmat","ca\weapons\data\dshk.rvmat","ca\weapons\data\dshk_destruct.rvmat"};
		};
		class Library
		{
			libTextDesc = "$STR_LIB_T72";
		};
		smokeLauncherGrenadeCount = 6;
		smokeLauncherVelocity = 14;
		smokeLauncherOnTurret = 1;
		smokeLauncherAngle = 120;
	};
	class ZSU_Base: Tank
	{
		model = "\ca\Tracked\zsu";
		picture = "\ca\tracked\Data\ico\zsu_CA.paa";
		Icon = "\Ca\tracked\Data\map_ico\icomap_zsu_CA.paa";
		mapSize = 6.5;
		wheelCircumference = 2.249;
		displayName = "$STR_DN_ZSU";
		vehicleClass = "Armored";
		accuracy = 0.2;
		commanderCanSee = 31;
		gunnerCanSee = "1+16+4+8";
		driverAction = "ManActTestDriver";
		driverInAction = "ManActTestDriver";
		forceHideDriver = 1;
		driverForceOptics = 1;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"AZP85"};
				magazines[] = {"2000Rnd_23mm_AZP85"};
				soundServo[] = {"\ca\Weapons\Data\Sound\gun_elevate",0.017782794,1.0,10};
				forceHideGunner = 0;
				minElev = -4.5;
				maxElev = 85;
				minTurn = -360;
				maxTurn = 360;
				gunnerOpticsModel = "\ca\weapons\2Dscope_RUAA8";
				gunnerOutOpticsModel = "";
				gunnerAction = "ZSU_GunnerOut";
				gunnerInAction = "ZSU_Gunner";
				gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.2;
					minFov = 0.025;
					maxFov = 0.2;
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						gunBeg = "gun_muzzle";
						gunEnd = "gun_chamber";
						body = "ObsTurret";
						gun = "ObsGun";
						gunnerOutOpticsModel = "";
						gunnerOpticsModel = "\ca\weapons\2Dscope_com1";
						gunnerInAction = "ZSU_Commander";
						gunnerAction = "ZSU_CommanderOut";
						minElev = -10;
						maxElev = 60;
						initElev = 0;
						minTurn = -360;
						maxTurn = 360;
						initTurn = 0;
						gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};
						class ViewOptics: ViewOptics
						{
							initAngleX = 0;
							minAngleX = -30;
							maxAngleX = 30;
							initAngleY = 0;
							minAngleY = -100;
							maxAngleY = 100;
							initFov = 0.3;
							minFov = 0.015;
							maxFov = 0.3;
						};
						startEngine = 0;
						outGunnerMayFire = 0;
					};
				};
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\tracked\data\detailmapy\zsu_01.rvmat","ca\tracked\data\detailmapy\zsu_01_damage.rvmat","ca\tracked\data\detailmapy\zsu_01_destruct.rvmat","ca\tracked\data\detailmapy\zsu_02.rvmat","ca\tracked\data\detailmapy\zsu_02_damage.rvmat","ca\tracked\data\detailmapy\zsu_02_destruct.rvmat","ca\tracked\data\detailmapy\zsu_03.rvmat","ca\tracked\data\detailmapy\zsu_03_damage.rvmat","ca\tracked\data\detailmapy\zsu_03_destruct.rvmat"};
		};
		armor = 160;
		damageResistance = 0.02711;
		cost = 1000000;
		armorStructural = 4;
		class HitPoints: HitPoints
		{
			class HitLTrack
			{
				armor = 0.3;
				material = -1;
				name = "pas_L";
				visual = "pas_L";
				passThrough = 0.3;
			};
			class HitRTrack
			{
				armor = 0.3;
				material = -1;
				name = "pas_P";
				visual = "pas_P";
				passThrough = 0.3;
			};
			class HitEngine
			{
				armor = 1;
				material = -1;
				name = "NEmotor";
				visual = "motor";
				passThrough = 0.2;
			};
		};
		maxSpeed = 44;
		irScanRangeMin = 4000;
		irScanRangeMax = 10000;
		irScanToEyeFactor = 5;
		irScanGround = 0;
		insideSoundCoef = 0.9;
		soundGear[] = {"",5.6234134e-005,1};
		soundGetIn[] = {"ca\SOUNDS\Vehicles\Tracked\Other\int\int-tracked-getin-01",0.56234133,1};
		soundGetOut[] = {"ca\SOUNDS\Vehicles\Tracked\Other\ext\ext-tracked-getout-01",0.56234133,1,50};
		soundEngineOnInt[] = {"ca\sounds\Vehicles\Tracked\Other\int\int-tracked-start-01",1.0,1.0};
		soundEngineOnExt[] = {"ca\SOUNDS\Vehicles\Tracked\Other\ext\ext-tracked-start-01",2.5118864,1.0,500};
		soundEngineOffInt[] = {"ca\sounds\vehicles\Tracked\Other\int\int-tracked-stop-02.wss",1.0,1.0};
		soundEngineOffExt[] = {"ca\sounds\vehicles\Tracked\Other\ext\ext-tracked-stop-02.wss",1.2589254,0.8,500};
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
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\int-tracked-acce-02",1.0,1.0};
				limit = "0.15";
				expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
			class AccelerationOut
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\ext-tracked-acce-02",1.0,1.0,650};
				limit = "0.15";
				expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
		};
		class Sounds
		{
			class Engine
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\ext-tracked-engine-02",1.7782794,1.0,1000};
				frequency = "(randomizer*0.05+0.8)*rpm";
				volume = "engineOn*camPos*(rpm factor[0.4, 0.9])";
			};
			class IdleOut
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\ext-tracked-idle-02",0.7943282,1.0,400};
				frequency = "1";
				volume = "engineOn*camPos*(rpm factor[0.6, 0.15])";
			};
			class NoiseOut
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\noise2",1.0,1.0,150};
				frequency = "1";
				volume = "camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsOutH0
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\ext_diesel_treads_hard_01",1.0,1.0,150};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsOutH1
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\ext_diesel_treads_hard_02",1.0,1.0,150};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsOutH2
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\ext_diesel_treads_hard_03",1.0,1.0,150};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsOutH3
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\ext_diesel_treads_hard_04",1.0,1.0,150};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsOutH4
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\ext_diesel_treads_hard_05",1.0,1.0,150};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
			class ThreadsOutS0
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\ext_diesel_treads_soft_01",1.0,1.0,150};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsOutS1
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\ext_diesel_treads_soft_02",1.0,1.0,150};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsOutS2
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\ext_diesel_treads_soft_03",1.0,1.0,150};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsOutS3
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\ext_diesel_treads_soft_04",1.0,1.0,150};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsOutS4
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\ext_diesel_treads_soft_05",1.0,1.0,150};
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
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\int-tracked-engine-02",0.8912509,1.0};
				frequency = "(randomizer*0.05+0.8)*rpm";
				volume = "engineOn*(1-camPos)*(rpm factor[0.4, 1])";
			};
			class IdleIn
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\int-tracked-idle-02",0.8912509,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(rpm factor[0.6, 0.15])";
			};
			class NoiseIn
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\noise2",0.31622776,1.0};
				frequency = "1";
				volume = "(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsInH0
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\int_diesel_treads_hard_01",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsInH1
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\int_diesel_treads_hard_02",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsInH2
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\int_diesel_treads_hard_03",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsInH3
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\int_diesel_treads_hard_04",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsInH4
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\int_diesel_treads_hard_05",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
			class ThreadsInS0
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\int_diesel_treads_soft_01",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsInS1
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\int_diesel_treads_soft_02",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsInS2
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\int_diesel_treads_soft_03",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsInS3
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\int_diesel_treads_soft_04",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsInS4
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\int_diesel_treads_soft_05",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
		};
		threat[] = {1,0.5,1};
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\ca\tracked\data\zsu_01_co.paa","\ca\tracked\data\zsu_02_co.paa","\ca\tracked\data\zsu_03_co.paa"};
		class Library
		{
			libTextDesc = "$STR_LIB_ZSU";
		};
	};
	class M1A1: Tank
	{
		scope = 0;
		displayName = "$STR_DN_M1A1";
		vehicleClass = "Armored";
		model = "\ca\Tracked\M1_abrams";
		picture = "\ca\tracked\Data\ico\M1_abrams_CA.paa";
		Icon = "\Ca\tracked\Data\map_ico\icomap_m1a1_CA.paa";
		mapSize = 9.3;
		crew = "USMC_Soldier_Crew";
		side = 1;
		faction = "USMC";
		accuracy = 0.25;
		armor = 850;
		armorStructural = 2;
		damageResistance = 0.00547;
		cost = 4000000;
		memoryPointCargoLight = "";
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
		class AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "M2";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "M2";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "M2";
			};
			class recoil_source
			{
				source = "reload";
				weapon = "M256";
			};
		};
		maxSpeed = 72;
		driverForceOptics = 1;
		driverOpticsModel = "\ca\Tracked\optika_tank_driver_west";
		class Exhausts
		{
			class Exhaust1
			{
				position = "vyfuk start";
				direction = "vyfuk konec";
				effect = "ExhaustsEffectBig";
			};
		};
		insideSoundCoef = 0.9;
		typicalCargo[] = {"USMC_Soldier_Crew","USMC_Soldier_Crew","USMC_Soldier_Crew"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerAction = "Abrams_Gunner";
				gunnerInAction = "Abrams_Gunner";
				weapons[] = {"M256","M240_veh"};
				soundServo[] = {"\ca\sounds\vehicles\servos\turret-2",0.031622775,1.0,30};
				magazines[] = {"20Rnd_120mmSABOT_M1A2","20Rnd_120mmHE_M1A2","1200Rnd_762x51_M240"};
				forceHideGunner = 1;
				gunnerOpticsModel = "\ca\Weapons\2Dscope_M1gun10.p3d";
				minElev = -9;
				maxElev = 20;
				initElev = 0;
				gunnerOutOpticsEffect[] = {};
				gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.2;
					minFov = 0.025;
					maxFov = 0.2;
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						gunBeg = "gun_muzzle";
						gunEnd = "gun_chamber";
						minElev = -25;
						maxElev = 60;
						initElev = 0;
						minTurn = -360;
						maxTurn = 360;
						initTurn = 0;
						weapons[] = {"M2","SmokeLauncher"};
						soundServo[] = {"\ca\sounds\vehicles\servos\turret-1",0.01,1.0,30};
						magazines[] = {"100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2","SmokeLauncherMag","SmokeLauncherMag"};
						outGunnerMayFire = 1;
						inGunnerMayFire = 1;
						gunnerAction = "Abrams_CommanderOut";
						gunnerInAction = "Abrams_Commander";
						gunnerOpticsModel = "\ca\Tracked\optika_M1A1_commander";
						gunnerOpticsEffect[] = {"TankCommanderOptics1"};
						class ViewOptics: ViewOptics
						{
							initFov = 0.3;
							minFov = 0.015;
							maxFov = 0.3;
						};
						startEngine = 0;
					};
				};
			};
		};
		driverAction = "Abrams_DriverOut";
		driverInAction = "Abrams_Driver";
		threat[] = {1,1,0.3};
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\tracked\data\detailmapy\m1_abrams_01_metal.rvmat","ca\tracked\data\detailmapy\m1_abrams_01_metal_damage.rvmat","ca\tracked\data\detailmapy\m1_abrams_01_metal_destruct.rvmat","ca\tracked\data\detailmapy\m1_abrams_02_metal.rvmat","ca\tracked\data\detailmapy\m1_abrams_02_metal_damage.rvmat","ca\tracked\data\detailmapy\m1_abrams_02_metal_destruct.rvmat","ca\tracked\data\detailmapy\m1_abrams_03_metal.rvmat","ca\tracked\data\detailmapy\m1_abrams_03_metal_damage.rvmat","ca\tracked\data\detailmapy\m1_abrams_03_metal_destruct.rvmat","ca\tracked\data\detailmapy\m1_abrams_track_metal.rvmat","ca\tracked\data\detailmapy\m1_abrams_track_metal_damage.rvmat","ca\tracked\data\detailmapy\m1_abrams_track_metal_destruct.rvmat","ca\tracked\data\detailmapy\m1abrams_mg_mount.rvmat","ca\tracked\data\detailmapy\m1abrams_mg_mount_damage.rvmat","ca\tracked\data\detailmapy\m1abrams_mg_mount_destruct.rvmat","ca\weapons\data\m2.rvmat","ca\weapons\data\m2_damage.rvmat","ca\weapons\data\m2_destruct.rvmat","ca\tracked\data\m1a2_tusk\m1a2_loader.rvmat","ca\tracked\data\m1a2_tusk\m1a2_loader_damage.rvmat","ca\tracked\data\m1a2_tusk\m1a2_loader_destruct.rvmat","ca\weapons\Data\m240.rvmat","ca\weapons\Data\m240_damage.rvmat","ca\weapons\Data\m240_destruct.rvmat"};
		};
		class Library
		{
			libTextDesc = "$STR_LIB_M1A1";
		};
		soundGear[] = {"",5.6234134e-005,1};
		soundGetIn[] = {"ca\SOUNDS\Vehicles\Tracked\M1A1\ext\ext-m1-door-1",0.56234133,1};
		soundGetOut[] = {"ca\SOUNDS\Vehicles\Tracked\M1A1\int\int-m1-door-1",0.56234133,1,50};
		soundEngineOnInt[] = {"ca\sounds\Vehicles\Tracked\M1A1\int\int-engine_on",0.31622776,1.0};
		soundEngineOnExt[] = {"ca\SOUNDS\Vehicles\Tracked\M1A1\ext\ext-engine_on",0.56234133,1.0,400};
		soundEngineOffInt[] = {"ca\sounds\vehicles\Tracked\M1A1\int\int-engine_off",0.31622776,1.0};
		soundEngineOffExt[] = {"ca\sounds\vehicles\Tracked\M1A1\ext\ext-engine_off",0.56234133,1.0,400};
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
				sound[] = {"ca\sounds\Vehicles\Tracked\M1A1\int\int-m1acceleration-03",0.56234133,1.0};
				limit = "0.15";
				expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
			class AccelerationOut
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\M1A1\ext\ext-m1acceleration-03",0.56234133,1.0,500};
				limit = "0.15";
				expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
		};
		class Sounds: Sounds
		{
			class Engine: Engine
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\M1A1\ext\ext-m1engine-04a",1.0,1.0,900};
				frequency = "0.975+(0.05*thrust)";
				volume = "engineOn*camPos*(speed factor[4, 20])";
				cone[] = {1.2,2.8,1.8,1.3};
			};
			class IdleOut
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\M1A1\ext\ext-m1idle-02",0.63095737,1.0,400};
				frequency = "1";
				volume = "engineOn*camPos*(speed factor[10, 0])";
				cone[] = {1.2,2.8,1.8,1.3};
			};
			class NoiseOut
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\M1A1\ext\noise2",1.0,1.0,120};
				frequency = "1";
				volume = "camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsOutH0
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\M1A1\ext\ext-m1treads-hard-01",1.7782794,1.0,300};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsOutH1
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\M1A1\ext\ext-m1treads-hard-02",1.7782794,1.0,300};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsOutH2
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\M1A1\ext\ext-m1treads-hard-03",1.7782794,1.0,300};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsOutH3
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\M1A1\ext\ext-m1treads-hard-04",1.7782794,1.0,300};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsOutH4
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\M1A1\ext\ext-m1treads-hard-05",1.7782794,1.0,300};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[1, 1.8]) min (rpm factor[1.8, 1]))";
			};
			class ThreadsOutS0
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\M1A1\ext\ext-m1treads-soft-01",1.7782794,1.0,250};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsOutS1
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\M1A1\ext\ext-m1treads-soft-02",1.7782794,1.0,250};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsOutS2
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\M1A1\ext\ext-m1treads-soft-03",1.7782794,1.0,250};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsOutS3
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\M1A1\ext\ext-m1treads-soft-04",1.7782794,1.0,250};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsOutS4
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\M1A1\ext\ext-m1treads-soft-05",1.7782794,1.0,250};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[1, 1.8]) min (rpm factor[1.8, 1]))";
			};
			class Movement: Movement
			{
				sound[] = {"",1.0,1.0};
				frequency = "0";
				volume = "0";
			};
			class EngineIn
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\M1A1\int\int-m1engine-04a",1.0,1.0};
				frequency = "0.975+(0.05*thrust)";
				volume = "engineOn*(1-camPos)*(rpm factor[0.3, 1])";
			};
			class IdleIn
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\M1A1\int\int-m1idle-02",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(rpm factor[0.6, 0.15])";
			};
			class NoiseIn
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\M1A1\int\noise2",0.25118864,1.0};
				frequency = "1";
				volume = "(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsInH0
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\M1A1\int\int-m1treads-hard-01",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsInH1
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\M1A1\int\int-m1treads-hard-02",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsInH2
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\M1A1\int\int-m1treads-hard-03",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsInH3
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\M1A1\int\int-m1treads-hard-04",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsInH4
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\M1A1\int\int-m1treads-hard-05",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[1, 1.8]) min (rpm factor[1.8, 1]))";
			};
			class ThreadsInS0
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\M1A1\int\int-m1treads-soft-01",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsInS1
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\M1A1\int\int-m1treads-soft-02",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsInS2
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\M1A1\int\int-m1treads-soft-03",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsInS3
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\M1A1\int\int-m1treads-soft-04",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsInS4
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\M1A1\int\int-m1treads-soft-05",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[1, 1.8]) min (rpm factor[1.8, 1]))";
			};
		};
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {"\ca\tracked\data\m1abrams_01_co.paa","\ca\tracked\data\m1abrams_02_co.paa","\ca\tracked\data\m1abrams_03_co.paa","\ca\tracked\data\m1abrams_mg_mount_co.paa"};
		smokeLauncherGrenadeCount = 6;
		smokeLauncherVelocity = 14;
		smokeLauncherOnTurret = 1;
		smokeLauncherAngle = 120;
	};
	class M1A2_TUSK_MG: M1A1
	{
		displayName = "$STR_DN_M1A2";
		vehicleClass = "Armored";
		model = "\ca\Tracked\M1A2_TUSK";
		Icon = "\ca\tracked\data\map_ico\icomap_m1a2tusk_CA.paa";
		forceHideDriver = 1;
		driverAction = "Abrams_Driver";
		driverInAction = "Abrams_Driver";
		hideProxyInCombat = 1;
		animationSourceHatch = "";
		class Library
		{
			libTextDesc = "$STR_LIB_M1A2";
		};
		class HitPoints: HitPoints
		{
			class HitHull
			{
				armor = 0.9;
				material = -1;
				name = "telo";
				visual = "telo";
				passThrough = 1;
			};
			class HitLTrack
			{
				armor = 0.2;
				material = -1;
				name = "pas_L";
				visual = "pas_L";
				passThrough = 0;
			};
			class HitRTrack
			{
				armor = 0.2;
				material = -1;
				name = "pas_P";
				visual = "pas_P";
				passThrough = 0;
			};
			class HitEngine
			{
				armor = 0.5;
				material = -1;
				name = "motor";
				visual = "motor";
				passThrough = 0.2;
				minimalHit = 0.02;
			};
		};
		armor = 900;
		damageResistance = 0.00516;
		cost = 5000000;
		class AnimationSources: AnimationSources
		{
			class ReloadAnim_2
			{
				source = "reload";
				weapon = "M240_veh_2";
			};
			class ReloadMagazine_2
			{
				source = "reloadmagazine";
				weapon = "M240_veh_2";
			};
			class Revolving_2
			{
				source = "revolving";
				weapon = "M240_veh_2";
			};
		};
		hiddenSelectionsTextures[] = {"\ca\tracked\data\m1abrams_01_co.paa","\ca\tracked\data\m1abrams_02_co.paa","\ca\tracked\data\m1abrams_03_co.paa","\ca\tracked\data\m1a2_tusk\m1a2_loader_co.paa"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				proxyType = "CPGunner";
				proxyIndex = 2;
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						gunnerAction = "Abrams_CommanderOUT";
						gunnerInAction = "Abrams_Commander";
						gunnerOpticsModel = "\ca\Weapons\2Dscope_RWS";
						outGunnerMayFire = 0;
						class ViewOptics: ViewOptics
						{
							initFov = 0.3;
							minFov = 0.015;
							maxFov = 0.3;
						};
						stabilizedInAxes = "StabilizedInAxesBoth";
					};
					class LoaderTurret: NewTurret
					{
						proxyType = "CPGunner";
						proxyIndex = 1;
						gunnerName = "$STR_GN_M1A2_LoaderTurret";
						body = "LoaderTurret";
						gun = "LoaderGun";
						animationSourceBody = "LoaderTurret";
						animationSourceGun = "LoaderGun";
						animationSourceHatch = "loaderHatch";
						stabilizedInAxes = "StabilizedInAxesNone";
						LODTurnedOut = 1000;
						LODTurnedIn = 1000;
						class HitPoints{};
						gunnerAction = "HMMWV_Gunner04";
						gunnerInAction = "HMMWV_Gunner04";
						memoryPointGun = "usti hlavne loader";
						gunBeg = "usti hlavne loader";
						gunEnd = "konec hlavne loader";
						memoryPointGunnerOptics = "loaderview";
						memoryPointGunnerOutOptics = "loaderview";
						gunnerOpticsModel = "\ca\weapons\optika_empty";
						gunnerOutOpticsModel = "\ca\weapons\optika_empty";
						gunnerForceOptics = 0;
						canHideGunner = 0;
						minElev = -25;
						maxElev = 25;
						initElev = 0;
						minTurn = -180;
						maxTurn = 180;
						initTurn = 0;
						weapons[] = {"M240_veh_2"};
						magazines[] = {"100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240"};
						outGunnerMayFire = 1;
						inGunnerMayFire = 1;
						commanding = -1;
						selectionFireAnim = "zasleh_2";
						startengine = 0;
						class Turrets{};
						gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
						class ViewOptics
						{
							initAngleX = 0;
							minAngleX = -30;
							maxAngleX = 30;
							initAngleY = 0;
							minAngleY = -100;
							maxAngleY = 100;
							initFov = 0.2;
							minFov = 0.025;
							maxFov = 0.2;
						};
					};
				};
			};
		};
	};
};
class CfgDestroy
{
	access = 1;
	class EngineHit
	{
		sound[] = {"\ca\Tracked\Data\Sound\fuel_explosion",31.622776,1};
	};
};
//};

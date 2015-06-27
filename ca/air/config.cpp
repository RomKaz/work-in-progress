////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:00:39 2014 : Source 'file' date Fri Oct 31 06:00:39 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=12
enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	stabilizedinaxisx = 1,
	stabilizedinaxisy = 2,
	stabilizedinaxesboth = 3,
	destructno = 0,
	stabilizedinaxesnone = 0,
	destructman = 5,
	destructbuilding = 1
};

//Class air : config.bin{
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		AH1Z_Pilot = "AH1Z_Pilot";
		AH1Z_Gunner = "AH1Z_Gunner";
		AH6_Pilot = "AH6_Pilot";
		AH6_Gunner = "AH6_Gunner";
		MH6_Cargo01 = "MH6_Cargo01";
		MH6_Cargo02 = "MH6_Cargo02";
		MH6_Cargo03 = "MH6_Cargo03";
		UH60_Pilot = "UH60_Pilot";
		UH60_Gunner = "UH60_Gunner";
		MH60_Gunner = "MH60_Gunner";
		UH60_Cargo01 = "UH60_Cargo01";
		UH60_Cargo02 = "UH60_Cargo02";
		AV8B_Pilot = "AV8B_Pilot";
		KA50_Pilot = "KA50_Pilot";
		Mi17_Pilot = "Mi17_Pilot";
		Mi17_Gunner = "Mi17_Gunner";
		Mi8_Pilot = "Mi8_Pilot";
		Mi8_Gunner = "Mi8_Gunner";
		Mi8_Cargo = "Mi8_Cargo";
		Mi17_Cargo01 = "Mi17_Cargo01";
		Mi17_Cargo02 = "Mi17_Cargo02";
		Camel_Pilot = "Camel_Pilot";
		Para_Pilot = "Para_Pilot";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class AH1Z_Dead: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\air\Data\Anim\AH1Z_Dead.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class Crew;
		class KIA_AH1Z_Pilot: DefaultDie
		{
			actions = "DeadActions";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			file = "\ca\air\Data\Anim\KIA_AH1Z_Pilot.rtm";
			connectTo[] = {"DeadState",0.1};
		};
		class AH1Z_Pilot: Crew
		{
			file = "\ca\air\Data\Anim\AH1Z_Pilot.rtm";
			interpolateTo[] = {"KIA_AH1Z_Pilot",1};
		};
		class KIA_AH1Z_Gunner: DefaultDie
		{
			actions = "DeadActions";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			file = "\ca\air\Data\Anim\KIA_AH1Z_Gunner.rtm";
			connectTo[] = {"DeadState",0.1};
		};
		class AH1Z_Gunner: Crew
		{
			file = "\ca\air\Data\Anim\AH1Z_Gunner.rtm";
			interpolateTo[] = {"KIA_AH1Z_Gunner",1};
		};
		class KIA_AH6_Pilot: DefaultDie
		{
			actions = "DeadActions";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			file = "\ca\air\Data\Anim\KIA_AH6_Pilot.rtm";
			connectTo[] = {"DeadState",0.1};
		};
		class AH6_Pilot: Crew
		{
			file = "\ca\air\Data\Anim\AH6_Pilot.rtm";
			interpolateTo[] = {"KIA_AH6_Pilot",1};
		};
		class KIA_AH6_Gunner: DefaultDie
		{
			actions = "DeadActions";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			file = "\ca\air\Data\Anim\KIA_AH6_gunner.rtm";
			connectTo[] = {"DeadState",0.1};
		};
		class AH6_Gunner: Crew
		{
			file = "\ca\air\Data\Anim\AH6_Gunner.rtm";
			interpolateTo[] = {"KIA_AH6_Gunner",1};
		};
		class MH6_Cargo01: Crew
		{
			file = "\ca\air\Data\Anim\MH6_Cargo01.rtm";
			interpolateTo[] = {"AH1Z_Dead",1};
			speed = 0.09174;
		};
		class MH6_Cargo02: Crew
		{
			file = "\ca\air\Data\Anim\MH6_Cargo02.rtm";
			interpolateTo[] = {"AH1Z_Dead",1};
			speed = 0.1083;
		};
		class MH6_Cargo03: Crew
		{
			file = "\ca\air\Data\Anim\MH6_Cargo03.rtm";
			interpolateTo[] = {"AH1Z_Dead",1};
			speed = 0.1038;
		};
		class KIA_UH60_Pilot: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\air\Data\Anim\KIA_UH60_Pilot.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class UH60_Pilot: Crew
		{
			file = "\ca\air\Data\Anim\UH60_Pilot.rtm";
			interpolateTo[] = {"KIA_UH60_Pilot",1};
		};
		class KIA_UH60_Gunner: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\air\Data\Anim\KIA_UH60_Gunner.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class UH60_Gunner: Crew
		{
			file = "\ca\air\Data\Anim\UH60_Gunner.rtm";
			interpolateTo[] = {"KIA_UH60_Gunner",1};
		};
		class KIA_MH60_Gunner: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\air\Data\Anim\KIA_MH60_Gunner.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class MH60_Gunner: Crew
		{
			file = "\ca\air\Data\Anim\MH60_Gunner.rtm";
			interpolateTo[] = {"KIA_MH60_Gunner",1};
		};
		class KIA_UH60_Cargo01: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\air\Data\Anim\KIA_UH60_Cargo01.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class UH60_Cargo01: Crew
		{
			file = "\ca\air\Data\Anim\UH60_Cargo01.rtm";
			interpolateTo[] = {"KIA_UH60_Cargo01",1};
		};
		class KIA_UH60_Cargo02: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\air\Data\Anim\KIA_UH60_Cargo02.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class UH60_Cargo02: Crew
		{
			file = "\ca\air\Data\Anim\UH60_Cargo02_V0.rtm";
			interpolateTo[] = {"KIA_UH60_Cargo02",1};
			connectTo[] = {"UH60_Cargo02",0.1,"UH60_Cargo02_V1",0.1,"UH60_Cargo02_V2",0.1,"UH60_Cargo02_V3",0.1,"UH60_Cargo02_V4",0.1,"UH60_Cargo02_V5",0.1};
			equivalentTo = "UH60_Cargo02";
			variantsAI[] = {"UH60_Cargo02",0.5,"UH60_Cargo02_V1",0.1,"UH60_Cargo02_V2",0.1,"UH60_Cargo02_V3",0.1,"UH60_Cargo02_V4",0.1,"UH60_Cargo02_V5",0.1};
			variantAfter[] = {5,10,20};
			speed = 0.3;
		};
		class UH60_Cargo02_V1: UH60_Cargo02
		{
			file = "\ca\air\Data\Anim\UH60_Cargo02_V1.rtm";
			interpolateTo[] = {"KIA_UH60_Cargo02",1};
			connectTo[] = {"UH60_Cargo02",0.1};
			speed = 0.197;
			variantAfter[] = {5,5,5};
		};
		class UH60_Cargo02_V2: UH60_Cargo02
		{
			file = "\ca\air\Data\Anim\UH60_Cargo02_V2.rtm";
			interpolateTo[] = {"KIA_UH60_Cargo02",1};
			connectTo[] = {"UH60_Cargo02",0.1};
			speed = 0.294;
			variantAfter[] = {3.5,3.5,3.5};
		};
		class UH60_Cargo02_V3: UH60_Cargo02
		{
			file = "\ca\air\Data\Anim\UH60_Cargo02_V3.rtm";
			interpolateTo[] = {"KIA_UH60_Cargo02",1};
			connectTo[] = {"UH60_Cargo02",0.1};
			speed = 0.299;
			variantAfter[] = {3.5,3.5,3.5};
		};
		class UH60_Cargo02_V4: UH60_Cargo02
		{
			file = "\ca\air\Data\Anim\UH60_Cargo02_V4.rtm";
			interpolateTo[] = {"KIA_UH60_Cargo02",1};
			connectTo[] = {"UH60_Cargo02",0.1};
			speed = 0.395;
			variantAfter[] = {2.5,2.5,2.5};
		};
		class UH60_Cargo02_V5: UH60_Cargo02
		{
			file = "\ca\air\Data\Anim\UH60_Cargo02_V5.rtm";
			interpolateTo[] = {"KIA_UH60_Cargo02",1};
			connectTo[] = {"UH60_Cargo02",0.1};
			speed = 0.263;
			variantAfter[] = {4,4,4};
		};
		class KIA_AV8B_Pilot: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\air\Data\Anim\KIA_AV8B_Pilot.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class AV8B_Pilot: Crew
		{
			file = "\ca\air\Data\Anim\AV8B_Pilot.rtm";
			interpolateTo[] = {"KIA_AV8B_Pilot",1};
		};
		class KIA_KA50_Pilot: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\air\Data\Anim\KIA_KA50_Pilot.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class KA50_Pilot: Crew
		{
			file = "\ca\air\Data\Anim\KA50_Pilot.rtm";
			interpolateTo[] = {"KIA_KA50_Pilot",1};
		};
		class KIA_Mi17_Pilot: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\air\Data\Anim\KIA_Mi17_Pilot.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class Mi17_Pilot: Crew
		{
			file = "\ca\air\Data\Anim\Mi17_Pilot.rtm";
			interpolateTo[] = {"KIA_Mi17_Pilot",1};
		};
		class KIA_Mi8_Pilot: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\air\Data\Anim\KIA_Mi8_Pilot.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class Mi8_Pilot: Crew
		{
			file = "\ca\air\Data\Anim\Mi8_Pilot.rtm";
			interpolateTo[] = {"KIA_Mi8_Pilot",1};
		};
		class KIA_Mi17_Gunner: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\air\Data\Anim\KIA_Mi17_Gunner.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class Mi17_Gunner: Crew
		{
			file = "\ca\air\Data\Anim\Mi17_Gunner.rtm";
			interpolateTo[] = {"KIA_Mi17_Gunner",1};
		};
		class KIA_Mi8_Gunner: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\air\Data\Anim\KIA_Mi8_Gunner.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class Mi8_Gunner: Crew
		{
			file = "\ca\air\Data\Anim\Mi8_Gunner.rtm";
			interpolateTo[] = {"KIA_Mi8_Gunner",1};
		};
		class Mi17_Cargo01: Crew
		{
			file = "\ca\air\Data\Anim\Mi17_Pilot.rtm";
			interpolateTo[] = {"KIA_Mi17_Pilot",1};
		};
		class Mi8_Cargo: Crew
		{
			file = "\ca\air\Data\Anim\Mi8_Pilot.rtm";
			interpolateTo[] = {"KIA_Mi8_Pilot",1};
		};
		class KIA_Mi17_Cargo02: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\air\Data\Anim\KIA_Mi17_Cargo02.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class Mi17_Cargo02: Crew
		{
			file = "\ca\air\Data\Anim\Mi17_Cargo02_V0.rtm";
			interpolateTo[] = {"KIA_Mi17_Cargo02",0.1};
			connectTo[] = {"Mi17_Cargo02",0.1,"Mi17_Cargo02_V1",0.1,"Mi17_Cargo02_V2",0.1,"Mi17_Cargo02_V3",0.1,"Mi17_Cargo02_V4",0.1,"Mi17_Cargo02_V5",0.1,"Mi17_Cargo02_V6",0.1};
			equivalentTo = "Mi17_Cargo02";
			variantsAI[] = {"Mi17_Cargo02",0.4,"Mi17_Cargo02_V1",0.1,"Mi17_Cargo02_V2",0.1,"Mi17_Cargo02_V3",0.1,"Mi17_Cargo02_V4",0.1,"Mi17_Cargo02_V5",0.1,"Mi17_Cargo02_V6",0.1};
			variantAfter[] = {5,10,20};
			speed = 0.3;
		};
		class Mi17_Cargo02_V1: Mi17_Cargo02
		{
			file = "\ca\air\Data\Anim\Mi17_Cargo02_V1.rtm";
			interpolateTo[] = {"KIA_Mi17_Cargo02",0.1};
			connectTo[] = {"Mi17_Cargo02",0.1};
			speed = 0.27;
			variantAfter[] = {3.7,3.7,3.7};
		};
		class Mi17_Cargo02_V2: Mi17_Cargo02
		{
			file = "\ca\air\Data\Anim\Mi17_Cargo02_V2.rtm";
			interpolateTo[] = {"KIA_Mi17_Cargo02",0.1};
			connectTo[] = {"Mi17_Cargo02",0.1};
			speed = 0.345;
			variantAfter[] = {3,3,3};
		};
		class Mi17_Cargo02_V3: Mi17_Cargo02
		{
			file = "\ca\air\Data\Anim\Mi17_Cargo02_V3.rtm";
			interpolateTo[] = {"KIA_Mi17_Cargo02",0.1};
			connectTo[] = {"Mi17_Cargo02",0.1};
			speed = 0.2;
			variantAfter[] = {5,5,5};
		};
		class Mi17_Cargo02_V4: Mi17_Cargo02
		{
			file = "\ca\air\Data\Anim\Mi17_Cargo02_V4.rtm";
			interpolateTo[] = {"KIA_Mi17_Cargo02",0.1};
			connectTo[] = {"Mi17_Cargo02",0.1};
			speed = 0.201;
			variantAfter[] = {5,5,5};
		};
		class Mi17_Cargo02_V5: Mi17_Cargo02
		{
			file = "\ca\air\Data\Anim\Mi17_Cargo02_V5.rtm";
			interpolateTo[] = {"KIA_Mi17_Cargo02",0.1};
			connectTo[] = {"Mi17_Cargo02",0.1};
			speed = 0.197;
			variantAfter[] = {5,5,5};
		};
		class Mi17_Cargo02_V6: Mi17_Cargo02
		{
			file = "\ca\air\Data\Anim\Mi17_Cargo02_V6.rtm";
			interpolateTo[] = {"KIA_Mi17_Cargo02",0.1};
			connectTo[] = {"Mi17_Cargo02",0.1};
			speed = 0.345;
			variantAfter[] = {3,3,3};
		};
		class KIA_Camel_Pilot: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\air\Data\Anim\KIA_Camel_Pilot.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class Camel_Pilot: Crew
		{
			file = "\ca\air\Data\Anim\Camel_Pilot.rtm";
			interpolateTo[] = {"KIA_Camel_Pilot",1};
		};
		class KIA_Para_Pilot: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\air\Data\Anim\KIA_Para_Pilot.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class Para_Pilot: Crew
		{
			file = "\ca\air\Data\Anim\Para_Pilot.rtm";
			interpolateTo[] = {"KIA_Para_Pilot",1};
		};
	};
};
class CfgMovesWomen: CfgMovesBasic
{
	class ManActions
	{
		AH1Z_Pilot = "";
		AH1Z_Gunner = "";
		AH6_Pilot = "";
		AH6_Gunner = "";
		MH6_Cargo01 = "Crew";
		MH6_Cargo02 = "Crew";
		MH6_Cargo03 = "Crew";
		UH60_Pilot = "";
		UH60_Gunner = "";
		MH60_Gunner = "";
		UH60_Cargo01 = "Crew";
		UH60_Cargo02 = "Crew";
		AV8B_Pilot = "";
		KA50_Pilot = "";
		Mi17_Pilot = "";
		Mi17_Gunner = "";
		Mi8_Pilot = "";
		Mi8_Gunner = "";
		Mi8_Cargo = "Crew";
		Mi17_Cargo01 = "Crew";
		Mi17_Cargo02 = "Crew";
		Camel_Pilot = "";
		Para_Pilot = "";
	};
};
class DefaultEventhandlers;
class CfgPatches
{
	class CAAir
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {"CACharacters","CACharacters2","CAWeapons","CA_Anims_Char"};
	};
};
class AirplaneHUD
{
	class Pos10Vector;
	class bones
	{
		class AGLMove1;
		class AGLMove2;
		class ASLMove1;
		class ASLMove2;
		class VertSpeed;
		class SpdMove2;
		class ILS;
		class WeaponAim;
		class Target;
		class TargetDistanceMissile;
		class TargetDistanceMGun;
		class Level0;
		class LevelP5;
		class LevelM5;
		class LevelP10;
		class LevelM10;
		class LevelP15;
		class LevelM15;
		class Velocity;
		class PlaneW;
	};
	class Draw
	{
		class Altitude;
		class DimmedBase
		{
			class AltitudeBase;
		};
		class Speed;
		class SpeedNumber;
		class PlaneW
		{
			class LineHL;
			class Velocity;
		};
		class MGun
		{
			class Circle;
		};
		class Missile
		{
			class Circle;
			class Target;
		};
		class Horizont
		{
			class Dimmed
			{
				class Level0;
			};
			class LevelP5;
			class LevelM5;
			class LevelP10;
			class LevelM10;
			class LevelP15;
			class LevelM15;
		};
		class ILS
		{
			class Glideslope
			{
				class ILS;
			};
			class AOABracket;
		};
	};
};
class CfgCoreData
{
	cobraLight = "ca\air\cobraSvetlo.p3d";
	marker = "ca\air\obrysove svetlo.p3d";
};
class CfgVehicles
{
	class AllVehicles;
	class Air: AllVehicles
	{
		class NewTurret;
		class ViewPilot;
		accuracy = 0;
		flareVelocity = 100;
		class AnimationSources;
		class MarkerLights
		{
			class RedStill
			{
				name = "cerveny pozicni";
				color[] = {0.2,0.02,0.02,1};
				ambient[] = {0.3,0.03,0.03,1};
				brightness = 0.01;
				blinking = 0;
			};
			class GreenStill
			{
				name = "zeleny pozicni";
				color[] = {0.02,0.2,0.02,1};
				ambient[] = {0.03,0.3,0.03,1};
				brightness = 0.01;
				blinking = 0;
			};
			class WhiteStill
			{
				name = "bily pozicni";
				color[] = {0.2,0.2,0.2,1};
				ambient[] = {0.03,0.03,0.03,1};
				brightness = 0.01;
				blinking = 0;
			};
			class WhiteBlinking
			{
				name = "bily pozicni blik";
				color[] = {1.0,1.0,1.0,1};
				ambient[] = {0.2,0.2,0.2,1};
				brightness = 0.01;
				blinking = 1;
			};
			class RedBlinking
			{
				name = "cerveny pozicni blik";
				color[] = {1.0,0.05,0.05,1};
				ambient[] = {0.2,0.02,0.02,1};
				brightness = 0.01;
				blinking = 1;
			};
		};
	};
	class Helicopter: Air
	{
		type = 2;
		weapons[] = {};
		magazines[] = {};
		crewVulnerable = 1;
		getInAction = "GetInLow";
		getOutAction = "GetOutLow";
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
		armorStructural = 4;
		secondaryExplosion = -0.1;
		transportMaxBackpacks = 1;
		class HitPoints
		{
			class HitHull
			{
				armor = 1;
				material = 51;
				name = "NEtrup";
				visual = "trup";
				passThrough = 1;
			};
			class HitEngine
			{
				armor = 0.25;
				material = 51;
				name = "motor";
				visual = "motor";
				passThrough = 1;
			};
			class HitAvionics
			{
				armor = 0.15;
				material = 51;
				name = "elektronika";
				visual = "elektronika";
				passThrough = 1;
			};
			class HitVRotor
			{
				armor = 0.3;
				material = 51;
				name = "mala vrtule";
				visual = "mala vrtule staticka";
				passThrough = 0.3;
			};
			class HitHRotor
			{
				armor = 0.2;
				material = 51;
				name = "velka vrtule";
				visual = "velka vrtule staticka";
				passThrough = 0.1;
			};
			class HitMissiles
			{
				armor = 0.1;
				material = 51;
				name = "munice";
				visual = "munice";
				passThrough = 0.5;
			};
			class HitRGlass
			{
				armor = 0.1;
				material = 51;
				name = "sklo predni P";
				visual = "sklo predni P";
				passThrough = 0;
			};
			class HitLGlass
			{
				armor = 0.1;
				material = 51;
				name = "sklo predni L";
				visual = "sklo predni L";
				passThrough = 0;
			};
			class HitGlass1
			{
				armor = 2;
				material = -1;
				name = "glass1";
				visual = "glass1";
				passThrough = 0;
			};
			class HitGlass2
			{
				armor = 2;
				material = -1;
				name = "glass2";
				visual = "glass2";
				passThrough = 0;
			};
			class HitGlass3
			{
				armor = 2;
				material = -1;
				name = "glass3";
				visual = "glass3";
				passThrough = 0;
			};
			class HitGlass4
			{
				armor = 2;
				material = -1;
				name = "glass4";
				visual = "glass4";
				passThrough = 0;
			};
			class HitGlass5
			{
				armor = 2;
				material = -1;
				name = "glass5";
				visual = "glass5";
				passThrough = 0;
			};
			class HitGlass6
			{
				armor = 2;
				material = -1;
				name = "glass6";
				visual = "glass6";
				passThrough = 0;
			};
		};
		class ViewPilot: ViewPilot
		{
			initFov = 1;
			minFov = 0.3;
			maxFov = 1.2;
			initAngleX = 0;
			minAngleX = -65;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -150;
			maxAngleY = 150;
		};
		class Turrets
		{
			class MainTurret: NewTurret
			{
				outGunnerMayFire = 1;
				commanding = -1;
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				memoryPointGun = "machinegun";
				memoryPointGunnerOptics = "gunnerview";
				selectionFireAnim = "zasleh";
				castGunnerShadow = 1;
				viewGunnerShadow = 1;
				gunnerAction = "AH1Z_Gunner";
				gunnerInAction = "AH1Z_Gunner";
				gunnerOpticsModel = "\ca\air\optika_heli_gunner";
				gunnerForceOptics = 0;
				enableManualFire = 0;
				class HitPoints
				{
					class HitTurret
					{
						armor = 0.2;
						material = 51;
						name = "vez";
						visual = "vez";
						passThrough = 0.3;
					};
					class HitGun
					{
						armor = 0.2;
						material = 51;
						name = "zbran";
						visual = "zbran";
						passThrough = 0.1;
					};
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class HitGlass1
			{
				source = "Hit";
				hitpoint = "HitGlass1";
				raw = 1;
			};
			class HitGlass2: HitGlass1
			{
				hitpoint = "HitGlass2";
			};
			class HitGlass3: HitGlass1
			{
				hitpoint = "HitGlass3";
			};
			class HitGlass4: HitGlass1
			{
				hitpoint = "HitGlass4";
			};
			class HitGlass5: HitGlass1
			{
				hitpoint = "HitGlass5";
			};
			class HitGlass6: HitGlass1
			{
				hitpoint = "HitGlass6";
			};
		};
		dammageHalf[] = {};
		dammageFull[] = {};
		supplyRadius = 1.2;
		accuracy = 0.02;
		camouflage = 100;
		audible = 30;
		class Eventhandlers: DefaultEventhandlers{};
		class DestructionEffects{};
	};
	class Plane: Air
	{
		type = 2;
		memoryPointGun = "kulomet";
		soundDammage[] = {"ca\sounds\air\noises\alarm_loop1",0.0001,1};
		getInAction = "GetInHigh";
		getOutAction = "GetOutHigh";
		cargoGetInAction[] = {"GetInHigh"};
		cargoGetOutAction[] = {"GetOutHigh"};
		gunnerGetInAction = "GetInHigh";
		gunnerGetOutAction = "GetOutHigh";
		class ViewPilot: ViewPilot
		{
			initFov = 1;
			minFov = 0.3;
			maxFov = 1.2;
			initAngleX = 0;
			minAngleX = -65;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -150;
			maxAngleY = 150;
		};
		supplyRadius = 1.2;
		accuracy = 0.02;
		camouflage = 100;
		audible = 20;
		class HitPoints
		{
			class HitHull
			{
				armor = 1;
				material = 50;
				name = "telo";
				visual = "trup";
				passThrough = 1;
			};
		};
		class MFD
		{
			class HUD: AirplaneHUD
			{
				borderLeft = 0.09;
				borderRight = 0.02;
				borderTop = 0.02;
				borderBottom = 0.1;
				class pos10vector: Pos10Vector{};
				class bones: bones
				{
					class AGLMove1;
					class AGLMove2;
					class ASLMove1;
					class ASLMove2;
					class VertSpeed;
					class SpdMove2;
					class ILS;
					class WeaponAim;
					class Target;
					class TargetDistanceMissile;
					class TargetDistanceMGun;
					class Level0;
					class LevelP5;
					class LevelM5;
					class LevelP10;
					class LevelM10;
					class LevelP15;
					class LevelM15;
					class Velocity;
					class PlaneW;
				};
				class Draw: Draw
				{
					class Altitude;
					class DimmedBase: DimmedBase
					{
						class AltitudeBase;
					};
					class Speed;
					class SpeedNumber;
					class PlaneW: PlaneW
					{
						class LineHL;
						class Velocity;
					};
					class MGun: MGun
					{
						class Circle;
					};
					class Missile: Missile
					{
						class Circle;
						class Target;
					};
					class Horizont: Horizont
					{
						class Dimmed: Dimmed
						{
							class Level0;
						};
						class LevelP5;
						class LevelM5;
						class LevelP10;
						class LevelM10;
						class LevelP15;
						class LevelM15;
					};
					class ILS: ILS
					{
						class Glideslope: Glideslope
						{
							class ILS;
						};
						class AOABracket;
					};
				};
			};
		};
		class Eventhandlers: DefaultEventhandlers{};
		class DestructionEffects{};
	};
	class UAV: Plane
	{
		camouflage = 150;
		audible = 1;
	};
	class ParachuteBase: Helicopter
	{
		animationOpen = "ca\air\data\anim\para\para_opening.rtm";
		animationDrop = "ca\air\data\anim\para\para_landing.rtm";
		Icon = "\ca\air\data\map_ico\icomap_Para_CA.paa";
		mapSize = 5;
		displayName = "$STR_DN_PARACHUTE";
		camouflage = 2;
		audible = 0;
		castDriverShadow = 1;
		driverAction = "Para_Pilot";
		model = "\ca\air\para";
		picture = "\ca\air\data\ico\Para_CA.paa";
		soundEnviron[] = {"\Ca\sounds\Air\Noises\padak_let",0.31622776,1,80};
		soundGetIn[] = {"\Ca\sounds\Air\Noises\padak_getIN",0.31622776,1,20};
		soundGetOut[] = {"\Ca\sounds\Air\Noises\padak_getIN",0.31622776,1,20};
		soundCrash[] = {"\Ca\sounds\Air\Noises\padak_dopad",0.031622775,1,50};
		soundLandCrash[] = {"\Ca\sounds\Air\Noises\padak_dopad",0.031622775,1,50};
		soundWaterCrash[] = {"\Ca\sounds\Air\Noises\padak_dopadvoda",3.1622777,1,80};
		class ViewPilot: ViewPilot
		{
			initFov = 0.7;
			minFov = 0.25;
			maxFov = 1.1;
			initAngleX = 0;
			minAngleX = -65;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -150;
			maxAngleY = 150;
		};
		occludeSoundsWhenIn = 1.0;
		obstructSoundsWhenIn = 1.0;
		class Turrets{};
		class EventHandlers{};
		class Reflectors{};
		enableGPS = 0;
	};
	class AH1_Base: Helicopter
	{
		scope = 0;
		side = 1;
		faction = "USMC";
		accuracy = 0.5;
		displayName = "$STR_DN_AH1";
	};
	class UH60_Base: Helicopter
	{
		scope = 0;
		side = 1;
		faction = "USMC";
		accuracy = 0.5;
		displayName = "$STR_DN_UH60_Base";
	};
	class HelicopterWreck;
	class PlaneWreck;
	class Mi17_base: Helicopter
	{
		displayName = "$STR_DN_MI8";
		destrType = "DestructWreck";
		vehicleClass = "Air";
		model = "\ca\air\Mi_8MT";
		picture = "\ca\air\data\ico\mi17_hip_mg_CA.paa";
		Icon = "\ca\air\data\map_ico\icomap_mi17_mg_CA.paa";
		mapSize = 25;
		accuracy = 0.5;
		cost = 3000000;
		armor = 25;
		damageResistance = 0.00172;
		backRotorSpeed = -3.0;
		transportMaxBackpacks = 10;
		soundGetIn[] = {"ca\sounds\Air\Mi17\ext\ext-Mi17-getin-01",1.0,1};
		soundGetOut[] = {"ca\sounds\Air\Mi17\ext\ext-Mi17-getout-01",1.0,1,50};
		soundDammage[] = {"ca\sounds\Air\Mi17\int\alarm_loop1",0.001,1};
		soundEngineOnInt[] = {"ca\sounds\Air\Mi17\int\int-Mi17-start-1a",0.56234133,1.0};
		soundEngineOnExt[] = {"ca\sounds\Air\Mi17\ext\ext-Mi17-start-01a",0.7943282,1.0,800};
		soundEngineOffInt[] = {"ca\sounds\Air\Mi17\int\int-Mi17-stop-1a",0.56234133,1.0};
		soundEngineOffExt[] = {"ca\sounds\Air\Mi17\ext\ext-Mi17-stop-01a",0.7943282,1.0,800};
		class Sounds
		{
			class Engine
			{
				sound[] = {"ca\sounds\air\Mi17\ext\ext-sovietheli-engine-6",5.623413,1.0,900};
				frequency = "rotorSpeed";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorLowOut
			{
				sound[] = {"ca\sounds\air\Mi17\ext\ext-Mi17-rotor-low-2",1.7782794,1.0,1400};
				frequency = "rotorSpeed";
				volume = "camPos*(0 max (rotorSpeed-0.1))";
				cone[] = {1.6,3.14,2.0,0.95};
			};
			class RotorHighOut
			{
				sound[] = {"ca\sounds\air\Mi17\ext\ext-Mi17-rotor-high-2",3.1622777,1.0,1700};
				frequency = "rotorSpeed";
				volume = "camPos*10*(0 max (rotorThrust-0.9))";
				cone[] = {1.6,3.14,2.0,0.95};
			};
			class EngineIn
			{
				sound[] = {"ca\sounds\air\Mi17\int\int-sovietheli-engine-3",1.0,1.0};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorLowIn
			{
				sound[] = {"ca\sounds\air\Mi17\int\int-Mi17-rotor-low-2",1.7782794,1.0};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*(0 max (rotorSpeed-0.1))";
			};
			class RotorHighIn
			{
				sound[] = {"ca\sounds\air\Mi17\int\int-Mi17-rotor-high-2",1.7782794,1.0};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*3*(rotorThrust-0.9)";
			};
		};
		maxSpeed = 240;
		driverAction = "Mi8_Pilot";
		cargoIsCoDriver[] = {1,0};
		cargoAction[] = {"Mi8_Cargo","Mi17_Cargo02"};
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment2"};
		enableSweep = 0;
		weapons[] = {};
		magazines[] = {};
		transportSoldier = 16;
		transportAmmo = 0;
		supplyRadius = 2.5;
		type = 2;
		threat[] = {0.6,0.1,0.4};
		enableManualFire = 0;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				body = "mainTurret";
				gun = "mainGun";
				minElev = -80;
				maxElev = 25;
				initElev = -80;
				minTurn = 30;
				maxTurn = 150;
				initTurn = 90;
				soundServo[] = {"",0.01,1.0};
				stabilizedInAxes = "StabilizedInAxesNone";
				gunBeg = "muzzle_1";
				gunEnd = "chamber_1";
				weapons[] = {"PKT"};
				magazines[] = {"100Rnd_762x54_PK","100Rnd_762x54_PK","100Rnd_762x54_PK","100Rnd_762x54_PK","100Rnd_762x54_PK","100Rnd_762x54_PK","100Rnd_762x54_PK","100Rnd_762x54_PK","100Rnd_762x54_PK","100Rnd_762x54_PK","100Rnd_762x54_PK","100Rnd_762x54_PK"};
				gunnerName = "$STR_POSITION_CREWCHIEF";
				gunnerOpticsModel = "\ca\weapons\optika_empty";
				gunnerAction = "Mi8_Gunner";
				gunnerInAction = "Mi8_Gunner";
				gunnerCompartments = "Compartment2";
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
				memoryPointGun = "muzzle_1";
				memoryPointGunnerOptics = "gunnerview";
			};
			class BackTurret: MainTurret
			{
				proxyIndex = 2;
				body = "Turret_2";
				gun = "Gun_2";
				gunnerName = "$STR_POSITION_REARGUNNER";
				weapons[] = {"PKT_2"};
				stabilizedInAxes = "StabilizedInAxesNone";
				animationSourceBody = "Turret_2";
				animationSourceGun = "Gun_2";
				minElev = -80;
				maxElev = 25;
				initElev = -80;
				minTurn = -185;
				maxTurn = -45;
				initTurn = -155;
				gunBeg = "muzzle_2";
				gunEnd = "chamber_2";
				gunnerAction = "Mi8_Gunner";
				gunnerInAction = "Mi8_Gunner";
				gunnerCompartments = "Compartment2";
				memoryPointGun = "muzzle_2";
				memoryPointGunnerOptics = "gunnerview2";
				selectionFireAnim = "zasleh2";
				primaryGunner = 0;
				commanding = -2;
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
		};
		aggregateReflectors[] = {{ "Left","Right" }};
		dammageHalf[] = {};
		dammageFull[] = {};
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\air\Data\mi8_body_amt.rvmat","ca\air\Data\mi8_body_amt_damage.rvmat","ca\air\Data\mi8_body_amt_destruct.rvmat","ca\air\Data\mi8_det_g.rvmat","ca\air\Data\mi8_det_g_damage.rvmat","ca\air\Data\mi8_det_g_destruct.rvmat","ca\air\Data\mi8_glass.rvmat","ca\air\Data\mi8_glass_damage.rvmat","ca\air\Data\mi8_glass_damage.rvmat","ca\air\Data\mi8_glass_in.rvmat","ca\air\Data\mi8_glass_in_damage.rvmat","ca\air\Data\mi8_glass_in_damage.rvmat","ca\air\Data\mi8_inter.rvmat","ca\air\Data\mi8_inter_damage.rvmat","ca\air\Data\mi8_inter_destruct.rvmat","ca\weapons\data\pkm.rvmat","ca\weapons\data\pkm.rvmat","ca\weapons\data\pkm_destruct.rvmat","ca\air\Data\mi8_body_mtv.rvmat","ca\air\Data\mi8_body_mtv_damage.rvmat","ca\air\Data\mi8_body_mtv_destruct.rvmat"};
		};
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "PKT";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "PKT";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "PKT";
			};
			class ReloadAnim_2
			{
				source = "reload";
				weapon = "PKT_2";
			};
			class ReloadMagazine_2
			{
				source = "reloadmagazine";
				weapon = "PKT_2";
			};
			class Revolving_2
			{
				source = "revolving";
				weapon = "PKT_2";
			};
		};
		class Library
		{
			libTextDesc = "$STR_LIB_MI17";
		};
	};
	class Mi17_medevac_base: Mi17_base
	{
		vehicleClass = "Support";
		displayName = "$STR_DN_MI8MED";
		model = "\ca\air\Mi_8AMT";
		picture = "\ca\air\data\ico\mi17_HIP_CA.paa";
		Icon = "\ca\air\data\map_ico\icomap_mi17_amb_CA.paa";
		mapSize = 25;
		accuracy = 1.5;
		weapons[] = {};
		magazines[] = {};
		hasGunner = 0;
		class Turrets{};
		attendant = 1;
		threat[] = {0.0,0.0,0.0};
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
	};
	class ParachuteWest: ParachuteBase
	{
		scope = 1;
		vehicleClass = "Air";
		accuracy = 0.5;
		side = 1;
		faction = "USMC";
		crew = "USMC_SoldierS";
		castDriverShadow = 1;
		typicalCargo[] = {"USMC_SoldierS"};
		Icon = "\ca\air\data\map_ico\icomap_Para_CA.paa";
		mapSize = 5;
	};
	class Parachute: ParachuteWest
	{
		scope = 1;
	};
	class ParachuteEast: ParachuteBase
	{
		scope = 1;
		vehicleClass = "Air";
		accuracy = 0.5;
		side = 0;
		faction = "RU";
		crew = "RUS_Soldier_Sab";
		typicalCargo[] = {"RUS_Soldier_Sab"};
		castDriverShadow = 1;
		Icon = "\ca\air\data\map_ico\icomap_Para_CA.paa";
		mapSize = 5;
	};
	class ParachuteG: ParachuteBase
	{
		scope = 1;
		accuracy = 0.5;
		side = 2;
		faction = "GUE";
		crew = "GUE_Soldier_Scout";
		typicalCargo[] = {"GUE_Soldier_Scout"};
		castDriverShadow = 1;
		Icon = "\ca\air\data\map_ico\icomap_Para_CA.paa";
		mapSize = 5;
	};
	class ParachuteC: ParachuteBase
	{
		scope = 1;
		accuracy = 0.5;
		side = 3;
		faction = "CIV";
		crew = "Citizen1";
		typicalCargo[] = {"Citizen1"};
		castDriverShadow = 1;
		Icon = "\ca\air\data\map_ico\icomap_Para_CA.paa";
		mapSize = 5;
	};
	class ParachuteBigBase: ParachuteBase
	{
		animationOpen = "ca\air\data\anim\paraBig\Para_Big_Start.rtm";
		animationDrop = "ca\air\data\anim\paraBig\Para_Big_Landing.rtm";
		model = "\ca\air\para_Big";
		scope = 0;
		accuracy = 0.5;
		side = 1;
		faction = "USMC";
		crew = "USMC_SoldierS";
		castDriverShadow = 1;
		typicalCargo[] = {"USMC_SoldierS"};
		Icon = "\ca\air\data\map_ico\icomap_Para_CA.paa";
		mapSize = 15;
		displayName = "$STR_DN_PARACARGOBIG";
	};
	class ParachuteMediumBase: ParachuteBase
	{
		animationOpen = "ca\air\data\anim\paraBig\Para_Medium_Start.rtm";
		animationDrop = "ca\air\data\anim\paraBig\Para_Medium_Landing.rtm";
		model = "\ca\air\para_Medium";
		scope = 0;
		accuracy = 0.5;
		side = 1;
		faction = "USMC";
		crew = "USMC_SoldierS";
		castDriverShadow = 1;
		typicalCargo[] = {"USMC_SoldierS"};
		Icon = "\ca\air\data\map_ico\icomap_Para_CA.paa";
		mapSize = 10;
		displayName = "$STR_DN_PARACARGO";
	};
};
class CfgNonAIVehicles
{
	class ProxyDriver;
	class ProxyParasutista: ProxyDriver{};
	class ProxyWeapon;
	class ProxyAGM114Hellfire: ProxyWeapon
	{
		model = "\ca\air\AGM114Hellfire";
		simulation = "maverickweapon";
	};
	class ProxyGBU12: ProxyWeapon
	{
		model = "\ca\air\gbu12";
		simulation = "maverickweapon";
	};
	class ProxyAIM9XSidewinder: ProxyWeapon
	{
		model = "\ca\air\AIM9XSidewinder";
		simulation = "maverickweapon";
	};
	class ProxyFalanga: ProxyWeapon
	{
		model = "\CA\air\falanga";
		simulation = "maverickweapon";
	};
	class ProxyFlag;
	class ProxyFlag_Plane: ProxyFlag
	{
		model = "\ca\air\flag_plane";
	};
	class ProxyFlag_Plane_Big: ProxyFlag
	{
		model = "\ca\air\flag_plane_big";
	};
	class ProxyFab250: ProxyWeapon
	{
		model = "\ca\air\fab250";
		simulation = "maverickweapon";
	};
};
class cfgWeapons
{
	class PKT;
	class PKT_2: PKT{};
	class PKT_3: PKT{};
};
//};

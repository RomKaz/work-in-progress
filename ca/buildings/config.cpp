////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:01:45 2014 : Source 'file' date Fri Oct 31 06:01:45 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class buildings : config.bin{
class CfgPatches
{
	class CABuildings
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAData"};
	};
};
class CfgDestroy
{
	access = 1;
	class BuildingHit
	{
		sound[] = {};
	};
};
class CfgVehicles
{
	class Thing;
	class Building;
	class Strategic;
	class NonStrategic: Building
	{
		class DestructionEffects;
	};
	class HouseBase;
	class Land_VASICore;
	class House: HouseBase
	{
		class DestructionEffects;
	};
	class Ruins;
	class Church: NonStrategic
	{
		class DestructionEffects;
	};
	class Fortress1: Strategic
	{
		scope = 0;
		model = "\ca\buildings\Tents\fortress_01";
		icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "$STR_DN_FORTRESS_1";
		animated = 0;
		vehicleClass = "misc";
		accuracy = 0.2;
		typicalCargo[] = {};
		destrType = "DestructBuilding";
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		mapSize = 11;
		cost = 0;
		armor = 800;
	};
	class Land_Vysilac_FM: House
	{
		scope = 0;
		armor = 150;
		destrType = "DestructBuilding";
		ladders[] = {{ "start","end" }};
		class MarkerLights
		{
			class RedBlinking
			{
				name = "cerveny pozicni blik";
				color[] = {0.64,0.064,0.064,1};
				ambient[] = {0.1,0.01,0.01,1};
				brightness = 0.01;
				blinking = 1;
			};
		};
		class Destruction
		{
			animations[] = {{ "ca\buildings\rtm\vysilac_fm.rtm",0.5,3 }};
		};
		displayName = "$STR_DN_RADAR1";
	};
	class Land_vysilac_FM2: Land_Vysilac_FM
	{
		scope = 0;
		displayName = "$STR_DN_RADAR2";
		icon = "\Ca\buildings\Icons\i_telecom_ca.paa";
		mapSize = 3.5;
		placement = "vertical";
	};
	class Land_vez: House
	{
		scope = 1;
		model = "\ca\buildings\vez";
		ladders[] = {{ "start","end" }};
		armor = 500;
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\ca\buildings\ruins\vez_ruins.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class Land_vez_ruins: Ruins
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\ca\buildings\Ruins\vez_ruins";
	};
	class Land_NavigLight: House
	{
		scope = 1;
		displayName = "";
		model = "\ca\buildings\Misc\NavigLight";
		armor = 50;
		class MarkerLights
		{
			class WhiteStill
			{
				name = "zluty pozicni";
				color[] = {0.99,0.69,0.17,1.0};
				ambient[] = {0.099,0.069,0.017,1.0};
				brightness = 0.02;
				blinking = 0;
			};
		};
	};
	class Land_runway_edgelight: House
	{
		scope = 1;
		displayName = "";
		model = "\ca\buildings\Misc\runway_edgelight";
		armor = 20;
		class MarkerLights
		{
			class RedStill
			{
				name = "zluty pozicni";
				color[] = {0.99,0.69,0.17,1.0};
				ambient[] = {0.099,0.069,0.017,1.0};
				brightness = 0.01;
				blinking = 0;
			};
		};
	};
	class Land_Runway_PAPI: Land_VASICore
	{
		icon = "\ca\data\data\Unknown_object";
		model = "\ca\buildings\Misc\Runway_PAPI";
		scope = 1;
		displayName = "";
		armor = 20;
		vasiRed[] = {1,0,0};
		vasiWhite[] = {1,1,1};
		vasiSlope = 0.095;
		destrType = "DestructTent";
	};
	class Land_Runway_PAPI_2: Land_Runway_PAPI
	{
		model = "\ca\buildings\Misc\Runway_PAPI_2";
		vasiSlope = 0.085;
	};
	class Land_Runway_PAPI_3: Land_Runway_PAPI
	{
		model = "\ca\buildings\Misc\Runway_PAPI_3";
		vasiSlope = 0.075;
	};
	class Land_Runway_PAPI_4: Land_Runway_PAPI
	{
		model = "\ca\buildings\Misc\Runway_PAPI_4";
		vasiSlope = 0.065;
	};
	class Land_Hlidac_budka: House
	{
		scope = 0;
		model = "\ca\buildings\Hlidac_budka";
		displayName = "$STR_MISC_LINE_KEEPER_BOX";
		vehicleClass = "Misc";
		mapSize = 2;
		armor = 200;
		animated = 1;
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\ca\buildings\ruins\Hlidac_budka_ruins.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		class AnimationSources
		{
			class Dvere1
			{
				animPeriod = 1;
			};
		};
		class UserActions
		{
			class OpenDoors1
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "osa_dvere1";
				radius = 2.5;
				onlyForPlayer = 0;
				condition = "this animationPhase ""Dvere1"" >= 0.5";
				statement = "this animate [""Dvere1"", 0]";
			};
			class CloseDoors1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "osa_dvere1";
				radius = 2.5;
				onlyForPlayer = 0;
				condition = "this animationPhase ""Dvere1"" < 0.5";
				statement = "this animate [""Dvere1"", 1]";
			};
		};
		actionBegin1 = "OpenDoors1";
		actionEnd1 = "OpenDoors1";
	};
	class Land_Hlidac_budka_ruins: Ruins
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\ca\buildings\Ruins\Hlidac_budka_ruins";
	};
};
class CfgNonAIVehicles
{
	class StreetLamp
	{
		colorDiffuse[] = {0.9,0.8,0.6};
		colorAmbient[] = {0.02,0.02,0.02};
		brightness = 0.15;
	};
};
class CfgSFX
{
	class Church
	{
		smallBell[] = {"\ca\buildings\Sound\bell1",0.1,1};
		largeBell[] = {"\ca\buildings\Sound\bell2",0.31622776,1};
	};
};
//};

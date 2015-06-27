////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:00:43 2014 : Source 'file' date Fri Oct 31 06:00:43 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=4
enum {
	compartment1 = 1,
	compartment2 = 2,
	compartment3 = 4,
	compartment4 = 8
};

//Class air2 : uh1y\config.bin{
class CfgPatches
{
	class CAAir2_UH1Y
	{
		units[] = {""};
		weapons[] = {};
		requiredVersion = 1.002;
		requiredAddons[] = {"CAAir2","CAWeapons","CACharacters2"};
	};
};
class CfgVehicles
{
	class AllVehicles;
	class Air: AllVehicles
	{
		class Sounds;
	};
	class Helicopter: Air
	{
		class Turrets
		{
			class MainTurret;
		};
		class NewTurret;
		class ViewPilot;
		class AnimationSources;
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
	};
	class UH1_Base: Helicopter
	{
		destrType = "DestructWreck";
		scope = 0;
		displayName = "$STR_DN_UH1Y";
		vehicleClass = "Air";
		class Library
		{
			libTextDesc = "$STR_LIB_UH1Y";
		};
		maxSpeed = 293;
		mainRotorSpeed = 1.2;
		backRotorSpeed = 6.1;
		armor = 30;
		damageResistance = 0.00244;
		irScanRangeMin = 0;
		irScanRangeMax = 1000;
		nightVision = 1;
		memoryPointsGetInCargo[] = {"pos codriver","pos cargo"};
		memoryPointsGetInCargoDir[] = {"pos codriver dir","pos cargo dir"};
		driverAction = "UH1Y_Pilot";
		driverInAction = "UH1Y_Pilot";
		cargoAction[] = {"UH1Y_Cargo02","UH1Y_Cargo03","UH1Y_Cargo03","UH1Y_Cargo02","UH1Y_Cargo01","UH1Y_Cargo01","UH1Y_Cargo01"};
		cargoIsCoDriver[] = {0,0};
		driverCanSee = 31;
		gunnerCanSee = 31;
		gunnerUsesPilotView = 1;
		gunnerOpticsModel = "";
		transportSoldier = 7;
		transportAmmo = 0;
		transportMaxMagazines = 150;
		transportMaxWeapons = 30;
		initCargoAngleY = 10;
		minCargoAngleY = -60;
		maxCargoAngleY = 120;
		minFireTime = 30;
		threat[] = {1,0.05,0.05};
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment2"};
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
		class Reflectors
		{
			class Middle
			{
				color[] = {0.8,0.8,1.0,1.0};
				ambient[] = {0.07,0.07,0.07,1.0};
				position = "svetlo";
				direction = "svetlo konec";
				hitpoint = "svetlo";
				selection = "svetlo";
				size = 1;
				brightness = 1.0;
			};
		};
		dammageHalf[] = {};
		dammageFull[] = {};
		soundGetIn[] = {"\ca\Sounds\Air\Noises\heli_door_01",0.31622776,1};
		soundGetOut[] = {"\ca\Sounds\Air\Noises\heli_door_01",0.31622776,1,40};
		soundEnviron[] = {"",0.031622775,1.0};
		soundDammage[] = {"Ca\sounds\Air\Noises\alarm_loop1",0.31622776,1};
		soundEngineOnInt[] = {"ca\sounds\Air\UH1Y\int\int-start-final",0.4466836,1.0};
		soundEngineOnExt[] = {"ca\sounds\Air\UH1Y\ext\ext-motor-start",0.4466836,1.0,700};
		soundEngineOffInt[] = {"ca\sounds\Air\UH1Y\int\int-stop-final",0.4466836,1.0};
		soundEngineOffExt[] = {"ca\sounds\Air\UH1Y\ext\ext-motor-stop",0.4466836,1.0,700};
		class Sounds: Sounds
		{
			class Engine: Engine
			{
				sound[] = {"ca\sounds\air\uh1y\ext\ext-fly-mode2",2.5118864,1.0,800};
				frequency = "rotorSpeed";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorLowOut
			{
				sound[] = {"ca\sounds\air\uh1y\int\int-rotor-single5b",2.5118864,1.0,1400};
				frequency = "rotorSpeed";
				volume = "camPos*(0 max (rotorSpeed-0.1))";
				cone[] = {1.6,3.14,2.0,0.5};
			};
			class RotorHighOut
			{
				sound[] = {"ca\sounds\air\uh1y\int\int-rotor-single5a",2.5118864,1.0,1600};
				frequency = "rotorSpeed";
				volume = "camPos*10*(0 max (rotorThrust-0.9))";
				cone[] = {1.6,3.14,2.0,0.5};
			};
			class EngineIn
			{
				sound[] = {"ca\sounds\air\uh1y\int\int-fly-mode7",1.0,1.0};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorLowIn
			{
				sound[] = {"ca\sounds\air\uh1y\int\int-rotor-single5b",1.0,1.0};
				frequency = "rotorSpeed";
				volume = "2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
			};
			class RotorHighIn
			{
				sound[] = {"ca\sounds\air\uh1y\int\int-rotor-single5a",1.0,1.0};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*3*(rotorThrust-0.9)";
			};
		};
	};
};
//};

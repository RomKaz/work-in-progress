////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:06:41 2014 : Source 'file' date Fri Oct 31 06:06:41 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class water2 : Seafox\config.bin{
class CfgPatches
{
	class CAWater2_seafox
	{
		units[] = {"seafox"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAWater2"};
	};
};
class CfgVehicles
{
	class Ship;
	class SeaFox: Ship
	{
		scope = 0;
		side = 1;
		faction = "USMC";
		crew = "USMC_Soldier";
		displayName = "$STR_DN_SEAFOX";
		vehicleClass = "Targets";
		model = "\Ca\water2\Seafox\seafox";
		picture = "\ca\water2\data\ui\picture_seafox_CA.paa";
		Icon = "\Ca\water2\Data\UI\icon_seafox_ca.paa";
		mapSize = 8;
		maxSpeed = 150;
		cost = 5000;
		armor = 10;
		damageResistance = 0.00318;
		extCameraPosition[] = {0,4.0,-14.0};
		accuracy = 0.5;
		insideSoundCoef = 1;
		soundEngineOnInt[] = {"ca\sounds\vehicles\water\rhib\ext-boat-start-01",0.1,1.0};
		soundEngineOnExt[] = {"ca\sounds\vehicles\water\rhib\ext-boat-start-01",1.0,1.0,150};
		soundEngineOffInt[] = {"ca\sounds\vehicles\water\rhib\ext-boat-stop-01",0.1,1.0};
		soundEngineOffExt[] = {"ca\sounds\vehicles\water\rhib\ext-boat-stop-01",1.0,1.0,150};
		class Sounds
		{
			class Engine
			{
				sound[] = {"ca\sounds\vehicles\water\rhib\ext-boat-engine-low-01",1.0,0.9,300};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "engineOn*(rpm factor[0.5, 0.1])";
			};
			class EngineHighOut
			{
				sound[] = {"ca\sounds\vehicles\water\rhib\ext-boat-engine-high-01",1.0,0.8,300};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "engineOn*(rpm factor[0.4, 1.3])";
			};
			class IdleOut
			{
				sound[] = {"ca\sounds\vehicles\water\rhib\ext-boat-engine-idle-03",0.56234133,1.0,150};
				frequency = "1";
				volume = "engineOn*(rpm factor[0.3, 0])";
			};
			class WaternoiseOutW0
			{
				sound[] = {"ca\sounds\vehicles\water\water_sfx\ext-water-noise-nospeed",0.39810717,1.0,100};
				frequency = "1";
				volume = "(speed factor[7, 0])";
			};
			class WaternoiseOutW1
			{
				sound[] = {"ca\sounds\vehicles\water\water_sfx\ext-boat-lospd-noise-02",0.39810717,1.0,100};
				frequency = "1";
				volume = "((speed factor[2, 12]) min (speed factor[12, 2]))";
			};
			class WaternoiseOutW2
			{
				sound[] = {"ca\sounds\vehicles\water\water_sfx\ext-boat-hispd-noise-02",0.39810717,1.0,100};
				frequency = "1";
				volume = "(speed factor[9, 18.7])";
			};
		};
		supplyRadius = 3;
		textSingular = "Ship";
		textPlural = "Ships";
		driverAction = "ManActTestDriver";
		cargoAction[] = {};
		transportSoldier = 0;
		class Turrets{};
		class MarkerLights
		{
			class WhiteStill
			{
				name = "bily pozicni";
				color[] = {0.3,0.23,0.056,1.0};
				ambient[] = {0.03,0.023,0.0056,1.0};
				brightness = 0.01;
				blinking = 0;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\water2\Seafox\Data\seafoxrvmat.rvmat","ca\water2\Seafox\Data\seafoxrvmat_damage.rvmat","ca\water2\Seafox\Data\seafoxrvmat_destruct.rvmat"};
		};
	};
	class SeaFox_AllwaysEnemy: SeaFox
	{
		scope = 0;
		side = 5;
	};
};
//};

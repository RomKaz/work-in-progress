////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:00:42 2014 : Source 'file' date Fri Oct 31 06:00:42 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class air2 : chukar\config.bin{
class CfgPatches
{
	class CAAir2_ChukarTarget
	{
		units[] = {"ChukarTarget"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAAir2"};
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
	class Chukar: UAV
	{
		scope = 0;
		side = 1;
		faction = "USMC";
		crew = "USMC_Soldier_Pilot";
		displayName = "$STR_DN_BQM74";
		vehicleClass = "Targets";
		class Library
		{
			libTextDesc = "$STR_LIB_BQM74";
		};
		model = "\CA\air2\Chukar\chukar";
		picture = "\ca\air2\data\UI\Picture_chukar_CA.paa";
		icon = "\ca\air2\data\ui\Icon_chukar_CA.paa";
		mapSize = 4;
		armor = 10;
		damageResistance = 0.00676;
		extCameraPosition[] = {0,2,-30};
		accuracy = 0.5;
		cost = 200000;
		maxSpeed = 407;
		fuelCapacity = 3000;
		class Reflectors{};
		driverAction = "ManActTestDriver";
		cargoAction[] = {};
		transportSoldier = 0;
		threat[] = {0.5,1,0.1};
		aileronSensitivity = 0.5;
		elevatorSensitivity = 0.3;
		noseDownCoef = 0.025;
		landingAoa = "7*DtR";
		gearRetracting = 1;
		ejectSpeed[] = {0,0,0};
		animated = 1;
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
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\air2\Chukar\data\Chukar.rvmat","ca\air2\Chukar\data\Chukar_damage.rvmat","ca\air2\Chukar\data\Chukar_destruct.rvmat"};
		};
		class HitPoints
		{
			class HitHull
			{
				armor = 0.5;
				material = 50;
				name = "trup";
				visual = "";
				passThrough = 1;
			};
		};
	};
	class Chukar_AllwaysEnemy: Chukar
	{
		scope = 0;
		side = 5;
	};
};
//};

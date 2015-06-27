////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:04:45 2014 : Source 'file' date Fri Oct 31 06:04:45 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class missions : som\config.bin{
class CfgPatches
{
	class CA_Missions_SecOps
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAWeapons"};
	};
};
class CfgIdentities
{
	class SOMHQ_EN
	{
		name = "$STR_DN_WARFARE_HQ_BASE_UNFOLDED";
		face = "Face97";
		glasses = "None";
		speaker = "Male03EN";
		pitch = 1.0;
	};
	class SOMHQ_RU: SOMHQ_EN
	{
		speaker = "Male03RU";
	};
	class SOMHQ_CZ: SOMHQ_EN
	{
		speaker = "Male03CZ";
	};
};
class CfgVehicles
{
	class Logic;
	class SecOpManager: Logic
	{
		displayName = "$STR_DN_SECOPMANAGER";
		icon = "\ca\ui\data\icon_som_ca";
		picture = "\ca\ui\data\icon_som_ca";
		vehicleClass = "Modules";
		class Eventhandlers
		{
			init = "private [""_ok""]; _ok = (_this select 0) execVM ""ca\missions\som\data\scripts\init.sqf""";
		};
	};
	class LaserTargetW;
	class LaserTargetE;
	class LaserTargetWStatic: LaserTargetW
	{
		simulation = "house";
		vehicleClass = "";
		coefInside = 0;
		coefInsideHeur = 0;
		cost = 900000;
	};
	class LaserTargetEStatic: LaserTargetE
	{
		simulation = "house";
		vehicleClass = "";
		coefInside = 0;
		coefInsideHeur = 0;
		cost = 900000;
	};
};
class CfgSecOps
{
	class Default
	{
		title = "";
		autoActivate = 1;
		inPool = 1;
		scriptPath = "";
		supportRequest = 0;
		maxCount = 1;
		timeAvailable = 0;
		timeNotAddedAfterUse = 180;
		price = 5000;
	};
	class ambush: Default
	{
		title = "$STR_SOM_AMBUSH_NAME";
	};
	class attack_location: Default
	{
		title = "$STR_SOM_ATTACK_LOC_NAME";
	};
	class reinforce: Default
	{
		title = "$STR_SOM_REINFORCE_NAME";
		inPool = 0;
	};
	class trap: Default
	{
		title = "$STR_SOM_TRAP_NAME";
	};
	class rescue: Default
	{
		title = "$STR_SOM_RESCUE_NAME";
	};
	class patrol: Default
	{
		title = "$STR_SOM_PATROL_NAME";
	};
	class escort: Default
	{
		title = "$STR_SOM_ESCORT_NAME";
	};
	class defend_location: Default
	{
		title = "$STR_SOM_DEFEND_LOC_NAME";
	};
	class destroy: Default
	{
		title = "$STR_SOM_DESTROY_NAME";
	};
	class search: Default
	{
		title = "$STR_SOM_SEARCH_NAME";
	};
	class SupportRequest: Default
	{
		autoActivate = 0;
		inPool = 0;
		supportRequest = 1;
		maxCount = 1;
		timeAvailable = 60;
	};
	class aerial_reconnaissance: SupportRequest
	{
		title = "$STR_SOM_AERIAL_RECON_NAME";
		timeAvailable = 2700;
	};
	class tactical_airstrike: SupportRequest
	{
		title = "$STR_SOM_TACTICAL_STRIKE_NAME";
		maxCount = 2;
		timeAvailable = 1200;
	};
	class artillery_barrage: SupportRequest
	{
		title = "$STR_SOM_ARTY_BARRAGE_NAME";
		timeAvailable = 1800;
	};
	class transport: SupportRequest
	{
		title = "$STR_SOM_TRANSPORT_NAME";
		timeAvailable = 1800;
	};
	class supply_drop: SupportRequest
	{
		title = "$STR_SOM_SUPPLY_NAME";
		timeAvailable = 1200;
	};
};
class CfgMarkers
{
	class Tank
	{
		name = "$STR_SOM_MARKER_TANK";
		icon = "\ca\ui\data\markers\n_armor";
		color[] = {1,0,0,1};
		size = 24;
		shadow = 1;
		scope = 1;
	};
	class Man: Tank
	{
		name = "$STR_SOM_MARKER_MAN";
		icon = "\ca\ui\data\markers\n_inf";
	};
	class Air: Tank
	{
		name = "$STR_SOM_MARKER_AIR";
		icon = "\ca\ui\data\markers\n_air";
	};
	class Car: Tank
	{
		name = "$STR_SOM_MARKER_CAR";
		icon = "\ca\ui\data\markers\n_unknown";
	};
	class Boat: Tank
	{
		name = "$STR_SOM_MARKER_BOAT";
		icon = "\ca\ui\data\markers\n_unknown";
	};
};
class CfgMarkerColors
{
	class ColorRedFaded75
	{
		name = "$STR_SOM_MARKER_COL_RED_75";
		color[] = {1,0,0,0.75};
		scope = 1;
	};
	class ColorRedFaded50
	{
		name = "$STR_SOM_MARKER_COL_RED_50";
		color[] = {1,0,0,0.5};
		scope = 1;
	};
	class ColorRedFaded25
	{
		name = "$STR_SOM_MARKER_COL_RED_25";
		color[] = {1,0,0,0.25};
		scope = 1;
	};
	class ColorGreenFaded75
	{
		name = "$STR_SOM_MARKER_COL_GREEN_75";
		color[] = {0,1,0,0.75};
		scope = 1;
	};
	class ColorGreenFaded50
	{
		name = "$STR_SOM_MARKER_COL_GREEN_50";
		color[] = {0,1,0,0.5};
		scope = 1;
	};
	class ColorGreenFaded25
	{
		name = "$STR_SOM_MARKER_COL_GREEN_25";
		color[] = {0,1,0,0.25};
		scope = 1;
	};
	class ColorGreenFaded20
	{
		name = "$STR_SOM_MARKER_COL_GREEN_20";
		color[] = {0,1,0,0.2};
		scope = 1;
	};
	class ColorBlueFaded75
	{
		name = "$STR_SOM_MARKER_COL_BLUE_75";
		color[] = {0,0,1,0.75};
		scope = 1;
	};
	class ColorBlueFaded50
	{
		name = "$STR_SOM_MARKER_COL_BLUE_50";
		color[] = {0,0,1,0.5};
		scope = 1;
	};
	class ColorBlueFaded25
	{
		name = "$STR_SOM_MARKER_COL_BLUE_25";
		color[] = {0,0,1,0.25};
		scope = 1;
	};
};
//};

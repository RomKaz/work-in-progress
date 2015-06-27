////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:11:10 2014 : Source 'file' date Fri Oct 31 06:11:10 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=8
enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	destructno = 0,
	destructman = 5,
	destructbuilding = 1
};

//Class mp_armory : misc\Red_Light\config.bin{
class CfgPatches
{
	class CAMP_Armory_Misc_Red_Light
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.54;
		requiredAddons[] = {"CAMP_Armory_Misc"};
	};
};
class CfgVehicles
{
	class Nonstrategic;
	class Red_Light_EP1: Nonstrategic
	{
		expansion = 1;
		scope = 1;
		displayName = "$STR_EP1_MPA_MISC_REDLIGHT";
		model = "\Ca\mp_armory\misc\Red_Light\red_light_EP1.p3d";
		mapSize = 2;
		icon = "\ca\data\data\Unknown_object.paa";
		vehicleClass = "Small_items";
		destrType = "destructNo";
	};
	class Red_Light_Blinking_EP1: Red_Light_EP1
	{
		scope = 2;
		model = "\Ca\mp_armory\misc\Red_Light\red_light_blinking_EP1.p3d";
	};
};
//};

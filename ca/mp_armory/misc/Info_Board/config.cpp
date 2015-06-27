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

//Class mp_armory : misc\Info_Board\config.bin{
class CfgPatches
{
	class CAMP_Armory_Misc_Info_Board
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.54;
		requiredAddons[] = {"CAMP_Armory_Misc"};
	};
};
class CfgVehicles
{
	class NonStrategic;
	class Info_Board_EP1: NonStrategic
	{
		expansion = 1;
		scope = 2;
		displayName = "$STR_EP1_MPA_MISC_INFOBOARD";
		vehicleClass = "Signs";
		model = "\Ca\mp_armory\misc\Info_board\info_board_ep1.p3d";
		mapSize = 2;
		hiddenSelections[] = {"board"};
		hiddenSelectionsTextures[] = {};
		destrType = "DestructTree";
	};
};
//};

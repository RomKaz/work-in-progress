////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:04:44 2014 : Source 'file' date Fri Oct 31 06:04:44 2014
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

//Class misc_acr : 3dmarkers\config.bin{
class CfgPatches
{
	class CAMisc_ACR_3DMarkers
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.5;
		requiredAddons[] = {"CAMisc_ACR"};
	};
};
class CfgVehicles
{
	class Helper_Base_EP1;
	class Marker_Basic_ACR: Helper_Base_EP1
	{
		expansion = 3;
		scope = 2;
		model = "Ca\Misc_ACR\3Dmarkers\marker_basic_ACR.p3d";
		displayName = "Marker Basic";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(1,0.5,0.5,0.5,ca)"};
	};
	class Marker_GetIn_ACR: Marker_Basic_ACR
	{
		model = "Ca\Misc_ACR\3Dmarkers\marker_getin_ACR.p3d";
		displayName = "Marker Get In";
	};
	class Marker_Checkpoint_ACR: Marker_Basic_ACR
	{
		model = "Ca\Misc_ACR\3Dmarkers\marker_checkpoint_ACR.p3d";
		displayName = "Marker Checkpoint";
	};
	class Marker_Use_ACR: Marker_Basic_ACR
	{
		model = "Ca\Misc_ACR\3Dmarkers\marker_use_ACR.p3d";
		displayName = "Marker Use";
	};
	class Marker_Waypoint_ACR: Marker_Basic_ACR
	{
		model = "Ca\Misc_ACR\3Dmarkers\marker_waypoint_ACR.p3d";
		displayName = "Marker Waypoint";
	};
};
//};

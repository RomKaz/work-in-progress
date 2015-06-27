////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:04:45 2014 : Source 'file' date Fri Oct 31 06:04:45 2014
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

//Class misc_acr : targets\config.bin{
class CfgPatches
{
	class CAMisc_ACR_Targets
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.5;
		requiredAddons[] = {"CAMisc_ACR"};
	};
};
class CfgVehicles
{
	class TargetE_EP1;
	class TargetStatic_ACR: TargetE_EP1
	{
		expansion = 3;
		scope = 2;
		displayName = "Accuracy target";
		model = "\Ca\Misc_ACR\Targets\target_figure_static_ACR.p3d";
		destrType = "DestructNo";
	};
	class TargetEpopup;
	class TargetPopup_ACR: TargetEpopup
	{
		expansion = 3;
		scope = 2;
		displayName = "Accuracy target (Pop-up)";
		model = "\Ca\Misc_ACR\Targets\target_figure_popup_ACR.p3d";
	};
};
//};

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

//Class mp_armory : misc\config.bin{
class CfgPatches
{
	class CAMP_Armory_Misc
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.54;
		requiredAddons[] = {"CA_E","CAMisc_E","CAMisc3"};
	};
};
class CfgVehicles
{
	class FlagCarrier;
	class FlagCarrierArmex_EP1: FlagCarrier
	{
		expansion = 1;
		scope = 2;
		displayName = "$STR_EP1_MPA_MISC_FLAGCARRIERARMEX";
		accuracy = 1000;
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""Ca\mp_armory\misc\Data\flag_armex_co.paa""";
		};
	};
};
//};

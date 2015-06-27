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

//Class mp_armory : misc\Infostands\config.bin{
class CfgPatches
{
	class CAMP_Armory_Misc_Infostands
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.54;
		requiredAddons[] = {"CAMP_Armory_Misc"};
	};
};
class CfgVehicles
{
	class All;
	class Thing: All
	{
		class AnimationSources;
	};
	class Infostand_1_EP1: Thing
	{
		model = "\Ca\mp_armory\misc\Infostands\infostand_1.p3d";
		hiddenSelections[] = {"camo","camo_background"};
		hiddenSelectionsTextures[] = {"","ca\mp_armory\misc\infostands\data\is_ca.paa"};
		destrType = "DestructNo";
		class AnimationSources: AnimationSources
		{
			class ScaleX_LT
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1e-005;
			};
			class ScaleX_LB: ScaleX_LT{};
			class ScaleX_RT: ScaleX_LT{};
			class ScaleX_RB: ScaleX_LT{};
			class ScaleY_LT
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1e-005;
			};
			class ScaleY_LB: ScaleY_LT{};
			class ScaleY_RT: ScaleY_LT{};
			class ScaleY_RB: ScaleY_LT{};
		};
	};
	class Infostand_2_EP1: Infostand_1_EP1
	{
		model = "\Ca\mp_armory\misc\Infostands\infostand_2.p3d";
	};
};
//};

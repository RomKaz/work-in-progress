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

//Class mp_armory : misc\Sign_Direction\config.bin{
class CfgPatches
{
	class CAMP_Armory_Misc_Sign_Direction
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.54;
		requiredAddons[] = {"CAMP_Armory_Misc"};
	};
};
class CfgVehicles
{
	class Building;
	class NonStrategic: Building
	{
		class AnimationSources;
	};
	class Sign_Direction_EP1: NonStrategic
	{
		expansion = 1;
		scope = 2;
		vehicleClass = "signs";
		displayName = "$STR_EP1_MPA_MISC_DIRECTION";
		model = "\Ca\mp_armory\misc\sign_direction\sign_direction_ep1.p3d";
		mapSize = 2;
		destrType = "DestructTree";
		hiddenSelections[] = {"camo01","camo02","camo03","camo04","camo05","camo06","camo07","camo08"};
		hiddenSelectionsTextures[] = {};
		class AnimationSources: AnimationSources
		{
			class Arrow01_Rotate
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1e-005;
			};
			class Arrow02_Rotate: Arrow01_Rotate{};
			class Arrow03_Rotate: Arrow01_Rotate{};
			class Arrow04_Rotate: Arrow01_Rotate{};
			class Arrow05_Rotate: Arrow01_Rotate{};
			class Arrow06_Rotate: Arrow01_Rotate{};
			class Arrow07_Rotate: Arrow01_Rotate{};
			class Arrow08_Rotate: Arrow01_Rotate{};
			class Arrow01_Hide
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1e-005;
			};
			class Arrow02_Hide: Arrow01_Hide{};
			class Arrow03_Hide: Arrow01_Hide{};
			class Arrow04_Hide: Arrow01_Hide{};
			class Arrow05_Hide: Arrow01_Hide{};
			class Arrow06_Hide: Arrow01_Hide{};
			class Arrow07_Hide: Arrow01_Hide{};
			class Arrow08_Hide: Arrow01_Hide{};
		};
	};
};
//};

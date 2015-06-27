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

//Class misc_acr : shooting_range\config.bin{
class CfgPatches
{
	class CAMisc_ACR_Shooting_range
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.5;
		requiredAddons[] = {"CAMisc_ACR"};
	};
};
class CfgVehicles
{
	class HouseBase;
	class House: HouseBase
	{
		class DestructionEffects;
	};
	class ShootingRange_ACR: House
	{
		expansion = 3;
		scope = 2;
		displayName = "Shooting range";
		model = "\Ca\Misc_ACR\Shooting_range\Shooting_range_ACR.p3d";
		armor = 40;
		vehicleClass = "Misc";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\misc_acr\shooting_range\Shooting_range_ruins_ACR.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class Ruins_EP1;
	class Land_Shooting_range_ruins_ACR: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\Ca\misc_acr\shooting_range\Shooting_range_ruins_ACR.p3d";
	};
};
//};

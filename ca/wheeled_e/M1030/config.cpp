////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:13:37 2014 : Source 'file' date Fri Oct 31 06:13:37 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=4
enum {
	stabilizedinaxisx = 1,
	stabilizedinaxisy = 2,
	stabilizedinaxesboth = 3,
	stabilizedinaxesnone = 0
};

//Class wheeled_e : M1030\config.bin{
class CfgPatches
{
	class CAWheeled_E_M1030
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.04;
		requiredAddons[] = {"CAWheeled_E","CAWheeled3_M1030"};
	};
};
class CfgVehicles
{
	class Motorcycle;
	class M1030: Motorcycle
	{
		model = "ca\wheeled_E\M1030\m1030";
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\wheeled_E\M1030\data\m1030.rvmat","Ca\wheeled_E\M1030\data\m1030_damage.rvmat","Ca\wheeled_E\M1030\data\m1030_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
		HiddenSelections[] = {"camo"};
		HiddenSelectionsTextures[] = {"ca\wheeled3\m1030\data\m1030_co.paa"};
	};
};
//};

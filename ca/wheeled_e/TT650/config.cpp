////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:13:43 2014 : Source 'file' date Fri Oct 31 06:13:43 2014
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

//Class wheeled_e : TT650\config.bin{
class CfgPatches
{
	class CAWheeled_E_TT650
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.04;
		requiredAddons[] = {"CAWheeled_E","CAWheeled3_TT650"};
	};
};
class CfgVehicles
{
	class Motorcycle;
	class TT650_base: Motorcycle
	{
		model = "ca\wheeled_E\TT650\TT650";
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\wheeled_E\TT650\Data\yam650_01.rvmat","Ca\wheeled_E\TT650\Data\yam650_damage.rvmat","Ca\wheeled_E\TT650\Data\yam650_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
	};
};
//};

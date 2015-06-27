////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:13:36 2014 : Source 'file' date Fri Oct 31 06:13:36 2014
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

//Class wheeled_e : Ikarus\config.bin{
class CfgPatches
{
	class CAWheeled_E_Ikarus
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.04;
		requiredAddons[] = {"CAWheeled_E","CAWheeled2_Ikarus"};
	};
};
class CfgVehicles
{
	class Car;
	class Ikarus: Car
	{
		model = "ca\wheeled_E\Ikarus\Ikarus";
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\wheeled_E\Ikarus\Data\Bus_exterior.rvmat","Ca\wheeled_E\Ikarus\Data\Bus_exterior_damage.rvmat","Ca\wheeled_E\Ikarus\Data\Bus_exterior_destruct.rvmat","Ca\wheeled_E\Ikarus\Data\Bus_interior.rvmat","Ca\wheeled_E\Ikarus\Data\Bus_interior_damage.rvmat","Ca\wheeled_E\Ikarus\Data\Bus_interior_destruct.rvmat","Ca\wheeled_E\Ikarus\Data\Bus_windows.rvmat","Ca\wheeled_E\Ikarus\Data\Bus_windows_damage.rvmat","Ca\wheeled_E\Ikarus\Data\Bus_windows_damage.rvmat","Ca\wheeled_E\Ikarus\Data\Bus_windows_in.rvmat","Ca\wheeled_E\Ikarus\Data\Bus_windows_in_damage.rvmat","Ca\wheeled_E\Ikarus\Data\Bus_windows_in_damage.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
	};
};
//};

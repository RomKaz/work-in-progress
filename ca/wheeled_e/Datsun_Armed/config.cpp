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

//Class wheeled_e : Datsun_Armed\config.bin{
class CfgPatches
{
	class CAWheeled_E_Pickup
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.04;
		requiredAddons[] = {"CAWheeled_E","CAWheeled_Pickup"};
	};
};
class CfgVehicles
{
	class Car;
	class Pickup_PK_base: Car
	{
		model = "ca\wheeled_E\Datsun_Armed\datsun_PK";
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\wheeled_E\Datsun_Armed\Data\datsun_trup.rvmat","Ca\wheeled_E\Datsun_Armed\Data\datsun_trup_damage.rvmat","Ca\wheeled_E\Datsun_Armed\Data\datsun_trup_destruct.rvmat","Ca\wheeled_E\Datsun_Armed\Data\datsun_interier.rvmat","Ca\wheeled_E\Datsun_Armed\Data\datsun_interier_damage.rvmat","Ca\wheeled_E\Datsun_Armed\Data\datsun_interier_destruct.rvmat","Ca\wheeled_E\Datsun_Armed\Data\datsun_trup_b.rvmat","Ca\wheeled_E\Datsun_Armed\Data\datsun_trup_b_damage.rvmat","Ca\wheeled_E\Datsun_Armed\Data\datsun_trup_b_destruct.rvmat","Ca\wheeled_E\Data\auta_skla_in.rvmat","Ca\wheeled_E\Data\auta_skla_in_damage.rvmat","Ca\wheeled_E\Data\auta_skla_in_damage.rvmat","Ca\wheeled_E\Data\auta_skla.rvmat","Ca\wheeled_E\Data\auta_skla_damage.rvmat","Ca\wheeled_E\Data\auta_skla_damage.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
	};
};
//};

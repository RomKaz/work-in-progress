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

//Class wheeled_e : Hilux_Armed\config.bin{
class CfgPatches
{
	class CAWheeled_E_Offroad
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.04;
		requiredAddons[] = {"CAWheeled_E","CAWheeled_Offroad"};
	};
};
class CfgVehicles
{
	class Car;
	class Offroad_DSHKM_base: Car
	{
		model = "\ca\wheeled_E\Hilux_Armed\hilux_DSHK";
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\wheeled_E\Hilux_Armed\Data\coyota_trup3.rvmat","Ca\wheeled_E\Hilux_Armed\Data\coyota_trup3_damage.rvmat","Ca\wheeled_E\Hilux_Armed\Data\coyota_trup3_destruct.rvmat","Ca\wheeled_E\Hilux_Armed\Data\drziaky.rvmat","Ca\wheeled_E\Hilux_Armed\Data\drziaky_damage.rvmat","Ca\wheeled_E\Hilux_Armed\Data\drziaky_destruct.rvmat","Ca\wheeled_E\Hilux_Armed\Data\coyota_armed.rvmat","Ca\wheeled_E\Hilux_Armed\Data\coyota_armed_damage.rvmat","Ca\wheeled_E\Hilux_Armed\Data\coyota_armed_destruct.rvmat","Ca\wheeled_E\Hilux_Armed\Data\coyota_interier.rvmat","Ca\wheeled_E\Hilux_Armed\Data\coyota_interier_damage.rvmat","Ca\wheeled_E\Hilux_Armed\Data\coyota_interier_destruct.rvmat","Ca\wheeled_E\Hilux_Armed\Data\coyota_kola.rvmat","Ca\wheeled_E\Hilux_Armed\Data\coyota_kola_damage.rvmat","Ca\wheeled_E\Hilux_Armed\Data\coyota_kola_destruct.rvmat","Ca\wheeled_E\Data\auta_skla_in.rvmat","Ca\wheeled_E\Data\auta_skla_in_damage.rvmat","Ca\wheeled_E\Data\auta_skla_in_damage.rvmat","Ca\wheeled_E\Data\auta_skla.rvmat","Ca\wheeled_E\Data\auta_skla_damage.rvmat","Ca\wheeled_E\Data\auta_skla_damage.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
	};
	class Offroad_SPG9_Gue: Offroad_DSHKM_base
	{
		model = "\ca\wheeled_E\Hilux_Armed\hilux_SPG9";
	};
};
//};

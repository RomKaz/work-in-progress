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

//Class wheeled_e : mtvr\config.bin{
class CfgPatches
{
	class CAWheeled_E_MTVR
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.04;
		requiredAddons[] = {"CAWheeled_E","CAWheeled2_MTVR"};
	};
};
class CfgVehicles
{
	class Truck;
	class MTVR: Truck
	{
		model = "\ca\wheeled_E\MTVR\mtvr";
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\wheeled_E\MTVR\Data\mtvr_interier.rvmat","Ca\wheeled_E\MTVR\Data\mtvr_interier_damage.rvmat","Ca\wheeled_E\MTVR\Data\mtvr_interier_destruct.rvmat","Ca\wheeled_E\MTVR\Data\mtvr_tarp.rvmat","Ca\wheeled_E\MTVR\Data\mtvr_tarp_damage.rvmat","Ca\wheeled_E\MTVR\Data\mtvr_tarp_destruct.rvmat","Ca\wheeled_E\MTVR\Data\mtvr_body2.rvmat","Ca\wheeled_E\MTVR\Data\mtvr_body2_damage.rvmat","Ca\wheeled_E\MTVR\Data\mtvr_body2_destruct.rvmat","Ca\wheeled_E\MTVR\Data\mtvr_body.rvmat","Ca\wheeled_E\MTVR\Data\mtvr_body_damage.rvmat","Ca\wheeled_E\MTVR\Data\mtvr_body_destruct.rvmat","Ca\wheeled_E\MTVR\Data\mtvr_fuel.rvmat","Ca\wheeled_E\MTVR\Data\mtvr_fuel_damage.rvmat","Ca\wheeled_E\MTVR\Data\mtvr_fuel_destruct.rvmat","Ca\wheeled_E\Data\auta_skla_in.rvmat","Ca\wheeled_E\Data\auta_skla_in_damage.rvmat","Ca\wheeled_E\Data\auta_skla_in_damage.rvmat","Ca\wheeled_E\Data\auta_skla.rvmat","Ca\wheeled_E\Data\auta_skla_damage.rvmat","Ca\wheeled_E\Data\auta_skla_damage.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
		class NVGMarkers
		{
			class NVGMarker01
			{
				name = "nvg_marker";
				color[] = {0.03,0.003,0.003,1};
				ambient[] = {0.003,0.0003,0.0003,1};
				brightness = 0.001;
				blinking = 1;
			};
		};
	};
	class MtvrReammo: MTVR
	{
		model = "\ca\wheeled_E\MTVR\mtvr_Ammunition";
	};
	class MtvrRefuel: MTVR
	{
		model = "\ca\wheeled_E\MTVR\mtvr_Fuel";
	};
	class MtvrRepair: MTVR
	{
		model = "\ca\wheeled_E\MTVR\mtvr_Repair";
	};
};
//};

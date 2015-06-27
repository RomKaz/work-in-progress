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

//Class wheeled_e : Ural\config.bin{
class CfgPatches
{
	class CAWheeled_E_Ural
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.04;
		requiredAddons[] = {"CAWheeled_E","CAWheeled","CA_Modules_ARTY"};
	};
};
class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class Truck: Car{};
	class Ural_Base_withTurret: Truck
	{
		model = "\ca\wheeled_E\Ural\ural";
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\wheeled_E\Ural\Data\ural_kabina.rvmat","Ca\wheeled_E\Ural\Data\ural_kabina_damage.rvmat","Ca\wheeled_E\Ural\Data\ural_kabina_destruct.rvmat","Ca\wheeled_E\Ural\Data\ural_plachta.rvmat","Ca\wheeled_E\Ural\Data\ural_plachta_damage.rvmat","Ca\wheeled_E\Ural\Data\ural_plachta_destruct.rvmat","Ca\wheeled_E\Ural\Data\ural_interier.rvmat","Ca\wheeled_E\Ural\Data\ural_interier_damage.rvmat","Ca\wheeled_E\Ural\Data\ural_interier_destruct.rvmat","Ca\wheeled_E\Data\auta_skla_in.rvmat","Ca\wheeled_E\Data\auta_skla_in_damage.rvmat","Ca\wheeled_E\Data\auta_skla_in_damage.rvmat","Ca\wheeled_E\Data\auta_skla.rvmat","Ca\wheeled_E\Data\auta_skla_damage.rvmat","Ca\wheeled_E\Data\auta_skla_damage.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
	};
	class Ural_Base;
	class UralOpen_Base: Ural_Base
	{
		model = "\ca\wheeled_E\Ural\Ural_Open";
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\wheeled_E\Ural\Data\ural_kabina.rvmat","Ca\wheeled_E\Ural\Data\ural_kabina_damage.rvmat","Ca\wheeled_E\Ural\Data\ural_kabina_destruct.rvmat","Ca\wheeled_E\Ural\Data\ural_open.rvmat","Ca\wheeled_E\Ural\Data\ural_open_damage.rvmat","Ca\wheeled_E\Ural\Data\ural_open_destruct.rvmat","Ca\wheeled_E\Ural\Data\ural_interier.rvmat","Ca\wheeled_E\Ural\Data\ural_interier_damage.rvmat","Ca\wheeled_E\Ural\Data\ural_interier_destruct.rvmat","Ca\wheeled_E\Data\auta_skla_in.rvmat","Ca\wheeled_E\Data\auta_skla_in_damage.rvmat","Ca\wheeled_E\Data\auta_skla_in_damage.rvmat","Ca\wheeled_E\Data\auta_skla.rvmat","Ca\wheeled_E\Data\auta_skla_damage.rvmat","Ca\wheeled_E\Data\auta_skla_damage.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
	};
	class UralRepair_Base: Ural_Base
	{
		model = "\ca\wheeled_E\Ural\Ural_repair";
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\wheeled_E\Ural\Data\ural_kabina.rvmat","Ca\wheeled_E\Ural\Data\ural_kabina_damage.rvmat","Ca\wheeled_E\Ural\Data\ural_kabina_destruct.rvmat","Ca\wheeled_E\Ural\Data\ural_repair.rvmat","Ca\wheeled_E\Ural\Data\ural_repair_damage.rvmat","Ca\wheeled_E\Ural\Data\ural_repair_destruct.rvmat","Ca\wheeled_E\Ural\Data\ural_interier.rvmat","Ca\wheeled_E\Ural\Data\ural_interier_damage.rvmat","Ca\wheeled_E\Ural\Data\ural_interier_destruct.rvmat","Ca\wheeled_E\Data\auta_skla_in.rvmat","Ca\wheeled_E\Data\auta_skla_in_damage.rvmat","Ca\wheeled_E\Data\auta_skla_in_damage.rvmat","Ca\wheeled_E\Data\auta_skla.rvmat","Ca\wheeled_E\Data\auta_skla_damage.rvmat","Ca\wheeled_E\Data\auta_skla_damage.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
	};
	class UralReammo_Base: Ural_Base
	{
		model = "\ca\wheeled_E\Ural\Ural_reammo";
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\wheeled_E\Ural\Data\ural_kabina.rvmat","Ca\wheeled_E\Ural\Data\ural_kabina_damage.rvmat","Ca\wheeled_E\Ural\Data\ural_kabina_destruct.rvmat","Ca\wheeled_E\Ural\Data\ural_reammo.rvmat","Ca\wheeled_E\Ural\Data\ural_reammo_damage.rvmat","Ca\wheeled_E\Ural\Data\ural_reammo_destruct.rvmat","Ca\wheeled_E\Ural\Data\ural_interier.rvmat","Ca\wheeled_E\Ural\Data\ural_interier_damage.rvmat","Ca\wheeled_E\Ural\Data\ural_interier_destruct.rvmat","Ca\wheeled_E\Data\auta_skla_in.rvmat","Ca\wheeled_E\Data\auta_skla_in_damage.rvmat","Ca\wheeled_E\Data\auta_skla_in_damage.rvmat","Ca\wheeled_E\Data\auta_skla.rvmat","Ca\wheeled_E\Data\auta_skla_damage.rvmat","Ca\wheeled_E\Data\auta_skla_damage.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
	};
	class UralRefuel_Base: Ural_Base
	{
		model = "\ca\wheeled_E\Ural\Ural_Refuel";
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\wheeled_E\Ural\Data\ural_kabina.rvmat","Ca\wheeled_E\Ural\Data\ural_kabina_damage.rvmat","Ca\wheeled_E\Ural\Data\ural_kabina_destruct.rvmat","Ca\wheeled_E\Ural\Data\ural_open.rvmat","Ca\wheeled_E\Ural\Data\ural_open_damage.rvmat","Ca\wheeled_E\Ural\Data\ural_open_destruct.rvmat","Ca\wheeled_E\Ural\Data\kamaz_fuel.rvmat","Ca\wheeled_E\Ural\Data\kamaz_fuel_damage.rvmat","Ca\wheeled_E\Ural\Data\kamaz_fuel_destruct.rvmat","Ca\wheeled_E\Ural\Data\ural_interier.rvmat","Ca\wheeled_E\Ural\Data\ural_interier_damage.rvmat","Ca\wheeled_E\Ural\Data\ural_interier_destruct.rvmat","Ca\wheeled_E\Data\auta_skla_in.rvmat","Ca\wheeled_E\Data\auta_skla_in_damage.rvmat","Ca\wheeled_E\Data\auta_skla_in_damage.rvmat","Ca\wheeled_E\Data\auta_skla.rvmat","Ca\wheeled_E\Data\auta_skla_damage.rvmat","Ca\wheeled_E\Data\auta_skla_damage.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
	};
	class Ural_ZU23_Base: Ural_Base_withTurret
	{
		model = "\ca\wheeled_E\Ural\Ural_ZU23";
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\wheeled_E\Ural\Data\ural_kabina.rvmat","Ca\wheeled_E\Ural\Data\ural_kabina_damage.rvmat","Ca\wheeled_E\Ural\Data\ural_kabina_destruct.rvmat","Ca\wheeled_E\Ural\Data\ural_open.rvmat","Ca\wheeled_E\Ural\Data\ural_open_damage.rvmat","Ca\wheeled_E\Ural\Data\ural_open_destruct.rvmat","Ca\wheeled_E\Ural\Data\ural_interier.rvmat","Ca\wheeled_E\Ural\Data\ural_interier_damage.rvmat","Ca\wheeled_E\Ural\Data\ural_interier_destruct.rvmat","Ca\wheeled_E\Data\auta_skla_in.rvmat","Ca\wheeled_E\Data\auta_skla_in_damage.rvmat","Ca\wheeled_E\Data\auta_skla_in_damage.rvmat","Ca\wheeled_E\Data\auta_skla.rvmat","Ca\wheeled_E\Data\auta_skla_damage.rvmat","Ca\wheeled_E\Data\auta_skla_damage.rvmat","ca\weapons_e\zu23\data\zu23_base.rvmat","ca\weapons_e\zu23\data\zu23_base.rvmat","Ca\wheeled_E\Ural\Data\zu23_base_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				memoryPointGun[] = {"chase01","chase02"};
			};
		};
	};
	class GRAD_Base: Ural_Base_withTurret
	{
		model = "\ca\wheeled_E\Ural\BM21";
		artilleryScanner = 1;
		ARTY_IsArtyVehicle = 0;
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\wheeled_E\Ural\Data\ural_kabina.rvmat","Ca\wheeled_E\Ural\Data\ural_kabina_damage.rvmat","Ca\wheeled_E\Ural\Data\ural_kabina_destruct.rvmat","Ca\wheeled_E\Ural\Data\ural_bm21.rvmat","Ca\wheeled_E\Ural\Data\ural_bm21_damage.rvmat","Ca\wheeled_E\Ural\Data\ural_bm21_destruct.rvmat","Ca\wheeled_E\Ural\Data\ural_interier.rvmat","Ca\wheeled_E\Ural\Data\ural_interier_damage.rvmat","Ca\wheeled_E\Ural\Data\ural_interier_destruct.rvmat","Ca\wheeled_E\Data\auta_skla_in.rvmat","Ca\wheeled_E\Data\auta_skla_in_damage.rvmat","Ca\wheeled_E\Data\auta_skla_in_damage.rvmat","Ca\wheeled_E\Data\auta_skla.rvmat","Ca\wheeled_E\Data\auta_skla_damage.rvmat","Ca\wheeled_E\Data\auta_skla_damage.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
	};
};
//};

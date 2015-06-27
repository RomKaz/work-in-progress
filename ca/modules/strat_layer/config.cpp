////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:04:58 2014 : Source 'file' date Fri Oct 31 06:04:58 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class modules : strat_layer\config.bin{
class CfgPatches
{
	class CA_Modules_StratLayer
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAUI"};
	};
};
class CfgVehicles
{
	class Logic;
	class StrategicReferenceLayer: Logic
	{
		displayName = "$STR_SRL_NAME";
		icon = "\ca\ui\data\icon_srl_ca";
		picture = "\ca\ui\data\icon_srl_ca";
		vehicleClass = "Modules";
		class Eventhandlers
		{
			init = "private [""_ok""]; _ok = (_this select 0) execVM ""ca\modules\strat_layer\data\scripts\init.sqf""";
		};
	};
};
class CfgLocationTypes
{
	class Strategic;
	class HQ: Strategic
	{
		name = "H.Q.";
		texture = "\ca\modules\strat_layer\data\loc_hq_ca.paa";
		color[] = {0,0,0,1};
		size = 20;
		importance = 40;
	};
	class FOB: HQ
	{
		name = "F.O.B.";
		texture = "\ca\modules\strat_layer\data\loc_fob_ca.paa";
		importance = 20;
	};
	class Airport: Strategic
	{
		name = "$STR_SRL_AIRPORT";
		texture = "\ca\modules\strat_layer\data\loc_airport_ca.paa";
		importance = 20;
	};
	class Heliport: HQ
	{
		name = "$STR_SRL_HELIPORT";
		texture = "\ca\modules\strat_layer\data\loc_heliport_ca.paa";
		importance = 15;
	};
	class Artillery: HQ
	{
		name = "$STR_SRL_ARTILLERY";
		texture = "\ca\modules\strat_layer\data\loc_artillery_ca.paa";
		importance = 10;
	};
	class AntiAir: Artillery
	{
		name = "$STR_SRL_ANTIAIR";
		texture = "\ca\modules\strat_layer\data\loc_antiair_ca.paa";
		importance = 10;
	};
	class City: HQ
	{
		name = "$STR_SRL_CITY";
		texture = "\ca\modules\strat_layer\data\loc_city_ca.paa";
		importance = 15;
	};
	class Strongpoint: HQ
	{
		name = "$STR_SRL_STRONGPOINT";
		texture = "\ca\modules\strat_layer\data\loc_strongpoint_ca.paa";
		importance = 8;
	};
	class Depot: HQ
	{
		name = "$STR_SRL_DEPOT";
		texture = "\ca\modules\strat_layer\data\loc_depot_ca.paa";
		importance = 12;
	};
	class Storage: HQ
	{
		name = "$STR_SRL_STORAGE";
		texture = "";
		importance = 6;
	};
	class PlayerTrail: HQ
	{
		name = "";
		texture = "";
		importance = 1;
	};
	class WarfareStart: PlayerTrail{};
};
//};

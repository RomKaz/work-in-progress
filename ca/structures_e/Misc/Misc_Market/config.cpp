////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:11:59 2014 : Source 'file' date Fri Oct 31 06:11:59 2014
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

//Class structures_e : Misc\Misc_Market\config.bin{
class CfgPatches
{
	class CAStructures_E_Misc_Misc_Market
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {"CAStructures_E_Misc","CAMisc3"};
	};
};
class CfgVehicles
{
	class House;
	class House_EP1: House
	{
		class DestructionEffects;
	};
	class Ruins_EP1;
	class Land_tires_EP1: House_EP1
	{
		scope = 2;
		model = "\ca\Structures_E\Misc\Misc_Market\tires_EP1";
		vehicleClass = "Misc";
		displayName = "$STR_EP1_DN_Land_tires";
	};
	class Land_covering_hut_big_EP1: House_EP1
	{
		scope = 2;
		model = "\ca\Structures_E\Misc\Misc_Market\covering_hut_big_EP1";
		vehicleClass = "Misc";
		displayName = "$STR_EP1_DN_Land_covering_hut_big";
	};
	class Land_bags_EP1: House_EP1
	{
		scope = 2;
		model = "\ca\Structures_E\Misc\Misc_Market\bags_EP1";
		vehicleClass = "Misc";
		displayName = "$STR_EP1_DN_Land_bags";
		destrType = "DestructTent";
	};
	class Land_bags_stack_EP1: House_EP1
	{
		scope = 2;
		model = "\ca\Structures_E\Misc\Misc_Market\bags_stack_EP1";
		vehicleClass = "Misc";
		displayName = "$STR_EP1_DN_Land_bags_stack";
		destrType = "DestructTent";
	};
	class Land_cages_EP1: House_EP1
	{
		scope = 2;
		model = "\ca\Structures_E\Misc\Misc_Market\cages_EP1";
		vehicleClass = "Misc";
		displayName = "$STR_EP1_DN_Land_cages";
	};
	class Land_sunshade_EP1: House_EP1
	{
		scope = 2;
		model = "\ca\Structures_E\Misc\Misc_Market\sunshade_EP1";
		vehicleClass = "Misc";
		displayName = "$STR_EP1_DN_Land_sunshade";
		destrType = "DestructTent";
	};
	class Land_covering_hut_EP1: House_EP1
	{
		scope = 2;
		model = "\ca\Structures_E\Misc\Misc_Market\covering_hut_EP1";
		vehicleClass = "Misc";
		displayName = "$STR_EP1_DN_Land_covering_hut";
	};
	class Land_transport_cart_EP1: House_EP1
	{
		scope = 2;
		model = "\ca\Structures_E\Misc\Misc_Market\transport_cart_EP1";
		vehicleClass = "Misc";
		displayName = "$STR_EP1_DN_Land_transport_cart";
	};
	class Land_transport_crates_EP1: House_EP1
	{
		scope = 2;
		model = "\ca\Structures_E\Misc\Misc_Market\crates_EP1";
		vehicleClass = "Misc";
		displayName = "$STR_EP1_DN_Land_transport_crates";
		destrType = "DestructTent";
	};
	class Land_transport_kiosk_EP1: House_EP1
	{
		scope = 2;
		model = "\ca\Structures_E\Misc\Misc_Market\kiosk_EP1";
		vehicleClass = "Misc";
		displayName = "$STR_EP1_DN_Land_transport_kiosk";
	};
	class Land_stand_small_EP1: House_EP1
	{
		scope = 2;
		model = "\ca\Structures_E\Misc\Misc_Market\stand_small_EP1";
		vehicleClass = "Misc";
		displayName = "$STR_EP1_DN_Land_stand_small";
		destrType = "DestructTent";
	};
	class Land_stand_meat_EP1: House_EP1
	{
		scope = 2;
		model = "\ca\Structures_E\Misc\Misc_Market\stand_meat_EP1";
		vehicleClass = "Misc";
		displayName = "$STR_EP1_DN_Land_stand_meat";
	};
	class Land_stand_waterl_EP1: House_EP1
	{
		scope = 2;
		model = "\ca\Structures_E\Misc\Misc_Market\stand_water_EP1";
		vehicleClass = "Misc";
		displayName = "$STR_EP1_DN_Land_stand_waterl";
	};
	class Land_Crates_stack_EP1: House_EP1
	{
		scope = 2;
		model = "\ca\Structures_E\Misc\Misc_Market\Crates_stack_EP1";
		vehicleClass = "Misc";
		displayName = "$STR_EP1_DN_Land_Crates_stack";
		destrType = "DestructTent";
	};
	class Land_Carpet_rack_EP1: House_EP1
	{
		scope = 2;
		model = "\ca\Structures_E\Misc\Misc_Market\Carpet_rack_EP1";
		vehicleClass = "Misc";
		displayName = "$STR_EP1_DN_Land_Carpet_rack";
	};
	class Land_Market_stalls_01_EP1: House_EP1
	{
		scope = 2;
		model = "\ca\Structures_E\Misc\Misc_Market\Market_stalls_01_EP1";
		vehicleClass = "Misc";
		displayName = "$STR_EP1_DN_Land_Market_stalls_01";
	};
	class Land_Market_stalls_02_EP1: House_EP1
	{
		scope = 2;
		model = "\ca\Structures_E\Misc\Misc_Market\Market_stalls_02_EP1";
		vehicleClass = "Misc";
		displayName = "$STR_EP1_DN_Land_Market_stalls_02";
	};
	class Land_Market_shelter_EP1: House_EP1
	{
		scope = 2;
		model = "\ca\Structures_E\Misc\Misc_Market\Market_shelter_EP1";
		vehicleClass = "Misc";
		displayName = "$STR_EP1_DN_Land_Market_shelter";
		destrType = "DestructTent";
	};
	class NonStrategic;
	class Fort_Crate_wood: NonStrategic
	{
		scope = 2;
		vehicleClass = "Misc";
	};
};
//};

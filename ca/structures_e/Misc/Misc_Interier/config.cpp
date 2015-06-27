////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:11:58 2014 : Source 'file' date Fri Oct 31 06:11:58 2014
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

//Class structures_e : Misc\Misc_Interier\config.bin{
class CfgPatches
{
	class CAStructures_E_Misc_Misc_Interier
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {"CAMisc3","CAStructures_E_Misc"};
	};
};
class CfgVehicles
{
	class Thing;
	class NonStrategic;
	class Thing_EP1: Thing
	{
		expansion = 1;
		scope = 1;
		mapSize = 2;
		destrType = "DestructNo";
		class DestructionEffects{};
	};
	class Thing_NoInteractive_EP1: NonStrategic
	{
		expansion = 1;
		scope = 1;
		mapSize = 2;
		destrType = "DestructNo";
		class DestructionEffects{};
	};
	class Small_Items;
	class Small_Items_EP1: Small_Items
	{
		expansion = 1;
		scope = 1;
		mapSize = 2;
		destrType = "DestructNo";
		class DestructionEffects{};
	};
	class Land_Wheel_cart_EP1: Thing_EP1
	{
		scope = 2;
		model = "\ca\Structures_E\Misc\Misc_Interier\Wheel_cart_EP1";
		vehicleClass = "Misc";
		displayName = "$STR_EP1_DN_Land_Wheel_cart";
	};
	class Land_Reservoir_EP1: Thing_EP1
	{
		scope = 2;
		model = "\ca\Structures_E\Misc\Misc_Interier\Reservoir_EP1";
		vehicleClass = "Misc";
		displayName = "$STR_EP1_DN_Land_Reservoir";
	};
	class Land_Carpet_EP1: Thing_NoInteractive_EP1
	{
		scope = 2;
		model = "\CA\Structures_E\Misc\Misc_Interier\Carpet_EP1";
		vehicleClass = "Furniture";
		displayName = "$STR_EP1_DN_Land_Carpet";
	};
	class Land_Table_small_EP1: Thing_EP1
	{
		scope = 2;
		model = "\CA\Structures_E\Misc\Misc_Interier\Table_small_EP1";
		vehicleClass = "Furniture";
		displayName = "$STR_EP1_DN_Land_Table_small";
	};
	class Land_Blankets_EP1: Thing_NoInteractive_EP1
	{
		scope = 2;
		model = "\CA\Structures_E\Misc\Misc_Interier\Blankets_EP1";
		vehicleClass = "Furniture";
		displayName = "$STR_EP1_DN_Land_Blankets";
	};
	class Land_Pillow_EP1: Small_Items_EP1
	{
		scope = 2;
		model = "\CA\Structures_E\Misc\Misc_Interier\Pillow_EP1";
		vehicleClass = "Furniture";
		displayName = "$STR_EP1_DN_Land_Pillow";
	};
	class Land_Carpet_2_EP1: Thing_NoInteractive_EP1
	{
		scope = 2;
		model = "\CA\Structures_E\Misc\Misc_Interier\Carpet_2_EP1";
		vehicleClass = "Furniture";
		displayName = "$STR_EP1_DN_Land_Carpet_2";
	};
	class Land_Cabinet_EP1: Thing_EP1
	{
		scope = 2;
		model = "\CA\Structures_E\Misc\Misc_Interier\Cabinet_EP1";
		vehicleClass = "Furniture";
		displayName = "$STR_EP1_DN_Land_Cabinet";
	};
	class Land_Rack_EP1: Thing_EP1
	{
		scope = 2;
		model = "\CA\Structures_E\Misc\Misc_Interier\Rack_EP1";
		vehicleClass = "Furniture";
		displayName = "$STR_EP1_DN_Land_Rack";
	};
	class Land_Chest_EP1: Thing_EP1
	{
		scope = 2;
		model = "\CA\Structures_E\Misc\Misc_Interier\Chest_EP1";
		vehicleClass = "Furniture";
		displayName = "$STR_EP1_DN_Land_Chest";
	};
	class Land_Shelf_EP1: Thing_EP1
	{
		scope = 2;
		model = "\CA\Structures_E\Misc\Misc_Interier\Shelf_EP1";
		vehicleClass = "Furniture";
		displayName = "$STR_EP1_DN_Land_Shelf";
	};
	class Land_Table_EP1: Thing_EP1
	{
		scope = 2;
		model = "\CA\Structures_E\Misc\Misc_Interier\Table_EP1";
		vehicleClass = "Furniture";
		displayName = "$STR_EP1_DN_Land_Table";
	};
	class Land_Bench_EP1: Thing_EP1
	{
		scope = 2;
		model = "\CA\Structures_E\Misc\Misc_Interier\Bench_EP1";
		vehicleClass = "Furniture";
		displayName = "$STR_EP1_DN_Land_Bench";
	};
	class Land_Crates_EP1: Thing_NoInteractive_EP1
	{
		scope = 2;
		model = "\CA\Structures_E\Misc\Misc_Interier\Crates_EP1";
		vehicleClass = "Furniture";
		displayName = "$STR_EP1_DN_Land_Crates";
	};
	class Land_Bucket_EP1: Small_Items_EP1
	{
		scope = 2;
		model = "\CA\Structures_E\Misc\Misc_Interier\Bucket_EP1";
		vehicleClass = "Furniture";
		displayName = "$STR_EP1_DN_Land_Bucket";
	};
	class Land_Bowl_EP1: Small_Items_EP1
	{
		scope = 2;
		model = "\CA\Structures_E\Misc\Misc_Interier\Bowl_EP1";
		vehicleClass = "Furniture";
		displayName = "$STR_EP1_DN_Land_Bowl";
	};
	class Land_Teapot_EP1: Small_Items_EP1
	{
		scope = 2;
		model = "\CA\Structures_E\Misc\Misc_Interier\Teapot_EP1";
		vehicleClass = "Furniture";
		displayName = "$STR_EP1_DN_Land_Teapot";
	};
	class Land_Water_pipe_EP1: Small_Items_EP1
	{
		scope = 2;
		model = "\CA\Structures_E\Misc\Misc_Interier\Water_pipe_EP1";
		vehicleClass = "Furniture";
		displayName = "$STR_EP1_DN_Land_Water_pipe";
	};
	class Land_Boots_EP1: Thing_NoInteractive_EP1
	{
		scope = 2;
		model = "\CA\Structures_E\Misc\Misc_Interier\Boots_EP1";
		vehicleClass = "Furniture";
		displayName = "$STR_EP1_DN_Land_Boots";
	};
	class Land_Chair_EP1: Small_Items_EP1
	{
		scope = 2;
		model = "\CA\Structures_E\Misc\Misc_Interier\Chair_EP1";
		vehicleClass = "Furniture";
		displayName = "$STR_EP1_DN_Land_Chair";
	};
	class Land_Canister_EP1: Small_Items_EP1
	{
		scope = 2;
		model = "\CA\Structures_E\Misc\Misc_Interier\Canister_EP1";
		vehicleClass = "Furniture";
		displayName = "$STR_EP1_DN_Land_Canister";
	};
	class Land_Vase_loam_EP1: Small_Items_EP1
	{
		scope = 2;
		model = "\CA\Structures_E\Misc\Misc_Interier\Vase_loam_EP1";
		vehicleClass = "Furniture";
		displayName = "$STR_EP1_DN_Land_Vase_loam";
	};
	class Land_Vase_loam_2_EP1: Land_Vase_loam_EP1
	{
		scope = 2;
		model = "\CA\Structures_E\Misc\Misc_Interier\Vase_loam_2_EP1";
		displayName = "$STR_EP1_DN_Land_Vase_loam_2";
		accuracy = 1000;
	};
	class Land_Vase_loam_3_EP1: Land_Vase_loam_EP1
	{
		scope = 2;
		model = "\CA\Structures_E\Misc\Misc_Interier\Vase_loam_3_EP1";
		displayName = "$STR_EP1_DN_Land_Vase_loam_3";
		accuracy = 1000;
	};
	class Land_Urn_EP1: Small_Items_EP1
	{
		scope = 2;
		model = "\CA\Structures_E\Misc\Misc_Interier\Urn_EP1";
		vehicleClass = "Furniture";
		displayName = "$STR_EP1_DN_Land_Urn";
	};
	class Land_Vase_EP1: Small_Items_EP1
	{
		scope = 2;
		model = "\CA\Structures_E\Misc\Misc_Interier\Vase_EP1";
		vehicleClass = "Furniture";
		displayName = "$STR_EP1_DN_Land_Vase";
	};
	class Land_Wicker_basket_EP1: Small_Items_EP1
	{
		scope = 2;
		model = "\CA\Structures_E\Misc\Misc_Interier\Wicker_basket_EP1";
		vehicleClass = "Furniture";
		displayName = "$STR_EP1_DN_Land_Wicker_basket";
	};
	class Land_Basket_EP1: Small_Items_EP1
	{
		scope = 2;
		model = "\CA\Structures_E\Misc\Misc_Interier\Basket_EP1";
		vehicleClass = "Furniture";
		displayName = "$STR_EP1_DN_Land_Basket";
	};
	class Land_Bag_EP1: Small_Items_EP1
	{
		scope = 2;
		model = "\CA\Structures_E\Misc\Misc_Interier\Bag_EP1";
		vehicleClass = "Furniture";
		displayName = "$STR_EP1_DN_Land_Bag";
	};
	class Land_Sack_EP1: Small_Items_EP1
	{
		scope = 2;
		model = "\CA\Structures_E\Misc\Misc_Interier\Sack_EP1";
		vehicleClass = "Furniture";
		displayName = "$STR_EP1_DN_Land_Sack";
	};
};
//};

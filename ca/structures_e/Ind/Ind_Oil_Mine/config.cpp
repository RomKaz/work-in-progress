////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:11:57 2014 : Source 'file' date Fri Oct 31 06:11:57 2014
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

//Class structures_e : Ind\Ind_Oil_Mine\config.bin{
class CfgPatches
{
	class CAStructures_E_Ind_Oil_Mine
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {"CAStructures_E_Ind"};
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
	class Land_Ind_Oil_Pump_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\Ind\Ind_Oil_Mine\Ind_Oil_Pump_EP1";
		vehicleClass = "Test";
		ladders[] = {{ "start","end" }};
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\Ind_Oil_Pump:\verHistory\AB_packlog\Ind\Ind_Oil_Mine\Ind_Oil_Pump_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		featureSize = 10;
		simulation = "fountain";
		sound = "Oil_pump";
	};
	class Land_Ind_Oil_Tower_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\Ind\Ind_Oil_Mine\Ind_Oil_Tower_EP1";
		vehicleClass = "Test";
		ladders[] = {{ "start","end" },{ "start2","end2" }};
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\Ind_Oil_Tower:\verHistory\AB_packlog\Ind\Ind_Oil_Mine\Ind_Oil_Tower_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		featureSize = 32;
	};
	class Land_Ind_Oil_Tower_ruins_EP1: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\Ca\Structures_E\Ind\Ind_Oil_Mine\Ind_Oil_Tower_ruins_EP1";
	};
	class Land_Ind_Oil_Pump_ruins_EP1: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\Ca\Structures_E\Ind\Ind_Oil_Mine\Ind_Oil_Pump_ruins_EP1";
	};
};
//};

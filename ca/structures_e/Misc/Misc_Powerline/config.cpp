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

//Class structures_e : Misc\Misc_Powerline\config.bin{
class CfgPatches
{
	class CAStructures_E_Misc_Misc_powerline
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {"CAStructures_E_Misc"};
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
	class Land_PowLineA_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\Misc\Misc_Powerline\PowLineA_EP1";
		vehicleClass = "Test";
	};
	class Land_PowLineB_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\Misc\Misc_Powerline\PowLineB_EP1";
		vehicleClass = "Test";
	};
	class Land_PowLines_Conc1_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\Misc\Misc_Powerline\PowLines_Conc1_EP1";
		vehicleClass = "Test";
	};
	class Land_PowLines_Conc2_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\Misc\Misc_Powerline\PowLines_Conc2_EP1";
		vehicleClass = "Test";
	};
	class Land_PowLines_Conc2A_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\Misc\Misc_Powerline\PowLines_Conc2A_EP1";
		vehicleClass = "Test";
	};
	class Land_PowLines_Transformer1_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\Misc\Misc_Powerline\PowLines_Transformer1_EP1";
		vehicleClass = "Test";
	};
	class Land_PowLine_wire_BB_EP1: House_EP1
	{
		scope = 1;
		armor = 10;
		model = "\ca\Structures_E\Misc\Misc_Powerline\PowLine_wire_BB_EP1";
		vehicleClass = "Test";
		class DestructionEffects
		{
			class DestroyPhase1
			{
				simulation = "destroy";
				type = "DelayedDestruction";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class Land_PowLine_wire_AB_EP1: House_EP1
	{
		scope = 1;
		armor = 10;
		model = "\ca\Structures_E\Misc\Misc_Powerline\PowLine_wire_AB_EP1";
		vehicleClass = "Test";
		class DestructionEffects
		{
			class DestroyPhase1
			{
				simulation = "destroy";
				type = "DelayedDestruction";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class Land_PowLine_wire_A_left_EP1: House_EP1
	{
		scope = 1;
		armor = 10;
		model = "\ca\Structures_E\Misc\Misc_Powerline\PowLine_wire_A_left_EP1";
		vehicleClass = "Test";
		class DestructionEffects
		{
			class DestroyPhase1
			{
				simulation = "destroy";
				type = "DelayedDestruction";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class Land_PowLine_wire_A_right_EP1: House_EP1
	{
		scope = 1;
		armor = 10;
		model = "\ca\Structures_E\Misc\Misc_Powerline\PowLine_wire_A_right_EP1";
		vehicleClass = "Test";
		class DestructionEffects
		{
			class DestroyPhase1
			{
				simulation = "destroy";
				type = "DelayedDestruction";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
};
class CfgNonAIVehicles
{
	class StreetLamp_EP1;
	class Land_PowLines_Conc2L_EP1: StreetLamp_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\Misc\Misc_Powerline\PowLines_Conc2L_EP1";
		colorDiffuse[] = {0.6,0.7,0.85,0.0};
		colorAmbient[] = {0.07,0.1,0.15,0.0};
		brightness = 0.15;
	};
};
//};

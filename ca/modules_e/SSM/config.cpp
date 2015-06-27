////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:11:08 2014 : Source 'file' date Fri Oct 31 06:11:08 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class modules_e : SSM\config.bin{
class CfgPatches
{
	class CA_Support
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAData"};
	};
};
class CfgVehicles
{
	class Logic;
	class BIS_Support: Logic
	{
		displayName = "$STR_EP1_config.cppCfgVehicles_BIS_Support0";
		icon = "\ca\ui\data\icon_effects_ca.paa";
		picture = "\ca\ui\data\icon_effects_ca.paa";
		vehicleClass = "Modules";
		class Eventhandlers
		{
			init = " _this execVM '\ca\modules_e\ssm\data\scripts\init.sqf' ";
		};
	};
};
class CfgIdentities
{
	class SSMHQ
	{
		name = "$STR_DN_WARFARE_HQ_BASE_UNFOLDED";
		face = "Face97";
		glasses = "None";
		speaker = "Male01EN";
		pitch = 1.0;
	};
	class SSMHQ_EN: SSMHQ
	{
		speaker = "Male01EN";
	};
	class SSMHQ_RU: SSMHQ
	{
		speaker = "Male01RU";
	};
	class SSMHQ_CZ: SSMHQ
	{
		speaker = "Male01CZ";
	};
	class SSMHQ_TK: SSMHQ
	{
		speaker = "Male01TK";
	};
	class SSMHQ_DE: SSMHQ
	{
		speaker = "Male01EN";
	};
};
//};

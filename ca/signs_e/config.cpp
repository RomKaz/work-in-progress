////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:11:26 2014 : Source 'file' date Fri Oct 31 06:11:26 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class signs_e : config.bin{
class CfgPatches
{
	class CASigns_E
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.04;
		requiredAddons[] = {"CA_E","WarfareBuildings","CAMisc3"};
	};
};
class CfgVehicles
{
	class WarfareBunkerSign;
	class SignM_FARP_Winchester_EP1: WarfareBunkerSign
	{
		expansion = 1;
		vehicleClass = "signs";
		displayName = "$STR_EP1_DN_SignM_FARP_Winchester";
		hiddenSelectionsTextures[] = {"ca\Signs_E\SignM\Data\SignM_FARP_Winchester_CO"};
		icon = "\Ca\misc\data\icons\i_danger_CA.paa";
		mapSize = 0.7;
	};
	class SignM_FOB_Blanik_EP1: WarfareBunkerSign
	{
		expansion = 1;
		vehicleClass = "signs";
		displayName = "$STR_EP1_DN_SignM_FOB_Blanik";
		hiddenSelectionsTextures[] = {"ca\Signs_E\SignM\Data\SignM_FOB_Blanik_CO"};
		icon = "\Ca\misc\data\icons\i_danger_CA.paa";
		mapSize = 0.7;
	};
	class SignM_FOB_Prostejov_EP1: WarfareBunkerSign
	{
		expansion = 1;
		vehicleClass = "signs";
		displayName = "$STR_EP1_DN_SignM_FOB_Prostejov";
		hiddenSelectionsTextures[] = {"ca\Signs_E\SignM\Data\SignM_FOB_Prostejov_CO"};
		icon = "\Ca\misc\data\icons\i_danger_CA.paa";
		mapSize = 0.7;
	};
	class SignM_UN_Base_EP1: WarfareBunkerSign
	{
		expansion = 1;
		vehicleClass = "signs";
		displayName = "$STR_EP1_DN_SignM_UN_Base";
		hiddenSelectionsTextures[] = {"ca\Signs_E\SignM\Data\SignM_UN_Base_CO"};
		icon = "\Ca\misc\data\icons\i_danger_CA.paa";
		mapSize = 0.7;
	};
	class SignM_FOB_Revolve_EP1: WarfareBunkerSign
	{
		expansion = 1;
		vehicleClass = "signs";
		displayName = "$STR_EP1_DN_SignM_FOB_Revolve";
		hiddenSelectionsTextures[] = {"ca\Signs_E\SignM\Data\SignM_FOB_Revolver_CO"};
		icon = "\Ca\misc\data\icons\i_danger_CA.paa";
		mapSize = 0.7;
	};
};
//};

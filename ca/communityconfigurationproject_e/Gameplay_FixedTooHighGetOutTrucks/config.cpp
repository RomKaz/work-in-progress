////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:14:01 2014 : Source 'file' date Fri Oct 31 06:14:01 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : Gameplay_FixedTooHighGetOutTrucks\config.bin{
class cfgPatches
{
	class CA_CommunityConfigurationProject_E_Gameplay_FixedTooHighGetOutTrucks
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CA_CommunityConfigurationProject_E"};
	};
};
class CfgVehicles
{
	class Truck;
	class Ural_Base_withTurret: Truck
	{
		getInAction = "GetInMedium";
		getOutAction = "GetOutMedium";
		cargoGetInAction[] = {"GetInMedium","GetInMedium","GetInHigh"};
		cargoGetOutAction[] = {"GetOutMedium","GetOutMedium","GetOutHigh"};
	};
	class Ural_ZU23_Base: Ural_Base_withTurret
	{
		getInAction = "GetInMedium";
		getOutAction = "GetOutMedium";
		cargoGetInAction[] = {"GetInMedium","GetInMedium","GetInHigh"};
		cargoGetOutAction[] = {"GetOutLow","GetOutLow","GetOutHigh"};
	};
	class Kamaz_Base: Truck
	{
		getInAction = "GetInMedium";
		getOutAction = "GetOutLow";
		cargoGetInAction[] = {"GetInMedium","GetInMedium","GetInMedium"};
		cargoGetOutAction[] = {"GetOutLow","GetOutLow","GetOutMedium"};
	};
	class MTVR: Truck
	{
		getInAction = "GetInMedium";
		getOutAction = "GetOutLow";
		cargoGetInAction[] = {"GetInMedium","GetInMedium","GetInMedium"};
		cargoGetOutAction[] = {"GetOutLow","GetOutLow","GetOutMedium"};
	};
	class V3S_Base: Truck
	{
		getInAction = "GetInMedium";
		getOutAction = "GetOutLow";
		cargoGetInAction[] = {"GetInMedium","GetInMedium","GetInMedium"};
		cargoGetOutAction[] = {"GetOutLow","GetOutLow","GetOutMedium"};
	};
	class T810_Turrets_Base_ACR: Truck
	{
		getInAction = "GetInMedium";
		getOutAction = "GetOutMedium";
	};
	class MAZ_543_SCUD_Base_EP1: Truck
	{
		getInAction = "GetInLow";
		getOutAction = "GetOutLow";
		cargoGetInAction[] = {"GetInLow","GetInLow","GetInLow"};
		cargoGetOutAction[] = {"GetOutLow","GetOutLow","GetOutLow"};
	};
};
//};

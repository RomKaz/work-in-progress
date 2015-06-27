////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:14:01 2014 : Source 'file' date Fri Oct 31 06:14:01 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : Gameplay_FixedTransportCapabilitiesShipsAndBoats\config.bin{
class cfgPatches
{
	class CA_CommunityConfigurationProject_E_Gameplay_FixedTransportCapabilitiesShipsAndBoats
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CA_CommunityConfigurationProject_E"};
	};
};
class CfgVehicles
{
	class AllVehicles;
	class Ship: AllVehicles{};
	class Fishing_Boat: Ship
	{
		transportMaxMagazines = 400;
		transportMaxWeapons = 40;
		transportMaxBackpacks = 8;
	};
	class Smallboat_1: Ship
	{
		transportMaxMagazines = 200;
		transportMaxWeapons = 20;
		transportMaxBackpacks = 4;
	};
	class Boat: Ship
	{
		transportMaxMagazines = 100;
		transportMaxWeapons = 10;
		transportMaxBackpacks = 2;
	};
	class RubberBoat: Boat
	{
		transportMaxMagazines = 50;
		transportMaxWeapons = 5;
		transportMaxBackpacks = 1;
	};
};
//};

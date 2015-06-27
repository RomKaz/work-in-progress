////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:04:58 2014 : Source 'file' date Fri Oct 31 06:04:58 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class modules : CoIn\config.bin{
class CfgPatches
{
	class CA_Modules_Coin
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgVehicles
{
	class Logic;
	class ConstructionManager: Logic
	{
		displayName = "$STR_COIN_NAME";
		icon = "\ca\ui\data\icon_COIN_ca.paa";
		picture = "\ca\ui\data\icon_COIN_ca.paa";
		vehicleClass = "Modules";
		class Eventhandlers
		{
			init = "if (isServer) then {private [""_ok""];_ok = _this execVM ""ca\modules\coin\data\scripts\coin.sqf""};";
		};
	};
};
class CfgDefaultKeysMapping
{
	User1[] = {17};
	User2[] = {31};
	User3[] = {30};
	User4[] = {32};
	User5[] = {16};
	User6[] = {44};
	User7[] = {72};
	User8[] = {80};
	User9[] = {75};
	User10[] = {77};
	User11[] = {42,54};
	User12[] = {57};
	User13[] = {210};
	User14[] = {211};
	User15[] = {};
	User16[] = {};
	User17[] = {};
	User18[] = {};
	User19[] = {};
	User20[] = {};
};
//};

////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:04:32 2014 : Source 'file' date Fri Oct 31 06:04:32 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class misc : config.bin{
class CfgPatches
{
	class CAMisc
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAData","CAUI"};
	};
};
class CfgDamageAround
{
	class DamageAroundPole
	{
		radiusRatio = "0.3";
		indirectHit = "900";
	};
};
class CfgDestructPos
{
	class DelayedDestruction
	{
		timeBeforeHiding = "0.2";
		hideDuration = "0.65+lifeTime*0.05";
	};
};
class cfgVehicles
{
	class Thing;
	class Strategic;
	class NonStrategic;
	class House;
	class Static;
	class Land_fuel_tank_small: Strategic
	{
		scope = 0;
		icon = "\Ca\misc\data\icons\i_fuel_CA.paa";
		armor = 50;
		accuracy = 0.5;
		destrType = "DestructEngine";
	};
	class Land_Fuel_tank_big: Land_fuel_tank_small
	{
		scope = 2;
		model = "\ca\misc\Fuel_tank_big.p3d";
		icon = "\Ca\misc\data\icons\i_fuel_CA.paa";
		displayName = "$STR_DN_FUEL_STATION";
	};
};
//};

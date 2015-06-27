////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:11:59 2014 : Source 'file' date Fri Oct 31 06:11:59 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class structures_e : Misc\Misc_Water\config.bin{
class CfgPatches
{
	class CAStructures_E_Misc_Misc_Water
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.5;
		requiredAddons[] = {"CAStructures_E_Misc"};
	};
};
class CfgSurfaces
{
	class Default;
	class Freshwater: Default
	{
		access = 2;
		files = "watersurface*";
		rough = 0.0;
		dust = 0.0;
		soundEnviron = "water";
		friction = 0.9;
		restitution = 0;
		isWater = 1;
		character = "Empty";
		impact = "default_Mat";
	};
};
//};

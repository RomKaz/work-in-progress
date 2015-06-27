////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:13:23 2014 : Source 'file' date Fri Oct 31 06:13:23 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class weapons_e : Mk19_minitripod\config.bin{
class CfgPatches
{
	class CAWeapons_E_Mk19_MiniTriPod
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.04;
		requiredAddons[] = {"CAWeapons_E"};
	};
};
class CfgVehicles
{
	class Mk19_TriPod;
	class Mk19_TriPod_Base: Mk19_TriPod
	{
		model = "\Ca\weapons_E\Mk19_minitripod\mk19_stat";
	};
};
//};

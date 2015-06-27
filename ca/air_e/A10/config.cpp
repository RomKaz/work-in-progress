////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:07:34 2014 : Source 'file' date Fri Oct 31 06:07:34 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class air_e : A10\config.bin{
class CfgPatches
{
	class CAAir_E_A10
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAAir_E"};
	};
};
class CfgVehicles
{
	class A10;
	class A10_base: A10
	{
		model = "\Ca\Air_E\A10\A10";
	};
};
//};

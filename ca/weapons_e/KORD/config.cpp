////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:13:22 2014 : Source 'file' date Fri Oct 31 06:13:22 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class weapons_e : KORD\config.bin{
class CfgPatches
{
	class CAWeapons_E_KORD
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.04;
		requiredAddons[] = {"CAWeapons_E","CAWeapons"};
	};
};
class CfgVehicles
{
	class KORD_high;
	class KORD_high_Base: KORD_high
	{
		model = "\Ca\weapons_E\KORD\KORD_6u16sp";
	};
	class StaticMGWeapon;
	class KORD_Base: StaticMGWeapon
	{
		model = "\Ca\weapons_E\KORD\KORD";
		soundGetOut[] = {"Ca\sounds\Weapons\machineguns\m2gun_inout",0.001,1,45};
		soundGetIn[] = {"Ca\sounds\Weapons\machineguns\m2gun_inout",0.00031622776,1,45};
	};
};
//};

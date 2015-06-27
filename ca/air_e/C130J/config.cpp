////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:07:35 2014 : Source 'file' date Fri Oct 31 06:07:35 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=8
enum {
	stabilizedinaxisx = 1,
	compartment1 = 1,
	stabilizedinaxisy = 2,
	compartment2 = 2,
	stabilizedinaxesboth = 3,
	compartment3 = 4,
	compartment4 = 8,
	stabilizedinaxesnone = 0
};

//Class air_e : C130J\config.bin{
class CfgPatches
{
	class CAAir_E_C130J
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.04;
		requiredAddons[] = {"CAAir2_C130J","CAAir_E"};
	};
};
class CfgVehicles
{
	class Plane;
	class C130J: Plane
	{
		model = "\ca\air_E\c130j\c130j.p3d";
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\Air_E\C130J\DATA\c130j_sklo.rvmat","Ca\Air_E\C130J\DATA\c130j_sklo_damage.rvmat","Ca\Air_E\C130J\DATA\c130j_sklo_damage.rvmat","Ca\Air_E\C130J\DATA\c130j_sklo_in.rvmat","Ca\Air_E\C130J\DATA\c130j_sklo_in_damage.rvmat","Ca\Air_E\C130J\DATA\c130j_sklo_in_damage.rvmat","Ca\Air_E\C130J\DATA\c130j_body.rvmat","Ca\Air_E\C130J\DATA\c130j_body_damage.rvmat","Ca\Air_E\C130J\DATA\c130j_body_destruct.rvmat","Ca\Air_E\C130J\DATA\c130j_interior.rvmat","Ca\Air_E\C130J\DATA\c130j_interior_damage.rvmat","Ca\Air_E\C130J\DATA\c130j_interior_destruct.rvmat","Ca\Air_E\C130J\DATA\c130j_wings.rvmat","Ca\Air_E\C130J\DATA\c130j_wings_damage.rvmat","Ca\Air_E\C130J\DATA\c130j_wings_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"ca\air2\c130j\data\c130j_body_co.paa","ca\air_e\c130j\data\c130j_wings_co.paa"};
	};
};
//};

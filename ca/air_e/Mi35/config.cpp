////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:07:36 2014 : Source 'file' date Fri Oct 31 06:07:36 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class air_e : Mi35\config.bin{
class CfgPatches
{
	class CAAir_E_Mi24
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.04;
		requiredAddons[] = {"CAAir_E","CAAir2"};
	};
};
class CfgVehicles
{
	class Helicopter;
	class Mi24_Base: Helicopter
	{
		model = "\ca\air_E\Mi35\mi24_v.p3d";
		transportMaxBackpacks = 10;
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\Air_E\Mi35\Data\mi35_sklo.rvmat","Ca\Air_E\Mi35\Data\mi35_sklo_damage.rvmat","Ca\Air_E\Mi35\Data\mi35_sklo_damage.rvmat","Ca\Air_E\Mi35\Data\mi35_sklo_interier.rvmat","Ca\Air_E\Mi35\Data\mi35_sklo_interier_damage.rvmat","Ca\Air_E\Mi35\Data\mi35_sklo_interier_damage.rvmat","Ca\Air_E\Mi35\Data\mi35_001.rvmat","Ca\Air_E\Mi35\Data\mi35_001_damage.rvmat","Ca\Air_E\Mi35\Data\mi35_001_destruct.rvmat","Ca\Air_E\Mi35\Data\mi35_002.rvmat","Ca\Air_E\Mi35\Data\mi35_002_damage.rvmat","Ca\Air_E\Mi35\Data\mi35_002_destruct.rvmat","Ca\Air_E\Mi35\Data\mi35_003.rvmat","Ca\Air_E\Mi35\Data\mi35_003_damage.rvmat","Ca\Air_E\Mi35\Data\mi35_003_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
	};
	class Mi24_Base_RU;
	class Mi24_P: Mi24_Base_RU
	{
		model = "\ca\air_E\Mi35\mi24_p.p3d";
	};
	class Mi24_Base_CDF;
	class Mi24_D: Mi24_Base_CDF
	{
		model = "\ca\air_E\Mi35\mi35.p3d";
	};
};
//};

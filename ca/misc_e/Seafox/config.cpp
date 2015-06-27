////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:10:47 2014 : Source 'file' date Fri Oct 31 06:10:47 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class misc_e : Seafox\config.bin{
class CfgPatches
{
	class CAWater2_seafox_EP1
	{
		units[] = {""};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAWater2","CAWater2_seafox"};
	};
};
class CfgVehicles
{
	class SeaFox;
	class SeaFox_EP1: SeaFox
	{
		htMin = 60;
		htMax = 1800;
		afMax = 200;
		mfMax = 100;
		mFact = 0;
		tBody = 0;
		scope = 2;
		expansion = 1;
		model = "Ca\Misc_E\Seafox\seafox.p3d";
		faction = "BIS_US";
		crew = "US_Soldier_EP1";
		typicalCargo[] = {"US_Soldier_EP1"};
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\Misc_E\Seafox\data\seafoxrvmat.rvmat","Ca\Misc_E\Seafox\data\seafoxrvmat_damage.rvmat","Ca\Misc_E\Seafox\data\seafoxrvmat_destruct.rvmat"};
		};
	};
	class SeaFox_AllwaysEnemy;
	class SeaFox_AllwaysEnemy_EP1: SeaFox_AllwaysEnemy
	{
		htMin = 60;
		htMax = 1800;
		afMax = 200;
		mfMax = 100;
		mFact = 0;
		tBody = 0;
		scope = 1;
		expansion = 1;
		model = "Ca\Misc_E\Seafox\seafox.p3d";
		faction = "BIS_US";
		crew = "US_Soldier_EP1";
		typicalCargo[] = {"US_Soldier_EP1"};
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\Misc_E\Seafox\data\seafoxrvmat.rvmat","Ca\Misc_E\Seafox\data\seafoxrvmat_damage.rvmat","Ca\Misc_E\Seafox\data\seafoxrvmat_destruct.rvmat"};
		};
	};
};
//};

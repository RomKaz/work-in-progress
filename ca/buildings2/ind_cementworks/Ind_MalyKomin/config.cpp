////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:01:48 2014 : Source 'file' date Fri Oct 31 06:01:48 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class buildings2_ind_cementworks : Ind_MalyKomin\config.bin{
class CfgPatches
{
	class Ind_MalyKomin
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAData","CABuildings","CABuildings2"};
	};
};
class cfgVehicles
{
	class HouseBase;
	class House: HouseBase
	{
		class DestructionEffects;
	};
	class Ruins;
	class Land_Ind_MalyKomin: House
	{
		scope = 1;
		armor = 100;
		featureSize = 40;
		model = "\Ca\buildings2\Ind_CementWorks\Ind_MalyKomin\Ind_MalyKomin";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\ca\Buildings2\Ind_CementWorks\Ind_MalyKomin\Ind_MalyKomin_ruins";
				position = "";
				intensity = 1;
				interval = 0.05;
				lifeTime = 1;
			};
		};
		ladders[] = {{ "start","end" }};
		class MarkerLights
		{
			class RedBlinking
			{
				name = "CervBlik";
				color[] = {0.64,0.064,0.064,1};
				ambient[] = {0.1,0.01,0.01,1};
				brightness = 0.01;
				blinking = 1;
			};
		};
	};
	class Land_Ind_MalyKomin_ruins: Ruins
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\ca\Buildings2\Ind_CementWorks\Ind_MalyKomin\Ind_MalyKomin_ruins";
	};
};
//};

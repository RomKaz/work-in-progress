////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:01:47 2014 : Source 'file' date Fri Oct 31 06:01:47 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class buildings2 : ind_tank\config.bin{
class CfgPatches
{
	class Ind_Tank
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAData","CABuildings","CABuildings2"};
	};
};
class CfgVehicles
{
	class HouseBase;
	class House: HouseBase
	{
		class DestructionEffects;
	};
	class Ruins;
	class Land_Ind_TankBig: House
	{
		scope = 1;
		armor = 390;
		animated = 1;
		model = "\Ca\buildings2\Ind_Tank\Ind_TankBig";
		icon = "\Ca\buildings2\data\Icons\icon_tankBig_ca.paa";
		mapSize = 15;
		ladders[] = {{ "start","end" }};
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\ca\buildings2\Ind_Tank\Ind_TankBig_ruins";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class Land_Ind_TankBig_ruins: Ruins
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\ca\buildings2\Ind_Tank\Ind_TankBig_ruins";
	};
	class Land_Ind_TankSmall: House
	{
		scope = 2;
		vehicleClass = "Misc";
		armor = 50;
		model = "\Ca\buildings2\Ind_Tank\Ind_TankSmall";
		displayName = "$STR_DN_Ind_TankSmall";
		icon = "\Ca\buildings2\data\Icons\icon_tankSmall_ca.paa";
		mapSize = 5.5;
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\ca\buildings2\Ind_Tank\Ind_Tanksmall_ruins";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class Land_Ind_TankSmall2: Land_Ind_TankSmall
	{
		scope = 0;
		model = "\Ca\buildings2\Ind_Tank\Ind_TankSmall2";
		displayName = "$STR_DN_Ind_TankSmall2";
	};
	class Land_Ind_TankSmall_ruins: Ruins
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\ca\buildings2\Ind_Tank\Ind_TankSmall_ruins";
	};
	class Land_Ind_TankSmall2_ruins: Land_Ind_TankSmall_ruins{};
};
//};

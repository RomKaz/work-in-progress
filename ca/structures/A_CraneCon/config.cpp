////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:06:06 2014 : Source 'file' date Fri Oct 31 06:06:06 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class structures : A_CraneCon\config.bin{
class CfgPatches
{
	class CAStructures_A_CraneCon
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAStructures"};
	};
};
class CfgVehicles
{
	class HouseBase;
	class House: HouseBase
	{
		class DestructionEffects;
	};
	class Land_A_CraneCon: House
	{
		scope = 1;
		featureSize = 40;
		model = "\CA\Structures\A_CraneCon\A_CraneCon";
		destrType = "DestructBuilding";
		armor = 110;
		ladders[] = {{ "start1","end1" }};
		class Destruction
		{
			animations[] = {{ "Ca\Structures\A_CraneCon\Data\anim\crane_con.rtm",0.5,3 }};
		};
	};
};
//};

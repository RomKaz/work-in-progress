////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:11:57 2014 : Source 'file' date Fri Oct 31 06:11:57 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=8
enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	destructno = 0,
	destructman = 5,
	destructbuilding = 1
};

//Class structures_e : Ind\Ind_Pipes\config.bin{
class CfgPatches
{
	class CAStructures_E_Ind_IndPipes
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.04;
		requiredAddons[] = {"CAStructures_E_Ind"};
	};
};
class CfgVehicles
{
	class House_EP1;
	class Land_IndPipe1_stair_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\Ind\Ind_Pipes\IndPipe1_stair_EP1";
	};
	class Land_IndPipe2_big_18ladder_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\Ind\Ind_Pipes\IndPipe2_big_18ladder_EP1";
		ladders[] = {{ "start1","end1" }};
	};
	class Land_IndPipe2_bigL_R_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\Ind\Ind_Pipes\IndPipe2_bigL_R_EP1";
		ladders[] = {{ "start1","end1" }};
	};
	class Land_IndPipe2_bigL_L_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\Ind\Ind_Pipes\IndPipe2_bigL_L_EP1";
		ladders[] = {{ "start1","end1" }};
	};
	class Land_IndPipe2_bigBuild1_R_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\Ind\Ind_Pipes\IndPipe2_bigBuild1_R_EP1";
		ladders[] = {{ "start1","end1" }};
	};
	class Land_IndPipe2_bigBuild1_L_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\Ind\Ind_Pipes\IndPipe2_bigBuild1_L_EP1";
		ladders[] = {{ "start1","end1" }};
	};
	class Land_IndPipe2_bigBuild2_L_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\Ind\Ind_Pipes\IndPipe2_bigBuild2_L_EP1";
		ladders[] = {{ "start1","end1" }};
	};
	class Land_IndPipe2_bigBuild2_R_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\Ind\Ind_Pipes\IndPipe2_bigBuild2_R_EP1";
		ladders[] = {{ "start1","end1" }};
	};
	class Land_IndPipe2_big_ground1_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\Ind\Ind_Pipes\IndPipe2_big_ground1_EP1";
		ladders[] = {{ "start1","end1" }};
	};
	class Land_IndPipe2_big_ground2_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\Ind\Ind_Pipes\IndPipe2_big_ground2_EP1";
		ladders[] = {{ "start1","end1" }};
	};
};
//};

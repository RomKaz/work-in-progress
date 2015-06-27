////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:01:47 2014 : Source 'file' date Fri Oct 31 06:01:47 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class buildings2 : ind_pipeline\indpipe1\config.bin{
class CfgPatches
{
	class CAStructures_IndPipe1_todo_delete
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAStructures"};
	};
};
class CfgVehicles
{
	class House;
	class Land_IndPipe1_stair_todo_delete: House
	{
		model = "\ca\Structures\Ind_Pipeline\IndPipe1\IndPipe1_stair";
	};
};
//};

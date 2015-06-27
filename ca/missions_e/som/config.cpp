////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:11:08 2014 : Source 'file' date Fri Oct 31 06:11:08 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class missions_e : som\config.bin{
class CfgPatches
{
	class CA_Missions_E_SecOps
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CA_Missions_SecOps"};
	};
};
class CfgSecOps
{
	class SupportRequest;
	class gunship_run: SupportRequest
	{
		title = "$STR_SOM_GUNSHIP_RUN_NAME";
		maxCount = 2;
		timeAvailable = 1200;
		scriptPath = "ca\missions_e\som\data\scripts\secops\gunship_run\";
	};
};
//};

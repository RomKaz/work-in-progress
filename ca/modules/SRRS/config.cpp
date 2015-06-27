////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:04:58 2014 : Source 'file' date Fri Oct 31 06:04:58 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class modules : SRRS\config.bin{
class CfgPatches
{
	class BI_SRRS
	{
		units[] = {"BIS_SRRS_Logic"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAData"};
	};
};
class CfgVehicles
{
	class Logic;
	class BIS_SRRS_Logic: Logic
	{
		displayName = "$STR_SRRS_NAME";
		icon = "\ca\ui\data\icon_srrs_ca.paa";
		picture = "\ca\ui\data\icon_srrs_ca.paa";
		vehicleClass = "Modules";
		class Eventhandlers
		{
			init = "_ok = _this execVM '\ca\modules\srrs\data\scripts\init.sqf'";
		};
	};
};
class CfgSounds
{
	class SRRSTestVoiceSample
	{
		name = "SRRS Test Voice Sample";
		sound[] = {"\ca\dubbing\GLOBAL\RADIO\dan\damn",1.0,1.0};
		titles[] = {};
	};
};
//};

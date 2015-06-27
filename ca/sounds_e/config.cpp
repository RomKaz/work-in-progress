////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:11:33 2014 : Source 'file' date Fri Oct 31 06:11:33 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class sounds_e : config.bin{
class CfgPatches
{
	class CASounds_E
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.04;
		requiredAddons[] = {"CA_E","CASounds"};
	};
};
class CfgSFX
{
	class Sirene_EP1
	{
		sounds[] = {"sound1"};
		name = "$STR_EP1_DN_CfgSFX_Sirene_EP1";
		sound1[] = {"\ca\Sounds_E\sfx\Sirene01",0.31622776,1,300,1,1.0,1.0,1.0};
		empty[] = {"",0,0,0,0,0,0,0};
	};
	class Preview
	{
		effect[] = {"ca\Sounds_E\Weapons_E\SA58\sa58_burst_1.wss",1.0,1.0};
	};
};
class CfgSounds
{
	class Oil_pump
	{
		name = "$STR_EP1_DN_CfgSounds_Oil_pump";
		sound[] = {"\CA\Sounds_e\sfx\Oil_pump",1.7782794,1.0,250};
		titles[] = {};
	};
};
//};

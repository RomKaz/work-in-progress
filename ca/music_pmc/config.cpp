////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:05:04 2014 : Source 'file' date Fri Oct 31 06:05:04 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class MUSIC_PMC : config.bin{
class CfgPatches
{
	class CAMusic_PMC
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.54;
		requiredAddons[] = {"CASounds","CA_PMC"};
	};
};
class CfgMusic
{
	class PMC_Track01
	{
		name = "$STR_PMC_MUSIC_TRACK01";
		sound[] = {"\ca\music_PMC\PMC_Track01_GhostTown.ogg",1.0,1.0};
		duration = 180;
	};
	class PMC_Track02
	{
		name = "$STR_PMC_MUSIC_TRACK02";
		sound[] = {"\ca\music_PMC\PMC_Track02_NoMansLand.ogg",1.0,1.0};
		duration = 197;
	};
	class PMC_Track03
	{
		name = "$STR_PMC_MUSIC_TRACK03";
		sound[] = {"\ca\music_PMC\PMC_Track03_Escalation.ogg",1.0,1.0};
		duration = 57;
	};
	class PMC_Track04
	{
		name = "$STR_PMC_MUSIC_TRACK04";
		sound[] = {"\ca\music_PMC\PMC_Track04_Termination.ogg",1.0,1.0};
		duration = 130;
	};
	class PMC_Track05
	{
		name = "$STR_PMC_MUSIC_TRACK05";
		sound[] = {"\ca\music_PMC\PMC_Track05_Deception.ogg",1.0,1.0};
		duration = 77;
	};
	class PMC_Track06
	{
		name = "$STR_PMC_MUSIC_TRACK06";
		sound[] = {"\ca\music_PMC\PMC_Track06_GroundZero.ogg",1.0,1.0};
		duration = 193;
	};
};
//};

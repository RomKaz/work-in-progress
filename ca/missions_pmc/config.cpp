////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:04:57 2014 : Source 'file' date Fri Oct 31 06:04:57 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class MISSIONS_PMC : config.bin{
class CfgPatches
{
	class CA_Missions_PMC
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.54;
		requiredAddons[] = {"CA_PMC","CAUI"};
	};
};
class CfgMissions
{
	class Campaigns
	{
		class PMC
		{
			directory = "ca\missions_pmc\campaign";
		};
	};
};
class CfgIdentities
{
	class PMC_Poet
	{
		name = "Brian Frost";
		face = "FacePoet";
		glasses = "BlackSun";
		speaker = "Male01_GB_EN_PMC";
		pitch = 1.0;
	};
	class PMC_Poet_NoGlasses: PMC_Poet
	{
		glasses = "none";
	};
	class PMC_Poet_Hidden: PMC_Poet
	{
		name = "Poet";
	};
	class PMC_Ry
	{
		name = "Henry Asano";
		face = "Face124_PMC";
		glasses = "None";
		speaker = "Male04_GB_EN_PMC";
		pitch = 1.0;
	};
	class PMC_Reynolds
	{
		name = "Mark Reynolds";
		face = "FaceStranger";
		glasses = "GreenSun";
		speaker = "Male02EN";
		pitch = 1.0;
	};
	class PMC_Reynolds_NoGlasses: PMC_Reynolds
	{
		glasses = "none";
	};
	class PMC_Dixon
	{
		name = "Patrick Dixon";
		face = "Face01";
		glasses = "None";
		speaker = "Male02_GB_EN_PMC";
		pitch = 1.0;
	};
	class PMC_Tanny
	{
		name = "'Tanny' Radcliffe";
		face = "Face107";
		glasses = "None";
		speaker = "Male03_GB_EN_PMC";
		pitch = 1.0;
	};
	class PMC_Ruce
	{
		name = "Ivan Ruce";
		face = "Face01";
		glasses = "None";
		speaker = "Male05EN";
		pitch = 1.0;
	};
	class PMC_Community1
	{
		name = "Roland Saunderson";
		face = "Face97";
		glasses = "None";
		speaker = "Male04EN";
		pitch = 1.0;
	};
	class PMC_Community2
	{
		name = "James Eckersley";
		face = "Face87";
		glasses = "None";
		speaker = "Male05EN";
		pitch = 1.0;
	};
	class PMC_Abdul
	{
		name = "Abdul";
		face = "Face11_EP1";
		glasses = "Spectacles";
		speaker = "Male01TK";
		pitch = 1;
	};
};
class CfgWeapons
{
	class ItemCore;
	class PMC_documents: ItemCore
	{
		scope = 2;
		displayName = "$STR_DN_EVIDENCEMAP";
		descriptionShort = "$STR_DN_EVIDENCEPHOTO";
		picture = "\CA\misc\data\icons\picture_maps_CA.paa";
		canDrop = 0;
	};
};
class CfgSounds
{
	class PMC_ElectricBlast1
	{
		scope = 1;
		name = "PMC - Electric Blast 1";
		sound[] = {"\ca\missions_pmc\data\sounds\electric-blast1.wss",0.56234133,1};
		titles[] = {};
	};
	class PMC_ElectricBlast2
	{
		scope = 1;
		name = "PMC - Electric Blast 2";
		sound[] = {"\ca\missions_pmc\data\sounds\electric-blast2.wss",0.56234133,1};
		titles[] = {};
	};
	class PMC_Incoming1
	{
		scope = 1;
		name = "PMC - Incoming 1";
		sound[] = {"\ca\missions_pmc\data\sounds\falling_bomb1.wss",0.19952624,1};
		titles[] = {};
	};
	class PMC_Incoming2
	{
		scope = 1;
		name = "PMC - Incoming 2";
		sound[] = {"\ca\missions_pmc\data\sounds\falling_bomb2.wss",0.19952624,1};
		titles[] = {};
	};
	class PMC_CP00_flashback1
	{
		scope = 1;
		name = "PMC - CP00 - Flashback 1";
		sound[] = {"\ca\missions_pmc\data\sounds\cp03_6b_p_3.wss",1.0,1};
		titles[] = {"$STR_pmc_cp03_6b_p_3"};
	};
	class PMC_CP00_flashback2
	{
		scope = 1;
		name = "PMC - CP00 - Flashback 2";
		sound[] = {"\ca\missions_pmc\data\sounds\cp03_6b_r_0.wss",1.0,1};
		titles[] = {"$STR_pmc_cp03_6b_r_0"};
	};
	class PMC_CP00_flashback3
	{
		scope = 1;
		name = "PMC - CP00 - Flashback 3";
		sound[] = {"\ca\missions_pmc\data\sounds\cp03_6b_t_1.wss",1.0,1};
		titles[] = {"$STR_pmc_cp03_6b_t_1"};
	};
	class PMC_CP10B_flashback1
	{
		scope = 1;
		name = "PMC - CP10B - Flashback 1";
		sound[] = {"\ca\missions_pmc\data\sounds\cp09_3a_D_1.wss",1.7782794,1};
		titles[] = {"$STR_pmc_cp09_3a_D_1"};
	};
	class PMC_CP10B_flashback2
	{
		scope = 1;
		name = "PMC - CP10B - Flashback 2";
		sound[] = {"\ca\missions_pmc\data\sounds\cp09_2_R_6.wss",1.7782794,1};
		titles[] = {"$STR_pmc_cp09_2_R_6"};
	};
	class PMC_CP10B_flashback3
	{
		scope = 1;
		name = "PMC - CP10B - Flashback 3";
		sound[] = {"\ca\missions_pmc\data\sounds\cp09_2_D_1.wss",1.7782794,1};
		titles[] = {"$STR_pmc_cp09_2_D_1"};
	};
};
class CfgArmory
{
	class Unlockables
	{
		class PMC
		{
			classes[] = {"Soldier_PMC","SUV_PMC","Soldier_Engineer_PMC","PMC_ied_v1","PMC_ied_v2","PMC_ied_v3","PMC_ied_v4","Soldier_TL_PMC","Soldier_MG_PMC","Soldier_GL_PMC","Soldier_Crew_PMC","Soldier_Medic_PMC","Ka137_PMC","m8_carbine_pmc","m8_compact_pmc","m8_tws","Ka60_PMC","Ka60_GL_PMC","Soldier_Pilot_PMC","PMC_AS50_scoped","PMC_AS50_TWS","Soldier_Sniper_PMC","AA12_PMC","ArmoredSUV_PMC","m8_holo_sd","m8_tws_sd","Soldier_M4A3_PMC","Soldier_MG_PKM_PMC","Soldier_Sniper_KSVK_PMC","Soldier_GL_M16A2_PMC","Soldier_Bodyguard_M4_PMC","Soldier_Bodyguard_AA12_PMC","Soldier_AA_PMC","Soldier_AT_PMC","Ka137_MG_PMC","Poet_PMC","Ry_PMC","Tanny_PMC","Dixon_PMC","Reynolds_PMC"};
			points[] = {0,25,50,50,50,50,50,75,75,75,75,75,100,125,125,125,150,150,150,175,175,175,200,225,250,250,275,275,275,275,275,275,275,275,300,325,325,325,325,25000};
		};
	};
};
//};

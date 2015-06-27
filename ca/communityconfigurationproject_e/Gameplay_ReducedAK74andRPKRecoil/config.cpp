////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:14:02 2014 : Source 'file' date Fri Oct 31 06:14:02 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : Gameplay_ReducedAK74andRPKRecoil\config.bin{
class cfgPatches
{
	class CA_CommunityConfigurationProject_E_Gameplay_ReducedAK74andRPKRecoil
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CA_CommunityConfigurationProject_E"};
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class CfgWeapons
{
	class Rifle;
	class AK_BASE: Rifle
	{
		class Single;
		class FullAuto;
	};
	class AK_74: AK_BASE
	{
		class Single: Single
		{
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_2outof10";
		};
		class FullAuto: FullAuto
		{
			recoil = "recoil_auto_primary_3outof10";
			recoilProne = "recoil_auto_primary_prone_2outof10";
		};
	};
	class AK_74_GL: AK_BASE
	{
		class Single: Single
		{
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_2outof10";
		};
		class FullAuto: FullAuto
		{
			recoil = "recoil_auto_primary_3outof10";
			recoilProne = "recoil_auto_primary_prone_2outof10";
		};
	};
	class RPK_74: AK_74
	{
		class FullAuto: Mode_FullAuto
		{
			recoilProne = "recoil_auto_primary_prone_3outof10";
		};
		class Single: Mode_SemiAuto
		{
			recoilProne = "recoil_single_primary_prone_3outof10";
		};
	};
};
//};

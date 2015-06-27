////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:06:49 2014 : Source 'file' date Fri Oct 31 06:06:49 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class weapons : colt1911\config.bin{
class CfgPatches
{
	class CAWeapons_Colt1911
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAweapons"};
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class CfgWeapons
{
	class M9;
	class Colt1911: M9
	{
		scope = 2;
		model = "\ca\weapons\Colt1911\Colt1911";
		picture = "\CA\weapons\data\Equip\W_Colt1911_CA.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		optics = 1;
		modelOptics = "-";
		magazines[] = {"7Rnd_45ACP_1911"};
		displayname = "$STR_DN_M1911";
		begin1[] = {"ca\sounds\weapons\pistols\m9_single1",0.7943282,1,700};
		begin2[] = {"ca\sounds\weapons\pistols\m9_single2",0.7943282,1,700};
		begin3[] = {"ca\sounds\weapons\pistols\m9_single3",0.7943282,1,700};
		soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
		drySound[] = {"\ca\Weapons\Data\Sound\T33_dry_v1",0.01,1,20};
		reloadMagazineSound[] = {"\ca\Weapons\Data\Sound\pistol_reload",0.1,1,20};
		recoil = "recoil_single_pistol_3outof3";
		recoilProne = "recoil_single_pistol_prone_3outof3";
		class Library
		{
			libTextDesc = "$STR_LIB_M1911";
		};
		descriptionShort = "$STR_DSS_M1911";
	};
};
//};

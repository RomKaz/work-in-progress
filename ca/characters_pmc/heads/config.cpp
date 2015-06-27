////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:02:18 2014 : Source 'file' date Fri Oct 31 06:02:18 2014
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

//Class CHARACTERS_PMC : heads\config.bin{
class CfgPatches
{
	class CACharacters_PMC_Head
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.54;
		requiredAddons[] = {"CA_Heads","CACharacters","CACharacters_E_Head"};
	};
};
class CfgFaces
{
	class Default
	{
		class Custom;
	};
	class Man: Default
	{
		class Face108_PMC: Default
		{
			name = "Ch. Yun-Fat";
			head = "AsianHead_PMC";
			texture = "\ca\characters_PMC\heads\data\hhl_108_CO.paa";
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			disabled = 1;
			identityTypes[] = {"Default","","","","","",""};
		};
		class Face108_camo1_PMC: Face108_PMC
		{
			head = "AsianHead_camo1_PMC";
			name = "Ch. Yun-Fat camo1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","",""};
		};
		class Face108_camo2_PMC: Face108_camo1_PMC
		{
			head = "AsianHead_camo2_PMC";
			name = "Ch. Yun-Fat camo2";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face108_camo3_PMC: Face108_camo1_PMC
		{
			head = "AsianHead_camo3_PMC";
			name = "Ch. Yun-Fat camo3";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face108_camo4_PMC: Face108_camo1_PMC
		{
			head = "AsianHead_camo4_PMC";
			name = "Ch. Yun-Fat camo4";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face108_camo5_PMC: Face108_camo1_PMC
		{
			head = "AsianHead_camo5_PMC";
			name = "Ch. Yun-Fat camo5";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face108_camo6_PMC: Face108_camo1_PMC
		{
			head = "AsianHead_camo6_PMC";
			name = "Ch. Yun-Fat camo6";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face109_PMC: Default
		{
			name = "N. Narita";
			head = "AsianHead_PMC";
			texture = "\ca\characters_PMC\heads\data\hhl_109_CO.paa";
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			disabled = 1;
			identityTypes[] = {"Default","Head_USMC","","Head_US","","",""};
		};
		class Face109_camo1_PMC: Face109_PMC
		{
			head = "AsianHead_camo1_PMC";
			name = "N. Narita camo1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","","Head_US_Camo","","",""};
		};
		class Face109_camo2_PMC: Face109_camo1_PMC
		{
			head = "AsianHead_camo2_PMC";
			name = "N. Narita camo2";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face109_camo3_PMC: Face109_camo1_PMC
		{
			head = "AsianHead_camo3_PMC";
			name = "N. Narita camo3";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face109_camo4_PMC: Face109_camo1_PMC
		{
			head = "AsianHead_camo4_PMC";
			name = "N. Narita camo4";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face109_camo5_PMC: Face109_camo1_PMC
		{
			head = "AsianHead_camo5_PMC";
			name = "N. Narita camo5";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face109_camo6_PMC: Face109_camo1_PMC
		{
			head = "AsianHead_camo6_PMC";
			name = "N. Narita camo6";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face110_PMC: Default
		{
			name = "G. Yubari";
			head = "AsianHead_PMC";
			texture = "\ca\characters_PMC\heads\data\hhl_110_CO.paa";
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			disabled = 1;
			identityTypes[] = {"Default","","","","","",""};
		};
		class Face110_camo1_PMC: Face110_PMC
		{
			head = "AsianHead_camo1_PMC";
			name = "G. Yubari camo1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","",""};
		};
		class Face110_camo2_PMC: Face110_camo1_PMC
		{
			head = "AsianHead_camo2_PMC";
			name = "G. Yubari camo2";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face110_camo3_PMC: Face110_camo1_PMC
		{
			head = "AsianHead_camo3_PMC";
			name = "G. Yubari camo3";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face110_camo4_PMC: Face110_camo1_PMC
		{
			head = "AsianHead_camo4_PMC";
			name = "G. Yubari camo4";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face110_camo5_PMC: Face110_camo1_PMC
		{
			head = "AsianHead_camo5_PMC";
			name = "G. Yubari camo5";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face110_camo6_PMC: Face110_camo1_PMC
		{
			head = "AsianHead_camo6_PMC";
			name = "G. Yubari camo6";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face111_PMC: Default
		{
			name = "P. Mei";
			head = "AsianHead_PMC";
			texture = "\ca\characters_PMC\heads\data\hhl_111_CO.paa";
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			disabled = 1;
			identityTypes[] = {"Default","Head_USMC","","Head_US","","",""};
		};
		class Face111_camo1_PMC: Face111_PMC
		{
			head = "AsianHead_camo1_PMC";
			name = "P. Mei camo1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","","Head_US_Camo","","",""};
		};
		class Face111_camo2_PMC: Face111_camo1_PMC
		{
			head = "AsianHead_camo2_PMC";
			name = "P. Mei camo2";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face111_camo3_PMC: Face111_camo1_PMC
		{
			head = "AsianHead_camo3_PMC";
			name = "P. Mei camo3";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face111_camo4_PMC: Face111_camo1_PMC
		{
			head = "AsianHead_camo4_PMC";
			name = "P. Mei camo4";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face111_camo5_PMC: Face111_camo1_PMC
		{
			head = "AsianHead_camo5_PMC";
			name = "P. Mei camo5";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face111_camo6_PMC: Face111_camo1_PMC
		{
			head = "AsianHead_camo6_PMC";
			name = "P. Mei camo6";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face112_PMC: Default
		{
			name = "W. Lung";
			head = "AsianHead_PMC";
			texture = "\ca\characters_PMC\heads\data\hhl_112_CO.paa";
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			disabled = 1;
			identityTypes[] = {"Default","Head_USMC","","Head_US","","",""};
		};
		class Face112_camo1_PMC: Face112_PMC
		{
			head = "AsianHead_camo1_PMC";
			name = "W. Lung camo1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","","Head_US_Camo","","",""};
		};
		class Face112_camo2_PMC: Face112_camo1_PMC
		{
			head = "AsianHead_camo2_PMC";
			name = "W. Lung camo2";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face112_camo3_PMC: Face112_camo1_PMC
		{
			head = "AsianHead_camo3_PMC";
			name = "W. Lung camo3";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face112_camo4_PMC: Face112_camo1_PMC
		{
			head = "AsianHead_camo4_PMC";
			name = "W. Lung camo4";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face112_camo5_PMC: Face112_camo1_PMC
		{
			head = "AsianHead_camo5_PMC";
			name = "W. Lung camo5";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face112_camo6_PMC: Face112_camo1_PMC
		{
			head = "AsianHead_camo6_PMC";
			name = "W. Lung camo6";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face113_PMC: Default
		{
			name = "J. Yoshitachi";
			head = "AsianHead_PMC";
			texture = "\ca\characters_PMC\heads\data\hhl_113_CO.paa";
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			disabled = 1;
			identityTypes[] = {"Default","","Head_RU","","","",""};
		};
		class Face113_camo1_PMC: Face113_PMC
		{
			head = "AsianHead_camo1_PMC";
			name = "J. Yoshitachi camo1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","Head_RU_Camo","","","",""};
		};
		class Face113_camo2_PMC: Face113_camo1_PMC
		{
			head = "AsianHead_camo2_PMC";
			name = "J. Yoshitachi camo2";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face113_camo3_PMC: Face113_camo1_PMC
		{
			head = "AsianHead_camo3_PMC";
			name = "J. Yoshitachi camo3";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face113_camo4_PMC: Face113_camo1_PMC
		{
			head = "AsianHead_camo4_PMC";
			name = "J. Yoshitachi camo4";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face113_camo5_PMC: Face113_camo1_PMC
		{
			head = "AsianHead_camo5_PMC";
			name = "J. Yoshitachi camo5";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face113_camo6_PMC: Face113_camo1_PMC
		{
			head = "AsianHead_camo6_PMC";
			name = "J. Yoshitachi camo6";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face114_PMC: Default
		{
			name = "E. Honda";
			head = "AsianHead_PMC";
			texture = "\ca\characters_PMC\heads\data\hhl_114_CO.paa";
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			disabled = 0;
			identityTypes[] = {"Default","","Head_RU","","","",""};
		};
		class Face114_camo1_PMC: Face114_PMC
		{
			head = "AsianHead_camo1_PMC";
			name = "E. Honda camo1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","Head_RU_Camo","","","",""};
		};
		class Face114_camo2_PMC: Face114_camo1_PMC
		{
			head = "AsianHead_camo2_PMC";
			name = "E. Honda camo2";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face114_camo3_PMC: Face114_camo1_PMC
		{
			head = "AsianHead_camo3_PMC";
			name = "E. Honda camo3";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face114_camo4_PMC: Face114_camo1_PMC
		{
			head = "AsianHead_camo4_PMC";
			name = "E. Honda camo4";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face114_camo5_PMC: Face114_camo1_PMC
		{
			head = "AsianHead_camo5_PMC";
			name = "E. Honda camo5";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face114_camo6_PMC: Face114_camo1_PMC
		{
			head = "AsianHead_camo6_PMC";
			name = "E. Honda camo6";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face115_PMC: Default
		{
			name = "J. Akiba";
			head = "AsianHead_PMC";
			texture = "\ca\characters_PMC\heads\data\hhl_115_CO.paa";
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			disabled = 1;
			identityTypes[] = {"Default","Head_USMC","","Head_US","","",""};
		};
		class Face115_camo1_PMC: Face115_PMC
		{
			head = "AsianHead_camo1_PMC";
			name = "J. Akiba camo1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","","Head_US_Camo","","",""};
		};
		class Face115_camo2_PMC: Face115_camo1_PMC
		{
			head = "AsianHead_camo2_PMC";
			name = "J. Akiba camo2";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face115_camo3_PMC: Face115_camo1_PMC
		{
			head = "AsianHead_camo3_PMC";
			name = "J. Akiba camo3";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face115_camo4_PMC: Face115_camo1_PMC
		{
			head = "AsianHead_camo4_PMC";
			name = "J. Akiba camo4";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face115_camo5_PMC: Face115_camo1_PMC
		{
			head = "AsianHead_camo5_PMC";
			name = "J. Akiba camo5";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face115_camo6_PMC: Face115_camo1_PMC
		{
			head = "AsianHead_camo6_PMC";
			name = "J. Akiba camo6";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face116_PMC: Default
		{
			name = "H. Kojima";
			head = "AsianHead_PMC";
			texture = "\ca\characters_PMC\heads\data\hhl_116_CO.paa";
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			disabled = 1;
			identityTypes[] = {"Default","Head_USMC","","Head_US","","",""};
		};
		class Face116_camo1_PMC: Face116_PMC
		{
			head = "AsianHead_camo1_PMC";
			name = "H. Kojima camo1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","","Head_US_Camo","","",""};
		};
		class Face116_camo2_PMC: Face116_camo1_PMC
		{
			head = "AsianHead_camo2_PMC";
			name = "H. Kojima camo2";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face116_camo3_PMC: Face116_camo1_PMC
		{
			head = "AsianHead_camo3_PMC";
			name = "H. Kojima camo3";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face116_camo4_PMC: Face116_camo1_PMC
		{
			head = "AsianHead_camo4_PMC";
			name = "H. Kojima camo4";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face116_camo5_PMC: Face116_camo1_PMC
		{
			head = "AsianHead_camo5_PMC";
			name = "H. Kojima camo5";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face116_camo6_PMC: Face116_camo1_PMC
		{
			head = "AsianHead_camo6_PMC";
			name = "H. Kojima camo6";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face117_PMC: Default
		{
			name = "T. Tanaka";
			head = "AsianHead_PMC";
			texture = "\ca\characters_PMC\heads\data\hhl_117_CO.paa";
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			disabled = 1;
			identityTypes[] = {"Default","","","","Head_BAF","",""};
		};
		class Face117_camo1_PMC: Face117_PMC
		{
			head = "AsianHead_camo1_PMC";
			name = "T. Tanaka camo1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","",""};
		};
		class Face117_camo2_PMC: Face117_camo1_PMC
		{
			head = "AsianHead_camo2_PMC";
			name = "T. Tanaka camo2";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face117_camo3_PMC: Face117_camo1_PMC
		{
			head = "AsianHead_camo3_PMC";
			name = "T. Tanaka camo3";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face117_camo4_PMC: Face117_camo1_PMC
		{
			head = "AsianHead_camo4_PMC";
			name = "T. Tanaka camo4";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face117_camo5_PMC: Face117_camo1_PMC
		{
			head = "AsianHead_camo5_PMC";
			name = "T. Tanaka camo5";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face117_camo6_PMC: Face117_camo1_PMC
		{
			head = "AsianHead_camo6_PMC";
			name = "T. Tanaka camo6";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face118_PMC: Default
		{
			name = "L. Nguyen";
			head = "AsianHead_PMC";
			texture = "\ca\characters_PMC\heads\data\hhl_118_CO.paa";
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			disabled = 1;
			identityTypes[] = {"Default","","","","","",""};
		};
		class Face118_camo1_PMC: Face118_PMC
		{
			head = "AsianHead_camo1_PMC";
			name = "L. Nguyen camo1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","",""};
		};
		class Face118_camo2_PMC: Face118_camo1_PMC
		{
			head = "AsianHead_camo2_PMC";
			name = "L. Nguyen camo2";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face118_camo3_PMC: Face118_camo1_PMC
		{
			head = "AsianHead_camo3_PMC";
			name = "L. Nguyen camo3";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face118_camo4_PMC: Face118_camo1_PMC
		{
			head = "AsianHead_camo4_PMC";
			name = "L. Nguyen camo4";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face118_camo5_PMC: Face118_camo1_PMC
		{
			head = "AsianHead_camo5_PMC";
			name = "L. Nguyen camo5";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face118_camo6_PMC: Face118_camo1_PMC
		{
			head = "AsianHead_camo6_PMC";
			name = "L. Nguyen camo6";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face119_PMC: Default
		{
			name = "J. Chan";
			head = "AsianHead_PMC";
			texture = "\ca\characters_PMC\heads\data\hhl_119_CO.paa";
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			disabled = 0;
			identityTypes[] = {"Default","","","","","",""};
		};
		class Face119_camo1_PMC: Face119_PMC
		{
			head = "AsianHead_camo1_PMC";
			name = "J. Chan camo1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","",""};
		};
		class Face119_camo2_PMC: Face119_camo1_PMC
		{
			head = "AsianHead_camo2_PMC";
			name = "J. Chan camo2";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face119_camo3_PMC: Face119_camo1_PMC
		{
			head = "AsianHead_camo3_PMC";
			name = "J. Chan camo3";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face119_camo4_PMC: Face119_camo1_PMC
		{
			head = "AsianHead_camo4_PMC";
			name = "J. Chan camo4";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face119_camo5_PMC: Face119_camo1_PMC
		{
			head = "AsianHead_camo5_PMC";
			name = "J. Chan camo5";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face119_camo6_PMC: Face119_camo1_PMC
		{
			head = "AsianHead_camo6_PMC";
			name = "J. Chan camo6";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face120_PMC: Default
		{
			name = "F. Prahan";
			head = "AsianHead_PMC";
			texture = "\ca\characters_PMC\heads\data\hhl_120_CO.paa";
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			disabled = 1;
			identityTypes[] = {"Default","Head_USMC","","Head_US","","",""};
		};
		class Face120_camo1_PMC: Face120_PMC
		{
			head = "AsianHead_camo1_PMC";
			name = "F. Prahan camo1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","","Head_US_Camo","","",""};
		};
		class Face120_camo2_PMC: Face120_camo1_PMC
		{
			head = "AsianHead_camo2_PMC";
			name = "F. Prahan camo2";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face120_camo3_PMC: Face120_camo1_PMC
		{
			head = "AsianHead_camo3_PMC";
			name = "F. Prahan camo3";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face120_camo4_PMC: Face120_camo1_PMC
		{
			head = "AsianHead_camo4_PMC";
			name = "F. Prahan camo4";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face120_camo5_PMC: Face120_camo1_PMC
		{
			head = "AsianHead_camo5_PMC";
			name = "F. Prahan camo5";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face120_camo6_PMC: Face120_camo1_PMC
		{
			head = "AsianHead_camo6_PMC";
			name = "F. Prahan camo6";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face121_PMC: Default
		{
			name = "B. Kawasaki";
			head = "AsianHead_PMC";
			texture = "\ca\characters_PMC\heads\data\hhl_121_CO.paa";
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			disabled = 1;
			identityTypes[] = {"Default","","","","Head_BAF","",""};
		};
		class Face121_camo1_PMC: Face121_PMC
		{
			head = "AsianHead_camo1_PMC";
			name = "B. Kawasaki camo1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","",""};
		};
		class Face121_camo2_PMC: Face121_camo1_PMC
		{
			head = "AsianHead_camo2_PMC";
			name = "B. Kawasaki camo2";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face121_camo3_PMC: Face121_camo1_PMC
		{
			head = "AsianHead_camo3_PMC";
			name = "B. Kawasaki camo3";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face121_camo4_PMC: Face121_camo1_PMC
		{
			head = "AsianHead_camo4_PMC";
			name = "B. Kawasaki camo4";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face121_camo5_PMC: Face121_camo1_PMC
		{
			head = "AsianHead_camo5_PMC";
			name = "B. Kawasaki camo5";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face121_camo6_PMC: Face121_camo1_PMC
		{
			head = "AsianHead_camo6_PMC";
			name = "B. Kawasaki camo6";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face122_PMC: Default
		{
			name = "Y. Shimitsu";
			head = "AsianHead_PMC";
			texture = "\ca\characters_PMC\heads\data\hhl_122_CO.paa";
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			disabled = 1;
			identityTypes[] = {"Default","","","","Head_BAF","",""};
		};
		class Face122_camo1_PMC: Face122_PMC
		{
			head = "AsianHead_camo1_PMC";
			name = "Y. Shimitsu camo1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","",""};
		};
		class Face122_camo2_PMC: Face122_camo1_PMC
		{
			head = "AsianHead_camo2_PMC";
			name = "Y. Shimitsu camo2";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face122_camo3_PMC: Face122_camo1_PMC
		{
			head = "AsianHead_camo3_PMC";
			name = "Y. Shimitsu camo3";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face122_camo4_PMC: Face122_camo1_PMC
		{
			head = "AsianHead_camo4_PMC";
			name = "Y. Shimitsu camo4";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face122_camo5_PMC: Face122_camo1_PMC
		{
			head = "AsianHead_camo5_PMC";
			name = "Y. Shimitsu camo5";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face122_camo6_PMC: Face122_camo1_PMC
		{
			head = "AsianHead_camo6_PMC";
			name = "Y. Shimitsu camo6";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face123_PMC: Default
		{
			name = "J. Li";
			head = "AsianHead_PMC";
			texture = "\ca\characters_PMC\heads\data\hhl_123_CO.paa";
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			disabled = 1;
			identityTypes[] = {"Default","","Head_RU","","","",""};
		};
		class Face123_camo1_PMC: Face123_PMC
		{
			head = "AsianHead_camo1_PMC";
			name = "J. Li camo1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","Head_RU_Camo","","","",""};
		};
		class Face123_camo2_PMC: Face123_camo1_PMC
		{
			head = "AsianHead_camo2_PMC";
			name = "J. Li camo2";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face123_camo3_PMC: Face123_camo1_PMC
		{
			head = "AsianHead_camo3_PMC";
			name = "J. Li camo3";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face123_camo4_PMC: Face123_camo1_PMC
		{
			head = "AsianHead_camo4_PMC";
			name = "J. Li camo4";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face123_camo5_PMC: Face123_camo1_PMC
		{
			head = "AsianHead_camo5_PMC";
			name = "J. Li camo5";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face123_camo6_PMC: Face123_camo1_PMC
		{
			head = "AsianHead_camo6_PMC";
			name = "J. Li camo6";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face124_PMC: Default
		{
			name = "D. Wong";
			head = "AsianHead_PMC";
			texture = "\ca\characters_PMC\heads\data\hhl_124_CO.paa";
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			disabled = 0;
			identityTypes[] = {"Default","Head_USMC","","Head_US","","",""};
		};
		class Face124_camo1_PMC: Face124_PMC
		{
			head = "AsianHead_camo1_PMC";
			name = "D. Wong camo1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","","Head_US_Camo","","",""};
		};
		class Face124_camo2_PMC: Face124_camo1_PMC
		{
			head = "AsianHead_camo2_PMC";
			name = "D. Wong camo2";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face124_camo3_PMC: Face124_camo1_PMC
		{
			head = "AsianHead_camo3_PMC";
			name = "D. Wong camo3";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face124_camo4_PMC: Face124_camo1_PMC
		{
			head = "AsianHead_camo4_PMC";
			name = "D. Wong camo4";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face124_camo5_PMC: Face124_camo1_PMC
		{
			head = "AsianHead_camo5_PMC";
			name = "D. Wong camo5";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face124_camo6_PMC: Face124_camo1_PMC
		{
			head = "AsianHead_camo6_PMC";
			name = "D. Wong camo6";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
	};
};
class CfgGlasses
{
	class None;
	class None_pmc: None
	{
		scope = 2;
		name = "$STR_CFG_GLASSES_NONE";
		model = "";
		identityTypes[] = {"PMC_Glasses_PMC",210};
	};
	class Tactical;
	class Tactical_pmc: Tactical
	{
		identityTypes[] = {"PMC_Glasses_PMC",30};
	};
	class Sunglasses;
	class Sunglasses_PMC: Sunglasses
	{
		identityTypes[] = {"PMC_Glasses_PMC",10};
	};
	class BlackSun;
	class BlackSun_pmc: BlackSun
	{
		identityTypes[] = {"PMC_Glasses_PMC",10};
	};
	class BlueSun;
	class BlueSun_pmc: BlueSun
	{
		identityTypes[] = {"PMC_Glasses_PMC",5};
	};
	class RedSun;
	class RedSun_pmc: RedSun
	{
		identityTypes[] = {"PMC_Glasses_PMC",5};
	};
	class GreenSun;
	class GreenSun_pmc: GreenSun
	{
		identityTypes[] = {"PMC_Glasses_PMC",10};
	};
};
class CfgHeads
{
	class DefaultHead;
	class AsianHead_PMC: DefaultHead
	{
		model = "\ca\Characters_PMC\Heads\Male\AsianHead";
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\characters_e\heads\male\defaulthead\data\hhl_white.rvmat","ca\characters_e\Heads\male\DefaultHead\Data\hhl_Wounds.rvmat","ca\characters_e\Heads\male\DefaultHead\Data\hhl_Wounds.rvmat"};
		};
	};
	class AsianHead_camo1_PMC: AsianHead_PMC
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\Characters\Heads\Male\DefaultHead\data\hhl_white.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_01_wounds1.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_01_wounds2.rvmat"};
		};
	};
	class AsianHead_camo2_PMC: AsianHead_PMC
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\Characters\Heads\Male\DefaultHead\data\hhl_white.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_02_wounds1.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_02_wounds2.rvmat"};
		};
	};
	class AsianHead_camo3_PMC: AsianHead_PMC
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\Characters\Heads\Male\DefaultHead\data\hhl_white.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_03_wounds1.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_03_wounds2.rvmat"};
		};
	};
	class AsianHead_camo4_PMC: AsianHead_PMC
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\Characters\Heads\Male\DefaultHead\data\hhl_white.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_04_wounds1.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_04_wounds2.rvmat"};
		};
	};
	class AsianHead_camo5_PMC: AsianHead_PMC
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\Characters\Heads\Male\DefaultHead\data\hhl_white.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_05_wounds1.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_05_wounds2.rvmat"};
		};
	};
	class AsianHead_camo6_PMC: AsianHead_PMC
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\Characters\Heads\Male\DefaultHead\data\hhl_white.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_06_wounds1.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_06_wounds2.rvmat"};
		};
	};
};
//};

////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:08:04 2014 : Source 'file' date Fri Oct 31 06:08:04 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class characters_e : heads\config.bin{
class CfgPatches
{
	class CACharacters_E_Head
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {"CA_Heads","CACharacters"};
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
		class Default
		{
			material = "\ca\characters_e\heads\male\defaulthead\data\hhl_white.rvmat";
		};
		class Custom: Custom
		{
			material = "\ca\characters_e\heads\male\defaulthead\data\hhl_white.rvmat";
		};
		class Face01_EP1: Default
		{
			name = "$STR_EP1_DN_Face01_EP1";
			head = "TakHead_EP1";
			texture = "\ca\characters_E\heads\data\hhl_01_CO.paa";
			material = "\ca\characters_E\Heads\Male\BeardHead\Data\hhl_tak.rvmat";
			disabled = 0;
			identityTypes[] = {"Default","","","","","","","","","","","","","","","Head_TK_INS","Head_TK_GUE","Head_TK_CIV"};
		};
		class Face01_camo1_EP1: Face01_EP1
		{
			head = "TakHead_camo1_EP1";
			name = "$STR_EP1_DN_Face01_camo1_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","","","","","","","Head_TK_INS_Camo","Head_TK_GUE_Camo","Head_TK_CIV_Camo"};
		};
		class Face01_camo2_EP1: Face01_camo1_EP1
		{
			head = "TakHead_camo2_EP1";
			name = "$STR_EP1_DN_Face01_camo2_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face01_camo3_EP1: Face01_camo1_EP1
		{
			head = "TakHead_camo3_EP1";
			name = "$STR_EP1_DN_Face01_camo3_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face01_camo4_EP1: Face01_camo1_EP1
		{
			head = "TakHead_camo4_EP1";
			name = "$STR_EP1_DN_Face01_camo4_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face01_camo5_EP1: Face01_camo1_EP1
		{
			head = "TakHead_camo5_EP1";
			name = "$STR_EP1_DN_Face01_camo5_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face01_camo6_EP1: Face01_camo1_EP1
		{
			head = "TakHead_camo6_EP1";
			name = "$STR_EP1_DN_Face01_camo6_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face02_EP1: Default
		{
			name = "$STR_EP1_DN_Face02_EP1";
			head = "TakHead_EP1";
			texture = "\ca\characters_E\heads\data\hhl_02_CO.paa";
			material = "\ca\characters_E\Heads\Male\BeardHead\Data\hhl_tak.rvmat";
			disabled = 0;
			identityTypes[] = {"Default","","","","","","","","","","","","","","","Head_TK_INS","Head_TK_GUE","Head_TK_CIV"};
		};
		class Face02_camo1_EP1: Face02_EP1
		{
			head = "TakHead_camo1_EP1";
			name = "$STR_EP1_DN_Face02_camo1_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","","","","","","","Head_TK_INS_Camo","Head_TK_GUE_Camo","Head_TK_CIV_Camo"};
		};
		class Face02_camo2_EP1: Face02_camo1_EP1
		{
			head = "TakHead_camo2_EP1";
			name = "$STR_EP1_DN_Face02_camo2_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face02_camo3_EP1: Face02_camo1_EP1
		{
			head = "TakHead_camo3_EP1";
			name = "$STR_EP1_DN_Face02_camo3_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face02_camo4_EP1: Face02_camo1_EP1
		{
			head = "TakHead_camo4_EP1";
			name = "$STR_EP1_DN_Face02_camo4_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face02_camo5_EP1: Face02_camo1_EP1
		{
			head = "TakHead_camo5_EP1";
			name = "$STR_EP1_DN_Face02_camo5_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face02_camo6_EP1: Face02_camo1_EP1
		{
			head = "TakHead_camo6_EP1";
			name = "$STR_EP1_DN_Face02_camo6_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face03_EP1: Default
		{
			name = "$STR_EP1_DN_Face03_EP1";
			head = "TakHead_EP1";
			texture = "\ca\characters_E\heads\data\hhl_03_CO.paa";
			material = "\ca\characters_E\Heads\Male\BeardHead\Data\hhl_tak.rvmat";
			disabled = 0;
			identityTypes[] = {"Default","","","","","","","","","","","","","","","Head_TK_INS","Head_TK_GUE","Head_TK_CIV"};
		};
		class Face03_camo1_EP1: Face03_EP1
		{
			head = "TakHead_camo1_EP1";
			name = "$STR_EP1_DN_Face03_camo1_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","","","","","","","Head_TK_INS_Camo","Head_TK_GUE_Camo","Head_TK_CIV_Camo"};
		};
		class Face03_camo2_EP1: Face03_camo1_EP1
		{
			head = "TakHead_camo2_EP1";
			name = "$STR_EP1_DN_Face03_camo2_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face03_camo3_EP1: Face03_camo1_EP1
		{
			head = "TakHead_camo3_EP1";
			name = "$STR_EP1_DN_Face03_camo3_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face03_camo4_EP1: Face03_camo1_EP1
		{
			head = "TakHead_camo4_EP1";
			name = "$STR_EP1_DN_Face03_camo4_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face03_camo5_EP1: Face03_camo1_EP1
		{
			head = "TakHead_camo5_EP1";
			name = "$STR_EP1_DN_Face03_camo5_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face03_camo6_EP1: Face03_camo1_EP1
		{
			head = "TakHead_camo6_EP1";
			name = "$STR_EP1_DN_Face03_camo6_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face04_EP1: Default
		{
			name = "$STR_EP1_DN_Face04_EP1";
			head = "TakHead_EP1";
			texture = "\ca\characters_E\heads\data\hhl_04_CO.paa";
			material = "\ca\characters_E\Heads\Male\BeardHead\Data\hhl_tak.rvmat";
			disabled = 0;
			identityTypes[] = {"Default","","","","","","","","","","","","","","","Head_TK_INS","Head_TK_GUE","Head_TK_CIV"};
		};
		class Face04_camo1_EP1: Face04_EP1
		{
			head = "TakHead_camo1_EP1";
			name = "$STR_EP1_DN_Face04_camo1_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","","","","","","","Head_TK_INS_Camo","Head_TK_GUE_Camo","Head_TK_CIV_Camo"};
		};
		class Face04_camo2_EP1: Face04_camo1_EP1
		{
			head = "TakHead_camo2_EP1";
			name = "$STR_EP1_DN_Face04_camo2_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face04_camo3_EP1: Face04_camo1_EP1
		{
			head = "TakHead_camo3_EP1";
			name = "$STR_EP1_DN_Face04_camo3_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face04_camo4_EP1: Face04_camo1_EP1
		{
			head = "TakHead_camo4_EP1";
			name = "$STR_EP1_DN_Face04_camo4_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face04_camo5_EP1: Face04_camo1_EP1
		{
			head = "TakHead_camo5_EP1";
			name = "$STR_EP1_DN_Face04_camo5_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face04_camo6_EP1: Face04_camo1_EP1
		{
			head = "TakHead_camo6_EP1";
			name = "$STR_EP1_DN_Face04_camo6_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face05_EP1: Default
		{
			name = "$STR_EP1_DN_Face05_EP1";
			head = "SimpleTakHead_EP1";
			texture = "\ca\characters_E\heads\data\hhl_05_CO.paa";
			material = "\ca\characters_E\Heads\Male\BeardHead\Data\hhl_tak.rvmat";
			disabled = 0;
			identityTypes[] = {"Default","","","","","","","","","","","","","","Head_TK","","",""};
		};
		class Face05_camo1_EP1: Face05_EP1
		{
			head = "defaultHead_camo1";
			name = "$STR_EP1_DN_Face05_camo1_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","","","","","","Head_TK_Camo","","",""};
		};
		class Face05_camo2_EP1: Face05_camo1_EP1
		{
			head = "defaultHead_camo2";
			name = "$STR_EP1_DN_Face05_camo2_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face05_camo3_EP1: Face05_camo1_EP1
		{
			head = "defaultHead_camo3";
			name = "$STR_EP1_DN_Face05_camo3_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face05_camo4_EP1: Face05_camo1_EP1
		{
			head = "defaultHead_camo4";
			name = "$STR_EP1_DN_Face05_camo4_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face05_camo5_EP1: Face05_camo1_EP1
		{
			head = "defaultHead_camo5";
			name = "$STR_EP1_DN_Face05_camo5_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face05_camo6_EP1: Face05_camo1_EP1
		{
			head = "defaultHead_camo6";
			name = "$STR_EP1_DN_Face05_camo6_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face06_EP1: Default
		{
			name = "$STR_EP1_DN_Face06_EP1";
			head = "SimpleTakHead_EP1";
			texture = "\ca\characters_E\heads\data\hhl_06_CO.paa";
			material = "\ca\characters_E\Heads\Male\BeardHead\Data\hhl_tak.rvmat";
			disabled = 0;
			identityTypes[] = {"Default","","","","","","","","","","","","","","Head_TK","Head_TK_INS","Head_TK_GUE","Head_TK_CIV"};
		};
		class Face06_camo1_EP1: Face06_EP1
		{
			head = "defaultHead_camo1";
			name = "$STR_EP1_DN_Face06_camo1_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","","","","","","Head_TK_Camo","Head_TK_INS_Camo","Head_TK_GUE_Camo","Head_TK_CIV_Camo"};
		};
		class Face06_camo2_EP1: Face06_camo1_EP1
		{
			head = "defaultHead_camo2";
			name = "$STR_EP1_DN_Face06_camo2_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face06_camo3_EP1: Face06_camo1_EP1
		{
			head = "defaultHead_camo3";
			name = "$STR_EP1_DN_Face06_camo3_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face06_camo4_EP1: Face06_camo1_EP1
		{
			head = "defaultHead_camo4";
			name = "$STR_EP1_DN_Face06_camo4_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face06_camo5_EP1: Face06_camo1_EP1
		{
			head = "defaultHead_camo5";
			name = "$STR_EP1_DN_Face06_camo5_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face06_camo6_EP1: Face06_camo1_EP1
		{
			head = "defaultHead_camo6";
			name = "$STR_EP1_DN_Face06_camo6_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face07_EP1: Default
		{
			name = "$STR_EP1_DN_Face07_EP1";
			head = "SimpleTakHead_EP1";
			texture = "\ca\characters_E\heads\data\hhl_07_CO.paa";
			material = "\ca\characters_E\Heads\Male\BeardHead\Data\hhl_tak.rvmat";
			disabled = 0;
			identityTypes[] = {"Default","","","","","","","","","","","","","","Head_TK","","",""};
		};
		class Face07_camo1_EP1: Face07_EP1
		{
			head = "defaultHead_camo1";
			name = "$STR_EP1_DN_Face07_camo1_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","","","","","","Head_TK_Camo","","",""};
		};
		class Face07_camo2_EP1: Face07_camo1_EP1
		{
			head = "defaultHead_camo2";
			name = "$STR_EP1_DN_Face07_camo2_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face07_camo3_EP1: Face07_camo1_EP1
		{
			head = "defaultHead_camo3";
			name = "$STR_EP1_DN_Face07_camo3_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face07_camo4_EP1: Face07_camo1_EP1
		{
			head = "defaultHead_camo4";
			name = "$STR_EP1_DN_Face07_camo4_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face07_camo5_EP1: Face07_camo1_EP1
		{
			head = "defaultHead_camo5";
			name = "$STR_EP1_DN_Face07_camo5_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face07_camo6_EP1: Face07_camo1_EP1
		{
			head = "defaultHead_camo6";
			name = "$STR_EP1_DN_Face07_camo6_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face08_EP1: Default
		{
			name = "$STR_EP1_DN_Face08_EP1";
			head = "SimpleTakHead_EP1";
			texture = "\ca\characters_E\heads\data\hhl_08_CO.paa";
			material = "\ca\characters_E\Heads\Male\BeardHead\Data\hhl_tak.rvmat";
			disabled = 0;
			identityTypes[] = {"Default","","","","","","","","","","","","","","Head_TK","Head_TK_INS","Head_TK_GUE","Head_TK_CIV"};
		};
		class Face08_camo1_EP1: Face08_EP1
		{
			head = "defaultHead_camo1";
			name = "$STR_EP1_DN_Face08_camo1_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","","","","","","Head_TK_Camo","Head_TK_INS_Camo","Head_TK_GUE_Camo","Head_TK_CIV_Camo"};
		};
		class Face08_camo2_EP1: Face08_camo1_EP1
		{
			head = "defaultHead_camo2";
			name = "$STR_EP1_DN_Face08_camo2_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face08_camo3_EP1: Face08_camo1_EP1
		{
			head = "defaultHead_camo3";
			name = "$STR_EP1_DN_Face08_camo3_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face08_camo4_EP1: Face08_camo1_EP1
		{
			head = "defaultHead_camo4";
			name = "$STR_EP1_DN_Face08_camo4_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face08_camo5_EP1: Face08_camo1_EP1
		{
			head = "defaultHead_camo5";
			name = "$STR_EP1_DN_Face08_camo5_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face08_camo6_EP1: Face08_camo1_EP1
		{
			head = "defaultHead_camo6";
			name = "$STR_EP1_DN_Face08_camo6_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face09_EP1: Default
		{
			name = "$STR_EP1_DN_Face09_EP1";
			head = "SimpleTakHead_EP1";
			texture = "\ca\characters_E\heads\data\hhl_09_CO.paa";
			material = "\ca\characters_E\Heads\Male\BeardHead\Data\hhl_tak.rvmat";
			disabled = 0;
			identityTypes[] = {"Default","","","","","","","","","","","","","","Head_TK","Head_TK_INS","Head_TK_GUE","Head_TK_CIV"};
		};
		class Face09_camo1_EP1: Face09_EP1
		{
			head = "defaultHead_camo1";
			name = "$STR_EP1_DN_Face09_camo1_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","","","","","","Head_TK_Camo","Head_TK_INS_Camo","Head_TK_GUE_Camo","Head_TK_CIV_Camo"};
		};
		class Face09_camo2_EP1: Face09_camo1_EP1
		{
			head = "defaultHead_camo2";
			name = "$STR_EP1_DN_Face09_camo2_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face09_camo3_EP1: Face09_camo1_EP1
		{
			head = "defaultHead_camo3";
			name = "$STR_EP1_DN_Face09_camo3_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face09_camo4_EP1: Face09_camo1_EP1
		{
			head = "defaultHead_camo4";
			name = "$STR_EP1_DN_Face09_camo4_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face09_camo5_EP1: Face09_camo1_EP1
		{
			head = "defaultHead_camo5";
			name = "$STR_EP1_DN_Face09_camo5_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face09_camo6_EP1: Face09_camo1_EP1
		{
			head = "defaultHead_camo6";
			name = "$STR_EP1_DN_Face09_camo6_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face10_EP1: Default
		{
			name = "$STR_EP1_DN_Face10_EP1";
			head = "TakHead_EP1";
			texture = "\ca\characters_E\heads\data\hhl_10_CO.paa";
			material = "\ca\characters_E\Heads\Male\BeardHead\Data\hhl_tak.rvmat";
			disabled = 0;
			identityTypes[] = {"Default","","","","","","","","","","","","","","","Head_TK_INS","Head_TK_GUE","Head_TK_CIV"};
		};
		class Face10_camo1_EP1: Face10_EP1
		{
			head = "TakHead_camo1_EP1";
			name = "$STR_EP1_DN_Face10_camo1_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","","","","","","","Head_TK_INS_Camo","Head_TK_GUE_Camo","Head_TK_CIV_Camo"};
		};
		class Face10_camo2_EP1: Face10_camo1_EP1
		{
			head = "TakHead_camo2_EP1";
			name = "$STR_EP1_DN_Face10_camo2_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face10_camo3_EP1: Face10_camo1_EP1
		{
			head = "TakHead_camo3_EP1";
			name = "$STR_EP1_DN_Face10_camo3_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face10_camo4_EP1: Face10_camo1_EP1
		{
			head = "TakHead_camo4_EP1";
			name = "$STR_EP1_DN_Face10_camo4_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face10_camo5_EP1: Face10_camo1_EP1
		{
			head = "TakHead_camo5_EP1";
			name = "$STR_EP1_DN_Face10_camo5_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face10_camo6_EP1: Face10_camo1_EP1
		{
			head = "TakHead_camo6_EP1";
			name = "$STR_EP1_DN_Face10_camo6_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face11_EP1: Default
		{
			name = "$STR_EP1_DN_Face11_EP1";
			head = "TakHead_EP1";
			texture = "\ca\characters_E\heads\data\hhl_11_CO.paa";
			material = "\ca\characters_E\Heads\Male\BeardHead\Data\hhl_tak.rvmat";
			disabled = 0;
			identityTypes[] = {"Default","","","","","","","","","","","","","","","Head_TK_INS","Head_TK_GUE","Head_TK_CIV"};
		};
		class Face11_camo1_EP1: Face11_EP1
		{
			head = "TakHead_camo1_EP1";
			name = "$STR_EP1_DN_Face11_camo1_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","","","","","","","Head_TK_INS_Camo","Head_TK_GUE_Camo","Head_TK_CIV_Camo"};
		};
		class Face11_camo2_EP1: Face11_camo1_EP1
		{
			head = "TakHead_camo2_EP1";
			name = "$STR_EP1_DN_Face11_camo2_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face11_camo3_EP1: Face11_camo1_EP1
		{
			head = "TakHead_camo3_EP1";
			name = "$STR_EP1_DN_Face11_camo3_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face11_camo4_EP1: Face11_camo1_EP1
		{
			head = "TakHead_camo4_EP1";
			name = "$STR_EP1_DN_Face11_camo4_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face11_camo5_EP1: Face11_camo1_EP1
		{
			head = "TakHead_camo5_EP1";
			name = "$STR_EP1_DN_Face11_camo5_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face11_camo6_EP1: Face11_camo1_EP1
		{
			head = "TakHead_camo6_EP1";
			name = "$STR_EP1_DN_Face11_camo6_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face12_EP1: Default
		{
			name = "$STR_EP1_DN_Face12_EP1";
			head = "TakHead_EP1";
			texture = "\ca\characters_E\heads\data\hhl_12_CO.paa";
			material = "\ca\characters_E\Heads\Male\BeardHead\Data\hhl_tak.rvmat";
			disabled = 0;
			identityTypes[] = {"Default","","","","","","","","","","","","","","","Head_TK_INS","Head_TK_GUE","Head_TK_CIV"};
		};
		class Face12_camo1_EP1: Face12_EP1
		{
			head = "TakHead_camo1_EP1";
			name = "$STR_EP1_DN_Face12_camo1_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","","","","","","","Head_TK_INS_Camo","Head_TK_GUE_Camo","Head_TK_CIV_Camo"};
		};
		class Face12_camo2_EP1: Face12_camo1_EP1
		{
			head = "TakHead_camo2_EP1";
			name = "$STR_EP1_DN_Face12_camo2_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face12_camo3_EP1: Face12_camo1_EP1
		{
			head = "TakHead_camo3_EP1";
			name = "$STR_EP1_DN_Face12_camo3_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face12_camo4_EP1: Face12_camo1_EP1
		{
			head = "TakHead_camo4_EP1";
			name = "$STR_EP1_DN_Face12_camo4_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face12_camo5_EP1: Face12_camo1_EP1
		{
			head = "TakHead_camo5_EP1";
			name = "$STR_EP1_DN_Face12_camo5_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face12_camo6_EP1: Face12_camo1_EP1
		{
			head = "TakHead_camo6_EP1";
			name = "$STR_EP1_DN_Face12_camo6_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face13_EP1: Default
		{
			name = "$STR_EP1_DN_Face13_EP1";
			head = "SimpleTakHead_EP1";
			texture = "\ca\characters_E\heads\data\hhl_13_CO.paa";
			material = "\ca\characters_E\Heads\Male\BeardHead\Data\hhl_tak.rvmat";
			disabled = 0;
			identityTypes[] = {"Default","","","","","","","","","","","","","","Head_TK","Head_TK_INS","Head_TK_GUE",""};
		};
		class Face13_camo1_EP1: Face13_EP1
		{
			head = "defaultHead_camo1";
			name = "$STR_EP1_DN_Face13_camo1_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","","","","","","Head_TK_Camo","Head_TK_INS_Camo","Head_TK_GUE_Camo",""};
		};
		class Face13_camo2_EP1: Face13_camo1_EP1
		{
			head = "defaultHead_camo2";
			name = "$STR_EP1_DN_Face13_camo2_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face13_camo3_EP1: Face13_camo1_EP1
		{
			head = "defaultHead_camo3";
			name = "$STR_EP1_DN_Face13_camo3_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face13_camo4_EP1: Face13_camo1_EP1
		{
			head = "defaultHead_camo4";
			name = "$STR_EP1_DN_Face13_camo4_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face13_camo5_EP1: Face13_camo1_EP1
		{
			head = "defaultHead_camo5";
			name = "$STR_EP1_DN_Face13_camo5_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face13_camo6_EP1: Face13_camo1_EP1
		{
			head = "defaultHead_camo6";
			name = "$STR_EP1_DN_Face13_camo6_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face14_EP1: Default
		{
			name = "$STR_EP1_DN_Face14_EP1";
			head = "SimpleTakHead_EP1";
			texture = "\ca\characters_E\heads\data\hhl_14_CO.paa";
			material = "\ca\characters_E\Heads\Male\BeardHead\Data\hhl_tak.rvmat";
			disabled = 0;
			identityTypes[] = {"Default","","","","","","","","","","","","","","Head_TK","Head_TK_INS","Head_TK_GUE","Head_TK_CIV"};
		};
		class Face14_camo1_EP1: Face14_EP1
		{
			head = "defaultHead_camo1";
			name = "$STR_EP1_DN_Face14_camo1_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","","","","","","Head_TK_Camo","Head_TK_INS_Camo","Head_TK_GUE_Camo","Head_TK_CIV_Camo"};
		};
		class Face14_camo2_EP1: Face14_camo1_EP1
		{
			head = "defaultHead_camo2";
			name = "$STR_EP1_DN_Face14_camo2_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face14_camo3_EP1: Face14_camo1_EP1
		{
			head = "defaultHead_camo3";
			name = "$STR_EP1_DN_Face14_camo3_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face14_camo4_EP1: Face14_camo1_EP1
		{
			head = "defaultHead_camo4";
			name = "$STR_EP1_DN_Face14_camo4_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face14_camo5_EP1: Face14_camo1_EP1
		{
			head = "defaultHead_camo5";
			name = "$STR_EP1_DN_Face14_camo5_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face14_camo6_EP1: Face14_camo1_EP1
		{
			head = "defaultHead_camo6";
			name = "$STR_EP1_DN_Face14_camo6_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face15_EP1: Default
		{
			name = "$STR_EP1_DN_Face15_EP1";
			head = "SimpleTakHead_EP1";
			texture = "\ca\characters_E\heads\data\hhl_15_CO.paa";
			material = "\ca\characters_E\Heads\Male\BeardHead\Data\hhl_tak.rvmat";
			disabled = 0;
			identityTypes[] = {"Default","","","","","","","","","","","","","","Head_TK","","",""};
		};
		class Face15_camo1_EP1: Face15_EP1
		{
			head = "defaultHead_camo1";
			name = "$STR_EP1_DN_Face15_camo1_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","","","","","","Head_TK_Camo","","",""};
		};
		class Face15_camo2_EP1: Face15_camo1_EP1
		{
			head = "defaultHead_camo2";
			name = "$STR_EP1_DN_Face15_camo2_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face15_camo3_EP1: Face15_camo1_EP1
		{
			head = "defaultHead_camo3";
			name = "$STR_EP1_DN_Face15_camo3_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face15_camo4_EP1: Face15_camo1_EP1
		{
			head = "defaultHead_camo4";
			name = "$STR_EP1_DN_Face15_camo4_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face15_camo5_EP1: Face15_camo1_EP1
		{
			head = "defaultHead_camo5";
			name = "$STR_EP1_DN_Face15_camo5_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face15_camo6_EP1: Face15_camo1_EP1
		{
			head = "defaultHead_camo6";
			name = "$STR_EP1_DN_Face15_camo6_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face16_EP1: Default
		{
			name = "$STR_EP1_DN_Face16_EP1";
			head = "TakHead_EP1";
			texture = "\ca\characters_E\heads\data\hhl_16_CO.paa";
			material = "\ca\characters_E\Heads\Male\BeardHead\Data\hhl_tak.rvmat";
			disabled = 0;
			identityTypes[] = {"Default","","","","","","","","","","","","","","","Head_TK_INS","Head_TK_GUE","Head_TK_CIV"};
		};
		class Face16_camo1_EP1: Face16_EP1
		{
			head = "TakHead_camo1_EP1";
			name = "$STR_EP1_DN_Face16_camo1_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","","","","","","","Head_TK_INS_Camo","Head_TK_GUE_Camo","Head_TK_CIV_Camo"};
		};
		class Face16_camo2_EP1: Face16_camo1_EP1
		{
			head = "TakHead_camo2_EP1";
			name = "$STR_EP1_DN_Face16_camo2_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face16_camo3_EP1: Face16_camo1_EP1
		{
			head = "TakHead_camo3_EP1";
			name = "$STR_EP1_DN_Face16_camo3_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face16_camo4_EP1: Face16_camo1_EP1
		{
			head = "TakHead_camo4_EP1";
			name = "$STR_EP1_DN_Face16_camo4_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face16_camo5_EP1: Face16_camo1_EP1
		{
			head = "TakHead_camo5_EP1";
			name = "$STR_EP1_DN_Face16_camo5_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face16_camo6_EP1: Face16_camo1_EP1
		{
			head = "TakHead_camo6_EP1";
			name = "$STR_EP1_DN_Face16_camo6_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face17_EP1: Default
		{
			name = "$STR_EP1_DN_Face17_EP1";
			head = "SimpleTakHead_EP1";
			texture = "\ca\characters_E\heads\data\hhl_17_CO.paa";
			material = "\ca\characters_E\Heads\Male\BeardHead\Data\hhl_tak.rvmat";
			disabled = 0;
			identityTypes[] = {"Default","","","","","","","","","","","","","","Head_TK","","",""};
		};
		class Face17_camo1_EP1: Face17_EP1
		{
			head = "defaultHead_camo1";
			name = "$STR_EP1_DN_Face17_camo1_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","","","","","","Head_TK_Camo","","",""};
		};
		class Face17_camo2_EP1: Face17_camo1_EP1
		{
			head = "defaultHead_camo2";
			name = "$STR_EP1_DN_Face17_camo2_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face17_camo3_EP1: Face17_camo1_EP1
		{
			head = "defaultHead_camo3";
			name = "$STR_EP1_DN_Face17_camo3_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face17_camo4_EP1: Face17_camo1_EP1
		{
			head = "defaultHead_camo4";
			name = "$STR_EP1_DN_Face17_camo4_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face17_camo5_EP1: Face17_camo1_EP1
		{
			head = "defaultHead_camo5";
			name = "$STR_EP1_DN_Face17_camo5_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face17_camo6_EP1: Face17_camo1_EP1
		{
			head = "defaultHead_camo6";
			name = "$STR_EP1_DN_Face17_camo6_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face18_EP1: Default
		{
			name = "$STR_EP1_DN_Face18_EP1";
			head = "SimpleTakHead_EP1";
			texture = "\ca\characters_E\heads\data\hhl_18_CO.paa";
			material = "\ca\characters_E\Heads\Male\BeardHead\Data\hhl_tak.rvmat";
			disabled = 0;
			identityTypes[] = {"Default","","","","","","","","","","","","","","Head_TK","","",""};
		};
		class Face18_camo1_EP1: Face18_EP1
		{
			head = "defaultHead_camo1";
			name = "$STR_EP1_DN_Face18_camo1_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","","","","","","Head_TK_Camo","","",""};
		};
		class Face18_camo2_EP1: Face18_camo1_EP1
		{
			head = "defaultHead_camo2";
			name = "$STR_EP1_DN_Face18_camo2_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face18_camo3_EP1: Face18_camo1_EP1
		{
			head = "defaultHead_camo3";
			name = "$STR_EP1_DN_Face18_camo3_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face18_camo4_EP1: Face18_camo1_EP1
		{
			head = "defaultHead_camo4";
			name = "$STR_EP1_DN_Face18_camo4_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face18_camo5_EP1: Face18_camo1_EP1
		{
			head = "defaultHead_camo5";
			name = "$STR_EP1_DN_Face18_camo5_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face18_camo6_EP1: Face18_camo1_EP1
		{
			head = "defaultHead_camo6";
			name = "$STR_EP1_DN_Face18_camo6_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face19_EP1: Default
		{
			name = "$STR_EP1_DN_Face19_EP1";
			head = "SimpleTakHead_EP1";
			texture = "\ca\characters_E\heads\data\hhl_19_CO.paa";
			material = "\ca\characters_E\Heads\Male\BeardHead\Data\hhl_tak.rvmat";
			disabled = 0;
			identityTypes[] = {"Default","","","","","","","","","","","","","","Head_TK","Head_TK_INS","Head_TK_GUE","Head_TK_CIV"};
		};
		class Face19_camo1_EP1: Face19_EP1
		{
			head = "defaultHead_camo1";
			name = "$STR_EP1_DN_Face19_camo1_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","","","","","","Head_TK_Camo","Head_TK_INS_Camo","Head_TK_GUE_Camo","Head_TK_CIV_Camo"};
		};
		class Face19_camo2_EP1: Face19_camo1_EP1
		{
			head = "defaultHead_camo2";
			name = "$STR_EP1_DN_Face19_camo2_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face19_camo3_EP1: Face19_camo1_EP1
		{
			head = "defaultHead_camo3";
			name = "$STR_EP1_DN_Face19_camo3_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face19_camo4_EP1: Face19_camo1_EP1
		{
			head = "defaultHead_camo4";
			name = "$STR_EP1_DN_Face19_camo4_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face19_camo5_EP1: Face19_camo1_EP1
		{
			head = "defaultHead_camo5";
			name = "$STR_EP1_DN_Face19_camo5_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face19_camo6_EP1: Face19_camo1_EP1
		{
			head = "defaultHead_camo6";
			name = "$STR_EP1_DN_Face19_camo6_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face20_EP1: Default
		{
			name = "$STR_EP1_DN_Face20_EP1";
			head = "BeardHead_EP1";
			texture = "\ca\characters_E\heads\data\hhl_20_CO.paa";
			material = "\ca\characters_E\Heads\Male\BeardHead\Data\hhl_tak.rvmat";
			disabled = 0;
			identityTypes[] = {"Default","","","","","","","","","","","","","","Head_TK","Head_TK_INS","Head_TK_GUE","Head_TK_CIV"};
		};
		class Face20_camo1_EP1: Face20_EP1
		{
			head = "BeardHead_camo1_EP1";
			name = "$STR_EP1_DN_Face20_camo1_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","","","","","","Head_TK_Camo","Head_TK_INS_Camo","Head_TK_GUE_Camo","Head_TK_CIV_Camo"};
		};
		class Face20_camo2_EP1: Face20_camo1_EP1
		{
			head = "BeardHead_camo2_EP1";
			name = "$STR_EP1_DN_Face20_camo2_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face20_camo3_EP1: Face20_camo1_EP1
		{
			head = "BeardHead_camo3_EP1";
			name = "$STR_EP1_DN_Face20_camo3_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face20_camo4_EP1: Face20_camo1_EP1
		{
			head = "BeardHead_camo4_EP1";
			name = "$STR_EP1_DN_Face20_camo4_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face20_camo5_EP1: Face20_camo1_EP1
		{
			head = "BeardHead_camo5_EP1";
			name = "$STR_EP1_DN_Face20_camo5_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face20_camo6_EP1: Face20_camo1_EP1
		{
			head = "BeardHead_camo6_EP1";
			name = "$STR_EP1_DN_Face20_camo6_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Facegrover_EP1: Default
		{
			name = "$STR_EP1_DN_Facegrover_EP1";
			texture = "\ca\characters_E\heads\data\hhl_grover_CO.paa";
			disabled = 0;
			identityTypes[] = {"","","","","","","","","","","Head_Special","","","","","","",""};
		};
		class Facegrover_camo1_EP1: Facegrover_EP1
		{
			head = "defaultHead_camo1";
			name = "$STR_EP1_DN_Facegrover_camo1_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","","","","","","","","",""};
		};
		class Facegrover_camo2_EP1: Facegrover_camo1_EP1
		{
			head = "defaultHead_camo2";
			name = "$STR_EP1_DN_Facegrover_camo2_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Facegrover_camo3_EP1: Facegrover_camo1_EP1
		{
			head = "defaultHead_camo3";
			name = "$STR_EP1_DN_Facegrover_camo3_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Facegrover_camo4_EP1: Facegrover_camo1_EP1
		{
			head = "defaultHead_camo4";
			name = "$STR_EP1_DN_Facegrover_camo4_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Facegrover_camo5_EP1: Facegrover_camo1_EP1
		{
			head = "defaultHead_camo5";
			name = "$STR_EP1_DN_Facegrover_camo5_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Facegrover_camo6_EP1: Facegrover_camo1_EP1
		{
			head = "defaultHead_camo6";
			name = "$STR_EP1_DN_Facegrover_camo6_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Facegrover_wounded_EP1: Default
		{
			name = "$STR_EP1_DN_Facegrover_wounded_EP1";
			texture = "\ca\characters_E\heads\data\hhl_grover_wounded_CO.paa";
			disabled = 1;
			identityTypes[] = {"","","","","","","","","","","Head_Special","","","","","","",""};
		};
		class Facegrover_wounded_camo1_EP1: Facegrover_wounded_EP1
		{
			head = "defaultHead_camo1";
			name = "$STR_EP1_DN_Facegrover_wounded_camo1_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","","","","","","","","",""};
		};
		class Facegrover_wounded_camo2_EP1: Facegrover_wounded_camo1_EP1
		{
			head = "defaultHead_camo2";
			name = "$STR_EP1_DN_Facegrover_wounded_camo2_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Facegrover_wounded_camo3_EP1: Facegrover_wounded_camo1_EP1
		{
			head = "defaultHead_camo3";
			name = "$STR_EP1_DN_Facegrover_wounded_camo3_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Facegrover_wounded_camo4_EP1: Facegrover_wounded_camo1_EP1
		{
			head = "defaultHead_camo4";
			name = "$STR_EP1_DN_Facegrover_wounded_camo4_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Facegrover_wounded_camo5_EP1: Facegrover_wounded_camo1_EP1
		{
			head = "defaultHead_camo5";
			name = "$STR_EP1_DN_Facegrover_wounded_camo5_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Facegrover_wounded_camo6_EP1: Facegrover_wounded_camo1_EP1
		{
			head = "defaultHead_camo6";
			name = "$STR_EP1_DN_Facegrover_wounded_camo6_EP1";
			material = "\CA\characters_e\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face01: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face01_camo1: Face01
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face01_camo2: Face01_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face01_camo3: Face01_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face01_camo4: Face01_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face01_camo5: Face01_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face01_camo6: Face01_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face02: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face02_camo1: Face02
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face02_camo2: Face02_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face02_camo3: Face02_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face02_camo4: Face02_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face02_camo5: Face02_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face02_camo6: Face02_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face03: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face03_camo1: Face03
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face03_camo2: Face03_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face03_camo3: Face03_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face03_camo4: Face03_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face03_camo5: Face03_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face03_camo6: Face03_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face04: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face04_camo1: Face04
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face04_camo2: Face04_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face04_camo3: Face04_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face04_camo4: Face04_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face04_camo5: Face04_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face04_camo6: Face04_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face05: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face05_camo1: Face05
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face05_camo2: Face05_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face05_camo3: Face05_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face05_camo4: Face05_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face05_camo5: Face05_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face05_camo6: Face05_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face06: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face06_camo1: Face06
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face06_camo2: Face06_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face06_camo3: Face06_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face06_camo4: Face06_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face06_camo5: Face06_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face06_camo6: Face06_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face07: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face07_camo1: Face07
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face07_camo2: Face07_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face07_camo3: Face07_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face07_camo4: Face07_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face07_camo5: Face07_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face07_camo6: Face07_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face08: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face08_camo1: Face08
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face08_camo2: Face08_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face08_camo3: Face08_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face08_camo4: Face08_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face08_camo5: Face08_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face08_camo6: Face08_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face09: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face09_camo1: Face09
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face09_camo2: Face09_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face09_camo3: Face09_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face09_camo4: Face09_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face09_camo5: Face09_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face09_camo6: Face09_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face10: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face10_camo1: Face10
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face10_camo2: Face10_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face10_camo3: Face10_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face10_camo4: Face10_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face10_camo5: Face10_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face10_camo6: Face10_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face11: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face11_camo1: Face11
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face11_camo2: Face11_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face11_camo3: Face11_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face11_camo4: Face11_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face11_camo5: Face11_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face11_camo6: Face11_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face12: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face12_camo1: Face12
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face12_camo2: Face12_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face12_camo3: Face12_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face12_camo4: Face12_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face12_camo5: Face12_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face12_camo6: Face12_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face13: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face13_camo1: Face13
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face13_camo2: Face13_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face13_camo3: Face13_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face13_camo4: Face13_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face13_camo5: Face13_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face13_camo6: Face13_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face14: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face14_camo1: Face14
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face14_camo2: Face14_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face14_camo3: Face14_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face14_camo4: Face14_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face14_camo5: Face14_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face14_camo6: Face14_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face15: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face15_camo1: Face15
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face15_camo2: Face15_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face15_camo3: Face15_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face15_camo4: Face15_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face15_camo5: Face15_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face15_camo6: Face15_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face16: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face16_camo1: Face16
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face16_camo2: Face16_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face16_camo3: Face16_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face16_camo4: Face16_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face16_camo5: Face16_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face16_camo6: Face16_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face17: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face17_camo1: Face17
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face17_camo2: Face17_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face17_camo3: Face17_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face17_camo4: Face17_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face17_camo5: Face17_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face17_camo6: Face17_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face18: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face18_camo1: Face18
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face18_camo2: Face18_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face18_camo3: Face18_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face18_camo4: Face18_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face18_camo5: Face18_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face18_camo6: Face18_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face19: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face19_camo1: Face19
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face19_camo2: Face19_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face19_camo3: Face19_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face19_camo4: Face19_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face19_camo5: Face19_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face19_camo6: Face19_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face20: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face20_camo1: Face20
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face20_camo2: Face20_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face20_camo3: Face20_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face20_camo4: Face20_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face20_camo5: Face20_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face20_camo6: Face20_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face21: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face21_camo1: Face21
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face21_camo2: Face21_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face21_camo3: Face21_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face21_camo4: Face21_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face21_camo5: Face21_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face21_camo6: Face21_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face22: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face22_camo1: Face22
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face22_camo2: Face22_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face22_camo3: Face22_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face22_camo4: Face22_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face22_camo5: Face22_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face22_camo6: Face22_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face23: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face23_camo1: Face23
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face23_camo2: Face23_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face23_camo3: Face23_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face23_camo4: Face23_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face23_camo5: Face23_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face23_camo6: Face23_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face24: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face24_camo1: Face24
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face24_camo2: Face24_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face24_camo3: Face24_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face24_camo4: Face24_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face24_camo5: Face24_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face24_camo6: Face24_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face25: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face25_camo1: Face25
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face25_camo2: Face25_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face25_camo3: Face25_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face25_camo4: Face25_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face25_camo5: Face25_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face25_camo6: Face25_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face26: Default
		{
			material = "\ca\characters_e\heads\male\blackhead\data\hhl_black.rvmat";
		};
		class Face26_camo1: Face26
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
		};
		class Face26_camo2: Face26_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
		};
		class Face26_camo3: Face26_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
		};
		class Face26_camo4: Face26_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
		};
		class Face26_camo5: Face26_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
		};
		class Face26_camo6: Face26_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
		};
		class Face27: Default
		{
			material = "\ca\characters_e\heads\male\blackhead\data\hhl_black.rvmat";
		};
		class Face27_camo1: Face27
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
		};
		class Face27_camo2: Face27_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
		};
		class Face27_camo3: Face27_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
		};
		class Face27_camo4: Face27_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
		};
		class Face27_camo5: Face27_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
		};
		class Face27_camo6: Face27_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
		};
		class Face28: Default
		{
			material = "\ca\characters_e\heads\male\blackhead\data\hhl_black.rvmat";
		};
		class Face28_camo1: Face28
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
		};
		class Face28_camo2: Face28_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
		};
		class Face28_camo3: Face28_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
		};
		class Face28_camo4: Face28_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
		};
		class Face28_camo5: Face28_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
		};
		class Face28_camo6: Face28_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
		};
		class Face29: Default
		{
			material = "\ca\characters_e\heads\male\blackhead\data\hhl_black.rvmat";
		};
		class Face29_camo1: Face29
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
		};
		class Face29_camo2: Face29_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
		};
		class Face29_camo3: Face29_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
		};
		class Face29_camo4: Face29_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
		};
		class Face29_camo5: Face29_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
		};
		class Face29_camo6: Face29_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
		};
		class Face30: Default
		{
			material = "\ca\characters_e\heads\male\blackhead\data\hhl_black.rvmat";
		};
		class Face30_camo1: Face30
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
		};
		class Face30_camo2: Face30_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
		};
		class Face30_camo3: Face30_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
		};
		class Face30_camo4: Face30_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
		};
		class Face30_camo5: Face30_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
		};
		class Face30_camo6: Face30_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
		};
		class Face31: Default
		{
			material = "\ca\characters_e\heads\male\blackhead\data\hhl_black.rvmat";
		};
		class Face31_camo1: Face31
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
		};
		class Face31_camo2: Face31_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
		};
		class Face31_camo3: Face31_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
		};
		class Face31_camo4: Face31_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
		};
		class Face31_camo5: Face31_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
		};
		class Face31_camo6: Face31_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
		};
		class Face32: Default
		{
			material = "\ca\characters_e\heads\male\blackhead\data\hhl_black.rvmat";
		};
		class Face32_camo1: Face32
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
		};
		class Face32_camo2: Face32_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
		};
		class Face32_camo3: Face32_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
		};
		class Face32_camo4: Face32_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
		};
		class Face32_camo5: Face32_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
		};
		class Face32_camo6: Face32_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
		};
		class Face33: Default
		{
			material = "\ca\characters_e\heads\male\blackhead\data\hhl_black.rvmat";
		};
		class Face33_camo1: Face33
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
		};
		class Face33_camo2: Face33_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
		};
		class Face33_camo3: Face33_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
		};
		class Face33_camo4: Face33_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
		};
		class Face33_camo5: Face33_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
		};
		class Face33_camo6: Face33_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
		};
		class Face34: Default
		{
			material = "\ca\characters_e\heads\male\blackhead\data\hhl_black.rvmat";
		};
		class Face34_camo1: Face34
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
		};
		class Face34_camo2: Face34_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
		};
		class Face34_camo3: Face34_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
		};
		class Face34_camo4: Face34_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
		};
		class Face34_camo5: Face34_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
		};
		class Face34_camo6: Face34_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
		};
		class Face35: Default
		{
			material = "\ca\characters_e\heads\male\blackhead\data\hhl_black.rvmat";
		};
		class Face35_camo1: Face35
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
		};
		class Face35_camo2: Face35_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
		};
		class Face35_camo3: Face35_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
		};
		class Face35_camo4: Face35_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
		};
		class Face35_camo5: Face35_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
		};
		class Face35_camo6: Face35_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
		};
		class Face36: Default
		{
			material = "\ca\characters_e\heads\male\blackhead\data\hhl_black.rvmat";
		};
		class Face36_camo1: Face36
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
		};
		class Face36_camo2: Face36_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
		};
		class Face36_camo3: Face36_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
		};
		class Face36_camo4: Face36_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
		};
		class Face36_camo5: Face36_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
		};
		class Face36_camo6: Face36_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
		};
		class Face37: Default
		{
			material = "\ca\characters_e\heads\male\blackhead\data\hhl_black.rvmat";
		};
		class Face37_camo1: Face37
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
		};
		class Face37_camo2: Face37_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
		};
		class Face37_camo3: Face37_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
		};
		class Face37_camo4: Face37_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
		};
		class Face37_camo5: Face37_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
		};
		class Face37_camo6: Face37_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
		};
		class Face38: Default
		{
			material = "\ca\characters_e\heads\male\blackhead\data\hhl_black.rvmat";
		};
		class Face38_camo1: Face38
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
		};
		class Face38_camo2: Face38_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
		};
		class Face38_camo3: Face38_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
		};
		class Face38_camo4: Face38_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
		};
		class Face38_camo5: Face38_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
		};
		class Face38_camo6: Face38_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
		};
		class Face39: Default
		{
			material = "\ca\characters_e\heads\male\blackhead\data\hhl_black.rvmat";
		};
		class Face39_camo1: Face39
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
		};
		class Face39_camo2: Face39_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
		};
		class Face39_camo3: Face39_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
		};
		class Face39_camo4: Face39_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
		};
		class Face39_camo5: Face39_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
		};
		class Face39_camo6: Face39_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
		};
		class Face40: Default
		{
			material = "\ca\characters_e\heads\male\blackhead\data\hhl_black.rvmat";
		};
		class Face40_camo1: Face40
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
		};
		class Face40_camo2: Face40_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
		};
		class Face40_camo3: Face40_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
		};
		class Face40_camo4: Face40_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
		};
		class Face40_camo5: Face40_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
		};
		class Face40_camo6: Face40_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
		};
		class Face41: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face41_camo1: Face41
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face41_camo2: Face41_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face41_camo3: Face41_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face41_camo4: Face41_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face41_camo5: Face41_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face41_camo6: Face41_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face42: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face42_camo1: Face42
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face42_camo2: Face42_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face42_camo3: Face42_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face42_camo4: Face42_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face42_camo5: Face42_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face42_camo6: Face42_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face43: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face43_camo1: Face43
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face43_camo2: Face43_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face43_camo3: Face43_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face43_camo4: Face43_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face43_camo5: Face43_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face43_camo6: Face43_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face44: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face44_camo1: Face44
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face44_camo2: Face44_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face44_camo3: Face44_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face44_camo4: Face44_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face44_camo5: Face44_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face44_camo6: Face44_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face45: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face45_camo1: Face45
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face45_camo2: Face45_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face45_camo3: Face45_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face45_camo4: Face45_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face45_camo5: Face45_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face45_camo6: Face45_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face46: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face46_camo1: Face46
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face46_camo2: Face46_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face46_camo3: Face46_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face46_camo4: Face46_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face46_camo5: Face46_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face46_camo6: Face46_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face47: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face47_camo1: Face47
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face47_camo2: Face47_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face47_camo3: Face47_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face47_camo4: Face47_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face47_camo5: Face47_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face47_camo6: Face47_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face48: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face48_camo1: Face48
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face48_camo2: Face48_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face48_camo3: Face48_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face48_camo4: Face48_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face48_camo5: Face48_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face48_camo6: Face48_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face49: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face49_camo1: Face49
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face49_camo2: Face49_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face49_camo3: Face49_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face49_camo4: Face49_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face49_camo5: Face49_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face49_camo6: Face49_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face50: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face50_camo1: Face50
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face50_camo2: Face50_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face50_camo3: Face50_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face50_camo4: Face50_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face50_camo5: Face50_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face50_camo6: Face50_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face51: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face51_camo1: Face51
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face51_camo2: Face51_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face51_camo3: Face51_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face51_camo4: Face51_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face51_camo5: Face51_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face51_camo6: Face51_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face52: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face52_camo1: Face52
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face52_camo2: Face52_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face52_camo3: Face52_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face52_camo4: Face52_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face52_camo5: Face52_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face52_camo6: Face52_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face53: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face53_camo1: Face53
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face53_camo2: Face53_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face53_camo3: Face53_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face53_camo4: Face53_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face53_camo5: Face53_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face53_camo6: Face53_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face54: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face54_camo1: Face54
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face54_camo2: Face54_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face54_camo3: Face54_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face54_camo4: Face54_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face54_camo5: Face54_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face54_camo6: Face54_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face55: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face55_camo1: Face55
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face55_camo2: Face55_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face55_camo3: Face55_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face55_camo4: Face55_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face55_camo5: Face55_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face55_camo6: Face55_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face56: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face56_camo1: Face56
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face56_camo2: Face56_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face56_camo3: Face56_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face56_camo4: Face56_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face56_camo5: Face56_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face56_camo6: Face56_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face57: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face57_camo1: Face57
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face57_camo2: Face57_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face57_camo3: Face57_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face57_camo4: Face57_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face57_camo5: Face57_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face57_camo6: Face57_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face58: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face58_camo1: Face58
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face58_camo2: Face58_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face58_camo3: Face58_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face58_camo4: Face58_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face58_camo5: Face58_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face58_camo6: Face58_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face59: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face59_camo1: Face59
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face59_camo2: Face59_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face59_camo3: Face59_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face59_camo4: Face59_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face59_camo5: Face59_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face59_camo6: Face59_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face60: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face60_camo1: Face60
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face60_camo2: Face60_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face60_camo3: Face60_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face60_camo4: Face60_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face60_camo5: Face60_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face60_camo6: Face60_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face60_Hair: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face60_Hair_camo1: Face60_Hair
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face60_Hair_camo2: Face60_Hair_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face60_Hair_camo3: Face60_Hair_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face60_Hair_camo4: Face60_Hair_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face60_Hair_camo5: Face60_Hair_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face60_Hair_camo6: Face60_Hair_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face61: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face61_camo1: Face61
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face61_camo2: Face61_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face61_camo3: Face61_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face61_camo4: Face61_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face61_camo5: Face61_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face61_camo6: Face61_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face61_Hair: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face61_Hair_camo1: Face61_Hair
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face61_Hair_camo2: Face61_Hair_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face61_Hair_camo3: Face61_Hair_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face61_Hair_camo4: Face61_Hair_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face61_Hair_camo5: Face61_Hair_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face61_Hair_camo6: Face61_Hair_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face62: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face62_camo1: Face62
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face62_camo2: Face62_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face62_camo3: Face62_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face62_camo4: Face62_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face62_camo5: Face62_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face62_camo6: Face62_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face63: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face63_camo1: Face63
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face63_camo2: Face63_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face63_camo3: Face63_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face63_camo4: Face63_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face63_camo5: Face63_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face63_camo6: Face63_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face64: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face64_camo1: Face64
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face64_camo2: Face64_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face64_camo3: Face64_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face64_camo4: Face64_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face64_camo5: Face64_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face64_camo6: Face64_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face65: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face65_camo1: Face65
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face65_camo2: Face65_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face65_camo3: Face65_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face65_camo4: Face65_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face65_camo5: Face65_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face65_camo6: Face65_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face66: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face66_camo1: Face66
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face66_camo2: Face66_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face66_camo3: Face66_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face66_camo4: Face66_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face66_camo5: Face66_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face66_camo6: Face66_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face67: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face67_camo1: Face67
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face67_camo2: Face67_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face67_camo3: Face67_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face67_camo4: Face67_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face67_camo5: Face67_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face67_camo6: Face67_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face68: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face68_camo1: Face68
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face68_camo2: Face68_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face68_camo3: Face68_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face68_camo4: Face68_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face68_camo5: Face68_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face68_camo6: Face68_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face69: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face69_camo1: Face69
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face69_camo2: Face69_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face69_camo3: Face69_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face69_camo4: Face69_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face69_camo5: Face69_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face69_camo6: Face69_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face70: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face70_camo1: Face70
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face70_camo2: Face70_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face70_camo3: Face70_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face70_camo4: Face70_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face70_camo5: Face70_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face70_camo6: Face70_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face71: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face71_camo1: Face71
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face71_camo2: Face71_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face71_camo3: Face71_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face71_camo4: Face71_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face71_camo5: Face71_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face71_camo6: Face71_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face72: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face72_camo1: Face72
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face72_camo2: Face72_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face72_camo3: Face72_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face72_camo4: Face72_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face72_camo5: Face72_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face72_camo6: Face72_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face73: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face73_camo1: Face73
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face73_camo2: Face73_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face73_camo3: Face73_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face73_camo4: Face73_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face73_camo5: Face73_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face73_camo6: Face73_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face74: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face74_camo1: Face74
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face74_camo2: Face74_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face74_camo3: Face74_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face74_camo4: Face74_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face74_camo5: Face74_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face74_camo6: Face74_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face75: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face75_camo1: Face75
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face75_camo2: Face75_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face75_camo3: Face75_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face75_camo4: Face75_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face75_camo5: Face75_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face75_camo6: Face75_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face76: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face76_camo1: Face76
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face76_camo2: Face76_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face76_camo3: Face76_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face76_camo4: Face76_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face76_camo5: Face76_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face76_camo6: Face76_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face77: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face77_camo1: Face77
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face77_camo2: Face77_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face77_camo3: Face77_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face77_camo4: Face77_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face77_camo5: Face77_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face77_camo6: Face77_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face78: Default
		{
			material = "\ca\characters_e\heads\male\blackhead\data\hhl_black.rvmat";
		};
		class Face78_camo1: Face78
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
		};
		class Face78_camo2: Face78_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
		};
		class Face78_camo3: Face78_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
		};
		class Face78_camo4: Face78_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
		};
		class Face78_camo5: Face78_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
		};
		class Face78_camo6: Face78_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
		};
		class Face79: Default
		{
			material = "\ca\characters_e\heads\male\blackhead\data\hhl_black.rvmat";
		};
		class Face79_camo1: Face79
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
		};
		class Face79_camo2: Face79_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
		};
		class Face79_camo3: Face79_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
		};
		class Face79_camo4: Face79_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
		};
		class Face79_camo5: Face79_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
		};
		class Face79_camo6: Face79_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
		};
		class Face80: Default
		{
			material = "\ca\characters_e\heads\male\blackhead\data\hhl_black.rvmat";
		};
		class Face80_camo1: Face80
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
		};
		class Face80_camo2: Face80_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
		};
		class Face80_camo3: Face80_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
		};
		class Face80_camo4: Face80_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
		};
		class Face80_camo5: Face80_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
		};
		class Face80_camo6: Face80_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
		};
		class Face81: Default
		{
			material = "\ca\characters_e\heads\male\blackhead\data\hhl_black.rvmat";
		};
		class Face81_camo1: Face81
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
		};
		class Face81_camo2: Face81_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
		};
		class Face81_camo3: Face81_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
		};
		class Face81_camo4: Face81_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
		};
		class Face81_camo5: Face81_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
		};
		class Face81_camo6: Face81_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
		};
		class Face82: Default
		{
			material = "\ca\characters_e\heads\male\blackhead\data\hhl_black.rvmat";
		};
		class Face82_camo1: Face82
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
		};
		class Face82_camo2: Face82_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
		};
		class Face82_camo3: Face82_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
		};
		class Face82_camo4: Face82_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
		};
		class Face82_camo5: Face82_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
		};
		class Face82_camo6: Face82_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
		};
		class Face83: Default
		{
			material = "\ca\characters_e\heads\male\blackhead\data\hhl_black.rvmat";
		};
		class Face83_camo1: Face83
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
		};
		class Face83_camo2: Face83_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
		};
		class Face83_camo3: Face83_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
		};
		class Face83_camo4: Face83_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
		};
		class Face83_camo5: Face83_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
		};
		class Face83_camo6: Face83_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
		};
		class Face84: Default
		{
			material = "\ca\characters_e\heads\male\blackhead\data\hhl_black.rvmat";
		};
		class Face84_camo1: Face84
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
		};
		class Face84_camo2: Face84_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
		};
		class Face84_camo3: Face84_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
		};
		class Face84_camo4: Face84_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
		};
		class Face84_camo5: Face84_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
		};
		class Face84_camo6: Face84_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
		};
		class Face86: Default
		{
			material = "\ca\characters_e\heads\male\blackhead\data\hhl_black.rvmat";
		};
		class Face86_camo1: Face86
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
		};
		class Face86_camo2: Face86_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
		};
		class Face86_camo3: Face86_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
		};
		class Face86_camo4: Face86_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
		};
		class Face86_camo5: Face86_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
		};
		class Face86_camo6: Face86_camo1
		{
			material = "\ca\characters_e\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
		};
		class Face85: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face85_camo1: Face85
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face85_camo2: Face85_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face85_camo3: Face85_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face85_camo4: Face85_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face85_camo5: Face85_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face85_camo6: Face85_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face87: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face87_camo1: Face87
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face87_camo2: Face87_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face87_camo3: Face87_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face87_camo4: Face87_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face87_camo5: Face87_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face87_camo6: Face87_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face88: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face88_camo1: Face88
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face88_camo2: Face88_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face88_camo3: Face88_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face88_camo4: Face88_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face88_camo5: Face88_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face88_camo6: Face88_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face89: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face89_camo1: Face89
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face89_camo2: Face89_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face89_camo3: Face89_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face89_camo4: Face89_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face89_camo5: Face89_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face89_camo6: Face89_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face90: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face90_camo1: Face90
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face90_camo2: Face90_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face90_camo3: Face90_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face90_camo4: Face90_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face90_camo5: Face90_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face90_camo6: Face90_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face91: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face91_camo1: Face91
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face91_camo2: Face91_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face91_camo3: Face91_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face91_camo4: Face91_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face91_camo5: Face91_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face91_camo6: Face91_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face92: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face92_camo1: Face92
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face92_camo2: Face92_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face92_camo3: Face92_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face92_camo4: Face92_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face92_camo5: Face92_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face92_camo6: Face92_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face93: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face93_camo1: Face93
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face93_camo2: Face93_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face93_camo3: Face93_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face93_camo4: Face93_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face93_camo5: Face93_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face93_camo6: Face93_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face94: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face94_camo1: Face94
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face94_camo2: Face94_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face94_camo3: Face94_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face94_camo4: Face94_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face94_camo5: Face94_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face94_camo6: Face94_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face95: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face95_camo1: Face95
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face95_camo2: Face95_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face95_camo3: Face95_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face95_camo4: Face95_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face95_camo5: Face95_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face95_camo6: Face95_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face96: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face96_camo1: Face96
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face96_camo2: Face96_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face96_camo3: Face96_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face96_camo4: Face96_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face96_camo5: Face96_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face96_camo6: Face96_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face97: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face97_camo1: Face97
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face97_camo2: Face97_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face97_camo3: Face97_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face97_camo4: Face97_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face97_camo5: Face97_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face97_camo6: Face97_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face98: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face98_camo1: Face98
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face98_camo2: Face98_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face98_camo3: Face98_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face98_camo4: Face98_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face98_camo5: Face98_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face98_camo6: Face98_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face99: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face99_camo1: Face99
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face99_camo2: Face99_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face99_camo3: Face99_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face99_camo4: Face99_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face99_camo5: Face99_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face99_camo6: Face99_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face100: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face100_camo1: Face100
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face100_camo2: Face100_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face100_camo3: Face100_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face100_camo4: Face100_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face100_camo5: Face100_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face100_camo6: Face100_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face101: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face101_camo1: Face101
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face101_camo2: Face101_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face101_camo3: Face101_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face101_camo4: Face101_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face101_camo5: Face101_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face101_camo6: Face101_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face102: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face102_camo1: Face102
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face102_camo2: Face102_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face102_camo3: Face102_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face102_camo4: Face102_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face102_camo5: Face102_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face102_camo6: Face102_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face103: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face103_camo1: Face103
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face103_camo2: Face103_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face103_camo3: Face103_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face103_camo4: Face103_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face103_camo5: Face103_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face103_camo6: Face103_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face104: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face104_camo1: Face104
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face104_camo2: Face104_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face104_camo3: Face104_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face104_camo4: Face104_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face104_camo5: Face104_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face104_camo6: Face104_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face105: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face105_camo1: Face105
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face105_camo2: Face105_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face105_camo3: Face105_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face105_camo4: Face105_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face105_camo5: Face105_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face105_camo6: Face105_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face106: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face106_camo1: Face106
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face106_camo2: Face106_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face106_camo3: Face106_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face106_camo4: Face106_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face106_camo5: Face106_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face106_camo6: Face106_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
		class Face107: Default
		{
			material = "\ca\characters_E\Heads\Male\DefaultHead\Data\hhl_white.rvmat";
		};
		class Face107_camo1: Face107
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo1_hhl.rvmat";
		};
		class Face107_camo2: Face107_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo2_hhl.rvmat";
		};
		class Face107_camo3: Face107_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo3_hhl.rvmat";
		};
		class Face107_camo4: Face107_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo4_hhl.rvmat";
		};
		class Face107_camo5: Face107_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo5_hhl.rvmat";
		};
		class Face107_camo6: Face107_camo1
		{
			material = "\ca\characters_e\heads\male\DefaultHead\data\Camo6_hhl.rvmat";
		};
	};
	class DrakeHead_EP1
	{
		class Default
		{
			name = "$STR_EP1_DN_DrakeHead";
			texture = "\ca\characters\hhl\hhl_04_CO.paa";
			head = "DrakeHead_EP1";
			identityTypes[] = {"Drake"};
			material = "\ca\characters_e\heads\male\defaulthead\data\hhl_white.rvmat";
		};
		class Drake: Default{};
	};
	class HerreraHead_EP1
	{
		class Default
		{
			name = "$STR_EP1_DN_HerreraHead";
			texture = "\ca\characters\hhl\hhl_04_CO.paa";
			head = "HerreraHead_EP1";
			identityTypes[] = {"Herrera"};
			material = "\ca\characters_e\heads\male\defaulthead\data\hhl_white.rvmat";
		};
		class Herrera: Default{};
	};
	class PierceHead_EP1
	{
		class Default
		{
			name = "$STR_EP1_DN_PierceHead";
			texture = "\ca\characters\hhl\hhl_04_CO.paa";
			head = "PierceHead_EP1";
			identityTypes[] = {"Pierce"};
			material = "\ca\characters_e\heads\male\blackhead\data\hhl_black.rvmat";
		};
		class Pierce: Default{};
	};
	class GravesHead_EP1
	{
		class Default
		{
			name = "$STR_EP1_DN_GravesHead";
			texture = "\ca\characters\hhl\hhl_04_CO.paa";
			head = "GravesHead_EP1";
			identityTypes[] = {"Graves"};
			material = "\ca\characters_e\heads\male\defaulthead\data\hhl_white.rvmat";
		};
		class Graves: Default{};
	};
};
class CfgGlasses
{
	class None
	{
		identityTypes[] = {"NoGlasses",1,"Civ_Glasses",882,"USMC_Glasses",825,"FR_Glasses",9,"RU_Glasses",939,"CDF_Glasses",930,"INS_Glasses",955,"Gue_Glasses",930,"pilot_sunglasses",8,"Civ_EU_Special",911};
	};
	class Delta_glasses: None
	{
		scope = 1;
		name = "$STR_EP1_DN_Delta_glasses";
		model = "\ca\characters_e\Heads\Glasses\Delta1G.p3d";
		identityTypes[] = {"Delta_glasses",1};
	};
	class Spectacles: None
	{
		model = "\Ca\characters_e\Heads\glasses\Spectacles";
		identityTypes[] = {"Civ_Glasses",50,"USMC_Glasses",20,"CDF_Glasses",40,"Gue_Glasses",40,"INS_Glasses",20,"RU_Glasses",1,"Spectacles_Glasses",1,"Civ_EU_Special",50};
	};
	class RoundGlasses: None
	{
		model = "\Ca\characters_e\Heads\glasses\RoundGlasses";
		identityTypes[] = {"Civ_Glasses",50,"CDF_Glasses",5,"Gue_Glasses",10,"INS_Glasses",5,"Reading_Glasses",1,"Civ_EU_Special",20};
	};
	class Sunglasses: None
	{
		model = "\Ca\characters_e\Heads\glasses\sunGlasses";
		identityTypes[] = {"Civ_SunGlasses",10,"USMC_Glasses",30,"CDF_Glasses",20,"Gue_Glasses",20,"INS_Glasses",20,"RU_Glasses",40,"aviator_sunglases",1,"pilot_sunglasses",2,"Civ_EU_Special",10};
	};
	class Tactical: None
	{
		model = "\Ca\characters_e\Heads\glasses\TacticalGlasses";
		identityTypes[] = {"USMC_Glasses",100,"CDF_Glasses",5,"RU_Glasses",20,"Tactical_Glasses",1,"FR_Glasses",1};
	};
	class BlackSun: None
	{
		model = "\Ca\characters_e\Heads\glasses\BlackSun";
		identityTypes[] = {"Civ_SunGlasses",10,"USMC_Glasses",5,"Black_sunglasses",1,"Civ_EU_Special",5};
	};
	class BlueSun: None
	{
		model = "\Ca\characters_e\Heads\glasses\BlueSun";
		identityTypes[] = {"USMC_Glasses",5,"Civ_SunGlasses",1,"Shade_sunglasses",1,"Civ_EU_Special",1};
	};
	class RedSun: BlueSun
	{
		model = "\Ca\characters_e\Heads\glasses\RedSun";
	};
	class GreenSun: BlueSun
	{
		model = "\Ca\characters_e\Heads\glasses\GreenSun";
	};
};
class CfgHeads
{
	class Default
	{
		model = "\ca\characters_E\Heads\male\DefaultHead\DefaultHead";
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\characters_e\heads\male\defaulthead\data\hhl_white.rvmat","ca\characters_e\Heads\male\DefaultHead\Data\hhl_Wounds.rvmat","ca\characters_e\Heads\male\DefaultHead\Data\hhl_Wounds.rvmat"};
		};
		class Grimaces
		{
			class Eyes
			{
				type = "eyes";
				eyeMaxAngle = 0.5;
				eyelidUpStartAngle = 0.8;
				eyelidUpMaxAngle = 1.0;
				eyelidDownStartAngle = 0.25;
				eyelidDownMaxAngle = 0.3;
			};
		};
	};
	class DefaultHead: Default
	{
		model = "\ca\characters_E\Heads\male\DefaultHead\DefaultHead";
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\characters_e\heads\male\defaulthead\data\hhl_white.rvmat","ca\characters_e\Heads\male\DefaultHead\Data\hhl_Wounds.rvmat","ca\characters_e\Heads\male\DefaultHead\Data\hhl_Wounds.rvmat"};
		};
	};
	class Cooper;
	class BlackHead: Cooper
	{
		model = "\ca\characters_E\Heads\male\BlackHead\BlackHead";
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\characters_e\heads\male\blackhead\data\hhl_black.rvmat","ca\characters\heads\male\blackhead\data\hhl_black_Wounds1.rvmat","ca\characters\heads\male\blackhead\data\hhl_black_Wounds2.rvmat"};
		};
	};
	class BeardHead_EP1: DefaultHead
	{
		model = "\ca\characters_E\Heads\Male\BeardHead\BeardHead";
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\characters_E\Heads\Male\BeardHead\Data\hhl_tak.rvmat","ca\characters_E\Heads\Male\BeardHead\Data\hhl_tak_Wounds.rvmat","ca\characters_E\Heads\Male\BeardHead\Data\hhl_tak_Wounds2.rvmat"};
		};
	};
	class BeardHead_camo1_EP1: BeardHead_EP1
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\Characters\Heads\Male\DefaultHead\data\hhl_white.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_01_wounds1.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_01_wounds2.rvmat"};
		};
	};
	class BeardHead_camo2_EP1: BeardHead_EP1
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\Characters\Heads\Male\DefaultHead\data\hhl_white.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_02_wounds1.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_02_wounds2.rvmat"};
		};
	};
	class BeardHead_camo3_EP1: BeardHead_EP1
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\Characters\Heads\Male\DefaultHead\data\hhl_white.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_03_wounds1.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_03_wounds2.rvmat"};
		};
	};
	class BeardHead_camo4_EP1: BeardHead_EP1
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\Characters\Heads\Male\DefaultHead\data\hhl_white.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_04_wounds1.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_04_wounds2.rvmat"};
		};
	};
	class BeardHead_camo5_EP1: BeardHead_EP1
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\Characters\Heads\Male\DefaultHead\data\hhl_white.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_05_wounds1.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_05_wounds2.rvmat"};
		};
	};
	class BeardHead_camo6_EP1: BeardHead_EP1
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\Characters\Heads\Male\DefaultHead\data\hhl_white.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_06_wounds1.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_06_wounds2.rvmat"};
		};
	};
	class TakHead_EP1: DefaultHead
	{
		model = "\ca\characters_E\Heads\Male\BeardHead\TakHead";
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\characters_E\Heads\Male\BeardHead\Data\hhl_tak.rvmat","ca\characters_E\Heads\Male\BeardHead\Data\hhl_tak_Wounds.rvmat","ca\characters_E\Heads\Male\BeardHead\Data\hhl_tak_Wounds2.rvmat"};
		};
	};
	class TakHead_camo1_EP1: TakHead_EP1
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\Characters\Heads\Male\DefaultHead\data\hhl_white.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_01_wounds1.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_01_wounds2.rvmat"};
		};
	};
	class TakHead_camo2_EP1: TakHead_EP1
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\Characters\Heads\Male\DefaultHead\data\hhl_white.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_02_wounds1.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_02_wounds2.rvmat"};
		};
	};
	class TakHead_camo3_EP1: TakHead_EP1
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\Characters\Heads\Male\DefaultHead\data\hhl_white.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_03_wounds1.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_03_wounds2.rvmat"};
		};
	};
	class TakHead_camo4_EP1: TakHead_EP1
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\Characters\Heads\Male\DefaultHead\data\hhl_white.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_04_wounds1.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_04_wounds2.rvmat"};
		};
	};
	class TakHead_camo5_EP1: TakHead_EP1
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\Characters\Heads\Male\DefaultHead\data\hhl_white.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_05_wounds1.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_05_wounds2.rvmat"};
		};
	};
	class TakHead_camo6_EP1: TakHead_EP1
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\Characters\Heads\Male\DefaultHead\data\hhl_white.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_06_wounds1.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_06_wounds2.rvmat"};
		};
	};
	class SimpleTakHead_EP1: DefaultHead
	{
		model = "\ca\characters_E\Heads\male\DefaultHead\DefaultHead";
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\characters_e\heads\male\defaulthead\data\hhl_white.rvmat","ca\characters_E\Heads\Male\BeardHead\Data\hhl_tak_Wounds.rvmat","ca\characters_E\Heads\Male\BeardHead\Data\hhl_tak_Wounds2.rvmat"};
		};
	};
	class DrakeHead_EP1: DefaultHead
	{
		model = "\ca\characters_E\Heads\Male\Drake\Drake";
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\characters_E\Heads\Male\Drake\Data\Drake.rvmat","ca\characters_E\Heads\Male\Drake\Data\Drake_W1.rvmat","ca\characters_E\Heads\Male\Drake\Data\Drake_W2.rvmat"};
		};
	};
	class DrakeHead_camo1_EP1: DrakeHead_EP1
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\Characters\Heads\Male\DefaultHead\data\hhl_white.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_01_wounds1.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_01_wounds2.rvmat"};
		};
	};
	class DrakeHead_camo2_EP1: DrakeHead_EP1
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\Characters\Heads\Male\DefaultHead\data\hhl_white.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_02_wounds1.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_02_wounds2.rvmat"};
		};
	};
	class DrakeHead_camo3_EP1: DrakeHead_EP1
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\Characters\Heads\Male\DefaultHead\data\hhl_white.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_03_wounds1.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_03_wounds2.rvmat"};
		};
	};
	class DrakeHead_camo4_EP1: DrakeHead_EP1
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\Characters\Heads\Male\DefaultHead\data\hhl_white.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_04_wounds1.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_04_wounds2.rvmat"};
		};
	};
	class DrakeHead_camo5_EP1: DrakeHead_EP1
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\Characters\Heads\Male\DefaultHead\data\hhl_white.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_05_wounds1.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_05_wounds2.rvmat"};
		};
	};
	class DrakeHead_camo6_EP1: DrakeHead_EP1
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\Characters\Heads\Male\DefaultHead\data\hhl_white.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_06_wounds1.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_06_wounds2.rvmat"};
		};
	};
	class GravesHead_EP1: DefaultHead
	{
		model = "\ca\characters_E\Heads\Male\Graves\Graves";
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\characters_E\Heads\Male\Graves\Data\Graves.rvmat","ca\characters_E\Heads\Male\Graves\Data\Graves_W1.rvmat","ca\characters_E\Heads\Male\Graves\Data\Graves_W2.rvmat"};
		};
	};
	class GravesHead_camo1_EP1: GravesHead_EP1
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\Characters\Heads\Male\DefaultHead\data\hhl_white.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_01_wounds1.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_01_wounds2.rvmat"};
		};
	};
	class GravesHead_camo2_EP1: GravesHead_EP1
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\Characters\Heads\Male\DefaultHead\data\hhl_white.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_02_wounds1.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_02_wounds2.rvmat"};
		};
	};
	class GravesHead_camo3_EP1: GravesHead_EP1
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\Characters\Heads\Male\DefaultHead\data\hhl_white.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_03_wounds1.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_03_wounds2.rvmat"};
		};
	};
	class GravesHead_camo4_EP1: GravesHead_EP1
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\Characters\Heads\Male\DefaultHead\data\hhl_white.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_04_wounds1.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_04_wounds2.rvmat"};
		};
	};
	class GravesHead_camo5_EP1: GravesHead_EP1
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\Characters\Heads\Male\DefaultHead\data\hhl_white.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_05_wounds1.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_05_wounds2.rvmat"};
		};
	};
	class GravesHead_camo6_EP1: GravesHead_EP1
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\Characters\Heads\Male\DefaultHead\data\hhl_white.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_06_wounds1.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_06_wounds2.rvmat"};
		};
	};
	class HerreraHead_EP1: DefaultHead
	{
		model = "\ca\characters_E\Heads\Male\Herrera\Herrera";
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\characters_E\Heads\Male\Herrera\Data\Herrera.rvmat","ca\characters_E\Heads\Male\Herrera\Data\Herrera_W1.rvmat","ca\characters_E\Heads\Male\Herrera\Data\Herrera_W2.rvmat"};
		};
	};
	class HerreraHead_camo1_EP1: HerreraHead_EP1
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\Characters\Heads\Male\DefaultHead\data\hhl_white.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_01_wounds1.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_01_wounds2.rvmat"};
		};
	};
	class HerreraHead_camo2_EP1: HerreraHead_EP1
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\Characters\Heads\Male\DefaultHead\data\hhl_white.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_02_wounds1.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_02_wounds2.rvmat"};
		};
	};
	class HerreraHead_camo3_EP1: HerreraHead_EP1
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\Characters\Heads\Male\DefaultHead\data\hhl_white.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_03_wounds1.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_03_wounds2.rvmat"};
		};
	};
	class HerreraHead_camo4_EP1: HerreraHead_EP1
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\Characters\Heads\Male\DefaultHead\data\hhl_white.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_04_wounds1.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_04_wounds2.rvmat"};
		};
	};
	class HerreraHead_camo5_EP1: HerreraHead_EP1
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\Characters\Heads\Male\DefaultHead\data\hhl_white.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_05_wounds1.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_05_wounds2.rvmat"};
		};
	};
	class HerreraHead_camo6_EP1: HerreraHead_EP1
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\Characters\Heads\Male\DefaultHead\data\hhl_white.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_06_wounds1.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_06_wounds2.rvmat"};
		};
	};
	class PierceHead_EP1: DefaultHead
	{
		model = "\ca\characters_E\Heads\Male\Pierce\Pierce";
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\characters_E\Heads\Male\Pierce\Data\Pierce.rvmat","ca\characters_E\Heads\Male\Pierce\Data\Pierce_w1.rvmat","ca\characters_E\Heads\Male\Pierce\Data\Pierce_w2.rvmat"};
		};
	};
	class PierceHead_camo1_EP1: PierceHead_EP1
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\Characters\Heads\Male\DefaultHead\data\hhl_white.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_01_wounds1.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_01_wounds2.rvmat"};
		};
	};
	class PierceHead_camo2_EP1: PierceHead_EP1
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\Characters\Heads\Male\DefaultHead\data\hhl_white.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_02_wounds1.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_02_wounds2.rvmat"};
		};
	};
	class PierceHead_camo3_EP1: PierceHead_EP1
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\Characters\Heads\Male\DefaultHead\data\hhl_white.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_03_wounds1.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_03_wounds2.rvmat"};
		};
	};
	class PierceHead_camo4_EP1: PierceHead_EP1
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\Characters\Heads\Male\DefaultHead\data\hhl_white.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_04_wounds1.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_04_wounds2.rvmat"};
		};
	};
	class PierceHead_camo5_EP1: PierceHead_EP1
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\Characters\Heads\Male\DefaultHead\data\hhl_white.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_05_wounds1.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_05_wounds2.rvmat"};
		};
	};
	class PierceHead_camo6_EP1: PierceHead_EP1
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\Characters\Heads\Male\DefaultHead\data\hhl_white.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_06_wounds1.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_06_wounds2.rvmat"};
		};
	};
};
//};

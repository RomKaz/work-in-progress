////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:02:17 2014 : Source 'file' date Fri Oct 31 06:02:17 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=4
enum {
	stabilizedinaxisx = 1,
	stabilizedinaxisy = 2,
	stabilizedinaxesboth = 3,
	stabilizedinaxesnone = 0
};

//Class characters_d_baf : config.bin{
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
			name = "$STR_CFG_FACES_DEFAULT";
			texture = "\ca\characters\hhl\hhl_46_CO.paa";
			head = "defaultHead";
			identityTypes[] = {};
			material = "\ca\characters\heads\male\defaulthead\data\hhl_white.rvmat";
		};
		class Custom: Custom
		{
			name = "$STR_CFG_FACES_CUSTOM";
			texture = "#(argb,8,8,3)color(0.596,0.412,0.365,1)";
			head = "defaultHead";
			identityTypes[] = {};
			material = "\ca\characters\heads\male\defaulthead\data\hhl_white.rvmat";
		};
		class Face01: Default
		{
			name = "$STR_FN_Man_Face01";
			texture = "\ca\characters\hhl\hhl_01_CO.paa";
			disabled = 0;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","","","Head_RU","Head_RU_CO","Head_CDF","Head_CDF_CO","Head_INS","Head_GUE","Head_CIV","","Head_BAF"};
		};
		class Face01_camo1: Face01
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face01_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","Head_RU_Camo","Head_RU_CO_Camo","Head_CDF_Camo","Head_CDF_CO_Camo","Head_INS_Camo","Head_GUE_Camo"};
		};
		class Face01_camo2: Face01_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face01_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face01_camo3: Face01_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face01_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face01_camo4: Face01_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face01_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face01_camo5: Face01_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face01_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face01_camo6: Face01_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face01_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face02: Default
		{
			name = "$STR_FN_Man_Face02";
			texture = "\ca\characters\hhl\hhl_02_CO.paa";
			disabled = 0;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO","","","Head_CDF","Head_CDF_CO","","Head_GUE","Head_CIV","","Head_BAF"};
		};
		class Face02_camo1: Face02
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face02_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo","","","Head_CDF_Camo","Head_CDF_CO_Camo","","Head_GUE_Camo"};
		};
		class Face02_camo2: Face02_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face02_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face02_camo3: Face02_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face02_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face02_camo4: Face02_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face02_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face02_camo5: Face02_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face02_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face02_camo6: Face02_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face02_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face03: Default
		{
			name = "$STR_FN_Man_Face03";
			texture = "\ca\characters\hhl\hhl_03_CO.paa";
			disabled = 0;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO","","","","","","","","","Head_BAF"};
		};
		class Face03_camo1: Face03
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face03_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo","","","","","",""};
		};
		class Face03_camo2: Face03_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face03_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face03_camo3: Face03_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face03_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face03_camo4: Face03_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face03_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face03_camo5: Face03_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face03_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face03_camo6: Face03_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face03_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face04: Default
		{
			name = "$STR_FN_Man_Face04";
			texture = "\ca\characters\hhl\hhl_04_CO.paa";
			disabled = 0;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO","","","Head_CDF","Head_CDF_CO","","","","","Head_BAF"};
		};
		class Face04_camo1: Face04
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face04_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo","","","Head_CDF_Camo","Head_CDF_CO_Camo","",""};
		};
		class Face04_camo2: Face04_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face04_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face04_camo3: Face04_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face04_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face04_camo4: Face04_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face04_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face04_camo5: Face04_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face04_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face04_camo6: Face04_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face04_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face05: Default
		{
			name = "$STR_FN_Man_Face05";
			texture = "\ca\characters\hhl\hhl_05_CO.paa";
			disabled = 0;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO","","","","","Head_INS","Head_GUE","Head_CIV","",""};
		};
		class Face05_camo1: Face05
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face05_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo","","","","","Head_INS_Camo","Head_GUE_Camo"};
		};
		class Face05_camo2: Face05_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face05_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face05_camo3: Face05_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face05_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face05_camo4: Face05_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face05_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face05_camo5: Face05_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face05_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face05_camo6: Face05_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face05_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face06: Default
		{
			name = "$STR_FN_Man_Face06";
			texture = "\ca\characters\hhl\hhl_06_CO.paa";
			disabled = 0;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","","","","","Head_CDF","Head_CDF_CO","Head_INS","","Head_CIV","",""};
		};
		class Face06_camo1: Face06
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face06_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","Head_CDF_Camo","Head_CDF_CO_Camo","Head_INS_Camo",""};
		};
		class Face06_camo2: Face06_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face06_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face06_camo3: Face06_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face06_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face06_camo4: Face06_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face06_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face06_camo5: Face06_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face06_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face06_camo6: Face06_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face06_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face07: Default
		{
			name = "$STR_FN_Man_Face07";
			texture = "\ca\characters\hhl\hhl_07_CO.paa";
			disabled = 0;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","","","","","Head_CDF","Head_CDF_CO","Head_INS","Head_GUE","Head_CIV","",""};
		};
		class Face07_camo1: Face07
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face07_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","Head_CDF_Camo","Head_CDF_CO_Camo","Head_INS_Camo","Head_GUE_Camo"};
		};
		class Face07_camo2: Face07_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face07_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face07_camo3: Face07_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face07_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face07_camo4: Face07_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face07_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face07_camo5: Face07_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face07_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face07_camo6: Face07_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face07_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face08: Default
		{
			name = "$STR_FN_Man_Face08";
			texture = "\ca\characters\hhl\hhl_08_CO.paa";
			disabled = 0;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","","","","","","","Head_INS","Head_GUE","Head_CIV","",""};
		};
		class Face08_camo1: Face08
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face08_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","Head_INS_Camo","Head_GUE_Camo"};
		};
		class Face08_camo2: Face08_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face08_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face08_camo3: Face08_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face08_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face08_camo4: Face08_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face08_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face08_camo5: Face08_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face08_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face08_camo6: Face08_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face08_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face09: Default
		{
			name = "$STR_FN_Man_Face09";
			texture = "\ca\characters\hhl\hhl_09_CO.paa";
			disabled = 0;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO","Head_RU","Head_RU_CO","Head_CDF","Head_CDF_CO","Head_INS","Head_GUE","Head_CIV","","Head_BAF"};
		};
		class Face09_camo1: Face09
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face09_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo","Head_RU_Camo","Head_RU_CO_Camo","Head_CDF_Camo","Head_CDF_CO_Camo","Head_INS_Camo","Head_GUE_Camo"};
		};
		class Face09_camo2: Face09_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face09_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face09_camo3: Face09_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face09_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face09_camo4: Face09_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face09_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face09_camo5: Face09_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face09_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face09_camo6: Face09_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face09_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face10: Default
		{
			name = "$STR_FN_Man_Face10";
			texture = "\ca\characters\hhl\hhl_10_CO.paa";
			disabled = 0;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO","","","Head_CDF","Head_CDF_CO","","","Head_CIV","","Head_BAF"};
		};
		class Face10_camo1: Face10
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face10_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo","","","Head_CDF_Camo","Head_CDF_CO_Camo","",""};
		};
		class Face10_camo2: Face10_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face10_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face10_camo3: Face10_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face10_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face10_camo4: Face10_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face10_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face10_camo5: Face10_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face10_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face10_camo6: Face10_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face10_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face11: Default
		{
			name = "$STR_FN_Man_Face11";
			texture = "\ca\characters\hhl\hhl_11_CO.paa";
			disabled = 0;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","","","Head_RU","Head_RU_CO","","","Head_INS","Head_GUE","Head_CIV","","Head_BAF"};
		};
		class Face11_camo1: Face11
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face11_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","Head_RU_Camo","Head_RU_CO_Camo","","","Head_INS_Camo","Head_GUE_Camo"};
		};
		class Face11_camo2: Face11_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face11_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face11_camo3: Face11_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face11_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face11_camo4: Face11_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face11_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face11_camo5: Face11_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face11_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face11_camo6: Face11_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face11_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face12: Default
		{
			name = "$STR_FN_Man_Face12";
			texture = "\ca\characters\hhl\hhl_12_CO.paa";
			disabled = 0;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","","","Head_RU","Head_RU_CO","","","Head_INS","","","","Head_BAF"};
		};
		class Face12_camo1: Face12
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face12_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","Head_RU_Camo","Head_RU_CO_Camo","","","Head_INS_Camo",""};
		};
		class Face12_camo2: Face12_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face12_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face12_camo3: Face12_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face12_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face12_camo4: Face12_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face12_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face12_camo5: Face12_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face12_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face12_camo6: Face12_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face12_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face13: Default
		{
			name = "$STR_FN_Man_Face13";
			texture = "\ca\characters\hhl\hhl_13_CO.paa";
			disabled = 0;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","","","","","Head_CDF","Head_CDF_CO","","","Head_CIV","","Head_BAF"};
		};
		class Face13_camo1: Face13
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face13_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","Head_CDF_Camo","Head_CDF_CO_Camo","",""};
		};
		class Face13_camo2: Face13_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face13_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face13_camo3: Face13_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face13_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face13_camo4: Face13_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face13_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face13_camo5: Face13_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face13_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face13_camo6: Face13_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face13_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face14: Default
		{
			name = "$STR_FN_Man_Face14";
			texture = "\ca\characters\hhl\hhl_14_CO.paa";
			disabled = 0;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","","","","","","","Head_INS","Head_GUE","Head_CIV","",""};
		};
		class Face14_camo1: Face14
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face14_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","Head_INS_Camo","Head_GUE_Camo"};
		};
		class Face14_camo2: Face14_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face14_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face14_camo3: Face14_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face14_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face14_camo4: Face14_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face14_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face14_camo5: Face14_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face14_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face14_camo6: Face14_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face14_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face15: Default
		{
			name = "$STR_FN_Man_Face15";
			texture = "\ca\characters\hhl\hhl_15_CO.paa";
			disabled = 0;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","","","","","Head_CDF","Head_CDF_CO","","Head_GUE","Head_CIV","","Head_BAF"};
		};
		class Face15_camo1: Face15
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face15_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","Head_CDF_Camo","Head_CDF_CO_Camo","","Head_GUE_Camo"};
		};
		class Face15_camo2: Face15_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face15_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face15_camo3: Face15_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face15_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face15_camo4: Face15_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face15_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face15_camo5: Face15_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face15_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face15_camo6: Face15_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face15_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face16: Default
		{
			name = "$STR_FN_Man_Face16";
			texture = "\ca\characters\hhl\hhl_16_CO.paa";
			disabled = 0;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","","","","","","","","Head_GUE","Head_CIV","","Head_BAF"};
		};
		class Face16_camo1: Face16
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face16_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","","Head_GUE_Camo"};
		};
		class Face16_camo2: Face16_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face16_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face16_camo3: Face16_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face16_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face16_camo4: Face16_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face16_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face16_camo5: Face16_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face16_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face16_camo6: Face16_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face16_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face17: Default
		{
			name = "$STR_FN_Man_Face17";
			texture = "\ca\characters\hhl\hhl_17_CO.paa";
			disabled = 0;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","","","","","","","Head_INS","","Head_CIV","","Head_BAF"};
		};
		class Face17_camo1: Face17
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face17_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","Head_INS_Camo",""};
		};
		class Face17_camo2: Face17_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face17_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face17_camo3: Face17_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face17_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face17_camo4: Face17_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face17_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face17_camo5: Face17_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face17_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face17_camo6: Face17_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face17_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face18: Default
		{
			name = "$STR_FN_Man_Face18";
			texture = "\ca\characters\hhl\hhl_18_CO.paa";
			disabled = 0;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","","","Head_RU","Head_RU_CO","Head_CDF","Head_CDF_CO","","","Head_CIV","","Head_BAF"};
		};
		class Face18_camo1: Face18
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face18_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","Head_RU_Camo","Head_RU_CO_Camo","Head_CDF_Camo","Head_CDF_CO_Camo","",""};
		};
		class Face18_camo2: Face18_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face18_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face18_camo3: Face18_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face18_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face18_camo4: Face18_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face18_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face18_camo5: Face18_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face18_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face18_camo6: Face18_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face18_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face19: Default
		{
			name = "$STR_FN_Man_Face19";
			texture = "\ca\characters\hhl\hhl_19_CO.paa";
			disabled = 0;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","","","","","","","Head_INS","Head_GUE","Head_CIV","",""};
		};
		class Face19_camo1: Face19
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face19_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","Head_INS_Camo","Head_GUE_Camo"};
		};
		class Face19_camo2: Face19_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face19_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face19_camo3: Face19_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face19_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face19_camo4: Face19_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face19_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face19_camo5: Face19_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face19_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face19_camo6: Face19_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face19_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face20: Default
		{
			name = "$STR_FN_Man_Face20";
			texture = "\ca\characters\hhl\hhl_20_CO.paa";
			disabled = 0;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","","Head_USMC_CO","","Head_RU_CO","","","Head_INS","","Head_CIV","",""};
		};
		class Face20_camo1: Face20
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face20_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","Head_USMC_CO_Camo","","Head_RU_CO_Camo","","","Head_INS_Camo",""};
		};
		class Face20_camo2: Face20_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face20_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face20_camo3: Face20_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face20_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face20_camo4: Face20_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face20_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face20_camo5: Face20_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face20_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face20_camo6: Face20_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face20_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face21: Default
		{
			name = "$STR_FN_Man_Face21";
			texture = "\ca\characters\hhl\hhl_21_CO.paa";
			disabled = 0;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","","","","","","","Head_INS","Head_GUE","Head_CIV","",""};
		};
		class Face21_camo1: Face21
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face21_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","Head_INS_Camo","Head_GUE_Camo"};
		};
		class Face21_camo2: Face21_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face21_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face21_camo3: Face21_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face21_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face21_camo4: Face21_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face21_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face21_camo5: Face21_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face21_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face21_camo6: Face21_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face21_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face22: Default
		{
			name = "$STR_FN_Man_Face22";
			texture = "\ca\characters\hhl\hhl_22_CO.paa";
			disabled = 0;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO","Head_RU","Head_RU_CO","","","Head_INS","","Head_CIV","","Head_BAF"};
		};
		class Face22_camo1: Face22
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face22_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo","Head_RU_Camo","Head_RU_CO_Camo","","","Head_INS_Camo",""};
		};
		class Face22_camo2: Face22_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face22_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face22_camo3: Face22_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face22_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face22_camo4: Face22_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face22_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face22_camo5: Face22_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face22_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face22_camo6: Face22_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face22_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face23: Default
		{
			name = "$STR_FN_Man_Face23";
			texture = "\ca\characters\hhl\hhl_23_CO.paa";
			disabled = 0;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"","","","","","","","","","","Head_Special",""};
		};
		class Face23_camo1: Face23
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face23_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","",""};
		};
		class Face23_camo2: Face23_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face23_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face23_camo3: Face23_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face23_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face23_camo4: Face23_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face23_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face23_camo5: Face23_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face23_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face23_camo6: Face23_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face23_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face24: Default
		{
			name = "$STR_FN_Man_Face24";
			texture = "\ca\characters\hhl\hhl_24_CO.paa";
			disabled = 0;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","","","","","","","Head_INS","Head_GUE","Head_CIV","","Head_BAF"};
		};
		class Face24_camo1: Face24
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face24_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","Head_INS_Camo","Head_GUE_Camo"};
		};
		class Face24_camo2: Face24_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face24_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face24_camo3: Face24_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face24_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face24_camo4: Face24_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face24_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face24_camo5: Face24_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face24_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face24_camo6: Face24_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face24_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face25: Default
		{
			name = "$STR_FN_Man_Face25";
			texture = "\ca\characters\hhl\hhl_25_CO.paa";
			disabled = 0;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","","","","","Head_CDF","Head_CDF_CO","","","Head_CIV","",""};
		};
		class Face25_camo1: Face25
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face25_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","Head_CDF_Camo","Head_CDF_CO_Camo","",""};
		};
		class Face25_camo2: Face25_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face25_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face25_camo3: Face25_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face25_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face25_camo4: Face25_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face25_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face25_camo5: Face25_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face25_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face25_camo6: Face25_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face25_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face26: Default
		{
			name = "$STR_FN_Man_Face26";
			texture = "\ca\characters\hhl\hhl_26_CO.paa";
			material = "\ca\characters\heads\male\blackhead\data\hhl_black.rvmat";
			head = "BlackHead_BAF";
			disabled = 1;
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO","",""};
		};
		class Face26_camo1: Face26
		{
			head = "BlackHead_camo1";
			name = "$STR_FN_Man_Face26_camo1";
			material = "\ca\characters\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo"};
		};
		class Face26_camo2: Face26_camo1
		{
			head = "BlackHead_camo2";
			name = "$STR_FN_Man_Face26_camo2";
			material = "\ca\characters\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
			disabled = 1;
		};
		class Face26_camo3: Face26_camo1
		{
			head = "BlackHead_camo3";
			name = "$STR_FN_Man_Face26_camo3";
			material = "\ca\characters\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
			disabled = 1;
		};
		class Face26_camo4: Face26_camo1
		{
			head = "BlackHead_camo4";
			name = "$STR_FN_Man_Face26_camo4";
			material = "\ca\characters\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
			disabled = 1;
		};
		class Face26_camo5: Face26_camo1
		{
			head = "BlackHead_camo5";
			name = "$STR_FN_Man_Face26_camo5";
			material = "\ca\characters\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
			disabled = 1;
		};
		class Face26_camo6: Face26_camo1
		{
			head = "BlackHead_camo6";
			name = "$STR_FN_Man_Face26_camo6";
			material = "\ca\characters\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
			disabled = 1;
		};
		class Face27: Default
		{
			name = "$STR_FN_Man_Face27";
			texture = "\ca\characters\hhl\hhl_27_CO.paa";
			material = "\ca\characters\heads\male\blackhead\data\hhl_black.rvmat";
			head = "BlackHead_BAF";
			disabled = 1;
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO","",""};
		};
		class Face27_camo1: Face27
		{
			head = "BlackHead_camo1";
			name = "$STR_FN_Man_Face27_camo1";
			material = "\ca\characters\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo"};
		};
		class Face27_camo2: Face27_camo1
		{
			head = "BlackHead_camo2";
			name = "$STR_FN_Man_Face27_camo2";
			material = "\ca\characters\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
			disabled = 1;
		};
		class Face27_camo3: Face27_camo1
		{
			head = "BlackHead_camo3";
			name = "$STR_FN_Man_Face27_camo3";
			material = "\ca\characters\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
			disabled = 1;
		};
		class Face27_camo4: Face27_camo1
		{
			head = "BlackHead_camo4";
			name = "$STR_FN_Man_Face27_camo4";
			material = "\ca\characters\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
			disabled = 1;
		};
		class Face27_camo5: Face27_camo1
		{
			head = "BlackHead_camo5";
			name = "$STR_FN_Man_Face27_camo5";
			material = "\ca\characters\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
			disabled = 1;
		};
		class Face27_camo6: Face27_camo1
		{
			head = "BlackHead_camo6";
			name = "$STR_FN_Man_Face27_camo6";
			material = "\ca\characters\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
			disabled = 1;
		};
		class Face28: Default
		{
			name = "$STR_FN_Man_Face28";
			texture = "\ca\characters\hhl\hhl_28_CO.paa";
			material = "\ca\characters\heads\male\blackhead\data\hhl_black.rvmat";
			head = "BlackHead_BAF";
			disabled = 1;
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO","",""};
		};
		class Face28_camo1: Face28
		{
			head = "BlackHead_camo1";
			name = "$STR_FN_Man_Face28_camo1";
			material = "\ca\characters\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo"};
		};
		class Face28_camo2: Face28_camo1
		{
			head = "BlackHead_camo2";
			name = "$STR_FN_Man_Face28_camo2";
			material = "\ca\characters\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
			disabled = 1;
		};
		class Face28_camo3: Face28_camo1
		{
			head = "BlackHead_camo3";
			name = "$STR_FN_Man_Face28_camo3";
			material = "\ca\characters\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
			disabled = 1;
		};
		class Face28_camo4: Face28_camo1
		{
			head = "BlackHead_camo4";
			name = "$STR_FN_Man_Face28_camo4";
			material = "\ca\characters\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
			disabled = 1;
		};
		class Face28_camo5: Face28_camo1
		{
			head = "BlackHead_camo5";
			name = "$STR_FN_Man_Face28_camo5";
			material = "\ca\characters\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
			disabled = 1;
		};
		class Face28_camo6: Face28_camo1
		{
			head = "BlackHead_camo6";
			name = "$STR_FN_Man_Face28_camo6";
			material = "\ca\characters\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
			disabled = 1;
		};
		class Face29: Default
		{
			name = "$STR_FN_Man_Face29";
			texture = "\ca\characters\hhl\hhl_29_CO.paa";
			material = "\ca\characters\heads\male\blackhead\data\hhl_black.rvmat";
			head = "BlackHead_BAF";
			disabled = 1;
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO","",""};
		};
		class Face29_camo1: Face29
		{
			head = "BlackHead_camo1";
			name = "$STR_FN_Man_Face29_camo1";
			material = "\ca\characters\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo"};
		};
		class Face29_camo2: Face29_camo1
		{
			head = "BlackHead_camo2";
			name = "$STR_FN_Man_Face29_camo2";
			material = "\ca\characters\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
			disabled = 1;
		};
		class Face29_camo3: Face29_camo1
		{
			head = "BlackHead_camo3";
			name = "$STR_FN_Man_Face29_camo3";
			material = "\ca\characters\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
			disabled = 1;
		};
		class Face29_camo4: Face29_camo1
		{
			head = "BlackHead_camo4";
			name = "$STR_FN_Man_Face29_camo4";
			material = "\ca\characters\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
			disabled = 1;
		};
		class Face29_camo5: Face29_camo1
		{
			head = "BlackHead_camo5";
			name = "$STR_FN_Man_Face29_camo5";
			material = "\ca\characters\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
			disabled = 1;
		};
		class Face29_camo6: Face29_camo1
		{
			head = "BlackHead_camo6";
			name = "$STR_FN_Man_Face29_camo6";
			material = "\ca\characters\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
			disabled = 1;
		};
		class Face30: Default
		{
			name = "$STR_FN_Man_Face30";
			texture = "\ca\characters\hhl\hhl_30_CO.paa";
			material = "\ca\characters\heads\male\blackhead\data\hhl_black.rvmat";
			head = "BlackHead_BAF";
			disabled = 1;
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO","",""};
		};
		class Face30_camo1: Face30
		{
			head = "BlackHead_camo1";
			name = "$STR_FN_Man_Face30_camo1";
			material = "\ca\characters\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo"};
		};
		class Face30_camo2: Face30_camo1
		{
			head = "BlackHead_camo2";
			name = "$STR_FN_Man_Face30_camo2";
			material = "\ca\characters\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
			disabled = 1;
		};
		class Face30_camo3: Face30_camo1
		{
			head = "BlackHead_camo3";
			name = "$STR_FN_Man_Face30_camo3";
			material = "\ca\characters\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
			disabled = 1;
		};
		class Face30_camo4: Face30_camo1
		{
			head = "BlackHead_camo4";
			name = "$STR_FN_Man_Face30_camo4";
			material = "\ca\characters\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
			disabled = 1;
		};
		class Face30_camo5: Face30_camo1
		{
			head = "BlackHead_camo5";
			name = "$STR_FN_Man_Face30_camo5";
			material = "\ca\characters\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
			disabled = 1;
		};
		class Face30_camo6: Face30_camo1
		{
			head = "BlackHead_camo6";
			name = "$STR_FN_Man_Face30_camo6";
			material = "\ca\characters\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
			disabled = 1;
		};
		class Face31: Default
		{
			name = "$STR_FN_Man_Face31";
			texture = "\ca\characters\hhl\hhl_31_CO.paa";
			material = "\ca\characters\heads\male\blackhead\data\hhl_black.rvmat";
			head = "BlackHead_BAF";
			disabled = 1;
			identityTypes[] = {"Default","","Head_USMC_CO","",""};
		};
		class Face31_camo1: Face31
		{
			head = "BlackHead_camo1";
			name = "$STR_FN_Man_Face31_camo1";
			material = "\ca\characters\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
			disabled = 1;
			identityTypes[] = {"","Head_USMC_CO_Camo"};
		};
		class Face31_camo2: Face31_camo1
		{
			head = "BlackHead_camo2";
			name = "$STR_FN_Man_Face31_camo2";
			material = "\ca\characters\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
			disabled = 1;
		};
		class Face31_camo3: Face31_camo1
		{
			head = "BlackHead_camo3";
			name = "$STR_FN_Man_Face31_camo3";
			material = "\ca\characters\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
			disabled = 1;
		};
		class Face31_camo4: Face31_camo1
		{
			head = "BlackHead_camo4";
			name = "$STR_FN_Man_Face31_camo4";
			material = "\ca\characters\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
			disabled = 1;
		};
		class Face31_camo5: Face31_camo1
		{
			head = "BlackHead_camo5";
			name = "$STR_FN_Man_Face31_camo5";
			material = "\ca\characters\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
			disabled = 1;
		};
		class Face31_camo6: Face31_camo1
		{
			head = "BlackHead_camo6";
			name = "$STR_FN_Man_Face31_camo6";
			material = "\ca\characters\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
			disabled = 1;
		};
		class Face32: Default
		{
			name = "$STR_FN_Man_Face32";
			texture = "\ca\characters\hhl\hhl_32_CO.paa";
			material = "\ca\characters\heads\male\blackhead\data\hhl_black.rvmat";
			head = "BlackHead_BAF";
			disabled = 1;
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO","",""};
		};
		class Face32_camo1: Face32
		{
			head = "BlackHead_camo1";
			name = "$STR_FN_Man_Face32_camo1";
			material = "\ca\characters\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo"};
		};
		class Face32_camo2: Face32_camo1
		{
			head = "BlackHead_camo2";
			name = "$STR_FN_Man_Face32_camo2";
			material = "\ca\characters\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
			disabled = 1;
		};
		class Face32_camo3: Face32_camo1
		{
			head = "BlackHead_camo3";
			name = "$STR_FN_Man_Face32_camo3";
			material = "\ca\characters\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
			disabled = 1;
		};
		class Face32_camo4: Face32_camo1
		{
			head = "BlackHead_camo4";
			name = "$STR_FN_Man_Face32_camo4";
			material = "\ca\characters\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
			disabled = 1;
		};
		class Face32_camo5: Face32_camo1
		{
			head = "BlackHead_camo5";
			name = "$STR_FN_Man_Face32_camo5";
			material = "\ca\characters\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
			disabled = 1;
		};
		class Face32_camo6: Face32_camo1
		{
			head = "BlackHead_camo6";
			name = "$STR_FN_Man_Face32_camo6";
			material = "\ca\characters\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
			disabled = 1;
		};
		class Face33: Default
		{
			name = "$STR_FN_Man_Face33";
			texture = "\ca\characters\hhl\hhl_33_CO.paa";
			material = "\ca\characters\heads\male\blackhead\data\hhl_black.rvmat";
			head = "BlackHead_BAF";
			disabled = 1;
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO","",""};
		};
		class Face33_camo1: Face33
		{
			head = "BlackHead_camo1";
			name = "$STR_FN_Man_Face33_camo1";
			material = "\ca\characters\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo"};
		};
		class Face33_camo2: Face33_camo1
		{
			head = "BlackHead_camo2";
			name = "$STR_FN_Man_Face33_camo2";
			material = "\ca\characters\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
			disabled = 1;
		};
		class Face33_camo3: Face33_camo1
		{
			head = "BlackHead_camo3";
			name = "$STR_FN_Man_Face33_camo3";
			material = "\ca\characters\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
			disabled = 1;
		};
		class Face33_camo4: Face33_camo1
		{
			head = "BlackHead_camo4";
			name = "$STR_FN_Man_Face33_camo4";
			material = "\ca\characters\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
			disabled = 1;
		};
		class Face33_camo5: Face33_camo1
		{
			head = "BlackHead_camo5";
			name = "$STR_FN_Man_Face33_camo5";
			material = "\ca\characters\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
			disabled = 1;
		};
		class Face33_camo6: Face33_camo1
		{
			head = "BlackHead_camo6";
			name = "$STR_FN_Man_Face33_camo6";
			material = "\ca\characters\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
			disabled = 1;
		};
		class Face34: Default
		{
			name = "$STR_FN_Man_Face34";
			texture = "\ca\characters\hhl\hhl_34_CO.paa";
			material = "\ca\characters\heads\male\blackhead\data\hhl_black.rvmat";
			head = "BlackHead_BAF";
			disabled = 1;
			identityTypes[] = {"Default","","Head_USMC_CO","",""};
		};
		class Face34_camo1: Face34
		{
			head = "BlackHead_camo1";
			name = "$STR_FN_Man_Face34_camo1";
			material = "\ca\characters\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
			disabled = 1;
			identityTypes[] = {"","Head_USMC_CO_Camo"};
		};
		class Face34_camo2: Face34_camo1
		{
			head = "BlackHead_camo2";
			name = "$STR_FN_Man_Face34_camo2";
			material = "\ca\characters\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
			disabled = 1;
		};
		class Face34_camo3: Face34_camo1
		{
			head = "BlackHead_camo3";
			name = "$STR_FN_Man_Face34_camo3";
			material = "\ca\characters\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
			disabled = 1;
		};
		class Face34_camo4: Face34_camo1
		{
			head = "BlackHead_camo4";
			name = "$STR_FN_Man_Face34_camo4";
			material = "\ca\characters\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
			disabled = 1;
		};
		class Face34_camo5: Face34_camo1
		{
			head = "BlackHead_camo5";
			name = "$STR_FN_Man_Face34_camo5";
			material = "\ca\characters\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
			disabled = 1;
		};
		class Face34_camo6: Face34_camo1
		{
			head = "BlackHead_camo6";
			name = "$STR_FN_Man_Face34_camo6";
			material = "\ca\characters\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
			disabled = 1;
		};
		class Face35: Default
		{
			name = "$STR_FN_Man_Face35";
			texture = "\ca\characters\hhl\hhl_35_CO.paa";
			material = "\ca\characters\heads\male\blackhead\data\hhl_black.rvmat";
			head = "BlackHead_BAF";
			disabled = 1;
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO","",""};
		};
		class Face35_camo1: Face35
		{
			head = "BlackHead_camo1";
			name = "$STR_FN_Man_Face35_camo1";
			material = "\ca\characters\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo"};
		};
		class Face35_camo2: Face35_camo1
		{
			head = "BlackHead_camo2";
			name = "$STR_FN_Man_Face35_camo2";
			material = "\ca\characters\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
			disabled = 1;
		};
		class Face35_camo3: Face35_camo1
		{
			head = "BlackHead_camo3";
			name = "$STR_FN_Man_Face35_camo3";
			material = "\ca\characters\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
			disabled = 1;
		};
		class Face35_camo4: Face35_camo1
		{
			head = "BlackHead_camo4";
			name = "$STR_FN_Man_Face35_camo4";
			material = "\ca\characters\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
			disabled = 1;
		};
		class Face35_camo5: Face35_camo1
		{
			head = "BlackHead_camo5";
			name = "$STR_FN_Man_Face35_camo5";
			material = "\ca\characters\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
			disabled = 1;
		};
		class Face35_camo6: Face35_camo1
		{
			head = "BlackHead_camo6";
			name = "$STR_FN_Man_Face35_camo6";
			material = "\ca\characters\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
			disabled = 1;
		};
		class Face36: Default
		{
			name = "$STR_FN_Man_Face36";
			texture = "\ca\characters\hhl\hhl_36_CO.paa";
			material = "\ca\characters\heads\male\blackhead\data\hhl_black.rvmat";
			head = "BlackHead_BAF";
			disabled = 1;
			identityTypes[] = {"Default","","Head_USMC_CO","",""};
		};
		class Face36_camo1: Face36
		{
			head = "BlackHead_camo1";
			name = "$STR_FN_Man_Face36_camo1";
			material = "\ca\characters\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
			disabled = 1;
			identityTypes[] = {"","Head_USMC_CO_Camo"};
		};
		class Face36_camo2: Face36_camo1
		{
			head = "BlackHead_camo2";
			name = "$STR_FN_Man_Face36_camo2";
			material = "\ca\characters\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
			disabled = 1;
		};
		class Face36_camo3: Face36_camo1
		{
			head = "BlackHead_camo3";
			name = "$STR_FN_Man_Face36_camo3";
			material = "\ca\characters\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
			disabled = 1;
		};
		class Face36_camo4: Face36_camo1
		{
			head = "BlackHead_camo4";
			name = "$STR_FN_Man_Face36_camo4";
			material = "\ca\characters\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
			disabled = 1;
		};
		class Face36_camo5: Face36_camo1
		{
			head = "BlackHead_camo5";
			name = "$STR_FN_Man_Face36_camo5";
			material = "\ca\characters\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
			disabled = 1;
		};
		class Face36_camo6: Face36_camo1
		{
			head = "BlackHead_camo6";
			name = "$STR_FN_Man_Face36_camo6";
			material = "\ca\characters\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
			disabled = 1;
		};
		class Face37: Default
		{
			name = "$STR_FN_Man_Face37";
			texture = "\ca\characters\hhl\hhl_37_CO.paa";
			material = "\ca\characters\heads\male\blackhead\data\hhl_black.rvmat";
			head = "BlackHead_BAF";
			disabled = 1;
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO","",""};
		};
		class Face37_camo1: Face37
		{
			head = "BlackHead_camo1";
			name = "$STR_FN_Man_Face37_camo1";
			material = "\ca\characters\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo"};
		};
		class Face37_camo2: Face37_camo1
		{
			head = "BlackHead_camo2";
			name = "$STR_FN_Man_Face37_camo2";
			material = "\ca\characters\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
			disabled = 1;
		};
		class Face37_camo3: Face37_camo1
		{
			head = "BlackHead_camo3";
			name = "$STR_FN_Man_Face37_camo3";
			material = "\ca\characters\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
			disabled = 1;
		};
		class Face37_camo4: Face37_camo1
		{
			head = "BlackHead_camo4";
			name = "$STR_FN_Man_Face37_camo4";
			material = "\ca\characters\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
			disabled = 1;
		};
		class Face37_camo5: Face37_camo1
		{
			head = "BlackHead_camo5";
			name = "$STR_FN_Man_Face37_camo5";
			material = "\ca\characters\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
			disabled = 1;
		};
		class Face37_camo6: Face37_camo1
		{
			head = "BlackHead_camo6";
			name = "$STR_FN_Man_Face37_camo6";
			material = "\ca\characters\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
			disabled = 1;
		};
		class Face38: Default
		{
			name = "$STR_FN_Man_Face38";
			texture = "\ca\characters\hhl\hhl_38_CO.paa";
			material = "\ca\characters\heads\male\blackhead\data\hhl_black.rvmat";
			head = "BlackHead_BAF";
			disabled = 1;
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO","",""};
		};
		class Face38_camo1: Face38
		{
			head = "BlackHead_camo1";
			name = "$STR_FN_Man_Face38_camo1";
			material = "\ca\characters\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo"};
		};
		class Face38_camo2: Face38_camo1
		{
			head = "BlackHead_camo2";
			name = "$STR_FN_Man_Face38_camo2";
			material = "\ca\characters\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
			disabled = 1;
		};
		class Face38_camo3: Face38_camo1
		{
			head = "BlackHead_camo3";
			name = "$STR_FN_Man_Face38_camo3";
			material = "\ca\characters\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
			disabled = 1;
		};
		class Face38_camo4: Face38_camo1
		{
			head = "BlackHead_camo4";
			name = "$STR_FN_Man_Face38_camo4";
			material = "\ca\characters\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
			disabled = 1;
		};
		class Face38_camo5: Face38_camo1
		{
			head = "BlackHead_camo5";
			name = "$STR_FN_Man_Face38_camo5";
			material = "\ca\characters\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
			disabled = 1;
		};
		class Face38_camo6: Face38_camo1
		{
			head = "BlackHead_camo6";
			name = "$STR_FN_Man_Face38_camo6";
			material = "\ca\characters\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
			disabled = 1;
		};
		class Face39: Default
		{
			name = "$STR_FN_Man_Face39";
			texture = "\ca\characters\hhl\hhl_39_CO.paa";
			material = "\ca\characters\heads\male\blackhead\data\hhl_black.rvmat";
			head = "BlackHead_BAF";
			disabled = 1;
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO","",""};
		};
		class Face39_camo1: Face39
		{
			head = "BlackHead_camo1";
			name = "$STR_FN_Man_Face39_camo1";
			material = "\ca\characters\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo"};
		};
		class Face39_camo2: Face39_camo1
		{
			head = "BlackHead_camo2";
			name = "$STR_FN_Man_Face39_camo2";
			material = "\ca\characters\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
			disabled = 1;
		};
		class Face39_camo3: Face39_camo1
		{
			head = "BlackHead_camo3";
			name = "$STR_FN_Man_Face39_camo3";
			material = "\ca\characters\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
			disabled = 1;
		};
		class Face39_camo4: Face39_camo1
		{
			head = "BlackHead_camo4";
			name = "$STR_FN_Man_Face39_camo4";
			material = "\ca\characters\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
			disabled = 1;
		};
		class Face39_camo5: Face39_camo1
		{
			head = "BlackHead_camo5";
			name = "$STR_FN_Man_Face39_camo5";
			material = "\ca\characters\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
			disabled = 1;
		};
		class Face39_camo6: Face39_camo1
		{
			head = "BlackHead_camo6";
			name = "$STR_FN_Man_Face39_camo6";
			material = "\ca\characters\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
			disabled = 1;
		};
		class Face40: Default
		{
			name = "$STR_FN_Man_Face40";
			texture = "\ca\characters\hhl\hhl_40_CO.paa";
			material = "\ca\characters\heads\male\blackhead\data\hhl_black.rvmat";
			head = "BlackHead_BAF";
			disabled = 1;
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO","",""};
		};
		class Face40_camo1: Face40
		{
			head = "BlackHead_camo1";
			name = "$STR_FN_Man_Face40_camo1";
			material = "\ca\characters\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo"};
		};
		class Face40_camo2: Face40_camo1
		{
			head = "BlackHead_camo2";
			name = "$STR_FN_Man_Face40_camo2";
			material = "\ca\characters\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
			disabled = 1;
		};
		class Face40_camo3: Face40_camo1
		{
			head = "BlackHead_camo3";
			name = "$STR_FN_Man_Face40_camo3";
			material = "\ca\characters\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
			disabled = 1;
		};
		class Face40_camo4: Face40_camo1
		{
			head = "BlackHead_camo4";
			name = "$STR_FN_Man_Face40_camo4";
			material = "\ca\characters\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
			disabled = 1;
		};
		class Face40_camo5: Face40_camo1
		{
			head = "BlackHead_camo5";
			name = "$STR_FN_Man_Face40_camo5";
			material = "\ca\characters\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
			disabled = 1;
		};
		class Face40_camo6: Face40_camo1
		{
			head = "BlackHead_camo6";
			name = "$STR_FN_Man_Face40_camo6";
			material = "\ca\characters\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
			disabled = 1;
		};
		class Face41: Default
		{
			name = "$STR_FN_Man_Face41";
			texture = "\ca\characters\hhl\hhl_41_CO.paa";
			disabled = 1;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","","","","","","","","Head_GUE","Head_CIV","",""};
		};
		class Face41_camo1: Face41
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face41_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","","Head_GUE_Camo"};
		};
		class Face41_camo2: Face41_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face41_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face41_camo3: Face41_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face41_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face41_camo4: Face41_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face41_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face41_camo5: Face41_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face41_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face41_camo6: Face41_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face41_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face42: Default
		{
			name = "$STR_FN_Man_Face42";
			texture = "\ca\characters\hhl\hhl_42_CO.paa";
			disabled = 1;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","","","","","","","Head_INS","","Head_CIV","",""};
		};
		class Face42_camo1: Face42
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face42_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","Head_INS_Camo",""};
		};
		class Face42_camo2: Face42_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face42_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face42_camo3: Face42_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face42_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face42_camo4: Face42_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face42_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face42_camo5: Face42_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face42_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face42_camo6: Face42_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face42_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face43: Default
		{
			name = "$STR_FN_Man_Face43";
			texture = "\ca\characters\hhl\hhl_43_CO.paa";
			disabled = 1;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","","","","","Head_CDF","Head_CDF_CO","","","Head_CIV","",""};
		};
		class Face43_camo1: Face43
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face43_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","Head_CDF_Camo","Head_CDF_CO_Camo","",""};
		};
		class Face43_camo2: Face43_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face43_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face43_camo3: Face43_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face43_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face43_camo4: Face43_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face43_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face43_camo5: Face43_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face43_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face43_camo6: Face43_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face43_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face44: Default
		{
			name = "$STR_FN_Man_Face44";
			texture = "\ca\characters\hhl\hhl_44_CO.paa";
			disabled = 1;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","","","","","","","","Head_GUE","Head_CIV","",""};
		};
		class Face44_camo1: Face44
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face44_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","","Head_GUE_Camo"};
		};
		class Face44_camo2: Face44_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face44_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face44_camo3: Face44_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face44_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face44_camo4: Face44_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face44_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face44_camo5: Face44_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face44_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face44_camo6: Face44_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face44_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face45: Default
		{
			name = "$STR_FN_Man_Face45";
			texture = "\ca\characters\hhl\hhl_45_CO.paa";
			disabled = 1;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","","","","","Head_CDF","Head_CDF_CO","","Head_GUE","Head_CIV","",""};
		};
		class Face45_camo1: Face45
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face45_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","Head_CDF_Camo","Head_CDF_CO_Camo","","Head_GUE_Camo"};
		};
		class Face45_camo2: Face45_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face45_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face45_camo3: Face45_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face45_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face45_camo4: Face45_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face45_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face45_camo5: Face45_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face45_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face45_camo6: Face45_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face45_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face46: Default
		{
			name = "$STR_FN_Man_Face46";
			texture = "\ca\characters\hhl\hhl_46_CO.paa";
			disabled = 1;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO","Head_RU","Head_RU_CO","","","","","","",""};
		};
		class Face46_camo1: Face46
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face46_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo","Head_RU_Camo","Head_RU_CO_Camo","","","",""};
		};
		class Face46_camo2: Face46_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face46_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face46_camo3: Face46_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face46_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face46_camo4: Face46_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face46_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face46_camo5: Face46_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face46_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face46_camo6: Face46_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face46_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face47: Default
		{
			name = "$STR_FN_Man_Face47";
			texture = "\ca\characters\hhl\hhl_47_CO.paa";
			disabled = 1;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO","","","","","","","Head_CIV","",""};
		};
		class Face47_camo1: Face47
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face47_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo","","","","","",""};
		};
		class Face47_camo2: Face47_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face47_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face47_camo3: Face47_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face47_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face47_camo4: Face47_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face47_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face47_camo5: Face47_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face47_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face47_camo6: Face47_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face47_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face48: Default
		{
			name = "$STR_FN_Man_Face48";
			texture = "\ca\characters\hhl\hhl_48_CO.paa";
			disabled = 1;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","","","","","","","Head_INS","","Head_CIV","",""};
		};
		class Face48_camo1: Face48
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face48_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","Head_INS_Camo",""};
		};
		class Face48_camo2: Face48_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face48_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face48_camo3: Face48_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face48_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face48_camo4: Face48_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face48_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face48_camo5: Face48_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face48_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face48_camo6: Face48_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face48_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face49: Default
		{
			name = "$STR_FN_Man_Face49";
			texture = "\ca\characters\hhl\hhl_49_CO.paa";
			disabled = 1;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","","","Head_RU","Head_RU_CO","","","","","Head_CIV","",""};
		};
		class Face49_camo1: Face49
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face49_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","Head_RU_Camo","Head_RU_CO_Camo","","","",""};
		};
		class Face49_camo2: Face49_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face49_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face49_camo3: Face49_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face49_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face49_camo4: Face49_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face49_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face49_camo5: Face49_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face49_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face49_camo6: Face49_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face49_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face50: Default
		{
			name = "$STR_FN_Man_Face50";
			texture = "\ca\characters\hhl\hhl_50_CO.paa";
			disabled = 1;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","","","","","","","Head_INS","","Head_CIV","",""};
		};
		class Face50_camo1: Face50
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face50_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","Head_INS_Camo",""};
		};
		class Face50_camo2: Face50_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face50_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face50_camo3: Face50_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face50_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face50_camo4: Face50_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face50_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face50_camo5: Face50_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face50_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face50_camo6: Face50_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face50_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face51: Default
		{
			name = "$STR_FN_Man_Face51";
			texture = "\ca\characters\hhl\hhl_51_CO.paa";
			disabled = 1;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","","","","","","","Head_INS","","Head_CIV","",""};
		};
		class Face51_camo1: Face51
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face51_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","Head_INS_Camo",""};
		};
		class Face51_camo2: Face51_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face51_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face51_camo3: Face51_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face51_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face51_camo4: Face51_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face51_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face51_camo5: Face51_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face51_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face51_camo6: Face51_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face51_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face52: Default
		{
			name = "$STR_FN_Man_Face52";
			texture = "\ca\characters\hhl\hhl_52_CO.paa";
			disabled = 1;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO","Head_RU","Head_RU_CO","","","","","","",""};
		};
		class Face52_camo1: Face52
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face52_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo","Head_RU_Camo","Head_RU_CO_Camo","","","",""};
		};
		class Face52_camo2: Face52_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face52_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face52_camo3: Face52_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face52_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face52_camo4: Face52_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face52_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face52_camo5: Face52_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face52_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face52_camo6: Face52_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face52_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face53: Default
		{
			name = "$STR_FN_Man_Face53";
			texture = "\ca\characters\hhl\hhl_53_CO.paa";
			disabled = 1;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO","","","Head_CDF","Head_CDF_CO","","","Head_CIV","",""};
		};
		class Face53_camo1: Face53
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face53_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo","","","Head_CDF_Camo","Head_CDF_CO_Camo","",""};
		};
		class Face53_camo2: Face53_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face53_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face53_camo3: Face53_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face53_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face53_camo4: Face53_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face53_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face53_camo5: Face53_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face53_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face53_camo6: Face53_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face53_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face54: Default
		{
			name = "$STR_FN_Man_Face54";
			texture = "\ca\characters\hhl\hhl_54_CO.paa";
			disabled = 1;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","","","","","","","Head_INS","Head_GUE","","",""};
		};
		class Face54_camo1: Face54
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face54_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","Head_INS_Camo","Head_GUE_Camo"};
		};
		class Face54_camo2: Face54_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face54_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face54_camo3: Face54_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face54_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face54_camo4: Face54_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face54_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face54_camo5: Face54_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face54_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face54_camo6: Face54_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face54_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face55: Default
		{
			name = "$STR_FN_Man_Face55";
			texture = "\ca\characters\hhl\hhl_55_CO.paa";
			disabled = 1;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","","","","","","","","","Head_CIV","",""};
		};
		class Face55_camo1: Face55
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face55_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","",""};
		};
		class Face55_camo2: Face55_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face55_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face55_camo3: Face55_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face55_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face55_camo4: Face55_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face55_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face55_camo5: Face55_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face55_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face55_camo6: Face55_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face55_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face56: Default
		{
			name = "$STR_FN_Man_Face56";
			texture = "\ca\characters\hhl\hhl_56_CO.paa";
			disabled = 0;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","","","","","","","","Head_GUE","Head_CIV","",""};
		};
		class Face56_camo1: Face56
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face56_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","","Head_GUE_Camo"};
		};
		class Face56_camo2: Face56_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face56_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face56_camo3: Face56_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face56_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face56_camo4: Face56_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face56_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face56_camo5: Face56_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face56_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face56_camo6: Face56_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face56_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face57: Default
		{
			name = "$STR_FN_Man_Face57";
			texture = "\ca\characters\hhl\hhl_57_CO.paa";
			disabled = 1;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO","Head_RU","Head_RU_CO","","","","","","",""};
		};
		class Face57_camo1: Face57
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face57_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo","Head_RU_Camo","Head_RU_CO_Camo","","","",""};
		};
		class Face57_camo2: Face57_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face57_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face57_camo3: Face57_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face57_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face57_camo4: Face57_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face57_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face57_camo5: Face57_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face57_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face57_camo6: Face57_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face57_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face58: Default
		{
			name = "$STR_FN_Man_Face58";
			texture = "\ca\characters\hhl\hhl_58_CO.paa";
			disabled = 1;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO","","","","","","","","",""};
		};
		class Face58_camo1: Face58
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face58_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo","","","","","",""};
		};
		class Face58_camo2: Face58_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face58_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face58_camo3: Face58_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face58_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face58_camo4: Face58_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face58_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face58_camo5: Face58_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face58_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face58_camo6: Face58_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face58_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face59: Default
		{
			name = "$STR_FN_Man_Face59";
			texture = "\ca\characters\hhl\hhl_59_CO.paa";
			disabled = 1;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","","","Head_RU","Head_RU_CO","","","","","","",""};
		};
		class Face59_camo1: Face59
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face59_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","Head_RU_Camo","Head_RU_CO_Camo","","","",""};
		};
		class Face59_camo2: Face59_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face59_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face59_camo3: Face59_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face59_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face59_camo4: Face59_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face59_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face59_camo5: Face59_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face59_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face59_camo6: Face59_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face59_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face60: Default
		{
			name = "$STR_FN_Man_Face60";
			texture = "\ca\characters\hhl\hhl_60_CO.paa";
			disabled = 1;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO","Head_RU","Head_RU_CO","","","","","","",""};
		};
		class Face60_camo1: Face60
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face60_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo","Head_RU_Camo","Head_RU_CO_Camo","","","",""};
		};
		class Face60_camo2: Face60_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face60_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face60_camo3: Face60_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face60_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face60_camo4: Face60_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face60_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face60_camo5: Face60_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face60_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face60_camo6: Face60_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face60_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face60_Hair: Default
		{
			name = "$STR_FN_Man_Face60_Hair";
			texture = "\ca\characters\hhl\hhl_60_Hair_CO.paa";
			disabled = 1;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","","","Head_RU","Head_RU_CO","Head_CDF","Head_CDF_CO","","","Head_CIV","",""};
		};
		class Face60_Hair_camo1: Face60_Hair
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face60_Hair_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","Head_RU_Camo","Head_RU_CO_Camo","Head_CDF_Camo","Head_CDF_CO_Camo","",""};
		};
		class Face60_Hair_camo2: Face60_Hair_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face60_Hair_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face60_Hair_camo3: Face60_Hair_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face60_Hair_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face60_Hair_camo4: Face60_Hair_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face60_Hair_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face60_Hair_camo5: Face60_Hair_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face60_Hair_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face60_Hair_camo6: Face60_Hair_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face60_Hair_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face61: Default
		{
			name = "$STR_FN_Man_Face61";
			texture = "\ca\characters\hhl\hhl_61_CO.paa";
			disabled = 1;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO","","","","","","","","",""};
		};
		class Face61_camo1: Face61
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face61_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo","","","","","",""};
		};
		class Face61_camo2: Face61_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face61_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face61_camo3: Face61_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face61_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face61_camo4: Face61_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face61_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face61_camo5: Face61_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face61_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face61_camo6: Face61_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face61_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face61_Hair: Default
		{
			name = "$STR_FN_Man_Face61_Hair";
			texture = "\ca\characters\hhl\hhl_61_Hair_CO.paa";
			disabled = 1;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","","","Head_RU","Head_RU_CO","","","","","","",""};
		};
		class Face61_Hair_camo1: Face61_Hair
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face61_Hair_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","Head_RU_Camo","Head_RU_CO_Camo","","","",""};
		};
		class Face61_Hair_camo2: Face61_Hair_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face61_Hair_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face61_Hair_camo3: Face61_Hair_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face61_Hair_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face61_Hair_camo4: Face61_Hair_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face61_Hair_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face61_Hair_camo5: Face61_Hair_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face61_Hair_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face61_Hair_camo6: Face61_Hair_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face61_Hair_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face62: Default
		{
			name = "$STR_FN_Man_Face62";
			texture = "\ca\characters\hhl\hhl_62_CO.paa";
			disabled = 0;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","","","","","","","","Head_GUE","Head_CIV","",""};
		};
		class Face62_camo1: Face62
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face62_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","","Head_GUE_Camo"};
		};
		class Face62_camo2: Face62_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face62_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face62_camo3: Face62_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face62_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face62_camo4: Face62_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face62_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face62_camo5: Face62_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face62_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face62_camo6: Face62_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face62_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face63: Default
		{
			name = "$STR_FN_Man_Face63";
			texture = "\ca\characters\hhl\hhl_63_CO.paa";
			disabled = 1;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","","","Head_RU","Head_RU_CO","Head_CDF","Head_CDF_CO","","","","",""};
		};
		class Face63_camo1: Face63
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face63_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","Head_RU_Camo","Head_RU_CO_Camo","Head_CDF_Camo","Head_CDF_CO_Camo","",""};
		};
		class Face63_camo2: Face63_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face63_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face63_camo3: Face63_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face63_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face63_camo4: Face63_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face63_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face63_camo5: Face63_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face63_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face63_camo6: Face63_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face63_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face64: Default
		{
			name = "$STR_FN_Man_Face64";
			texture = "\ca\characters\hhl\hhl_64_CO.paa";
			disabled = 1;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","","","","Head_RU_CO","","","Head_INS","Head_GUE","Head_CIV","",""};
		};
		class Face64_camo1: Face64
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face64_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","Head_RU_CO_Camo","","","Head_INS_Camo","Head_GUE_Camo"};
		};
		class Face64_camo2: Face64_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face64_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face64_camo3: Face64_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face64_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face64_camo4: Face64_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face64_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face64_camo5: Face64_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face64_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face64_camo6: Face64_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face64_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face65: Default
		{
			name = "$STR_FN_Man_Face65";
			texture = "\ca\characters\hhl\hhl_65_CO.paa";
			disabled = 1;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","","","","Head_RU_CO","","Head_CDF_CO","","","Head_CIV","",""};
		};
		class Face65_camo1: Face65
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face65_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","Head_RU_CO_Camo","","Head_CDF_CO_Camo","",""};
		};
		class Face65_camo2: Face65_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face65_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face65_camo3: Face65_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face65_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face65_camo4: Face65_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face65_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face65_camo5: Face65_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face65_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face65_camo6: Face65_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face65_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face66: Default
		{
			name = "$STR_FN_Man_Face66";
			texture = "\ca\characters\hhl\hhl_66_CO.paa";
			disabled = 1;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","","","","","","","Head_INS","","Head_CIV","",""};
		};
		class Face66_camo1: Face66
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face66_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","Head_INS_Camo",""};
		};
		class Face66_camo2: Face66_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face66_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face66_camo3: Face66_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face66_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face66_camo4: Face66_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face66_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face66_camo5: Face66_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face66_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face66_camo6: Face66_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face66_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face67: Default
		{
			name = "$STR_FN_Man_Face67";
			texture = "\ca\characters\hhl\hhl_67_CO.paa";
			disabled = 1;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","","","","","","","","Head_GUE","Head_CIV","",""};
		};
		class Face67_camo1: Face67
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face67_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","","Head_GUE_Camo"};
		};
		class Face67_camo2: Face67_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face67_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face67_camo3: Face67_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face67_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face67_camo4: Face67_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face67_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face67_camo5: Face67_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face67_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face67_camo6: Face67_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face67_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face68: Default
		{
			name = "$STR_FN_Man_Face68";
			texture = "\ca\characters\hhl\hhl_68_CO.paa";
			disabled = 1;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","","","","","","","","Head_GUE","Head_CIV","",""};
		};
		class Face68_camo1: Face68
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face68_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","","Head_GUE_Camo"};
		};
		class Face68_camo2: Face68_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face68_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face68_camo3: Face68_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face68_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face68_camo4: Face68_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face68_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face68_camo5: Face68_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face68_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face68_camo6: Face68_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face68_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face69: Default
		{
			name = "$STR_FN_Man_Face69";
			texture = "\ca\characters\hhl\hhl_69_CO.paa";
			disabled = 1;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","","","","","","","Head_INS","","Head_CIV","",""};
		};
		class Face69_camo1: Face69
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face69_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","Head_INS_Camo",""};
		};
		class Face69_camo2: Face69_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face69_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face69_camo3: Face69_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face69_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face69_camo4: Face69_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face69_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face69_camo5: Face69_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face69_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face69_camo6: Face69_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face69_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face70: Default
		{
			name = "$STR_FN_Man_Face70";
			texture = "\ca\characters\hhl\hhl_70_CO.paa";
			disabled = 1;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","","","","","","Head_CDF_CO","","Head_GUE","","",""};
		};
		class Face70_camo1: Face70
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face70_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","Head_CDF_CO_Camo","","Head_GUE_Camo"};
		};
		class Face70_camo2: Face70_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face70_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face70_camo3: Face70_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face70_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face70_camo4: Face70_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face70_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face70_camo5: Face70_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face70_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face70_camo6: Face70_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face70_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face71: Default
		{
			name = "$STR_FN_Man_Face71";
			texture = "\ca\characters\hhl\hhl_71_CO.paa";
			disabled = 1;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","","","","","","","Head_INS","","Head_CIV","",""};
		};
		class Face71_camo1: Face71
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face71_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","Head_INS_Camo",""};
		};
		class Face71_camo2: Face71_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face71_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face71_camo3: Face71_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face71_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face71_camo4: Face71_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face71_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face71_camo5: Face71_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face71_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face71_camo6: Face71_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face71_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face72: Default
		{
			name = "$STR_FN_Man_Face72";
			texture = "\ca\characters\hhl\hhl_72_CO.paa";
			disabled = 1;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","","","","","","","","","Head_CIV","",""};
		};
		class Face72_camo1: Face72
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face72_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","",""};
		};
		class Face72_camo2: Face72_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face72_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face72_camo3: Face72_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face72_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face72_camo4: Face72_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face72_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face72_camo5: Face72_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face72_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face72_camo6: Face72_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face72_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face73: Default
		{
			name = "$STR_FN_Man_Face73";
			texture = "\ca\characters\hhl\hhl_73_CO.paa";
			disabled = 1;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","","","","","","","","Head_GUE","Head_CIV","",""};
		};
		class Face73_camo1: Face73
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face73_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","","Head_GUE_Camo"};
		};
		class Face73_camo2: Face73_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face73_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face73_camo3: Face73_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face73_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face73_camo4: Face73_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face73_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face73_camo5: Face73_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face73_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face73_camo6: Face73_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face73_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face74: Default
		{
			name = "$STR_FN_Man_Face74";
			texture = "\ca\characters\hhl\hhl_74_CO.paa";
			disabled = 1;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"","","","","","","","","","","Head_Special",""};
		};
		class Face74_camo1: Face74
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face74_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","",""};
		};
		class Face74_camo2: Face74_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face74_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face74_camo3: Face74_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face74_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face74_camo4: Face74_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face74_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face74_camo5: Face74_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face74_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face74_camo6: Face74_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face74_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face75: Default
		{
			name = "$STR_FN_Man_Face75";
			texture = "\ca\characters\hhl\hhl_75_CO.paa";
			disabled = 1;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","","","","","","Head_CDF_CO","Head_INS","","Head_CIV","",""};
		};
		class Face75_camo1: Face75
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face75_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","Head_CDF_CO_Camo","Head_INS_Camo",""};
		};
		class Face75_camo2: Face75_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face75_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face75_camo3: Face75_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face75_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face75_camo4: Face75_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face75_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face75_camo5: Face75_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face75_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face75_camo6: Face75_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face75_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face76: Default
		{
			name = "$STR_FN_Man_Face76";
			texture = "\ca\characters\hhl\hhl_76_CO.paa";
			disabled = 1;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"","","","","","","","","","","Head_Special",""};
		};
		class Face76_camo1: Face76
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face76_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","",""};
		};
		class Face76_camo2: Face76_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face76_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face76_camo3: Face76_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face76_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face76_camo4: Face76_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face76_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face76_camo5: Face76_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face76_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face76_camo6: Face76_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face76_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face77: Default
		{
			name = "$STR_FN_Man_Face77";
			texture = "\ca\characters\hhl\hhl_77_CO.paa";
			disabled = 0;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","","","","","","","Head_INS","","Head_CIV","",""};
		};
		class Face77_camo1: Face77
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face77_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","Head_INS_Camo",""};
		};
		class Face77_camo2: Face77_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face77_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face77_camo3: Face77_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face77_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face77_camo4: Face77_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face77_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face77_camo5: Face77_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face77_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face77_camo6: Face77_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face77_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face78: Default
		{
			name = "$STR_FN_Man_Face78";
			texture = "\ca\characters\hhl\hhl_78_CO.paa";
			material = "\ca\characters\heads\male\blackhead\data\hhl_black.rvmat";
			head = "BlackHead_BAF";
			disabled = 0;
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO","","Head_BAF"};
		};
		class Face78_camo1: Face78
		{
			head = "BlackHead_camo1";
			name = "$STR_FN_Man_Face78_camo1";
			material = "\ca\characters\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo"};
		};
		class Face78_camo2: Face78_camo1
		{
			head = "BlackHead_camo2";
			name = "$STR_FN_Man_Face78_camo2";
			material = "\ca\characters\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
			disabled = 1;
		};
		class Face78_camo3: Face78_camo1
		{
			head = "BlackHead_camo3";
			name = "$STR_FN_Man_Face78_camo3";
			material = "\ca\characters\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
			disabled = 1;
		};
		class Face78_camo4: Face78_camo1
		{
			head = "BlackHead_camo4";
			name = "$STR_FN_Man_Face78_camo4";
			material = "\ca\characters\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
			disabled = 1;
		};
		class Face78_camo5: Face78_camo1
		{
			head = "BlackHead_camo5";
			name = "$STR_FN_Man_Face78_camo5";
			material = "\ca\characters\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
			disabled = 1;
		};
		class Face78_camo6: Face78_camo1
		{
			head = "BlackHead_camo6";
			name = "$STR_FN_Man_Face78_camo6";
			material = "\ca\characters\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
			disabled = 1;
		};
		class Face79: Default
		{
			name = "$STR_FN_Man_Face79";
			texture = "\ca\characters\hhl\hhl_79_CO.paa";
			material = "\ca\characters\heads\male\blackhead\data\hhl_black.rvmat";
			head = "BlackHead_BAF";
			disabled = 0;
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO","","Head_BAF"};
		};
		class Face79_camo1: Face79
		{
			head = "BlackHead_camo1";
			name = "$STR_FN_Man_Face79_camo1";
			material = "\ca\characters\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo"};
		};
		class Face79_camo2: Face79_camo1
		{
			head = "BlackHead_camo2";
			name = "$STR_FN_Man_Face79_camo2";
			material = "\ca\characters\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
			disabled = 1;
		};
		class Face79_camo3: Face79_camo1
		{
			head = "BlackHead_camo3";
			name = "$STR_FN_Man_Face79_camo3";
			material = "\ca\characters\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
			disabled = 1;
		};
		class Face79_camo4: Face79_camo1
		{
			head = "BlackHead_camo4";
			name = "$STR_FN_Man_Face79_camo4";
			material = "\ca\characters\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
			disabled = 1;
		};
		class Face79_camo5: Face79_camo1
		{
			head = "BlackHead_camo5";
			name = "$STR_FN_Man_Face79_camo5";
			material = "\ca\characters\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
			disabled = 1;
		};
		class Face79_camo6: Face79_camo1
		{
			head = "BlackHead_camo6";
			name = "$STR_FN_Man_Face79_camo6";
			material = "\ca\characters\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
			disabled = 1;
		};
		class Face80: Default
		{
			name = "$STR_FN_Man_Face80";
			texture = "\ca\characters\hhl\hhl_80_CO.paa";
			material = "\ca\characters\heads\male\blackhead\data\hhl_black.rvmat";
			head = "BlackHead_BAF";
			disabled = 0;
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO","","Head_BAF"};
		};
		class Face80_camo1: Face80
		{
			head = "BlackHead_camo1";
			name = "$STR_FN_Man_Face80_camo1";
			material = "\ca\characters\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo"};
		};
		class Face80_camo2: Face80_camo1
		{
			head = "BlackHead_camo2";
			name = "$STR_FN_Man_Face80_camo2";
			material = "\ca\characters\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
			disabled = 1;
		};
		class Face80_camo3: Face80_camo1
		{
			head = "BlackHead_camo3";
			name = "$STR_FN_Man_Face80_camo3";
			material = "\ca\characters\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
			disabled = 1;
		};
		class Face80_camo4: Face80_camo1
		{
			head = "BlackHead_camo4";
			name = "$STR_FN_Man_Face80_camo4";
			material = "\ca\characters\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
			disabled = 1;
		};
		class Face80_camo5: Face80_camo1
		{
			head = "BlackHead_camo5";
			name = "$STR_FN_Man_Face80_camo5";
			material = "\ca\characters\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
			disabled = 1;
		};
		class Face80_camo6: Face80_camo1
		{
			head = "BlackHead_camo6";
			name = "$STR_FN_Man_Face80_camo6";
			material = "\ca\characters\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
			disabled = 1;
		};
		class Face81: Default
		{
			name = "$STR_FN_Man_Face81";
			texture = "\ca\characters\hhl\hhl_81_CO.paa";
			material = "\ca\characters\heads\male\blackhead\data\hhl_black.rvmat";
			head = "BlackHead_BAF";
			disabled = 0;
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO","","Head_BAF"};
		};
		class Face81_camo1: Face81
		{
			head = "BlackHead_camo1";
			name = "$STR_FN_Man_Face81_camo1";
			material = "\ca\characters\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo"};
		};
		class Face81_camo2: Face81_camo1
		{
			head = "BlackHead_camo2";
			name = "$STR_FN_Man_Face81_camo2";
			material = "\ca\characters\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
			disabled = 1;
		};
		class Face81_camo3: Face81_camo1
		{
			head = "BlackHead_camo3";
			name = "$STR_FN_Man_Face81_camo3";
			material = "\ca\characters\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
			disabled = 1;
		};
		class Face81_camo4: Face81_camo1
		{
			head = "BlackHead_camo4";
			name = "$STR_FN_Man_Face81_camo4";
			material = "\ca\characters\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
			disabled = 1;
		};
		class Face81_camo5: Face81_camo1
		{
			head = "BlackHead_camo5";
			name = "$STR_FN_Man_Face81_camo5";
			material = "\ca\characters\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
			disabled = 1;
		};
		class Face81_camo6: Face81_camo1
		{
			head = "BlackHead_camo6";
			name = "$STR_FN_Man_Face81_camo6";
			material = "\ca\characters\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
			disabled = 1;
		};
		class Face82: Default
		{
			name = "$STR_FN_Man_Face82";
			texture = "\ca\characters\hhl\hhl_82_CO.paa";
			material = "\ca\characters\heads\male\blackhead\data\hhl_black.rvmat";
			head = "BlackHead_BAF";
			disabled = 0;
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO","","Head_BAF"};
		};
		class Face82_camo1: Face82
		{
			head = "BlackHead_camo1";
			name = "$STR_FN_Man_Face82_camo1";
			material = "\ca\characters\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo"};
		};
		class Face82_camo2: Face82_camo1
		{
			head = "BlackHead_camo2";
			name = "$STR_FN_Man_Face82_camo2";
			material = "\ca\characters\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
			disabled = 1;
		};
		class Face82_camo3: Face82_camo1
		{
			head = "BlackHead_camo3";
			name = "$STR_FN_Man_Face82_camo3";
			material = "\ca\characters\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
			disabled = 1;
		};
		class Face82_camo4: Face82_camo1
		{
			head = "BlackHead_camo4";
			name = "$STR_FN_Man_Face82_camo4";
			material = "\ca\characters\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
			disabled = 1;
		};
		class Face82_camo5: Face82_camo1
		{
			head = "BlackHead_camo5";
			name = "$STR_FN_Man_Face82_camo5";
			material = "\ca\characters\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
			disabled = 1;
		};
		class Face82_camo6: Face82_camo1
		{
			head = "BlackHead_camo6";
			name = "$STR_FN_Man_Face82_camo6";
			material = "\ca\characters\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
			disabled = 1;
		};
		class Face83: Default
		{
			name = "$STR_FN_Man_Face83";
			texture = "\ca\characters\hhl\hhl_83_CO.paa";
			material = "\ca\characters\heads\male\blackhead\data\hhl_black.rvmat";
			head = "BlackHead_BAF";
			disabled = 0;
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO","","Head_BAF"};
		};
		class Face83_camo1: Face83
		{
			head = "BlackHead_camo1";
			name = "$STR_FN_Man_Face83_camo1";
			material = "\ca\characters\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo"};
		};
		class Face83_camo2: Face83_camo1
		{
			head = "BlackHead_camo2";
			name = "$STR_FN_Man_Face83_camo2";
			material = "\ca\characters\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
			disabled = 1;
		};
		class Face83_camo3: Face83_camo1
		{
			head = "BlackHead_camo3";
			name = "$STR_FN_Man_Face83_camo3";
			material = "\ca\characters\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
			disabled = 1;
		};
		class Face83_camo4: Face83_camo1
		{
			head = "BlackHead_camo4";
			name = "$STR_FN_Man_Face83_camo4";
			material = "\ca\characters\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
			disabled = 1;
		};
		class Face83_camo5: Face83_camo1
		{
			head = "BlackHead_camo5";
			name = "$STR_FN_Man_Face83_camo5";
			material = "\ca\characters\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
			disabled = 1;
		};
		class Face83_camo6: Face83_camo1
		{
			head = "BlackHead_camo6";
			name = "$STR_FN_Man_Face83_camo6";
			material = "\ca\characters\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
			disabled = 1;
		};
		class Face84: Default
		{
			name = "$STR_FN_Man_Face84";
			texture = "\ca\characters\hhl\hhl_84_CO.paa";
			material = "\ca\characters\heads\male\blackhead\data\hhl_black.rvmat";
			head = "BlackHead_BAF";
			disabled = 0;
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO","",""};
		};
		class Face84_camo1: Face84
		{
			head = "BlackHead_camo1";
			name = "$STR_FN_Man_Face84_camo1";
			material = "\ca\characters\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo"};
		};
		class Face84_camo2: Face84_camo1
		{
			head = "BlackHead_camo2";
			name = "$STR_FN_Man_Face84_camo2";
			material = "\ca\characters\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
			disabled = 1;
		};
		class Face84_camo3: Face84_camo1
		{
			head = "BlackHead_camo3";
			name = "$STR_FN_Man_Face84_camo3";
			material = "\ca\characters\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
			disabled = 1;
		};
		class Face84_camo4: Face84_camo1
		{
			head = "BlackHead_camo4";
			name = "$STR_FN_Man_Face84_camo4";
			material = "\ca\characters\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
			disabled = 1;
		};
		class Face84_camo5: Face84_camo1
		{
			head = "BlackHead_camo5";
			name = "$STR_FN_Man_Face84_camo5";
			material = "\ca\characters\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
			disabled = 1;
		};
		class Face84_camo6: Face84_camo1
		{
			head = "BlackHead_camo6";
			name = "$STR_FN_Man_Face84_camo6";
			material = "\ca\characters\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
			disabled = 1;
		};
		class Face86: Default
		{
			name = "$STR_FN_Man_Face86";
			texture = "\ca\characters\hhl\hhl_86_CO.paa";
			material = "\ca\characters\heads\male\blackhead\data\hhl_black.rvmat";
			head = "BlackHead_BAF";
			disabled = 0;
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO","",""};
		};
		class Face86_camo1: Face86
		{
			head = "BlackHead_camo1";
			name = "$STR_FN_Man_Face86_camo1";
			material = "\ca\characters\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo"};
		};
		class Face86_camo2: Face86_camo1
		{
			head = "BlackHead_camo2";
			name = "$STR_FN_Man_Face86_camo2";
			material = "\ca\characters\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
			disabled = 1;
		};
		class Face86_camo3: Face86_camo1
		{
			head = "BlackHead_camo3";
			name = "$STR_FN_Man_Face86_camo3";
			material = "\ca\characters\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
			disabled = 1;
		};
		class Face86_camo4: Face86_camo1
		{
			head = "BlackHead_camo4";
			name = "$STR_FN_Man_Face86_camo4";
			material = "\ca\characters\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
			disabled = 1;
		};
		class Face86_camo5: Face86_camo1
		{
			head = "BlackHead_camo5";
			name = "$STR_FN_Man_Face86_camo5";
			material = "\ca\characters\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
			disabled = 1;
		};
		class Face86_camo6: Face86_camo1
		{
			head = "BlackHead_camo6";
			name = "$STR_FN_Man_Face86_camo6";
			material = "\ca\characters\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
			disabled = 1;
		};
		class Face85: Default
		{
			name = "$STR_FN_Man_Face85";
			texture = "\ca\characters\hhl\hhl_85_CO.paa";
			disabled = 0;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","","","","","","","","Head_GUE","","",""};
		};
		class Face85_camo1: Face85
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face85_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","","Head_GUE_Camo"};
		};
		class Face85_camo2: Face85_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face85_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face85_camo3: Face85_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face85_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face85_camo4: Face85_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face85_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face85_camo5: Face85_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face85_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face85_camo6: Face85_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face85_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face87: Default
		{
			name = "$STR_FN_Man_Face87";
			texture = "\ca\characters\hhl\hhl_87_CO.paa";
			disabled = 0;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO","Head_RU","Head_RU_CO","","","","","","","Head_BAF"};
		};
		class Face87_camo1: Face87
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face87_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo","Head_RU_Camo","Head_RU_CO_Camo","","","",""};
		};
		class Face87_camo2: Face87_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face87_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face87_camo3: Face87_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face87_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face87_camo4: Face87_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face87_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face87_camo5: Face87_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face87_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face87_camo6: Face87_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face87_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face88: Default
		{
			name = "$STR_FN_Man_Face88";
			texture = "\ca\characters\hhl\hhl_88_CO.paa";
			disabled = 0;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO","","","Head_CDF","Head_CDF_CO","","","","",""};
		};
		class Face88_camo1: Face88
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face88_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo","","","Head_CDF_Camo","Head_CDF_CO_Camo","",""};
		};
		class Face88_camo2: Face88_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face88_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face88_camo3: Face88_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face88_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face88_camo4: Face88_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face88_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face88_camo5: Face88_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face88_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face88_camo6: Face88_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face88_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face89: Default
		{
			name = "$STR_FN_Man_Face89";
			texture = "\ca\characters\hhl\hhl_89_CO.paa";
			disabled = 0;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","","","","","Head_CDF","Head_CDF_CO","Head_INS","","Head_CIV","",""};
		};
		class Face89_camo1: Face89
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face89_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","Head_CDF_Camo","Head_CDF_CO_Camo","Head_INS_Camo",""};
		};
		class Face89_camo2: Face89_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face89_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face89_camo3: Face89_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face89_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face89_camo4: Face89_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face89_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face89_camo5: Face89_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face89_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face89_camo6: Face89_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face89_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face90: Default
		{
			name = "$STR_FN_Man_Face90";
			texture = "\ca\characters\hhl\hhl_90_CO.paa";
			disabled = 0;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","","","Head_RU","Head_RU_CO","","","","","Head_CIV","","Head_BAF"};
		};
		class Face90_camo1: Face90
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face90_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","Head_RU_Camo","Head_RU_CO_Camo","","","",""};
		};
		class Face90_camo2: Face90_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face90_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face90_camo3: Face90_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face90_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face90_camo4: Face90_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face90_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face90_camo5: Face90_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face90_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face90_camo6: Face90_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face90_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face91: Default
		{
			name = "$STR_FN_Man_Face91";
			texture = "\ca\characters\hhl\hhl_91_CO.paa";
			disabled = 0;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO","Head_RU","Head_RU_CO","Head_CDF","Head_CDF_CO","","","","",""};
		};
		class Face91_camo1: Face91
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face91_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo","Head_RU_Camo","Head_RU_CO_Camo","Head_CDF_Camo","Head_CDF_CO_Camo","",""};
		};
		class Face91_camo2: Face91_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face91_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face91_camo3: Face91_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face91_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face91_camo4: Face91_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face91_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face91_camo5: Face91_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face91_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face91_camo6: Face91_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face91_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face92: Default
		{
			name = "$STR_FN_Man_Face92";
			texture = "\ca\characters\hhl\hhl_92_CO.paa";
			disabled = 0;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","","","Head_RU","Head_RU_CO","","","","","","",""};
		};
		class Face92_camo1: Face92
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face92_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","Head_RU_Camo","Head_RU_CO_Camo","","","",""};
		};
		class Face92_camo2: Face92_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face92_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face92_camo3: Face92_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face92_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face92_camo4: Face92_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face92_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face92_camo5: Face92_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face92_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face92_camo6: Face92_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face92_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face93: Default
		{
			name = "$STR_FN_Man_Face93";
			texture = "\ca\characters\hhl\hhl_93_CO.paa";
			disabled = 0;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","","","","","Head_CDF","Head_CDF_CO","","","Head_CIV","","Head_BAF"};
		};
		class Face93_camo1: Face93
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face93_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","Head_CDF_Camo","Head_CDF_CO_Camo","",""};
		};
		class Face93_camo2: Face93_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face93_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face93_camo3: Face93_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face93_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face93_camo4: Face93_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face93_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face93_camo5: Face93_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face93_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face93_camo6: Face93_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face93_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face94: Default
		{
			name = "$STR_FN_Man_Face94";
			texture = "\ca\characters\hhl\hhl_94_CO.paa";
			disabled = 0;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO","","","","","","","Head_CIV","",""};
		};
		class Face94_camo1: Face94
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face94_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo","","","","","",""};
		};
		class Face94_camo2: Face94_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face94_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face94_camo3: Face94_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face94_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face94_camo4: Face94_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face94_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face94_camo5: Face94_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face94_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face94_camo6: Face94_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face94_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face95: Default
		{
			name = "$STR_FN_Man_Face95";
			texture = "\ca\characters\hhl\hhl_95_CO.paa";
			disabled = 0;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","","","Head_RU","Head_RU_CO","","","","","","","Head_BAF"};
		};
		class Face95_camo1: Face95
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face95_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","Head_RU_Camo","Head_RU_CO_Camo","","","",""};
		};
		class Face95_camo2: Face95_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face95_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face95_camo3: Face95_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face95_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face95_camo4: Face95_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face95_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face95_camo5: Face95_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face95_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face95_camo6: Face95_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face95_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face96: Default
		{
			name = "$STR_FN_Man_Face96";
			texture = "\ca\characters\hhl\hhl_96_CO.paa";
			disabled = 0;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","","","Head_RU","Head_RU_CO","","","","","","","Head_BAF"};
		};
		class Face96_camo1: Face96
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face96_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","Head_RU_Camo","Head_RU_CO_Camo","","","",""};
		};
		class Face96_camo2: Face96_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face96_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face96_camo3: Face96_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face96_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face96_camo4: Face96_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face96_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face96_camo5: Face96_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face96_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face96_camo6: Face96_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face96_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face97: Default
		{
			name = "$STR_FN_Man_Face97";
			texture = "\ca\characters\hhl\hhl_97_CO.paa";
			disabled = 0;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO","","","","","","","","","Head_BAF"};
		};
		class Face97_camo1: Face97
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face97_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo","","","","","",""};
		};
		class Face97_camo2: Face97_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face97_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face97_camo3: Face97_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face97_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face97_camo4: Face97_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face97_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face97_camo5: Face97_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face97_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face97_camo6: Face97_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face97_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face98: Default
		{
			name = "$STR_FN_Man_Face98";
			texture = "\ca\characters\hhl\hhl_98_CO.paa";
			disabled = 0;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","","","","","","","Head_INS","","Head_CIV","","Head_BAF"};
		};
		class Face98_camo1: Face98
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face98_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","Head_INS_Camo",""};
		};
		class Face98_camo2: Face98_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face98_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face98_camo3: Face98_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face98_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face98_camo4: Face98_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face98_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face98_camo5: Face98_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face98_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face98_camo6: Face98_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face98_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face99: Default
		{
			name = "$STR_FN_Man_Face99";
			texture = "\ca\characters\hhl\hhl_99_CO.paa";
			disabled = 0;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","","","","","","","","Head_GUE","","",""};
		};
		class Face99_camo1: Face99
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face99_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","","Head_GUE_Camo"};
		};
		class Face99_camo2: Face99_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face99_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face99_camo3: Face99_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face99_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face99_camo4: Face99_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face99_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face99_camo5: Face99_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face99_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face99_camo6: Face99_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face99_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face100: Default
		{
			name = "$STR_FN_Man_Face100";
			texture = "\ca\characters\hhl\hhl_100_CO.paa";
			disabled = 0;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","","","","","","","Head_INS","","","",""};
		};
		class Face100_camo1: Face100
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face100_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","Head_INS_Camo",""};
		};
		class Face100_camo2: Face100_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face100_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face100_camo3: Face100_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face100_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face100_camo4: Face100_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face100_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face100_camo5: Face100_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face100_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face100_camo6: Face100_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face100_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face101: Default
		{
			name = "$STR_FN_Man_Face101";
			texture = "\ca\characters\hhl\hhl_101_CO.paa";
			disabled = 0;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"","","","","","","","","","","Head_Special",""};
		};
		class Face101_camo1: Face101
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face101_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","",""};
		};
		class Face101_camo2: Face101_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face101_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face101_camo3: Face101_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face101_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face101_camo4: Face101_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face101_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face101_camo5: Face101_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face101_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face101_camo6: Face101_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face101_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face102: Default
		{
			name = "$STR_FN_Man_Face102";
			texture = "\ca\characters\hhl\hhl_102_CO.paa";
			disabled = 0;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","","","","","","","","","Head_CIV","","Head_BAF"};
		};
		class Face102_camo1: Face102
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face102_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","",""};
		};
		class Face102_camo2: Face102_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face102_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face102_camo3: Face102_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face102_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face102_camo4: Face102_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face102_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face102_camo5: Face102_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face102_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face102_camo6: Face102_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face102_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face103: Default
		{
			name = "$STR_FN_Man_Face103";
			texture = "\ca\characters\hhl\hhl_103_CO.paa";
			disabled = 0;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","","","","","Head_CDF","Head_CDF_CO","","Head_GUE","","",""};
		};
		class Face103_camo1: Face103
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face103_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","Head_CDF_Camo","Head_CDF_CO_Camo","","Head_GUE_Camo"};
		};
		class Face103_camo2: Face103_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face103_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face103_camo3: Face103_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face103_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face103_camo4: Face103_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face103_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face103_camo5: Face103_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face103_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face103_camo6: Face103_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face103_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face104: Default
		{
			name = "$STR_FN_Man_Face104";
			texture = "\ca\characters\hhl\hhl_104_CO.paa";
			disabled = 0;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","","","Head_RU","Head_RU_CO","","","","","","","Head_BAF"};
		};
		class Face104_camo1: Face104
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face104_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","Head_RU_Camo","Head_RU_CO_Camo","","","",""};
		};
		class Face104_camo2: Face104_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face104_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face104_camo3: Face104_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face104_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face104_camo4: Face104_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face104_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face104_camo5: Face104_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face104_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face104_camo6: Face104_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face104_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face105: Default
		{
			name = "$STR_FN_Man_Face105";
			texture = "\ca\characters\hhl\hhl_105_CO.paa";
			disabled = 0;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","","","Head_RU","Head_RU_CO","Head_CDF","Head_CDF_CO","","","","","Head_BAF"};
		};
		class Face105_camo1: Face105
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face105_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","Head_RU_Camo","Head_RU_CO_Camo","Head_CDF_Camo","Head_CDF_CO_Camo","",""};
		};
		class Face105_camo2: Face105_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face105_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face105_camo3: Face105_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face105_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face105_camo4: Face105_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face105_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face105_camo5: Face105_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face105_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face105_camo6: Face105_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face105_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face106: Default
		{
			name = "$STR_FN_Man_Face106";
			texture = "\ca\characters\hhl\hhl_106_CO.paa";
			disabled = 0;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","","","","","Head_CDF","Head_CDF_CO","","Head_GUE","Head_CIV","","Head_BAF"};
		};
		class Face106_camo1: Face106
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face106_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","Head_CDF_Camo","Head_CDF_CO_Camo","","Head_GUE_Camo"};
		};
		class Face106_camo2: Face106_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face106_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face106_camo3: Face106_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face106_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face106_camo4: Face106_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face106_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face106_camo5: Face106_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face106_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face106_camo6: Face106_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face106_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face107: Default
		{
			name = "$STR_FN_Man_Face107";
			texture = "\ca\characters\hhl\hhl_107_CO.paa";
			disabled = 0;
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
			identityTypes[] = {"Default","","","","","","","Head_INS","Head_GUE","Head_CIV","",""};
		};
		class Face107_camo1: Face107
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face107_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","Head_INS_Camo","Head_GUE_Camo"};
		};
		class Face107_camo2: Face107_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face107_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face107_camo3: Face107_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face107_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face107_camo4: Face107_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face107_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face107_camo5: Face107_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face107_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face107_camo6: Face107_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face107_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class FrostFace: Default
		{
			expansion = 2;
			name = "Brian F.";
			texture = "CA\characters_d_baf\Heads\Data\hhl_BrianFrost.paa";
			disabled = 0;
			identityTypes[] = {"Frost"};
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
		};
		class Face01_baf: Default
		{
			expansion = 2;
			name = "Cian S.";
			texture = "CA\characters_d_baf\Heads\Data\hhl_01_baf_co.paa";
			disabled = 0;
			identityTypes[] = {"Head_BAF"};
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
		};
		class Face02_baf: Default
		{
			expansion = 2;
			name = "Aaron W.";
			texture = "CA\characters_d_baf\Heads\Data\hhl_02_baf_CO.paa";
			disabled = 0;
			identityTypes[] = {"Head_BAF"};
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
		};
		class Face03_baf: Default
		{
			expansion = 2;
			name = "Calum S.";
			texture = "CA\characters_d_baf\Heads\Data\hhl_03_baf_CO.paa";
			disabled = 0;
			identityTypes[] = {"Head_BAF"};
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
		};
		class Face04_baf: Default
		{
			expansion = 2;
			name = "Ian B.";
			texture = "CA\characters_d_baf\Heads\Data\hhl_04_baf_CO.paa";
			disabled = 0;
			identityTypes[] = {"Head_BAF"};
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
		};
		class Face05_baf: Default
		{
			expansion = 2;
			name = "Sean K.";
			texture = "CA\characters_d_baf\Heads\Data\hhl_05_baf_CO.paa";
			disabled = 0;
			identityTypes[] = {"Head_BAF"};
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
		};
		class Face09_baf: Default
		{
			expansion = 2;
			name = "William W.";
			texture = "CA\characters_d_baf\Heads\Data\hhl_09_baf_CO.paa";
			disabled = 0;
			identityTypes[] = {"Special"};
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
		};
		class Face06_baf: Default
		{
			expansion = 2;
			name = "Eaton T.";
			texture = "CA\characters_d_baf\Heads\Data\hhl_06_baf_CO.paa";
			disabled = 0;
			identityTypes[] = {"Head_BAF"};
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
		};
		class Face07_baf: Default
		{
			expansion = 2;
			name = "Conor M.";
			texture = "CA\characters_d_baf\Heads\Data\hhl_07_baf_CO.paa";
			disabled = 0;
			identityTypes[] = {"Head_BAF"};
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
		};
		class Face08_baf: Default
		{
			expansion = 2;
			name = "Dougal W.";
			texture = "CA\characters_d_baf\Heads\Data\hhl_08_baf_CO.paa";
			disabled = 0;
			identityTypes[] = {"Head_BAF"};
			material = "\ca\characters_d_baf\Heads\Data\hhlbaf.rvmat";
		};
	};
};
class CfgGlasses
{
	class None{};
	class None_baf: None
	{
		scope = 2;
		name = "$STR_CFG_GLASSES_NONE";
		model = "";
		identityTypes[] = {"BAF_Glasses",70};
	};
	class Tactical: None{};
	class Tactical_baf: Tactical
	{
		identityTypes[] = {"BAF_Glasses",11};
	};
	class BlackSun: None{};
	class BlackSun_baf: BlackSun
	{
		identityTypes[] = {"BAF_Glasses",10,"PMC_Glasses",1};
	};
	class BlueSun: None{};
	class BlueSun_baf: BlueSun
	{
		identityTypes[] = {"BAF_Glasses",3};
	};
	class RedSun_baf: BlueSun_baf
	{
		name = "$STR_CFG_GLASSES_SHADES_RED";
		model = "\Ca\characters\glasses\RedSun";
	};
	class GreenSun: BlueSun
	{
		name = "$STR_CFG_GLASSES_SHADES_YELLOW";
		model = "\Ca\characters\glasses\GreenSun";
	};
};
class CfgPatches
{
	class CACharacters_BAF
	{
		units[] = {"BAF_soldier_MTP","BAF_Asoldier_MTP","BAF_soldier_GL_MTP","BAF_soldier_AAR_MTP","BAF_soldier_AMG_MTP","BAF_soldier_AAT_MTP","BAF_soldier_AHAT_MTP","BAF_soldier_AHAA_MTP","BAF_soldier_L_MTP","BAF_soldier_Officer_MTP","BAF_soldier_SL_MTP","BAF_soldier_TL_MTP","BAF_soldier_AR_MTP","BAF_soldier_MG_MTP","BAF_soldier_AT_MTP","BAF_soldier_AA_MTP","BAF_soldier_HAT_MTP","BAF_soldier_Marksman_MTP","BAF_soldier_Sniper_MTP","BAF_soldier_SniperH_MTP","BAF_soldier_SniperN_MTP","BAF_soldier_spotter_MTP","BAF_soldier_Medic_MTP","BAF_Soldier_FAC_MTP","BAF_soldier_EN_MTP","BAF_pilot_MTP","BAF_crewman_MTP","BAF_soldier_DDPM","BAF_Asoldier_DDPM","BAF_soldier_GL_DDPM","BAF_soldier_AAR_DDPM","BAF_soldier_AMG_DDPM","BAF_soldier_AAT_DDPM","BAF_soldier_AHAT_DDPM","BAF_soldier_AHAA_DDPM","BAF_soldier_L_DDPM","BAF_soldier_Officer_DDPM","BAF_soldier_SL_DDPM","BAF_soldier_TL_DDPM","BAF_soldier_AR_DDPM","BAF_soldier_MG_DDPM","BAF_soldier_AT_DDPM","BAF_soldier_AA_DDPM","BAF_soldier_HAT_DDPM","BAF_soldier_Marksman_DDPM","BAF_soldier_Sniper_DDPM","BAF_soldier_SniperH_DDPM","BAF_soldier_SniperN_DDPM","BAF_soldier_spotter_DDPM","BAF_soldier_Medic_DDPM","BAF_Soldier_FAC_DDPM","BAF_soldier_EN_DDPM","BAF_pilot_DDPM","BAF_crewman_DDPM"};
		weapons[] = {};
		requiredVersion = 1.54;
		requiredAddons[] = {"CACharacters","CACharacters_E","CA_E","CACharacters_E_Head","CA_BAF","CAWeapons_BAF","CACharacters_E_Head"};
	};
};
class CfgTalkSentences_E;
class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class TalkTopics;
		class HitPoints
		{
			class HitHead;
			class HitBody;
		};
	};
	class SoldierWB: CAManBase
	{
		class TalkTopics: TalkTopics{};
		threat[] = {1,0.1,0.1};
	};
	class SoldierGB: CAManBase
	{
		class TalkTopics: TalkTopics{};
		threat[] = {1,0.1,0.1};
	};
	class CIV_Contractor1_BAF: SoldierGB
	{
		genericNames = "EnglishMen";
		model = "\ca\characters_E\Civil\Harris\european_man_01";
		displayName = "$STR_BAF_CFGVEHICLES_PMC0";
		portrait = "\Ca\characters_E\data\portraits\civ_man_CA";
		vehicleClass = "Men";
		scope = 2;
		accuracy = 0.7;
		expansion = 2;
		identityTypes[] = {"Language_EN_EP1","Head_CIV","PMC_Glasses"};
		faction = "PMC_BAF";
		faceType = "Man";
		class TalkTopics: TalkTopics
		{
			core_en = "Core_Full_E";
		};
		enableGPS = 1;
		weapons[] = {"M4A3_CCO_EP1","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular_Vector","itemGPS","glock17_EP1"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShellRed","17Rnd_9x19_glock17","17Rnd_9x19_glock17"};
		respawnWeapons[] = {"M4A3_CCO_EP1","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular_Vector","itemGPS","glock17_EP1"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShellRed","17Rnd_9x19_glock17","17Rnd_9x19_glock17"};
		languages[] = {"EN","TK"};
	};
	class CIV_Contractor2_BAF: CIV_Contractor1_BAF
	{
		model = "\ca\characters_E\Civil\Hladik\european_man_02";
		displayName = "$STR_BAF_CFGVEHICLES_PMC1";
		weapons[] = {"M4A1","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular_Vector","itemGPS","glock17_EP1"};
		respawnWeapons[] = {"M4A1","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular_Vector","itemGPS","glock17_EP1"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"Ca\characters_e\civil\hladik\data\european-man_02.rvmat","Ca\characters_E\Civil\Hladik\Data\w1_european-man_02.rvmat","Ca\characters_E\Civil\Hladik\Data\w2_european-man_02.rvmat"};
		};
	};
	class BAF_Soldier_base_EP1: SoldierWB
	{
		expansion = 2;
		identityTypes[] = {"Language_BAF","Head_BAF","BAF_Glasses"};
		faceType = "Man";
		side = 1;
		faction = "BIS_BAF";
		genericNames = "BritishMen";
		vehicleClass = "Men";
		portrait = "ca\characters_d_baf\Data\portraits\baf_soldier_CA";
		picture = "\Ca\characters\data\Ico\i_null_CA.paa";
		icon = "\Ca\characters2\data\icon\i_soldier_CA.paa";
		accuracy = 3.9;
		threat[] = {1,0.3,0.3};
		camouflage = 1.4;
		minFireTime = 10;
		cost = 40000;
		canCarryBackPack = 1;
		scope = 0;
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\characters_d_baf\Data\armour.rvmat","ca\characters_d_baf\Data\W1_armour.rvmat","ca\characters_d_baf\Data\W2_armour.rvmat","ca\characters_d_baf\Data\camo.rvmat","ca\characters_d_baf\Data\W1_camo.rvmat","ca\characters_d_baf\Data\W2_camo.rvmat"};
		};
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor = 0.7;
			};
			class HitBody: HitBody
			{
				armor = 1;
				passThrough = 0.8;
			};
		};
		hiddenSelections[] = {"Camo","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"\ca\characters_d_baf\data\camo_MTP_co.paa","\ca\characters_d_baf\data\armour_co.paa","\ca\characters_d_baf\data\equip_d_co.paa"};
		class TalkTopics: TalkTopics
		{
			core_en = "Core_Full_E";
		};
		languages[] = {"EN"};
		class EventHandlers;
		weapons[] = {"BAF_L85A2_RIS_ACOG","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","BAF_L109A1_HE","BAF_L109A1_HE","SmokeShell"};
		respawnWeapons[] = {"BAF_L85A2_RIS_ACOG","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","BAF_L109A1_HE","SmokeShell"};
	};
	class BAF_Soldier_MTP: BAF_Soldier_base_EP1
	{
		scope = 2;
		displayName = "$STR_BAF_CFGVEHICLES_BAF_SOLDIER_MTP0";
		model = "\ca\characters_d_BAF\BAF_Soldier_1_BAF";
	};
	class BAF_Soldier_DDPM: BAF_Soldier_MTP
	{
		hiddenSelectionsTextures[] = {"\ca\characters_d_baf\data\camo_DDPM_co.paa","\ca\characters_d_baf\data\armour_co.paa","\ca\characters_d_baf\data\equip_d_co.paa"};
		vehicleClass = "MenDDPM";
	};
	class BAF_Soldier_GL_MTP: BAF_Soldier_base_EP1
	{
		scope = 2;
		displayName = "$STR_BAF_CFGVEHICLES_BAF_SOLDIER_GL_MTP0";
		model = "\ca\characters_d_BAF\BAF_Soldier_gl_BAF.p3d";
		cost = 60000;
		weapons[] = {"BAF_L85A2_UGL_ACOG","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","BAF_L109A1_HE","BAF_L109A1_HE","SmokeShell","SmokeShell"};
		respawnWeapons[] = {"BAF_L85A2_UGL_ACOG","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","BAF_L109A1_HE","SmokeShell"};
	};
	class BAF_Soldier_GL_DDPM: BAF_Soldier_GL_MTP
	{
		hiddenSelectionsTextures[] = {"\ca\characters_d_baf\data\camo_DDPM_co.paa","\ca\characters_d_baf\data\armour_co.paa","\ca\characters_d_baf\data\equip_d_co.paa"};
		vehicleClass = "MenDDPM";
	};
	class BAF_Soldier_N_MTP: BAF_Soldier_base_EP1
	{
		scope = 2;
		displayName = "$STR_BAF_CFGVEHICLES_BAF_SOLDIER_N_MTP0";
		model = "\ca\characters_d_BAF\BAF_Soldier_1_BAF";
		weapons[] = {"BAF_L85A2_RIS_CWS","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnWeapons[] = {"BAF_L85A2_RIS_CWS","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class BAF_Soldier_N_DDPM: BAF_Soldier_N_MTP
	{
		hiddenSelectionsTextures[] = {"\ca\characters_d_baf\data\camo_DDPM_co.paa","\ca\characters_d_baf\data\armour_co.paa","\ca\characters_d_baf\data\equip_d_co.paa"};
		vehicleClass = "MenDDPM";
	};
	class BAF_Soldier_L_MTP: BAF_Soldier_base_EP1
	{
		scope = 2;
		displayName = "$STR_BAF_CFGVEHICLES_BAF_SOLDIER_L_MTP0";
		model = "\ca\characters_d_BAF\BAF_Soldier_light_BAF";
		weapons[] = {"BAF_L85A2_RIS_SUSAT","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};
		respawnWeapons[] = {"BAF_L85A2_RIS_SUSAT","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};
	};
	class BAF_Soldier_L_DDPM: BAF_Soldier_L_MTP
	{
		hiddenSelectionsTextures[] = {"\ca\characters_d_baf\data\camo_DDPM_co.paa","\ca\characters_d_baf\data\armour_co.paa","\ca\characters_d_baf\data\equip_d_co.paa"};
		vehicleClass = "MenDDPM";
	};
	class BAF_ASoldier_MTP: BAF_Soldier_base_EP1
	{
		scope = 2;
		displayName = "$STR_BAF_CFGVEHICLES_BAF_ASOLDIER_MTP0";
		model = "\ca\characters_d_BAF\BAF_Soldier_1_BAF";
		backpack = "BAF_AssaultPack_RifleAmmo";
	};
	class BAF_ASoldier_DDPM: BAF_ASoldier_MTP
	{
		hiddenSelectionsTextures[] = {"\ca\characters_d_baf\data\camo_DDPM_co.paa","\ca\characters_d_baf\data\armour_co.paa","\ca\characters_d_baf\data\equip_d_co.paa"};
		vehicleClass = "MenDDPM";
	};
	class BAF_Soldier_AAR_MTP: BAF_Soldier_base_EP1
	{
		scope = 2;
		displayName = "$STR_BAF_CFGVEHICLES_BAF_SOLDIER_AAR_MTP0";
		model = "\ca\characters_d_BAF\BAF_Soldier_1_BAF";
		backpack = "BAF_AssaultPack_ARAmmo";
		weapons[] = {"BAF_L85A2_RIS_holo","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		RespawnWeapons[] = {"BAF_L85A2_RIS_Holo","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class BAF_Soldier_AAR_DDPM: BAF_Soldier_AAR_MTP
	{
		hiddenSelectionsTextures[] = {"\ca\characters_d_baf\data\camo_DDPM_co.paa","\ca\characters_d_baf\data\armour_co.paa","\ca\characters_d_baf\data\equip_d_co.paa"};
		vehicleClass = "MenDDPM";
	};
	class BAF_Soldier_AMG_MTP: BAF_Soldier_base_EP1
	{
		scope = 2;
		displayName = "$STR_BAF_CFGVEHICLES_BAF_SOLDIER_AMG_MTP0";
		model = "\ca\characters_d_BAF\BAF_Soldier_1_BAF";
		backpack = "BAF_AssaultPack_MGAmmo";
		weapons[] = {"BAF_L85A2_RIS_holo","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		RespawnWeapons[] = {"BAF_L85A2_RIS_Holo","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class BAF_Soldier_AMG_DDPM: BAF_Soldier_AMG_MTP
	{
		hiddenSelectionsTextures[] = {"\ca\characters_d_baf\data\camo_DDPM_co.paa","\ca\characters_d_baf\data\armour_co.paa","\ca\characters_d_baf\data\equip_d_co.paa"};
		vehicleClass = "MenDDPM";
	};
	class BAF_Soldier_AAT_MTP: BAF_Soldier_base_EP1
	{
		scope = 2;
		displayName = "$STR_BAF_CFGVEHICLES_BAF_SOLDIER_AAT_MTP0";
		model = "\ca\characters_d_BAF\BAF_Soldier_2_BAF";
		backpack = "BAF_AssaultPack_ATAmmo";
	};
	class BAF_Soldier_AAT_DDPM: BAF_Soldier_AAT_MTP
	{
		hiddenSelectionsTextures[] = {"\ca\characters_d_baf\data\camo_DDPM_co.paa","\ca\characters_d_baf\data\armour_co.paa","\ca\characters_d_baf\data\equip_d_co.paa"};
		vehicleClass = "MenDDPM";
	};
	class BAF_Soldier_AHAT_MTP: BAF_Soldier_base_EP1
	{
		scope = 2;
		displayName = "$STR_BAF_CFGVEHICLES_BAF_SOLDIER_AHAT_MTP0";
		model = "\ca\characters_d_BAF\BAF_Soldier_2_BAF";
		backpack = "BAF_AssaultPack_HATAmmo";
		weapons[] = {"BAF_L85A2_RIS_holo","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		RespawnWeapons[] = {"BAF_L85A2_RIS_Holo","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class BAF_Soldier_AHAT_DDPM: BAF_Soldier_AHAT_MTP
	{
		hiddenSelectionsTextures[] = {"\ca\characters_d_baf\data\camo_DDPM_co.paa","\ca\characters_d_baf\data\armour_co.paa","\ca\characters_d_baf\data\equip_d_co.paa"};
		vehicleClass = "MenDDPM";
	};
	class BAF_Soldier_AAA_MTP: BAF_Soldier_base_EP1
	{
		scope = 2;
		displayName = "$STR_BAF_CFGVEHICLES_BAF_SOLDIER_AAA_MTP0";
		model = "\ca\characters_d_BAF\BAF_Soldier_2_BAF";
		backpack = "BAF_AssaultPack_HAAAmmo";
	};
	class BAF_Soldier_AAA_DDPM: BAF_Soldier_AAA_MTP
	{
		hiddenSelectionsTextures[] = {"\ca\characters_d_baf\data\camo_DDPM_co.paa","\ca\characters_d_baf\data\armour_co.paa","\ca\characters_d_baf\data\equip_d_co.paa"};
		vehicleClass = "MenDDPM";
	};
	class BAF_Soldier_Officer_MTP: BAF_Soldier_base_EP1
	{
		scope = 2;
		displayName = "$STR_BAF_CFGVEHICLES_BAF_SOLDIER_OFFICER_MTP0";
		portrait = "\ca\characters_d_baf\Data\portraits\baf_officer_CA";
		Picture = "\Ca\characters\data\Ico\i_sleader_CA.paa";
		Icon = "\Ca\characters2\data\icon\i_officer_CA.paa";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_officer"};
				speechPlural[] = {"veh_officers"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_officer_CZ"};
				speechPlural[] = {"veh_officers_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_officer_CZ4P"};
				speechPlural[] = {"veh_officers_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_officer_RU"};
				speechPlural[] = {"veh_officers_RU"};
			};
		};
		TextPlural = "$STR_DN_officers";
		TextSingular = "$STR_DN_officer";
		nameSound = "veh_officer";
		accuracy = 3.6;
		cost = 750000;
		enableGPS = 1;
		model = "\ca\characters_d_BAF\BAF_Soldier_Officer_BAF";
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor = 0.6;
			};
			class HitBody: HitBody
			{
				armor = 0.8;
				passThrough = 1;
			};
		};
		weapons[] = {"BAF_L85A2_RIS_Holo","Colt1911","NVGoggles","ItemGPS","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular_Vector"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","7Rnd_45ACP_1911","7Rnd_45ACP_1911","7Rnd_45ACP_1911","7Rnd_45ACP_1911","smokeshellyellow","smokeshellpurple","smokeshellgreen","smokeshell","smokeshellred","BAF_L109A1_HE","BAF_L109A1_HE"};
		respawnWeapons[] = {"BAF_L85A2_RIS_Holo","Colt1911","NVGoggles","ItemGPS","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular_Vector"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","7Rnd_45ACP_1911","7Rnd_45ACP_1911","smokeshellyellow","smokeshellpurple","smokeshellgreen","smokeshell","smokeshellred","BAF_L109A1_HE","BAF_L109A1_HE"};
		class TalkTopics: TalkTopics
		{
			core_ru = "Core_Full";
		};
		languages[] = {"EN","RU"};
	};
	class BAF_Soldier_Officer_DDPM: BAF_Soldier_Officer_MTP
	{
		hiddenSelectionsTextures[] = {"\ca\characters_d_baf\data\camo_DDPM_co.paa","\ca\characters_d_baf\data\armour_co.paa","\ca\characters_d_baf\data\equip_d_co.paa"};
		vehicleClass = "MenDDPM";
	};
	class BAF_Soldier_SL_MTP: BAF_Soldier_base_EP1
	{
		scope = 2;
		displayName = "$STR_BAF_CFGVEHICLES_BAF_SOLDIER_SL_MTP0";
		Picture = "\Ca\characters\data\Ico\i_sleader_CA.paa";
		Icon = "\Ca\characters2\data\icon\i_officer_CA.paa";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_officer"};
				speechPlural[] = {"veh_officers"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_officer_CZ"};
				speechPlural[] = {"veh_officers_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_officer_CZ4P"};
				speechPlural[] = {"veh_officers_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_officer_RU"};
				speechPlural[] = {"veh_officers_RU"};
			};
		};
		TextPlural = "$STR_DN_officers";
		TextSingular = "$STR_DN_officer";
		nameSound = "veh_officer";
		accuracy = 3.6;
		cost = 500000;
		enableGPS = 1;
		model = "\ca\characters_d_BAF\BAF_Soldier_Scout_BAF";
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor = 0.7;
			};
			class HitBody: HitBody
			{
				armor = 1;
				passThrough = 0.8;
			};
		};
		weapons[] = {"BAF_L85A2_RIS_ACOG","NVGoggles","ItemGPS","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular_Vector"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","BAF_L109A1_HE","BAF_L109A1_HE"};
		respawnWeapons[] = {"BAF_L85A2_RIS_ACOG","Binocular_Vector","NVGoggles","ItemGPS","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","BAF_L109A1_HE","BAF_L109A1_HE"};
	};
	class BAF_Soldier_SL_DDPM: BAF_Soldier_SL_MTP
	{
		hiddenSelectionsTextures[] = {"\ca\characters_d_baf\data\camo_DDPM_co.paa","\ca\characters_d_baf\data\armour_co.paa","\ca\characters_d_baf\data\equip_d_co.paa"};
		vehicleClass = "MenDDPM";
	};
	class BAF_Soldier_TL_MTP: BAF_Soldier_base_EP1
	{
		scope = 2;
		displayName = "$STR_BAF_CFGVEHICLES_BAF_SOLDIER_TL_MTP0";
		Picture = "\Ca\characters\data\Ico\i_tleader_CA.paa";
		Icon = "\Ca\characters2\data\icon\i_leader_CA.paa";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_officer"};
				speechPlural[] = {"veh_officers"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_officer_CZ"};
				speechPlural[] = {"veh_officers_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_officer_CZ4P"};
				speechPlural[] = {"veh_officers_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_officer_RU"};
				speechPlural[] = {"veh_officers_RU"};
			};
		};
		TextPlural = "$STR_DN_officers";
		TextSingular = "$STR_DN_officer";
		nameSound = "veh_officer";
		accuracy = 3.6;
		cost = 400000;
		model = "\ca\characters_d_BAF\BAF_Soldier_gl_BAF.p3d";
		weapons[] = {"BAF_L85A2_UGL_Holo","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular_Vector"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","BAF_L109A1_HE","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_Smoke_M203","1Rnd_Smoke_M203","1Rnd_SmokeRed_M203","1Rnd_SmokeGreen_M203"};
		respawnWeapons[] = {"BAF_L85A2_UGL_Holo","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular_Vector"};
		respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203"};
	};
	class BAF_Soldier_TL_DDPM: BAF_Soldier_TL_MTP
	{
		hiddenSelectionsTextures[] = {"\ca\characters_d_baf\data\camo_DDPM_co.paa","\ca\characters_d_baf\data\armour_co.paa","\ca\characters_d_baf\data\equip_d_co.paa"};
		vehicleClass = "MenDDPM";
	};
	class BAF_Soldier_AR_MTP: BAF_Soldier_base_EP1
	{
		scope = 2;
		displayName = "$STR_BAF_CFGVEHICLES_BAF_SOLDIER_AR_MTP0";
		picture = "\Ca\characters\data\Ico\i_null_CA.paa";
		icon = "\Ca\characters2\data\icon\i_machinegunner_CA.paa";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_mgunner"};
				speechPlural[] = {"veh_mgunners"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_mgunner_CZ"};
				speechPlural[] = {"veh_mgunners_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_mgunner_CZ4P"};
				speechPlural[] = {"veh_mgunners_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_mgunner_RU"};
				speechPlural[] = {"veh_mgunners_RU"};
			};
		};
		TextPlural = "$STR_DN_mgunners";
		TextSingular = "$STR_DN_mgunner";
		nameSound = "veh_mgunner";
		cost = 115000;
		accuracy = 3.7;
		model = "\ca\characters_d_BAF\BAF_Soldier_2_BAF";
		weapons[] = {"BAF_L110A1_Aim","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"200Rnd_556x45_L110A1","200Rnd_556x45_L110A1","200Rnd_556x45_L110A1","200Rnd_556x45_L110A1","BAF_L109A1_HE","BAF_L109A1_HE","SmokeShell","SmokeShell"};
		threat[] = {1,0.1,0.3};
		respawnWeapons[] = {"BAF_L110A1_Aim","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"200Rnd_556x45_L110A1","200Rnd_556x45_L110A1","BAF_L109A1_HE","SmokeShell"};
	};
	class BAF_Soldier_AR_DDPM: BAF_Soldier_AR_MTP
	{
		hiddenSelectionsTextures[] = {"\ca\characters_d_baf\data\camo_DDPM_co.paa","\ca\characters_d_baf\data\armour_co.paa","\ca\characters_d_baf\data\equip_d_co.paa"};
		vehicleClass = "MenDDPM";
	};
	class BAF_Soldier_MG_MTP: BAF_Soldier_base_EP1
	{
		scope = 2;
		displayName = "$STR_BAF_CFGVEHICLES_BAF_SOLDIER_MG_MTP0";
		Picture = "\Ca\characters\data\Ico\i_null_CA.paa";
		Icon = "\Ca\characters2\data\icon\i_machinegunner_CA.paa";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_mgunner"};
				speechPlural[] = {"veh_mgunners"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_mgunner_CZ"};
				speechPlural[] = {"veh_mgunners_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_mgunner_CZ4P"};
				speechPlural[] = {"veh_mgunners_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_mgunner_RU"};
				speechPlural[] = {"veh_mgunners_RU"};
			};
		};
		TextPlural = "$STR_DN_mgunners";
		TextSingular = "$STR_DN_mgunner";
		nameSound = "veh_mgunner";
		cost = 130000;
		accuracy = 3.7;
		model = "\ca\characters_d_BAF\BAF_Soldier_2_BAF";
		weapons[] = {"BAF_L7A2_GPMG","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","BAF_L109A1_HE","BAF_L109A1_HE"};
		threat[] = {1,0.1,0.6};
		respawnWeapons[] = {"BAF_L7A2_GPMG","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"100Rnd_762x51_M240","100Rnd_762x51_M240","BAF_L109A1_HE"};
	};
	class BAF_Soldier_MG_DDPM: BAF_Soldier_MG_MTP
	{
		hiddenSelectionsTextures[] = {"\ca\characters_d_baf\data\camo_DDPM_co.paa","\ca\characters_d_baf\data\armour_co.paa","\ca\characters_d_baf\data\equip_d_co.paa"};
		vehicleClass = "MenDDPM";
	};
	class BAF_Soldier_AT_MTP: BAF_Soldier_base_EP1
	{
		scope = 2;
		displayName = "$STR_BAF_CFGVEHICLES_BAF_SOLDIER_AT_MTP0";
		model = "\ca\characters_d_BAF\BAF_Soldier_2_BAF";
		picture = "\Ca\characters\data\Ico\i_null_CA.paa";
		icon = "\Ca\characters2\data\icon\i_launcher_CA.paa";
		camouflage = 2.0;
		threat[] = {1,0.8,0.1};
		cost = 150000;
		accuracy = 3.5;
		weapons[] = {"BAF_NLAW_Launcher","BAF_L85A2_RIS_SUSAT","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","BAF_L109A1_HE","NLAW","NLAW"};
		respawnWeapons[] = {"BAF_L85A2_RIS_SUSAT","NVGoggles","BAF_NLAW_Launcher","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","BAF_L109A1_HE","NLAW"};
	};
	class BAF_Soldier_AT_DDPM: BAF_Soldier_AT_MTP
	{
		hiddenSelectionsTextures[] = {"\ca\characters_d_baf\data\camo_DDPM_co.paa","\ca\characters_d_baf\data\armour_co.paa","\ca\characters_d_baf\data\equip_d_co.paa"};
		vehicleClass = "MenDDPM";
	};
	class BAF_Soldier_HAT_MTP: BAF_Soldier_base_EP1
	{
		scope = 2;
		displayName = "$STR_BAF_CFGVEHICLES_BAF_SOLDIER_HAT_MTP0";
		model = "\ca\characters_d_BAF\BAF_Soldier_2_BAF";
		picture = "\Ca\characters\data\Ico\i_null_CA.paa";
		icon = "\Ca\characters2\data\icon\i_launcher_CA.paa";
		camouflage = 2.1;
		cost = 200000;
		accuracy = 3.5;
		weapons[] = {"BAF_L85A2_RIS_Holo","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Javelin"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","BAF_L109A1_HE","Javelin"};
		threat[] = {1,1,0.1};
		respawnWeapons[] = {"BAF_L85A2_RIS_Holo","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Javelin"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","BAF_L109A1_HE","Javelin"};
	};
	class BAF_Soldier_HAT_DDPM: BAF_Soldier_HAT_MTP
	{
		hiddenSelectionsTextures[] = {"\ca\characters_d_baf\data\camo_DDPM_co.paa","\ca\characters_d_baf\data\armour_co.paa","\ca\characters_d_baf\data\equip_d_co.paa"};
		vehicleClass = "MenDDPM";
	};
	class BAF_Soldier_AA_MTP: BAF_Soldier_base_EP1
	{
		scope = 2;
		displayName = "$STR_BAF_CFGVEHICLES_BAF_SOLDIER_AA_MTP0";
		model = "\ca\characters_d_BAF\BAF_Soldier_2_BAF";
		picture = "\Ca\characters\data\Ico\i_null_CA.paa";
		icon = "\Ca\characters2\data\icon\i_launcher_CA.paa";
		camouflage = 2.1;
		cost = 200000;
		accuracy = 3.5;
		weapons[] = {"BAF_L85A2_RIS_Holo","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Stinger"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","BAF_L109A1_HE","Stinger"};
		threat[] = {1,0.1,1};
		respawnWeapons[] = {"BAF_L85A2_RIS_Holo","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Stinger"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","BAF_L109A1_HE","Stinger"};
	};
	class BAF_Soldier_AA_DDPM: BAF_Soldier_AA_MTP
	{
		hiddenSelectionsTextures[] = {"\ca\characters_d_baf\data\camo_DDPM_co.paa","\ca\characters_d_baf\data\armour_co.paa","\ca\characters_d_baf\data\equip_d_co.paa"};
		vehicleClass = "MenDDPM";
	};
	class BAF_Soldier_Marksman_MTP: BAF_Soldier_base_EP1
	{
		scope = 2;
		model = "\ca\characters_d_BAF\BAF_Soldier_Scout_BAF";
		picture = "\Ca\characters\data\Ico\i_null_CA.paa";
		displayName = "$STR_BAF_CFGVEHICLES_BAF_SOLDIER_MARKSMAN_MTP0";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_Sniper"};
				speechPlural[] = {"veh_Snipers"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_Sniper_CZ"};
				speechPlural[] = {"veh_Snipers_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_Sniper_CZ4P"};
				speechPlural[] = {"veh_Snipers_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_Sniper_RU"};
				speechPlural[] = {"veh_Snipers_RU"};
			};
		};
		TextPlural = "$STR_DN_Snipers";
		TextSingular = "$STR_DN_Sniper";
		nameSound = "veh_Sniper";
		accuracy = 3.9;
		camouflage = 1.0;
		cost = 250000;
		threat[] = {1,0.1,0.1};
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor = 0.7;
			};
			class HitBody: HitBody
			{
				armor = 1;
				passThrough = 0.8;
			};
		};
		weapons[] = {"BAF_L86A2_ACOG","NVGoggles","Binocular_Vector","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","BAF_L109A1_HE","BAF_L109A1_HE","SmokeShell","SmokeShellRed"};
		respawnWeapons[] = {"BAF_L86A2_ACOG","NVGoggles","Binocular_Vector","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","BAF_L109A1_HE","SmokeShell"};
	};
	class BAF_Soldier_Marksman_DDPM: BAF_Soldier_Marksman_MTP
	{
		hiddenSelectionsTextures[] = {"\ca\characters_d_baf\data\camo_DDPM_co.paa","\ca\characters_d_baf\data\armour_co.paa","\ca\characters_d_baf\data\equip_d_co.paa"};
		vehicleClass = "MenDDPM";
	};
	class BAF_Soldier_scout_MTP: BAF_Soldier_base_EP1
	{
		scope = 2;
		model = "\ca\characters_d_BAF\BAF_Soldier_Scout_BAF";
		picture = "\Ca\characters\data\Ico\i_null_CA.paa";
		displayName = "$STR_BAF_CFGVEHICLES_BAF_SOLDIER_SCOUT_MTP0";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_Sniper"};
				speechPlural[] = {"veh_Snipers"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_Sniper_CZ"};
				speechPlural[] = {"veh_Snipers_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_Sniper_CZ4P"};
				speechPlural[] = {"veh_Snipers_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_Sniper_RU"};
				speechPlural[] = {"veh_Snipers_RU"};
			};
		};
		TextPlural = "$STR_DN_Snipers";
		TextSingular = "$STR_DN_Sniper";
		nameSound = "veh_Sniper";
		accuracy = 3.9;
		camouflage = 1.0;
		cost = 250000;
		threat[] = {1,0.1,0.1};
		enableGPS = 1;
		backpack = "BAF_AssaultPack_LRRAmmo";
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor = 0.7;
			};
			class HitBody: HitBody
			{
				armor = 1;
				passThrough = 0.8;
			};
		};
		weapons[] = {"BAF_LRR_scoped","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular_Vector","ItemGPS","Colt1911"};
		magazines[] = {"5Rnd_86x70_L115A1","5Rnd_86x70_L115A1","5Rnd_86x70_L115A1","5Rnd_86x70_L115A1","5Rnd_86x70_L115A1","5Rnd_86x70_L115A1","5Rnd_86x70_L115A1","5Rnd_86x70_L115A1","7Rnd_45ACP_1911","7Rnd_45ACP_1911","7Rnd_45ACP_1911","7Rnd_45ACP_1911","smokeshell","smokeshellred","smokeshellgreen","BAF_L109A1_HE"};
		respawnWeapons[] = {"BAF_LRR_scoped","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular_Vector","ItemGPS","Colt1911"};
		respawnMagazines[] = {"5Rnd_86x70_L115A1","5Rnd_86x70_L115A1","5Rnd_86x70_L115A1","5Rnd_86x70_L115A1","7Rnd_45ACP_1911","7Rnd_45ACP_1911","smokeshell","BAF_L109A1_HE"};
	};
	class BAF_Soldier_scout_DDPM: BAF_Soldier_scout_MTP
	{
		hiddenSelectionsTextures[] = {"\ca\characters_d_baf\data\camo_DDPM_co.paa","\ca\characters_d_baf\data\armour_co.paa","\ca\characters_d_baf\data\equip_d_co.paa"};
		vehicleClass = "MenDDPM";
	};
	class BAF_Soldier_Sniper_MTP: BAF_Soldier_base_EP1
	{
		scope = 2;
		displayName = "$STR_BAF_CFGVEHICLES_BAF_SOLDIER_SNIPER_MTP0";
		picture = "\Ca\characters\data\Ico\i_null_CA.paa";
		model = "\ca\characters_e\Ghillie\Ghillie_Overall";
		portrait = "\Ca\characters\data\portraits\comBarHead_common_sniper_ca";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_Sniper"};
				speechPlural[] = {"veh_Snipers"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_Sniper_CZ"};
				speechPlural[] = {"veh_Snipers_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_Sniper_CZ4P"};
				speechPlural[] = {"veh_Snipers_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_Sniper_RU"};
				speechPlural[] = {"veh_Snipers_RU"};
			};
		};
		TextPlural = "$STR_DN_Snipers";
		TextSingular = "$STR_DN_Sniper";
		nameSound = "veh_Sniper";
		accuracy = 3.9;
		camouflage = 0.5;
		cost = 350000;
		threat[] = {1,0.3,0.3};
		enableGPS = 1;
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor = 0.6;
			};
			class HitBody: HitBody
			{
				armor = 0.8;
				passThrough = 1;
			};
		};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\ca\characters_E\Ghillie\Data\ghillie_overall1_desert_co.paa"};
		weapons[] = {"BAF_LRR_scoped","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular_Vector","ItemGPS","Colt1911"};
		magazines[] = {"5Rnd_86x70_L115A1","5Rnd_86x70_L115A1","5Rnd_86x70_L115A1","5Rnd_86x70_L115A1","5Rnd_86x70_L115A1","5Rnd_86x70_L115A1","5Rnd_86x70_L115A1","5Rnd_86x70_L115A1","7Rnd_45ACP_1911","7Rnd_45ACP_1911","7Rnd_45ACP_1911","7Rnd_45ACP_1911","smokeshell","smokeshellred","smokeshellgreen"};
		respawnWeapons[] = {"BAF_LRR_scoped","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular_Vector","ItemGPS","Colt1911"};
		respawnMagazines[] = {"5Rnd_86x70_L115A1","5Rnd_86x70_L115A1","5Rnd_86x70_L115A1","5Rnd_86x70_L115A1","7Rnd_45ACP_1911","7Rnd_45ACP_1911","smokeshell"};
	};
	class BAF_Soldier_SniperH_MTP: BAF_Soldier_Sniper_MTP
	{
		displayName = "$STR_BAF_CFGVEHICLES_BAF_SOLDIER_SNIPERH_MTP0";
		weapons[] = {"BAF_AS50_scoped","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular_Vector","ItemGPS","Colt1911"};
		magazines[] = {"5Rnd_127x99_AS50","5Rnd_127x99_AS50","5Rnd_127x99_AS50","5Rnd_127x99_AS50","5Rnd_127x99_AS50","5Rnd_127x99_AS50","5Rnd_127x99_AS50","5Rnd_127x99_AS50","7Rnd_45ACP_1911","7Rnd_45ACP_1911","7Rnd_45ACP_1911","7Rnd_45ACP_1911","smokeshell","smokeshellred","smokeshellgreen"};
		respawnWeapons[] = {"BAF_AS50_scoped","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular_Vector","ItemGPS","Colt1911"};
		respawnMagazines[] = {"5Rnd_127x99_AS50","5Rnd_127x99_AS50","5Rnd_127x99_AS50","5Rnd_127x99_AS50","7Rnd_45ACP_1911","7Rnd_45ACP_1911","smokeshell"};
	};
	class BAF_Soldier_SniperN_MTP: BAF_Soldier_SniperH_MTP
	{
		displayName = "$STR_BAF_CFGVEHICLES_BAF_SOLDIER_SNIPERN_MTP0";
		weapons[] = {"BAF_AS50_TWS","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular_Vector","ItemGPS","Colt1911"};
		respawnWeapons[] = {"BAF_AS50_TWS","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular_Vector","ItemGPS","Colt1911"};
	};
	class BAF_Soldier_spotter_MTP: BAF_Soldier_base_EP1
	{
		scope = 2;
		displayName = "$STR_BAF_CFGVEHICLES_BAF_SOLDIER_SPOTTER_MTP0";
		picture = "\Ca\characters\data\Ico\i_null_CA.paa";
		model = "\ca\characters_e\Ghillie\Ghillie_Overall";
		portrait = "\Ca\characters\data\portraits\comBarHead_common_sniper_ca";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_Sniper"};
				speechPlural[] = {"veh_Snipers"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_Sniper_CZ"};
				speechPlural[] = {"veh_Snipers_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_Sniper_CZ4P"};
				speechPlural[] = {"veh_Snipers_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_Sniper_RU"};
				speechPlural[] = {"veh_Snipers_RU"};
			};
		};
		TextPlural = "$STR_DN_Snipers";
		TextSingular = "$STR_DN_Sniper";
		nameSound = "veh_Sniper";
		accuracy = 3.9;
		camouflage = 0.5;
		cost = 350000;
		threat[] = {1,0.3,0.3};
		enableGPS = 1;
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\ca\characters_E\Ghillie\Data\ghillie_overall1_desert_co.paa"};
		weapons[] = {"BAF_L85A2_RIS_ACOG","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular_Vector","ItemGPS"};
		respawnWeapons[] = {"BAF_L85A2_RIS_ACOG","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular_Vector","ItemGPS"};
	};
	class BAF_Soldier_spotterN_MTP: BAF_Soldier_spotter_MTP
	{
		displayName = "$STR_BAF_CFGVEHICLES_BAF_SOLDIER_SPOTTERN_MTP0";
		weapons[] = {"BAF_L85A2_RIS_CWS","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular_Vector","ItemGPS"};
		respawnWeapons[] = {"BAF_L85A2_RIS_CWS","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular_Vector","ItemGPS"};
	};
	class BAF_Pilot_MTP: BAF_Soldier_base_EP1
	{
		model = "\ca\characters_d_BAF\BAF_Pilot_BAF";
		accuracy = 3.2;
		camouflage = 1.2;
		cost = 20000;
		portrait = "\Ca\characters\data\portraits\comBarHead_usmc_pilot_ca";
		scope = 2;
		displayName = "$STR_BAF_CFGVEHICLES_BAF_PILOT_MTP0";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_pilot"};
				speechPlural[] = {"veh_pilots"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_pilot_CZ"};
				speechPlural[] = {"veh_pilots_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_pilot_CZ4P"};
				speechPlural[] = {"veh_pilots_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_pilot_RU"};
				speechPlural[] = {"veh_pilots_RU"};
			};
		};
		TextPlural = "$STR_DN_pilots";
		TextSingular = "$STR_DN_pilot";
		nameSound = "veh_pilot";
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor = 0.7;
			};
			class HitBody: HitBody
			{
				armor = 0.8;
				passThrough = 1;
			};
		};
		weapons[] = {"BAF_L85A2_RIS_Holo","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular"};
		respawnWeapons[] = {"BAF_L85A2_RIS_Holo","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular"};
	};
	class BAF_Pilot_DDPM: BAF_Pilot_MTP
	{
		hiddenSelectionsTextures[] = {"\ca\characters_d_baf\data\camo_DDPM_co.paa","\ca\characters_d_baf\data\armour_co.paa","\ca\characters_d_baf\data\equip_d_co.paa"};
		vehicleClass = "MenDDPM";
	};
	class BAF_crewman_MTP: BAF_Soldier_base_EP1
	{
		model = "\ca\characters_d_BAF\BAF_Soldier_Crewman_BAF";
		accuracy = 3.4;
		camouflage = 1.4;
		cost = 20000;
		portrait = "\ca\characters_d_baf\Data\portraits\baf_crewman_CA";
		scope = 2;
		displayName = "$STR_BAF_CFGVEHICLES_BAF_CREWMAN_MTP0";
		weapons[] = {"BAF_L85A2_RIS_SUSAT","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnWeapons[] = {"BAF_L85A2_RIS_SUSAT","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor = 0.6;
			};
			class HitBody: HitBody
			{
				armor = 0.9;
				passThrough = 1;
			};
		};
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_crew"};
				speechPlural[] = {"veh_crews"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_crew_CZ"};
				speechPlural[] = {"veh_crews_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_crew_CZ4P"};
				speechPlural[] = {"veh_crews_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_crew_RU"};
				speechPlural[] = {"veh_crews_RU"};
			};
		};
		TextPlural = "$STR_DN_crews";
		TextSingular = "$STR_DN_crew";
		nameSound = "veh_crew";
	};
	class BAF_crewman_DDPM: BAF_crewman_MTP
	{
		hiddenSelectionsTextures[] = {"\ca\characters_d_baf\data\camo_DDPM_co.paa","\ca\characters_d_baf\data\armour_co.paa","\ca\characters_d_baf\data\equip_d_co.paa"};
		vehicleClass = "MenDDPM";
	};
	class BAF_Soldier_Medic_MTP: BAF_Soldier_base_EP1
	{
		scope = 2;
		displayName = "$STR_BAF_CFGVEHICLES_BAF_SOLDIER_MEDIC_MTP0";
		model = "\ca\characters_d_BAF\BAF_Soldier_Medic_BAF";
		picture = "\Ca\characters\data\Ico\i_Med_CA.paa";
		Icon = "\Ca\characters2\data\icon\i_medic_CA.paa";
		accuracy = 3.7;
		cost = 100000;
		attendant = 1;
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_Medic"};
				speechPlural[] = {"veh_Medics"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_Medic_CZ"};
				speechPlural[] = {"veh_Medics_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_Medic_CZ4P"};
				speechPlural[] = {"veh_Medics_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_Medic_RU"};
				speechPlural[] = {"veh_Medics_RU"};
			};
		};
		TextPlural = "$STR_DN_Medics";
		TextSingular = "$STR_DN_Medic";
		nameSound = "veh_Medic";
		weaponSlots = 1583175;
		weapons[] = {"BAF_L85A2_RIS_SUSAT","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnWeapons[] = {"BAF_L85A2_RIS_SUSAT","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		canCarryBackPack = 0;
	};
	class BAF_Soldier_Medic_DDPM: BAF_Soldier_Medic_MTP
	{
		hiddenSelectionsTextures[] = {"\ca\characters_d_baf\data\camo_DDPM_co.paa","\ca\characters_d_baf\data\armour_co.paa","\ca\characters_d_baf\data\equip_d_co.paa"};
		vehicleClass = "MenDDPM";
	};
	class BAF_Soldier_FAC_MTP: BAF_Soldier_base_EP1
	{
		scope = 2;
		accuracy = 3.9;
		model = "\ca\characters_d_BAF\BAF_Soldier_gl_BAF.p3d";
		displayName = "$STR_BAF_CFGVEHICLES_BAF_SOLDIER_FAC_MTP0";
		backpack = "BAF_AssaultPack_FAC";
		enableGPS = 1;
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor = 0.7;
			};
			class HitBody: HitBody
			{
				armor = 1;
				passThrough = 0.8;
			};
		};
		weapons[] = {"BAF_L85A2_UGL_Holo","NVGoggles","ItemGPS","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Laserdesignator"};
		respawnWeapons[] = {"BAF_L85A2_UGL_Holo","NVGoggles","ItemGPS","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Laserdesignator"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","BAF_L109A1_HE","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_Smoke_M203","1Rnd_Smoke_M203","1Rnd_SmokeRed_M203","1Rnd_SmokeGreen_M203","Laserbatteries","Laserbatteries"};
		respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","Laserbatteries","Laserbatteries"};
	};
	class BAF_Soldier_FAC_DDPM: BAF_Soldier_FAC_MTP
	{
		hiddenSelectionsTextures[] = {"\ca\characters_d_baf\data\camo_DDPM_co.paa","\ca\characters_d_baf\data\armour_co.paa","\ca\characters_d_baf\data\equip_d_co.paa"};
		vehicleClass = "MenDDPM";
	};
	class BAF_Soldier_EN_MTP: BAF_Soldier_base_EP1
	{
		scope = 2;
		accuracy = 3.9;
		model = "\ca\characters_d_BAF\BAF_Soldier_Engineer_BAF";
		displayName = "$STR_BAF_CFGVEHICLES_BAF_SOLDIER_EN_MTP0";
		picture = "\ca\characters_d_baf\Data\i_eng_ca.paa";
		threat[] = {1,0.5,0.1};
		canDeactivateMines = 1;
		canCarryBackPack = 0;
		engineer = 1;
		weapons[] = {"BAF_L85A2_RIS_SUSAT","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnWeapons[] = {"BAF_L85A2_RIS_SUSAT","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","BAF_L109A1_HE","BAF_L109A1_HE","SmokeShell","PipeBomb"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","PipeBomb","BAF_L109A1_HE","SmokeShell"};
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor = 0.7;
			};
			class HitBody: HitBody
			{
				armor = 1;
				passThrough = 0.8;
			};
		};
	};
	class BAF_Soldier_EN_DDPM: BAF_Soldier_EN_MTP
	{
		hiddenSelectionsTextures[] = {"\ca\characters_d_baf\data\camo_DDPM_co.paa","\ca\characters_d_baf\data\armour_co.paa","\ca\characters_d_baf\data\equip_d_co.paa"};
		vehicleClass = "MenDDPM";
	};
};
//};

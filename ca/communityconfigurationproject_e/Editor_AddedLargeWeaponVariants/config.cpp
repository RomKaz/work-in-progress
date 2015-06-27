////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:13:58 2014 : Source 'file' date Fri Oct 31 06:13:58 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : Editor_AddedLargeWeaponVariants\config.bin{
class cfgPatches
{
	class CA_CommunityConfigurationProject_E_Editor_AddedLargeWeaponVariants
	{
		units[] = {};
		weapons[] = {"MG36_Large","MG36_camo_Large","RPK_74_Large","m8_SAW_Large","BAF_AS50_scoped_Large","BAF_AS50_TWS_Large","PMC_AS50_scoped_Large","PMC_AS50_TWS_Large"};
		requiredVersion = 0.1;
		requiredAddons[] = {"CA_CommunityConfigurationProject_E"};
	};
};
class CfgWeapons
{
	class Rifle;
	class G36C: Rifle{};
	class MG36: G36C{};
	class MG36_camo: MG36{};
	class AK_BASE: Rifle{};
	class AK_74: AK_BASE{};
	class RPK_74: AK_74{};
	class m8_base: Rifle{};
	class m8_sharpshooter: m8_base{};
	class m8_SAW: m8_sharpshooter{};
	class BAF_AS50_scoped: Rifle{};
	class BAF_AS50_TWS: BAF_AS50_scoped{};
	class PMC_AS50_scoped: BAF_AS50_scoped{};
	class PMC_AS50_TWS: BAF_AS50_TWS{};
	class MG36_Large: MG36
	{
		type = "1 + 4";
	};
	class MG36_camo_Large: MG36_camo
	{
		type = "1 + 4";
	};
	class RPK_74_Large: RPK_74
	{
		type = "1 + 4";
	};
	class m8_SAW_Large: m8_SAW
	{
		type = "1 + 4";
	};
	class BAF_AS50_scoped_Large: BAF_AS50_scoped
	{
		type = "1 + 4";
	};
	class BAF_AS50_TWS_Large: BAF_AS50_TWS
	{
		type = "1 + 4";
	};
	class PMC_AS50_scoped_Large: PMC_AS50_scoped
	{
		type = "1 + 4";
	};
	class PMC_AS50_TWS_Large: PMC_AS50_TWS
	{
		type = "1 + 4";
	};
};
//};

////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:14:04 2014 : Source 'file' date Fri Oct 31 06:14:04 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : Visual_FixedUnitTypeIconsBasedOnWeaponry\config.bin{
class cfgPatches
{
	class CA_CommunityConfigurationProject_E_Visual_FixedUnitTypeIconsBasedOnWeaponry
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CA_CommunityConfigurationProject_E"};
	};
};
class CfgWeapons
{
	class Launcher;
	class Rifle;
	class AKS_BASE;
	class SCAR_H_Base;
	class G36C;
	class AK_74;
	class m8_sharpshooter;
	class M4A1;
	class MetisLauncher: Launcher
	{
		UiPicture = "\CA\weapons\data\Ico\i_at_CA.paa";
	};
	class M14_EP1: Rifle
	{
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	};
	class LeeEnfield: Rifle
	{
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	};
	class AKS_74_pso: AKS_BASE
	{
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	};
	class MG36: G36C
	{
		UiPicture = "\CA\weapons\data\Ico\i_mg_CA.paa";
	};
	class RPK_74: AK_74
	{
		UiPicture = "\CA\weapons\data\Ico\i_mg_CA.paa";
	};
	class m8_SAW: m8_sharpshooter
	{
		UiPicture = "\CA\weapons\data\Ico\i_mg_CA.paa";
	};
	class VSS_vintorez: Rifle
	{
		UiPicture = "\CA\weapons\data\Ico\i_sniper_CA.paa";
	};
	class M4SPR: M4A1
	{
		UiPicture = "\CA\weapons\data\Ico\i_sniper_CA.paa";
	};
	class SCAR_H_LNG_Sniper: SCAR_H_Base
	{
		UiPicture = "\CA\weapons\data\Ico\i_sniper_CA.paa";
	};
	class SCAR_H_LNG_Sniper_SD: SCAR_H_Base
	{
		UiPicture = "\CA\weapons\data\Ico\i_sniper_CA.paa";
	};
	class BAF_L86A2_ACOG: Rifle
	{
		UiPicture = "\CA\weapons\data\Ico\i_sniper_CA.paa";
	};
};
//};

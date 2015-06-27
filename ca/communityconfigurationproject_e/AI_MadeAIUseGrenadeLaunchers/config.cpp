////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:13:56 2014 : Source 'file' date Fri Oct 31 06:13:56 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : AI_MadeAIUseGrenadeLaunchers\config.bin{
class cfgPatches
{
	class CA_CommunityConfigurationProject_E_AI_MadeAIUseGrenadeLaunchers
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CA_CommunityConfigurationProject_E"};
	};
};
class CfgWeapons
{
	class RifleCore;
	class GrenadeLauncher;
	class Rifle: RifleCore
	{
		class M203Muzzle: GrenadeLauncher
		{
			minRangeProbab = 0;
			midRangeProbab = 0;
			maxRangeProbab = 0;
		};
		class M203Muzzle_AI: M203Muzzle
		{
			cameraDir = "";
			memoryPointCamera = "";
			showToPlayer = 0;
			minRange = 40;
			minRangeProbab = 0.25;
			midRange = 200;
			midRangeProbab = 0.4;
			maxRange = 400;
			maxRangeProbab = 0.2;
		};
	};
	class M16_base: Rifle
	{
		class M203Muzzle: M203Muzzle
		{
			minRangeProbab = 0;
			midRangeProbab = 0;
			maxRangeProbab = 0;
		};
	};
	class M16A2: M16_base{};
	class M16A2GL: M16A2
	{
		muzzles[] = {"this","M203Muzzle","M203Muzzle_AI"};
	};
	class m16a4: M16A2{};
	class M16A4_GL: m16a4
	{
		muzzles[] = {"this","M203Muzzle","M203Muzzle_AI"};
	};
	class M4A1: M16_base{};
	class M4A1_RCO_GL: M4A1
	{
		muzzles[] = {"M4_ACOG_Muzzle","M203Muzzle","M203Muzzle_AI"};
		class M4_ACOG_Muzzle: M4A1{};
	};
	class M4A1_Aim: M4A1{};
	class M4A1_AIM_SD_camo: M4A1_Aim{};
	class M4A1_HWS_GL_SD_Camo: M4A1_AIM_SD_camo
	{
		muzzles[] = {"this","M203Muzzle","M203Muzzle_AI"};
	};
	class M4A1_HWS_GL: M4A1_RCO_GL
	{
		muzzles[] = {"this","M203Muzzle","M203Muzzle_AI"};
	};
	class AK_BASE: Rifle
	{
		class GP25Muzzle: GrenadeLauncher
		{
			minRangeProbab = 0;
			midRangeProbab = 0;
			maxRangeProbab = 0;
		};
		class GP25Muzzle_AI: GP25Muzzle
		{
			cameraDir = "";
			memoryPointCamera = "";
			showToPlayer = 0;
			minRange = 40;
			minRangeProbab = 0.25;
			midRange = 200;
			midRangeProbab = 0.4;
			maxRange = 400;
			maxRangeProbab = 0.2;
		};
	};
	class AK_74_GL: AK_BASE
	{
		muzzles[] = {"this","GP25Muzzle","GP25Muzzle_AI"};
	};
	class AK_107_BASE: AK_BASE{};
	class AK_107_GL_kobra: AK_107_BASE
	{
		muzzles[] = {"this","GP25Muzzle","GP25Muzzle_AI"};
	};
	class m8_base: Rifle
	{
		class XM320Muzzle: M203Muzzle
		{
			minRangeProbab = 0;
			midRangeProbab = 0;
			maxRangeProbab = 0;
		};
		class XM320Muzzle_AI: XM320Muzzle
		{
			cameraDir = "";
			memoryPointCamera = "";
			showToPlayer = 0;
			minRange = 40;
			minRangeProbab = 0.25;
			midRange = 200;
			midRangeProbab = 0.4;
			maxRange = 400;
			maxRangeProbab = 0.2;
		};
	};
	class m8_carbineGL: m8_base
	{
		muzzles[] = {"this","XM320Muzzle","XM320Muzzle_AI"};
	};
	class BAF_L17_40mm: GrenadeLauncher{};
	class L85A2_base_BAF: Rifle
	{
		class BAF_L17_40mm: BAF_L17_40mm
		{
			minRangeProbab = 0;
			midRangeProbab = 0;
			maxRangeProbab = 0;
		};
		class BAF_L17_40mm_AI: BAF_L17_40mm
		{
			cameraDir = "";
			memoryPointCamera = "";
			showToPlayer = 0;
			minRange = 40;
			minRangeProbab = 0.25;
			midRange = 200;
			midRangeProbab = 0.4;
			maxRange = 400;
			maxRangeProbab = 0.2;
		};
	};
	class BAF_L85A2_RIS_Holo: L85A2_base_BAF{};
	class BAF_L85A2_UGL_Holo: BAF_L85A2_RIS_Holo
	{
		muzzles[] = {"this","BAF_L17_40mm","BAF_L17_40mm_AI"};
	};
	class BAF_L85A2_RIS_SUSAT: L85A2_base_BAF{};
	class BAF_L85A2_UGL_SUSAT: BAF_L85A2_RIS_SUSAT
	{
		muzzles[] = {"this","BAF_L17_40mm","BAF_L17_40mm_AI"};
	};
	class BAF_L85A2_RIS_ACOG: L85A2_base_BAF{};
	class BAF_L85A2_UGL_ACOG: BAF_L85A2_RIS_ACOG
	{
		muzzles[] = {"this","BAF_L17_40mm","BAF_L17_40mm_AI"};
	};
	class M4A3_CCO_EP1: M16_base{};
	class M4A3_RCO_GL_EP1: M4A3_CCO_EP1
	{
		muzzles[] = {"this","M203Muzzle","M203Muzzle_AI"};
	};
	class SCAR_Base: M16_base
	{
		class EGLMMuzzle: M203Muzzle
		{
			minRangeProbab = 0;
			midRangeProbab = 0;
			maxRangeProbab = 0;
		};
		class EGLMMuzzle_AI: EGLMMuzzle
		{
			cameraDir = "";
			memoryPointCamera = "";
			showToPlayer = 0;
			minRange = 40;
			minRangeProbab = 0.25;
			midRange = 200;
			midRangeProbab = 0.4;
			maxRange = 400;
			maxRangeProbab = 0.2;
		};
	};
	class SCAR_L_Base: SCAR_Base{};
	class SCAR_L_STD_Mk4CQT: SCAR_L_Base{};
	class SCAR_L_STD_EGLM_RCO: SCAR_L_STD_Mk4CQT
	{
		muzzles[] = {"this","EGLMMuzzle","EGLMMuzzle_AI"};
	};
	class SCAR_L_CQC: SCAR_L_Base{};
	class SCAR_L_CQC_EGLM_Holo: SCAR_L_CQC
	{
		muzzles[] = {"this","EGLMMuzzle","EGLMMuzzle_AI"};
	};
	class SCAR_H_Base: SCAR_Base{};
	class SCAR_H_CQC_CCO: SCAR_H_Base{};
	class SCAR_H_STD_EGLM_Spect: SCAR_H_CQC_CCO
	{
		muzzles[] = {"this","EGLMMuzzle","EGLMMuzzle_AI"};
	};
	class CZ805_A1_ACR: Rifle{};
	class CZ805_A1_GL_ACR: CZ805_A1_ACR
	{
		muzzles[] = {"this","M203Muzzle","M203Muzzle_AI"};
		class M203Muzzle: M203Muzzle
		{
			minRangeProbab = 0;
			midRangeProbab = 0;
			maxRangeProbab = 0;
		};
	};
	class CZ805_B_GL_ACR: CZ805_A1_ACR
	{
		muzzles[] = {"this","M203Muzzle","M203Muzzle_AI"};
		class M203Muzzle: M203Muzzle
		{
			minRangeProbab = 0;
			midRangeProbab = 0;
			maxRangeProbab = 0;
		};
	};
	class GrenadeLauncher_EP1: Rifle{};
	class M32_EP1: GrenadeLauncher_EP1
	{
		muzzles[] = {"this","M32_EP1_AI"};
		minRangeProbab = 0;
		midRangeProbab = 0;
		maxRangeProbab = 0;
		class M32_EP1_AI: GrenadeLauncher_EP1
		{
			cameraDir = "";
			memoryPointCamera = "";
			showToPlayer = 0;
			minRange = 40;
			minRangeProbab = 0.25;
			midRange = 200;
			midRangeProbab = 0.4;
			maxRange = 400;
			maxRangeProbab = 0.2;
		};
	};
	class M79_EP1: GrenadeLauncher_EP1
	{
		muzzles[] = {"this","M79_EP1_AI"};
		minRangeProbab = 0;
		midRangeProbab = 0;
		maxRangeProbab = 0;
		class M79_EP1_AI: GrenadeLauncher_EP1
		{
			cameraDir = "";
			memoryPointCamera = "";
			showToPlayer = 0;
			minRange = 40;
			minRangeProbab = 0.25;
			midRange = 200;
			midRangeProbab = 0.4;
			maxRange = 400;
			maxRangeProbab = 0.2;
		};
	};
	class Mk13_EP1: GrenadeLauncher_EP1
	{
		muzzles[] = {"this","Mk13_EP1_AI"};
		minRangeProbab = 0;
		midRangeProbab = 0;
		maxRangeProbab = 0;
		class Mk13_EP1_AI: GrenadeLauncher_EP1
		{
			cameraDir = "";
			memoryPointCamera = "";
			showToPlayer = 0;
			minRange = 40;
			minRangeProbab = 0.25;
			midRange = 200;
			midRangeProbab = 0.4;
			maxRange = 400;
			maxRangeProbab = 0.2;
		};
	};
};
//};

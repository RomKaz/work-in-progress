////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:11:59 2014 : Source 'file' date Fri Oct 31 06:11:59 2014
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

//Class structures_e : Misc\Misc_Lamp\config.bin{
class CfgPatches
{
	class CAStructures_E_Misc_Misc_Lamp
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {"CAStructures_E_Misc"};
	};
};
class CfgNonAIVehicles
{
	class StreetLamp
	{
		class Reflectors
		{
			class LampLight;
		};
	};
	class StreetLamp_EP1: StreetLamp
	{
		class Reflectors{};
		class HitPoints
		{
			class HitBulb
			{
				armor = 1;
				material = -1;
				name = "lampa";
				passThrough = 0;
			};
		};
		class AnimationSources
		{
			class HitBulb
			{
				source = "Hit";
				hitpoint = "HitBulb";
				raw = 1;
			};
		};
	};
	class Land_Lamp_Cable_EP1: StreetLamp_EP1
	{
		model = "\ca\Structures_E\Misc\Misc_Lamp\Lamp_Cable_EP1";
	};
	class Land_Lamp_Street1_decor_EP1: StreetLamp_EP1
	{
		model = "\ca\Structures_E\Misc\Misc_Lamp\Lamp_Street1_decor_EP1";
	};
	class Land_Lamp_Small_EP1: StreetLamp_EP1
	{
		model = "\ca\Structures_E\Misc\Misc_Lamp\Lamp_Small_EP1";
		colorDiffuse[] = {0.82,0.75,0.33,0.0};
		colorAmbient[] = {0.2,0.15,0.05,0.0};
		brightness = 0.08;
	};
	class Land_Lamp_Street1_EP1: StreetLamp_EP1
	{
		model = "\ca\Structures_E\Misc\Misc_Lamp\Lamp_Street1_EP1";
		colorDiffuse[] = {1,0.65,0.2,0.0};
		colorAmbient[] = {0.2,0.1,0.0,0.0};
		brightness = 0.2;
	};
	class Land_Lamp_Street2_EP1: StreetLamp_EP1
	{
		model = "\ca\Structures_E\Misc\Misc_Lamp\Lamp_Street2_EP1";
		colorDiffuse[] = {1,0.65,0.2,0.0};
		colorAmbient[] = {0.2,0.1,0.0,0.0};
		brightness = 0.33;
	};
	class Land_Lampa_Ind_EP1: StreetLamp_EP1
	{
		model = "\ca\Structures_E\Misc\Misc_Lamp\Lampa_Ind_EP1";
		colorDiffuse[] = {0.82,0.75,0.33,0.0};
		colorAmbient[] = {0.2,0.15,0.05,0.0};
		brightness = 0.12;
	};
};
//};

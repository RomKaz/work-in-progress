////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:13:11 2014 : Source 'file' date Fri Oct 31 06:13:11 2014
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

//Class tracked_e : BMP\config.bin{
class CfgPatches
{
	class CATracked_E_BMP2
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.04;
		requiredAddons[] = {"CATracked_E","CATracked"};
	};
};
class CfgVehicles
{
	class Tracked_APC;
	class BMP2_Base: Tracked_APC
	{
		model = "ca\Tracked_E\BMP\BMP2";
		tracksSpeed = 2;
		class Reflectors
		{
			class LeftLight
			{
				color[] = {0.8,0.8,1.0,1.0};
				ambient[] = {0.07,0.07,0.07,1.0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				brightness = 1.0;
			};
			class RightLight: LeftLight
			{
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
			};
			class GunnerLight: LeftLight
			{
				position = "gunner svetlo";
				direction = "konec gunner svetlo";
				hitpoint = "gunner svetlo";
				selection = "gunner svetlo";
			};
			delete CommanderLight;
		};
		aggregateReflectors[] = {{ "GunnerLight" },{ "LeftLight","RightLight" }};
	};
	class BMP2_HQ_Base: BMP2_Base
	{
		model = "ca\Tracked_E\BMP\BMP2_HQ";
		class AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "PKT";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "PKT";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "PKT";
			};
		};
	};
	class BMP2_Ambul_Base: BMP2_Base
	{
		model = "ca\Tracked_E\BMP\BMP2_ambulance";
	};
};
//};

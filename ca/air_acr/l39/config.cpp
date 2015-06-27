////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:00:44 2014 : Source 'file' date Fri Oct 31 06:00:44 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=8
enum {
	stabilizedinaxisx = 1,
	compartment1 = 1,
	stabilizedinaxisy = 2,
	compartment2 = 2,
	stabilizedinaxesboth = 3,
	compartment3 = 4,
	compartment4 = 8,
	stabilizedinaxesnone = 0
};

//Class air_acr : l39\config.bin{
class CfgPatches
{
	class CAAir_ACR_L39
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.5;
		requiredAddons[] = {"CAAir_ACR"};
	};
};
class CfgVehicles
{
	class L39_base;
	class L39_2_ACR: L39_base
	{
		expansion = 3;
		scope = 2;
		side = 1;
		faction = "BIS_CZ";
		crew = "CZ_Soldier_Pilot_Wdl_ACR";
		typicalCargo[] = {"CZ_Soldier_Pilot_Wdl_ACR"};
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"ca\Air_ACR\L39\Data\L-39_body_ACR_green_co","ca\Air_ACR\L39\Data\L-39_body_1_ACR_green_co"};
		soundGetIn[] = {"ca\sounds\Air\AV8\ext\ext-jetair-cabine-close1",0.056234132,1};
		soundGetOut[] = {"ca\sounds\Air\AV8\ext\ext-jetair-cabine-open1",0.056234132,1,40};
		soundDammage[] = {"ca\sounds\Air\AV8\int\alarm_loop1",0.56234133,1};
		soundEngineOnInt[] = {"CA\Sounds_ACR\Air\alca-start_int",0.31622776,1.2};
		soundEngineOnExt[] = {"CA\Sounds_ACR\Air\alca-start_ext",0.56234133,1.2,500};
		soundEngineOffInt[] = {"CA\Sounds_ACR\Air\alca-stop_int",0.31622776,1.2};
		soundEngineOffExt[] = {"CA\Sounds_ACR\Air\alca-stop_ext",0.56234133,1.2,500};
		class Sounds
		{
			class EngineLowOut
			{
				sound[] = {"CA\Sounds_ACR\Air\alca_low_ext",2.5118864,1.0,1200};
				frequency = "1.0 min (rpm + 0.5)";
				volume = "camPos*2*(rpm factor[0.95, 0])*(rpm factor[0, 0.95])";
			};
			class EngineHighOut
			{
				sound[] = {"CA\Sounds_ACR\Air\alca_engi_ext",2.5118864,1.0,1300};
				frequency = "1";
				volume = "camPos*4*(rpm factor[0.2, 1.8])*(rpm factor[1.8, 0.2])";
			};
			class ForsageOut
			{
				sound[] = {"CA\Sounds_ACR\Air\alca-fors_ext",1.7782794,1.5,1300};
				frequency = "1";
				volume = "engineOn*camPos*(thrust factor[0.6, 1.0])";
				cone[] = {3.14,3.92,2.0,0.5};
			};
			class WindNoiseOut
			{
				sound[] = {"CA\Sounds_ACR\Air\noise",0.56234133,1.0,150};
				frequency = "(0.1+(1.2*(speed factor[1, 150])))";
				volume = "camPos*(speed factor[1, 150])";
			};
			class EngineLowIn
			{
				sound[] = {"CA\Sounds_ACR\Air\alca_low_int",1.0,1.0};
				frequency = "1.0 min (rpm + 0.5)";
				volume = "(1-camPos)*(engineOn*(rpm factor[0.95, 0]))";
			};
			class EngineHighIn
			{
				sound[] = {"CA\Sounds_ACR\Air\alca_engi_int",1.0,1.0};
				frequency = "1";
				volume = "(1-camPos)*(engineOn*(rpm factor[0.85, 1.0]))";
			};
			class ForsageIn
			{
				sound[] = {"CA\Sounds_ACR\Air\alca-fors_int",0.031622775,1.5};
				frequency = "1";
				volume = "(1-camPos)*(engineOn*(thrust factor[0.6, 1.0]))";
			};
			class WindNoiseIn
			{
				sound[] = {"CA\Sounds_ACR\Air\noise",0.031622775,1.0};
				frequency = "(0.1+(1.2*(speed factor[1, 150])))";
				volume = "(1-camPos)*(speed factor[1, 150])";
			};
		};
	};
	class L39_ACR: L39_2_ACR
	{
		displayName = "$STR_ACR_DN_L39C";
		model = "\Ca\Air_ACR\L39\L39_grey.p3d";
		crew = "CZ_Soldier_Pilot_EP1";
		typicalCargo[] = {"CZ_Soldier_Pilot_EP1"};
		hiddenSelectionsTextures[] = {"ca\Air_ACR\L39\Data\L-39_body_ACR_co","ca\Air_ACR\L39\Data\L-39_body_1_ACR_co"};
		weapons[] = {};
		magazines[] = {};
	};
};
//};

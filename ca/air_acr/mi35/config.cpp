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

//Class air_acr : mi35\config.bin{
class CfgPatches
{
	class CAAir_ACR_Mi24
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.5;
		requiredAddons[] = {"CAAir_ACR"};
	};
};
class CfgVehicles
{
	class Air;
	class Helicopter: Air
	{
		class Turrets;
	};
	class Mi24_Base: Helicopter
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class AnimationSources;
	};
	class Mi24_Base_CZ_ACR: Mi24_Base
	{
		expansion = 3;
		accuracy = 1.5;
		side = 1;
		faction = "BIS_CZ";
		soundGetIn[] = {"Ca\Sounds_ACR\Air\Mixxx\Mixxx_door",0.31622776,1};
		soundGetOut[] = {"Ca\Sounds_ACR\Air\Mixxx\Mixxx_door",0.31622776,1,40};
		soundDammage[] = {"Ca\Sounds_ACR\Air\Mixxx\int-alarm_loop",0.56234133,1};
		soundEngineOnInt[] = {"Ca\Sounds_ACR\Air\Mixxx\Mixxx_start_int_1",0.1,1.0};
		soundEngineOnExt[] = {"Ca\Sounds_ACR\Air\Mixxx\Mixxx_start_ext_1",0.56234133,1.0,800};
		soundEngineOffInt[] = {"Ca\Sounds_ACR\Air\Mixxx\Mixxx_stop_int_1",0.1,1.0};
		soundEngineOffExt[] = {"Ca\Sounds_ACR\Air\Mixxx\Mixxx_stop_ext_1",0.56234133,1.0,800};
		class Sounds
		{
			class Engine
			{
				sound[] = {"Ca\Sounds_ACR\Air\Mixxx\Mixxx_engi_r_ext",3.1622777,1.4,800};
				frequency = "rotorSpeed";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorLowOut
			{
				sound[] = {"Ca\Sounds_ACR\Air\Mixxx\Mixxx_rotor_1",3.1622777,1.0,1400};
				frequency = "rotorSpeed";
				volume = "camPos*(0 max (rotorSpeed-0.1))";
				cone[] = {1.8,3.14,2.0,0.9};
			};
			class RotorHighOut
			{
				sound[] = {"Ca\Sounds_ACR\Air\Mixxx\Mixxx_rotor_1_swist",5.623413,1.0,1500};
				frequency = "rotorSpeed";
				volume = "camPos*10*(0 max (rotorThrust-0.95))";
				cone[] = {1.1,3.14,2.0,0.9};
			};
			class EngineIn
			{
				sound[] = {"Ca\Sounds_ACR\Air\Mixxx\Mixxx_engi_int_1",3.1622777,1.0};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorLowIn
			{
				sound[] = {"Ca\Sounds_ACR\Air\Mixxx\Mixxx_rotor_1",0.56234133,1.0};
				frequency = "rotorSpeed";
				volume = "2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
			};
			class RotorHighIn
			{
				sound[] = {"Ca\Sounds_ACR\Air\Mixxx\Mixxx_rotor_1_swist",0.31622776,1.0};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*3*(rotorThrust-0.9)";
			};
		};
		class TransportWeapons
		{
			class _xx_Sa58V_EP1
			{
				weapon = "Sa58V_EP1";
				count = "2*1";
			};
			class _xx_Sa58V_CCO_EP1
			{
				weapon = "Sa58V_CCO_EP1";
				count = 1;
			};
			class _xx_UK59_ACR
			{
				weapon = "UK59_ACR";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_762x39_SA58
			{
				magazine = "30Rnd_762x39_SA58";
				count = "30*1";
			};
			class _xx_100Rnd_762x54_PK
			{
				magazine = "100Rnd_762x54_PK";
				count = "5*1";
			};
			class _xx_HandGrenade_West
			{
				magazine = "HandGrenade_West";
				count = "6*1";
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = "6*1";
			};
			class _xx_SmokeShellRed
			{
				magazine = "SmokeShellRed";
				count = "2*1";
			};
		};
	};
	class Mi24_D_Base_CZ_ACR: Mi24_Base_CZ_ACR
	{
		accuracy = 1000;
		displayName = "$STR_DN_MI24V";
		vehicleClass = "Air";
		model = "\CA\Air_ACR\Mi35\mi35_ACR.p3d";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"YakB","AT9Launcher","80mmLauncher"};
				magazines[] = {"1470Rnd_127x108_YakB","8Rnd_AT9_Mi24V","40Rnd_80mm"};
			};
		};
		class AnimationSources: AnimationSources
		{
			class Gatling_1;
			class Doors;
		};
		class Library
		{
			libTextDesc = "$STR_LIB_MI24_D";
		};
	};
	class Mi24_D_CZ_ACR: Mi24_D_Base_CZ_ACR
	{
		scope = 2;
		accuracy = 1000;
		crew = "CZ_Soldier_Pilot_Wdl_ACR";
		typicalCargo[] = {"CZ_Soldier_Pilot_Wdl_ACR","CZ_Soldier_Pilot_Wdl_ACR"};
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"\ca\Air_ACR\Mi35\Data\mi35_ACR_1_CO.paa","\ca\Air_ACR\Mi35\Data\mi35_ACR_2_CO.paa","#(argb,8,8,3)color(0.345,0.36,0.345,1,CO)"};
	};
};
//};

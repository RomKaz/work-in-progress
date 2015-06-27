////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:14:03 2014 : Source 'file' date Fri Oct 31 06:14:03 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : Sound_FixedAliceEmptydoor\config.bin{
class cfgPatches
{
	class CA_CommunityConfigurationProject_E_Sound_FixedAliceEmptydoor
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CA_CommunityConfigurationProject_E"};
	};
};
class CfgVehicles
{
	class Car;
	class BIS_alice_emptydoor: Car
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"obj_house"};
				speechPlural[] = {"obj_houses"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"obj_house_CZ"};
				speechPlural[] = {"obj_houses_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"obj_house_CZ4P"};
				speechPlural[] = {"obj_houses_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"obj_house_RU"};
				speechPlural[] = {"obj_houses_RU"};
			};
		};
		TextPlural = "$STR_DN_houses";
		TextSingular = "$STR_DN_house";
		displayName = "$STR_DN_HOUSE";
		nameSound = "obj_house";
		irTarget = 0;
		accuracy = 0;
		cost = 0;
		camouflage = 0;
		cargoIsCoDriver[] = {0};
	};
};
//};

////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:02:18 2014 : Source 'file' date Fri Oct 31 06:02:18 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class dubbing : config.bin{
class CfgPatches
{
	class CA_Dubbing
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgVoice
{
	voices[] = {"Male01EN","Male01RU","Male01CZ","Male02EN","Male02RU","Male02CZ","Male03EN","Male03RU","Male03CZ","Male04EN","Male04RU","Male04CZ","Male05EN","Male05RU","Male05CZ","Female01EN","Female01RU","Female01CZ","Female02EN","Female02RU","Female02CZ","Female03EN","Female03RU","Female03CZ"};
	class Base
	{
		variants[] = {0.95,1.0,1.05};
		directories[] = {"",""};
		protocol = "RadioProtocolBase";
	};
	class EN: Base
	{
		identityTypes[] = {};
	};
	class RU: Base
	{
		identityTypes[] = {};
	};
	class CZ: Base
	{
		identityTypes[] = {};
	};
	class Male01EN: EN{};
	class Male01RU: RU{};
	class Male01CZ: CZ{};
	class Male02EN: EN{};
	class Male02RU: RU{};
	class Male02CZ: CZ{};
	class Male03EN: EN{};
	class Male03RU: RU{};
	class Male03CZ: CZ{};
	class Male04EN: EN{};
	class Male04RU: RU{};
	class Male04CZ: CZ{};
	class Male05EN: EN{};
	class Male05RU: RU{};
	class Male05CZ: CZ{};
	class Female01EN: EN
	{
		identityTypes[] = {};
	};
	class Female01RU: RU
	{
		identityTypes[] = {};
	};
	class Female01CZ: CZ
	{
		identityTypes[] = {};
	};
	class Female02EN: EN
	{
		identityTypes[] = {};
	};
	class Female02RU: RU
	{
		identityTypes[] = {};
	};
	class Female02CZ: CZ
	{
		identityTypes[] = {};
	};
	class Female03EN: EN
	{
		identityTypes[] = {};
	};
	class Female03RU: RU
	{
		identityTypes[] = {};
	};
	class Female03CZ: CZ
	{
		identityTypes[] = {};
	};
};
//};

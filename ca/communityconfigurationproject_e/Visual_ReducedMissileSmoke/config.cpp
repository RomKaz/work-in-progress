////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:14:04 2014 : Source 'file' date Fri Oct 31 06:14:04 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : Visual_ReducedMissileSmoke\config.bin{
class cfgPatches
{
	class CA_CommunityConfigurationProject_E_Visual_ReducedMissileSmoke
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CA_CommunityConfigurationProject_E"};
	};
};
class CfgCloudlets
{
	class Default;
	class MissileManualEffects1: Default
	{
		size[] = {"0.5/3","10/3"};
	};
	class MissileEffects1: Default
	{
		size[] = {"0.5/3","10/3"};
	};
	class Missile1: Default
	{
		size[] = {"1/3","3.5/3","4.5/3"};
	};
	class Missile2: Default
	{
		size[] = {"1/3","2/3"};
	};
	class Missile3: Default
	{
		size[] = {"2.5/3","3.5/3","4/3"};
	};
	class Missile4: Default
	{
		size[] = {"1.5/3","3/3"};
	};
	class Missile5: Default
	{
		size[] = {"3/3","9/3"};
	};
	class CloudletsMissile
	{
		cloudletSize = "2/2 + random (1/2)";
	};
	class MissileFire: Default
	{
		size[] = {"0.6/3",0};
	};
	class Missile_Ch29: Missile4
	{
		size[] = {1.5,3};
	};
	class MissileFire_Ch29: MissileFire
	{
		size[] = {0.6,0};
	};
};
class Missile_Ch29
{
	class Light1
	{
		position[] = {0,0,0};
		simulation = "light";
		type = "RocketLight";
		intensity = 0.01;
		interval = 1;
		lifeTime = 1;
	};
	class Missile_Ch29
	{
		position[] = {0,0,0};
		simulation = "particles";
		type = "Missile_Ch29";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class MissileFire_Ch29
	{
		simulation = "particles";
		type = "MissileFire_Ch29";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class CfgAmmo
{
	class MissileBase;
	class M_Ch29_AT: MissileBase
	{
		effectsMissile = "Missile_Ch29";
	};
};
//};

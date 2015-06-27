////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:14:01 2014 : Source 'file' date Fri Oct 31 06:14:01 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : Gameplay_FixedMissileSpeeds\config.bin{
class CfgPatches
{
	class CA_CommunityConfigurationProject_E_Gameplay_FixedMissileSpeeds
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CA_CommunityConfigurationProject_E"};
	};
};
class CfgAmmo
{
	class Default;
	class MissileCore: Default{};
	class MissileBase: MissileCore{};
	class M_Javelin_AT: MissileBase{};
	class M_Stinger_AA: MissileBase
	{
		maneuvrability = 7;
		trackOversteer = 1;
		trackLead = 1;
		timeToLive = 14;
		sideAirFriction = 0.026;
		initTime = 0.2;
		thrustTime = 2.5;
		thrust = 340;
	};
	class M_Sidewinder_AA: MissileBase
	{
		maneuvrability = 24;
		timeToLive = 40;
		sideAirFriction = 0.05;
		thrust = 240;
		maxControlRange = 8000;
	};
	class M_Strela_AA: MissileBase
	{
		maneuvrability = 5;
		trackLead = 1;
		maxSpeed = 470;
		initTime = 0.3;
		thrustTime = 2.5;
		thrust = 232;
		timeToLive = 17;
		sideAirFriction = 0.162;
	};
	class M_Igla_AA: M_Strela_AA
	{
		maneuvrability = 7;
		trackOversteer = 1;
		sideAirFriction = 0.038;
		thrust = 600;
		timeToLive = 9;
	};
	class M_AT5_AT: MissileBase
	{
		maneuvrability = 4;
		timeToLive = 20;
		thrust = 133.6;
	};
	class M_AT13_AT: M_AT5_AT
	{
		initTime = 0;
		maxSpeed = 223;
		sideAirFriction = 0.072;
		thrust = 116;
		timeToLive = 13;
	};
	class M_TOW_AT: MissileBase
	{
		timeToLive = 21;
		maneuvrability = 5;
		sideAirFriction = 0.084;
		thrust = 185;
	};
	class M_TOW2_AT: M_TOW_AT
	{
		maxSpeed = 296;
		thrust = 185;
	};
	class M_47_AT_EP1: M_TOW_AT
	{
		maneuvrability = 5;
		sideAirFriction = 0.3;
		maxSpeed = 200;
		thrustTime = 1.5;
		thrust = 150;
	};
	class M_AT10_AT: MissileBase
	{
		maneuvrability = 6;
		timeToLive = 13;
		sideAirFriction = 0.144;
		maxSpeed = 420;
		thrust = 60;
	};
	class M_AT11_AT: M_AT10_AT
	{
		timeToLive = 17.6;
		maxControlRange = 5000;
	};
	class M_Hellfire_AT: MissileBase
	{
		sideAirFriction = 0.075;
		thrust = 180;
		thrustTime = 3.25;
	};
	class M_CRV7_AT: M_Hellfire_AT
	{
		maxSpeed = 720;
		thrustTime = 1.07;
		thrust = 900;
		sideAirFriction = 0.1;
	};
	class M_Vikhr_AT: MissileBase
	{
		timeToLive = 19;
		maneuvrability = 11;
		sideAirFriction = 0.04;
		thrustTime = 2;
		thrust = 366;
	};
	class M_Maverick_AT: MissileBase
	{
		timeToLive = 85;
		maneuvrability = 10;
		sideAirFriction = 0.05;
		maxSpeed = 319;
		thrustTime = 2.5;
		thrust = 150;
	};
	class M_R73_AA: MissileBase
	{
		maneuvrability = 18;
		timeToLive = 40;
		sideAirFriction = 0.05;
		thrust = 240;
		maxcontrolrange = 8000;
	};
	class M_Ch29_AT: MissileBase
	{
		maxControlRange = 10000;
		trackLead = 1;
		timeToLive = 40;
		maneuvrability = 10;
		sideAirFriction = 0.09;
		trackOversteer = 1;
		maxSpeed = 600;
		thrustTime = 4.7;
		thrust = 180;
	};
	class M_AT2_AT: MissileBase
	{
		trackOversteer = 0.75;
		trackLead = 0.75;
		maneuvrability = 3;
		sideAirFriction = 0.076;
		thrust = 144;
		maxSpeed = 230;
		timeToLive = 26;
	};
	class M_AT6_AT: MissileBase
	{
		trackOversteer = 0.85;
		trackLead = 0.85;
		timeToLive = 17.6;
		sideAirFriction = 0.033;
		maxSpeed = 510;
		thrustTime = 3.25;
		thrust = 168;
	};
	class M_AT9_AT: M_AT6_AT
	{
		sideAirFriction = 0.03;
		thrust = 172;
		thrustTime = 3.5;
		timeToLive = 20;
	};
	class M_9M311_AA: MissileBase
	{
		maneuvrability = 15;
		sideAirFriction = 0.05;
		trackLead = 1;
		thrustTime = 2.5;
		thrust = 475;
		timeToLive = 17;
	};
	class M_NLAW_AT: MissileBase
	{
		maxControlRange = 600;
	};
	class M_Bolide_AA: MissileBase
	{
		thrust = 180;
		thrustTime = 3.5;
		sideAirFriction = 0.03;
		maneuvrability = 8;
		trackLead = 1;
	};
	class M_AT3_AT: MissileBase
	{
		thrustTime = 2.5;
		thrust = 65;
		timeToLive = 26;
		sideAirFriction = 0.14;
		maneuvrability = 2;
	};
	class RocketCore: Default{};
	class RocketBase: RocketCore{};
	class R_Hydra_HE: RocketBase
	{
		maxSpeed = 720;
		thrustTime = 1.07;
		thrust = 900;
		sideAirFriction = 0.1;
	};
	class R_57mm_HE: RocketBase
	{
		maxSpeed = 490;
		thrust = 620;
		sideAirFriction = 0.2;
	};
	class R_80mm_HE: RocketBase
	{
		maxSpeed = 590;
		thrustTime = 0.69;
		thrust = 1060;
		sideAirFriction = 0.09;
	};
	class R_S8T_AT: RocketBase
	{
		maxSpeed = 440;
		thrustTime = 0.69;
		thrust = 800;
		sideAirFriction = 0.12;
	};
	class R_M136_AT: RocketBase{};
	class R_RPG18_AT: RocketBase
	{
		thrust = 1;
	};
	class R_PG7V_AT: RocketBase{};
	class R_PG7VL_AT: R_PG7V_AT{};
	class R_PG7VR_AT: R_PG7V_AT{};
	class R_OG7_AT: R_PG7V_AT{};
	class R_PG9_AT: RocketBase
	{
		timeToLive = 3;
		thrustTime = 0.5;
		sideAirFriction = 0.3;
		thrust = 780;
	};
	class R_OG9_HE: R_PG9_AT
	{
		timeToLive = 9;
		thrust = 1;
		thrustTime = 1;
		sideAirFriction = 0.1;
	};
	class R_SMAW_HEDP: RocketBase
	{
		thrust = 1;
		thrustTime = 1;
		sideAirFriction = 0.8;
		maxSpeed = 220;
	};
	class R_SMAW_HEAA: R_SMAW_HEDP{};
	class R_MEEWS_HEDP: R_SMAW_HEDP
	{
		initTime = 0;
		thrust = 1;
		thrustTime = 1.5;
		sideAirFriction = 0.1;
	};
	class R_MEEWS_HEAT: R_SMAW_HEAA
	{
		initTime = 0.08;
		thrustTime = 1.5;
		thrust = 100;
		sideAirFriction = 0.1;
	};
	class R_GRAD: RocketBase{};
	class R_MLRS: RocketBase{};
};
class CfgMagazines
{
	class CA_Magazine;
	class CA_LauncherMagazine: CA_Magazine{};
	class M136: CA_LauncherMagazine{};
	class Javelin: CA_LauncherMagazine{};
	class AT13: CA_LauncherMagazine
	{
		initSpeed = 80;
	};
	class PG7V: CA_LauncherMagazine{};
	class PG7VR: PG7V{};
	class OG7: CA_LauncherMagazine{};
	class PG9_AT: CA_LauncherMagazine{};
	class OG9_HE: CA_LauncherMagazine{};
	class RPG18: CA_LauncherMagazine{};
	class SMAW_HEDP: CA_LauncherMagazine
	{
		initSpeed = 220;
	};
	class SMAW_HEAA: SMAW_HEDP{};
	class NLAW: CA_LauncherMagazine{};
	class MAAWS_HEDP: CA_LauncherMagazine
	{
		initSpeed = 230;
	};
	class MAAWS_HEAT: MAAWS_HEDP
	{
		initSpeed = 255;
	};
	class Dragon_EP1: CA_LauncherMagazine{};
	class Strela: CA_LauncherMagazine{};
	class Stinger: CA_LauncherMagazine{};
	class VehicleMagazine;
	class 8Rnd_Stinger: VehicleMagazine{};
	class 1Rnd_Bolide: VehicleMagazine{};
	class 8Rnd_9M311: VehicleMagazine{};
	class 4Rnd_Sidewinder_AV8B: VehicleMagazine{};
	class 4Rnd_R73: VehicleMagazine{};
	class 1Rnd_AT3: VehicleMagazine{};
	class 8Rnd_AT5_BMP2: VehicleMagazine{};
	class 4Rnd_AT9_Mi24P: VehicleMagazine
	{
		initSpeed = 55;
	};
	class 4Rnd_AT6_Mi24V: VehicleMagazine
	{
		initSpeed = 55;
	};
	class 4Rnd_AT2_Mi24D: VehicleMagazine
	{
		initSpeed = 55;
	};
	class 8Rnd_AT10_BMP3: 8Rnd_AT5_BMP2
	{
		initSpeed = 370;
	};
	class 5Rnd_AT11_T90: 8Rnd_AT5_BMP2
	{
		initSpeed = 340;
	};
	class 6Rnd_AT13: VehicleMagazine
	{
		initSpeed = 80;
	};
	class 6Rnd_TOW_HMMWV: VehicleMagazine{};
	class 8Rnd_Hellfire: VehicleMagazine{};
	class 12Rnd_Vikhr_KA50: VehicleMagazine{};
	class 4Rnd_Ch29: VehicleMagazine{};
	class 2Rnd_Maverick_A10: VehicleMagazine{};
	class 14Rnd_FFAR: VehicleMagazine
	{
		initSpeed = 1;
	};
	class 40Rnd_80mm: VehicleMagazine
	{
		initSpeed = 1;
	};
	class 40Rnd_S8T: VehicleMagazine
	{
		initSpeed = 1;
	};
	class 64Rnd_57mm: VehicleMagazine
	{
		initSpeed = 1;
	};
	class PG15V: VehicleMagazine
	{
		initSpeed = 435;
	};
};
//};

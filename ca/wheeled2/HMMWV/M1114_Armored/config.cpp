////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:07:11 2014 : Source 'file' date Fri Oct 31 06:07:11 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class wheeled2 : HMMWV\M1114_Armored\config.bin{
class CfgPatches
{
	class CAWheeled2_M1114_Armored
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAWheeled2_HMMWV_BASE"};
	};
};
class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class HitPoints
		{
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
		};
		class Turrets
		{
			class MainTurret;
		};
	};
	class HMMWV_base: Car
	{
		class AnimationSources;
		class NewTurret;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class HitPoints;
			};
		};
	};
	class HMMWV_Armored_Base: HMMWV_base
	{
		model = "\ca\wheeled2\HMMWV\M1114_Armored\M1114_Armored.p3d";
		displayname = "$STR_DN_M1114_ARMORED";
		armor = 150;
		scope = 0;
		accuracy = 0.32;
		picture = "\Ca\wheeled\data\ico\HMMWVmk19_CA.paa";
		Icon = "\Ca\wheeled\data\map_ico\icomap_hmwvmk19_CA.paa";
		mapSize = 5;
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "M240_veh";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "M240_veh";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "M240_veh";
			};
		};
		class HitPoints: HitPoints
		{
			class HitGlass1: HitGlass1
			{
				armor = 0.65;
			};
			class HitGlass2: HitGlass2
			{
				armor = 0.65;
			};
			class HitGlass3: HitGlass3
			{
				armor = 0.65;
			};
			class HitGlass4: HitGlass4
			{
				armor = 0.65;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\wheeled\hmmwv\data\hmmwv_body.rvmat","ca\wheeled\hmmwv\data\hmmwv_body_Half_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_body_Full_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_details.rvmat","ca\wheeled\hmmwv\data\hmmwv_details_Half_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_details_Full_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_parts_1.rvmat","ca\wheeled\hmmwv\data\hmmwv_parts_1_Half_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_parts_1_Full_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_clocks.rvmat","ca\wheeled\hmmwv\data\hmmwv_clocks.rvmat","ca\wheeled\data\hmmwv_clocks_destruct.rvmat","ca\weapons\data\m240.rvmat","ca\weapons\data\m240.rvmat","ca\weapons\data\m240_destruct.rvmat","ca\wheeled\hmmwv\data\hmmwv_glass.rvmat","ca\wheeled\hmmwv\data\hmmwv_glass_Half_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_glass_Half_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_glass_in.rvmat","ca\wheeled\hmmwv\data\hmmwv_glass_in_Half_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_glass_in_Half_D.rvmat"};
		};
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\ca\wheeled\hmmwv\data\hmmwv_body_co.paa","\ca\wheeled\hmmwv\data\hmmwv_parts_1_ca.paa"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"M240_veh"};
				magazines[] = {"100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240"};
				soundServo[] = {"\ca\wheeled\Data\Sound\servo3",0.0001,1.1};
				gunnerAction = "HMMWV_Gunner04";
				castGunnerShadow = 1;
				class HitPoints: HitPoints
				{
					class HitTurret
					{
						armor = 1;
						material = -1;
						name = "vez";
						visual = "vez";
						passThrough = 0.3;
					};
				};
			};
		};
		class Library
		{
			libTextDesc = "$STR_LIB_HMMWV_Armored";
		};
	};
};
//};

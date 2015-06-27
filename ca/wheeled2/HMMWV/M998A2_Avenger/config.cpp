////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:07:12 2014 : Source 'file' date Fri Oct 31 06:07:12 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class wheeled2 : HMMWV\M998A2_Avenger\config.bin{
class CfgPatches
{
	class CAWheeled2_M998A2_Avenger
	{
		units[] = {"M998A2_Avenger"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAWheeled2_HMMWV_BASE"};
	};
};
class CfgVehicles
{
	class land;
	class LandVehicle: land
	{
		class HitPoints;
	};
	class Car: LandVehicle
	{
		class HitPoints
		{
			class HitGlass1;
		};
		class Turrets
		{
			class MainTurret;
		};
	};
	class HMMWV_base: Car
	{
		class NewTurret;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class HitPoints;
			};
		};
		class AnimationSources;
	};
	class HMMWV_Avenger: HMMWV_base
	{
		model = "\ca\wheeled2\HMMWV\M998A2_Avenger\M998A2_Avenger.p3d";
		displayname = "$STR_DN_M998A2_AVENGER";
		vehicleClass = "Car";
		scope = 0;
		armor = 150;
		accuracy = 0.3;
		transportSoldier = 1;
		cargoAction[] = {"HMMWV_Cargo01"};
		picture = "\Ca\wheeled2\data\ui\Picture_M998A2_CA.paa";
		Icon = "\Ca\wheeled2\data\ui\Icon_M998A2_CA.paa";
		mapSize = 5;
		threat[] = {1,0.3,1};
		gunnerCanSee = 31;
		irScanRangeMin = 0;
		irScanRangeMax = 1500;
		irScanToEyeFactor = 3;
		irScanGround = "false";
		class HitPoints: HitPoints
		{
			class HitGlass5: HitGlass1
			{
				name = "glass5";
				visual = "glass5";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerAction = "AH1Z_Gunner";
				gunnerInAction = "AH1Z_Gunner";
				gunnerGetInAction = "GetInMedium";
				gunnerGetOutAction = "GetOutMedium";
				memoryPointGun = "machinegun";
				weapons[] = {"StingerLaucher","M3P"};
				magazines[] = {"8Rnd_Stinger","250Rnd_127x99_M3P","250Rnd_127x99_M3P"};
				minElev = -10;
				maxElev = 70;
				initElev = 0;
				minTurn = -180;
				maxTurn = 180;
				initTurn = 0;
				gunnerOpticsModel = "\ca\weapons\2Dscope_Avenger";
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.155;
					minFov = 0.047;
					maxFov = 0.155;
				};
				class HitPoints: HitPoints
				{
					class HitTurret
					{
						armor = 0.8;
						material = -1;
						name = "vez";
						visual = "vez";
						passThrough = 1;
					};
				};
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\wheeled\hmmwv\data\hmmwv_body.rvmat","ca\wheeled\hmmwv\data\hmmwv_body_Half_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_body_Full_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_details.rvmat","ca\wheeled\hmmwv\data\hmmwv_details_Half_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_details_Full_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_parts_1.rvmat","ca\wheeled\hmmwv\data\hmmwv_parts_1_Half_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_parts_1_Full_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_clocks.rvmat","ca\wheeled\hmmwv\data\hmmwv_clocks.rvmat","ca\wheeled\data\hmmwv_clocks_destruct.rvmat","ca\wheeled\hmmwv\data\hmmwv_glass.rvmat","ca\wheeled\hmmwv\data\hmmwv_glass_Half_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_glass_Half_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_glass_in.rvmat","ca\wheeled\hmmwv\data\hmmwv_glass_in_Half_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_glass_in_Half_D.rvmat","ca\wheeled2\hmmwv\m998a2_avenger\data\m998a2_avenger_2.rvmat","ca\wheeled2\hmmwv\m998a2_avenger\data\m998a2_avenger_2_damage.rvmat","ca\wheeled2\hmmwv\m998a2_avenger\data\m998a2_avenger_2_destruct.rvmat","ca\wheeled2\hmmwv\m998a2_avenger\data\m998a2_avenger_2_in.rvmat","ca\wheeled2\hmmwv\m998a2_avenger\data\m998a2_avenger_2_in_damage.rvmat","ca\wheeled2\hmmwv\m998a2_avenger\data\m998a2_avenger_2_in_damage.rvmat","ca\wheeled2\hmmwv\m998a2_avenger\data\m998a2_avenger_3.rvmat","ca\wheeled2\hmmwv\m998a2_avenger\data\m998a2_avenger_3_damage.rvmat","ca\wheeled2\hmmwv\m998a2_avenger\data\m998a2_avenger_3_destruct.rvmat"};
		};
		class AnimationSources: AnimationSources
		{
			class HitGlass5
			{
				source = "Hit";
				hitpoint = "HitGlass5";
				raw = 1;
			};
		};
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"\ca\wheeled\hmmwv\data\hmmwv_body_co.paa","\ca\wheeled2\hmmwv\m998a2_avenger\data\m998a2_avenger_1_co.paa","\ca\wheeled2\hmmwv\m998a2_avenger\data\m998a2_avenger_3_co.paa"};
		class Library
		{
			libTextDesc = "$STR_LIB_HMMWV_Avenger";
		};
	};
};
//};

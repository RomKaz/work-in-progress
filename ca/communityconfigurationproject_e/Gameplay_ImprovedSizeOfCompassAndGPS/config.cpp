////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:14:01 2014 : Source 'file' date Fri Oct 31 06:14:01 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : Gameplay_ImprovedSizeOfCompassAndGPS\config.bin{
class cfgPatches
{
	class CA_CommunityConfigurationProject_E_Gameplay_ImprovedSizeOfCompassAndGPS
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CA_CommunityConfigurationProject_E"};
	};
};
class RscObject;
class RscMapControl;
class RscPicture;
class RscText;
class RscWatch: RscObject
{
	scale = "1 * 0.675 * (SafeZoneW Min SafeZoneH)";
	positionBack[] = {0.0475,-0.0575,0.225};
};
class RscCompass: RscObject
{
	scale = "0.5 * 0.675 * (SafeZoneW Min SafeZoneH)";
	positionBack[] = {0,-0.02,0.075};
};
class RscMiniMap
{
	class controls
	{
		class CA_MinimapFrame: RscPicture
		{
			x = "SafeZoneX + SafeZoneW - ((1.025 - 0.564) * 0.675 * (SafeZoneW Min SafeZoneH))";
			y = "SafeZoneY + SafeZoneH - ((0.9375 - 0.3608) * 0.675 * (SafeZoneW Min SafeZoneH))";
			w = "0.47058825 * 0.675 * (SafeZoneW Min SafeZoneH)";
			h = "0.62745105 * 0.675 * (SafeZoneW Min SafeZoneH)";
		};
	};
	class controlsBackground
	{
		class CA_MiniMap: RscMapControl
		{
			x = "SafeZoneX + SafeZoneW - ((1.025 - 0.625) * 0.675 * (SafeZoneW Min SafeZoneH))";
			y = "SafeZoneY + SafeZoneH - ((0.9375 - 0.48) * 0.675 * (SafeZoneW Min SafeZoneH))";
			w = "0.35 * 0.675 * (SafeZoneW Min SafeZoneH)";
			h = "0.301 * 0.675 * (SafeZoneW Min SafeZoneH)";
		};
	};
};
class RscMiniMapSmall: RscMiniMap
{
	class controlsBackground
	{
		class CA_MiniMap: RscMapControl
		{
			x = "SafeZoneX + SafeZoneW - ((1.025 - 0.757) * 0.675 * (SafeZoneW Min SafeZoneH))";
			y = "SafeZoneY + SafeZoneH - ((0.9375 - 0.466) * 0.675 * (SafeZoneW Min SafeZoneH))";
			w = "0.35 * 0.675 * (SafeZoneW Min SafeZoneH)";
			h = "0.338 * 0.675 * (SafeZoneW Min SafeZoneH)";
		};
	};
	class controls
	{
		class CA_MinimapFrame: RscPicture
		{
			x = "SafeZoneX + SafeZoneW - ((1.025 - 0.705) * 0.675 * (SafeZoneW Min SafeZoneH))";
			y = "SafeZoneY + SafeZoneH - ((0.9375 - 0.451) * 0.675 * (SafeZoneW Min SafeZoneH))";
			w = "0.313726 * 0.675 * (SafeZoneW Min SafeZoneH)";
			h = "0.418301 * 0.675 * (SafeZoneW Min SafeZoneH)";
		};
	};
};
class RscDisplayMainMap
{
	class objects
	{
		class Watch: RscObject
		{
			scale = "0.35 * (SafeZoneW Min SafeZoneH)";
		};
		class Compass: RscObject
		{
			scale = "0.5 * (SafeZoneW Min SafeZoneH)";
		};
		class GPS: RscObject
		{
			scale = "0.275 * (SafeZoneW Min SafeZoneH)";
		};
	};
};
//};

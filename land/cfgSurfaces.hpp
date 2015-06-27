class CfgSurfaces 
{
	class Default {};
	class SMgrassSurface : Default
	{	
		 files = "sm_grass_*";
		 rough = 0.1;
		 dust = 0.1;
		 soundEnviron = "grass";
		 character = "sm_grassClutter";
	};
};

class CfgSurfaceCharacters
{
	class sm_grassClutter
  	{
			probability[]={0.79,0.1,0.1,0.01};
			names[]={sm_GrassCrookedGreen,sm_GrassCrooked,sm_AutumnFlowers,sm_WeedDead};
  	};
};
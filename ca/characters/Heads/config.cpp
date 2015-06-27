////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:02:03 2014 : Source 'file' date Fri Oct 31 06:02:03 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class characters : Heads\config.bin{
class CfgPatches
{
	class CA_Heads
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgNonAIVehicles
{
	class ProxyBysta
	{
		autocenter = 0;
		scope = 2;
		reversed = 1;
		animated = 1;
		model = "";
		simulation = "ProxySubpart";
	};
};
class MaskFace
{
	mask[] = {"eye_upr",0,"eye_lwr",0,"eye_upl",0,"eye_lwl",0,"chin",1,"jaw_rf",1,"jaw_rm",1,"jaw_rs",1,"ear_r",1,"jaw",1,"jaw_lf",1,"jaw_lm",1,"jaw_ls",1,"ear_l",1,"lip_lc",1,"lip_lwlb",1,"lip_lwlf",1,"lip_lwm",1,"lip_lwrf",1,"lip_lwrb",1,"lip_rc",1,"lip_uprb",1,"lip_uprf",1,"lip_upm",1,"lip_uplf",1,"lip_uplb",1,"nose_tip",1,"nose_r",1,"nose_l",1,"zig_lt",1,"zig_lm",1,"zig_lb",1,"zig_rt",1,"zig_rm",1,"zig_rb",1,"cheek_r",1,"cheek_l",1,"eyebrow_lb",1,"eyebrow_lm",1,"eyebrow_lf",1,"corr",1,"eyebrow_rf",1,"eyebrow_rm",1,"eyebrow_rb",1,"cheek_rf",1,"cheek_rm",1,"cheek_rb",1,"cheek_lf",1,"cheek_lm",1,"cheek_lb",1,"forehead_l",1,"forehead_m",1,"forehead_r",1,"neck_t",1,"neck_b",1,"neck_r",1,"neck_l",1,"tongue_b",1,"tongue_m",1,"tongue_f",1};
};
class MaskFaceWoman
{
	mask[] = {"eye_upr",1,"eye_lwr",1,"eye_upl",1,"eye_lwl",1,"chin",1,"jaw_rf",1,"jaw_rm",1,"jaw_rs",1,"ear_r",1,"jaw",1,"jaw_lf",1,"jaw_lm",1,"jaw_ls",1,"ear_l",1,"lip_lc",1,"lip_lwlb",1,"lip_lwlf",1,"lip_lwm",1,"lip_lwrf",1,"lip_lwrb",1,"lip_rc",1,"lip_uprb",1,"lip_uprf",1,"lip_upm",1,"lip_uplf",1,"lip_uplb",1,"nose_tip",1,"nose_r",1,"nose_l",1,"zig_lt",1,"zig_lm",1,"zig_lb",1,"zig_rt",1,"zig_rm",1,"zig_rb",1,"cheek_r",1,"cheek_l",1,"eyebrow_lb",1,"eyebrow_lm",1,"eyebrow_lf",1,"corr",1,"eyebrow_rf",1,"eyebrow_rm",1,"eyebrow_rb",1,"cheek_rf",1,"cheek_rm",1,"cheek_rb",1,"cheek_lf",1,"cheek_lm",1,"cheek_lb",1,"forehead_l",1,"forehead_m",1,"forehead_r",1,"neck_t",1,"neck_b",1,"neck_r",1,"neck_l",1,"tongue_b",1,"tongue_m",1,"tongue_f",1};
};
class EyeMask
{
	mask[] = {"eye_upr",1,"eye_lwr",1,"eye_upl",1,"eye_lwl",1,"l_eye",1,"r_eye",1};
};
class EyeMaskWoman
{
	mask[] = {"eye_upr",0,"eye_lwr",0,"eye_upl",0,"eye_lwl",0,"l_eye",1,"r_eye",1};
};
class LipMask
{
	mask[] = {"chin",0.75,"jaw_rf",0.75,"jaw_rm",0.75,"jaw_rs",0.75,"ear_r",0.75,"jaw",0.75,"jaw_lf",0.75,"jaw_lm",0.75,"jaw_ls",0.75,"ear_l",0.75,"lip_lc",0.75,"lip_lwlb",0.75,"lip_lwlf",0.75,"lip_lwm",0.75,"lip_lwrf",0.75,"lip_lwrb",0.75,"lip_rc",0.75,"lip_uprb",0.75,"lip_uprf",0.75,"lip_upm",0.75,"lip_uplf",0.75,"lip_uplb",0.75,"nose_tip",0.5,"nose_r",0.5,"nose_l",0.5,"zig_lt",0.5,"zig_lm",0.5,"zig_lb",0.5,"zig_rt",0.5,"zig_rm",0.5,"zig_rb",0.5,"cheek_r",0.5,"cheek_l",0.5,"eyebrow_lb",0.5,"eyebrow_lm",0.5,"eyebrow_lf",0.5,"corr",0.5,"eyebrow_rf",0.5,"eyebrow_rm",0.5,"eyebrow_rb",0.5,"cheek_rf",0.5,"cheek_rm",0.5,"cheek_rb",0.5,"cheek_lf",0.5,"cheek_lm",0.5,"cheek_lb",0.5,"forehead_l",0.5,"forehead_m",0.5,"forehead_r",0.5,"neck_t",0.5,"neck_b",0.5,"neck_r",0.5,"neck_l",0.5,"tongue_b",0.5,"tongue_m",0.5,"tongue_f",0.5};
};
class CfgHeads
{
	class Default
	{
		model = "\ca\characters\Heads\male\DefaultHead\DefaultHead";
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\characters\heads\male\defaulthead\data\hhl_white.rvmat","ca\characters\Heads\male\DefaultHead\Data\hhl_Wounds.rvmat","ca\characters\Heads\male\DefaultHead\Data\hhl_Wounds.rvmat"};
		};
		selectionHeadWound = "head_injury";
		selectionPersonality = "osobnost";
		class Grimaces
		{
			class Eyes
			{
				type = "eyes";
				eyeMaxAngle = 0.5;
				eyelidUpStartAngle = 0.5;
				eyelidUpMaxAngle = 0.7;
				eyelidDownStartAngle = 0.25;
				eyelidDownMaxAngle = 0.3;
			};
			class Lipsync
			{
				type = "lipsync";
				vizem[] = {"ca\characters\Heads\Data\RTM\Neutral.rtm","ca\characters\Heads\data\RTM\vizem\a.rtm","ca\characters\Heads\data\RTM\vizem\e2.rtm","ca\characters\Heads\data\RTM\vizem\f.rtm","ca\characters\Heads\data\RTM\vizem\m.rtm","ca\characters\Heads\data\RTM\vizem\y.rtm","ca\characters\Heads\data\RTM\vizem\v.rtm","ca\characters\Heads\data\RTM\vizem\i.rtm"};
			};
			class RTM_Face
			{
				type = "rtm";
				anim = "ca\characters\Heads\Data\RTM\Neutral.rtm";
			};
			class NeutralFace: RTM_Face
			{
				anim = "ca\characters\Heads\Data\RTM\Neutral.rtm";
			};
			class DeadFace: RTM_Face
			{
				anim = "ca\characters\Heads\Data\RTM\Dead.rtm";
			};
			class DangerFace: RTM_Face
			{
				anim = "ca\characters\Heads\Data\RTM\Danger.rtm";
			};
			class HurtFace: RTM_Face
			{
				anim = "ca\characters\Heads\Data\RTM\Hurt.rtm";
			};
			class AwareFace: RTM_Face
			{
				anim = "ca\characters\Heads\Data\RTM\Aware.rtm";
			};
			class SafeFace: RTM_Face
			{
				anim = "ca\characters\Heads\Data\RTM\Neutral.rtm";
			};
			class CombatFace: RTM_Face
			{
				anim = "ca\characters\Heads\Data\RTM\Combat.rtm";
			};
			class Neutral
			{
				type = "compound";
				class Items
				{
					class NeutralFace: MaskFace{};
					class Lipsync: LipMask{};
					class Eyes: EyeMask{};
				};
			};
			class Dead
			{
				type = "compound";
				class Items
				{
					class DeadFace: MaskFace{};
					class Eyes: EyeMask{};
				};
			};
			class Danger
			{
				type = "compound";
				class Items
				{
					class DangerFace: MaskFace{};
					class Lipsync: LipMask{};
					class Eyes: EyeMask{};
				};
			};
			class Hurt
			{
				type = "compound";
				class Items
				{
					class HurtFace: MaskFace{};
					class Lipsync: LipMask{};
					class Eyes: EyeMask{};
				};
			};
			class Aware
			{
				type = "compound";
				class Items
				{
					class AwareFace: MaskFace{};
					class Lipsync: LipMask{};
					class Eyes: EyeMask{};
				};
			};
			class Safe
			{
				type = "compound";
				class Items
				{
					class SafeFace: MaskFace{};
					class Lipsync: LipMask{};
					class Eyes: EyeMask{};
				};
			};
			class Combat
			{
				type = "compound";
				class Items
				{
					class CombatFace: MaskFace{};
					class Lipsync: LipMask{};
					class Eyes: EyeMask{};
				};
			};
		};
	};
	class DefaultHead: Default
	{
		model = "\ca\characters\Heads\male\DefaultHead\DefaultHead";
	};
	class DefaultHead_camo1: DefaultHead
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\Characters\Heads\Male\DefaultHead\data\hhl_white.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_01_wounds1.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_01_wounds2.rvmat"};
		};
	};
	class DefaultHead_camo2: DefaultHead
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\Characters\Heads\Male\DefaultHead\data\hhl_white.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_02_wounds1.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_02_wounds2.rvmat"};
		};
	};
	class DefaultHead_camo3: DefaultHead
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\Characters\Heads\Male\DefaultHead\data\hhl_white.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_03_wounds1.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_03_wounds2.rvmat"};
		};
	};
	class DefaultHead_camo4: DefaultHead
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\Characters\Heads\Male\DefaultHead\data\hhl_white.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_04_wounds1.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_04_wounds2.rvmat"};
		};
	};
	class DefaultHead_camo5: DefaultHead
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\Characters\Heads\Male\DefaultHead\data\hhl_white.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_05_wounds1.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_05_wounds2.rvmat"};
		};
	};
	class DefaultHead_camo6: DefaultHead
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\Characters\Heads\Male\DefaultHead\data\hhl_white.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_06_wounds1.rvmat","ca\Characters\Heads\Male\DefaultHead\data\hhl_Camo_06_wounds2.rvmat"};
		};
	};
	class WomanHead: Default
	{
		model = "\ca\characters\Heads\Female\Secretary\Secretary";
		class Wounds
		{
			tex[] = {};
			mat[] = {};
		};
		selectionHeadWound = "head_injury";
		selectionPersonality = "osobnost";
		class Grimaces
		{
			class Eyes
			{
				type = "eyes";
				eyeMaxAngle = 0.5;
				eyelidUpStartAngle = 0;
				eyelidUpMaxAngle = 0;
				eyelidDownStartAngle = 0;
				eyelidDownMaxAngle = 0;
			};
			class Lipsync
			{
				type = "lipsync";
				vizem[] = {"ca\characters\Heads\Data\RTM\Woman\Neutral.rtm","ca\characters\Heads\data\RTM\Woman\vizem\a.rtm","ca\characters\Heads\data\RTM\Woman\vizem\e2.rtm","ca\characters\Heads\data\RTM\Woman\vizem\f.rtm","ca\characters\Heads\data\RTM\Woman\vizem\m.rtm","ca\characters\Heads\data\RTM\Woman\vizem\y.rtm","ca\characters\Heads\data\RTM\Woman\vizem\v.rtm","ca\characters\Heads\data\RTM\Woman\vizem\i.rtm"};
			};
			class RTM_Face
			{
				type = "rtm";
				anim = "ca\characters\Heads\Data\RTM\Woman\Neutral.rtm";
			};
			class NeutralFace: RTM_Face
			{
				anim = "ca\characters\Heads\Data\RTM\Woman\Neutral.rtm";
			};
			class DeadFace: RTM_Face
			{
				anim = "ca\characters\Heads\Data\RTM\Woman\Death.rtm";
			};
			class DangerFace: RTM_Face
			{
				anim = "ca\characters\Heads\Data\RTM\Woman\Danger.rtm";
			};
			class HurtFace: RTM_Face
			{
				anim = "ca\characters\Heads\Data\RTM\Woman\Hurt.rtm";
			};
			class AwareFace: RTM_Face
			{
				anim = "ca\characters\Heads\Data\RTM\Woman\Aware.rtm";
			};
			class SafeFace: RTM_Face
			{
				anim = "ca\characters\Heads\Data\RTM\Woman\Neutral.rtm";
			};
			class CombatFace: RTM_Face
			{
				anim = "ca\characters\Heads\Data\RTM\Woman\Combat.rtm";
			};
			class Neutral
			{
				type = "compound";
				class Items
				{
					class NeutralFace: MaskFaceWoman{};
					class Lipsync: LipMask{};
					class Eyes: EyeMaskWoman{};
				};
			};
			class Dead
			{
				type = "compound";
				class Items
				{
					class DeadFace: MaskFaceWoman{};
					class Eyes: EyeMaskWoman{};
				};
			};
			class Danger
			{
				type = "compound";
				class Items
				{
					class DangerFace: MaskFaceWoman{};
					class Lipsync: LipMask{};
					class Eyes: EyeMaskWoman{};
				};
			};
			class Hurt
			{
				type = "compound";
				class Items
				{
					class HurtFace: MaskFaceWoman{};
					class Lipsync: LipMask{};
					class Eyes: EyeMaskWoman{};
				};
			};
			class Aware
			{
				type = "compound";
				class Items
				{
					class AwareFace: MaskFaceWoman{};
					class Lipsync: LipMask{};
					class Eyes: EyeMaskWoman{};
				};
			};
			class Safe
			{
				type = "compound";
				class Items
				{
					class SafeFace: MaskFaceWoman{};
					class Lipsync: LipMask{};
					class Eyes: EyeMaskWoman{};
				};
			};
			class Combat
			{
				type = "compound";
				class Items
				{
					class CombatFace: MaskFaceWoman{};
					class Lipsync: LipMask{};
					class Eyes: EyeMaskWoman{};
				};
			};
		};
	};
	class Damsel: WomanHead
	{
		model = "\ca\characters\Heads\Female\Damsel\Damsel";
	};
	class Farmwife: WomanHead
	{
		model = "\ca\characters\Heads\Female\Farmwife\Farmwife";
	};
	class Hooker: WomanHead
	{
		model = "\ca\characters\Heads\Female\Hooker\Hooker";
	};
	class HouseWife: WomanHead
	{
		model = "\ca\characters\Heads\Female\HouseWife\HouseWife";
	};
	class SportsWoman: WomanHead
	{
		model = "\ca\characters\Heads\Female\SportsWoman\SportsWoman";
	};
	class Valentina: WomanHead
	{
		model = "\ca\characters\Heads\Female\Valentina\Valentina";
	};
	class Wife: WomanHead
	{
		model = "\ca\characters\Heads\Female\Wife\Wife";
	};
	class MaskHead: Default
	{
		model = "\ca\characters\Heads\male\DefaultHead\MaskHead";
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\characters\heads\male\defaulthead\data\hhl.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds2.rvmat"};
		};
	};
	class MaskHead_Black: MaskHead
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\characters\heads\male\defaulthead\data\hhl.rvmat","ca\characters\heads\male\blackhead\data\hhl_black_Wounds1.rvmat","ca\characters\heads\male\blackhead\data\hhl_black_Wounds2.rvmat"};
		};
	};
	class MaskHead_1: MaskHead
	{
		model = "\ca\characters\Heads\male\DefaultHead\MaskHead_1";
	};
	class MaskHead_1_Black: MaskHead_1
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\characters\heads\male\defaulthead\data\hhl.rvmat","ca\characters\heads\male\blackhead\data\hhl_black_Wounds1.rvmat","ca\characters\heads\male\blackhead\data\hhl_black_Wounds2.rvmat"};
		};
	};
	class MaskHead_B: Default
	{
		model = "\ca\characters\Heads\male\DefaultHead\MaskHead_B";
	};
	class MaskHead_B_Black: MaskHead_B
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\characters\heads\male\defaulthead\data\hhl.rvmat","ca\characters\heads\male\blackhead\data\hhl_black_Wounds1.rvmat","ca\characters\heads\male\blackhead\data\hhl_black_Wounds2.rvmat"};
		};
	};
	class Cooper: Default
	{
		model = "\ca\characters\Heads\male\Cooper\Cooper";
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\characters\heads\male\cooper\data\cooper.rvmat","ca\characters\heads\male\cooper\data\cooper_wound1.rvmat","ca\characters\heads\male\cooper\data\cooper_wound2.rvmat"};
		};
		selectionHeadWound = "head_injury";
		selectionPersonality = "osobnost";
		class Grimaces
		{
			class Eyes
			{
				type = "eyes";
				eyeMaxAngle = 0.5;
				eyelidUpStartAngle = 0.7;
				eyelidUpMaxAngle = 0.9;
				eyelidDownStartAngle = 0.25;
				eyelidDownMaxAngle = 0.3;
			};
			class Lipsync
			{
				type = "lipsync";
				vizem[] = {"ca\characters\Heads\Data\RTM\Neutral.rtm","ca\characters\Heads\data\RTM\vizem\a.rtm","ca\characters\Heads\data\RTM\vizem\e2.rtm","ca\characters\Heads\data\RTM\vizem\f.rtm","ca\characters\Heads\data\RTM\vizem\m.rtm","ca\characters\Heads\data\RTM\vizem\y.rtm","ca\characters\Heads\data\RTM\vizem\v.rtm","ca\characters\Heads\data\RTM\vizem\i.rtm"};
			};
			class RTM_Face
			{
				type = "rtm";
				anim = "ca\characters\Heads\Data\RTM\Neutral.rtm";
			};
			class NeutralFace: RTM_Face
			{
				anim = "ca\characters\Heads\Data\RTM\FR\Neutral.rtm";
			};
			class DeadFace: RTM_Face
			{
				anim = "ca\characters\Heads\Data\RTM\FR\Death.rtm";
			};
			class DangerFace: RTM_Face
			{
				anim = "ca\characters\Heads\Data\RTM\FR\Danger.rtm";
			};
			class HurtFace: RTM_Face
			{
				anim = "ca\characters\Heads\Data\RTM\FR\Hurt.rtm";
			};
			class AwareFace: RTM_Face
			{
				anim = "ca\characters\Heads\Data\RTM\FR\Aware.rtm";
			};
			class SafeFace: RTM_Face
			{
				anim = "ca\characters\Heads\Data\RTM\FR\Neutral.rtm";
			};
			class CombatFace: RTM_Face
			{
				anim = "ca\characters\Heads\Data\RTM\FR\Combat.rtm";
			};
			class Neutral
			{
				type = "compound";
				class Items
				{
					class NeutralFace: MaskFace{};
					class Lipsync: LipMask{};
					class Eyes: EyeMask{};
				};
			};
			class Dead
			{
				type = "compound";
				class Items
				{
					class DeadFace: MaskFace{};
					class Eyes: EyeMask{};
				};
			};
			class Danger
			{
				type = "compound";
				class Items
				{
					class DangerFace: MaskFace{};
					class Lipsync: LipMask{};
					class Eyes: EyeMask{};
				};
			};
			class Hurt
			{
				type = "compound";
				class Items
				{
					class HurtFace: MaskFace{};
					class Lipsync: LipMask{};
					class Eyes: EyeMask{};
				};
			};
			class Aware
			{
				type = "compound";
				class Items
				{
					class AwareFace: MaskFace{};
					class Lipsync: LipMask{};
					class Eyes: EyeMask{};
				};
			};
			class Safe
			{
				type = "compound";
				class Items
				{
					class SafeFace: MaskFace{};
					class Lipsync: LipMask{};
					class Eyes: EyeMask{};
				};
			};
			class Combat
			{
				type = "compound";
				class Items
				{
					class CombatFace: MaskFace{};
					class Lipsync: LipMask{};
					class Eyes: EyeMask{};
				};
			};
		};
	};
	class BlackHead: Cooper
	{
		model = "\ca\characters\Heads\male\BlackHead\BlackHead";
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\characters\heads\male\blackhead\data\hhl_black.rvmat","ca\characters\heads\male\blackhead\data\hhl_black_Wounds1.rvmat","ca\characters\heads\male\blackhead\data\hhl_black_Wounds2.rvmat"};
		};
	};
	class BlackHead_camo1: BlackHead
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\characters\heads\male\blackhead\data\hhl_black.rvmat","ca\characters\heads\male\blackhead\data\hhl_black_Camo_01_wounds1.rvmat","ca\characters\heads\male\blackhead\data\hhl_black_Camo_01_wounds2.rvmat"};
		};
	};
	class BlackHead_camo2: BlackHead
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\characters\heads\male\blackhead\data\hhl_black.rvmat","ca\characters\heads\male\blackhead\data\hhl_black_Camo_02_wounds1.rvmat","ca\characters\heads\male\blackhead\data\hhl_black_Camo_02_wounds2.rvmat"};
		};
	};
	class BlackHead_camo3: BlackHead
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\characters\heads\male\blackhead\data\hhl_black.rvmat","ca\characters\heads\male\blackhead\data\hhl_black_Camo_03_wounds1.rvmat","ca\characters\heads\male\blackhead\data\hhl_black_Camo_03_wounds2.rvmat"};
		};
	};
	class BlackHead_camo4: BlackHead
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\characters\heads\male\blackhead\data\hhl_black.rvmat","ca\characters\heads\male\blackhead\data\hhl_black_Camo_04_wounds1.rvmat","ca\characters\heads\male\blackhead\data\hhl_black_Camo_04_wounds2.rvmat"};
		};
	};
	class BlackHead_camo5: BlackHead
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\characters\heads\male\blackhead\data\hhl_black.rvmat","ca\characters\heads\male\blackhead\data\hhl_black_Camo_05_wounds1.rvmat","ca\characters\heads\male\blackhead\data\hhl_black_Camo_05_wounds2.rvmat"};
		};
	};
	class BlackHead_camo6: BlackHead
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\characters\heads\male\blackhead\data\hhl_black.rvmat","ca\characters\heads\male\blackhead\data\hhl_black_Camo_06_wounds1.rvmat","ca\characters\heads\male\blackhead\data\hhl_black_Camo_06_wounds2.rvmat"};
		};
	};
	class Miles: Cooper
	{
		model = "\ca\characters\Heads\male\Miles\Miles";
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\characters\heads\male\miles\data\miles.rvmat","ca\characters\heads\male\miles\data\miles_wound1.rvmat","ca\characters\heads\male\miles\data\miles_wound2.rvmat"};
		};
		selectionHeadWound = "head_injury";
		selectionPersonality = "osobnost";
		class Grimaces
		{
			class Eyes
			{
				type = "eyes";
				eyeMaxAngle = 0.5;
				eyelidUpStartAngle = 0;
				eyelidUpMaxAngle = 0;
				eyelidDownStartAngle = 0;
				eyelidDownMaxAngle = 0;
			};
			class Lipsync
			{
				type = "lipsync";
				vizem[] = {"ca\characters\Heads\Data\RTM\Neutral.rtm","ca\characters\Heads\data\RTM\vizem\a.rtm","ca\characters\Heads\data\RTM\vizem\e2.rtm","ca\characters\Heads\data\RTM\vizem\f.rtm","ca\characters\Heads\data\RTM\vizem\m.rtm","ca\characters\Heads\data\RTM\vizem\y.rtm","ca\characters\Heads\data\RTM\vizem\v.rtm","ca\characters\Heads\data\RTM\vizem\i.rtm"};
			};
			class RTM_Face
			{
				type = "rtm";
				anim = "ca\characters\Heads\Data\RTM\Neutral.rtm";
			};
			class NeutralFace: RTM_Face
			{
				anim = "ca\characters\Heads\Data\RTM\FR\Neutral.rtm";
			};
			class DeadFace: RTM_Face
			{
				anim = "ca\characters\Heads\Data\RTM\FR\Death.rtm";
			};
			class DangerFace: RTM_Face
			{
				anim = "ca\characters\Heads\Data\RTM\FR\Danger.rtm";
			};
			class HurtFace: RTM_Face
			{
				anim = "ca\characters\Heads\Data\RTM\FR\Hurt.rtm";
			};
			class AwareFace: RTM_Face
			{
				anim = "ca\characters\Heads\Data\RTM\FR\Aware.rtm";
			};
			class SafeFace: RTM_Face
			{
				anim = "ca\characters\Heads\Data\RTM\FR\Neutral.rtm";
			};
			class CombatFace: RTM_Face
			{
				anim = "ca\characters\Heads\Data\RTM\FR\Combat.rtm";
			};
			class Neutral
			{
				type = "compound";
				class Items
				{
					class NeutralFace: MaskFace{};
					class Lipsync: LipMask{};
					class Eyes: EyeMask{};
				};
			};
			class Dead
			{
				type = "compound";
				class Items
				{
					class DeadFace: MaskFace{};
					class Eyes: EyeMask{};
				};
			};
			class Danger
			{
				type = "compound";
				class Items
				{
					class DangerFace: MaskFace{};
					class Lipsync: LipMask{};
					class Eyes: EyeMask{};
				};
			};
			class Hurt
			{
				type = "compound";
				class Items
				{
					class HurtFace: MaskFace{};
					class Lipsync: LipMask{};
					class Eyes: EyeMask{};
				};
			};
			class Aware
			{
				type = "compound";
				class Items
				{
					class AwareFace: MaskFace{};
					class Lipsync: LipMask{};
					class Eyes: EyeMask{};
				};
			};
			class Safe
			{
				type = "compound";
				class Items
				{
					class SafeFace: MaskFace{};
					class Lipsync: LipMask{};
					class Eyes: EyeMask{};
				};
			};
			class Combat
			{
				type = "compound";
				class Items
				{
					class CombatFace: MaskFace{};
					class Lipsync: LipMask{};
					class Eyes: EyeMask{};
				};
			};
		};
	};
	class Ohara: Miles
	{
		model = "\ca\characters\Heads\male\Ohara\Ohara";
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\characters\heads\male\ohara\data\ohara.rvmat","ca\characters\heads\male\ohara\data\ohara_wound1.rvmat","ca\characters\heads\male\ohara\data\ohara_wound2.rvmat"};
		};
	};
	class Rodriguez: Miles
	{
		model = "\ca\characters\Heads\male\Rodriguez\Rodriguez";
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\characters\heads\male\rodriguez\data\rodriguez.rvmat","ca\characters\heads\male\rodriguez\data\rodriguez_wound1.rvmat","ca\characters\heads\male\rodriguez\data\rodriguez_wound2.rvmat"};
		};
	};
	class Sykes: Miles
	{
		model = "\ca\characters\Heads\male\Sykes\Sykes";
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\characters\heads\male\sykes\data\sykes.rvmat","ca\characters\heads\male\sykes\data\sykes_wound1.rvmat","ca\characters\heads\male\sykes\data\sykes_wound2.rvmat"};
		};
	};
	class Bart: Default
	{
		model = "\ca\characters\Heads\male\bart\bart";
	};
	class Bredy: Default
	{
		model = "\ca\characters\Heads\male\bredy\bredy";
	};
	class Michal: Default
	{
		model = "\ca\characters\Heads\male\michal\michal";
	};
};
//};

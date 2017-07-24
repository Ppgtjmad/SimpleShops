#include "..\HG_IDCS.h"
/*
    Author - HoverGuy
	© All Fucks Reserved
	Website - http://www.sunrise-production.com
*/

class HG_HUD
{
	idd = HG_NO_IDC;
	duration = HG_INFINITE;
	fadeIn = 0;
	fadeOut = 0;
	name = "HG_HUD";
	onLoad = "uiNamespace setVariable ['HG_HUD',_this select 0]";
	onUnload = "uiNamespace setVariable ['HG_HUD',displayNull]";
	onDestroy = "uiNamespace setVariable ['HG_HUD',displayNull]";
	
	class ControlsBackground
	{
		class XPBack: HG_RscPicture
		{
			show = 0;
			idc = HG_HUD_XP_BACK_IDC;
			text = "HG\UI\Textures\back.paa";
			x = 0.835156 * safezoneW + safezoneX;
			y = 0.83 * safezoneH + safezoneY;
			w = 0.165 * safezoneW;
			h = 0.033 * safezoneH;
		};
		
		class XPPicture: HG_RscPicture
		{
			show = 0;
			idc = HG_HUD_XP_PIC_IDC;
		    text = "HG\UI\Icons\xp.paa";
			x = 0.855781 * safezoneW + safezoneX;
			y = 0.819 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.055 * safezoneH;
		};
		
		class XPText: HG_RscText
		{
			show = 0;
			idc = HG_HUD_XP_TEXT_IDC;
			style = "0x01";
			shadow = 0;
			x = 0.891875 * safezoneW + safezoneX;
			y = 0.819 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.055 * safezoneH;
		};
		
		class KillCountBack: XPBack
		{
			idc = HG_HUD_KILL_COUNT_BACK_IDC;
			x = 0.835156 * safezoneW + safezoneX;
			y = 0.874 * safezoneH + safezoneY;
			w = 0.165 * safezoneW;
			h = 0.033 * safezoneH;	
		};
		
		class KillCountPicture: HG_RscPicture
		{
			show = 0;
			idc = HG_HUD_KILL_COUNT_PIC_IDC;
			text = "HG\UI\Icons\gun.paa";
			x = 0.855781 * safezoneW + safezoneX;
			y = 0.863 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.055 * safezoneH;
		};
		
		class KillCountText: HG_RscText
		{
			show = 0;
			idc = HG_HUD_KILL_COUNT_TEXT_IDC;
			style = "0x01";
			shadow = 0;
			x = 0.891875 * safezoneW + safezoneX;
			y = 0.863 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.055 * safezoneH;
		};
		
		class RankBack: HG_RscPicture
		{
			text = "HG\UI\Textures\back.paa";
			x = 0.835156 * safezoneW + safezoneX;
			y = 0.918 * safezoneH + safezoneY;
			w = 0.165 * safezoneW;
			h = 0.033 * safezoneH;	
		};
		
		class RankPicture: HG_RscPicture
		{
			idc = HG_HUD_RANK_PIC_IDC;
		    x = 0.863 * safezoneW + safezoneX;
			y = 0.91 * safezoneH + safezoneY;
			w = 0.03 * safezoneW;
			h = 0.044 * safezoneH;
		};
		
		class RankText: HG_RscText
		{
			idc = HG_HUD_RANK_TEXT_IDC;
			style = "0x01";
			shadow = 0;
			x = 0.891875 * safezoneW + safezoneX;
			y = 0.907 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.055 * safezoneH;
		};
		
		class MoneyBack: RankBack
		{
			x = 0.835156 * safezoneW + safezoneX;
			y = 0.962 * safezoneH + safezoneY;
			w = 0.165 * safezoneW;
			h = 0.033 * safezoneH;
		};
		
		class MoneyPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\money.paa";
			x = 0.855781 * safezoneW + safezoneX;
			y = 0.951 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.055 * safezoneH;
		};
		
		class MoneyText: HG_RscText
		{
			idc = HG_HUD_MONEY_TEXT_IDC;
			style = "0x01";
			shadow = 0;
			x = 0.891875 * safezoneW + safezoneX;
			y = 0.951 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.055 * safezoneH;
		};
	};
};

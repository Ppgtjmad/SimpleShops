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
			x = 0.809375 * safezoneW + safezoneX;
			y = 0.731 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.044 * safezoneH;
		};
		
		class XPPicture: HG_RscPicture
		{
			show = 0;
			idc = HG_HUD_XP_PIC_IDC;
		    text = "HG\UI\Icons\xp.paa";
			x = 0.83 * safezoneW + safezoneX;
			y = 0.7244 * safeZoneH + safeZoneY;
			w = 0.04125 * safeZoneW;
			h = 0.055 * safeZoneH;
		};
		
		class XPText: HG_RscText
		{
			show = 0;
			idc = HG_HUD_XP_TEXT_IDC;
			style = "0x01";
			shadow = 0;
			x = 0.866094 * safeZoneW + safeZoneX;
			y = 0.7244 * safeZoneH + safeZoneY;
			w = 0.0825 * safeZoneW;
			h = 0.055 * safeZoneH;
		};
		
		class KillCountBack: XPBack
		{
			idc = HG_HUD_KILL_COUNT_BACK_IDC;
			x = 0.804219 * safezoneW + safezoneX;
			y = 0.786 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.044 * safezoneH;	
		};
		
		class KillCountPicture: HG_RscPicture
		{
			show = 0;
			idc = HG_HUD_KILL_COUNT_PIC_IDC;
			text = "HG\UI\Icons\gun.paa";
			x = 0.824844 * safeZoneW + safeZoneX;
			y = 0.7794 * safeZoneH + safeZoneY;
			w = 0.04125 * safeZoneW;
			h = 0.055 * safeZoneH;
		};
		
		class KillCountText: HG_RscText
		{
			show = 0;
			idc = HG_HUD_KILL_COUNT_TEXT_IDC;
			style = "0x01";
			shadow = 0;
			x = 0.855781 * safeZoneW + safeZoneX;
			y = 0.7794 * safeZoneH + safeZoneY;
			w = 0.0876563 * safeZoneW;
			h = 0.055 * safeZoneH;
		};
		
		class RankBack: HG_RscPicture
		{
			text = "HG\UI\Textures\back.paa";
			x = 0.835156 * safezoneW + safezoneX;
			y = 0.841 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.044 * safezoneH;	
		};
		
		class RankPicture: HG_RscPicture
		{
			idc = HG_HUD_RANK_PIC_IDC;
		    x = 0.865 * safeZoneW + safeZoneX;
			y = 0.84 * safeZoneH + safeZoneY;
			w = 0.03 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class RankText: HG_RscText
		{
			idc = HG_HUD_RANK_TEXT_IDC;
			style = "0x01";
			shadow = 0;
			x = 0.881562 * safeZoneW + safeZoneX;
			y = 0.8344 * safeZoneH + safeZoneY;
			w = 0.0928125 * safeZoneW;
			h = 0.055 * safeZoneH;
		};
		
		class MoneyBack: RankBack
		{
			x = 0.83 * safezoneW + safezoneX;
			y = 0.896 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.044 * safezoneH;
		};
		
		class MoneyPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\money.paa";
			x = 0.845469 * safeZoneW + safeZoneX;
			y = 0.8894 * safeZoneH + safeZoneY;
			w = 0.04125 * safeZoneW;
			h = 0.055 * safeZoneH;
		};
		
		class MoneyText: HG_RscText
		{
			idc = HG_HUD_MONEY_TEXT_IDC;
			style = "0x01";
			shadow = 0;
			x = 0.876406 * safeZoneW + safeZoneX;
			y = 0.8894 * safeZoneH + safeZoneY;
			w = 0.0928125 * safeZoneW;
			h = 0.055 * safeZoneH;
		};
	};
};

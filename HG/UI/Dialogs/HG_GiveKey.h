#include "..\HG_IDCS.h"
/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/

class HG_GiveKey
{
    idd = HG_GK_IDD;
	enableSimulation = true;
	name = "HG_GiveKey";
	onUnload = "HG_CURSOR_OBJECT = nil; HG_ARRAY_HANDLER = nil";
	
	class ControlsBackground
	{
		class Header: HG_RscText
		{
			colorBackground[] = {0.4,0.4,0.4,1};
			x = 0.407187 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.185625 * safezoneW;
			h = 0.044 * safezoneH;
		};
		
		class Background: HG_RscText
		{
			colorBackground[] = {0,0,0,0.5};
			x = 0.407187 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.185625 * safezoneW;
			h = 0.385 * safezoneH;
		};
		
		class BackgroundFrame: HG_RscFrame
		{
			x = 0.407187 * safezoneW + safezoneX;
		    y = 0.313 * safezoneH + safezoneY;
		    w = 0.185625 * safezoneW;
		    h = 0.429 * safeZoneH;
		};
		
		class WhiteLine: HG_RscPicture
		{
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.407187 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.185625 * safezoneW;
			h = 0.0022 * safeZoneH;
		};
		
		class Picture: HG_RscPicture
		{
			moving = true;
			text = "HG\UI\Icons\key.paa";
			tooltip = "$STR_HG_DLG_TOOLTIP";
			x = 0.407187 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safeZoneH;
		};
		
		class RemoveBtnPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\close.paa";
			x = 0.453594 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safeZoneH;
		};
		
		class RefreshBtnPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\refresh.paa";
			x = 0.489687 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safeZoneH;
		};
		
		class GiveBtnPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\keyadd.paa";
			x = 0.525781 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safezoneH;
		};
		
		class ExitBtnPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\close.paa";
			x = 0.561875 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
	};

	class Controls
	{
		class OwnersList: HG_RscListBox
		{
			idc = HG_GK_OWNERS_LIST_IDC;
			rowHeight = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			x = 0.412344 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.175313 * safezoneW;
			h = 0.33 * safezoneH;
		};
		
		class PlayersCombo: HG_RscCombo
		{
			idc = HG_GK_PLAYERS_COMBO_IDC;
			x = 0.412344 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.175313 * safezoneW;
			h = 0.022 * safezoneH;
		};
		
		class RemoveBtn: HG_RscButtonInvisible
		{
			idc = HG_GK_REMOVE_BTN_IDC;
			tooltip = "$STR_HG_DLG_GK_REMOVE_TOOLTIP";
			onButtonClick = "[0] call HG_fnc_giveKeyBtns";
			x = 0.453594 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safeZoneH;
		};
		
		class RefreshBtn: HG_RscButtonInvisible
		{
			idc = HG_GK_REFRESH_BTN_IDC;
			tooltip = "$STR_HG_DLG_GK_REFRESH_TOOLTIP";
			onButtonClick = "[] call HG_fnc_refreshKeyCombo";
			x = 0.489687 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safeZoneH;
		};
		
		class GiveBtn: HG_RscButtonInvisible
		{
			idc = HG_GK_GIVE_BTN_IDC;
			tooltip = "$STR_HG_DLG_GK_GIVE_TOOLTIP";
			onButtonClick = "[1] call HG_fnc_giveKeyBtns";
			x = 0.525781 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safezoneH;
		};
		
		class ExitButton: HG_RscButtonInvisible
		{
			tooltip = "$STR_HG_DLG_CLOSE_TOOLTIP";
			onButtonClick = "closeDialog 0";
			x = 0.561875 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
	};
};

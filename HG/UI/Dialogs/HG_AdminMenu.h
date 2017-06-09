#include "..\HG_IDCS.h"
/*
    Author - HoverGuy
	© All Fucks Reserved
	Website - http://www.sunrise-production.com
*/

class HG_AdminMenu
{
	idd = HG_ADM_IDD;
	enableSimulation = true;
	movingEnable = true;
	name = "HG_AdminMenu";
	onUnload = "HG_TEMP = nil; HG_OBJECT = nil";
	
	class ControlsBackground
	{
		class Header: HG_RscText
		{
			colorBackground[] = {0.4,0.4,0.4,1};
			x = 0.314375 * safezoneW + safezoneX;
			y = 0.28 * safeZoneH + safeZoneY;
			w = 0.37125 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class Background: HG_RscText
		{
			colorBackground[] = {0,0,0,0.5};
			x = 0.314375 * safezoneW + safezoneX;
		    y = 0.324 * safeZoneH + safeZoneY;
		    w = 0.37125 * safeZoneW;
		    h = 0.396 * safeZoneH;
		};
		
		class BackgroundFrame: HG_RscFrame
		{
			x = 0.314375 * safezoneW + safezoneX;
		    y = 0.28 * safeZoneH + safeZoneY;
		    w = 0.37125 * safeZoneW;
		    h = 0.44 * safeZoneH;
		};
		
		class WhiteLine: HG_RscPicture
		{
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.314375 * safezoneW + safezoneX;
			y = 0.324 * safeZoneH + safeZoneY;
			w = 0.37125 * safeZoneW;
			h = 0.0022 * safeZoneH;
		};
		
		class MainPicture: HG_RscPicture
		{
			moving = true;
			text = "HG\UI\Icons\gear.paa";
			tooltip = "$STR_HG_DLG_TOOLTIP";
			x = 0.314375 * safezoneW + safezoneX;
			y = 0.28 * safeZoneH + safeZoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class RefreshBtnPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\refresh.paa";
			x = 0.350469 * safezoneW + safezoneX;
			y = 0.28 * safeZoneH + safeZoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class KillBtnPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\dead.paa";
			x = 0.474219 * safezoneW + safezoneX;
			y = 0.28 * safeZoneH + safeZoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class SetRankBtnPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\medal.paa";
			x = 0.510312 * safezoneW + safezoneX;
			y = 0.28 * safeZoneH + safeZoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class SetXPBtnPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\xp.paa";
			x = 0.546406 * safezoneW + safezoneX;
			y = 0.28 * safeZoneH + safeZoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class SetKillsBtnPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\gun.paa";
			x = 0.5825 * safezoneW + safezoneX;
			y = 0.28 * safeZoneH + safeZoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class SetCashBtnPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\money.paa";
			x = 0.618594 * safezoneW + safezoneX;
			y = 0.28 * safeZoneH + safeZoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class ExitBtnPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\close.paa";
			x = 0.654688 * safezoneW + safezoneX;
			y = 0.28 * safeZoneH + safeZoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class InfosText: HG_RscStructuredText
		{
			idc = HG_ADM_TEXT_IDC;
			colorBackground[] = {0,0,0,0.5};
			x = 0.505156 * safezoneW + safezoneX;
			y = 0.335 * safeZoneH + safeZoneY;
			w = 0.175313 * safeZoneW;
			h = 0.242 * safeZoneH;
		};
		
		class TextFrame: HG_RscFrame
		{
			x = 0.505156 * safezoneW + safezoneX;
			y = 0.335 * safeZoneH + safeZoneY;
			w = 0.175313 * safeZoneW;
			h = 0.242 * safeZoneH;
		};
		
		class PlayerCount: HG_RscText
		{
			idc = HG_ADM_COUNT_IDC;
			style = "0x02";
			shadow = 0;
			x = 0.386562 * safezoneW + safezoneX;
			y = 0.28 * safeZoneH + safeZoneY;
			w = 0.0721875 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class RankIcon: HG_RscPicture
		{
			text = "HG\UI\Icons\medal.paa";
			x = 0.505156 * safezoneW + safezoneX;
			y = 0.588 * safeZoneH + safeZoneY;
			w = 0.020625 * safeZoneW;
			h = 0.022 * safeZoneH;
		};
		
		class XPIcon: HG_RscPicture
		{
			text = "HG\UI\Icons\xp.paa";
			x = 0.505156 * safezoneW + safezoneX;
			y = 0.621 * safeZoneH + safeZoneY;
			w = 0.020625 * safeZoneW;
			h = 0.022 * safeZoneH;
		};
		
		class KillsIcon: HG_RscPicture
		{
			text = "HG\UI\Icons\gun.paa";
			x = 0.505156 * safezoneW + safezoneX;
			y = 0.654 * safeZoneH + safeZoneY;
			w = 0.020625 * safeZoneW;
			h = 0.022 * safeZoneH;
		};
		
		class CashIcon: HG_RscPicture
		{
			text = "HG\UI\Icons\money.paa";
			x = 0.505156 * safezoneW + safezoneX;
			y = 0.687 * safeZoneH + safeZoneY;
			w = 0.020625 * safeZoneW;
			h = 0.022 * safeZoneH;
		};
	};
	
	class Controls
	{
		class PlayerList: HG_RscListBox
		{
			idc = HG_ADM_LIST_IDC;
			style = "0x02 + 16";
			rowHeight = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			onLBSelChanged = "_this call HG_fnc_adminMenuListChanged";
			x = 0.319531 * safeZoneW + safeZoneX;
			y = 0.335 * safeZoneH + safeZoneY;
			w = 0.180469 * safeZoneW;
			h = 0.374 * safeZoneH;
		};
		
		class RankCombo: HG_RscCombo
		{
			idc = HG_ADM_COMBO_IDC;
			onLBSelChanged = "";
			x = 0.530937 * safeZoneW + safeZoneX;
			y = 0.588 * safeZoneH + safeZoneY;
			w = 0.149531 * safeZoneW;
			h = 0.022 * safeZoneH;
		};
		
		class RefreshButton: HG_RscButtonInvisible
		{
			idc = HG_ADM_REFRESH_IDC;
			tooltip = "$STR_HG_DLG_AM_REFRESH_TOOLTIP";
			onButtonClick = "[] call HG_fnc_refreshPlayers";
			x = 0.350469 * safezoneW + safezoneX;
			y = 0.28 * safeZoneH + safeZoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class KillButton: HG_RscButtonInvisible
		{
			idc = HG_ADM_KILL_IDC;
			tooltip = "$STR_HG_DLG_AM_KILL_TOOLTIP";
			onButtonClick = "[0] call HG_fnc_adminMenuBtns";
			x = 0.474219 * safezoneW + safezoneX;
			y = 0.28 * safeZoneH + safeZoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class SetRankButton: HG_RscButtonInvisible
		{
			idc = HG_ADM_RANK_IDC;
			tooltip = "$STR_HG_DLG_AM_RANK_TOOLTIP";
			onButtonClick = "[1] call HG_fnc_adminMenuBtns";
			x = 0.510312 * safezoneW + safezoneX;
			y = 0.28 * safeZoneH + safeZoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class SetXPButton: HG_RscButtonInvisible
		{
			idc = HG_ADM_XP_IDC;
			tooltip = "$STR_HG_DLG_AM_XP_TOOLTIP";
			onButtonClick = "[2] call HG_fnc_adminMenuBtns";
			x = 0.546406 * safezoneW + safezoneX;
			y = 0.28 * safeZoneH + safeZoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class SetKillsButton: HG_RscButtonInvisible
		{
			idc = HG_ADM_KILLS_IDC;
			tooltip = "$STR_HG_DLG_AM_KILLS_TOOLTIP";
			onButtonClick = "[3] call HG_fnc_adminMenuBtns";
			x = 0.5825 * safezoneW + safezoneX;
			y = 0.28 * safeZoneH + safeZoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class SetCashButton: HG_RscButtonInvisible
		{
			idc = HG_ADM_CASH_IDC;
			tooltip = "$STR_HG_DLG_AM_CASH_TOOLTIP";
			onButtonClick = "[4] call HG_fnc_adminMenuBtns";
			x = 0.618594 * safezoneW + safezoneX;
			y = 0.28 * safeZoneH + safeZoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class XPEdit: HG_RscEdit
		{
			idc = HG_ADM_XP_EDIT_IDC;
			style = "0x02 + 0x40";
			text = "1";
			x = 0.551562 * safeZoneW + safeZoneX;
			y = 0.621 * safeZoneH + safeZoneY;
			w = 0.108281 * safeZoneW;
			h = 0.022 * safeZoneH;
		};
		
		class KillsEdit: XPEdit
		{
			idc = HG_ADM_KILLS_EDIT_IDC;
			y = 0.654 * safeZoneH + safeZoneY;
		};
		
		class CashEdit: XPEdit
		{
			idc = HG_ADM_CASH_EDIT_IDC;
			y = 0.687 * safeZoneH + safeZoneY;
		};
		
		class SubXPBox: HG_RscCheckbox
		{
			idc = HG_ADM_XP_SUB_IDC;
			tooltip = "$STR_HG_DLG_AM_SUB_TOOLTIP";
			onCheckedChanged = "_this call HG_fnc_checkboxChanged";
			x = 0.530937 * safeZoneW + safeZoneX;
			y = 0.621 * safeZoneH + safeZoneY;
			w = 0.0154688 * safeZoneW;
			h = 0.022 * safeZoneH;
		};
		
		class SubKillsBox: SubXPBox
		{
			idc = HG_ADM_KILLS_SUB_IDC;
			y = 0.654 * safeZoneH + safeZoneY;
		};
		
		class SubCashBox: SubXPBox
		{
			idc = HG_ADM_CASH_SUB_IDC;
			y = 0.687 * safeZoneH + safeZoneY;
		};
		
		class AddXPBox: SubXPBox
		{
			idc = HG_ADM_XP_ADD_IDC;
			tooltip = "$STR_HG_DLG_AM_ADD_TOOLTIP";
			x = 0.665 * safeZoneW + safeZoneX;
		};
		
		class AddKillsBox: AddXPBox
		{
			idc = HG_ADM_KILLS_ADD_IDC;
			y = 0.654 * safeZoneH + safeZoneY;
		};
		
		class AddCashBox: AddXPBox
		{
			idc = HG_ADM_CASH_ADD_IDC;
			y = 0.687 * safeZoneH + safeZoneY;
		};
		
		class ExitButton: HG_RscButtonInvisible
		{
			tooltip = "$STR_HG_DLG_CLOSE_TOOLTIP";
			onButtonClick = "closeDialog 0";
			x = 0.654688 * safezoneW + safezoneX;
			y = 0.28 * safeZoneH + safeZoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
	};
};

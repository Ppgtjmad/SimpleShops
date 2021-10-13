#include "..\HG_IDCS.h"
/*
    Author - HoverGuy
    Website - https://northernimpulse.com
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
		    h = 0.429 * safeZoneH;
		};
		
		class BackgroundFrame: HG_RscFrame
		{
			x = 0.314375 * safezoneW + safezoneX;
		    y = 0.28 * safeZoneH + safeZoneY;
		    w = 0.37125 * safeZoneW;
		    h = 0.473 * safeZoneH;
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
		
		class KillBtnPicture: RefreshBtnPicture
		{
			text = "HG\UI\Icons\dead.paa";
			x = 0.438124 * safezoneW + safezoneX;
		};
		
		class SetRankBtnPicture: RefreshBtnPicture
		{
			text = "HG\UI\Icons\medal.paa";
			x = 0.474218 * safezoneW + safezoneX;
		};
		
		class SetXPBtnPicture: RefreshBtnPicture
		{
			text = "HG\UI\Icons\xp.paa";
			x = 0.510312 * safezoneW + safezoneX;
		};
		
		class SetKillsBtnPicture: RefreshBtnPicture
		{
			text = "HG\UI\Icons\gun.paa";
			x = 0.546406 * safezoneW + safezoneX;
		};
		
		class SetCashBtnPicture: RefreshBtnPicture
		{
			text = "HG\UI\Icons\money.paa";
			x = 0.5825 * safezoneW + safezoneX;
		};
		
		class SetBankBtnPicture: RefreshBtnPicture
		{
			text = "HG\UI\Icons\bank.paa";
			x = 0.618594 * safezoneW + safezoneX;
		};
		
		class ExitBtnPicture: RefreshBtnPicture
		{
			text = "HG\UI\Icons\close.paa";
			x = 0.654688 * safezoneW + safezoneX;
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
			colorBackground[] = {0.4,0.4,0.4,1};
			x = 0.319531 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.180469 * safezoneW;
			h = 0.022 * safezoneH;
		};
		
		class RankIcon: HG_RscPicture
		{
			text = "HG\UI\Icons\medal.paa";
			x = 0.505156 * safezoneW + safezoneX;
			y = 0.588 * safeZoneH + safeZoneY;
			w = 0.020625 * safeZoneW;
			h = 0.022 * safeZoneH;
		};
		
		class XPIcon: RankIcon
		{
			text = "HG\UI\Icons\xp.paa";
			y = 0.621 * safeZoneH + safeZoneY;
		};
		
		class KillsIcon: RankIcon
		{
			text = "HG\UI\Icons\gun.paa";
			y = 0.654 * safeZoneH + safeZoneY;
		};
		
		class CashIcon: RankIcon
		{
			text = "HG\UI\Icons\money.paa";
			y = 0.687 * safeZoneH + safeZoneY;
		};
		
		class BankIcon: RankIcon
		{
			text = "HG\UI\Icons\bank.paa";
			y = 0.72 * safezoneH + safezoneY;
		};
		
		class WhitelistHeader: HG_RscText
		{
			show = 0;
			idc = HG_WL_HEADER_IDC;
			colorBackground[] = {0.4,0.4,0.4,1};
			x = 0.113281 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.195937 * safezoneW;
			h = 0.044 * safezoneH;
		};
		
		class WhitelistHeaderText: HG_RscText
		{
			show = 0;
			idc = HG_WL_HEADER_TEXT_IDC;
			text = "$STR_HG_DLG_WL_TEXT";
			x = 0.113281 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.044 * safezoneH;
		};
		
		class WhitelistBackground: HG_RscText
		{
			show = 0;
			idc = HG_WL_BACK_IDC;
			colorBackground[] = {0,0,0,0.5};
			x = 0.113281 * safezoneW + safezoneX;
		    y = 0.324 * safezoneH + safezoneY;
		    w = 0.195937 * safezoneW;
		    h = 0.429 * safezoneH;
		};
		
		class WhitelistBackgroundFrame: HG_RscFrame
		{
			show = 0;
			idc = HG_WL_BACK_FRAME_IDC;
			x = 0.113281 * safezoneW + safezoneX;
		    y = 0.28 * safezoneH + safezoneY;
		    w = 0.195937 * safezoneW;
		    h = 0.473 * safeZoneH;
		};
		
		class WhitelistWhiteLine: HG_RscPicture
		{
			show = 0;
			idc = HG_WL_LINE_IDC;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.113281 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.195937 * safezoneW;
			h = 0.0022 * safezoneH;
		};
		
		class AddUIDBtnPicture: RefreshBtnPicture
		{
			show = 0;
			idc = HG_WL_UID_ADD_PIC_IDC;
			text = "HG\UI\Icons\add_bis.paa";
			x = 0.242187 * safezoneW + safezoneX;
		};
		
		class RemoveBtnPicture: RefreshBtnPicture
		{
			show = 0;
			idc = HG_WL_UID_REMOVE_PIC_IDC;
			text = "HG\UI\Icons\sub_bis.paa";
			x = 0.278281 * safezoneW + safezoneX;
		};
		
		class WhitelistInfo: HG_RscText
		{
			show = 0;
			idc = HG_WL_INFO_TEXT_IDC;
			text = "$STR_HG_DLG_WL_INFO_TEXT";
			style = "0x02";
			shadow = 0;
			x = 0.118437 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.185625 * safezoneW;
			h = 0.341 * safezoneH;
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
			y = 0.357 * safeZoneH + safeZoneY;
			w = 0.180469 * safeZoneW;
			h = 0.385 * safeZoneH;
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
		
		class KillButton: RefreshButton
		{
			idc = HG_ADM_KILL_IDC;
			tooltip = "$STR_HG_DLG_AM_KILL_TOOLTIP";
			onButtonClick = "[4] call HG_fnc_adminMenuBtns";
			x = 0.438124 * safezoneW + safezoneX;
		};
		
		class SetRankButton: RefreshButton
		{
			idc = HG_ADM_RANK_IDC;
			tooltip = "$STR_HG_DLG_AM_RANK_TOOLTIP";
			onButtonClick = "[5] call HG_fnc_adminMenuBtns";
			x = 0.474218 * safezoneW + safezoneX;
		};
		
		class SetXPButton: RefreshButton
		{
			idc = HG_ADM_XP_IDC;
			tooltip = "$STR_HG_DLG_AM_XP_TOOLTIP";
			onButtonClick = "[0] call HG_fnc_adminMenuBtns";
			x = 0.510312 * safezoneW + safezoneX;
		};
		
		class SetKillsButton: RefreshButton
		{
			idc = HG_ADM_KILLS_IDC;
			tooltip = "$STR_HG_DLG_AM_KILLS_TOOLTIP";
			onButtonClick = "[1] call HG_fnc_adminMenuBtns";
			x = 0.546406 * safezoneW + safezoneX;
		};
		
		class SetCashButton: RefreshButton
		{
			idc = HG_ADM_CASH_IDC;
			tooltip = "$STR_HG_DLG_AM_CASH_TOOLTIP";
			onButtonClick = "[2] call HG_fnc_adminMenuBtns";
			x = 0.5825 * safezoneW + safezoneX;
		};
		
		class SetBankButton: RefreshButton
		{
			idc = HG_ADM_BANK_IDC;
			tooltip = "$STR_HG_DLG_AM_BANK_TOOLTIP";
			onButtonClick = "[3] call HG_fnc_adminMenuBtns";
			x = 0.618594 * safezoneW + safezoneX;
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
		
		class BankEdit: XPEdit
		{
			idc = HG_ADM_BANK_EDIT_IDC;
			y = 0.72 * safezoneH + safezoneY;
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
		
		class SubBankBox: SubXPBox
		{
			idc = HG_ADM_BANK_SUB_IDC;
			y = 0.72 * safezoneH + safezoneY;
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
		
		class AddBankBox: AddXPBox
		{
			idc = HG_ADM_BANK_ADD_IDC;
			y = 0.72 * safezoneH + safezoneY;
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
		
		class WhitelistSide: HG_RscCombo
		{
			show = 0;
			idc = HG_WL_SIDE_COMBO_IDC;
			onLBSelChanged = "[] call HG_fnc_refreshWhitelist";
			x = 0.118437 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.185625 * safezoneW;
			h = 0.022 * safezoneH;
		};
		
		class WhitelistList: HG_RscListBox
		{
			show = 0;
			idc = HG_WL_UID_LIST_IDC;
			rowHeight = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			x = 0.118437 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.185625 * safezoneW;
			h = 0.341 * safezoneH;
		};
		
		class WhitelistUID: HG_RscEdit
		{
			show = 0;
			idc = HG_WL_UID_EDIT_IDC;
			maxChars = 17;
			x = 0.118437 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.185625 * safezoneW;
			h = 0.022 * safezoneH;
		};
		
		class AddUIDButton: RefreshButton
		{
			show = 0;
			idc = HG_WL_UID_ADD_IDC;
			tooltip = "$STR_HG_DLG_WL_ADD_UID_TOOLTIP";
			onButtonClick = "[6] call HG_fnc_adminMenuBtns";
			x = 0.242187 * safezoneW + safezoneX;
		};
		
		class RemoveButton: RefreshButton
		{
			show = 0;
			idc = HG_WL_UID_REMOVE_IDC;
			tooltip = "$STR_HG_DLG_WL_REMOVE_TOOLTIP";
			onButtonClick = "[7] call HG_fnc_adminMenuBtns";
			x = 0.278281 * safezoneW + safezoneX;
		};
	};
};

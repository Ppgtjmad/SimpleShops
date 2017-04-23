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
			x = 2 * GUI_GRID_W + GUI_GRID_X;
			y = 2.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 36 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		
		class Background: HG_RscText
		{
			colorBackground[] = {0,0,0,0.5};
			x = 2 * GUI_GRID_W + GUI_GRID_X;
		    y = 4.5 * GUI_GRID_H + GUI_GRID_Y;
		    w = 36 * GUI_GRID_W;
		    h = 18 * GUI_GRID_H;
		};
		
		class BackgroundFrame: HG_RscFrame
		{
			x = 2 * GUI_GRID_W + GUI_GRID_X;
		    y = 2.5 * GUI_GRID_H + GUI_GRID_Y;
		    w = 36 * GUI_GRID_W;
		    h = 20 * GUI_GRID_H;
		};
		
		class WhiteLine: HG_RscPicture
		{
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 2 * GUI_GRID_W + GUI_GRID_X;
			y = 4.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 36 * GUI_GRID_W;
			h = 0.1 * GUI_GRID_H;
		};
		
		class MainPicture: HG_RscPicture
		{
			moving = true;
			text = "HG\UI\Icons\gear.paa";
			tooltip = "$STR_HG_DLG_TOOLTIP";
			x = 2 * GUI_GRID_W + GUI_GRID_X;
			y = 2.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		
		class RefreshBtnPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\refresh.paa";
			x = 5.5 * GUI_GRID_W + GUI_GRID_X;
			y = 2.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		
		class KillBtnPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\dead.paa";
			x = 17.5 * GUI_GRID_W + GUI_GRID_X;
			y = 2.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		
		class SetRankBtnPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\medal.paa";
			x = 21 * GUI_GRID_W + GUI_GRID_X;
			y = 2.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		
		class SetXPBtnPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\xp.paa";
			x = 24.5 * GUI_GRID_W + GUI_GRID_X;
			y = 2.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		
		class SetKillsBtnPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\gun.paa";
			x = 28 * GUI_GRID_W + GUI_GRID_X;
			y = 2.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		
		class SetCashBtnPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\money.paa";
			x = 31.5 * GUI_GRID_W + GUI_GRID_X;
			y = 2.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		
		class ExitBtnPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\close.paa";
			x = 35 * GUI_GRID_W + GUI_GRID_X;
			y = 2.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		
		class InfosText: HG_RscStructuredText
		{
			idc = HG_ADM_TEXT_IDC;
			colorBackground[] = {0,0,0,0.5};
			x = 20.5 * GUI_GRID_W + GUI_GRID_X;
			y = 5 * GUI_GRID_H + GUI_GRID_Y;
			w = 17 * GUI_GRID_W;
			h = 11 * GUI_GRID_H;
		};
		
		class TextFrame: HG_RscFrame
		{
			x = 20.5 * GUI_GRID_W + GUI_GRID_X;
			y = 5 * GUI_GRID_H + GUI_GRID_Y;
			w = 17 * GUI_GRID_W;
			h = 11 * GUI_GRID_H;
		};
		
		class PlayerCount: HG_RscText
		{
			idc = HG_ADM_COUNT_IDC;
			style = "0x02";
			shadow = 0;
			x = 9 * GUI_GRID_W + GUI_GRID_X;
			y = 2.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 7 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		
		class RankIcon: HG_RscPicture
		{
			text = "HG\UI\Icons\medal.paa";
			x = 20.5 * GUI_GRID_W + GUI_GRID_X;
			y = 16.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 2 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		
		class XPIcon: HG_RscPicture
		{
			text = "HG\UI\Icons\xp.paa";
			x = 20.5 * GUI_GRID_W + GUI_GRID_X;
			y = 18 * GUI_GRID_H + GUI_GRID_Y;
			w = 2 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		
		class KillsIcon: HG_RscPicture
		{
			text = "HG\UI\Icons\gun.paa";
			x = 20.5 * GUI_GRID_W + GUI_GRID_X;
			y = 19.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 2 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		
		class CashIcon: HG_RscPicture
		{
			text = "HG\UI\Icons\money.paa";
			x = 20.5 * GUI_GRID_W + GUI_GRID_X;
			y = 21 * GUI_GRID_H + GUI_GRID_Y;
			w = 2 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
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
			x = 2.5 * GUI_GRID_W + GUI_GRID_X;
			y = 5 * GUI_GRID_H + GUI_GRID_Y;
			w = 17.5 * GUI_GRID_W;
			h = 17 * GUI_GRID_H;
		};
		
		class RankCombo: HG_RscCombo
		{
			idc = HG_ADM_COMBO_IDC;
			onLBSelChanged = "";
			x = 23 * GUI_GRID_W + GUI_GRID_X;
			y = 16.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 14.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		
		class RefreshButton: HG_RscButtonInvisible
		{
			idc = HG_ADM_REFRESH_IDC;
			tooltip = "$STR_HG_DLG_AM_REFRESH_TOOLTIP";
			onButtonClick = "[] call HG_fnc_refreshPlayers";
			x = 5.5 * GUI_GRID_W + GUI_GRID_X;
			y = 2.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		
		class KillButton: HG_RscButtonInvisible
		{
			idc = HG_ADM_KILL_IDC;
			tooltip = "$STR_HG_DLG_AM_KILL_TOOLTIP";
			onButtonClick = "[0] call HG_fnc_adminMenuBtns";
			x = 17.5 * GUI_GRID_W + GUI_GRID_X;
			y = 2.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		
		class SetRankButton: HG_RscButtonInvisible
		{
			idc = HG_ADM_RANK_IDC;
			tooltip = "$STR_HG_DLG_AM_RANK_TOOLTIP";
			onButtonClick = "[1] call HG_fnc_adminMenuBtns";
			x = 21 * GUI_GRID_W + GUI_GRID_X;
			y = 2.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		
		class SetXPButton: HG_RscButtonInvisible
		{
			idc = HG_ADM_XP_IDC;
			tooltip = "$STR_HG_DLG_AM_XP_TOOLTIP";
			onButtonClick = "[2] call HG_fnc_adminMenuBtns";
			x = 24.5 * GUI_GRID_W + GUI_GRID_X;
			y = 2.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		
		class SetKillsButton: HG_RscButtonInvisible
		{
			idc = HG_ADM_KILLS_IDC;
			tooltip = "$STR_HG_DLG_AM_KILLS_TOOLTIP";
			onButtonClick = "[3] call HG_fnc_adminMenuBtns";
			x = 28 * GUI_GRID_W + GUI_GRID_X;
			y = 2.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		
		class SetCashButton: HG_RscButtonInvisible
		{
			idc = HG_ADM_CASH_IDC;
			tooltip = "$STR_HG_DLG_AM_CASH_TOOLTIP";
			onButtonClick = "[4] call HG_fnc_adminMenuBtns";
			x = 31.5 * GUI_GRID_W + GUI_GRID_X;
			y = 2.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		
		class XPEdit: HG_RscEdit
		{
			idc = HG_ADM_XP_EDIT_IDC;
			style = "0x02 + 0x40";
			text = "1";
			x = 25 * GUI_GRID_W + GUI_GRID_X;
			y = 18 * GUI_GRID_H + GUI_GRID_Y;
			w = 10.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		
		class KillsEdit: XPEdit
		{
			idc = HG_ADM_KILLS_EDIT_IDC;
			y = 19.5 * GUI_GRID_H + GUI_GRID_Y;
		};
		
		class CashEdit: XPEdit
		{
			idc = HG_ADM_CASH_EDIT_IDC;
			y = 21 * GUI_GRID_H + GUI_GRID_Y;
		};
		
		class SubXPBox: HG_RscCheckbox
		{
			idc = HG_ADM_XP_SUB_IDC;
			tooltip = "$STR_HG_DLG_AM_SUB_TOOLTIP";
			onCheckedChanged = "_this call HG_fnc_checkboxChanged";
			x = 23 * GUI_GRID_W + GUI_GRID_X;
			y = 18 * GUI_GRID_H + GUI_GRID_Y;
			w = 1.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		
		class SubKillsBox: SubXPBox
		{
			idc = HG_ADM_KILLS_SUB_IDC;
			y = 19.5 * GUI_GRID_H + GUI_GRID_Y;
		};
		
		class SubCashBox: SubXPBox
		{
			idc = HG_ADM_CASH_SUB_IDC;
			y = 21 * GUI_GRID_H + GUI_GRID_Y;
		};
		
		class AddXPBox: SubXPBox
		{
			idc = HG_ADM_XP_ADD_IDC;
			tooltip = "$STR_HG_DLG_AM_ADD_TOOLTIP";
			x = 36 * GUI_GRID_W + GUI_GRID_X;
		};
		
		class AddKillsBox: AddXPBox
		{
			idc = HG_ADM_KILLS_ADD_IDC;
			y = 19.5 * GUI_GRID_H + GUI_GRID_Y;
		};
		
		class AddCashBox: AddXPBox
		{
			idc = HG_ADM_CASH_ADD_IDC;
			y = 21 * GUI_GRID_H + GUI_GRID_Y;
		};
		
		class ExitButton: HG_RscButtonInvisible
		{
			tooltip = "$STR_HG_DLG_CLOSE_TOOLTIP";
			onButtonClick = "closeDialog 0";
			x = 35 * GUI_GRID_W + GUI_GRID_X;
			y = 2.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
	};
};

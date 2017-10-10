#include "..\HG_IDCS.h"
/*
    Author - HoverGuy
	© All Fucks Reserved
	Website - http://www.sunrise-production.com
*/

class HG_ATM
{
	idd = HG_ATM_IDD;
	enableSimulation = true;
	movingEnable = true;
	name = "HG_ATM";
	onUnload = "HG_TEMP_ARRAY = nil";
	
	class ControlsBackground
	{
		class Header: HG_RscText
		{
			colorBackground[] = {0.4,0.4,0.4,1};
			x = 0.391719 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.216563 * safezoneW;
			h = 0.044 * safeZoneH;
		};
		
		class Background: HG_RscText
		{
			colorBackground[] = {0,0,0,0.5};
			x = 0.391719 * safezoneW + safezoneX;
		    y = 0.346 * safezoneH + safezoneY;
		    w = 0.216563 * safezoneW;
		    h = 0.341 * safezoneH;
		};
		
		class BackgroundFrame: HG_RscFrame
		{
			x = 0.391719 * safezoneW + safezoneX;
		    y = 0.302 * safezoneH + safezoneY;
		    w = 0.216563 * safezoneW;
		    h = 0.385 * safezoneH;
		};
		
		class WhiteLine: HG_RscPicture
		{
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.391719 * safezoneW + safezoneX;
			y = 0.3482 * safezoneH + safezoneY;
			w = 0.216563 * safezoneW;
			h = 0.0022 * safeZoneH;
		};
		
		class MainPicture: HG_RscPicture
		{
			moving = true;
			text = "HG\UI\Icons\atm.paa";
			tooltip = "$STR_HG_DLG_TOOLTIP";
			x = 0.391719 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class ExitBtnPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\close.paa";
			x = 0.577344 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class AccFrame: HG_RscFrame
		{
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.20625 * safezoneW;
			h = 0.132 * safezoneH;
		};
		
		class AccTitle: HG_RscText
		{
			text = "$STR_HG_ATM_ACC_TITLE";
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		
		class AccText: HG_RscText
		{
			idc = HG_ATM_ACC_TEXT_IDC;
			style = "0x02";
			shadow = 0;
			sizeEx = 0.08;
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.20625 * safezoneW;
			h = 0.099 * safezoneH;
		};
		
		class CashFrame: AccFrame
		{
			y = 0.544 * safezoneH + safezoneY;
		};
	
	    class CashTitle: AccTitle
		{
			text = "$STR_HG_ATM_CASH_TITLE";
			y = 0.544 * safezoneH + safezoneY;
		};
		
		class CashText: AccText
		{
			idc = HG_ATM_CASH_TEXT_IDC;
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
		};
		
		class DepositBtnPic: HG_RscPicture
		{
			text = "HG\UI\Icons\up.paa";
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safezoneH;	
		};
		
		class WithdrawBtnPic: HG_RscPicture
		{
			text = "HG\UI\Icons\down.paa";
			x = 0.427812 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safezoneH;	
		};
		
		class TransferBtnPic: HG_RscPicture
		{
			text = "HG\UI\Icons\right.paa";
			x = 0.572187 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safezoneH;
		};
		
		class RefreshBtnPic: HG_RscPicture
		{
			text = "HG\UI\Icons\refresh.paa";
			x = 0.54125 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safezoneH;
		};
	};
	
	class Controls
	{
		class AccEdit: HG_RscEdit
		{
			idc = HG_ATM_ACC_EDIT_IDC;
			x = 0.5 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.022 * safezoneH;	
		};
		
		class CashEdit: AccEdit
		{
			idc = HG_ATM_CASH_EDIT_IDC;
			y = 0.544 * safezoneH + safezoneY;
		};
		
		class DepositBtn: HG_RscButtonInvisible
		{
			tooltip = "$STR_HG_ATM_DEPOSIT_TOOLTIP";
			onButtonClick = "[0] call HG_fnc_atmBtns";
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safezoneH;	
		};
		
		class WithdrawBtn: HG_RscButtonInvisible
		{
			tooltip = "$STR_HG_ATM_WITHDRAW_TOOLTIP";
			onButtonClick = "[1] call HG_fnc_atmBtns";
			x = 0.427812 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safezoneH;	
		};
		
		class PlayersCombo: HG_RscCombo
		{
			idc = HG_ATM_PLAYERS_COMBO_IDC;
			x = 0.45875 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.022 * safezoneH;
		};
		
		class TransferBtn: HG_RscButtonInvisible
		{
			idc = HG_ATM_TRANSFER_BTN_IDC;
			tooltip = "$STR_HG_ATM_TRANSFER_TOOLTIP";
			onButtonClick = "[2] call HG_fnc_atmBtns";
			x = 0.572187 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safezoneH;
		};
		
		class RefreshBtn: HG_RscButtonInvisible
		{
			idc = HG_ATM_REFRESH_BTN_IDC;
			tooltip = "$STR_HG_ATM_REFRESH_TOOLTIP";
			onButtonClick = "[] call HG_fnc_atmRefresh";
			x = 0.54125 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safezoneH;
		};
		
		class ExitButton: HG_RscButtonInvisible
		{
			tooltip = "$STR_HG_DLG_CLOSE_TOOLTIP";
			onButtonClick = "closeDialog 0";
			x = 0.577344 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
	};
};

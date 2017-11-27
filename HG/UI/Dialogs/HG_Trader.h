#include "..\HG_IDCS.h"
/*
    Author - HoverGuy
	© All Fucks Reserved
	Website - http://www.sunrise-production.com
*/

class HG_Trader
{
    idd = HG_TRADER_IDD;
	enableSimulation = true;
	movingEnable = true;
	name = "HG_Trader";
	onUnload = "[] call HG_fnc_dialogOnUnloadTrader";
	
	class ControlsBackground
	{
		class Header: HG_RscText
		{
			colorBackground[] = {0.4,0.4,0.4,1};
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.4125 * safezoneW;
			h = 0.044 * safeZoneH;
		};
		
		class Background: HG_RscText
		{
			colorBackground[] = {0,0,0,0.5};
			x = 0.29375 * safezoneW + safezoneX;
		    y = 0.269 * safezoneH + safezoneY;
		    w = 0.4125 * safezoneW;
		    h = 0.506 * safezoneH;
		};
		
		class BackgroundFrame: HG_RscFrame
		{
			x = 0.29375 * safezoneW + safezoneX;
		    y = 0.225 * safezoneH + safezoneY;
		    w = 0.4125 * safezoneW;
		    h = 0.55 * safezoneH;
		};
		
		class WhiteLine: HG_RscPicture
		{
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.4125 * safezoneW;
			h = 0.0022 * safeZoneH;
		};
		
		class ShopPicture: HG_RscPicture
		{
			moving = true;
			text = "HG\UI\Icons\money.paa";
			tooltip = "$STR_HG_DLG_TOOLTIP";
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class ExitBtnPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\close.paa";
			x = 0.675312 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class QuantityText: HG_RscText
		{
			idc = HG_TRADER_QTY_IDC;
			style = "0x02";
			x = 0.371094 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.0360937 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class Price: HG_RscText
		{
			idc = HG_TRADER_PRICE_IDC;
			style = "0x02";
			shadow = 0;
			x = 0.448438 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.044 * safeZoneH;
		};
		
		class TotalText: HG_RscText
		{
			idc = HG_TRADER_TOTAL_IDC;
			style = "0x02";
			shadow = 0;
			x = 0.536094 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.0876563 * safezoneW;
			h = 0.044 * safeZoneH;
		};
		
		class SubBtnPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\sub.paa";
			x = 0.335 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class AddBtnPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\add.paa";
			x = 0.412344 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class SellBtnPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\sell.paa";
			x = 0.628906 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
	};
	
	class Controls
	{
		class InventoryTree: HG_RscTree
		{
			idc = HG_TRADER_TREE_IDC;
			onTreeSelChanged = "_this call HG_fnc_traderTreeChanged";
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.195937 * safezoneW;
			h = 0.484 * safezoneH;
		};
		
		class TraderList: HG_RscListBox
		{
			idc = HG_TRADER_LIST_IDC;
			rowHeight = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			x = 0.5 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.201094 * safezoneW;
			h = 0.484 * safezoneH;
		};
		
		class SubButton: HG_RscButtonInvisible
		{
			idc = HG_TRADER_SUB_BTN_IDC;
			tooltip = "-1";
			onButtonClick = "[0] call HG_fnc_traderBtns";
			x = 0.335 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class AddButton: HG_RscButtonInvisible
		{
			idc = HG_TRADER_ADD_BTN_IDC;
			tooltip = "+1";
			onButtonClick = "[1] call HG_fnc_traderBtns";
			x = 0.412344 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class SellButton: HG_RscButtonInvisible
		{
			idc = HG_TRADER_SELL_BTN_IDC;
			tooltip = "$STR_HG_DLG_TR_SELL_TOOLTIP";
			onButtonClick = "[2] call HG_fnc_traderBtns";
			x = 0.628906 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class ExitButton: HG_RscButtonInvisible
		{
			tooltip = "$STR_HG_DLG_CLOSE_TOOLTIP";
			onButtonClick = "closeDialog 0";
			x = 0.675312 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
	};
};

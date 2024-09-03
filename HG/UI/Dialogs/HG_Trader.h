#include "..\HG_IDCS.h"
/*
    Author - HoverGuy
	GitHub - https://github.com/Ppgtjmad/SimpleShops
	Steam - https://steamcommunity.com/id/HoverGuy/
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
		
		class InventoryTitle: HG_RscText
		{
			text = "$STR_HG_DLG_TR_INVENTORY_TITLE";
			shadow = 0;
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.28371 * safezoneH + safezoneY;
			w = 0.195937 * safezoneW;
			h = 0.0188079 * safezoneH;
		};
		
		class InventoryTitleLine: HG_RscPicture
		{
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.302518 * safezoneH + safezoneY;
			w = 0.195937 * safezoneW;
			h = 0.0022 * safeZoneH;
		};
		
		class TraderTitle: HG_RscText
		{
			text = "$STR_HG_DLG_TR_TRADER_TITLE";
			shadow = 0;
			x = 0.5 * safezoneW + safezoneX;
			y = 0.28371 * safezoneH + safezoneY;
			w = 0.201094 * safezoneW;
			h = 0.0188079 * safezoneH;
		};
		
		class TraderTitleLine: HG_RscPicture
		{
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.5 * safezoneW + safezoneX;
			y = 0.302518 * safezoneH + safezoneY;
			w = 0.201094 * safezoneW;
			h = 0.0022 * safeZoneH;
		};
	};
	
	class Controls
	{
		class InventoryTree: HG_RscTree
		{
			idc = HG_TRADER_TREE_IDC;
			onTreeSelChanged = "_this call HG_fnc_traderTreeChanged";
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.312486 * safezoneH + safezoneY;
			w = 0.195937 * safezoneW;
			h = 0.451388 * safezoneH;
		};
		
		class TraderList: HG_RscListBox
		{
			idc = HG_TRADER_LIST_IDC;
			rowHeight = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			x = 0.5 * safezoneW + safezoneX;
			y = 0.312486 * safezoneH + safezoneY;
			w = 0.201094 * safezoneW;
			h = 0.451388 * safezoneH;
		};
		
		class SubButton: HG_RscActivePicture
		{
			idc = HG_TRADER_SUB_BTN_IDC;
			text = "HG\UI\Icons\sub.paa";
			tooltip = "-1";
			onButtonClick = "[0] call HG_fnc_traderBtns";
			x = 0.335 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class AddButton: HG_RscActivePicture
		{
			idc = HG_TRADER_ADD_BTN_IDC;
			text = "HG\UI\Icons\add.paa";
			tooltip = "+1";
			onButtonClick = "[1] call HG_fnc_traderBtns";
			x = 0.412344 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class SellButton: HG_RscActivePicture
		{
			idc = HG_TRADER_SELL_BTN_IDC;
			text = "HG\UI\Icons\sell.paa";
			tooltip = "$STR_HG_DLG_TR_SELL_TOOLTIP";
			onButtonClick = "[2] call HG_fnc_traderBtns";
			x = 0.628906 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class ExitButton: HG_RscActivePicture
		{
			text = "HG\UI\Icons\close.paa";
			tooltip = "$STR_HG_DLG_CLOSE_TOOLTIP";
			onButtonClick = "closeDialog 0";
			x = 0.675312 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
	};
};

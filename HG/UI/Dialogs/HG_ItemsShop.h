#include "..\HG_IDCS.h"
/*
    Author - HoverGuy
	© All Fucks Reserved
	Website - http://www.sunrise-production.com
*/

class HG_ItemsShop
{
    idd = HG_ITEMS_SHOP_IDD;
	enableSimulation = true;
	movingEnable = true;
	name = "HG_ItemsShop";
	onUnload = "[] call HG_fnc_dialogOnUnloadItems";
	
	class ControlsBackground
	{
		class Header: HG_RscText
		{
			colorBackground[] = {0.4,0.4,0.4,1};
			x = 0.324687 * safezoneW + safezoneX;
			y = 0.28 * safeZoneH + safeZoneY;
			w = 0.350625 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class Background: HG_RscText
		{
			colorBackground[] = {0,0,0,0.5};
			x = 0.324687 * safezoneW + safezoneX;
		    y = 0.324 * safeZoneH + safeZoneY;
		    w = 0.350625 * safeZoneW;
		    h = 0.429 * safeZoneH;
		};
		
		class BackgroundFrame: HG_RscFrame
		{
			x = 0.324687 * safezoneW + safezoneX;
		    y = 0.28 * safeZoneH + safeZoneY;
		    w = 0.350625 * safeZoneW;
		    h = 0.473 * safeZoneH;
		};
		
		class WhiteLine: HG_RscPicture
		{
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.324687 * safezoneW + safezoneX;
			y = 0.324 * safeZoneH + safeZoneY;
			w = 0.350625 * safeZoneW;
			h = 0.0022 * safeZoneH;
		};
		
		class ShopPicture: HG_RscPicture
		{
			moving = true;
			text = "HG\UI\Icons\money.paa";
			tooltip = "$STR_HG_DLG_TOOLTIP";
			x = 0.324687 * safezoneW + safezoneX;
			y = 0.28 * safeZoneH + safeZoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class AddBtnPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\add.paa";
			x = 0.443281 * safeZoneW + safeZoneX;
			y = 0.28 * safeZoneH + safeZoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class SubBtnPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\sub.paa";
			x = 0.365937 * safeZoneW + safeZoneX;
			y = 0.28 * safeZoneH + safeZoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class BuyBtnPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\buy.paa";
			x = 0.572187 * safeZoneW + safeZoneX;
			y = 0.28 * safeZoneH + safeZoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class MyCashBtnPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\mycash.paa";
			x = 0.608281 * safeZoneW + safeZoneX;
			y = 0.28 * safeZoneH + safeZoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class ExitBtnPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\close.paa";
			x = 0.644375 * safeZoneW + safeZoneX;
			y = 0.28 * safeZoneH + safeZoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class ItemText: HG_RscStructuredText
		{
			idc = HG_ITEMS_ITEM_TEXT_IDC;
			colorBackground[] = {0,0,0,0.5};
			x = 0.515469 * safeZoneW + safeZoneX;
			y = 0.467 * safeZoneH + safeZoneY;
			w = 0.154687 * safeZoneW;
			h = 0.275 * safeZoneH;
		};
		
		class TextFrame: HG_RscFrame
		{
			x = 0.515469 * safeZoneW + safeZoneX;
			y = 0.467 * safeZoneH + safeZoneY;
			w = 0.154687 * safeZoneW;
			h = 0.275 * safeZoneH;
		};
		
		class ItemFrame: HG_RscFrame
		{
		    x = 0.515469 * safeZoneW + safeZoneX;
			y = 0.335 * safeZoneH + safeZoneY;
			w = 0.154687 * safeZoneW;
			h = 0.121 * safeZoneH;	
		};
		
		class ItemBackground: HG_RscText
		{
			colorBackground[] = {0,0,0,0.5};
			x = 0.515469 * safeZoneW + safeZoneX;
			y = 0.335 * safeZoneH + safeZoneY;
			w = 0.154687 * safeZoneW;
			h = 0.121 * safeZoneH;
		};
		
		class ItemPicture: HG_RscPicture
		{
		    idc = HG_ITEMS_ITEM_PICTURE_IDC;
			style = "0x30 + 0x800";
			x = 0.515469 * safeZoneW + safeZoneX;
			y = 0.335 * safeZoneH + safeZoneY;
			w = 0.154687 * safeZoneW;
			h = 0.121 * safeZoneH;
		};
		
		class AmountText: HG_RscText
		{
			idc = HG_ITEMS_AMOUNT_IDC;
			style = "0x02";
			x = 0.402031 * safeZoneW + safeZoneX;
			y = 0.28 * safeZoneH + safeZoneY;
			w = 0.0360937 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class TotalText: HG_RscText
		{
			idc = HG_ITEMS_TOTAL_IDC;
			style = "0x02";
			shadow = 0;
			x = 0.479375 * safeZoneW + safeZoneX;
			y = 0.28 * safeZoneH + safeZoneY;
			w = 0.0825 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
	};
	
	class Controls
	{
	    class ItemList: HG_RscListBox
		{
			idc = HG_ITEMS_ITEM_LIST_IDC;
			style = "0x02 + 16";
			onLBSelChanged = "_this call HG_fnc_itemSelectionChanged";
			x = 0.329844 * safeZoneW + safeZoneX;
			y = 0.368 * safeZoneH + safeZoneY;
			w = 0.180469 * safeZoneW;
			h = 0.374 * safeZoneH;
		};
		
		class ItemSwitch: HG_RscXListBox
		{
		    idc = HG_ITEMS_ITEM_SWITCH_IDC;
			onLBSelChanged = "_this call HG_fnc_xItemSelectionChanged";
			x = 0.329844 * safeZoneW + safeZoneX;
			y = 0.335 * safeZoneH + safeZoneY;
			w = 0.180469 * safeZoneW;
			h = 0.022 * safeZoneH;
		};
		
		class AddButton: HG_RscButtonInvisible
		{
			idc = HG_ITEMS_ADD_IDC;
			tooltip = "+1";
			onButtonClick = "[0] call HG_fnc_itemBtns";
			x = 0.443281 * safeZoneW + safeZoneX;
			y = 0.28 * safeZoneH + safeZoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class SubButton: HG_RscButtonInvisible
		{
			idc = HG_ITEMS_SUB_IDC;
			tooltip = "-1";
			onButtonClick = "[1] call HG_fnc_itemBtns";
			x = 0.365937 * safeZoneW + safeZoneX;
			y = 0.28 * safeZoneH + safeZoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class BuyButton: HG_RscButtonInvisible
		{
			idc = HG_ITEMS_BUY_IDC;
			tooltip = "$STR_HG_DLG_IS_BUY_TOOLTIP";
			onButtonClick = "[2] call HG_fnc_itemBtns";
			x = 0.572187 * safeZoneW + safeZoneX;
			y = 0.28 * safeZoneH + safeZoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class MyCashButton: HG_RscButtonInvisible
		{
			idc = HG_ITEMS_MC_IDC;
			onButtonClick = "hint format[(localize 'STR_HG_DLG_MC'),([(player getVariable 'HG_Cash'),true] call HG_fnc_currencyToText)]";
			tooltip = "$STR_HG_DLG_MC_TOOLTIP";
			x = 0.608281 * safeZoneW + safeZoneX;
			y = 0.28 * safeZoneH + safeZoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class ExitButton: HG_RscButtonInvisible
		{
			tooltip = "$STR_HG_DLG_CLOSE_TOOLTIP";
			onButtonClick = "closeDialog 0";
			x = 0.644375 * safeZoneW + safeZoneX;
			y = 0.28 * safeZoneH + safeZoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
	};
};

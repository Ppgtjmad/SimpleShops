#include "..\HG_IDCS.h"
/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/

class HG_UnitsShop
{
    idd = HG_UNITS_SHOP_IDD;
	enableSimulation = true;
	name = "HG_UnitsShop";
	onUnload = "HG_STRING_HANDLER = nil";
	
	class ControlsBackground
	{
		class Header: HG_RscText
		{
			colorBackground[] = {0.4,0.4,0.4,1};
			x = 0.29375 * safeZoneW + safeZoneX;
			y = 0.225 * safeZoneH + safeZoneY;
			w = 0.4125 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class Background: HG_RscText
		{
			colorBackground[] = {0,0,0,0.5};
			x = 0.29375 * safeZoneW + safeZoneX;
		    y = 0.269 * safeZoneH + safeZoneY;
		    w = 0.4125 * safeZoneW;
		    h = 0.539 * safeZoneH;
		};
		
		class BackgroundFrame: HG_RscFrame
		{
			x = 0.29375 * safeZoneW + safeZoneX;
		    y = 0.225 * safeZoneH + safeZoneY;
		    w = 0.4125 * safeZoneW;
		    h = 0.583 * safeZoneH;
		};
		
		class WhiteLine: HG_RscPicture
		{
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.29375 * safeZoneW + safeZoneX;
			y = 0.269 * safeZoneH + safeZoneY;
			w = 0.4125 * safeZoneW;
			h = 0.0022 * safeZoneH;
		};
		
		class ShopPicture: HG_RscPicture
		{
			moving = true;
			text = "HG\UI\Icons\units.paa";
			tooltip = "$STR_HG_DLG_TOOLTIP";
			x = 0.29375 * safeZoneW + safeZoneX;
			y = 0.225 * safeZoneH + safeZoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class UnitPrice: HG_RscText
		{
			idc = HG_UNITS_PRICE_IDC;
			style = "0x02";
			shadow = 0;
			SizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.5)";
			x = 0.298906 * safeZoneW + safeZoneX;
			y = 0.313 * safeZoneH + safeZoneY;
			w = 0.221719 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class BuyBtnPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\buy.paa";
			x = 0.628906 * safeZoneW + safeZoneX;
			y = 0.225 * safeZoneH + safeZoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class ExitBtnPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\close.paa";
			x = 0.675312 * safeZoneW + safeZoneX;
			y = 0.225 * safeZoneH + safeZoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class ItemFrame: HG_RscFrame
		{
		    x = 0.525781 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.175313 * safezoneW;
			h = 0.132 * safezoneH;	
		};
		
		class ItemBackground: HG_RscText
		{
			colorBackground[] = {0,0,0,0.5};
			x = 0.525781 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.175313 * safezoneW;
			h = 0.132 * safezoneH;
		};
		
		class ItemPicture: HG_RscPicture
		{
		    idc = HG_UNITS_ITEM_PIC_IDC;
			style = "0x30 + 0x800";
			x = 0.525781 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.175313 * safezoneW;
			h = 0.132 * safezoneH;
		};
		
		class ItemText: HG_RscStructuredText
		{
			idc = HG_UNITS_ITEM_TEXT_IDC;
			colorBackground[] = {0,0,0,0.5};
			x = 0.525781 * safeZoneW + safeZoneX;
			y = 0.423 * safeZoneH + safeZoneY;
			w = 0.175313 * safeZoneW;
			h = 0.374 * safeZoneH;
		};
		
		class TextFrame: HG_RscFrame
		{
			x = 0.525781 * safeZoneW + safeZoneX;
			y = 0.423 * safeZoneH + safeZoneY;
			w = 0.175313 * safeZoneW;
			h = 0.374 * safeZoneH;
		};
	};
	
	class Controls
	{
		class InventoryTree: HG_RscTree
		{
			idc = HG_UNITS_TREE_IDC;
			onTreeSelChanged = "_this call HG_fnc_unitsTreeChanged";
			x = 0.298906 * safeZoneW + safeZoneX;
			y = 0.368 * safeZoneH + safeZoneY;
			w = 0.221719 * safeZoneW;
			h = 0.429 * safeZoneH;
		};
		
		class UnitSwitch: HG_RscCombo
		{
			idc = HG_UNITS_UNIT_SWITCH_IDC;
			onLBSelChanged = "_this spawn HG_fnc_unitsComboChanged";
			x = 0.298906 * safeZoneW + safeZoneX;
			y = 0.28 * safeZoneH + safeZoneY;
			w = 0.221719 * safeZoneW;
			h = 0.022 * safeZoneH;
		};
		
		class BuyButton: HG_RscButtonInvisible
		{
			idc = HG_UNITS_BUY_BTN_IDC;
			tooltip = "$STR_HG_DLG_US_BUY_BTN";
			onButtonClick = "[0] call HG_fnc_unitsBtns";
			x = 0.628906 * safeZoneW + safeZoneX;
			y = 0.225 * safeZoneH + safeZoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class ExitButton: HG_RscButtonInvisible
		{
			tooltip = "$STR_HG_DLG_CLOSE_TOOLTIP";
			onButtonClick = "closeDialog 0";
			x = 0.675312 * safeZoneW + safeZoneX;
			y = 0.225 * safeZoneH + safeZoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
	};
};

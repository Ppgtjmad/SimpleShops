#include "..\HG_IDCS.h"
/*
    Author - HoverGuy
	© All Fucks Reserved
	Website - http://www.sunrise-production.com
*/

class HG_WeaponsShop
{
    idd = HG_WEAPONS_SHOP_IDD;
	enableSimulation = true;
	movingEnable = true;
	name = "HG_WeaponsShop";
	onUnload = "[player] remoteExecCall ['HG_fnc_getGear',2,false]";
	
	class ControlsBackground
	{
		class Header: HG_RscText
		{
			colorBackground[] = {0.4,0.4,0.4,1};
			x = 3 * GUI_GRID_W + GUI_GRID_X;
			y = 2.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 34 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		
		class Background: HG_RscText
		{
			colorBackground[] = {0,0,0,0.5};
			x = 3 * GUI_GRID_W + GUI_GRID_X;
		    y = 4.5 * GUI_GRID_H + GUI_GRID_Y;
		    w = 34 * GUI_GRID_W;
		    h = 19.5 * GUI_GRID_H;
		};
		
		class BackgroundFrame: HG_RscFrame
		{
			x = 3 * GUI_GRID_W + GUI_GRID_X;
		    y = 2.5 * GUI_GRID_H + GUI_GRID_Y;
		    w = 34 * GUI_GRID_W;
		    h = 21.5 * GUI_GRID_H;
		};
		
		class WhiteLine: HG_RscPicture
		{
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 3 * GUI_GRID_W + GUI_GRID_X;
			y = 4.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 34 * GUI_GRID_W;
			h = 0.1 * GUI_GRID_H;
		};
		
		class ShopPicture: HG_RscPicture
		{
			moving = true;
			text = "HG\UI\Icons\gun.paa";
			tooltip = "$STR_HG_DLG_TOOLTIP";
			x = 3 * GUI_GRID_W + GUI_GRID_X;
			y = 2.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		
		class AddBtnPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\add.paa";
			x = 14.5 * GUI_GRID_W + GUI_GRID_X;
			y = 2.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		
		class SubBtnPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\sub.paa";
			x = 7 * GUI_GRID_W + GUI_GRID_X;
			y = 2.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		
		class BuyBtnPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\buy.paa";
			x = 27 * GUI_GRID_W + GUI_GRID_X;
			y = 2.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		
		class MyCashBtnPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\mycash.paa";
			x = 30.5 * GUI_GRID_W + GUI_GRID_X;
			y = 2.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		
		class ExitBtnPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\close.paa";
			x = 34 * GUI_GRID_W + GUI_GRID_X;
			y = 2.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		
		class ItemText: HG_RscStructuredText
		{
			idc = HG_WEAPONS_ITEM_TEXT_IDC;
			colorBackground[] = {0,0,0,0.5};
			x = 21.5 * GUI_GRID_W + GUI_GRID_X;
			y = 11 * GUI_GRID_H + GUI_GRID_Y;
			w = 15 * GUI_GRID_W;
			h = 12.5 * GUI_GRID_H;
		};
		
		class TextFrame: HG_RscFrame
		{
			x = 21.5 * GUI_GRID_W + GUI_GRID_X;
			y = 11 * GUI_GRID_H + GUI_GRID_Y;
			w = 15 * GUI_GRID_W;
			h = 12.5 * GUI_GRID_H;
		};
		
		class ItemFrame: HG_RscFrame
		{
		    x = 21.5 * GUI_GRID_W + GUI_GRID_X;
			y = 5 * GUI_GRID_H + GUI_GRID_Y;
			w = 15 * GUI_GRID_W;
			h = 5.5 * GUI_GRID_H;	
		};
		
		class ItemBackground: HG_RscText
		{
			colorBackground[] = {0,0,0,0.5};
			x = 21.5 * GUI_GRID_W + GUI_GRID_X;
			y = 5 * GUI_GRID_H + GUI_GRID_Y;
			w = 15 * GUI_GRID_W;
			h = 5.5 * GUI_GRID_H;
		};
		
		class ItemPicture: HG_RscPicture
		{
		    idc = HG_WEAPONS_ITEM_PICTURE_IDC;
			x = 21.5 * GUI_GRID_W + GUI_GRID_X;
			y = 5 * GUI_GRID_H + GUI_GRID_Y;
			w = 15 * GUI_GRID_W;
			h = 5.5 * GUI_GRID_H;
		};
		
		class AmountText: HG_RscText
		{
			idc = HG_WEAPONS_AMOUNT_IDC;
			style = "0x02";
			x = 10.5 * GUI_GRID_W + GUI_GRID_X;
			y = 2.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 3.5 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		
		class TotalText: HG_RscText
		{
			idc = HG_WEAPONS_TOTAL_IDC;
			style = "0x02";
			shadow = 0;
			x = 18 * GUI_GRID_W + GUI_GRID_X;
			y = 2.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 8 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
	};
	
	class Controls
	{
	    class ItemList: HG_RscListBox
		{
			idc = HG_WEAPONS_ITEM_LIST_IDC;
			style = "0x02 + 16";
			onLBSelChanged = "_this call HG_fnc_itemSelectionChanged";
			x = 3.5 * GUI_GRID_W + GUI_GRID_X;
			y = 6.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 17.5 * GUI_GRID_W;
			h = 17 * GUI_GRID_H;
		};
		
		class ItemSwitch: HG_RscXListBox
		{
		    idc = HG_WEAPONS_ITEM_SWITCH_IDC;
			onLBSelChanged = "_this call HG_fnc_xItemSelectionChanged";
			x = 3.5 * GUI_GRID_W + GUI_GRID_X;
			y = 5 * GUI_GRID_H + GUI_GRID_Y;
			w = 17.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		
		class AddButton: HG_RscButtonInvisible
		{
			idc = HG_WEAPONS_ADD_IDC;
			tooltip = "$STR_HG_DLG_WS_ADD_TOOLTIP";
			onButtonClick = "[0] call HG_fnc_itemBtns";
			x = 14.5 * GUI_GRID_W + GUI_GRID_X;
			y = 2.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		
		class SubButton: HG_RscButtonInvisible
		{
			idc = HG_WEAPONS_SUB_IDC;
			tooltip = "$STR_HG_DLG_WS_SUB_TOOLTIP";
			onButtonClick = "[1] call HG_fnc_itemBtns";
			x = 7 * GUI_GRID_W + GUI_GRID_X;
			y = 2.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		
		class BuyButton: HG_RscButtonInvisible
		{
			idc = HG_WEAPONS_BUY_IDC;
			tooltip = "$STR_HG_DLG_WS_BUY_TOOLTIP";
			onButtonClick = "[2] call HG_fnc_itemBtns";
			x = 27 * GUI_GRID_W + GUI_GRID_X;
			y = 2.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		
		class MyCashButton: HG_RscButtonInvisible
		{
			idc = HG_WEAPONS_MC_IDC;
			onButtonClick = "hint format[(localize 'STR_HG_DLG_MC'),([HG_CASH,true] call HG_fnc_currencyToText)]";
			tooltip = "$STR_HG_DLG_MC_TOOLTIP";
			x = 30.5 * GUI_GRID_W + GUI_GRID_X;
			y = 2.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		
		class ExitButton: HG_RscButtonInvisible
		{
			tooltip = "$STR_HG_DLG_CLOSE_TOOLTIP";
			onButtonClick = "closeDialog 0";
			x = 34 * GUI_GRID_W + GUI_GRID_X;
			y = 2.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
	};
};

#include "..\HG_IDCS.h"
/*
    Author - HoverGuy
	© All Fucks Reserved
	Website - http://www.sunrise-production.com
*/

class HG_ClothingShop
{
    idd = HG_CLOTHING_SHOP_IDD;
	enableSimulation = true;
	name = "HG_ClothingShop";
	onUnload = "[] call HG_fnc_dialogOnUnloadClothing";
	
	class ControlsBackground
	{
		class ListHeader: HG_RscText
		{
			style = "0x02";
			text = "$STR_HG_DLG_CS_TITLE_LIST";
			colorBackground[] = {0.4,0.4,0.4,1};
			x = -28 * GUI_GRID_W + GUI_GRID_X;
			y = 4 * GUI_GRID_H + GUI_GRID_Y;
			w = 19 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
		};
		
		class ListBackground: HG_RscText
		{
			colorBackground[] = {0,0,0,0.5};
			x = -28 * GUI_GRID_W + GUI_GRID_X;
			y = 5.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 19 * GUI_GRID_W;
			h = 19.5 * GUI_GRID_H;
		};
		
		class ListBackgroundFrame: HG_RscFrame
		{
			x = -28 * GUI_GRID_W + GUI_GRID_X;
			y = 4 * GUI_GRID_H + GUI_GRID_Y;
			w = 19 * GUI_GRID_W;
			h = 21 * GUI_GRID_H;
		};
		
		class ListWhiteLine: HG_RscPicture
		{
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = -28 * GUI_GRID_W + GUI_GRID_X;
			y = 5.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 19 * GUI_GRID_W;
			h = 0.1 * GUI_GRID_H;
		};
		
		class ActionBarBackground: HG_RscText
		{
			colorBackground[] = {0.4,0.4,0.4,1};
			x = 0 * GUI_GRID_W + GUI_GRID_X;
			y = -10 * GUI_GRID_H + GUI_GRID_Y;
			w = 40 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		
		class ShopPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\clothing.paa";
			tooltip = "$STR_HG_DLG_TOOLTIP";
			x = 0 * GUI_GRID_W + GUI_GRID_X;
			y = -10 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		
		class TotalText: HG_RscText
		{
			idc = HG_CLOTHING_TOTAL_IDC;
			x = 20 * GUI_GRID_W + GUI_GRID_X;
			y = -10 * GUI_GRID_H + GUI_GRID_Y;
			w = 8.5 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		
		class ResetBtnPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\reset.paa";
			x = 26.5 * GUI_GRID_W + GUI_GRID_X;
			y = -10 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		
		class BuyBtnPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\buy.paa";
			x = 30 * GUI_GRID_W + GUI_GRID_X;
			y = -10 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		
		class MyCashBtnPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\mycash.paa";
			x = 33.5 * GUI_GRID_W + GUI_GRID_X;
			y = -10 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		
		class ExitBtnPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\close.paa";
			x = 37 * GUI_GRID_W + GUI_GRID_X;
			y = -10 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
	};
	
	class Controls
	{
		class ClothingSwitch: HG_RscXListBox
		{
			idc = HG_CLOTHING_SWITCH_IDC;
			onLBSelChanged = "_this call HG_fnc_xClothingSelectionChanged";
			x = -27.5 * GUI_GRID_W + GUI_GRID_X;
			y = 6 * GUI_GRID_H + GUI_GRID_Y;
			w = 18 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		
		class ClothingList: HG_RscListBox
		{
			idc = HG_CLOTHING_LIST_IDC;
			style = "0x02 + 16";
			rowHeight = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			onLBSelChanged = "_this call HG_fnc_clothingSelectionChanged";
			x = -27.5 * GUI_GRID_W + GUI_GRID_X;
			y = 7.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 18 * GUI_GRID_W;
			h = 17 * GUI_GRID_H;
		};
		
		class ResetButton: HG_RscButtonInvisible
		{
			idc = HG_CLOTHING_RESET_IDC;
			tooltip = "$STR_HG_DLG_CS_RESET_TOOLTIP";
			onButtonClick = "[] call HG_fnc_reset";
			x = 26.5 * GUI_GRID_W + GUI_GRID_X;
			y = -10 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		
		class BuyButton: HG_RscButtonInvisible
		{
			idc = HG_CLOTHING_BUY_IDC;
			tooltip = "$STR_HG_DLG_CS_BUY_TOOLTIP";
			onButtonClick = "[] call HG_fnc_buyClothing";
			x = 30 * GUI_GRID_W + GUI_GRID_X;
			y = -10 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		
		class MyCashButton: HG_RscButtonInvisible
		{
			idc = HG_CLOTHING_MC_IDC;
			onButtonClick = "titleText [format[(localize 'STR_HG_DLG_MC'),([HG_CASH,true] call HG_fnc_currencyToText)],'PLAIN DOWN',0.5]";
			tooltip = "$STR_HG_DLG_MC_TOOLTIP";
			x = 33.5 * GUI_GRID_W + GUI_GRID_X;
			y = -10 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		
		class ViewSlider: HG_RscXSliderH
		{
			idc = HG_CLOTHING_SLIDER_IDC;
		    onSliderPosChanged = "player setDir (360 - (_this select 1))";
			tooltip = "$STR_HG_DLG_CS_SLIDER_TOOLTIP";
			x = 3.5 * GUI_GRID_W + GUI_GRID_X;
			y = -9.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 16 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		
		class ExitButton: HG_RscButtonInvisible
		{
			tooltip = "$STR_HG_DLG_CLOSE_TOOLTIP";
			onButtonClick = "closeDialog 0";
			x = 37 * GUI_GRID_W + GUI_GRID_X;
			y = -10 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
	};
};

#include "..\HG_IDCS.h"
/*
    Author - HoverGuy
	© All Fucks Reserved
	Website - http://www.sunrise-production.com
*/

class HG_VehiclesShop
{
    idd = HG_VEHICLES_SHOP_IDD;
	enableSimulation = true;
	name = "HG_VehiclesShop";
	onUnload = "_this call HG_fnc_dialogOnUnloadVehicles";
	
	class ControlsBackground
	{
		class ListHeader: HG_RscText
		{
			style = "0x02";
			text = "$STR_HG_DLG_VS_TITLE_LIST";
			colorBackground[] = {0.4,0.4,0.4,1};
			x = -28 * GUI_GRID_W + GUI_GRID_X;
			y = 1.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 19 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
		};
		
		class ListBackground: HG_RscText
		{
			colorBackground[] = {0,0,0,0.5};
			x = -28 * GUI_GRID_W + GUI_GRID_X;
			y = 3 * GUI_GRID_H + GUI_GRID_Y;
			w = 19 * GUI_GRID_W;
			h = 21 * GUI_GRID_H;
		};
		
		class ListBackgroundFrame: HG_RscFrame
		{
			x = -28 * GUI_GRID_W + GUI_GRID_X;
			y = 1.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 19 * GUI_GRID_W;
			h = 22.5 * GUI_GRID_H;
		};
		
		class ListWhiteLine: HG_RscPicture
		{
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = -28 * GUI_GRID_W + GUI_GRID_X;
			y = 3 * GUI_GRID_H + GUI_GRID_Y;
			w = 19 * GUI_GRID_W;
			h = 0.1 * GUI_GRID_H;
		};
		
		class TextHeader: HG_RscText
		{
			style = "0x02";
			text = "$STR_HG_DLG_VS_TITLE_TEXT";
			colorBackground[] = {0.4,0.4,0.4,1};
			x = 49 * GUI_GRID_W + GUI_GRID_X;
			y = 1.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 19 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
		};
		
		class TextBackground: HG_RscText
		{
			colorBackground[] = {0,0,0,0.5};
			x = 49 * GUI_GRID_W + GUI_GRID_X;
			y = 3 * GUI_GRID_H + GUI_GRID_Y;
			w = 19 * GUI_GRID_W;
			h = 21 * GUI_GRID_H;
		};
		
		class TextBackgroundFrame: HG_RscFrame
		{
			x = 49 * GUI_GRID_W + GUI_GRID_X;
			y = 1.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 19 * GUI_GRID_W;
			h = 22.5 * GUI_GRID_H;
		};
		
		class TextWhiteLine: HG_RscPicture
		{
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 49 * GUI_GRID_W + GUI_GRID_X;
			y = 3 * GUI_GRID_H + GUI_GRID_Y;
			w = 19 * GUI_GRID_W;
			h = 0.1 * GUI_GRID_H;
		};
		
		class ActionBarBackground: HG_RscText
		{
			colorBackground[] = {0.4,0.4,0.4,1};
			x = 0 * GUI_GRID_W + GUI_GRID_X;
			y = -10 * GUI_GRID_H + GUI_GRID_Y;
			w = 39.5 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		
		class ShopPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\car.paa";
			tooltip = "$STR_HG_DLG_TOOLTIP";
			x = 0 * GUI_GRID_W + GUI_GRID_X;
			y = -10 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		
		class BuyBtnPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\buy.paa";
			x = 29.5 * GUI_GRID_W + GUI_GRID_X;
			y = -10 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		
		class MyCashBtnPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\mycash.paa";
			x = 33 * GUI_GRID_W + GUI_GRID_X;
			y = -10 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		
		class ExitBtnPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\close.paa";
			x = 36.5 * GUI_GRID_W + GUI_GRID_X;
			y = -10 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		
		class VehicleText: HG_RscStructuredText
		{
			idc = HG_VEHICLES_TEXT_IDC;
			colorBackground[] = {0,0,0,0.5};
			x = 49.5 * GUI_GRID_W + GUI_GRID_X;
			y = 3.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 18 * GUI_GRID_W;
			h = 18.5 * GUI_GRID_H;
		};
	};
	
	class Controls
	{
		class VehicleSwitch: HG_RscXListBox
		{
			idc = HG_VEHICLES_SWITCH_IDC;
			onLBSelChanged = "_this call HG_fnc_xVehicleSelectionChanged";
			x = -27.5 * GUI_GRID_W + GUI_GRID_X;
			y = 3.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 18 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		
		class VehicleList: HG_RscListBox
		{
			idc = HG_VEHICLES_LIST_IDC;
			style = "0x02 + 16";
			rowHeight = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			onLBSelChanged = "_this call HG_fnc_vehicleSelectionChanged";
			x = -27.5 * GUI_GRID_W + GUI_GRID_X;
			y = 5 * GUI_GRID_H + GUI_GRID_Y;
			w = 18 * GUI_GRID_W;
			h = 18.5 * GUI_GRID_H;
		};
		
		class SpawnPointsList: HG_RscCombo
		{
			idc = HG_VEHICLES_SP_IDC;
			x = 49.5 * GUI_GRID_W + GUI_GRID_X;
			y = 22.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 18 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		
		class BuyButton: HG_RscButtonInvisible
		{
			idc = HG_VEHICLES_BUY_IDC;
			tooltip = "$STR_HG_DLG_VS_BUY_TOOLTIP";
			onButtonClick = "_this call HG_fnc_buyVehicle";
			x = 29.5 * GUI_GRID_W + GUI_GRID_X;
			y = -10 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		
		class MyCashButton: HG_RscButtonInvisible
		{
			idc = HG_VEHICLES_MC_IDC;
			onButtonClick = "titleText [format[(localize 'STR_HG_DLG_MC'),([HG_CASH,true] call HG_fnc_currencyToText)],'PLAIN DOWN',0.5]";
			tooltip = "$STR_HG_DLG_MC_TOOLTIP";
			x = 33 * GUI_GRID_W + GUI_GRID_X;
			y = -10 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		
		class ExitButton: HG_RscButtonInvisible
		{
			tooltip = "$STR_HG_DLG_CLOSE_TOOLTIP";
			onButtonClick = "closeDialog 0";
			x = 36.5 * GUI_GRID_W + GUI_GRID_X;
			y = -10 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
	};
};

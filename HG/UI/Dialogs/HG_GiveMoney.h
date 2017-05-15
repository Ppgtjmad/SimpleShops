#include "..\HG_IDCS.h"
/*
    Author - HoverGuy
	© All Fucks Reserved
	Website - http://www.sunrise-production.com
*/

class HG_GiveMoney
{
    idd = HG_GM_IDD;
	enableSimulation = true;
	name = "HG_GiveMoney";
	
	class ControlsBackground
	{
		class Header: HG_RscText
		{
			colorBackground[] = {0.4,0.4,0.4,1};
			x = 12.5 * GUI_GRID_W + GUI_GRID_X;
			y = 8 * GUI_GRID_H + GUI_GRID_Y;
			w = 15 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		
		class Background: HG_RscText
		{
			colorBackground[] = {0,0,0,0.5};
			x = 12.5 * GUI_GRID_W + GUI_GRID_X;
			y = 10 * GUI_GRID_H + GUI_GRID_Y;
			w = 15 * GUI_GRID_W;
			h = 3.5 * GUI_GRID_H;
		};
		
		class BackgroundFrame: HG_RscFrame
		{
			x = 12.5 * GUI_GRID_W + GUI_GRID_X;
		    y = 8 * GUI_GRID_H + GUI_GRID_Y;
		    w = 15 * GUI_GRID_W;
		    h = 5.5 * GUI_GRID_H;
		};
		
		class WhiteLine: HG_RscPicture
		{
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 12.5 * GUI_GRID_W + GUI_GRID_X;
			y = 10 * GUI_GRID_H + GUI_GRID_Y;
			w = 15 * GUI_GRID_W;
			h = 0.1 * GUI_GRID_H;
		};
		
		class ShopPicture: HG_RscPicture
		{
			moving = true;
			text = "HG\UI\Icons\money.paa";
			tooltip = "$STR_HG_DLG_TOOLTIP";
			x = 12.5 * GUI_GRID_W + GUI_GRID_X;
			y = 8 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		
		class ExitBtnPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\close.paa";
			x = 15 * GUI_GRID_W + GUI_GRID_X;
			y = 8 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
	};

	class Controls
	{
		class MoneyEdit: HG_RscEdit
		{
			idc = HG_GM_EDIT_IDC;
			style = "0x02 + 0x40";
			text = "1";
			x = 13 * GUI_GRID_W + GUI_GRID_X;
			y = 10.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 14 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		
		class GiveBtn: HG_RscButton
		{
			text = "Give";
			x = 13 * GUI_GRID_W + GUI_GRID_X;
			y = 12 * GUI_GRID_H + GUI_GRID_Y;
			w = 14 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			onButtonClick = "[] call HG_fnc_giveMoneyBtn";
		};
		
		class ExitButton: HG_RscButtonInvisible
		{
			tooltip = "$STR_HG_DLG_CLOSE_TOOLTIP";
			onButtonClick = "closeDialog 0";
			x = 15 * GUI_GRID_W + GUI_GRID_X;
			y = 8 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
	};
};

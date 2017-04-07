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
		class Background: HG_RscText
		{
			colorBackground[] = {0.4,0.4,0.4,1};
			x = 12.5 * GUI_GRID_W + GUI_GRID_X;
			y = 10 * GUI_GRID_H + GUI_GRID_Y;
			w = 15 * GUI_GRID_W;
			h = 3.5 * GUI_GRID_H;
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
	};
};

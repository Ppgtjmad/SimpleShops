#include "..\HG_IDCS.h"
/*
    Author - HoverGuy
	© All Fucks Reserved
	Website - http://www.sunrise-production.com
*/

class HG_Garage
{
    idd = HG_GARAGE_IDD;
	enableSimulation = true;
	movingEnable = true;
	name = "HG_Garage";
	onUnload = "HG_SPAWN_POINTS = nil; HG_STRING_HANDLER = nil";
	
	class ControlsBackground
	{
		class Header: HG_RscText
		{
			colorBackground[] = {0.4,0.4,0.4,1};
		    x = 9 * GUI_GRID_W + GUI_GRID_X;
			y = 3 * GUI_GRID_H + GUI_GRID_Y;
			w = 22 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		
		class Background: HG_RscText
		{
			idc = HG_GARAGE_BACK_IDC;
			style = "0x02";
			colorBackground[] = {0,0,0,0.5};
			x = 9 * GUI_GRID_W + GUI_GRID_X;
			y = 5 * GUI_GRID_H + GUI_GRID_Y;
			w = 22 * GUI_GRID_W;
			h = 17 * GUI_GRID_H;
		};
		
		class BackgroundFrame: HG_RscFrame
		{
			x = 9 * GUI_GRID_W + GUI_GRID_X;
			y = 3 * GUI_GRID_H + GUI_GRID_Y;
			w = 22 * GUI_GRID_W;
			h = 19 * GUI_GRID_H;
		};
		
		class WhiteLine: HG_RscPicture
		{
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 9 * GUI_GRID_W + GUI_GRID_X;
			y = 5 * GUI_GRID_H + GUI_GRID_Y;
			w = 22 * GUI_GRID_W;
			h = 0.1 * GUI_GRID_H;
		};
		
		class MainPicture: HG_RscPicture
		{
			moving = true;
			text = "HG\UI\Icons\garage.paa";
			tooltip = "$STR_HG_DLG_TOOLTIP";
			x = 9 * GUI_GRID_W + GUI_GRID_X;
			y = 3 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		
		class RefreshBtnPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\refresh.paa";
			x = 17.5 * GUI_GRID_W + GUI_GRID_X;
			y = 3 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		
		class SpawnBtnPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\spawn.paa";
			x = 21 * GUI_GRID_W + GUI_GRID_X;
			y = 3 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		
		class DeleteBtnPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\delete.paa";
			x = 24.5 * GUI_GRID_W + GUI_GRID_X;
			y = 3 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		
		class ExitBtnPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\close.paa";
			x = 28 * GUI_GRID_W + GUI_GRID_X;
			y = 3 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
	};
	
	class Controls
	{
		class List: HG_RscListBox
		{
			idc = HG_GARAGE_LIST_IDC;
			style = "0x02 + 16";
			rowHeight = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			x = 9.5 * GUI_GRID_W + GUI_GRID_X;
			y = 5.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 21 * GUI_GRID_W;
			h = 16 * GUI_GRID_H;
		};
		
		class RefreshBtn: HG_RscButtonInvisible
		{
			idc = HG_GARAGE_REFRESH_BTN_IDC;
			tooltip = "$STR_HG_GRG_REFRESH_TOOLTIP";
			onButtonClick = "[0] call HG_fnc_garageBtns";
			x = 17.5 * GUI_GRID_W + GUI_GRID_X;
			y = 3 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		
		class SpawnBtn: HG_RscButtonInvisible
		{
			idc = HG_GARAGE_SPAWN_BTN_IDC;
			tooltip = "$STR_HG_GRG_SPAWN_TOOLTIP";
			onButtonClick = "[1] call HG_fnc_garageBtns";
			x = 21 * GUI_GRID_W + GUI_GRID_X;
			y = 3 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		
		class DeleteBtn: HG_RscButtonInvisible
		{
			idc = HG_GARAGE_DELETE_BTN_IDC;
			tooltip = "$STR_HG_GRG_DELETE_TOOLTIP";
			onButtonClick = "[2] call HG_fnc_garageBtns";
			x = 24.5 * GUI_GRID_W + GUI_GRID_X;
			y = 3 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		
		class ExitButton: HG_RscButtonInvisible
		{
			tooltip = "$STR_HG_DLG_CLOSE_TOOLTIP";
			onButtonClick = "closeDialog 0";
			x = 28 * GUI_GRID_W + GUI_GRID_X;
			y = 3 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
	};
};

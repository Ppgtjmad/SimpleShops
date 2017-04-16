#include "..\HG_IDCS.h"
/*
    Author - HoverGuy
	© All Fucks Reserved
	Website - http://www.sunrise-production.com
*/

class HG_HUD
{
	idd = HG_NO_IDC;
	duration = HG_INFINITE;
	fadeIn = 0;
	fadeOut = 0;
	name = "HG_HUD";
	onLoad = "uiNamespace setVariable ['HG_HUD',_this select 0]";
	onUnload = "uiNamespace setVariable ['HG_HUD',displayNull]";
	onDestroy = "uiNamespace setVariable ['HG_HUD',displayNull]";
	
	class ControlsBackground
	{
		class XPPicture: HG_RscPicture
		{
			show = 0;
			idc = HG_HUD_XP_PIC_IDC;
		    text = "HG\UI\Icons\xp.paa";
			x = 65 * GUI_GRID_W + GUI_GRID_X;
			y = 28 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		
		class XPText: HG_RscText
		{
			show = 0;
			idc = HG_HUD_XP_TEXT_IDC;
			style = "0x01";
			shadow = 0;
			x = 52 * GUI_GRID_W + GUI_GRID_X;
			y = 28.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 13 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		
		class KillCountPicture: HG_RscPicture
		{
			show = 0;
			idc = HG_HUD_KILL_COUNT_PIC_IDC;
			text = "HG\UI\Icons\gun.paa";
			x = 65 * GUI_GRID_W + GUI_GRID_X;
			y = 29.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		
		class KillCountText: HG_RscText
		{
			show = 0;
			idc = HG_HUD_KILL_COUNT_TEXT_IDC;
			style = "0x01";
			shadow = 0;
			x = 52 * GUI_GRID_W + GUI_GRID_X;
			y = 30 * GUI_GRID_H + GUI_GRID_Y;
			w = 13 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		
		class RankPicture: HG_RscPicture
		{
			idc = HG_HUD_RANK_PIC_IDC;
		    x = 65.5 * GUI_GRID_W + GUI_GRID_X;
			y = 31.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 2 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		
		class RankText: HG_RscText
		{
			idc = HG_HUD_RANK_TEXT_IDC;
			style = "0x01";
			shadow = 0;
			x = 52 * GUI_GRID_W + GUI_GRID_X;
			y = 31.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 13 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		
		class MoneyPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\money.paa";
			x = 65 * GUI_GRID_W + GUI_GRID_X;
			y = 32.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		
		class MoneyText: HG_RscText
		{
			idc = HG_HUD_MONEY_TEXT_IDC;
			style = "0x01";
			shadow = 0;
			x = 52 * GUI_GRID_W + GUI_GRID_X;
			y = 33 * GUI_GRID_H + GUI_GRID_Y;
			w = 13 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
	};
};

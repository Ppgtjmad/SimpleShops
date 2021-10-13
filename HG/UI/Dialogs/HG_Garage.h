#include "..\HG_IDCS.h"
/*
    Author - HoverGuy
    Website - https://northernimpulse.com
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
		    x = 0.386562 * safeZoneW + safeZoneX;
			y = 0.291 * safeZoneH + safeZoneY;
			w = 0.226875 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class Background: HG_RscText
		{
			colorBackground[] = {0,0,0,0.5};
			x = 0.386562 * safeZoneW + safeZoneX;
			y = 0.335 * safeZoneH + safeZoneY;
			w = 0.226875 * safeZoneW;
			h = 0.374 * safeZoneH;
		};
		
		class BackgroundFrame: HG_RscFrame
		{
			x = 0.386562 * safeZoneW + safeZoneX;
			y = 0.291 * safeZoneH + safeZoneY;
			w = 0.226875 * safeZoneW;
			h = 0.418 * safeZoneH;
		};
		
		class WhiteLine: HG_RscPicture
		{
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.386562 * safeZoneW + safeZoneX;
			y = 0.335 * safeZoneH + safeZoneY;
			w = 0.226875 * safeZoneW;
			h = 0.0022 * safeZoneH;
		};
		
		class MainPicture: HG_RscPicture
		{
			moving = true;
			text = "HG\UI\Icons\garage.paa";
			tooltip = "$STR_HG_DLG_TOOLTIP";
			x = 0.386562 * safeZoneW + safeZoneX;
			y = 0.291 * safeZoneH + safeZoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class RefreshBtnPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\refresh.paa";
			x = 0.474219 * safeZoneW + safeZoneX;
			y = 0.291 * safeZoneH + safeZoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class SpawnBtnPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\spawn.paa";
			x = 0.510312 * safeZoneW + safeZoneX;
			y = 0.291 * safeZoneH + safeZoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class DeleteBtnPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\delete.paa";
			x = 0.546406 * safeZoneW + safeZoneX;
			y = 0.291 * safeZoneH + safeZoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class ExitBtnPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\close.paa";
			x = 0.5825 * safeZoneW + safeZoneX;
			y = 0.291 * safeZoneH + safeZoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
	    
		class GarageInfo: HG_RscText
		{
			idc = HG_GARAGE_INFO_IDC;
			style = "0x02";
			shadow = 0;
			x = 0.391719 * safeZoneW + safeZoneX;
			y = 0.346 * safeZoneH + safeZoneY;
			w = 0.216563 * safeZoneW;
			h = 0.319 * safezoneH;
		};
	};
	
	class Controls
	{
		class List: HG_RscListBox
		{
			idc = HG_GARAGE_LIST_IDC;
			style = "0x02 + 16";
			rowHeight = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			x = 0.391719 * safeZoneW + safeZoneX;
			y = 0.346 * safeZoneH + safeZoneY;
			w = 0.216563 * safeZoneW;
			h = 0.319 * safezoneH;
		};
		
		class SpawnPointsList: HG_RscCombo
		{
			idc = HG_GARAGE_SP_IDC;
			x = 0.391719 * safezoneW + safezoneX;
			y = 0.676 * safezoneH + safezoneY;
			w = 0.216563 * safezoneW;
			h = 0.022 * safezoneH;
		};
		
		class RefreshBtn: HG_RscButtonInvisible
		{
			idc = HG_GARAGE_REFRESH_BTN_IDC;
			tooltip = "$STR_HG_GRG_REFRESH_TOOLTIP";
			onButtonClick = "[] call HG_fnc_refreshGarage";
			x = 0.474219 * safeZoneW + safeZoneX;
			y = 0.291 * safeZoneH + safeZoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class SpawnBtn: HG_RscButtonInvisible
		{
			idc = HG_GARAGE_SPAWN_BTN_IDC;
			tooltip = "$STR_HG_GRG_SPAWN_TOOLTIP";
			onButtonClick = "[] call HG_fnc_garageSpawn";
			x = 0.510312 * safeZoneW + safeZoneX;
			y = 0.291 * safeZoneH + safeZoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class DeleteBtn: HG_RscButtonInvisible
		{
			idc = HG_GARAGE_DELETE_BTN_IDC;
			tooltip = "$STR_HG_GRG_DELETE_TOOLTIP";
			onButtonClick = "[] spawn HG_fnc_delVehicle";
			x = 0.546406 * safeZoneW + safeZoneX;
			y = 0.291 * safeZoneH + safeZoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class ExitButton: HG_RscButtonInvisible
		{
			tooltip = "$STR_HG_DLG_CLOSE_TOOLTIP";
			onButtonClick = "closeDialog 0";
			x = 0.5825 * safeZoneW + safeZoneX;
			y = 0.291 * safeZoneH + safeZoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
	};
};

#include "..\HG_IDCS.h"
/*
    Author - HoverGuy
	GitHub - https://github.com/Ppgtjmad/SimpleShops
	Steam - https://steamcommunity.com/id/HoverGuy/
*/

class HG_GearShop
{
    idd = HG_GEAR_SHOP_IDD;
	enableSimulation = true;
	name = "HG_GearShop";
	onUnload = "[] call HG_fnc_dialogOnUnloadGear";
	
	class ControlsBackground
	{
		class ListHeader: HG_RscText
		{
			style = "0x02";
			text = "$STR_HG_DLG_GS_TITLE_LIST";
			colorBackground[] = {0.4,0.4,0.4,1};
			x = 0.005 * safeZoneW + safeZoneX;
			y = 0.313 * safeZoneH + safeZoneY;
			w = 0.195937 * safeZoneW;
			h = 0.033 * safeZoneH;
		};
		
		class ListBackground: HG_RscText
		{
			colorBackground[] = {0,0,0,0.5};
			x = 0.005 * safeZoneW + safeZoneX;
			y = 0.346 * safeZoneH + safeZoneY;
			w = 0.195937 * safeZoneW;
			h = 0.429 * safeZoneH;
		};
		
		class ListBackgroundFrame: HG_RscFrame
		{
			x = 0.005 * safeZoneW + safeZoneX;
			y = 0.313 * safeZoneH + safeZoneY;
			w = 0.195937 * safeZoneW;
			h = 0.462 * safeZoneH;
		};
		
		class ListWhiteLine: HG_RscPicture
		{
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.005 * safeZoneW + safeZoneX;
			y = 0.346 * safeZoneH + safeZoneY;
			w = 0.195937 * safeZoneW;
			h = 0.0022 * safeZoneH;
		};
		
		class ControlsHeader: HG_RscText
		{
			style = "0x02";
			text = "$STR_HG_DLG_GS_TITLE_CONTROLS";
			colorBackground[] = {0.4,0.4,0.4,1};
			x = 0.790868 * safezoneW + safezoneX;
			y = 0.302518 * safezoneH + safezoneY;
			w = 0.202726 * safezoneW;
			h = 0.0376157 * safezoneH;
		};
		
		class ControlsBackground: HG_RscText
		{
			colorBackground[] = {0,0,0,0.5};
			x = 0.790868 * safezoneW + safezoneX;
			y = 0.339381 * safezoneH + safezoneY;
			w = 0.202726 * safezoneW;
			h = 0.131655 * safezoneH;
		};

		class ControlsBackgroundFrame: HG_RscFrame
		{
			x = 0.790868 * safezoneW + safezoneX;
			y = 0.302518 * safezoneH + safezoneY;
			w = 0.202726 * safezoneW;
			h = 0.169271 * safezoneH;
		};
		
		class ControlsWhiteLine: HG_RscPicture
		{
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.790868 * safezoneW + safezoneX;
			y = 0.340133 * safezoneH + safezoneY;
			w = 0.202726 * safezoneW;
			h = 0.00188079 * safezoneH;
		};
		
		class ViewSliderTitle: HG_RscText
		{
			text = "$STR_HG_DLG_GS_TITLE_VIEW";
			shadow = 0;
			x = 0.795275 * safezoneW + safezoneX;
			y = 0.358941 * safezoneH + safezoneY;
			w = 0.193912 * safezoneW;
			h = 0.0188079 * safezoneH;
		};
		
		class ViewTitleLine: HG_RscPicture
		{
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.795275 * safezoneW + safezoneX;
			y = 0.377749 * safezoneH + safezoneY;
			w = 0.193912 * safezoneW;
			h = 0.00188079 * safezoneH;
		};
		
		class DistanceSliderTitle: HG_RscText
		{
			text = "$STR_HG_DLG_GS_TITLE_DIST";
			shadow = 0;
			x = 0.795275 * safezoneW + safezoneX;
			y = 0.415365 * safezoneH + safezoneY;
			w = 0.193912 * safezoneW;
			h = 0.0188079 * safezoneH;
		};
		
		class DistanceTitleLine: HG_RscPicture
		{
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.795275 * safezoneW + safezoneX;
			y = 0.434173 * safezoneH + safezoneY;
			w = 0.193912 * safezoneW;
			h = 0.00188079 * safezoneH;
		};
		
		class ActionBarBackground: HG_RscText
		{
			colorBackground[] = {0.4,0.4,0.4,1};
			x = 0.29375 * safeZoneW + safeZoneX;
			y = 0.00500001 * safeZoneH + safeZoneY;
			w = 0.4125 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class ShopPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\money.paa";
			tooltip = "$STR_HG_DLG_TOOLTIP";
			x = 0.29375 * safeZoneW + safeZoneX;
			y = 0.00500001 * safeZoneH + safeZoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class TotalText: HG_RscText
		{
			idc = HG_GEAR_TOTAL_IDC;
			x = 0.5 * safeZoneW + safeZoneX;
			y = 0.00500001 * safeZoneH + safeZoneY;
			w = 0.0876563 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class ResetBtnPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\reset.paa";
			x = 0.567031 * safeZoneW + safeZoneX;
			y = 0.00500001 * safeZoneH + safeZoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class BuyBtnPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\buy.paa";
			x = 0.603125 * safeZoneW + safeZoneX;
			y = 0.00500001 * safeZoneH + safeZoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class MyCashBtnPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\mycash.paa";
			x = 0.639219 * safeZoneW + safeZoneX;
			y = 0.00500001 * safeZoneH + safeZoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class ExitBtnPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\close.paa";
			x = 0.675312 * safeZoneW + safeZoneX;
			y = 0.00500001 * safeZoneH + safeZoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
	};
	
	class Controls
	{
		class GearSwitch: HG_RscXListBox
		{
			idc = HG_GEAR_SWITCH_IDC;
			onLBSelChanged = "_this call HG_fnc_xGearSelectionChanged";
			x = 0.0101562 * safeZoneW + safeZoneX;
			y = 0.357 * safeZoneH + safeZoneY;
			w = 0.185625 * safeZoneW;
			h = 0.022 * safeZoneH;
		};
		
		class GearList: HG_RscListBox
		{
			idc = HG_GEAR_LIST_IDC;
			style = "0x02 + 16";
			rowHeight = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			onLBSelChanged = "_this call HG_fnc_gearSelectionChanged";
			x = 0.0101562 * safeZoneW + safeZoneX;
			y = 0.39 * safeZoneH + safeZoneY;
			w = 0.185625 * safeZoneW;
			h = 0.374 * safeZoneH;
		};
		
		class ResetButton: HG_RscButtonInvisible
		{
			idc = HG_GEAR_RESET_IDC;
			tooltip = "$STR_HG_DLG_GS_RESET_TOOLTIP";
			onButtonClick = "[] call HG_fnc_reset";
			x = 0.567031 * safeZoneW + safeZoneX;
			y = 0.00500001 * safeZoneH + safeZoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class BuyButton: HG_RscButtonInvisible
		{
			idc = HG_GEAR_BUY_IDC;
			tooltip = "$STR_HG_DLG_GS_BUY_TOOLTIP";
			onButtonClick = "[] call HG_fnc_buyGear";
			x = 0.603125 * safeZoneW + safeZoneX;
			y = 0.00500001 * safeZoneH + safeZoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class MyCashButton: HG_RscButtonInvisible
		{
			idc = HG_GEAR_MC_IDC;
			onButtonClick = "titleText [format[(localize 'STR_HG_DLG_MC'),([(player getVariable 'HG_Cash'),true] call HG_fnc_currencyToText)],'PLAIN DOWN',0.5]";
			tooltip = "$STR_HG_DLG_MC_TOOLTIP";
			x = 0.639219 * safeZoneW + safeZoneX;
			y = 0.00500001 * safeZoneH + safeZoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class ViewSlider: HG_RscXSliderH
		{
			idc = HG_GEAR_SLIDER_IDC;
		    onSliderPosChanged = "_this call HG_fnc_viewControl";
			tooltip = "$STR_HG_DLG_GS_SLIDER_TOOLTIP";
			x = 0.795275 * safezoneW + safezoneX;
			y = 0.387153 * safezoneH + safezoneY;
			w = 0.193912 * safezoneW;
			h = 0.0188079 * safezoneH;
		};
		
		class DistanceSlider: HG_RscXSliderH
		{
			idc = HG_GEAR_SLIDER_DIST_IDC;
		    onSliderPosChanged = "_this call HG_fnc_viewControl";
			tooltip = "$STR_HG_DLG_GS_SLIDER_DIST_TOOLTIP";
			x = 0.795275 * safezoneW + safezoneX;
			y = 0.443576 * safezoneH + safezoneY;
			w = 0.193912 * safezoneW;
			h = 0.0188079 * safezoneH;
		};
		
		class ExitButton: HG_RscButtonInvisible
		{
			tooltip = "$STR_HG_DLG_CLOSE_TOOLTIP";
			onButtonClick = "closeDialog 0";
			x = 0.675312 * safeZoneW + safeZoneX;
			y = 0.00500001 * safeZoneH + safeZoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
	};
};

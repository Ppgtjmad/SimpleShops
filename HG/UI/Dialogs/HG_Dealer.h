#include "..\HG_IDCS.h"
/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/

class HG_Dealer
{
	idd = HG_DEALER_IDD;
	enableSimulation = true;
	movingEnable = true;
	name = "HG_Dealer";
	onUnload = "HG_DEALER_HANDLER = nil; HG_VEHICLES_HANDLER = nil; HG_PRICE_HANDLER = nil";
	
	class ControlsBackground
	{
		class Header: HG_RscText
		{
			colorBackground[] = {0.4,0.4,0.4,1};
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.4125 * safezoneW;
			h = 0.044 * safeZoneH;
		};
		
		class Background: HG_RscText
		{
			colorBackground[] = {0,0,0,0.5};
			x = 0.29375 * safezoneW + safezoneX;
		    y = 0.269 * safezoneH + safezoneY;
		    w = 0.4125 * safezoneW;
		    h = 0.506 * safezoneH;
		};
		
		class BackgroundFrame: HG_RscFrame
		{
			x = 0.29375 * safezoneW + safezoneX;
		    y = 0.225 * safezoneH + safezoneY;
		    w = 0.4125 * safezoneW;
		    h = 0.55 * safezoneH;
		};
		
		class WhiteLine: HG_RscPicture
		{
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.4125 * safezoneW;
			h = 0.0022 * safeZoneH;
		};
		
		class ShopPicture: HG_RscPicture
		{
			moving = true;
			text = "HG\UI\Icons\car.paa";
			tooltip = "$STR_HG_DLG_TOOLTIP";
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class ExitBtnPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\close.paa";
			x = 0.675312 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class Price: HG_RscText
		{
			idc = HG_DEALER_PRICE_IDC;
			style = "0x02";
			shadow = 0;
			x = 0.448438 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.044 * safeZoneH;
		};
		
		class RefreshBtnPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\refresh.paa";
			x = 0.587656 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class SellBtnPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\sell.paa";
			x = 0.628906 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class VehicleTitle: HG_RscText
		{
			text = "$STR_HG_DLG_DE_VEHICLES_TITLE";
			shadow = 0;
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.28371 * safezoneH + safezoneY;
			w = 0.195937 * safezoneW;
			h = 0.0188079 * safezoneH;
		};
		
		class VehicleTitleLine: HG_RscPicture
		{
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.302518 * safezoneH + safezoneY;
			w = 0.195937 * safezoneW;
			h = 0.0022 * safeZoneH;
		};
		
		class DealerTitle: HG_RscText
		{
			text = "$STR_HG_DLG_DE_DEALER_TITLE";
			shadow = 0;
			x = 0.5 * safezoneW + safezoneX;
			y = 0.28371 * safezoneH + safezoneY;
			w = 0.201094 * safezoneW;
			h = 0.0188079 * safezoneH;
		};
		
		class DealerTitleLine: HG_RscPicture
		{
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.5 * safezoneW + safezoneX;
			y = 0.302518 * safezoneH + safezoneY;
			w = 0.201094 * safezoneW;
			h = 0.0022 * safeZoneH;
		};
	};
	
	class Controls
	{
		class VehicleList: HG_RscListBox
		{
			idc = HG_DEALER_V_LIST_IDC;
			rowHeight = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			onLBSelChanged = "_this call HG_fnc_dealerListChanged";
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.311922 * safezoneH + safezoneY;
			w = 0.195937 * safezoneW;
			h = 0.451388 * safezoneH;
		};
		
		class DealerList: HG_RscListBox
		{
			idc = HG_DEALER_D_LIST_IDC;
			rowHeight = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			x = 0.5 * safezoneW + safezoneX;
			y = 0.311922 * safezoneH + safezoneY;
			w = 0.201094 * safezoneW;
			h = 0.451388 * safezoneH;
		};
		
		class RefreshButton: HG_RscButtonInvisible
		{
			idc = HG_DEALER_REFRESH_BTN_IDC;
			tooltip = "$STR_HG_DLG_DE_REFRESH_TOOLTIP";
			onButtonClick = "[] call HG_fnc_refreshDealer";
			x = 0.587656 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class SellButton: HG_RscButtonInvisible
		{
			idc = HG_DEALER_SELL_BTN_IDC;
			tooltip = "$STR_HG_DLG_DE_SELL_TOOLTIP";
			onButtonClick = "[] call HG_fnc_dealerSell";
			x = 0.628906 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class ExitButton: HG_RscButtonInvisible
		{
			tooltip = "$STR_HG_DLG_CLOSE_TOOLTIP";
			onButtonClick = "closeDialog 0";
			x = 0.675312 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
	};
};

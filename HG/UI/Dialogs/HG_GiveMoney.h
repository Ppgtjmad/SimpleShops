#include "..\HG_IDCS.h"
/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/

class HG_GiveMoney
{
    idd = HG_GM_IDD;
	enableSimulation = true;
	name = "HG_GiveMoney";
	onUnload = "HG_CURSOR_OBJECT = nil";
	
	class ControlsBackground
	{
		class Header: HG_RscText
		{
			colorBackground[] = {0.4,0.4,0.4,1};
			x = 0.422656 * safeZoneW + safeZoneX;
			y = 0.401 * safeZoneH + safeZoneY;
			w = 0.154687 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class Background: HG_RscText
		{
			colorBackground[] = {0,0,0,0.5};
			x = 0.422656 * safeZoneW + safeZoneX;
			y = 0.445 * safeZoneH + safeZoneY;
			w = 0.154687 * safeZoneW;
			h = 0.077 * safeZoneH;
		};
		
		class BackgroundFrame: HG_RscFrame
		{
			x = 0.422656 * safeZoneW + safeZoneX;
		    y = 0.401 * safeZoneH + safeZoneY;
		    w = 0.154687 * safeZoneW;
		    h = 0.121 * safeZoneH;
		};
		
		class WhiteLine: HG_RscPicture
		{
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.422656 * safeZoneW + safeZoneX;
			y = 0.445 * safeZoneH + safeZoneY;
			w = 0.154687 * safeZoneW;
			h = 0.0022 * safeZoneH;
		};
		
		class Picture: HG_RscPicture
		{
			moving = true;
			text = "HG\UI\Icons\money.paa";
			tooltip = "$STR_HG_DLG_TOOLTIP";
			x = 0.422656 * safeZoneW + safeZoneX;
			y = 0.401 * safeZoneH + safeZoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
		
		class ExitBtnPicture: HG_RscPicture
		{
			text = "HG\UI\Icons\close.paa";
			x = 0.546406 * safezoneW + safezoneX;
			y = 0.401 * safeZoneH + safeZoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
	};

	class Controls
	{
		class MoneyEdit: HG_RscEdit
		{
			idc = HG_GM_EDIT_IDC;
			style = "0x02 + 0x40";
			text = "1";
			x = 0.427812 * safeZoneW + safeZoneX;
			y = 0.456 * safeZoneH + safeZoneY;
			w = 0.144375 * safeZoneW;
			h = 0.022 * safeZoneH;
		};
		
		class GiveBtn: HG_RscButton
		{
			text = "$STR_HG_DLG_GIVE";
			x = 0.427812 * safeZoneW + safeZoneX;
			y = 0.489 * safeZoneH + safeZoneY;
			w = 0.144375 * safeZoneW;
			h = 0.022 * safeZoneH;
			onButtonClick = "[] call HG_fnc_giveMoneyBtn";
		};
		
		class ExitButton: HG_RscButtonInvisible
		{
			tooltip = "$STR_HG_DLG_CLOSE_TOOLTIP";
			onButtonClick = "closeDialog 0";
			x = 0.546406 * safezoneW + safezoneX;
			y = 0.401 * safeZoneH + safeZoneY;
			w = 0.0309375 * safeZoneW;
			h = 0.044 * safeZoneH;
		};
	};
};

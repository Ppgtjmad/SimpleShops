#include "..\HG_IDCS.h"
/*
    Author - HoverGuy
	© All Fucks Reserved
	Website - http://www.sunrise-production.com
*/

class HG_Tags
{
	idd = HG_NO_IDC;
	duration = HG_INFINITE;
	fadeIn = 0;
	fadeOut = 0;
	name = "HG_Tags";
	onLoad = "uiNamespace setVariable ['HG_Tags',_this select 0]";
	onUnload = "uiNamespace setVariable ['HG_Tags',displayNull]";
	onDestroy = "uiNamespace setVariable ['HG_Tags',displayNull]";
	
	class ControlsBackground
	{
		class TagText: HG_RscStructuredText
		{
			idc = HG_TAGS_TEXT_IDC;
			colorBackground[] = {0,0,0,0};
			x = 0;
			y = 0;
			w = 0.5;
			h = 0.5;
		};
	};
};

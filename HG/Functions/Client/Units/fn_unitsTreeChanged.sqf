#include "HG_Macros.h"
/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/
params["_ctrl","_path","_sel","_cfg","_dn","_pic","_desc"];

disableSerialization;

_sel = _ctrl tvData _path;
_cfg = [_sel] call HG_fnc_getConfig;
_dn = getText(configFile >> _cfg >> _sel >> "displayName");
_pic = getText(configFile >> _cfg >> _sel >> "Picture");
_desc = getText(configFile >> _cfg >> _sel >> "descriptionShort");

if(_sel != (localize "STR_HG_NONE")) then
{
    HG_UNITS_ITEM_PIC ctrlSetText _pic;
    HG_UNITS_ITEM_TEXT ctrlSetStructuredText parseText format["<t align='center' size='1'>%1<br/>%2</t>",_dn,_desc];
} else {
    HG_UNITS_ITEM_PIC ctrlSetText "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Prop.jpg";
    HG_UNITS_ITEM_TEXT ctrlSetStructuredText parseText format["<t align='center' size='1'>%1</t>",(localize "STR_HG_NOTHING_TO_DISPLAY")];
};

true;

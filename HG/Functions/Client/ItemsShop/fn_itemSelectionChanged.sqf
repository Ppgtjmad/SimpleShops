#include "HG_Macros.h"
/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/
params["_ctrl","_index","_item"];

disableSerialization;

HG_ITEMS_AMOUNT ctrlSetText "1";

_item = _ctrl lbData _index;

if(_item != (localize "STR_HG_NONE")) then
{
    private["_price","_itemClass","_itemType","_cat","_itemPicture","_itemDescription"];
	
    _price = _ctrl lbValue _index;
    _itemClass = [_item] call HG_fnc_getConfig;
    _itemType = [_item] call BIS_fnc_itemType;
    _cat = _itemType select 0;
    _itemPicture = getText(configFile >> _itemClass >> _item >> "Picture");
    _itemDescription = getText(configFile >> _itemClass >> _item >> "descriptionShort");

    if(_cat in ["Magazine","Mine","Item"]) then
    {
        {
	        _x ctrlEnable true;
	    } forEach [HG_ITEMS_ADD,HG_ITEMS_SUB];
    } else {
        {
	        _x ctrlEnable false;
	    } forEach [HG_ITEMS_ADD,HG_ITEMS_SUB];
    };
	
	HG_ITEMS_BUY ctrlEnable true;

    HG_ITEMS_TOTAL ctrlSetText format[(localize "STR_HG_DLG_IS_TOTAL"),([_price,true] call HG_fnc_currencyToText)];
	
    HG_ITEMS_ITEM_PICTURE ctrlSetText _itemPicture;
	HG_ITEMS_ITEM_TEXT ctrlSetStructuredText parseText format["<t align='center' size='1'><br/>%1</t>",_itemDescription];
} else {
    HG_ITEMS_TOTAL ctrlSetText format[(localize "STR_HG_DLG_IS_TOTAL"),([0,true] call HG_fnc_currencyToText)];
    HG_ITEMS_ITEM_PICTURE ctrlSetText "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Prop.jpg";
	HG_ITEMS_ITEM_TEXT ctrlSetStructuredText parseText "<t align='center' size='1'>"+(localize "STR_HG_NOTHING_TO_DISPLAY")+"</t>";
	
	{
	    _x ctrlEnable false;
	} forEach [HG_ITEMS_ADD,HG_ITEMS_SUB,HG_ITEMS_BUY];
};

true;

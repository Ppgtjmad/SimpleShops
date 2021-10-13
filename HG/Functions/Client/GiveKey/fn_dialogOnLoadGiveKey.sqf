/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/
params["_vehicle"];

createDialog "HG_GiveKey";

HG_CURSOR_OBJECT = _vehicle;

[] call HG_fnc_refreshKeyList;
[] call HG_fnc_refreshKeyCombo;

true;

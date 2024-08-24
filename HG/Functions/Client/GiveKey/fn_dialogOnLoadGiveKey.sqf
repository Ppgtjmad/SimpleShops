/*
    Author - HoverGuy
	GitHub - https://github.com/Ppgtjmad/SimpleShops
	Steam - https://steamcommunity.com/id/HoverGuy/
*/
params["_vehicle"];

createDialog "HG_GiveKey";

HG_CURSOR_OBJECT = _vehicle;

[] call HG_fnc_refreshKeyList;
[] call HG_fnc_refreshKeyCombo;

true;

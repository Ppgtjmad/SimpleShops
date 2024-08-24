/*
    Author - HoverGuy
	GitHub - https://github.com/Ppgtjmad/SimpleShops
	Steam - https://steamcommunity.com/id/HoverGuy/
*/
params["_saveType"];

if(_saveType isEqualTo "save") then
{
    waitUntil {sleep 1; !isNil "HG_fnc_HUD"};
    [0] call HG_fnc_HUD;
};

true;

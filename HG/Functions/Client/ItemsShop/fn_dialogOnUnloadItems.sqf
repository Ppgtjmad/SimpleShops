/*
    Author - HoverGuy
	GitHub - https://github.com/Ppgtjmad/SimpleShops
	Steam - https://steamcommunity.com/id/HoverGuy/
*/

if(HG_ITEMS_BOUGHT) then
{
    [player] remoteExecCall ["HG_fnc_getGear",2,false];
};

HG_ITEMS_BOUGHT = nil;

true;

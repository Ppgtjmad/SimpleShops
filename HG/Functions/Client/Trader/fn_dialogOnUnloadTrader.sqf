/*
    Author - HoverGuy
	GitHub - https://github.com/Ppgtjmad/SimpleShops
	Steam - https://steamcommunity.com/id/HoverGuy/
*/

if(HG_GEAR_SOLD) then
{
    [player] remoteExecCall ["HG_fnc_getGear",2,false];
};

HG_SELECTION_HANDLER = nil; 
HG_TRADER_HANDLER = nil; 
HG_PRICE_HANDLER = nil; 
HG_TOTAL_HANDLER = nil;
HG_GEAR_SOLD = nil;

true;

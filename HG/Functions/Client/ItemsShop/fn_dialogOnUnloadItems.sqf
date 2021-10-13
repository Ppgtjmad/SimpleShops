/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/

if(HG_ITEMS_BOUGHT) then
{
    [player] remoteExecCall ["HG_fnc_getGear",2,false];
};

HG_ITEMS_BOUGHT = nil;

true;

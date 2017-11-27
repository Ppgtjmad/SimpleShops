/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/

if(HG_ITEMS_BOUGHT) then
{
    [player] remoteExecCall ["HG_fnc_getGear",2,false];
};

HG_ITEMS_BOUGHT = nil;

true;

/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params["_unit","_targetContainer","_secContainer",["_handled",false]];

if(HG_PLAYER_INVENTORY_SAVE_ENABLED) then
{
    [player] remoteExecCall ["HG_fnc_getGear",2,false];
};

_handled;

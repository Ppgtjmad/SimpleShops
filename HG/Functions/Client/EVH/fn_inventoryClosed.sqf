/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/
params["_unit","_targetContainer","_secContainer",["_handled",false]];

if(HG_PLAYER_INVENTORY_SAVE_ENABLED) then
{
    [player] remoteExecCall ["HG_fnc_getGear",2,false];
};

if(HG_VEHICLE_INVENTORY_SAVE_ENABLED) then
{
    if((_targetContainer isKindOf "LandVehicle") OR (_targetContainer isKindOf "Ship") OR (_targetContainer isKindOf "Air") OR (_targetContainer isKindOf "Submarine")) then
    {
        [_targetContainer] remoteExecCall ["HG_fnc_getInventory",2,false];
    };
};

_handled;

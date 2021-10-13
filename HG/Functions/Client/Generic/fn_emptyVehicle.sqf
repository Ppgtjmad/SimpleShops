/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/
params["_vehicle","_question"];

_question = [(localize "STR_HG_EMPTY_QUESTION"),(localize "STR_HG_EMPTY_VEHICLE"),(localize "STR_HG_YES"),(localize "STR_HG_NO")] call BIS_fnc_guiMessage;
waitUntil {!isNil "_question"};

if(_question) then
{
    clearItemCargoGlobal _vehicle; 
    clearMagazineCargoGlobal _vehicle; 
    clearWeaponCargoGlobal _vehicle; 
    clearBackpackCargoGlobal _vehicle; 

    hint (localize "STR_HG_VEHICLE_EMPTIED");
};

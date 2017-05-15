/*
    Author - HoverGuy
    Website - http://www.sunrise-production.com
    This work is licensed under a Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License.
    To view a copy of this license, visit https://creativecommons.org/licenses/by-nc-nd/4.0/.
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

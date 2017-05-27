/*
    Author - HoverGuy
    Website - http://www.sunrise-production.com
    This work is licensed under a Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License.
    To view a copy of this license, visit https://creativecommons.org/licenses/by-nc-nd/4.0/.
*/
params["_vehicle","_lock"];

if((locked _vehicle) isEqualTo 2) then
{
    _lock = 0;
	playSound "hg_unlock"; 
	hintSilent (localize "STR_HG_VEHICLE_UNLOCKED");
} else {
    _lock = 2;
	playSound "hg_lock"; 
	hintSilent (localize "STR_HG_VEHICLE_LOCKED");
};

if(local _vehicle) then
{
    _vehicle lock _lock;
} else {
    [_vehicle,_lock] remoteExecCall ["HG_fnc_lock",2,false];
};

true;

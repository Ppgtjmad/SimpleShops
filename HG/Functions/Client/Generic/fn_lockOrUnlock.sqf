/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/
params["_vehicle","_lock","_sound","_icon","_msg"];

if((locked _vehicle) isEqualTo 2) then
{
    _lock = 0;
	_sound = "hg_unlock";
	_icon = "HG\UI\Icons\unlock.paa";
	_msg = (localize "STR_HG_VEHICLE_UNLOCKED")
} else {
    _lock = 2;
	_sound = "hg_lock";
	_icon = "HG\UI\Icons\lock.paa";
	_msg = (localize "STR_HG_VEHICLE_LOCKED");
};

if(local _vehicle) then
{
    _vehicle lock _lock;
} else {
    [_vehicle,_lock] remoteExecCall ["HG_fnc_lock",2,false];
};

playSound _sound;
hintSilent parseText format
[
    "<t align='center'><img image='%1' shadow='0' size='1.5'></img></t><br/>"+
	"<t align='center' size='1'>%2</t>",
	_icon,_msg
];

true;

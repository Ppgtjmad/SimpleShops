/*
    Author - HoverGuy
    © All Fucks Reserved
*/
params["_vehicle"];

_vehicle addAction["<img image='HG\UI\Icons\lock.paa' size='1.5'/><t color='#FF0000'>Lock Vehicle</t>",{(_this select 0) lock 2; hint (localize "STR_HG_VEHICLE_LOCKED")},"",0,false,false,"",'(alive player) AND ((locked _target) isEqualTo 0)'];
_vehicle addAction["<img image='HG\UI\Icons\unlock.paa' size='1.5'/><t color='#FF0000'>Unlock Vehicle</t>",{(_this select 0) lock 0; hint (localize "STR_HG_VEHICLE_UNLOCKED")},"",0,false,false,"",'(alive player) AND ((locked _target) isEqualTo 2)'];

true;

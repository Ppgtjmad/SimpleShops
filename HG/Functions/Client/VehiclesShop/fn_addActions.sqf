/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/
params["_vehicle"];

_vehicle addAction ["<img image='HG\UI\Icons\clear.paa' size='2' shadow='0'/><t color='#FF0000' font='RobotoCondensedBold'>"+(localize "STR_HG_EMPTY_VEHICLE")+"</t>",{[(_this select 0)] spawn HG_fnc_emptyVehicle},"",0,false,false,"",'(alive player) AND (alive _target) AND (((player distance _target) < 5.5) OR ((objectParent player) isEqualTo _target))'];

true;

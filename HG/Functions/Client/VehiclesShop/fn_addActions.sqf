/*
    Author - HoverGuy
    Website - http://www.sunrise-production.com
    This work is licensed under a Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License.
    To view a copy of this license, visit https://creativecommons.org/licenses/by-nc-nd/4.0/.
*/
params["_vehicle"];

_vehicle addAction ["<img image='HG\UI\Icons\clear.paa' size='1.5'/><t color='#FF0000'>"+(localize "STR_HG_EMPTY_VEHICLE")+"</t>",{[(_this select 0)] spawn HG_fnc_emptyVehicle},"",0,false,false,"",'(alive player) AND (alive _target) AND (((player distance _target) < 5.5) OR ((objectParent player) isEqualTo _target))'];

true;

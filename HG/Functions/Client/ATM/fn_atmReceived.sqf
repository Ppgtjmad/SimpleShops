/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params["_from","_amount"];

[_amount,0] call HG_fnc_addOrSubCash;
hint format[(localize "STR_HG_ATM_TRANSFER_RECEIVED"),_from,([_amount,true] call HG_fnc_currencyToText)];

true;

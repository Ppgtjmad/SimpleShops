#include "HG_Macros.h"
/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/

private _value = ctrlText HG_GM_EDIT;
if(_value isEqualTo "") exitWith {hint (localize "STR_HG_VALUE_EMPTY");};
if(!([_value] call HG_fnc_isNumeric)) exitWith {hint (localize "STR_HG_NOT_A_NUMBER");};
_value = parseNumber _value;
if(_value <= 0) exitWith {hint (localize "STR_HG_NEGATIVE_OR_ZERO");};
if(_value > (player getVariable "HG_Cash")) exitWith {hint (localize "STR_HG_TOO_MUCH");};

[_value,0] remoteExecCall ["HG_fnc_addOrSubCash",HG_CURSOR_OBJECT,false];
hint format[(localize "STR_HG_SENT_MONEY"),([_value,true] call HG_fnc_currencyToText),(name HG_CURSOR_OBJECT)];
[_value,1] call HG_fnc_addOrSubCash;

private _msg = format[(localize "STR_HG_RECEIVED_MONEY"),([_value,true] call HG_fnc_currencyToText),profileName];
_msg remoteExecCall ["hint",HG_CURSOR_OBJECT,false];

closeDialog 0;

true;

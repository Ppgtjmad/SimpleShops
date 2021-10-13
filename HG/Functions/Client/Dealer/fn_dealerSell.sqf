#include "HG_Macros.h"
/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/
private["_sel","_val","_vehicle","_plate"];

disableSerialization;

_sel = HG_DEALER_V_LIST lbData (lbCurSel HG_DEALER_V_LIST);
_val = HG_DEALER_V_LIST lbValue (lbCurSel HG_DEALER_V_LIST);
_vehicle = HG_VEHICLES_HANDLER select _val;
_plate = (_vehicle getVariable "HG_Owner") select 1;

deleteVehicle _vehicle;
[HG_PRICE_HANDLER,0] call HG_fnc_addOrSubCash;
hint format[(localize "STR_HG_DLG_DE_SOLD"),(getText(configFile >> "CfgVehicles" >> _sel >> "displayName")),[HG_PRICE_HANDLER,true] call HG_fnc_currencyToText];
[player,_plate] remoteExecCall ["HG_fnc_deleteVehicle",2,false];

[] spawn HG_fnc_refreshDealer;

true;

#include "HG_Macros.h"
/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/
params["_target","_caller","_id","_dealer"];
if((typeName _dealer) != "STRING") exitWith {hint (localize "STR_HG_ERR_ON_LOAD_1");};
if(_dealer isEqualTo "") exitWith {hint (localize "STR_HG_ERR_ON_LOAD_2");};

private["_condition","_isOk"];
_condition = getText(getMissionConfig "CfgClient" >> "HG_DealersCfg" >> _dealer >> "conditionToAccess");
_isOk = (_condition isEqualTo "") OR (call compile _condition);
if(!_isOk) exitWith {hint (localize "STR_HG_ACCESS_DENIED");};

private _interestedIn = getArray(getMissionConfig "CfgClient" >> "HG_DealersCfg" >> _dealer >> "interestedIn");
if((count _interestedIn) isEqualTo 0) exitWith {hint (localize "STR_HG_SHOP_EMPTY_BIS");};

disableSerialization;

createDialog "HG_Dealer";

HG_DEALER_HANDLER = [];
HG_PRICE_HANDLER = 0;

lbClear HG_DEALER_D_LIST;

private "_ind";

{
    _ind = HG_DEALER_D_LIST lbAdd (getText(configFile >> "CfgVehicles" >> (_x select 0) >> "displayName"));
	HG_DEALER_D_LIST lbSetValue [_ind,(_x select 1)];
	HG_DEALER_D_LIST lbSetTooltip [_ind,[(_x select 1),true] call HG_fnc_currencyToText];
	HG_DEALER_HANDLER pushBack (_x select 0);
} forEach _interestedIn;

HG_DEALER_D_LIST lbSetCurSel 0;

[] call HG_fnc_refreshDealer;

true;

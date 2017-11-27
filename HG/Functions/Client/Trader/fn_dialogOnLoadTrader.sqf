#include "HG_Macros.h"
/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params["_target","_caller","_id","_trader"];
if((typeName _trader) != "STRING") exitWith {hint (localize "STR_HG_ERR_ON_LOAD_1");};
if(_trader isEqualTo "") exitWith {hint (localize "STR_HG_ERR_ON_LOAD_2");};

private["_whitelist","_isOk"];
_whitelist = getArray(getMissionConfig "CfgClient" >> "HG_TradersCfg" >> _trader >> "whitelistRanks");
_isOk = ((count _whitelist) isEqualTo 0) OR ((rank player) in _whitelist);
if(!_isOk) exitWith {hint (localize "STR_HG_ACCESS_DENIED");};

private _interestedIn = getArray(getMissionConfig "CfgClient" >> "HG_TradersCfg" >> _trader >> "interestedIn");
if((count _interestedIn) isEqualTo 0) exitWith {hint (localize "STR_HG_TRADER_EMPTY");};

disableSerialization;

createDialog "HG_Trader";

HG_SELECTION_HANDLER = [0];
HG_TRADER_HANDLER = [];
HG_PRICE_HANDLER = 0;
HG_TOTAL_HANDLER = 0;
HG_GEAR_SOLD = false;

lbClear HG_TRADER_LIST;

private["_cfg","_ind"];

{
    _cfg = [(_x select 0)] call HG_fnc_getConfig;
    _ind = HG_TRADER_LIST lbAdd (getText(configFile >> _cfg >> (_x select 0) >> "displayName"));
	HG_TRADER_LIST lbSetValue [_ind,(_x select 1)];
	HG_TRADER_LIST lbSetTooltip [_ind,[(_x select 1),true] call HG_fnc_currencyToText];
	HG_TRADER_HANDLER pushBack (_x select 0);
} forEach _interestedIn;

HG_TRADER_LIST lbSetCurSel 0;

[] call HG_fnc_refreshTrader;

true;

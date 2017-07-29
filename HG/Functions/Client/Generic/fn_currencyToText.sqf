/*
    Author - HoverGuy
    Description - Function to return currency symbol & passed amount as text
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
    Parameters
    - 0 - INTEGER - Value
    - 1 - BOOL (OPTIONAL) - true for specific currency input instead of automatic detection (which is less precise)
    - 2 - STRING (OPTIONAL) - If the above is true, it will take specific currency instead of game language automatic detection
    Returns
    Currency symbol & amount as text
*/
params
[
    ["_value",0,[0]],
	["_custom",false,[false]],
	["_currency",getText(getMissionConfig "CfgClient" >> "currencyType"),[""]],
	["_symbol",[],[]],
	["_text","",[""]]
];

_value = [_value] call BIS_fnc_numberText;

/*
    _symbol array order
    - 0 - STRING - Currency symbol
    - 1 - BOOL - true for symbol as prefix, false for symbol as suffix
*/
if(!_custom) then
{
    _symbol = switch(language) do
    {
	    case "French": {["€",false]};
	    case "German": {["€",false]};
	    case "Russian": {["₽",true]};
	    case "Spanish": {["€",false]};
	    case "Italian": {["€",false]};
        default {["$",true]};
    };
} else {
    _symbol = switch(_currency) do
	{
	    case "USD": {["$",true]};
		case "EUR": {["€",false]};
		case "JPY": {["¥",true]};
		case "GBP": {["£",true]};
		case "AUD": {["$",true]};
		case "CAD": {["$",true]};
		case "CHF": {["CHF",true]};
		case "CNY": {["¥",true]};
		case "SEK": {["kr",false]};
		case "MXN": {["$",true]};
		case "NZD": {["$",true]};
		case "SGD": {["$",true]};
		case "HKD": {["$",true]};
		case "NOK": {["kr",true]};
		case "KRW": {["₩",false]};
		case "INR": {["₹",true]};
		case "RUB": {["₽",true]};
		case "BRL": {["R$",false]};
		case "ZAR": {["R",true]};
	    default {["$",true]};
	};
};

_text = if(_symbol select 1) then {((_symbol select 0) + _value)} else {(_value + (_symbol select 0))};
_text;

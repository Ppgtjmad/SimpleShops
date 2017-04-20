/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params["_value","_cash",["_hasEnough",false]];

if(HG_SAVE_ENABLED) then
{
    _cash = HG_CASH;
} else {
    _cash = player getVariable "HG_myCash";
};

if(_cash >= _value) then
{
    _hasEnough = true;
};

_hasEnough;

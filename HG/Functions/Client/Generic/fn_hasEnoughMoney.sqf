/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params["_value",["_mode",0,[0]],"_balance",["_hasEnough",false]];

_balance = if(_mode isEqualTo 0) then
{
    player getVariable "HG_Cash";
} else {
    player getVariable "HG_Bank";
};

if(_balance >= _value) then
{
    _hasEnough = true;
};

_hasEnough;

/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params["_value",["_hasEnough",false]];

if((player getVariable "HG_Cash") >= _value) then
{
    _hasEnough = true;
};

_hasEnough;

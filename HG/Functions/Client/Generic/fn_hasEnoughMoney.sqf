/*
    Author - HoverGuy
	GitHub - https://github.com/Ppgtjmad/SimpleShops
	Steam - https://steamcommunity.com/id/HoverGuy/
*/
params["_value",["_mode",0,[0]],"_balance",["_hasEnough",false]];

_balance = if(_mode isEqualTo 0) then
{
    player getVariable HG_CASH_VAR;
} else {
    player getVariable HG_BANK_VAR;
};

if(_balance >= _value) then
{
    _hasEnough = true;
};

_hasEnough;

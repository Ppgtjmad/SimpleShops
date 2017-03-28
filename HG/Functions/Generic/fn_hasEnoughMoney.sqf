/*
    Author - HoverGuy
    © All Fucks Reserved
*/
params["_value","_cash",["_hasEnough",false]];

if(HG_SAVE_ENABLED) then
{
    _cash = profileNamespace getVariable "HG_Save";
} else {
    _cash = player getVariable "HG_myCash";
};

if(_cash > _value) then
{
    _hasEnough = true;
};

_hasEnough;

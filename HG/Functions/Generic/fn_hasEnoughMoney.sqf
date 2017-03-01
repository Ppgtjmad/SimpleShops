/*
    Author - HoverGuy
    © All Fucks Reserved
*/
params["_value","_saveEnabled","_cash",["_hasEnough",false]];

_saveEnabled = if((getNumber(missionConfigFile >> "CfgClient" >> "enableSave")) isEqualTo 1) then {true} else {false};

if(_saveEnabled) then
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

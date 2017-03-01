/*
    Author - HoverGuy
    Description - Used to add or substract money from the money variable
    © All Fucks Reserved
*/
params["_amount","_mode","_saveEnabled","_hudEnabled","_oldVal","_newVal"];

_saveEnabled = if((getNumber(missionConfigFile >> "CfgClient" >> "enableSave")) isEqualTo 1) then {true} else {false};
_hudEnabled = if((getNumber(missionConfigFile >> "CfgClient" >> "enableHUD")) isEqualTo 1) then {true} else {false};

if(_saveEnabled) then
{
    _oldVal = profileNamespace getVariable "HG_Save";
} else {
    _oldVal = player getVariable "HG_myCash";
};

switch(_mode) do
{
    case 0: 
	{
		_newVal = _oldVal + _amount;
	};
	case 1:
	{
		_newVal = _oldVal - _amount;
	};
};

if(_saveEnabled) then
{
    profileNamespace setVariable["HG_Save",_newVal];
	saveProfileNamespace;
} else {
    player setVariable["HG_myCash",_newVal];
};

if(_hudEnabled) then
{
    [1] call HG_fnc_HUD;
};

true;

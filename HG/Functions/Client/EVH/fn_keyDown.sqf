/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params
[
    "_ctrl","_dikCode","_shift","_ctrlKey","_alt",
    ["_handled",false],
    ["_ulKey",getNumber(getMissionConfig "CfgClient" >> "lockUnlockKey")],
	["_admKey",getNumber(getMissionConfig "CfgClient" >> "adminKey")],
	["_atmKey",getNumber(getMissionConfig "CfgClient" >> "atmKey")],
	["_giveMKey",getNumber(getMissionConfig "CfgClient" >> "giveMoneyKey")]
];

switch(_dikCode) do 
{
    // Lock/Unlock vehicle
	case _ulKey:
	{
	    if(alive player) then
		{
		    private "_vehicle";
			
		    if(!isNull objectParent player) then
		    {
		        _vehicle = vehicle player;
		    } else {
		        _vehicle = cursorObject;
		    };
		
		    if((alive _vehicle) AND ((_vehicle isKindOf "LandVehicle") OR (_vehicle isKindOf "Ship") OR (_vehicle isKindOf "Air") OR (_vehicle isKindOf "Submarine")) AND (((_vehicle getVariable "HG_Owner") select 0) isEqualTo (getPlayerUID player)) AND ((player distance _vehicle) <= 5.5)) then
		    {
		        [_vehicle] call HG_fnc_lockOrUnlock;
				_handled = true;
		    };
		};
	};
	
	// Admin key
	case _admKey:
	{
	    if(((getPlayerUID player) in HG_ADMINS) AND !dialog AND (alive player)) then
        {
			[] call HG_fnc_dialogOnLoadAdminMenu;
			_handled = true;
		};
	};
	
	// ATM key
	case _atmKey:
	{
	    if(HG_ATM_ENABLED) then
		{
		    if([] call HG_fnc_nearbyATM) then
			{
			    [] call HG_fnc_dialogOnLoadATM;
				_handled = true;
			};
		};
	};
	
	// Give money key
	case _giveMKey:
	{
	    if(!HG_GIVE_MONEY_ENABLED) exitWith {};
		if((alive player) AND (cursorObject isKindOf "Man") AND (isPlayer cursorObject) AND (alive cursorObject) AND ((player distance cursorObject) < 2) AND !dialog) then
		{
		    [cursorObject] call HG_fnc_dialogOnLoadGiveMoney;
			_handled = true;
		};
	};
};

_handled;

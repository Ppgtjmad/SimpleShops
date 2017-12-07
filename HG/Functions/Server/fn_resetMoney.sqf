/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/

if(!HG_SAVING_EXTDB) then
{
    if(!isNil "HG_Profile") then
	{
	    private _vars = parsingNamespace getVariable "HG_Profile";
	
	    {
            if((["hg_cash_",_x,false] call BIS_fnc_inString) OR (["hg_bank_",_x,false] call BIS_fnc_inString)) then
            {
                _value = profileNamespace getVariable _x;
				
                if(_value != 0) then
                {
                    profileNamespace setVariable [_x,nil];
                    saveProfileNamespace;
                };
            };
        } forEach _vars;
	};
} else {
    private _query = if(HG_SAVING_PROTOCOL isEqualTo "SQL") then
	{
	    "UPDATE HG_Players SET Money = 0 AND Bank = 0";
	} else {
	    "HG_moneyReset";
	};
	
	[1,_query] call HG_fnc_asyncCall;
};
	
true;

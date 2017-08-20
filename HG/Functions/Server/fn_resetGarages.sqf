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
            if(["hg_garage_",_x,false] call BIS_fnc_inString) then
            {
                _vehicles = profileNamespace getVariable _x;
				
                if((count _vehicles) != 0) then
                {
                    profileNamespace setVariable [_x,[]];
                    saveProfileNamespace;
                };
            };
        } forEach _vars;
	};
} else {
    private _query = if(HG_SAVING_PROTOCOL isEqualTo "SQL") then
	{
	    "DELETE FROM HG_Vehicles";
	} else {
	    "HG_resetGarages";
	};
	
	[1,_query] call HG_fnc_asyncCall;
};
	
true;

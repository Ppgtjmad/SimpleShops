/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/

if(!HG_SAVING_EXTDB) then
{
    if(!isNil {parsingNamespace getVariable "HG_Profile"}) then
	{
	    private _vars = parsingNamespace getVariable "HG_Profile";
	
        {
	        if(["hg_garage_",_x,false] call BIS_fnc_inString) then
	        {
		        _vehicles = profileNamespace getVariable _x;
		
		        if((count _vehicles) != 0) then
		        {
			        {
				        (_vehicles select _forEachIndex) set [3,0];
			        } forEach _vehicles;
		        };
		
		        profileNamespace setVariable [_x,_vehicles];
		        saveProfileNamespace;
            };
        } forEach _vars;
	};
} else {
    private _query = if(HG_SAVING_PROTOCOL isEqualTo "SQL") then
	{
	    "UPDATE HG_Vehicles SET Active = 0";
	} else {
	    "HG_activeReset";
	};
	
	[1,_query] call HG_fnc_asyncCall;
};
	
true;

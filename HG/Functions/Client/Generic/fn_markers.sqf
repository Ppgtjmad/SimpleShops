/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/
params[["_members",[]],["_markers",[]],"_marker"];

while {true} do
{
	uiSleep 0.5;
	if(visibleMap) then
	{
	    _members = (units (group player));
		if((count _members) != 0) then
		{
		    {
			    _marker = createMarkerLocal [format["Unit_%1",_x],visiblePosition _x];
			    _marker setMarkerColorLocal "ColorCivilian";
			    _marker setMarkerTypeLocal "Mil_dot";
			    _marker setMarkerTextLocal format["%1 - %2 [%3]",(rank _x),(name _x),if(!isNull objectParent _x) then {"IN VEHICLE"} else {"ON FOOT"}];
			    _markers pushBack [_marker,_x];
		    } forEach _members;
		};

		while {visibleMap} do
		{
			{
				private["_marker","_obj"];
				_marker = _x select 0;
				_obj = _x select 1;
				if(!isNil "_obj" && !isNull _obj) then 
				{
					_marker setMarkerPosLocal (visiblePosition _obj);
				};
			} forEach _markers;
			if(!visibleMap) exitWith {};
			uiSleep 0.01;
		};

		{
		    deleteMarkerLocal (_x select 0);
		} forEach _markers;
	};
};

/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/

private _cleanup =
{
    private["_all","_garage","_owner","_uid","_plate","_index"];
	
    _all = (allMissionObjects "LandVehicle") + (allMissionObjects "Air") + (allMissionObjects "Ship") + (allMissionObjects "Submarine");

    {
        if(!alive _x) then
	    {
		    _owner = _x getVariable "HG_Owner";
		    _uid = _owner select 0;
		    _plate = _owner select 1;
		
		    if(!HG_SAVING_EXTDB) then
		    {
		        _garage = profileNamespace getVariable[format["HG_Garage_%1",_uid],[]];
			    _index = [_plate,_garage] call HG_fnc_findIndex;
			    if(_index != -1) then
			    {
			        _garage deleteAt _index;
				    profileNamespace setVariable[format["HG_Garage_%1",_uid],_garage];
				    saveProfileNamespace;
			    };
		    } else {
			    private _query = if(HG_SAVING_PROTOCOL isEqualTo "SQL") then
			    {
				    format["DELETE FROM HG_Vehicles WHERE PID = '%1' AND Plate = '%2'",_uid,_plate];
			    } else {
				format["HG_vehicleDelete:%1:%2",_uid,_plate];
			    };
			
			    [1,_query] call HG_fnc_asyncCall;
		    };
		
		    deleteVehicle _x;
	    };
    } forEach _all;
	
	true;
};

while{true} do
{
    uiSleep (getNumber(getMissionConfig "CfgClient" >> "vehiclesCleanupPeriod") * 60);
    [] spawn _cleanup;
};

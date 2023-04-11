#include "HG_Macros.h"
/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/
params["_ctrl","_index","_vehicle"];

disableSerialization;

_vehicle = _ctrl lbData _index;

if(!isNull HG_VEHICLE_PREVIEW) then
{
    deleteVehicle HG_VEHICLE_PREVIEW;
};

if(_vehicle != (localize "STR_HG_NONE")) then
{
    private["_price","_veh","_canColor"];
	
    _price = _ctrl lbValue _index;
	
	{
	    _x ctrlEnable true;
	} forEach [HG_VEHICLES_TG,HG_VEHICLES_BUY,HG_VEHICLES_COLORS];
	
    HG_VEHICLES_TEXT ctrlSetStructuredText parseText format
    [
        "<br/>"+
	    "<img image='%1' size='2' align='center'></img><br/><br/>"+
	    "<t align='center' size='1'>"+ (localize "STR_HG_DLG_VS_SPEED")+ "</t><br/>"+
	    "<t align='center' size='1'>"+ (localize "STR_HG_DLG_VS_ARMOR")+ "</t><br/>"+
	    "<t align='center' size='1'>"+ (localize "STR_HG_DLG_VS_SEATS")+ "</t><br/>"+
	    "<t align='center' size='1'>"+ (localize "STR_HG_DLG_VS_ENGINE")+ "</t><br/>"+
	    "<t align='center' size='1'>"+ (localize "STR_HG_DLG_VS_FUEL_MAX")+ "</t><br/>"+
	    "<t align='center' size='1'>"+ (localize "STR_HG_DLG_VS_PRICE_TAG")+ "</t>",
	    getText(configFile >> "CfgVehicles" >> _vehicle >> "picture"),
	    getNumber(configFile >> "CfgVehicles" >> _vehicle >> "maxSpeed"),
	    getNumber(configFile >> "CfgVehicles" >> _vehicle >> "armor"),
	    ([_vehicle,true] call BIS_fnc_crewCount),
	    getNumber(configFile >> "CfgVehicles" >> _vehicle >> "enginePower"),
	    getNumber(configFile >> "CfgVehicles" >> _vehicle >> "fuelCapacity"),
	    if(_price <= 0) then {(localize "STR_HG_DLG_FREE")} else {[_price,true] call HG_fnc_currencyToText}
    ];

    _veh = _vehicle createVehicleLocal (getPosATL player);
    _veh setPosATL [(getPosATL HG_OBJECT_PREVIEW) select 0,(getPosATL HG_OBJECT_PREVIEW) select 1,((getPosATL HG_OBJECT_PREVIEW) select 2)+0.2];
    _veh setDir round([player,_veh] call BIS_fnc_dirTo);
    _veh enableSimulation false;

    HG_VEHICLE_PREVIEW = _veh;
	HG_VEHICLE_COLORS = [];
	lbClear HG_VEHICLES_COLORS;
	
	_canColor = isClass(configFile >> "CfgVehicles" >> _vehicle >> "TextureSources");
	
	if(_canColor) then
	{
	    private["_colors","_ind"];
		
	    _colors = "true" configClasses (configFile >> "CfgVehicles" >> _vehicle >> "TextureSources");
		
		lbClear HG_VEHICLES_COLORS;
		
		{
		    _ind = HG_VEHICLES_COLORS lbAdd (getText(_x >> "displayName"));
			HG_VEHICLES_COLORS lbSetData [_ind,(configName _x)];
			HG_VEHICLES_COLORS lbSetValue [_ind,_forEachIndex];
			HG_VEHICLE_COLORS pushBack (getArray(_x >> "textures"));
		} forEach _colors;
	} else {
	    _ind = HG_VEHICLES_COLORS lbAdd (localize "STR_HG_DEFAULT");
	    HG_VEHICLES_COLORS lbSetData[_ind,""];
	};

    HG_CAMERA_PREVIEW camSetTarget (_veh modelToWorld [0,0,0.5]);
    if(_veh isKindOf "Air") then
    {
        HG_CAMERA_PREVIEW camSetPos (_veh modelToWorld [0,15,0]);
    } else {
        HG_CAMERA_PREVIEW camSetPos (_veh modelToWorld [0,10,0]);
    };
    HG_CAMERA_PREVIEW camCommit 0;

    _veh setDir round((getDir _veh)-45);

    [_veh] spawn HG_fnc_vehicleRotate;
	
	HG_VEHICLES_COLORS lbSetCurSel 0;
} else {
    HG_VEHICLES_TEXT ctrlSetStructuredText parseText format["<t align='center' size='1'>%1</t>",(localize "STR_HG_NOTHING_TO_DISPLAY")];
    
	{
	    _x ctrlEnable false;
	} forEach [HG_VEHICLES_TG,HG_VEHICLES_BUY,HG_VEHICLES_COLORS];
};

true;

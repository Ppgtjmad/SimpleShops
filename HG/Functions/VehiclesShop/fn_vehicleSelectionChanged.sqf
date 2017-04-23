#include "HG_Macros.h"
/*
    Author - HoverGuy
    Description - Called when selection in listbox has changed
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params["_ctrl","_index","_vehicle","_price","_veh","_light"];

disableSerialization;

_vehicle = _ctrl lbData _index;
_price = _ctrl lbValue _index;

if(!isNull HG_VEHICLE_PREVIEW) then
{
    deleteVehicle HG_VEHICLE_PREVIEW;
};

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
	getNumber(configFile >> "CfgVehicles" >> _vehicle >> "transportSoldier"),
	getNumber(configFile >> "CfgVehicles" >> _vehicle >> "enginePower"),
	getNumber(configFile >> "CfgVehicles" >> _vehicle >> "fuelCapacity"),
	if(_price <= 0) then {(localize "STR_HG_DLG_FREE")} else {[_price,true] call HG_fnc_currencyToText}
];

_veh = _vehicle createVehicleLocal (getPosATL player);
_veh setPosATL [(getPosATL HG_OBJECT_PREVIEW) select 0,(getPosATL HG_OBJECT_PREVIEW) select 1,((getPosATL HG_OBJECT_PREVIEW) select 2)+0.2];
_veh setDir round([player,_veh] call BIS_fnc_dirTo);
_veh enableSimulation false;

HG_VEHICLE_PREVIEW = _veh;

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

true;

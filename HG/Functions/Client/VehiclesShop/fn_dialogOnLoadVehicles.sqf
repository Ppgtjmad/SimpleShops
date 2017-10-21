#include "HG_Macros.h"
/*
    Author - HoverGuy
    Description - Called by the player to open and feed the dialog with data
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params["_target","_caller","_id","_whatShop"];
if((typeName _whatShop) != "STRING") exitWith {hint (localize "STR_HG_ERR_ON_LOAD_1");};
if(_whatShop isEqualTo "") exitWith {hint (localize "STR_HG_ERR_ON_LOAD_2");};

private _shopList = "true" configClasses (getMissionConfig "CfgClient" >> "HG_VehiclesShopCfg" >> _whatShop);
if((count _shopList) isEqualTo 0) exitWith {hint (localize "STR_HG_SHOP_EMPTY");};

private["_whitelist","_isOk"];
_whitelist = getArray(getMissionConfig "CfgClient" >> "HG_VehiclesShopCfg" >> _whatShop >> "whitelistRanks");
_isOk = ((count _whitelist) isEqualTo 0) OR ((rank player) in _whitelist);
if(!_isOk) exitWith {hint (localize "STR_HG_ACCESS_DENIED");};

disableSerialization;

createDialog "HG_VehiclesShop";

HG_OBJECT_PREVIEW = objNull;
HG_VEHICLE_PREVIEW = objNull;
HG_VEHICLE_LIGHTS = [];
HG_VEHICLE_COLORS = [];

if(!HG_BUY_TO_GARAGE_ENABLED) then
{
    HG_VEHICLES_TG ctrlEnable false;
};

lbClear HG_VEHICLES_SWITCH;

private["_ind","_h"];

{
	_ind = HG_VEHICLES_SWITCH lbAdd (getText(_x >> "displayName"));
	HG_VEHICLES_SWITCH lbSetData [_ind,format["%1/%2",_whatShop,(configName _x)]];
} forEach _shopList;

_h = "Land_HelipadEmpty_F" createVehicleLocal (getPosATL player);
_h setPos (player modelToWorld [0,10,30]);

HG_OBJECT_PREVIEW = _h;

HG_CAMERA_PREVIEW = "CAMERA" camCreate getPos _h;
showCinemaBorder false;
HG_CAMERA_PREVIEW cameraEffect ["INTERNAL","BACK"];
HG_CAMERA_PREVIEW camSetFovRange [0.1,0.7];
HG_CAMERA_PREVIEW camSetFOV 0.7;
HG_CAMERA_PREVIEW camSetFocus [50,0];
HG_CAMERA_PREVIEW camCommit 0;

if(sunOrMoon <= 0.5) then
{
    private "_light";
	
    {
	    _light = "#lightpoint" createVehicleLocal getPos player;
        _light setlightbrightness 0.5;
        _light setlightcolor [1,1,1];
        _light setlightambient [1,1,1];
        _light setPos (player modelToWorld _x);
		HG_VEHICLE_LIGHTS pushBack _light;
	} forEach [[-5,10,30],[5,10,30],[-5,10,35],[5,10,25]];
};

HG_VEHICLES_SWITCH lbSetCurSel 0;

true;

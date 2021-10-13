#include "HG_Macros.h"
/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/
params["_target","_caller","_id","_whatShop"];
if((typeName _whatShop) != "STRING") exitWith {hint (localize "STR_HG_ERR_ON_LOAD_1");};
if(_whatShop isEqualTo "") exitWith {hint (localize "STR_HG_ERR_ON_LOAD_2");};

private _shopList = "true" configClasses (getMissionConfig "CfgClient" >> "HG_GearShopCfg" >> _whatShop);
if((count _shopList) isEqualTo 0) exitWith {hint (localize "STR_HG_SHOP_EMPTY");};

private["_condition","_isOk"];
_condition = getText(getMissionConfig "CfgClient" >> "HG_GearShopCfg" >> _whatShop >> "conditionToAccess");
_isOk = (_condition isEqualTo "") OR (call compile _condition);
if(!_isOk) exitWith {hint (localize "STR_HG_ACCESS_DENIED");};

disableSerialization;

createDialog "HG_GearShop";
	
lbClear HG_GEAR_SWITCH;
HG_GEAR_SLIDER sliderSetRange [0,360];
HG_GEAR_SLIDER_DIST sliderSetRange [2,6];
HG_GEAR_SLIDER_DIST sliderSetPosition 4;
HG_GEAR_TOTAL ctrlSetText format[(localize "STR_HG_DLG_GS_TOTAL_TEXT"),([0,true] call HG_fnc_currencyToText)];
HG_STRING_HANDLER = _whatShop;

private "_ind";

{
	_ind = HG_GEAR_SWITCH lbAdd (getText(_x >> "displayName"));
	HG_GEAR_SWITCH lbSetData [_ind,(configName _x)];
} forEach _shopList;

HG_GEAR_SWITCH lbSetCurSel 0;

if(HG_CRATE_ENABLED AND (isNil "HG_PLAYER_BOX")) then
{
    if(isNil "HG_PLAYER_BOX") then
	{
	    HG_PLAYER_BOX = "Box_NATO_Wps_F" createVehicleLocal getPos player;
		HG_PLAYER_BOX allowDamage false;
		HG_PLAYER_BOX setPosATL (getPosATL player);
        HG_PLAYER_BOX addAction ["<img image='HG\UI\Icons\crate.paa' size='1.5'/><t color='#FF0000'>"+(localize "STR_HG_DELETE_CRATE")+"</t>",{deleteVehicle (_this select 0); HG_PLAYER_BOX = nil},"",0,false,false,"",'(alive player) && !dialog AND ((player distance _target) < 2)'];
	    HG_PLAYER_BOX addAction ["<img image='HG\UI\Icons\crate.paa' size='1.5'/><t color='#FF0000'>"+(localize "STR_HG_EMPTY_CRATE")+"</t>",{clearItemCargo (_this select 0); clearMagazineCargo (_this select 0); clearWeaponCargo (_this select 0); clearBackpackCargo (_this select 0); hint (localize "STR_HG_CRATE_EMPTIED")},"",0,false,false,"",'(alive player) AND !dialog && ((player distance _target) < 2)'];
	};
	
    HG_PLAYER_BOX setPosATL [(getPosATL player select 0)+1,(getPosATL player select 1),(getPosATL player select 2)];
    HG_PLAYER_BOX setDir (getDir player)+90;
	
    clearItemCargo HG_PLAYER_BOX;
    clearMagazineCargo HG_PLAYER_BOX;
    clearWeaponCargo HG_PLAYER_BOX;
    clearBackpackCargo HG_PLAYER_BOX;
};

player setBehaviour "SAFE";
player switchMove "AmovPercMstpSnonWnonDnon";

HG_CAMERA_PREVIEW = "CAMERA" camCreate getPos player;
showCinemaBorder false;
HG_CAMERA_PREVIEW cameraEffect ["Internal","Back"];
HG_CAMERA_PREVIEW camSetTarget (player modelToWorld [0,0,1]);
HG_CAMERA_PREVIEW camSetPos (player modelToWorld [1,4,2]);
HG_CAMERA_PREVIEW camSetFOV .33;
HG_CAMERA_PREVIEW camSetFocus [50,0];
HG_CAMERA_PREVIEW camCommit 0;

HG_PLAYER_PREVIEW = [];

if(sunOrMoon <= 0.5) then
{
    private "_light";
	
    {
	    _light = "#lightpoint" createVehicleLocal getPos player;
        _light setlightbrightness 0.5;
        _light setlightcolor [1,1,1];
        _light setlightambient [1,1,1];
		_light lightAttachObject [player,_x];
		HG_PLAYER_PREVIEW pushBack _light;
	} forEach [[-1,0,2],[1,0,2]];
};

HG_GEAR_PREVIEW = [[],[],[],[],[],[],[],[]];
HG_GEAR_SAVED = 
[
    [(uniform player),(uniformItems player)],
    [(vest player),(vestItems player)],
    [(backpack player),(backpackItems player)],
    (goggles player),
    (headgear player),
    [(primaryWeapon player),(primaryWeaponMagazine player),(primaryWeaponItems player),(player ammo primaryWeapon player)],
    [(secondaryWeapon player),(secondaryWeaponMagazine player),(secondaryWeaponItems player),(player ammo secondaryWeapon player)],
    [(handgunWeapon player),(handgunMagazine player),(handgunItems player),(player ammo handgunWeapon player)]
];
HG_GEAR_BOUGHT = false;

true;

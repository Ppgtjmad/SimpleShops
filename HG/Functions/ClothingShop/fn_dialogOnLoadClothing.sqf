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

private["_whitelist","_isOk"];
_whitelist = getArray(missionConfigFile >> "CfgClient" >> "HG_ClothingShopCfg" >> _whatShop >> "whitelistRanks");
_isOk = ((count _whitelist) isEqualTo 0) OR ((rank player) in _whitelist);
if(!_isOk) exitWith {hint (localize "STR_HG_ACCESS_DENIED");};

disableSerialization;

createDialog "HG_ClothingShop";

private["_shopList","_cat","_ind"];

_shopList = "true" configClasses (missionConfigFile >> "CfgClient" >> "HG_ClothingShopCfg" >> _whatShop);
	
lbClear HG_CLOTHING_SWITCH;
HG_CLOTHING_SLIDER sliderSetRange [0,360];
HG_STRING_HANDLER = _whatShop;

{
    _cat = switch (configName _x) do
	{
	    case "Glasses": {(localize "STR_HG_SHOP_FACEWEAR")};
		case "Headgear": {(localize "STR_HG_SHOP_HEADGEAR")};
		case "Vest": {(localize "STR_HG_SHOP_VESTS")};
		case "Uniform": {(localize "STR_HG_SHOP_UNIFORMS")};
		case "Backpack": {(localize "STR_HG_SHOP_BACKPACKS")};
	};
	
	_ind = HG_CLOTHING_SWITCH lbAdd _cat;
	HG_CLOTHING_SWITCH lbSetData [_ind,(configName _x)];
} forEach _shopList;

HG_CLOTHING_SWITCH lbSetCurSel 0;

if(HG_CRATE_ENABLED AND (isNil "HG_PLAYER_BOX")) then
{
    if(isNil "HG_PLAYER_BOX") then
	{
	    HG_PLAYER_BOX = "Box_NATO_Wps_F" createVehicleLocal getPos player;
        HG_PLAYER_BOX addAction ["<img image='HG\UI\Icons\crate.paa' size='1.5'/><t color='#FF0000'>Delete Crate</t>",{deleteVehicle (_this select 0); HG_PLAYER_BOX = nil},"",0,false,false,"",'(alive player) && !dialog AND ((player distance _target) < 2)'];
	    HG_PLAYER_BOX addAction ["<img image='HG\UI\Icons\crate.paa' size='1.5'/><t color='#FF0000'>Empty Crate</t>",{clearItemCargo (_this select 0); clearMagazineCargo (_this select 0); clearWeaponCargo (_this select 0); clearBackpackCargo (_this select 0); hint (localize "STR_HG_CRATE_EMPTIED")},"",0,false,false,"",'(alive player) AND !dialog && ((player distance _target) < 2)'];
	};
	
    HG_PLAYER_BOX setPos [(getPos player select 0)+1,(getPos player select 1),(getPos player select 2)];
    HG_PLAYER_BOX setDir (getDir player)+90;
    clearItemCargo HG_PLAYER_BOX;
    clearMagazineCargo HG_PLAYER_BOX;
    clearWeaponCargo HG_PLAYER_BOX;
    clearBackpackCargo HG_PLAYER_BOX;
};

if(sunOrMoon <= 0.5) then
{
    HG_PLAYER_PREVIEW = "#lightpoint" createVehicleLocal getPos player;
    HG_PLAYER_PREVIEW setlightbrightness 0.5;
    HG_PLAYER_PREVIEW setlightcolor [1,1,1];
    HG_PLAYER_PREVIEW setlightambient [1,1,1];
    HG_PLAYER_PREVIEW lightAttachObject [player,[0,0,2]];
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

HG_GEAR_PREVIEW = [[],[],[],[],[]];
HG_GEAR_SAVED = [(goggles player),(headgear player),(vest player),(vestItems player),(uniform player),(uniformItems player),(backpack player),(backpackItems player)];
HG_CLOTHING_BOUGHT = false;

true;

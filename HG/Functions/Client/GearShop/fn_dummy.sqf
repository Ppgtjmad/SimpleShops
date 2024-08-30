/*
    Author - HoverGuy
	GitHub - https://github.com/Ppgtjmad/SimpleShops
	Steam - https://steamcommunity.com/id/HoverGuy/
*/
params["_bp","_c1","_c2"];

_c1 = "true" configClasses (configFile >> "CfgVehicles" >> _bp >> "TransportMagazines");
_c2 = "true" configClasses (configFile >> "CfgVehicles" >> _bp >> "TransportWeapons");

// This backpack doesn't have a default loadout
if(count(_c1) == 0 AND count(_c2) == 0) exitWith {
    HG_PLAYER_BOX addBackpackCargo [_bp,1];
};

private["_group","_dummy"];

_group = createGroup sideLogic;
_dummy = _group createUnit [typeOf player, [0,0,0], [], 0, ""];

_dummy allowDamage false;
_dummy setCaptive true;
_dummy setCombatMode "BLUE";
_dummy setBehaviour "CARELESS";

_dummy hideObject true;
_dummy attachTo [HG_PLAYER_BOX, [0,0,-1]];

removeAllWeapons _dummy;
removeUniform _dummy;
removeVest _dummy;
removeBackpack _dummy;

//detach _dummy;

_dummy addBackpack _bp;
waitUntil {(backpack _dummy) != ""};
clearItemCargo (backpackContainer _dummy);
clearWeaponCargo (backpackContainer _dummy);
clearMagazineCargo (backpackContainer _dummy);
clearItemCargo (backpackContainer _dummy);
_dummy action ["DropBag", HG_PLAYER_BOX, _bp];
waitUntil {(backpack _dummy) == ""};

deleteVehicle _dummy;
deletegroup _group;

true;

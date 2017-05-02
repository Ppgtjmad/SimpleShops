/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params
[
    ["_unit",player,[objNull]],
    ["_gear",[]],
	["_pWeapon",[]],
	["_sWeapon",[]],
	["_hWeapon",[]],
	["_uItems",[]],
	["_vItems",[]],
	["_bItems",[]]
];

{
    _gear pushBack _x;
} forEach [(uniform _unit),(vest _unit),(backpack _unit),(goggles _unit),(headgear _unit),(assignedItems _unit)];

if((uniform _unit) != "") then 
{
    _tmp = [];
	
    _uMagList = getMagazineCargo uniformContainer _unit;
    {
        _amntList = _uMagList select 1;
        _tmp pushBack [_x,(_amntList select _forEachIndex)];
    } forEach (_uMagList select 0);
	
    _uItemList = getItemCargo uniformContainer _unit;
    {
        _amntList = _uItemList select 1;
        _tmp pushBack [_x,(_amntList select _forEachIndex)];
    } forEach (_uItemList select 0);
	
	if((count _tmp) != 0) then
	{
	    _uItems pushBack _tmp;
	};
};

if((vest _unit) != "") then 
{
    _tmp = [];
	
    _vMagList = getMagazineCargo vestContainer _unit;
    {
        _amntList = _vMagList select 1;
        _tmp pushBack [_x,(_amntList select _forEachIndex)];
    } forEach (_vMagList select 0);
	
    _vItemList = getItemCargo vestContainer _unit;
    {
        _amntList = _vItemList select 1;
        _tmp pushBack [_x,(_amntList select _forEachIndex)];
    } forEach (_vItemList select 0);
	
	if((count _tmp) != 0) then
	{
	    _vItems pushBack _tmp;
	};
};

if((backpack _unit) != "") then 
{
    _tmp = [];
	
    _bMagList = getMagazineCargo backpackContainer _unit;
    {
        _amntList = _bMagList select 1;
        _tmp pushBack [_x,(_amntList select _forEachIndex)];
    } forEach (_bMagList select 0);
	
    _bItemList = getItemCargo backpackContainer _unit;
    {
        _amntList = _bItemList select 1;
        _tmp pushBack [_x,(_amntList select _forEachIndex)];
    } forEach (_bItemList select 0);
	
	if((count _tmp) != 0) then
	{
	    _bItems pushBack _tmp;
	};
};

if((primaryWeapon _unit) != "") then 
{
	_pWeapon pushBack primaryWeapon _unit;
	_pWeapon pushBack primaryWeaponItems _unit;
	
	if(count(primaryWeaponMagazine _unit) > 0) then 
	{
		_pWeapon pushBack ((primaryWeaponMagazine _unit) select 0);
	} else {
		_pWeapon pushBack "";
	};
};

if((secondaryWeapon _unit) != "") then 
{
	_sWeapon pushBack secondaryWeapon _unit;
	_sWeapon pushBack secondaryWeaponItems _unit;
	
	if(count(secondaryWeaponMagazine _unit) > 0) then 
	{
		_sWeapon pushBack ((secondaryWeaponMagazine _unit) select 0);
	} else {
		_sWeapon pushBack "";
	};
};

if((handgunWeapon _unit) != "") then 
{
	_hWeapon pushBack handgunWeapon _unit;
	_hWeapon pushBack handgunItems _unit;
	
	if(count(handgunMagazine _unit) > 0) then 
	{
		_hWeapon pushBack ((handgunMagazine _unit) select 0);
	} else {
     	_hWeapon pushBack "";
    };
};

{
    _gear pushBack _x;
} forEach [_pWeapon,_sWeapon,_hWeapon,_uItems,_vItems,_bItems,(hmd _unit),(binocular _unit)];

profileNamespace setVariable [format["HG_Gear_%1",(getPlayerUID _unit)],_gear];
saveProfileNamespace;

true;

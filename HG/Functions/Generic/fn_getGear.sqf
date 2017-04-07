/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params
[
    ["_gear",[]],
	["_pWeapon",[]],
	["_sWeapon",[]],
	["_hWeapon",[]],
	["_uItems",[]],
	["_bItems",[]],
	["_vItems",[]]
];

{
    _gear pushBack _x;
} forEach [(uniform player),(vest player),(backpack player),(goggles player),(headgear player),(assignedItems player)];

if((uniform player) != "") then 
{
    _tmp = [];
    _uMagList = getMagazineCargo uniformContainer player;
    {
        _amntList = _uMagList select 1;
        _tmp pushBack _x;
        _tmp pushBack (_amntList select _forEachIndex);
    } forEach (_uMagList select 0);
	
    _uItemList = getItemCargo uniformContainer player;
    {
        _amntList = _uItemList select 1;
        _tmp pushBack _x;
        _tmp pushBack (_amntList select _forEachIndex);
    } forEach (_uItemList select 0);
	if(count _tmp != 0) then
	{
	    _uItems pushBack _tmp;
	};
};

if((backpack player) != "") then 
{
    _tmp = [];
    _bMagList = getMagazineCargo backpackContainer player;
    {
        _amntList = _bMagList select 1;
        _tmp pushBack _x;
        _tmp pushBack (_amntList select _forEachIndex);
    } forEach (_bMagList select 0);
	
    _bItemList = getItemCargo backpackContainer player;
    {
        _amntList = _bItemList select 1;
        _tmp pushBack _x;
        _tmp pushBack (_amntList select _forEachIndex);
    } forEach (_bItemList select 0);
	if(count _tmp != 0) then
	{
	    _bItems pushBack _tmp;
	};
};

if((vest player) != "") then 
{
    _tmp = [];
    _vMagList = getMagazineCargo vestContainer player;
    {
        _amntList = _vMagList select 1;
        _tmp pushBack _x;
        _tmp pushBack (_amntList select _forEachIndex);
    } forEach (_vMagList select 0);
	
    _vItemList = getItemCargo vestContainer player;
    {
        _amntList = _vItemList select 1;
        _tmp pushBack _x;
        _tmp pushBack (_amntList select _forEachIndex);
    } forEach (_vItemList select 0);
	if(count _tmp != 0) then
	{
	    _vItems pushBack _tmp;
	};
};

if((primaryWeapon player) != "") then 
{
	_pWeapon pushBack primaryWeapon player;
	_pWeapon pushBack primaryWeaponItems player;
	
	if(count(primaryWeaponMagazine player) > 0) then 
	{
		_pWeapon pushBack ((primaryWeaponMagazine player) select 0);
	} else {
		_pWeapon pushBack "";
	};
};

if((secondaryWeapon player) != "") then 
{
	_sWeapon pushBack secondaryWeapon player;
	_sWeapon pushBack secondaryWeaponItems player;
	
	if(count(secondaryWeaponMagazine player) > 0) then 
	{
		_sWeapon pushBack ((secondaryWeaponMagazine player) select 0);
	} else {
		_sWeapon pushBack "";
	};
};

if((handgunWeapon player) != "") then 
{
	_hWeapon pushBack handgunWeapon player;
	_hWeapon pushBack handgunItems player;
	
	if(count(handgunMagazine player) > 0) then 
	{
		_hWeapon pushBack ((handgunMagazine player) select 0);
	} else {
     	_hWeapon pushBack "";
    };
};

{
    _gear pushBack _x;
} forEach [_pWeapon,_sWeapon,_hWeapon,_uItems,_bItems,_vItems];

profileNamespace setVariable ["HG_Gear",_gear];
saveProfileNamespace;

true;

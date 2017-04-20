/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
_this params ["_uniform","_vest","_backpack","_goggles","_headgear","_assigned","_prim","_sec","_handgun","_uItems","_vItems","_bItems","_unit"];

// Strip down unit
{
    _unit removeWeaponGlobal _x;
} forEach (weapons _unit);

{
    _unit removeMagazine _x;
} forEach (magazines _unit);

removeUniform _unit;
removeVest _unit;
removeBackpackGlobal _unit;
removeGoggles _unit;
removeHeadGear _unit;

{
	_unit unassignItem _x;
	_unit removeItem _x;
} forEach (assignedItems _unit);

if(!(hmd _unit isEqualTo "")) then 
{
	_unit unlinkItem (hmd _unit);
};

// Gear up
if(_goggles != "") then 
{
    _unit addGoggles _goggles;
};

if(_headgear != "") then 
{
    _unit addHeadgear _headgear;
};

if(_uniform != "") then 
{
    _unit forceAddUniform _uniform;
	if((count _uItems) != 0) then 
	{
	    {
            (uniformContainer _unit) addItemCargoGlobal [_x select 0,_x select 1];
        } forEach (_uItems select 0);
	};
};

if(_vest != "") then 
{
    _unit addVest _vest;
	if((count _vItems) != 0) then 
	{
	    {
            (vestContainer _unit) addItemCargoGlobal [_x select 0,_x select 1];
        } forEach (_vItems select 0);
	};
};

if(_backpack != "") then 
{
    _unit addBackpack _backpack;
	if((count _bItems) != 0) then 
	{
	    {
            (backpackContainer _unit) addItemCargoGlobal [_x select 0,_x select 1];
        } forEach (_bItems select 0);
	};
};

if((count _prim) != 0) then 
{
	if((_prim select 2) != "") then 
	{
       	_unit addMagazine (_prim select 2);
    };
    _unit addWeaponGlobal (_prim select 0);
	
	{
		if(_x != "") then
		{
		    _unit addPrimaryWeaponItem _x;
		};
	} forEach (_prim select 1);
};

if((count _sec) != 0) then 
{
	if((_sec select 2) != "") then 
	{
       	_unit addMagazine (_sec select 2);
    };
    _unit addWeaponGlobal (_sec select 0);
	
	{
		if(_x != "") then
		{
		    _unit addSecondaryWeaponItem _x;
		};
	} forEach (_sec select 1);
};

if((count _handgun) != 0) then 
{
	if((_handgun select 2) != "") then 
	{
       	_unit addMagazine (_handgun select 2);
    };
    _unit addWeaponGlobal (_handgun select 0);
	
	{
		if(_x != "") then 
		{
		    _unit addHandgunItem _x;
		};
	} forEach (_handgun select 1);
};

if((count _assigned) != 0) then
{
    {
        if(_unit canAdd _x) then
	    {
	        _unit addItem _x;
		    _unit assignItem _x;
	    };
    } forEach _assigned;
};

true;

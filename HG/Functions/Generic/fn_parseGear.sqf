/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
_this params 
[
    ["_uniform","",[""]],
	["_vest","",[""]],
	["_backpack","",[""]],
	["_goggles","",[""]],
	["_headgear","",[""]],
	["_assigned",[],[[]]],
	["_prim",[],[[]]],
	["_sec",[],[[]]],
	["_handgun",[],[[]]],
	["_uItems",[],[[]]],
	["_vItems",[],[[]]],
	["_bItems",[],[[]]],
	["_hmd","",[""]],
	["_binocular","",[""]]
];

// Strip down unit
{
    player removeWeaponGlobal _x;
} forEach (weapons player);

{
    player removeMagazine _x;
} forEach (magazines player);

removeUniform player;
removeVest player;
removeBackpackGlobal player;
removeGoggles player;
removeHeadGear player;

{
	player unassignItem _x;
	player removeItem _x;
} forEach (assignedItems player);

if(!(hmd player isEqualTo "")) then 
{
	player unlinkItem (hmd player);
};

// Gear up
if(_goggles != "") then 
{
    player addGoggles _goggles;
};

if(_headgear != "") then 
{
    player addHeadgear _headgear;
};

if(_uniform != "") then 
{
    player forceAddUniform _uniform;
	if((count _uItems) != 0) then 
	{
	    {
            (uniformContainer player) addItemCargoGlobal [_x select 0,_x select 1];
        } forEach (_uItems select 0);
	};
};

if(_vest != "") then 
{
    player addVest _vest;
	if((count _vItems) != 0) then 
	{
	    {
            (vestContainer player) addItemCargoGlobal [_x select 0,_x select 1];
        } forEach (_vItems select 0);
	};
};

if(_backpack != "") then 
{
    player addBackpack _backpack;
	if((count _bItems) != 0) then 
	{
	    {
            (backpackContainer player) addItemCargoGlobal [_x select 0,_x select 1];
        } forEach (_bItems select 0);
	};
};

if((count _prim) != 0) then 
{
	if((_prim select 2) != "") then 
	{
       	player addMagazine (_prim select 2);
    };
    player addWeaponGlobal (_prim select 0);
	
	{
		if(_x != "") then
		{
		    player addPrimaryWeaponItem _x;
		};
	} forEach (_prim select 1);
};

if((count _sec) != 0) then 
{
	if((_sec select 2) != "") then 
	{
       	player addMagazine (_sec select 2);
    };
    player addWeaponGlobal (_sec select 0);
	
	{
		if(_x != "") then
		{
		    player addSecondaryWeaponItem _x;
		};
	} forEach (_sec select 1);
};

if((count _handgun) != 0) then 
{
	if((_handgun select 2) != "") then 
	{
       	player addMagazine (_handgun select 2);
    };
    player addWeaponGlobal (_handgun select 0);
	
	{
		if(_x != "") then 
		{
		    player addHandgunItem _x;
		};
	} forEach (_handgun select 1);
};

if((count _assigned) != 0) then
{
    {
        if(player canAdd _x) then
	    {
	        player addItem _x;
		    player assignItem _x;
	    };
    } forEach _assigned;
};

if(_hmd != "") then
{
    player addWeaponGlobal _hmd;
};

if(_binocular != "") then
{
    player addWeaponGlobal _binocular;
};

true;

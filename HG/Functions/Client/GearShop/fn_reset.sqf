/*
    Author - HoverGuy
	GitHub - https://github.com/Ppgtjmad/SimpleShops
	Steam - https://steamcommunity.com/id/HoverGuy/
*/

removeGoggles player;
removeHeadgear player;
removeVest player;
removeUniform player;
removeBackpack player;

{
    player removeWeapon _x;
} forEach [(primaryWeapon player),(secondaryWeapon player),(handgunWeapon player)];

// Uniform
if(((HG_GEAR_SAVED select 0) select 0) != "") then
{
    player forceAddUniform ((HG_GEAR_SAVED select 0) select 0);
	
	clearItemCargo (uniformContainer player);
    clearWeaponCargo (uniformContainer player);
    clearMagazineCargo (uniformContainer player);
    clearItemCargo (uniformContainer player);
	
    if((count ((HG_GEAR_SAVED select 0) select 1)) != 0) then
    {
	    {
            (uniformContainer player) addItemCargoGlobal [_x,1];
        } forEach ((HG_GEAR_SAVED select 0) select 1);
	};
};

// Vest
if(((HG_GEAR_SAVED select 1) select 0) != "") then
{
    player addVest ((HG_GEAR_SAVED select 1) select 0);
	
	clearItemCargo (vestContainer player);
    clearWeaponCargo (vestContainer player);
    clearMagazineCargo (vestContainer player);
    clearItemCargo (vestContainer player);
	
    if((count ((HG_GEAR_SAVED select 1) select 1)) != 0) then
	{
	    {
            (vestContainer player) addItemCargoGlobal [_x,1];
        } forEach ((HG_GEAR_SAVED select 1) select 1);
	};
};

// Backpack
if(((HG_GEAR_SAVED select 2) select 0) != "") then
{
    player addBackpack ((HG_GEAR_SAVED select 2) select 0);
	
	clearItemCargo (backpackContainer player);
    clearWeaponCargo (backpackContainer player);
    clearMagazineCargo (backpackContainer player);
    clearItemCargo (backpackContainer player);
	
    if((count ((HG_GEAR_SAVED select 2) select 1)) != 0) then
	{
	    {
            (backpackContainer player) addItemCargoGlobal [_x,1];
        } forEach ((HG_GEAR_SAVED select 2) select 1);
	};
};

// Glasses
if(((HG_GEAR_SAVED select 3) select 0) != "") then
{
    player addGoggles ((HG_GEAR_SAVED select 3) select 0);
};

// Headgear
if(((HG_GEAR_SAVED select 4) select 0) != "") then
{
    player addHeadgear ((HG_GEAR_SAVED select 4) select 0);
};

// Primary weapon
if(((HG_GEAR_SAVED select 5) select 0) != "") then
{
    if(count ((HG_GEAR_SAVED select 5) select 1) != 0) then
	{
	    player addMagazine [(((HG_GEAR_SAVED select 5) select 1) select 0),((HG_GEAR_SAVED select 5) select 3)];
	};
	
    player addWeaponGlobal ((HG_GEAR_SAVED select 5) select 0);
	
	{
		if(_x != "") then
		{
			player addPrimaryWeaponItem _x;
		};
    } forEach ((HG_GEAR_SAVED select 5) select 2);
};

// Secondary weapon
if(((HG_GEAR_SAVED select 6) select 0) != "") then
{
    if(count ((HG_GEAR_SAVED select 6) select 1) != 0) then
	{
	    player addMagazine [(((HG_GEAR_SAVED select 6) select 1) select 0),((HG_GEAR_SAVED select 6) select 3)];
	};
	
    player addWeaponGlobal ((HG_GEAR_SAVED select 6) select 0);
	
	{
        if(_x != "") then
		{
			player addSecondaryWeaponItem _x;
		};
    } forEach ((HG_GEAR_SAVED select 6) select 2);
};

// Handgun
if(((HG_GEAR_SAVED select 7) select 0) != "") then
{
    if(count ((HG_GEAR_SAVED select 7) select 1) != 0) then
	{
	    player addMagazine [(((HG_GEAR_SAVED select 7) select 1) select 0),((HG_GEAR_SAVED select 7) select 3)];
	};
	
    player addWeaponGlobal ((HG_GEAR_SAVED select 7) select 0);
	
	{
        if(_x != "") then
		{
			player addHandgunItem _x;
		};
    } forEach ((HG_GEAR_SAVED select 7) select 2);
};

HG_GEAR_PREVIEW = [[(uniform player),-1],[(vest player),-1],[(backpack player),-1],[(goggles player),-1],[(headgear player),-1],[(primaryWeapon player),-1],[(secondaryWeapon player),-1],[(handgunWeapon player),-1]];

HG_GEAR_SWITCH lbSetCurSel 0;

true;

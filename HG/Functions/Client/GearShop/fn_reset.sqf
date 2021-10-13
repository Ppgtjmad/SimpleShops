/*
    Author - HoverGuy
    Website - https://northernimpulse.com
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
	
    if((count ((HG_GEAR_SAVED select 1) select 1)) != 0) then 
	{
	    {
            (vestContainer player) additemCargoGlobal [_x,1];
        } forEach ((HG_GEAR_SAVED select 1) select 1);
	};
};

// Backpack
if(((HG_GEAR_SAVED select 2) select 0) != "") then
{
    player addBackpack ((HG_GEAR_SAVED select 2) select 0);
	
    if((count ((HG_GEAR_SAVED select 2) select 1)) != 0) then 
	{
	    {
            (backpackContainer player) addItemCargoGlobal [_x,1];
        } forEach ((HG_GEAR_SAVED select 2) select 1);
	};
};

// Glasses
if((HG_GEAR_SAVED select 3) != "") then
{
    player addGoggles (HG_GEAR_SAVED select 3);
};

// Headgear
if((HG_GEAR_SAVED select 4) != "") then
{
    player addHeadgear (HG_GEAR_SAVED select 4);
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

HG_GEAR_PREVIEW = [[],[],[],[],[],[],[],[]];
HG_GEAR_TOTAL ctrlSetText format[(localize "STR_HG_DLG_GS_TOTAL_TEXT"),([0,true] call HG_fnc_currencyToText)]; 

true;

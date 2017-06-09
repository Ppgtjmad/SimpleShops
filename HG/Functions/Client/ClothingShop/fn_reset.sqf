/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/

removeGoggles player;
removeHeadgear player;
removeVest player;
removeUniform player;
removeBackpack player;

if((HG_GEAR_SAVED select 0) != "") then
{
    player addGoggles (HG_GEAR_SAVED select 0);
};

if((HG_GEAR_SAVED select 1) != "") then
{
    player addHeadgear (HG_GEAR_SAVED select 1);
};

if((HG_GEAR_SAVED select 2) != "") then
{
    player addVest (HG_GEAR_SAVED select 2); 
    if(count (HG_GEAR_SAVED select 3) != 0) then 
	{
	    {
            (vestContainer player) additemCargoGlobal [_x,1];
        } forEach (HG_GEAR_SAVED select 3);
	};
};

if((HG_GEAR_SAVED select 4) != "") then
{
    player forceAddUniform (HG_GEAR_SAVED select 4);
    if(count (HG_GEAR_SAVED select 5) != 0) then
    {
	    {
            (uniformContainer player) addItemCargoGlobal [_x,1];
        } forEach (HG_GEAR_SAVED select 5);
	};
};

if((HG_GEAR_SAVED select 6) != "") then
{
    player addBackpack (HG_GEAR_SAVED select 6);
    if(count (HG_GEAR_SAVED select 7) != 0) then 
	{
	    {
            (backpackContainer player) addItemCargoGlobal [_x,1];
        } forEach (HG_GEAR_SAVED select 7);
	};
};

HG_GEAR_PREVIEW = [[],[],[],[],[]];
HG_CLOTHING_TOTAL ctrlSetText format[(localize "STR_HG_DLG_CS_TOTAL_TEXT"),([0,true] call HG_fnc_currencyToText)]; 

true;

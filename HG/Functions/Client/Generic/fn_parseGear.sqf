/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/

params["_gear"];

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

player setUnitLoadout [_gear,false];

true;

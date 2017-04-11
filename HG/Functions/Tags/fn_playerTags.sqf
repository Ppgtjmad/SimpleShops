#include "HG_Macros.h"
/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
if(!isNull objectParent player) exitWith {};
if((isNull cursorObject) OR !(alive cursorObject)) exitWith {};
if(!(cursorObject isKindOf "Man")) exitWith {};
if((side cursorObject) != (side player)) exitWith {};

if(isNull HG_TAGS_DISP) then 
{
	("HG_Tags" call BIS_fnc_rscLayer) cutRsc ["HG_Tags","PLAIN"];
};

_target = cursorObject;
_posShoulder = [((_target modelToWorld (_target selectionPosition "LeftShoulder")) select 0),((_target modelToWorld (_target selectionPosition "LeftShoulder")) select 1),((_target modelToWorld (_target selectionPosition "LeftShoulder")) select 2)];
_screenPosShoulder = worldToScreen _posShoulder;
_distance = _posShoulder distance player;

if(((count _screenPosShoulder) > 1) AND (_distance < 2) AND {_screenPosShoulder distance [0.5,0.5] < 0.5}) then
{
	_icon = [(rank _target),"texture"] call BIS_fnc_rankParams;
	_text = parseText format
	[
	    "<img image='%1' size='2' align='center' color='#FF0000' shadow='0'></img><br/><t color='#00FF00' align='center' size='1'>%2</t><br/><t color='#B6B6B6' align='center' size='1'>%3</t>",
		_icon,(rank _target),(name _target)
	];
	
	HG_TAGS_TEXT ctrlSetStructuredText _text;
	HG_TAGS_TEXT ctrlSetPosition [(_screenPosShoulder select 0),(_screenPosShoulder select 1)-0.05,0.4,0.65];
    HG_TAGS_TEXT ctrlSetScale 0.8;
	HG_TAGS_TEXT ctrlSetFade 0;
	HG_TAGS_TEXT ctrlCommit 0;
	HG_TAGS_TEXT ctrlShow true;
} else {
	HG_TAGS_TEXT ctrlShow false;
}; 

true;

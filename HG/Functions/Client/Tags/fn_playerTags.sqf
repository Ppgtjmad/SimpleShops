#include "HG_Macros.h"
/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
if(!isNull objectParent player) exitWith {HG_TAGS_TEXT ctrlShow false;};
if((isNull cursorObject) OR !(alive cursorObject)) exitWith {HG_TAGS_TEXT ctrlShow false;};
if(!(cursorObject isKindOf "Man") AND !(isPlayer cursorObject)) exitWith {HG_TAGS_TEXT ctrlShow false;};
if((side cursorObject) != (side player)) exitWith {HG_TAGS_TEXT ctrlShow false;};

_target = cursorObject;
_pos = [(visiblePosition _target) select 0,(visiblePosition _target) select 1,((_target modelToWorld (_target selectionPosition "Head")) select 2)];
_screenPos = worldToScreen _pos;
_distance = _pos distance player;

if(((count _screenPos) > 1) AND (_distance < 5) AND {_screenPos distance [0.5,0.5] < 1}) then
{
	_rankIcon = [(rank _target),"texture"] call BIS_fnc_rankParams;
	_rankName = [(rank _target),"displayName"] call BIS_fnc_rankParams;
	_text = parseText format
	[
	    "<img image='%1' size='2' align='center' color='#FF0000' shadow='0'></img><br/><t color='#00FF00' align='center' size='1'>%2</t><br/><t color='#B6B6B6' align='center' size='1'>%3</t>",
		_rankIcon,_rankName,(name _target)
	];
	
	HG_TAGS_TEXT ctrlSetStructuredText _text;
	HG_TAGS_TEXT ctrlSetPosition [(_screenPos select 0),(_screenPos select 1)-0.05,0.4,0.65];
    HG_TAGS_TEXT ctrlSetScale 0.8;
	HG_TAGS_TEXT ctrlSetFade 0;
	HG_TAGS_TEXT ctrlCommit 0;
	HG_TAGS_TEXT ctrlShow true;
} else {
	HG_TAGS_TEXT ctrlShow false;
}; 

true;

/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/
params["_num","_unit",["_arr",[]],"_fnc","_r"];

_fnc = 
{
    params["_b","_item","_val","_new"];
	
    _val = switch _item do
    {
	    case "Money_bunch": {5};
	    case "Money": {10000};
	    case "Money_roll": {100};
	    case "Money_stack": {1000};
	    default {1};
    };

    _new = _b / _val;

    if(_new > 1) then
    {
        _arr pushBack [_item,round(_new)];
	    _b = _b - (round(_new) * _val);
    };

    _b;
};

_r = [_num,"Money"] call _fnc;
if(_r > 0) then
{
    _r = [_r,"Money_stack"] call _fnc;
    if(_r > 0) then
    {
	    _r = [_r,"Money_roll"] call _fnc;
	    if(_r > 0) then
	    {
		    _r = [_r,"Money_bunch"] call _fnc;
	    };
	};
};

if(count _arr != 0) then
{
	private _obj = createVehicle ["GroundWeaponHolder",(position _unit),[],0,"CAN_COLLIDE"];
	
	{
	    _obj addMagazineCargoGlobal _x;
	} forEach _arr;
};

true;

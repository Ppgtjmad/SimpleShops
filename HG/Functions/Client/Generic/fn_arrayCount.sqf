/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params["_arr",["_temp",[]],["_ret",[]]];

if((count _arr) != 0) then
{
    private["_sel","_c"];
	
    {
        _sel = _x;
	    if(!(_sel in _temp)) then
	    {
		    _temp pushBack _sel;
	 	    _c = {_x isEqualTo _sel} count _arr;
		    _ret pushBack [_sel,_c];
	    };
    } forEach _arr;
};

_ret;

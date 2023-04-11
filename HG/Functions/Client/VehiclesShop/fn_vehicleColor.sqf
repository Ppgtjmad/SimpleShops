#include "HG_Macros.h"
/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/
params["_ctrl","_index","_data"];

disableSerialization;

_data = _ctrl lbData _index;

if(_data != "") then
{
    private["_val","_textures"];
	
    _val = _ctrl lbValue _index;
    _textures = HG_VEHICLE_COLORS select _val;

    for "_i" from 0 to (count _textures)-1 do
    {
        HG_VEHICLE_PREVIEW setObjectTexture [_i,(_textures select _i)];
    };
};

true;

#include "HG_Macros.h"
/*
    Author - HoverGuy
	GitHub - https://github.com/Ppgtjmad/SimpleShops
	Steam - https://steamcommunity.com/id/HoverGuy/
*/
params["_control","_newValue"];

disableSerialization;

if(_control isEqualTo HG_GEAR_SLIDER) then
{
    player setDir (360 - _newValue);
} else {
    HG_CAMERA_PREVIEW camSetPos (player modelToWorld [1,_newValue,2]);
	HG_CAMERA_PREVIEW camCommit 0;
};

true;

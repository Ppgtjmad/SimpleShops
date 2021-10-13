#include "HG_Macros.h"
/*
    Author - HoverGuy
    Website - https://northernimpulse.com
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

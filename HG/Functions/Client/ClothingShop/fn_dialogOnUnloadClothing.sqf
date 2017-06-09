#include "HG_Macros.h"
/*
    Author - HoverGuy
    Description - Called by the player when the dialog is closed (with the dialog close button or by pressing escape)
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/

if(!HG_CLOTHING_BOUGHT) then
{
    [] call HG_fnc_reset;
} else {
    [player] remoteExecCall ["HG_fnc_getGear",2,false];
};

if(!isNull HG_PLAYER_PREVIEW) then
{
    deleteVehicle HG_PLAYER_PREVIEW;
	HG_PLAYER_PREVIEW = nil;
};

HG_CAMERA_PREVIEW cameraEffect ["TERMINATE","BACK"];
camDestroy HG_CAMERA_PREVIEW;

HG_STRING_HANDLER = nil;
HG_GEAR_SAVED = nil;
HG_CAMERA_PREVIEW = nil;
HG_GEAR_PREVIEW = nil;
HG_CLOTHING_BOUGHT = nil;

true;

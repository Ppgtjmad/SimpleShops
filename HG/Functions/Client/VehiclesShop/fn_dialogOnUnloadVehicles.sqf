#include "HG_Macros.h"
/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/

{
    deleteVehicle _x;
} forEach ([HG_OBJECT_PREVIEW,HG_VEHICLE_PREVIEW] + HG_VEHICLE_LIGHTS);

HG_CAMERA_PREVIEW cameraEffect ["TERMINATE","BACK"];
camDestroy HG_CAMERA_PREVIEW;

HG_OBJECT_PREVIEW = nil;
HG_VEHICLE_PREVIEW = nil;
HG_CAMERA_PREVIEW = nil;
HG_VEHICLE_LIGHTS = nil;
HG_VEHICLE_COLORS = nil;

true;

/*
    Author - HoverGuy
	GitHub - https://github.com/Ppgtjmad/SimpleShops
	Steam - https://steamcommunity.com/id/HoverGuy/
*/

if(!HG_GEAR_BOUGHT) then
{
    [] call HG_fnc_reset;
} else {
    [player] remoteExecCall ["HG_fnc_getGear",2,false];
};

if((count HG_PLAYER_PREVIEW) != 0) then
{
    {
	    deleteVehicle _x;
	} forEach HG_PLAYER_PREVIEW;
};

HG_CAMERA_PREVIEW cameraEffect ["TERMINATE","BACK"];
camDestroy HG_CAMERA_PREVIEW;

HG_STRING_HANDLER = nil;
HG_GEAR_SAVED = nil;
HG_CAMERA_PREVIEW = nil;
HG_PLAYER_PREVIEW = nil;
HG_GEAR_PREVIEW = nil;
HG_GEAR_BOUGHT = nil;

true;

#include "HG_Macros.h"
/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/
params["_ctrl","_index","_shopType","_shopContent","_spawnPoints","_exists","_condition","_vName","_ind"];

disableSerialization;

_shopType = _ctrl lbData _index;
_shopType = _shopType splitString "/";
_shopContent = getArray(getMissionConfig "CfgClient" >> "HG_VehiclesShopCfg" >> (_shopType select 0) >> (_shopType select 1) >> "vehicles");
_spawnPoints = getArray(getMissionConfig "CfgClient" >> "HG_VehiclesShopCfg" >> (_shopType select 0) >> (_shopType select 1) >> "spawnPoints");

{
    lbClear _x;
} forEach [HG_VEHICLES_LIST,HG_VEHICLES_COLORS,HG_VEHICLES_SP];

{
    _exists = isClass(configFile >> "CfgVehicles" >> (_x select 0));
	_condition = call compile (_x select 2);
	if(_exists AND _condition) then
	{
	    _vName = getText(configFile >> "CfgVehicles" >> (_x select 0) >> "displayName");
        _ind = HG_VEHICLES_LIST lbAdd _vName;
        HG_VEHICLES_LIST lbSetData[_ind,(_x select 0)];
        HG_VEHICLES_LIST lbSetValue[_ind,(_x select 1)];
	    HG_VEHICLES_LIST lbSetTooltip[_ind,_vName];
	};
} forEach _shopContent;

{
    _ind = HG_VEHICLES_SP lbAdd (_x select 0);
	HG_VEHICLES_SP lbSetValue[_ind,_forEachIndex];
} forEach _spawnPoints;

if((lbSize HG_VEHICLES_LIST) isEqualTo 0) then
{
    _ind = HG_VEHICLES_LIST lbAdd (localize "STR_HG_NOTHING_TO_DISPLAY");
	HG_VEHICLES_LIST lbSetData[_ind,(localize "STR_HG_NONE")];
};
	
HG_VEHICLES_LIST lbSetCurSel 0;
HG_VEHICLES_SP lbSetCurSel 0;

true;

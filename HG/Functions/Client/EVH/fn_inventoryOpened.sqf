/*
    Author - HoverGuy
	GitHub - https://github.com/Ppgtjmad/SimpleShops
	Steam - https://steamcommunity.com/id/HoverGuy/
*/
params["_unit","_targetContainer","_secContainer",["_handled",false]];

if((_targetContainer isKindOf "LandVehicle") OR (_targetContainer isKindOf "Ship") OR (_targetContainer isKindOf "Air") OR (_targetContainer isKindOf "Submarine")) then
{
	if((locked _targetContainer) isEqualTo 2) then
	{
		private _ownerUID = (_targetContainer getVariable "HG_Owner") select 0;
		if((getPlayerUID player) != _ownerUID) then
		{
			_handled = true;
			hint (localize "STR_HG_CANNOT_OPEN_INVENTORY");
		};
	};
};

_handled;

/*
    Author - HoverGuy
	GitHub - https://github.com/Ppgtjmad/SimpleShops
	Steam - https://steamcommunity.com/id/HoverGuy/
*/
params["_item"];
	
switch true do
{
    case(isClass(configFile >> "CfgMagazines" >> _item)): {"CfgMagazines"};
	case(isClass(configFile >> "CfgWeapons" >> _item)): {"CfgWeapons"};
	case(isClass(configFile >> "CfgVehicles" >> _item)): {"CfgVehicles"};
	case(isClass(configFile >> "CfgGlasses" >> _item)): {"CfgGlasses"};
	default {""};
};

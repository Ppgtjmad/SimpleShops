/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/

if(isNil {profileNamespace getVariable [format["HG_Garage_%1",(getPlayerUID _player)],[]]}) then
{
    profileNamespace setVariable[format["HG_Garage_%1",(getPlayerUID _player)],[]];
	saveProfileNamespace;
};

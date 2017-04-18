/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params["_vehicle"];

_vehicle addAction ["<img image='HG\UI\Icons\lock.paa' size='1.5'/><t color='#FF0000'>Lock Vehicle</t>",{(_this select 0) lock 2; playSound "hg_lock"; hintSilent (localize "STR_HG_VEHICLE_LOCKED")},"",0,false,false,"",'(alive player) AND ((locked _target) isEqualTo 0) AND (((player distance _target) < 4) OR ((objectParent player) isEqualTo _target))'];
_vehicle addAction ["<img image='HG\UI\Icons\unlock.paa' size='1.5'/><t color='#FF0000'>Unlock Vehicle</t>",{(_this select 0) lock 0; playSound "hg_unlock"; hintSilent (localize "STR_HG_VEHICLE_UNLOCKED")},"",0,false,false,"",'(alive player) AND ((locked _target) isEqualTo 2) AND (((player distance _target) < 4) OR ((objectParent player) isEqualTo _target))'];
_vehicle addAction ["<img image='HG\UI\Icons\clear.paa' size='1.5'/><t color='#FF0000'>Empty Vehicle</t>",{clearItemCargoGlobal (_this select 0); clearMagazineCargoGlobal (_this select 0); clearWeaponCargoGlobal (_this select 0); clearBackpackCargoGlobal (_this select 0); hint (localize "STR_HG_VEHICLE_EMPTIED")},"",0,false,false,"",'(alive player) AND (((player distance _target) < 4) OR ((objectParent player) isEqualTo _target))'];

true;

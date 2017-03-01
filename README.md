<h1 align="center">[HG] Simple Shops<br/>by HoverGuy<br/>v 1.3</h1>

<b>How to try it</b>

Copy the whole HG.VR folder to your Arma 3 mission folder (the one attached to the profile you use)
Go in game and load the mission

<b>How to use it in your custom mission</b>

You should know how to do it, do you?

<b>How to configure</b>

There are 4 config files:

HG\Config\HG_Config.h<br/>
HG\Config\HG_ClothingShopCfg.h<br/>
HG\Config\HG_VehiclesShopCfg.h<br/>
HG\Config\HG_WeaponsShopCfg.h

<b>How to setup kill reward</b>

Note1: If you use AIs in your mission, make sure to add this code in the file where you spawn AIs.<br/>
Note2: If you already have a Killed EVH set on AIs, just copy the relevant part.

```
if((getNumber(missionConfigFile >> "CfgClient" >> "enableKillReward")) isEqualTo 1) then
{
    // _ai represents the already created AI unit
    _ai addEventHandler
    [
        "Killed",
        {
            params ["_unit","_killer"];

            if(isPlayer _killer) then
            {
                [(getNumber(missionConfigFile >> "CfgClient" >> "HG_MoneyCfg" >> (rank _unit) >> "killedReward")),0] remoteExecCall ["HG_fnc_addOrSubCash",_killer,false];
            };
        }
    ];
};
```

<b>Usage</b>

Action to open shop dialogs (from editor placed object):

Weapons Shop
```
this addAction["<img image='HG\UI\gun.paa' size='1.5'/><t color='#FF0000'>Open Weapons Shop</t>",{_this call HG_fnc_dialogOnLoadItems},"HG_DefaultShop",0,false,false,"",'(alive player) && !dialog && player distance _target < 3'];
```

Clothing Shop
```
this addAction["<img image='HG\UI\clothing.paa' size='1.5'/><t color='#FF0000'>Open Clothing Shop</t>",{_this call HG_fnc_dialogOnLoadClothing},"HG_DefaultShop",0,false,false,"",'(alive player) && !dialog && player distance _target < 3'];
```

Vehicles Shop
```
this addAction["<img image='HG\UI\car.paa' size='1.5'/><t color='#FF0000'>Open Vehicles Shop</t>",{_this call HG_fnc_dialogOnLoadVehicles},"HG_DefaultShop",0,false,false,"",'(alive player) && !dialog && player distance _target < 3'];
```

Virtual Garage
```
this addAction["<img image='HG\UI\garage.paa' size='1.5'/><t color='#FF0000'>Open Garage</t>",{_this call HG_fnc_dialogOnLoadGarage},["garage_spawn_1"],0,false,false,"",'(alive player) && !dialog && player distance _target < 3'];
this addAction["<img image='HG\UI\garage.paa' size='1.5'/><t color='#FF0000'>Store Vehicle</t>",{_this call HG_fnc_storeVehicleC},"garage_store",0,false,false,"",'(alive player) && !dialog && player distance _target < 3'];
```

<b>Updates</b>

_v 1.0_<br/>
Initial Release

_v 1.1_<br/> 
Global - Localization support<br/>
Global - Custom shops support<br/>
Global - Redo parts of dialogs (some were complaining about dialogs being too small)<br/>
Global - Ability to whitelist shops by ranks (waiting for feedback, is it a good idea?), see respective shop config<br/>
Global - Support for different currency<br/>
Global - Better comments<br/>
Clothing Shop - Added slider to dialog to turn player left or right for better preview<br/>
Vehicles Shop - Support for multiple markers for vehicle spawning (the system will select first free spawn point)<br/>
Vehicles Shop - Vehicle preview is now spawned in the air, it is no longer needed to have it on a flat surface<br/>
Vehicles Shop - Ability to clear vehicle inventory when spawned or not, up to mission makers<br/>
Weapons Shop - Magazines / Items / Scopes support<br/>
Weapons Shop -  More weapon infos (instead of just the price...)
	
_v 1.2_<br/>
Global - Ability to choose what shop you want to display (better shop customization)<br/>
Global - Persistent cash (toggleable)<br/>
Global - Persistent vehicles (toggleable)<br/>
Global - Cash display in HUD  (toggleable)<br/>
Global - Ability to set start cash<br/>
Global - Ability to give money to other players<br/>
Vehicles Shop - Virtual garage<br/>
Vehicles Shop - Ability to lock/unlock owned vehicles
	
_v 1.3_<br/>
Global - Support for different currency<br/>
Weapons Shop - Altered fn_handleItems.sqf file, it does now handle items better

_v 1.4_<br/>
Garage - Dialog can be moved with mouse while holding top left icon<br/>
Weapons Shop - Dialog can be moved with mouse while holding top left icon<br/>
Global - Better currency support

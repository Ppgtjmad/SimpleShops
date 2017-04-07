<h1 align="center">[HG] Simple Shops<br/>by HoverGuy<br/>v 1.7</h1>

<p align="center"><a rel="license" href="http://creativecommons.org/licenses/by-nc-nd/4.0/"><img alt="Creative Commons License" style="border-width:0" src="https://i.creativecommons.org/l/by-nc-nd/4.0/88x31.png"/></a><br/>This work is licensed under a <a rel="license" href="http://creativecommons.org/licenses/by-nc-nd/4.0/">Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License</a>.</p>

<b>How to try it</b>

Download ZIP folder, make a folder called HG.VR, move all files from downloaded folder to HG.VR<br/>
Put HG.VR in your mission folder (the one tied to your profile)<br/>
Go in game, select <b>Virtual Reality</b> world and load the mission

<b>How to use it in your custom mission</b>

Copy <b>HG</b> folder to your mission root directory<br/>
Copy <b>stringtable.xml</b> (or merge with yours)<br/>
Copy <b>initPlayerLocal.sqf</b> (or merge with yours)<br/>
Copy <b>initPlayerServer.sqf</b> (or merge with yours)<br/>
Copy <b>initServer.sqf</b> (or merge with yours)<br/>

Open your <b>description.ext</b> & add this at the end:

```
#include "HG\UI\HG_DialogsMaster.h"

class RscTitles
{
    #include "HG\UI\Dialogs\HG_HUD.h"
};

class CfgClient
{
    #include "HG\Config\HG_Config.h"
};

class CfgSounds
{
    #include "HG\Sounds\HG_Sounds.h"
};

class CfgFunctions 
{
    #include "HG\Functions\HG_Functions.h"
};
```

Note: If your already have a description.ext just copy the relevant parts

<b>How to configure</b>

There are 4 config files:

HG\Config\HG_Config.h<br/>
HG\Config\HG_ClothingShopCfg.h<br/>
HG\Config\HG_VehiclesShopCfg.h<br/>
HG\Config\HG_WeaponsShopCfg.h

<b>How to setup kill reward</b>

<i>Has to be enabled in HG_Config.h first (see enableKillReward).</i>

Note: If you use AIs in your mission, make sure to add this line in the file where you spawn AIs<br/>

```
// _AI is the unit
[_AI] call HG_fnc_aiSetup;
```

<b>Usage</b>

Action to open shop dialogs (from editor placed object):

_Weapons Shop_
```
this addAction["<img image='HG\UI\gun.paa' size='1.5'/><t color='#FF0000'>Open Weapons Shop</t>",{_this call HG_fnc_dialogOnLoadItems},"HG_DefaultShop",0,false,false,"",'(alive player) && !dialog && player distance _target < 3'];
```
"HG_DefaultShop" refers to the class in the vehicles shop config, can be anything you want as long as it's defined in the proper config file

_Clothing Shop_
```
this addAction["<img image='HG\UI\clothing.paa' size='1.5'/><t color='#FF0000'>Open Clothing Shop</t>",{_this call HG_fnc_dialogOnLoadClothing},"HG_DefaultShop",0,false,false,"",'(alive player) && !dialog && player distance _target < 3'];
```
"HG_DefaultShop" refers to the class in the vehicles shop config, can be anything you want as long as it's defined in the proper config file

_Vehicles Shop_
```
this addAction["<img image='HG\UI\car.paa' size='1.5'/><t color='#FF0000'>Open Vehicles Shop</t>",{_this call HG_fnc_dialogOnLoadVehicles},"HG_DefaultShop",0,false,false,"",'(alive player) && !dialog && player distance _target < 3'];
```
"HG_DefaultShop" refers to the class in the vehicles shop config, can be anything you want as long as it's defined in the proper config file

_Virtual Garage_
```
this addAction["<img image='HG\UI\garage.paa' size='1.5'/><t color='#FF0000'>Open Garage</t>",{_this call HG_fnc_dialogOnLoadGarage},["garage_spawn_1"],0,false,false,"",'(alive player) && !dialog && player distance _target < 3'];
this addAction["<img image='HG\UI\garage.paa' size='1.5'/><t color='#FF0000'>Store Vehicle</t>",{_this call HG_fnc_storeVehicleC},"garage_store",0,false,false,"",'(alive player) && !dialog && player distance _target < 3'];
```
["garage_spawn_1"] is an array of strings (markers) that are required to spawn vehicles, you can have many<br/>
"garage_store" is the marker where you have to park your vehicle for the garage system to be able to detect it & therefore store it properly

Note: A store point can also be used as a spawn point & reciprocally

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

_v 1.5_<br/>
Clothing Shop - Added total price text in top bar & added option to remove glasses/headgear/uniform/vest/backpack in dialog list<br/>
Global - Toggleable clothing crate<br/>
Global - Toggleable give money action<br/>

_v 1.6_<br/>
Global - Fixed rewards<br/>
Global - Added rating handling (players can't have negative rating anymore so they are not considered enemies)<br/>
Global - Fixed cash hints<br/>
Global - Removed hiding of units when in shop view (muzzle flashs were still visible)

_v 1.7_<br/>
Global - Player inventory saving (toggleable)<br/>
Global - Vehicles inventory saving (toggleable)<br/>
Global - Locked inventory when vehicle is locked (vehicle owner can still access it)<br/>
Global - Added sound for locking/unlocking vehicles<br/>
Global - Fixed AI script<br/>
Global - Fixed missing ; in fn_clientInitialization.sqf<br/>
Global - Changed addUniform to forceAddUniform

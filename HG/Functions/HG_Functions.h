/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/

class HG
{
	class AdminMenu
	{
		file = "HG\Functions\Client\AdminMenu";
		class adminMenuBtns {};
		class adminMenuListChanged {};
		class checkboxChanged {};
		class dialogOnLoadAdminMenu {};
		class refreshPlayers {};
		class refreshWhitelist {};
	};
	
	class AI
	{
		file = "HG\Functions\Client\AI";
	    class aiUnitSetup {};	
	};
	
	class ATM
	{
		file = "HG\Functions\Client\ATM";
		class atmBtns {};
		class atmReceived {};
		class atmRefresh {};
		class dialogOnLoadATM {};
	};
	
	class Dealer
	{
		file = "HG\Functions\Client\Dealer";
		class dealerListChanged {};
		class dealerSell {};
		class dialogOnLoadDealer {};
		class refreshDealer {};
	};
	
	class EVH
	{
		file = "HG\Functions\Client\EVH";
		class handleRating {};
		class inventoryClosed {};
		class inventoryOpened {};
		class loaded 
		{
			preInit = 1;
		};
		class keyDown {};
		class killed {};
		class respawn {};
		class take {};
	};
	
	class Garage
	{
		file = "HG\Functions\Client\Garage";
		class delVehicle {};
		class dialogOnLoadGarage {};
		class fillGarage {};
	    class garageSpawn {};
		class refreshGarage {};
		class storeVehicleClient {};
	};
	
	class GearShop
	{
		file = "HG\Functions\Client\GearShop";
		class buyGear {};
		class dialogOnLoadGear {};
		class dialogOnUnloadGear {};
		class fillBox {};
		class gearSelectionChanged {};
		class handleGear {};
		class reset {};
		class viewControl {};
		class xGearSelectionChanged {};
	};
	
	class Generic
	{
		file = "HG\Functions\Client\Generic";
		class addOrSubCash {};
		class addOrSubKills {};
		class addOrSubXP {};
		class arrayCount {};
	    class currencyToText {};
		class emptyVehicle {};
		class getConfig {};
		class hasEnoughMoney {};
		class isItBusy {};
		class isNumeric {};
		class lockOrUnlock {};
		class markers {};
		class moneyItem {};
		class nearbyATM {};
		class parseGear {};
		class paycheck {};
		class setOwner {};
		class setRank {};
	};
	
	class GiveKey
	{
		file = "HG\Functions\Client\GiveKey";
		class dialogOnLoadGiveKey {};
		class giveKeyBtns {};
		class refreshKeyCombo {};
		class refreshKeyList {};
	};
	
	class GiveMoney
	{
		file = "HG\Functions\Client\GiveMoney";
		class dialogOnloadGiveMoney {};
		class giveMoneyBtn {};
	};
	
	class HUD
	{
		file = "HG\Functions\Client\HUD";
		class HUD {};
	};
	
	class ItemsShop
	{
		file = "HG\Functions\Client\ItemsShop";
		class dialogOnLoadItems {};
		class dialogOnUnloadItems {};
		class handleItems {};
		class itemBtns {};
		class itemSelectionChanged {};
		class xItemSelectionChanged {};
	};
	
	class Server
	{
		file = "HG\Functions\Server";
		class activeReset {};
		class cleanup {};
		class clientToServer {};
		class deleteVehicle {};
		class disconnect {};
		class findIndex {};
		class getGear {};
		class getInventory {};
		class getType {};
		class getWhitelist {};
		class killedVehicle {};
		class lock {};
		class requestGarage {};
		class resetGarages {};
		class resetMoney {};
		class setInventory {};
		class spawnVehicle {};
		class storeVehicleServer {};
		class updateWhitelist {};
	};
	
	class Tags
	{
		file = "HG\Functions\Client\Tags";
		class playerTags {};
	};
	
	class Trader
	{
		file = "HG\Functions\Client\Trader";
		class dialogOnLoadTrader {};
		class dialogOnUnloadTrader {};
		class gearHandler {};
		class gearItem {};
		class refreshTrader {};
		class traderBtns {};
		class traderTreeChanged {};
	};
	
	class Units
	{
		file = "HG\Functions\Client\Units";
		class dialogOnLoadUnits {};
		class unitsBtns {};
		class unitsComboChanged {};
		class unitsRefresh {};
		class unitsTreeChanged {};
	};
	
	class VehiclesShop
	{
		file = "HG\Functions\Client\VehiclesShop";
		class addActions {};
		class buyToGarage {};
		class buyVehicle {};
		class dialogOnLoadVehicles {};
		class dialogOnUnloadVehicles {};
		class vehicleColor {};
		class vehicleRotate {};
		class vehicleSelectionChanged {};
		class xVehicleSelectionChanged {};
	};
};

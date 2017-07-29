/*
    Author - HoverGuy
    © All Fucks Reserved
	Website - http://www.sunrise-production.com
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
	};
	
	class EVH
	{
		file = "HG\Functions\Client\EVH";
		class handleRating {};
		class inventoryClosed {};
		class inventoryOpened {};
		class keyDown {};
		class killed {};
		class respawn {};
	};
	
	class Garage
	{
		file = "HG\Functions\Client\Garage";
		class delVehicle {};
		class dialogOnLoadGarage {};
		class fillGarage {};
	    class garageBtns {};
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
		class xGearSelectionChanged {};
	};
	
	class Generic
	{
		file = "HG\Functions\Client\Generic";
		class addOrSubCash {};
		class addOrSubKills {};
		class addOrSubXP {};
	    class currencyToText {};
		class emptyVehicle {};
		class getConfig {};
		class hasEnoughMoney {};
		class isItBusy {};
		class isNumeric {};
		class lockOrUnlock {};
		class markers {};
		class parseGear {};
		class paycheck {};
		class setOwner {};
		class setRank {};
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
		class handleItems {};
		class itemBtns {};
		class itemSelectionChanged {};
		class xItemSelectionChanged {};
	};
	
	class Tags
	{
		file = "HG\Functions\Client\Tags";
		class playerTags {};
	};
	
	class Trader
	{
		file = "HG\Functions\Client\Trader";
	};
	
	class VehiclesShop
	{
		file = "HG\Functions\Client\VehiclesShop";
		class addActions {};
		class buyToGarage {};
		class buyVehicle {};
		class dialogOnLoadVehicles {};
		class dialogOnUnloadVehicles {};
		class vehicleRotate {};
		class vehicleSelectionChanged {};
		class xVehicleSelectionChanged {};
	};
};

/*
    Author - HoverGuy
    © All Fucks Reserved
	Website - http://www.sunrise-production.com
*/

class HG
{
	class AdminMenu
	{
		file = "HG\Functions\AdminMenu";
		class adminMenuBtns {};
		class adminMenuListChanged {};
		class checkboxChanged {};
		class dialogOnLoadAdminMenu {};
		class refreshPlayers {};
	};
	
	class AI
	{
	    file = "HG\Functions\AI";
		class aiUnitSetup {};
	};
	
	class ClothingShop
	{
		file = "HG\Functions\ClothingShop";
		class buyClothing {};
		class clothingSelectionChanged {};
		class dialogOnLoadClothing {};
		class dialogOnUnloadClothing {};
		class fillBox {};
		class reset {};
		class xClothingSelectionChanged {};
	};
	
	class EVH
	{
		file = "HG\Functions\EVH";
		class handleRating {};
		class inventoryClosed {};
		class inventoryOpened {};
		class killed {};
		class respawn {};
	};
	
	class Garage
	{
		file = "HG\Functions\Garage";
		class delVehicle {};
		class dialogOnLoadGarage {};
		class fillGarage {};
	    class garageBtns {};
		class refreshGarage {};
		class storeVehicleC {};
	};
	
	class Generic
	{
		file = "HG\Functions\Generic";
		class addOrSubCash {};
		class addOrSubKills {};
		class addOrSubXP {};
	    class currencyToText {};
		class getConfig {};
		class getGear {};
		class hasEnoughMoney {};
		class isItBusy {};
		class isNumeric {};
		class markers {};
		class parseGear {};
		class paycheck {};
		class setOwner {};
		class setRank {};
	};
	
	class GiveMoney
	{
		file = "HG\Functions\GiveMoney";
		class giveMoneyBtn {};
	};
	
	class HUD
	{
		file = "HG\Functions\HUD";
		class HUD {};
	};
	
	class Tags
	{
		file = "HG\Functions\Tags";
		class playerTags {};
	};
	
	class VehiclesShop
	{
		file = "HG\Functions\VehiclesShop";
		class addActions {};
		class buyVehicle {};
		class dialogOnLoadVehicles {};
		class dialogOnUnloadVehicles {};
		class vehicleRotate {};
		class vehicleSelectionChanged {};
		class xVehicleSelectionChanged {};
	};
	
	class WeaponsShop
	{
		file = "HG\Functions\WeaponsShop";
		class dialogOnLoadItems {};
		class handleItems {};
		class itemBtns {};
		class itemSelectionChanged {};
		class xItemSelectionChanged {};
	};
};

/*
    Author - HoverGuy
    © All Fucks Reserved
	Website - http://www.sunrise-production.com
*/

class HG
{
	class AI
	{
	    file = "HG\Functions\AI";
		class aiSetup {};
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
	    class setCamPos {};
		class xClothingSelectionChanged {};
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
	    class currencyToText {};
		class getConfig {};
		class getGear {};
		class hasEnoughMoney {};
		class isNumeric {};
		class parseGear {};
		class paycheck {};
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
	
	class VehiclesShop
	{
		file = "HG\Functions\VehiclesShop";
		class addActions {};
		class buyVehicle {};
		class dialogOnLoadVehicles {};
		class dialogOnUnloadVehicles {};
		class isItBusy {};
		class vehicleRotate {};
		class vehicleSelectionChanged {};
		class xVehicleSelectionChanged {};
	};
	
	class WeaponsShop
	{
		file = "HG\Functions\WeaponsShop";
		class buyItem {};
		class dialogOnLoadItems {};
		class handleItems {};
		class itemSelectionChanged {};
		class xItemSelectionChanged {};
	};
};

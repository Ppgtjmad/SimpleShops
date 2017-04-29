#include "HG_Macros.h"
/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
	
	currencyType - STRING - Currency you want to use (ISO format)
	enableSave - BOOL - Save money?
	resetSavedMoney - BOOL - Reset saved money? Useful if you enable persistence then disable it and re-enable it, if it's set to true old saved money will be reset to startCash value, only used if enableSave is set to true
	enableHUD - BOOL - Enable money display in HUD?
	enablePaycheck - BOOL - Enable paycheck?
	enableKillReward - BOOL - Enable kill reward?
	enableTeamKillPenalty - BOOL - Works only if enableKillReward is set to true
	enableCrate - BOOL - Enable old stuff saving in crate when buying new clothes?
	enableGiveMoney - BOOL - Enable ability to give money to others?
	clearInventory - BOOL - Clear vehicle inventory when spawning (retrieving vehicle from garage and buying)?
	enablePlayerInventorySave - BOOL - Enable player gear saving (server profileNamespace)? Disable this if you have a custom saving system
	enableVehicleInventorySave - BOOL - Enable vehicle gear saving (server profileNamespace)? Disable this if you have a custom saving system
	enableXP - BOOL - Enable XP system?
	enableKillCount - BOOL - Enable kill count in HUD?
	enableTags - BOOL - Enable player tags?
	enableMarkers - BOOL - Enable teammates position markers on map?
	admins - ARRAY OF STRINGS - Admins PUIDs
	adminKey - INTEGER - Key to push to open admin menu, default is Left Windows (0xDB / 219), see https://community.bistudio.com/wiki/DIK_KeyCodes OR https://forums.bistudio.com/forums/topic/111590-keyboard-ui-number-codes/?do=findComment&comment=1848755
	savingMethod - STRING - Can be either "serverProfile" or "extDB" if the latest make sure you have extDB loaded & setup correctly *NOT IMPLEMENTED*
	
	class HG_MasterCfg
	{
		class Rank - Can be PRIVATE/CORPORAL/SERGEANT/LIEUTENANT/CAPTAIN/MAJOR/COLONEL
		{
			paycheck - INTEGER - Paycheck amount
			paycheckPeriod - INTEGER - Time (in minutes) between each paycheck iteration, only used if enablePaycheck is set to true
			startCash - INTEGER - Obvious...
			killedReward - INTEGER - Money earned by killer, only used if enableKillReward is set to true
			tkPenalty - INTEGER - Money taken when player of the same side is killed (team kill), only used if enableTeamKillPenalty is set to true
			xpPenalty - INTEGER - XP taken when player of the same side is killed (team kill), only used if enableXP & enableTeamKillPenalty is set to true
			xpReward - INTEGER - XP earned by killer, only used if enableXP & enableKillReward are set to true
			xpToLvlUp - INTEGER - XP required to rank up, last rank has to be 0, only used if enableXP is set to true
		};
	};
*/

currencyType = "USD";
enableSave = true;
resetSavedMoney = false;
enableHUD = true;
enablePaycheck = true;
enableKillReward = true;
enableTeamKillPenalty = true;
enableCrate = true;
enableGiveMoney = true;
clearInventory = true;
enablePlayerInventorySave = true;
enableVehicleInventorySave = true;
enableXP = true;
enableKillCount = true;
enableTags = true;
enableMarkers = true;
admins[] = {};
adminKey = 0xDB;
savingMethod = "serverProfile";

class HG_MasterCfg
{
	class PRIVATE
	{
		paycheck = 2000;
		paycheckPeriod = 30;
		startCash = 50000;
		killedReward = 500;
		tkPenalty = 500;
		xpPenalty = 10;
		xpReward = 10;
		xpToLvlUp = 1000;
	};
	class CORPORAL
	{
		paycheck = 4000;
		paycheckPeriod = 30;
		startCash = 50000;
		killedReward = 1000;
		tkPenalty = 1000;
		xpPenalty = 20;
		xpReward = 20;
		xpToLvlUp = 1500;
	};
	class SERGEANT
	{
		paycheck = 6000;
		paycheckPeriod = 30;
		startCash = 50000;
		killedReward = 1500;
		tkPenalty = 1500;
		xpPenalty = 30;
		xpReward = 30;
		xpToLvlUp = 2000;
	};
	class LIEUTENANT
	{
		paycheck = 8000;
		paycheckPeriod = 30;
		startCash = 50000;
		killedReward = 2000;
		tkPenalty = 2000;
		xpPenalty = 40;
		xpReward = 40;
		xpToLvlUp = 2500;
	};
	class CAPTAIN
	{
		paycheck = 10000;
		paycheckPeriod = 30;
		startCash = 50000;
		killedReward = 2500;
		tkPenalty = 2500;
		xpPenalty = 50;
		xpReward = 50;
		xpToLvlUp = 3000;
	};
	class MAJOR
	{
		paycheck = 12000;
		paycheckPeriod = 30;
		startCash = 50000;
		killedReward = 3000;
		tkPenalty = 3000;
		xpPenalty = 60;
		xpReward = 60;
		xpToLvlUp = 3500;
	};
	class COLONEL
	{
		paycheck = 14000;
		paycheckPeriod = 30;
		startCash = 50000;
		killedReward = 3500;
		tkPenalty = 3500;
		xpPenalty = 70;
		xpReward = 70;
		xpToLvlUp = 0;
	};
};

class HG_ClothingShopCfg // Has to be left untouched
{
    #include "HG_ClothingShopCfg.h"
};

class HG_VehiclesShopCfg // Has to be left untouched
{
    #include "HG_VehiclesShopCfg.h"
};

class HG_WeaponsShopCfg // Has to be left untouched
{
    #include "HG_WeaponsShopCfg.h"
};

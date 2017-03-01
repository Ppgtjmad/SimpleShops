#include "HG_Macros.h"
/*
    Author - HoverGuy
    © All Fucks Reserved
	
	currencyType - STRING - Currency you want to use (ISO format)
	enableSave - BOOL - Save money?
	resetSavedMoney - BOOL - Reset saved money? Useful if you enable persistence then disable it and re-enable it, if it's set to true old saved money will be reset to startCash value, only used if enableSave is set to true
	enableHUD - BOOL - Enable money display in HUD?
	enablePaycheck - BOOL - Enable paycheck?
	enableKillReward - BOOL - Only works with REAL players not AIs (has to be setup separately in your AI spawn system)
	enableTeamKillPenalty - BOOL - Works only if enableKillReward is set to true
	clearInventory - BOOL - Clear vehicle inventory when spawning?
	
	class HG_MoneyCfg
	{
		class Rank - Can be PRIVATE/CORPORAL/SERGEANT/LIEUTENANT/CAPTAIN/MAJOR/COLONEL
		{
			paycheck - INTEGER - Paycheck amount
			paycheckPeriod - INTEGER - Time (in minutes) between each paycheck iteration, only used if enablePaycheck is set to true
			startCash - INTEGER - Obvious...
			killedReward - INTEGER - Money earned by killer
			tkPenalty - INTEGER - Money taken when player of the same side is killed (team kill)
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
clearInventory = true;

class HG_MoneyCfg
{
	class PRIVATE
	{
		paycheck = 2000;
		paycheckPeriod = 30;
		startCash = 50000;
		killedReward = 500;
		tkPenalty = 500;
	};
	class CORPORAL
	{
		paycheck = 4000;
		paycheckPeriod = 30;
		startCash = 50000;
		killedReward = 1000;
		tkPenalty = 1000;
	};
	class SERGEANT
	{
		paycheck = 6000;
		paycheckPeriod = 30;
		startCash = 50000;
		killedReward = 1500;
		tkPenalty = 1500;
	};
	class LIEUTENANT
	{
		paycheck = 8000;
		paycheckPeriod = 30;
		startCash = 50000;
		killedReward = 2000;
		tkPenalty = 2000;
	};
	class CAPTAIN
	{
		paycheck = 10000;
		paycheckPeriod = 30;
		startCash = 50000;
		killedReward = 2500;
		tkPenalty = 2500;
	};
	class MAJOR
	{
		paycheck = 12000;
		paycheckPeriod = 30;
		startCash = 50000;
		killedReward = 3000;
		tkPenalty = 3000;
	};
	class COLONEL
	{
		paycheck = 14000;
		paycheckPeriod = 30;
		startCash = 50000;
		killedReward = 3500;
		tkPenalty = 3500;
	};
};

#include "HG_ClothingShopCfg.h"
#include "HG_VehiclesShopCfg.h"
#include "HG_WeaponsShopCfg.h"

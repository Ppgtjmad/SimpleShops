/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params["_unit","_corpse"];

if(HG_PAYCHECK_ENABLED) then
{
	if(scriptDone HG_PAYCHECK_THREAD) then 
	{
	    HG_PAYCHECK_THREAD = [] spawn HG_fnc_paycheck;
	};
};

if(HG_GIVE_MONEY_ENABLED) then
{
	player addAction ["<img image='HG\UI\Icons\money.paa' size='1.5'/><t color='#FF0000'>Give Money</t>",{HG_CURSOR_OBJECT = cursorObject; createDialog "HG_GiveMoney"},"",0,false,false,"",'(alive player) AND (cursorObject isKindOf "Man") AND (isPlayer cursorObject) AND (alive cursorObject) AND (player distance cursorObject < 2) AND !dialog'];
};

#include "HG_Macros.h"
/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/
params["_ctrl","_index","_sel","_text"];

disableSerialization;

lbClear HG_ADM_COMBO;
_sel = _ctrl lbData _index;

if(_sel != (localize "STR_HG_NONE")) then
{
    private["_val","_xpText","_kcText","_ind"];
	
    _val = _ctrl lbValue _index;
	HG_OBJECT = HG_TEMP select _val;
	
	_xpText = if(HG_XP_ENABLED) then
	{
	    format["%1/%2",((HG_OBJECT getVariable "HG_XP") select 1),(getNumber(getMissionConfig "CfgClient" >> "HG_MasterCfg" >> (rank HG_OBJECT) >> "xpToLvlUp"))];
	} else {
	    (localize "STR_HG_DISABLED");
	};
	
	_kcText = if(HG_KILL_COUNT_ENABLED) then 
	{
	    (HG_OBJECT getVariable "HG_Kills")
	} else {
	    (localize "STR_HG_DISABLED")
	};
	
    _text = parseText format
	[
        "<br/>"+
		"<t align='center' size='1'>"+ (localize "STR_HG_DLG_AM_UID")+ "</t><br/>"+
		"<t align='center' size='1'>"+ (localize "STR_HG_DLG_AM_SIDE")+ "</t><br/>"+
		"<t align='center' size='1'>"+ (localize "STR_HG_DLG_AM_RANK")+ "</t><br/>"+
		"<t align='center' size='1'>"+ (localize "STR_HG_DLG_AM_XP")+ "</t><br/>"+
	    "<t align='center' size='1'>"+ (localize "STR_HG_DLG_AM_CASH")+ "</t><br/>"+
		"<t align='center' size='1'>"+ (localize "STR_HG_DLG_AM_BANK")+ "</t><br/>"+ 
	    "<t align='center' size='1'>"+ (localize "STR_HG_DLG_AM_KILLS")+ "</t>",
		(getPlayerUID HG_OBJECT),
		(side HG_OBJECT),
		(rank HG_OBJECT),
		_xpText,
	    ([(HG_OBJECT getVariable HG_CASH_VAR),true] call HG_fnc_currencyToText),
		([(HG_OBJECT getVariable HG_BANK_VAR),true] call HG_fnc_currencyToText),
		_kcText
	];
	
	{
	    if(_x != (rank HG_OBJECT)) then
		{
		    _ind = HG_ADM_COMBO lbAdd _x;
			HG_ADM_COMBO lbSetData [_ind,_x];
		};
	} forEach ["PRIVATE","CORPORAL","SERGEANT","LIEUTENANT","CAPTAIN","MAJOR","COLONEL"];
	
	{
	    (_x select 0) cbSetChecked true;
		(_x select 1) cbSetChecked false;
	} forEach 
	[
	    [HG_ADM_XP_ADD,HG_ADM_XP_SUB],
	    [HG_ADM_KILLS_ADD,HG_ADM_KILLS_SUB],
	    [HG_ADM_CASH_ADD,HG_ADM_CASH_SUB],
	    [HG_ADM_BANK_ADD,HG_ADM_BANK_SUB]
	];
	
	HG_ADM_COMBO lbSetCurSel 0;
} else {
    _text = parseText format
	[
        "<br/>"+
	    "<t align='center' valign='middle' size='1'>"+ (localize "STR_HG_NOTHING_TO_DISPLAY")+ "</t>"
    ];
};

HG_ADM_TEXT ctrlSetStructuredText _text;

true;

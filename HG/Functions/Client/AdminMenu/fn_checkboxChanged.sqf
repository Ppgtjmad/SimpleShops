#include "HG_Macros.h"
/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/
params["_ctrl","_mode","_idc"];

disableSerialization;

_idc = ctrlIDC _ctrl;

switch(_idc) do
{
    case HG_ADM_XP_SUB_IDC:
	{
	    if(_mode isEqualTo 1) then
		{
			HG_ADM_XP_ADD cbSetChecked false;
		};
	};
	case HG_ADM_XP_ADD_IDC:
	{
	    if(_mode isEqualTo 1) then
		{
			HG_ADM_XP_SUB cbSetChecked false;
		};
	};
	case HG_ADM_KILLS_SUB_IDC:
	{
	    if(_mode isEqualTo 1) then
		{
			HG_ADM_KILLS_ADD cbSetChecked false;
		};
	};
	case HG_ADM_KILLS_ADD_IDC:
	{
	    if(_mode isEqualTo 1) then
		{
			HG_ADM_KILLS_SUB cbSetChecked false;
		};
	};
	case HG_ADM_CASH_SUB_IDC:
	{
	    if(_mode isEqualTo 1) then
		{
			HG_ADM_CASH_ADD cbSetChecked false;
		};
	};
	case HG_ADM_CASH_ADD_IDC:
	{
	    if(_mode isEqualTo 1) then
		{
			HG_ADM_CASH_SUB cbSetChecked false;
		};
	};
	case HG_ADM_BANK_SUB_IDC:
	{
	    if(_mode isEqualTo 1) then
		{
			HG_ADM_BANK_ADD cbSetChecked false;
		};
	};
	case HG_ADM_BANK_ADD_IDC:
	{
	    if(_mode isEqualTo 1) then
		{
			HG_ADM_BANK_SUB cbSetChecked false;
		};
	};
};

true;

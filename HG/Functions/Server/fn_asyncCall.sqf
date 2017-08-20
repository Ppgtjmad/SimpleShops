/*
	Author - Bryan "Tonic" Boardwine

	Description:
	Commits an asynchronous call to extDB
	Gets result via extDB  4:x + uses 5:x if message is Multi-Part

	Parameters:
	0: INTEGER (1 = ASYNC + not return for update/insert, 2 = ASYNC + return for query's).
	1: STRING (Query to be ran).
*/

params 
[
	["_mode",0,[0]],
	["_queryStmt","",[""]],
	["_multi",true,[true]]
];

private _key = "extDB3" callExtension format["%1:%2:%3",_mode,extDB_SQL_CUSTOM_ID,_queryStmt];
if(_mode isEqualTo 1) exitWith {true};

private["_queryResult","_loop"];

_key = parseSimpleArray _key;
_key = _key select 1;

_queryResult = "";
_loop = true;

while {_loop} do
{
	_queryResult = "extDB3" callExtension format["4:%1", _key];
	if (_queryResult isEqualTo "[5]") then 
	{
		// extDB3 returned that result is Multi-Part Messages
		_queryResult = "";
		while{true} do 
		{
			_pipe = "extDB3" callExtension format["5:%1", _key];
			if(_pipe isEqualTo "") exitWith {_loop = false};
			_queryResult = _queryResult + _pipe;
		};
	}
	else
	{
		if (!(_queryResult isEqualTo "[3]")) then
		{
			_loop = false;
		};
	};
};

_queryResult = parseSimpleArray _queryResult;

// Not needed, its SQF Code incase extDB3 ever returns error message i.e Database Connection Died
if ((_queryResult select 0) isEqualTo 0) exitWith {diag_log format ["extDB3: Protocol Error: %1", _queryResult]; []};
private _return = (_queryResult select 1);

if(!_multi) then
{
    _return = _return select 0;
};

_return;

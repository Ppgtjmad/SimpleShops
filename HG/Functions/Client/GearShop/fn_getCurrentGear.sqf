/*
    Author - HoverGuy
	GitHub - https://github.com/Ppgtjmad/SimpleShops
	Steam - https://steamcommunity.com/id/HoverGuy/
*/
params["_cat","_return"];

_return = switch(_cat) do
{
    case "Uniform":
	{
	    (HG_GEAR_SAVED select 0) select 0;
	};
	case "Vest":
	{
	    (HG_GEAR_SAVED select 1) select 0;
	};
	case "Backpack":
	{
	    (HG_GEAR_SAVED select 2) select 0;
	};
	case "Glasses":
	{
	    (HG_GEAR_SAVED select 3) select 0;
	};
	case "Headgear":
	{
	    (HG_GEAR_SAVED select 4) select 0;
	};
	case "MissileLauncher":
	{
	    (HG_GEAR_SAVED select 6) select 0;
	};
	case "RocketLauncher":
	{
	    (HG_GEAR_SAVED select 6) select 0;
	};
	case "Handgun":
	{
	    (HG_GEAR_SAVED select 7) select 0;
	};
	default
	{
	    (HG_GEAR_SAVED select 5) select 0;
	};
};

_return;

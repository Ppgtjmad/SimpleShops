/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params["_type",["_camPos",[]]];

_camPos = switch(_type) do
{
	case 0: // Facewear & headgear view
	{
	    [(player modelToWorld [0,0,1.4]),(player modelToWorld [-0.1,2,1.4])];
	};
	case 1: // Backpack view
	{
	    [(player modelToWorld [0,-0.15,1.3]),(player modelToWorld [1,-4,2])];
	};
	case 2: // Uniform & vest view
	{
	    [(player modelToWorld [0,0,1]),(player modelToWorld [1,4,2])];
	};
	default
	{
	    [(player modelToWorld [0,0,1]),(player modelToWorld [1,4,2])];
	};
};

HG_CAMERA_PREVIEW camSetTarget (_camPos select 0);
HG_CAMERA_PREVIEW camSetPos (_camPos select 1);
HG_CAMERA_PREVIEW camCommit 1;

true;

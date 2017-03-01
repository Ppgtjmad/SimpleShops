/*
    Author - HoverGuy
    © All Fucks Reserved
*/
params["_type"];

switch(_type) do
{
	case 0: // Facewear & headgear view
	{
	    HG_CAMERA_PREVIEW camSetTarget (player modelToWorld [0,0,1.4]);
		HG_CAMERA_PREVIEW camSetPos (player modelToWorld [-0.1,2,1.4]);
		HG_CAMERA_PREVIEW camCommit 1;
	};
	case 1: // Backpack view
	{
	    HG_CAMERA_PREVIEW camSetTarget (player modelToWorld [0,-0.15,1.3]);
		HG_CAMERA_PREVIEW camSetPos (player modelToWorld [1,-4,2]);
		HG_CAMERA_PREVIEW camCommit 1;
	};
	case 2: // Uniform & vest view
	{
	    HG_CAMERA_PREVIEW camSetTarget (player modelToWorld [0,0,1]);
        HG_CAMERA_PREVIEW camSetPos (player modelToWorld [1,4,2]);
        HG_CAMERA_PREVIEW camCommit 1;
	};
	default
	{
	    HG_CAMERA_PREVIEW camSetTarget (player modelToWorld [0,0,1]);
        HG_CAMERA_PREVIEW camSetPos (player modelToWorld [1,4,2]);
        HG_CAMERA_PREVIEW camCommit 1;
	};
};

true;

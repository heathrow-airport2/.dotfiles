//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/ /*Command*/	 	                            /*Update Interval*/	/*Update Signal*/
	{" ", "~/dwmblocks/scripts/upt",		 60,		          2},
	{" ", "~/dwmblocks/scripts/battery", 30, 5},
	{" ", "~/dwmblocks/scripts/pacupdate",  1800,		          9},	
	{" ", "~/dwmblocks/scripts/volume", 0, 12},
	{" ", "~/dwmblocks/scripts/clock",	     15,	              0},
	{" ", "~/dwmblocks/scripts/networks", 10, 3},
};
//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';

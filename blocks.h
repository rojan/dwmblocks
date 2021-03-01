//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	//{"", "cat ~/.pacupdate | sed /📦0/d",					0,		9},
	
	//{"🧠", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},

	//{"", "~/bin/statusbar/volume",						0,		10},

	//{"☀", "xbacklight | sed 's/\\..*//'",					0,		11},
	
	//{"", "~/bin/statusbar/battery",						5,		0},

	//{"🌡", "sensors | awk '/^temp1:/{print $2}'",				5,		0},

	//{"", "~/bin/statusbar/clock",						5,		0},
	{"", "~/dotfiles/status-scripts/weather.py",			900,		0},
	{"", "~/dotfiles/status-scripts/ram.py",				3,			0},
	{"", "~/dotfiles/status-scripts/cpu_temp.py",			3,			0},
	{"", "~/dotfiles/status-scripts/package_info.py",		900,		0},
	{"", "~/dotfiles/status-scripts/volume.py",				0,			10},
	{"", "~/dotfiles/status-scripts/battery.py",			3,			0},
	{"", "~/dotfiles/status-scripts/time.sh",				1,			0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';

//Modify this file to change what commands output to your statusbar, and recompile using the make command.

#define SCRIPTS "~/.local/scripts/statusbar/"
static const Block blocks[] = {
	/*Icon   Command                                 Interval	Signal*/
	
//	{"",     SCRIPTS"bluetooth.sh",                  120,        0 },
//	{"",     "~/scripts/statusbar/vpn.sh",           120,       10 },
//	{"",     SCRIPTS"wifi.sh",                       10,        11 },
//	{"",     "~/scripts/statusbar/ethernet.sh",      10,        12 },
	{"",     SCRIPTS"datetime.sh",                   60,          0 },
	{"",     SCRIPTS"status_volume.sh",              0,         13 },
	{"",     SCRIPTS"battery.sh",                    10,        14 },
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static unsigned int delimLen = 2;
static char delim[] = " ";

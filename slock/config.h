/* user and group to drop privileges to */
static const char *user  = "fhawk";
static const char *group = "fhawk";

static const char *colorname[NUMCOLS] = {
    [BACKGROUND] = "black", /* after initialization */
    [INIT] = "#2d2d2d",     /* after initialization */
    [INPUT] = "#005577",    /* during input */
    [FAILED] = "#CC3333",   /* wrong password */
};

/* insert grid pattern with scale 1:1, the size can be changed with logosize */
static const int logosize = 75;
static const int logow = 12;	/* grid width and height for right center alignment*/
static const int logoh = 6;

static XRectangle rectangles[9] = {
	/* x	y	w	h */
	{ 0,	3,	1,	3 },
	{ 1,	3,	2,	1 },
	{ 0,	5,	8,	1 },
	{ 3,	0,	1,	5 },
	{ 5,	3,	1,	2 },
	{ 7,	3,	1,	2 },
	{ 8,	3,	4,	1 },
	{ 9,	4,	1,	2 },
	{ 11,	4,	1,	2 },

};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* Patch: auto-timeout */
/* should [command] be run only once? */
static const int runonce = 0;
/* length of time (seconds) until [command] is executed */
static const int timeoffset = 30;
/* command to be run after [timeoffset] seconds has passed */
static const char *command = "/usr/bin/xset dpms force off";

/* time in seconds before the monitor shuts down */
static const int monitortime = 5;

/* default message */
// static const char * message = "Suckless: Software that sucks less.";
static const char * message = "";

/* text color */
static const char * text_color = "#ffffff";

/* text size (must be a valid size) */
static const char * font_name = "6x13";

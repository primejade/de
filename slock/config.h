/* user and group to drop privileges to */
static const char *user  = "hos";
static const char *group = "hos";

static const char *colorname[NUMCOLS] = {
	[INIT]   =  "#000000",    /* after initialization */
	[INPUT]  =  "#2d2d2d",    /* during input */
	[FAILED] =  "#d10101",    /* wrong password */
	[CAPS]   =  "#003788",    /* CapsLock on */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;

/* default message */
static const char * message = "Please do not play with the keyboard";

/* text color */
static const char * text_color = "#ffffff";

/* text size (must be a valid size) */
static const char * font_name = "-b&h-lucida-medium-r-normal-sans-0-0-75-75-p-0-iso10646-1";

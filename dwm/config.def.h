/* See LICENSE file for copyright and license details. */

/* appearance */
static const unsigned int borderpx  = 1;        /* border pixel of windows */
static const unsigned int gappx     = 7;        /* gaps between windows */
static const unsigned int snap      = 32;       /* snap pixel */
  /* systray */
//static const unsigned int systraypinning = 0;   /* 0: sloppy systray follows selected monitor, >0: pin systray to monitor X */
//static const unsigned int systrayonleft = 0;   	/* 0: systray in the right corner, >0: systray on left of status text */
//static const unsigned int systrayspacing = 2;   /* systray spacing */
//static const int systraypinningfailfirst = 1;   /* 1: if pinning fails, display systray on the first monitor, False: display systray on the last monitor*/
//static const int showsystray        = 1;     /* 0 means no systray */
  /* systray */
static const int showbar            = 1;        /* 0 means no bar */
static const int topbar             = 1;        /* 0 means bottom bar */
static const char *fonts[]          = { "UbuntuMonoNerdFont:size=15" };
static const char dmenufont[]       =   "UbuntuMonoNerdFont:size=15" ;
//static const char *fonts[]          = { "Monospace:size=13" };
//static const char dmenufont[]       =   "Monospace:size=13" ;

////  /* simple red/black scheme {{{ */
//static const char col_gray1[]       = "#000000";
//static const char col_gray2[]       = "#555555";
//static const char col_gray3[]       = "#ffffff";
//static const char col_gray4[]       = "#000000";
//static const char col_cyan[]        = "#f32323";
//static const char col_cyan2[]       = "#ff0000";
//static const char *colors[][3]      = {
////  /* simple red/black scheme }}} */

////  /* red and black {{{ */
//static const char col_gray1[]       = "#000000";
//static const char col_gray2[]       = "#000000";
//static const char col_gray3[]       = "#ffffff";
//static const char col_gray4[]       = "#000000";
//static const char col_cyan[]        = "#f44441";
//static const char col_cyan2[]       = "#ff0041";
//static const char *colors[][3]      = {
////  /* red and black }}} */
////  /* orange-yellow {{{ */
//static const char col_gray1[]       = "#000000";
//static const char col_gray2[]       = "#000000";
//static const char col_gray3[]       = "#4fb8cc";
//static const char col_gray4[]       = "#000000";
//static const char col_cyan[]        = "#ff7700";
//static const char col_cyan2[]        = "#ffbb00";
//static const char *colors[][3]      = {
////  /* orange-black }}} */
////  /* orange-black {{{ */
//static const char col_gray1[]       = "#000000";
//static const char col_gray2[]       = "#000000";
//static const char col_gray3[]       = "#ffffff";
//static const char col_gray4[]       = "#000000";
//static const char col_cyan[]        = "#ff8700";
//static const char *colors[][3]      = {
////  /* orange-black }}} */
////  /* yellow-black {{{ */
//static const char col_gray1[]       = "#000000";
//static const char col_gray2[]       = "#000000";
//static const char col_gray3[]       = "#ffffff";
//static const char col_gray4[]       = "#000000";
//static const char col_cyan[]        = "#ffff00";
//static const char *colors[][3]      = {
////  /* yellow-black }}} */
////  /* green-black {{{ */
//static const char col_gray1[]       = "#000000";
//static const char col_gray2[]       = "#000000";
//static const char col_gray3[]       = "#ffffff";
//static const char col_gray4[]       = "#000000";
//static const char col_cyan[]        = "#87ff5f";
//static const char *colors[][3]      = {
////  /* green-black }}} */
////  /* lightgreen-black {{{ */
//static const char col_gray1[]       = "#000000";
//static const char col_gray2[]       = "#000000";
//static const char col_gray3[]       = "#ffffff";
//static const char col_gray4[]       = "#000000";
//static const char col_cyan[]        = "#499c54";
//static const char *colors[][3]      = {
////  /* lightgreen-black }}} */
////  /* lightblue-black {{{ */
//static const char col_gray1[]       = "#000000";
//static const char col_gray2[]       = "#000000";
//static const char col_gray3[]       = "#ffffff";
//static const char col_gray4[]       = "#000000";
//static const char col_cyan[]        = "#4fb8cc";
//static const char *colors[][3]      = {
////  /* lightblue-black }}} */
//  /* blue-black {{{ */
static const char col_gray1[]       = "#000000";
static const char col_gray2[]       = "#000000";
static const char col_gray3[]       = "#ffffff";
static const char col_gray4[]       = "#000000";
static const char col_cyan[]        = "#007acc";
static const char col_cyan2[]        = "#0047cc";
static const char *colors[][3]      = {
//  /* blue-black }}} */
////  /* blueandblue {{{ */
//static const char col_gray1[]       = "#000000";
//static const char col_gray2[]       = "#000000";
//static const char col_gray3[]       = "#ffffff";
//static const char col_gray4[]       = "#000000";
//static const char col_cyan[]        = "#88ccdd";
//static const char col_cyan2[]       = "#4fbbcc";
//static const char *colors[][3]      = {
////  /* blue-black }}} */
////  /* pink-black {{{ */
//static const char col_gray1[]       = "#000000";
//static const char col_gray2[]       = "#000000";
//static const char col_gray3[]       = "#ffffff";
//static const char col_gray4[]       = "#000000";
//static const char col_cyan[]        = "#d75f87";
//static const char col_cyan2[]        = "#dd2f87";
//static const char *colors[][3]      = {
////  /* pink-black }}} */
////  /* gray-black {{{ */
//static const char col_gray1[]       = "#000000";
//static const char col_gray2[]       = "#000000";
//static const char col_gray3[]       = "#ffffff";
//static const char col_gray4[]       = "#000000";
//static const char col_cyan[]        = "#767676";
//static const char *colors[][3]      = {
////  /* gray-black }}} */
////  /* b/w {{{ */
//static const char col_gray1[]       = "#000000";
//static const char col_gray2[]       = "#000000";
//static const char col_gray3[]       = "#ffffff";
//static const char col_gray4[]       = "#000000";
//static const char col_cyan[]        = "#ffffff";
//static const char *colors[][3]      = {
////  /* b/w }}} */

//// /* color on forground {{{ */
//	/*               fg         bg         border   */
//	[SchemeNorm] = { col_gray3, col_gray1, col_gray2 },
//	[SchemeSel]  = { col_cyan, col_gray1, col_cyan2 },
//// /* }}} */
// /* color on background {{{ */
	/*               fg         bg         border   */
	[SchemeNorm] = { col_gray3, col_gray1, col_gray2 },
	[SchemeSel]  = { col_gray1, col_cyan,  col_cyan2 },
//	[SchemeStatus]  = { col_gray3, col_gray1,  "#000000"  }, // Statusbar right {text,background,not used but cannot be empty}
//	[SchemeTagsSel]  = { col_gray4, col_cyan,  "#000000"  }, // Tagbar left selected {text,background,not used but cannot be empty}
//    [SchemeTagsNorm]  = { col_gray3, col_gray1,  "#000000"  }, // Tagbar left unselected {text,background,not used but cannot be empty}
//    [SchemeInfoSel]  = { col_gray4, col_cyan,  "#000000"  }, // infobar middle  selected {text,background,not used but cannot be empty}
//    [SchemeInfoNorm]  = { col_gray3, col_gray1,  "#000000"  }, // infobar middle  unselected {text,background,not used but cannot be empty}
// /* }}} */
};

static const char *const autostart[] = {
//	"st", NULL,
//	"sh", "-c", "$HOME/.fehbg", NULL,
	"sh", "-c", "$HOME/bin/xrate.sh", NULL,
	"sh", "-c", "$HOME/.xprofile", NULL,
	"xcompmgr", NULL,
	"slstatus", NULL,
//	"sh", "-c", "xrdb", "$HOME/.Xresources", NULL,
	NULL /* terminate */
};

/* tagging */
//static const char *tags[] = { "", "", "", "", "", "﬐", "", "", "" };
static const char *tags[] = { "1", "2", "3", "4", "5", "6", "7", "8", "9" };
/* 喇
 *    
 */

static const Rule rules[] = {
	/* xprop(1):
	 *	WM_CLASS(STRING) = instance, class
	 *	WM_NAME(STRING) = title
	 */
	/* class          instance    title            tags mask      iscentered   isfloating    monitor */
//	{ "Gimp",         NULL,       NULL,                0,              0,           1,           -1 },
//	{ "Firefox",      NULL,       NULL,           1 << 8,              0,           0,           -1 },
	{ "persepolis",   NULL,   "Persepolis Download Manager",           0,           0,     1,    -1 },
//	{ "Chromium",     NULL,       "Chromium",          0,              0,           0,           -1 },
	{ "Telegram",     NULL,       "Telegram",          0,              0,           1,           -1 },
	{ "sterm",        NULL,           "Term",          0,              1,           1,           -1 },
	{ "st",           NULL,       "Terminal",          0,              1,           1,           -1 },
	{ "st",           NULL,          "Notes",          0,              1,           1,           -1 },
	{ "feh",          NULL,   "feh - scrot preview",   0,              1,           1,           -1 },
};

/* layout(s) */
static const float mfact     = 0.45; /* factor of master area size [0.05..0.95] */
static const int nmaster     = 1;    /* number of clients in master area */
static const int resizehints = 1;    /* 1 means respect size hints in tiled resizals */

static const Layout layouts[] = {
	/* symbol     arrange function */
	{ "[]=",      tile },    /* first entry is default */
	{ "><>",      NULL },    /* no layout function means floating behavior */
	{ "[M]",      monocle },
};

/* key definitions */
#define MODKEY Mod1Mask
#define TAGKEYS(KEY,TAG) \
	{ MODKEY,                       KEY,      view,           {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask,           KEY,      toggleview,     {.ui = 1 << TAG} }, \
	{ MODKEY|ShiftMask,             KEY,      tag,            {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask|ShiftMask, KEY,      toggletag,      {.ui = 1 << TAG} },

/* helper for spawning shell commands in the pre dwm-5.0 fashion */
#define SHCMD(cmd) { .v = (const char*[]){ "/bin/sh", "-c", cmd, NULL } }

/* commands */
static char dmenumon[2] = "0"; /* component of dmenucmd, manipulated in spawn() */
//static const char *dmenucmd[] = { "dmenu_run", "-p", "run", "-hp", "chromium", "-m", dmenumon, "-fn", dmenufont, NULL };
static const char *dmenucmd[]    = { "dmenu_run", "-p", "run", "-hp", "chromium", "-m", dmenumon, "-fn", dmenufont, "-nb", col_gray1, "-nf", col_gray3, "-sb", col_cyan, "-sf", col_gray4, NULL };
static const char *termcmd[]     = { "st", NULL };
// /* custom executable commands */
static const char *scrnlk[]      = { "slock", NULL };
static const char *mltermcmd[]   = { "mlterm", NULL };
static const char *flotercmd[]   = { "st", "-t", "Terminal", NULL};
static const char *browcmd[]     = { "tabbed", "surf", "-e", NULL};
static const char *simpletcmd[]  = { "sterm", NULL };
static const char *regularcmd[]  = { "pterm", NULL };
//static const char *flotercmd[]  = { "st", "-t", "Terminal", NULL};
//static const char *tabbedcmd[]  = { "tabbed", "-r", "2" ,"st", "-w", "''", "-t", "sterm", NULL};
//
//static const char *screenshot[]  = { "sh", "-c", "~/bin/screenshot.sh", NULL};
static const char *shotmenu[]    = { "bash", "-c", "~/bin/dm-shot.sh", NULL};

static const char *exitmenu[]    = { "bash", "-c", "~/bin/dm-exit.sh", NULL};

static const char *notetake[]    = { "st", "-t", "Notes", "-e", "sh", "-c", "~/bin/NoteGroff.sh", NULL};
static const char *noteshow[]    = { "sh", "-c", "~/bin/NoteReadNew.sh", NULL};
static const char *notemenu[]    = { "bash", "-c", "~/bin/dm-Note.sh", NULL};

//static const char *calcurse[]   = { "st", "-t", "Terminal" "-e", "calcurse" , NULL};
// /* custom executable commands */

static Key keys[] = {
	/* modifier                     key        function        argument */
	{ MODKEY,                 XK_p,         spawn,          {.v = dmenucmd } },
	{ MODKEY|ShiftMask,       XK_Return,    spawn,          {.v = termcmd } },
//  /* customized keybindings {{{ */              
	{ MODKEY|ShiftMask,       XK_p,         spawn,          {.v = mltermcmd } },
	{ MODKEY|ShiftMask,       XK_t,         spawn,          {.v = simpletcmd } },
	{ MODKEY|ControlMask,     XK_l,         spawn,          {.v = scrnlk } },
	{ MODKEY,                 XK_w,         spawn,          {.v = browcmd } },
	{ MODKEY,                 XK_x,         spawn,          {.v = flotercmd } },
//	{ MODKEY,                 XK_t,         spawn,          {.v = tabbedcmd } },
	{ MODKEY|ControlMask,     XK_t,         spawn,          {.v = regularcmd } },
//	{ MODKEY,                 XK_Print,     spawn,          {.v = screenshot } },
	{ 0,                      XK_Print,     spawn,          {.v = shotmenu } },
  /* separator */
	{ MODKEY,                 XK_n,         spawn,          {.v = notetake } },
	{ MODKEY|ShiftMask,       XK_n,         spawn,          {.v = noteshow } },
	{ MODKEY|ControlMask,     XK_n,         spawn,          {.v = notemenu } },
  /* separator */
//	{ MODKEY,                 XK_c,         spawn,          {.v = calcurse } },
//  /* customized keybindings }}} */              
	{ MODKEY,                 XK_b,         togglebar,      {0} },
	{ MODKEY,                 XK_j,        focusstack,         {.i = +1 } },
	{ MODKEY,                 XK_k,        focusstack,         {.i = -1 } },
	{ MODKEY,                 XK_h,          focusmon,         {.i = -1 } },
	{ MODKEY,                 XK_l,          focusmon,         {.i = +1 } },
	{ MODKEY|ShiftMask,       XK_h,            tagmon,         {.i = -1 } },
	{ MODKEY|ShiftMask,       XK_l,            tagmon,         {.i = +1 } },
	{ MODKEY,                 XK_comma,      setmfact,       {.f = -0.05} },
	{ MODKEY,                 XK_period,     setmfact,       {.f = +0.05} },
//	{ MODKEY,                 XK_comma,     focusmon,       {.i = -1 } },
//	{ MODKEY,                 XK_period,    focusmon,       {.i = +1 } },
//	{ MODKEY|ShiftMask,       XK_comma,     tagmon,         {.i = -1 } },
//	{ MODKEY|ShiftMask,       XK_period,    tagmon,         {.i = +1 } },
//	{ MODKEY,                 XK_h,         setmfact,       {.f = -0.05} },
//	{ MODKEY,                 XK_l,         setmfact,       {.f = +0.05} },
	{ MODKEY,                 XK_i,         incnmaster,     {.i = +1 } },
	{ MODKEY,                 XK_d,         incnmaster,     {.i = -1 } },
	{ MODKEY,                 XK_Return,    zoom,           {0} },
	{ MODKEY,                 XK_Tab,       view,           {0} },
	{ MODKEY|ShiftMask,       XK_c,         killclient,     {0} },
	{ MODKEY,                 XK_t,         setlayout,      {.v = &layouts[0]} },
	{ MODKEY,                 XK_f,         setlayout,      {.v = &layouts[1]} },
	{ MODKEY,                 XK_m,         setlayout,      {.v = &layouts[2]} },
	{ MODKEY,                 XK_space,     setlayout,      {0} },
	{ MODKEY|ShiftMask,       XK_space,     togglefloating, {0} },
	{ MODKEY,                 XK_0,         view,           {.ui = ~0 } },
	{ MODKEY|ShiftMask,       XK_0,         tag,            {.ui = ~0 } },
	{ MODKEY,                 XK_minus,     setgaps,        {.i = -1 } },
	{ MODKEY,                 XK_equal,     setgaps,        {.i = +1 } },
	{ MODKEY|ShiftMask,       XK_equal,     setgaps,        {.i = 0  } },
	TAGKEYS(                  XK_1,                        0)
	TAGKEYS(                  XK_2,                        1)
	TAGKEYS(                  XK_3,                        2)
	TAGKEYS(                  XK_4,                        3)
	TAGKEYS(                  XK_5,                        4)
	TAGKEYS(                  XK_6,                        5)
	TAGKEYS(                  XK_7,                        6)
	TAGKEYS(                  XK_8,                        7)
	TAGKEYS(                  XK_9,                        8)
//	{ MODKEY|ShiftMask,       XK_q,        quit,           {0} },
	{ MODKEY|ShiftMask,       XK_q,        spawn,           {.v = exitmenu } },
};

/* button definitions */
/* click can be ClkTagBar, ClkLtSymbol, ClkStatusText, ClkWinTitle, ClkClientWin, or ClkRootWin */
static Button buttons[] = {
	/* click                event mask      button          function        argument */
	{ ClkLtSymbol,          0,              Button1,        setlayout,      {0} },
	{ ClkLtSymbol,          0,              Button3,        setlayout,      {.v = &layouts[2]} },
	{ ClkWinTitle,          0,              Button2,        zoom,           {0} },
	{ ClkStatusText,        0,              Button2,        spawn,          {.v = termcmd } },
	{ ClkClientWin,         MODKEY,         Button1,        movemouse,      {0} },
	{ ClkClientWin,         MODKEY,         Button2,        togglefloating, {0} },
	{ ClkClientWin,         MODKEY,         Button3,        resizemouse,    {0} },
	{ ClkTagBar,            0,              Button1,        view,           {0} },
	{ ClkTagBar,            0,              Button3,        toggleview,     {0} },
	{ ClkTagBar,            MODKEY,         Button1,        tag,            {0} },
	{ ClkTagBar,            MODKEY,         Button3,        toggletag,      {0} },
};


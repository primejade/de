/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 1500;                 /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Source Code Pro:size=15"
//	"FiraCode:size=13"
//	"Liberation mono:size=15"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

/* colorscheme */
static const char col_black[]     = "#010101";
static const char col_alert[]     = "#f59554";
static const char col_back[]      = "#9997ff";
static const char col_four[]      = "#0097ff";
//static const char col_back[]      = "#975fd7";
//static const char col_back[]      = "#976f97";
//static const char col_four[]      = "#f32323";

static const char *colors[SchemeLast][2] = {
	/*               fg         bg       */
  [SchemeNorm] = { col_four , col_black },
  [SchemeSel] =  { col_black, col_back  },
  [SchemeOut] =  { col_black, col_alert },

};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
//static unsigned int lines      = 0;
    /* grid */
/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 0;
static unsigned int columns    = 0;
    /* grid */

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
//static const char worddelimiters[] = " ";
static const char worddelimiters[] = " /?\"&[]";

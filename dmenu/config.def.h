/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
//
//default
//	[SchemeNorm] = { "#bbbbbb", "#222222" },
//	[SchemeSel] = { "#eeeeee", "#005577" },
//
//	solarized-dark
//	[SchemeNorm] = { "#839496", "#002b36" },
//	[SchemeSel] = { "#839496", "#073642"},
//
//solarized-light
//	[SchemeNorm] = { "#657b83", "#fdf6e3" },
//	[SchemeSel] = { "#657b83", "#eee8d5"},
//	[SchemeOut] = { "#000000", "#00ffff" },
//
//gruvbox
//	[SchemeNorm] = { "#ebdbb2", "#282828" },
//	[SchemeSel] = { "#ebdbb2", "#98971a" },
//	[SchemeOut] = { "#ebdbb2", "#8ec07c" },
//customized
    [SchemeNorm] = { "#4fb8cc", "#282828" },
    [SchemeSel] = { "#111111", "#fb4943" },
    [SchemeOut] = { "#b277b2", "#ffffff" },
//
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

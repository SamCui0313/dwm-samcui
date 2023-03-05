/* See LICENSE file for copyright and license details. */

/* appearance */
static const unsigned int borderpx  = 3;        /* border pixel of windows */
static const unsigned int snap      = 32;       /* snap pixel */
static const unsigned int systraypinning = 0;   /* 0: sloppy systray follows selected monitor, >0: pin systray to monitor X */
static const unsigned int systrayonleft = 0;   	/* 0: systray in the right corner, >0: systray on left of status text */
static const unsigned int systrayspacing = 2;   /* systray spacing */
static const int systraypinningfailfirst = 1;   /* 1: if pinning fails, display systray on the first monitor, False: display systray on the last monitor*/
static const int showsystray        = 1;     /* 0 means no systray */
static const unsigned int gappih    = 20;       /* horiz inner gap between windows */
static const unsigned int gappiv    = 20;       /* vert inner gap between windows */
static const unsigned int gappoh    = 20;       /* horiz outer gap between windows and screen edge */
static const unsigned int gappov    = 20;       /* vert outer gap between windows and screen edge */
static       int smartgaps          = 1;        /* 1 means no outer gap when there is only one window */
static const int showbar            = 1;        /* 0 means no bar */
static const int topbar             = 1;        /* 0 means bottom bar */
static const char *fonts[]          = { 
    "Monaco:size=10", 
    "HarmonyOS Sans SC:size=10", 
    "JoyPixels:pixelsize=28", 
    "Tinos Nerd Font:pixelsize=30"
};
static const char dmenufont[]       = "cascadia code:size=13";
static const char col_nordfg[]        = "#FFFFFF";
static const char col_nordbg[]        = "#1e1e3f";
/* static const char col_nordbg[]        = "#3c3836"; */
/* static const char col_nordbg[]        = "#3b4252"; */
static const char col_nordborder[]    = "#D8DEE9";
static const char col_nordfgSel[]     = "#FFFF00";
static const char col_nordbgSel[]     = "#88C0D0";
//static const char col_nordbgborderSel[]  = "#87FE01";
static const char col_nordbgborderSel[]  = "#005577";
//static const char col_nordbgborderSel[]  = "#87FE01";
static const char col1[]            = "#005577";
static const char col2[]            = "#87fe01";
static const char col3[]            = "#fad000";
static const char col4[]            = "#ff5733";
static const char col5[]            = "#daf7a6";
static const char col6[]            = "#900c3f";

enum { SchemeNorm, SchemeCol1, SchemeCol2, SchemeCol3, SchemeCol4,
       SchemeCol5, SchemeCol6, SchemeSel, SchemeStatus, SchemeTagsSel, 
       SchemeTagsNorm, SchemeInfoSel, SchemeInfoNorm }; /* color schemes */



static const char *colors[][3]      = {
	/*               fg         bg         border   */
	[SchemeNorm] = { "#a599e9", "#1e1e3f", "#000000" },
	[SchemeCol1]  = { col1,      col_nordbg, col_nordborder },
	[SchemeCol2]  = { col2,      col_nordbg, col_nordborder },
	[SchemeCol3]  = { col3,      col_nordbg, col_nordborder },
	[SchemeCol4]  = { col4,      col_nordbg, col_nordborder },
	[SchemeCol5]  = { col5,      col_nordbg, col_nordborder },
	[SchemeCol6]  = { col6,      col_nordbg, col_nordborder },
	[SchemeSel]  = { col_nordfgSel, col_nordbgSel,  "#c70039"  },
	[SchemeStatus]  = { "#000000", "#1e1e3f",  "#000000"  }, // Statusbar right {text,background,not used but cannot be empty}
	[SchemeTagsSel]  = { "#1e1e3f", "#a599e9",  "#000000"  }, // Tagbar left selected {text,background,not used but cannot be empty}
    [SchemeTagsNorm]  = { "#d2ffc7", "#2d2b55",  "#87fe01"  }, // Tagbar left unselected {text,background,not used but cannot be empty}
    [SchemeInfoSel]  = { "#000000", "#28284e",  "#000000"  }, // infobar middle  selected {text,background,not used but cannot be empty}
    [SchemeInfoNorm]  = { "#000000", "#28284e",  "#000000"  }, // infobar middle  unselected {text,background,not used but cannot be empty}


    // gruvbox material
	/* [SchemeNorm] = { "#a89984", col_nordbg, "#000000" }, */
	/* [SchemeSel]  = { col_nordfgSel, col_nordbgSel,  "#c70039"  }, */
	/* [SchemeStatus]  = { "#000000", "#3c3836",  "#000000"  }, // Statusbar right {text,background,not used but cannot be empty} */
	/* [SchemeTagsSel]  = { "#432f3a", "#a89984",  "#000000"  }, // Tagbar left selected {text,background,not used but cannot be empty} */
    /* [SchemeTagsNorm]  = { "#ebdbb2", "#504945",  "#87fe01"  }, // Tagbar left unselected {text,background,not used but cannot be empty} */
    /* [SchemeInfoSel]  = { "#000000", "#3c3836",  "#000000"  }, // infobar middle  selected {text,background,not used but cannot be empty} */
    /* [SchemeInfoNorm]  = { "#000000", "#3c3836",  "#000000"  }, // infobar middle  unselected {text,background,not used but cannot be empty} */

    // nord
	/* [SchemeNorm] = { "#a89984", "#3b4252", "#000000" }, */
	/* [SchemeStatus]  = { "#000000", "#4c566a",  "#000000"  }, // Statusbar right {text,background,not used but cannot be empty} */
	/* [SchemeTagsSel]  = { "#3b4252 "#88c0d0",  "#000000"  }, // Tagbar left selected {text,background,not used but cannot be empty} */
    /* [SchemeTagsNorm]  = { "#d3d8e0", "#3b4252",  "#87fe01"  }, // Tagbar left unselected {text,background,not used but cannot be empty} */
    /* [SchemeInfoSel]  = { "#000000", "#4c566a",  "#000000"  }, // infobar middle  selected {text,background,not used but cannot be empty} */
    /* [SchemeInfoNorm]  = { "#000000", "#4c566a",  "#000000"  }, // infobar middle  unselected {text,background,not used but cannot be empty} */

    // shades of purple
	/* [SchemeNorm] = { "#a599e9", "#1e1e3f", "#000000" }, */
	/* [SchemeStatus]  = { "#a599e9", "#1e1e3f",  "#000000"  }, // Statusbar right {text,background,not used but cannot be empty} */
	/* [SchemeTagsSel]  = { "#fad000", "#000000",  "#000000"  }, // Tagbar left selected {text,background,not used but cannot be empty} */
    /* [SchemeTagsNorm]  = { "#d2ffc7", "#2d2b55",  "#000000"  }, // Tagbar left unselected {text,background,not used but cannot be empty} */
    /* [SchemeInfoSel]  = { "#1e1e3f", "#a599e9",  "#000000"  }, // infobar middle  selected {text,background,not used but cannot be empty} */
    /* [SchemeInfoNorm]  = { "#1e1e3f", "#a599e9",  "#000000"  }, // infobar middle  unselected {text,background,not used but cannot be empty} */
};


static const char *const autostart[] = {
	"st", NULL,
	"picom", NULL,
	"nm-applet", NULL,
	"dwmblocks", NULL,
	"sh", "-c", "neofetch", NULL,
    "sh", "-c", "fcitx5", NULL,
    "sh", "-c", "flameshot", NULL,
    "sh", "-c", "feh --randomize --bg-fill ~/Pictures/background/b.jpeg", NULL,
	NULL /* terminate */
};

/* tagging */
static const char *tags[] = { "😅₁", "🦋₂", "🎹₃", "🔯₄", "💕₅", "🕍₆", "😷₇", "♻₈", "☂₉" };
/* static const char *tags[] = { "₁", "₂", "₃", "₄", "₅", "₆", "₇", "🛦₈", "₉" }; */
static const char *tags_indicator[] = {"🎸", "⚬"};//•⚬😅😂😂😂😂😂
/* static const char *tags_indicator[] = {"", "⚬"};//•⚬😅😂😂😂😂😂 */


static const Rule rules[] = {
	/* xprop(1):
	 *	WM_CLASS(STRING) = instance, class
	 *	WM_NAME(STRING) = title
	 */
	/* class      instance    title       tags mask     isfloating   monitor */
	{ "Gimp",     NULL,       NULL,       0,            1,           -1 },
	{ "Firefox",  NULL,       NULL,       1 << 8,       0,           -1 },
};

/* layout(s) */
static const float mfact     = 0.55; /* factor of master area size [0.05..0.95] */
static const int nmaster     = 1;    /* number of clients in master area */
static const int resizehints = 0;    /* 1 means respect size hints in tiled resizals */

#define FORCE_VSPLIT 1  /* nrowgrid layout: force two clients to always split vertically */
#include "vanitygaps.c"

// static const Layout layouts[] = {
// 	/* symbol     arrange function */
// 	{ "",      tile },    /* first entry is default */
// 	{ "TTT",      bstack },
// 	{ "[@]",      spiral },
// 	{ "[\\]",     dwindle },
// 	{ "H[]",      deck },
// 	{ "(M)",    monocle },
// 	{ "|M|",      centeredmaster },
// 	{ ">M>",      centeredfloatingmaster },
// 	{ "",      NULL },    /* no layout function means floating behavior */
// 	{ "===",      bstackhoriz },
// 	{ "HHH",      grid },
// 	{ "###",      nrowgrid },
// 	{ "---",      horizgrid },
// 	{ ":::",      gaplessgrid },
// 	{ NULL,       NULL },
// };

static const Layout layouts[] = {
	/* symbol     arrange function */
	{ "[\\]",     dwindle },
	{ "",      tile },    /* first entry is default */
	{ "TTT",      bstack },
	{ "[@]",      spiral },

	{ "H[]",      deck },
	{ "(M)",    monocle },
	{ "|M|",      centeredmaster },
	{ ">M>",      centeredfloatingmaster },
	{ "",      NULL },    /* no layout function means floating behavior */
	{ "===",      bstackhoriz },
	{ "HHH",      grid },
	{ "###",      nrowgrid },
	{ "---",      horizgrid },
	{ ":::",      gaplessgrid },
	{ NULL,       NULL },
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
static const char *dmenucmd[] = { "dmenu_run", "-m", dmenumon, "-fn", dmenufont, "-nb", col_nordbg, "-nf", col_nordfg, "-sb", col_nordbgSel, "-sf", col_nordfgSel, NULL };

static const char *termcmd[]  = { "st", NULL };
static const char *chromecmd[]  = { "google-chrome-stable", NULL };
static const char *disableTouchpad[] = { "/home/hanzi/proj/scripts/disabletouchpad.sh", NULL};
static const char *enableTouchpad[] = { "/home/hanzi/proj/scripts/enabletouchpad.sh", NULL};
static const char *disableATkeyboard[] = { "/home/hanzi/proj/scripts/disableATkeyboard.sh", NULL};
static const char *enableATkeyboard[] = { "/home/hanzi/proj/scripts/enableATkeyboard.sh", NULL};
static const char *screenshot[] = { "/home/hanzi/proj/scripts/screenshot.sh", NULL};
static const char *rofi[] = { "rofi", "-combi-modi", "window,drun,ssh,run", "-show", "combi", NULL};

static const char *volumetoggle[] = { "/home/hanzi/proj/scripts/volume_toggle.sh", NULL};
static const char *volumeincrease[] = { "/home/hanzi/proj/scripts/volume_increase.sh", NULL};
static const char *volumedecrease[] = { "/home/hanzi/proj/scripts/volume_decrease.sh", NULL};

static const char *lockscreen[] = { "slock", NULL};



static Key keys[] = {
	/* modifier                     key        function        argument */
	{ MODKEY,                       XK_p,      spawn,          {.v = dmenucmd } },
	{ MODKEY|ShiftMask,             XK_Return, spawn,          {.v = termcmd } },
	{ MODKEY|ShiftMask,             XK_g,      spawn,          {.v = chromecmd } },
	{ MODKEY,               XK_bracketleft,    spawn,          {.v = disableTouchpad } },
	{ MODKEY,               XK_bracketright,   spawn,          {.v = enableTouchpad } },
	{ Mod4Mask,             XK_bracketleft,    spawn,          {.v = disableATkeyboard } },
	{ Mod4Mask,             XK_bracketright,   spawn,          {.v = enableATkeyboard } },
	{ MODKEY,               XK_backslash,      spawn,          {.v = screenshot } },
	{ 0,             	        0x1008ff12,    spawn,          {.v = volumetoggle } },// F1
	{ 0,             	        0x1008ff11,    spawn,          {.v = volumedecrease } },// F2
	{ 0,             	        0x1008ff13,    spawn,          {.v = volumeincrease } },// F3
	{ ControlMask|ShiftMask,        XK_l,      spawn,          {.v = lockscreen } },// lockscreen
	{ MODKEY,                       XK_b,      togglebar,      {0} },
	{ MODKEY,                       XK_j,      focusstack,     {.i = +1 } },
	{ MODKEY,                       XK_k,      focusstack,     {.i = -1 } },
	{ MODKEY,                       XK_s,      incnmaster,     {.i = +1 } },
	{ MODKEY,                       XK_d,      incnmaster,     {.i = -1 } },
	{ MODKEY,                       XK_h,      setmfact,       {.f = -0.05} },
	{ MODKEY,                       XK_l,      setmfact,       {.f = +0.05} },
	{ MODKEY,                       XK_Return, zoom,           {0} },
	{ MODKEY|Mod4Mask,              XK_u,      incrgaps,       {.i = +1 } },
	{ MODKEY|Mod4Mask|ShiftMask,    XK_u,      incrgaps,       {.i = -1 } },
	{ MODKEY|Mod4Mask,              XK_i,      incrigaps,      {.i = +1 } },
	{ MODKEY|Mod4Mask|ShiftMask,    XK_i,      incrigaps,      {.i = -1 } },
	{ MODKEY|Mod4Mask,              XK_o,      incrogaps,      {.i = +1 } },
	{ MODKEY|Mod4Mask|ShiftMask,    XK_o,      incrogaps,      {.i = -1 } },
	{ MODKEY|Mod4Mask,              XK_6,      incrihgaps,     {.i = +1 } },
	{ MODKEY|Mod4Mask|ShiftMask,    XK_6,      incrihgaps,     {.i = -1 } },
	{ MODKEY|Mod4Mask,              XK_7,      incrivgaps,     {.i = +1 } },
	{ MODKEY|Mod4Mask|ShiftMask,    XK_7,      incrivgaps,     {.i = -1 } },
	{ MODKEY|Mod4Mask,              XK_8,      incrohgaps,     {.i = +1 } },
	{ MODKEY|Mod4Mask|ShiftMask,    XK_8,      incrohgaps,     {.i = -1 } },
	{ MODKEY|Mod4Mask,              XK_9,      incrovgaps,     {.i = +1 } },
	{ MODKEY|Mod4Mask|ShiftMask,    XK_9,      incrovgaps,     {.i = -1 } },
	{ MODKEY|Mod4Mask,              XK_0,      togglegaps,     {0} },
	{ MODKEY|Mod4Mask|ShiftMask,    XK_0,      defaultgaps,    {0} },
	{ MODKEY,                       XK_Tab,    view,           {0} },
	{ MODKEY|ShiftMask,             XK_c,      killclient,     {0} },
	{ MODKEY,                       XK_t,      setlayout,      {.v = &layouts[0]} },
	{ MODKEY|ShiftMask,             XK_t,      setlayout,      {.v = &layouts[1]} },
	{ MODKEY,                       XK_y,      setlayout,      {.v = &layouts[2]} },
	{ MODKEY|ShiftMask,             XK_y,      setlayout,      {.v = &layouts[3]} },
	{ MODKEY,                       XK_u,      setlayout,      {.v = &layouts[4]} },
	{ MODKEY|ShiftMask,             XK_u,      setlayout,      {.v = &layouts[5]} },
	{ MODKEY,                       XK_i,      setlayout,      {.v = &layouts[6]} },
	{ MODKEY|ShiftMask,             XK_i,      setlayout,      {.v = &layouts[7]} },
	{ MODKEY|ShiftMask,             XK_f,      fullscreen,     {0} },
	{ MODKEY,                       XK_space,  setlayout,      {0} },
	{ MODKEY|ShiftMask,             XK_space,  togglefloating, {0} },
	{ MODKEY,                       XK_0,      view,           {.ui = ~0 } },
	{ MODKEY|ShiftMask,             XK_0,      tag,            {.ui = ~0 } },
	{ MODKEY,                       XK_comma,  focusmon,       {.i = -1 } },
	{ MODKEY,                       XK_period, focusmon,       {.i = +1 } },
	{ MODKEY|ShiftMask,             XK_comma,  tagmon,         {.i = -1 } },
	{ MODKEY|ShiftMask,             XK_period, tagmon,         {.i = +1 } },
	{ MODKEY,                       XK_e,      viewtoleft,     {0} },
	{ MODKEY,                       XK_r,      viewtoright,    {0} },
	{ MODKEY|ShiftMask,             XK_e,      tagtoleft,      {0} },
	{ MODKEY|ShiftMask,             XK_r,      tagtoright,     {0} },
	TAGKEYS(                        XK_1,                      0)
	TAGKEYS(                        XK_2,                      1)
	TAGKEYS(                        XK_3,                      2)
	TAGKEYS(                        XK_4,                      3)
	TAGKEYS(                        XK_5,                      4)
	TAGKEYS(                        XK_6,                      5)
	TAGKEYS(                        XK_7,                      6)
	TAGKEYS(                        XK_8,                      7)
	TAGKEYS(                        XK_9,                      8)
	{ MODKEY|ShiftMask,             XK_v,      quit,           {0} },
};

/* button definitions */
/* click can be ClkTagBar, ClkLtSymbol, ClkStatusText, ClkWinTitle, ClkClientWin, or ClkRootWin */
static Button buttons[] = {
	/* click                event mask      button          function        argument */
	{ ClkLtSymbol,          0,              Button1,        setlayout,      {0} },
	{ ClkLtSymbol,          0,              Button3,        setlayout,      {.v = &layouts[2]} },
	{ ClkStatusText,        0,              Button1,        sigdwmblocks,   {.i = 1} },
	{ ClkStatusText,        0,              Button2,        sigdwmblocks,   {.i = 2} },
	{ ClkStatusText,        0,              Button3,        sigdwmblocks,   {.i = 3} },
	{ ClkClientWin,         MODKEY,         Button1,        movemouse,      {0} },
	{ ClkClientWin,         MODKEY,         Button2,        togglefloating, {0} },
	{ ClkClientWin,         MODKEY,         Button3,        resizemouse,    {0} },
	{ ClkTagBar,            0,              Button1,        view,           {0} },
	{ ClkTagBar,            0,              Button3,        toggleview,     {0} },
	{ ClkTagBar,            MODKEY,         Button1,        tag,            {0} },
	{ ClkTagBar,            MODKEY,         Button3,        toggletag,      {0} },
};


static const char *ipcsockpath = "/tmp/dwm.sock";
static IPCCommand ipccommands[] = {
  IPCCOMMAND(  view,                1,      {ARG_TYPE_UINT}   ),
  IPCCOMMAND(  toggleview,          1,      {ARG_TYPE_UINT}   ),
  IPCCOMMAND(  tag,                 1,      {ARG_TYPE_UINT}   ),
  IPCCOMMAND(  toggletag,           1,      {ARG_TYPE_UINT}   ),
  IPCCOMMAND(  tagmon,              1,      {ARG_TYPE_UINT}   ),
  IPCCOMMAND(  focusmon,            1,      {ARG_TYPE_SINT}   ),
  IPCCOMMAND(  focusstack,          1,      {ARG_TYPE_SINT}   ),
  IPCCOMMAND(  zoom,                1,      {ARG_TYPE_NONE}   ),
  IPCCOMMAND(  incnmaster,          1,      {ARG_TYPE_SINT}   ),
  IPCCOMMAND(  killclient,          1,      {ARG_TYPE_SINT}   ),
  IPCCOMMAND(  togglefloating,      1,      {ARG_TYPE_NONE}   ),
  IPCCOMMAND(  setmfact,            1,      {ARG_TYPE_FLOAT}  ),
  IPCCOMMAND(  setlayoutsafe,       1,      {ARG_TYPE_PTR}    ),
  IPCCOMMAND(  quit,                1,      {ARG_TYPE_NONE}   )
};


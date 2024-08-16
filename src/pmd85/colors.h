#ifndef PMD_COLORS_H
#define PMD_COLORS_H

#include <conio.h>
#include "screen_util.h"

// Text colors and Fill patterns

#if !defined(PMD_COLOR_MONO) && !defined(PMD_COLOR_RGBM) && !defined(PMD_COLOR_ACE)
// default color mode
#define PMD_COLOR_ACE
#endif

/* -----------------------  MONO ----------------------- */
// For mono output:
// - green = full bright
// - red = half bright
// - blue = blinking full bright
// - magenta = blinking half bright

#ifdef PMD_COLOR_MONO
#define BACKGROUND_COLOR	BLACK
#define BACKGROUND_PATTERN	PATTERN_BLANK

#define TEXT_COLOR          GREEN
#define MENU_ITEM_COLOR     GREEN
#define MENU_HOTKEY_COLOR   RED
#define ERROR_COLOR         BLUE
#define PATH_COLOR          GREEN
#define FILTER_COLOR        RED

#define TITLE1_COLOR        GREEN
#define TITLE2_COLOR        RED
#define TITLE3_COLOR        GREEN
#define TITLE4_COLOR        RED

#define LIST_COLOR			GREEN
#define LIST_PATTERN		PATTERN_BLANK
#define LIST_TITLE_COLOR	GREEN
#define LIST_TITLE_PATTERN  PATTERN_BLANK
#define LIST_VBAR_COLOR		RED
#define LIST_VBAR_PATTERN	ACE_RED

#define BAR_PATTERN_ON  	PATTERN_REVERSE
#define BAR_PATTERN_OFF     PATTERN_REVERSE

#define EDITLINE_COLOR		RED
#define EDITLINE_PATTERN_ON	 (MASK_KEEP_BITMAP | ACE_RED)
#define EDITLINE_PATTERN_OFF (MASK_KEEP_BITMAP | ACE_GREEN)

#define CURSOR_COLOR		BLUE
#define CURSOR_PATTERN_ON   (MASK_KEEP_BITMAP | 0x3E3E | ACE_BLUE)
#define CURSOR_PATTERN_OFF  (MASK_KEEP_BITMAP | 0x3E3E | ACE_BLUE)

#define STATUSBAR_COLOR     GREEN
#define STATUSBAR_PATTERN   PATTERN_BLANK
#endif // PMD_COLOR_MONO


/* -----------------------  RGBM ----------------------- */
#ifdef PMD_COLOR_RGBM
#define BACKGROUND_COLOR	BLACK
//#define BACKGROUND_PATTERN	(PATTERN_SOLID | ACE_BLUE)
//#define BACKGROUND_PATTERN	(PATTERN_CHESSBOARD | ACE_BLUE)
#define BACKGROUND_PATTERN	PATTERN_BLANK

#define TEXT_COLOR          GREEN
#define MENU_ITEM_COLOR     GREEN
#define MENU_HOTKEY_COLOR   RED
#define ERROR_COLOR         RED
#define PATH_COLOR          GREEN
#define FILTER_COLOR        BLUE

#define TITLE1_COLOR        GREEN
#define TITLE2_COLOR        BLUE
#define TITLE3_COLOR        MAGENTA
#define TITLE4_COLOR        BLUE

#define LIST_COLOR			GREEN
#define LIST_PATTERN		ACE_BLUE
#define LIST_TITLE_COLOR	MAGENTA
#define LIST_TITLE_PATTERN  PATTERN_BLANK
#define LIST_VBAR_COLOR		BLUE
#define LIST_VBAR_PATTERN	ACE_BLUE

#define BAR_PATTERN_ON  	PATTERN_REVERSE
#define BAR_PATTERN_OFF     PATTERN_REVERSE

#define EDITLINE_COLOR		MAGENTA
#define EDITLINE_PATTERN_ON	 (MASK_KEEP_BITMAP | ACE_MAGENTA)
#define EDITLINE_PATTERN_OFF (MASK_KEEP_BITMAP | ACE_GREEN)

#define CURSOR_COLOR		GREEN
#define CURSOR_PATTERN_ON   (MASK_KEEP_BITMAP | 0x3E3E | ACE_GREEN)
#define CURSOR_PATTERN_OFF  (MASK_KEEP_BITMAP | 0x3E3E | ACE_GREEN)

#define STATUSBAR_COLOR     GREEN
#define STATUSBAR_PATTERN   PATTERN_BLANK
#endif // PMD_COLOR_RGBM

/* -----------------------  ACE  ----------------------- */
#ifdef PMD_COLOR_ACE
#define BACKGROUND_COLOR	BLUE
//#define BACKGROUND_PATTERN	(PATTERN_SOLID | ACE_BLUE)
//#define BACKGROUND_PATTERN	(PATTERN_CHESSBOARD | ACE_BLUE)
#define BACKGROUND_PATTERN	(PATTERN_BLANK | ACE_BLUE)

#define TEXT_COLOR          WHITE
#define MENU_ITEM_COLOR     WHITE
#define MENU_HOTKEY_COLOR   RED
#define ERROR_COLOR         MAGENTA
#define PATH_COLOR          GREEN
#define FILTER_COLOR        BLUE

#define TITLE1_COLOR        WHITE
#define TITLE2_COLOR        BLUE
#define TITLE3_COLOR        MAGENTA
#define TITLE4_COLOR        BLUE

#define LIST_COLOR			WHITE
#define LIST_PATTERN		ACE_BLUE
#define LIST_TITLE_COLOR	YELLOW
#define LIST_TITLE_PATTERN  PATTERN_BLANK
#define LIST_VBAR_COLOR		CYAN
#define LIST_VBAR_PATTERN	ACE_CYAN

#define BAR_PATTERN_ON  	(PATTERN_REVERSE | ACE_CYAN)
#define BAR_PATTERN_OFF     (PATTERN_REVERSE | ACE_WHITE)

#define EDITLINE_COLOR		GREEN
#define EDITLINE_PATTERN_ON	 (MASK_KEEP_BITMAP | ACE_GREEN)
#define EDITLINE_PATTERN_OFF (MASK_KEEP_BITMAP | ACE_WHITE)

#define CURSOR_COLOR		WHITE
#define CURSOR_PATTERN_ON   (MASK_KEEP_BITMAP | 0x3E3E | ACE_WHITE)
#define CURSOR_PATTERN_OFF  (MASK_KEEP_BITMAP | 0x3E3E | ACE_WHITE)

#define STATUSBAR_COLOR     WHITE
#define STATUSBAR_PATTERN   PATTERN_BLANK
#endif // PMD_COLOR_ACE

#endif // PMD_COLORS_H
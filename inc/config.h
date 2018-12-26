#ifndef _tui_config_h_
#define _tui_config_h_

// Configuration parameters
#define TUI_USE_NAMESPACE

// Configuration for screen and color mode
#define TUI_BLACK_AND_WHITE // 1bpp
//#define TUI_MONOCHROME // 8bbp
//#define TUI_RGBA_32 // 8 bits per color, 8bits alpha

// TUI is implemented such that 1 is bright & 0 is dark.
// This setting allows it to be inverted
#define TUI_INVERT_COLORS

// Namespace opening and closing defines
#ifdef TUI_USE_NAMESPACE
    #define TUI_NAMESPACE_BEGIN namespace tui {
    #define TUI_NAMESPACE_END }
#else
    #define TUI_NAMESPACE_BEGIN
    #define TUI_NAMESPACE_END
#endif

#ifdef TUI_BLACK_AND_WHITE
    typedef color_type unsigned char
#elseif TUI_MONOCHROME

#endif // _tui_config_h_
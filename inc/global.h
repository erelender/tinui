#ifndef _tui_global_h_
#define _tui_global_h_

#include "tui/config.h"

// Namespace opening and closing defines
#ifdef TUI_USE_NAMESPACE
    #define TUI_NAMESPACE_BEGIN namespace tui {
    #define TUI_NAMESPACE_END }
#else
    #define TUI_NAMESPACE_BEGIN
    #define TUI_NAMESPACE_END
#endif

#endif // _tui_global_h_
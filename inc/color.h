#ifndef _tui_color_h_
#define _tui_color_h_

#include "tui/global.h"

TUI_NAMESPACE_BEGIN

#ifdef TUI_BLACK_AND_WHITE
    typedef color unsigned char;

    const color black;
    const color white;
#elif TUI_MONOCHROME
    typedef color unsigned char;

    const color black;
    const color gray1;
    const color gray2;
    const color gray3;
    const color gray4;
    const color gray5;
    const color white;
#elif TUI_RGBA_32

typedef color_component unsigned char;

class color
{
public:
    color();
    color(color_component _red, color_component _green, color_component _blue);
    color(color_component _red, color_component _green, color_component _blue, color_component alpha);

    color_component red = 0x00;
    color_component green = 0x00;
    color_component blue = 0x00;
    color_component alpha = 0x00;
};

#endif

TUI_NAMESPACE_END

#endif // _tui_color_h_

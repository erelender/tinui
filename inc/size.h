#ifndef _tui_size_h_
#define _tui_size_h_

#include "tui/global.h"
#include "tui/vec2.h"

TUI_NAMESPACE_BEGIN

class size: public vec2<int>
{
public:
    size()
    : vec2(0, 0)
    {
    }

    size(int _width, int _height)
    : vec2(_width, _height)
    {
    }

    int& width = mA;
    int& height = mB;
};

TUI_NAMESPACE_END

#endif // _tui_size_h_
